#include <stdio.h>
#include "csv.h"

#define MAX_SPALTEN 5 

void feld_erkannt ( void* s , size_t len , void* daten )
{
	printf ( "%-*.*s | " , ( int ) len , ( int ) len , ( char* ) s ) ;
}


void zeilen_ende ( int c ,void* daten )
{
	printf ( "\n" ) ;
}


int main (int argc , char *argv[])
{
	if ( argc < 2 )
	{
		printf ( "Bitte Datei mit übergeben!\n" ) ;
		return 1;
	}
	char *dateiname = argv[1] ;
	FILE* csv_datei = fopen ( dateiname , "r" ) ;
	if ( !csv_datei ) 
	{
		printf ( "Fehler beim Öffnen der Datei!\n" ) ;
		return 1 ;
	}
	char buffer [1024] ;
	size_t bytes_read ;
	struct csv_parser parser ;
	csv_init( &parser , CSV_APPEND_NULL ) ;

	csv_set_space_func ( &parser , NULL ) ;
	csv_set_term_func ( &parser , NULL ) ;

	while ( ( bytes_read = fread( buffer , 1 , 1024 , csv_datei ) ) > 0 )
	{	
		csv_parse ( &parser , buffer , bytes_read , feld_erkannt , zeilen_ende , NULL ) ;
	}

	csv_fini ( &parser , feld_erkannt , zeilen_ende , NULL ) ;
	csv_free( &parser ) ;

	fclose ( csv_datei ) ;

	return 0 ;
}
