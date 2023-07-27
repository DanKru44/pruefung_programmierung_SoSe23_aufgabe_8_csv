# Prüfung SoSe 2023 Aufgabe 8
In diesem Repo befindet sich die Bearbeitung der Aufgabe 8 aus der Modulprüfung des Moduls Programmierung.

In diesem Repo soll eine .csv-Datei mit beliebigem Inhalt erstellt werden. Diese soll dann in einem C-Programm mit Hilfe der library libcsv eingelesen und in einem beliebigen Format in das Terminal geprintet werden.

## Kompilation
Das Programm kann einfach mit einem beliebigen Compiler kompiliert werden. Ich hab hierfür gcc genutzt. Bei der Kompilation muss allerdings noch das objectfile libcsv.o mit übergeben werden.

Beispiel:
```
gcc main.c -o main.elf libcsv.o
```

## Ausführung 
Das Programm kann einfach mit dem Befehl zum ausführen von Programmen gestartet werden. 

Beispiel für Ubuntu/WSL:
```
./main.elf
```
