# Prüfung SoSe 2023 Aufgabe 8
In diesem Repo befindet sich die Bearbeitung der Aufgabe 8 aus der Modulprüfung des Moduls Programmierung.

In diesem Repo soll eine .csv-Datei mit beliebigem Inhalt erstellt werden. Diese soll dann in einem C-Programm mit Hilfe der library libcsv eingelesen und in einem beliebigen Format in das Terminal geprintet werden.

## Kompilation
Das Programm kann einfach mit einem beliebigen Compiler kompiliert werden. Ich hab hierfür gcc genutzt.

**Wichtig: Die library [libcsv](https://github.com/rgamble/libcsv/tree/master) muss auf dem System installiert sein, sonst kann das Programm nicht kompiliert werden!**

Beispiel:
```
gcc main.c -o main.elf
```

## Ausführung 
Das Programm kann einfach mit dem Befehl zum ausführen von Programmen gestartet werden. 

Beispiel für Ubuntu/WSL:
```
./main.elf
```
