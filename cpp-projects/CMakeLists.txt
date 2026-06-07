cmake_minimum_required(VERSION 3.20)
project(VocationalTrainingCppProjects)
set(CMAKE_CXX_STANDARD 17)

# C++ Projects
# Project 1: Angebotskalkulation
add_executable(Angebotskalkulation
        "First Year/Angebotskalkulation/Angebotskalkulation.cpp"
        "First Year/Angebotskalkulation/Eingaben.cpp"
        "First Year/Angebotskalkulation/Kalkulation.cpp"
)

# Project 2: Array
add_executable(Array "First Year/Array/ArrayAufgabeOmar.cpp")

# Project 3: BankFunktionen

# Project 4: BerechnungenFunktionen
add_executable(BerechnungenFunktionen "First Year/BerechnungenFunktionen/BerechnungenFunktionen.cpp")

# Project 5: BubbleSort
add_executable(BubbleSort "First Year/BubbleSort/BubbleSort.cpp")

# Project 6: DatumWochen

# Project 7: Eingabenlesen
add_executable(Eingabenlesen "First Year/Eingabenlesen/Eingabenlesen.cpp")

# Project 8: Forschleife
add_executable(Forschleife "First Year/Forschleife/Forschleife.cpp")

# Project 9: Fracht
add_executable(Fracht "First Year/Fracht/Fracht.cpp")

# Project 10: Funktionen
add_executable(Funktionen "First Year/Funktionen/Funktionen.cpp")

# Project 11: Gehalt
add_executable(Gehalt "First Year/Gehalt/AufgabeGehalt.cpp")

# Project 12: Listenpreis

# Project 13: Matrizen

# Project 14: OffeneSchleife
add_executable(OffeneSchleife_Lottospieler "First Year/OffeneSchleife/Lottospieler.cpp")
add_executable(OffeneSchleife_Million "First Year/OffeneSchleife/Million.cpp")
add_executable(OffeneSchleife_QuersummeRechner "First Year/OffeneSchleife/Quersumme.cpp")
add_executable(OffeneSchleife_Rechner "First Year/OffeneSchleife/Rechner.cpp")

# Project 15: QuickSort

# Project 16: ReiseKosten
add_executable(ReiseKosten "First Year/Reisekosten/Reisekosten.cpp")

# Project 17: RekursiveFunktionen
add_executable(RekursiveFunktionen "First Year/RekursiveFunktionen/RekursiveFunktionen.cpp")

# Project 18: RekursiveFunktionen-Teil-2

# Project 19: Schachbrett

# Project 20: SchaltjahrDatum
add_executable(SchaltjahrDatum "First Year/SchaltjahrDatum/SchaltjahrDatum.cpp")

# Project 21: TannenBaum
add_executable(TannenBaum "First Year/Tannenbaum/Tannenbaum.cpp")

# Project 22: Umsatzzuwachstum
add_executable(Umsatzzuwachstum_Umsatzzuwachstum "First Year/Umsatzzuwachstum/Umsatzzuwachstum.cpp")
add_executable(Umsatzzuwachstum_Versicherungsvertreter "First Year/Umsatzzuwachstum/Versicherungsvertreter.cpp")

# Project 23: Wetter
add_executable(Wetter "First Year/Wetter/Wetter.cpp")

# Project 24: Zeichnenkette
add_executable(Zeichnenkette "First Year/Zeichnenkette/ZeichnenKette.cpp")

# Project 25: Zinseszins
add_executable(zinseszins "First Year/Zinseszins/Zinseszins.cpp")

# Klausuren
add_executable(ErsteKlausur "First Year/Klausuren/Erste Klausur/ersteKlausur.cpp")
add_executable(ErsteKlausurLoesung "First Year/Klausuren/Erste Klausur/ersteKlausurLoesung.cpp")
add_executable(ZweiteKlausur "First Year/Klausuren/Zweite Klausur/zweiteKlausur.cpp")
add_executable(ZweiteKlausurLoesung "First Year/Klausuren/Zweite Klausur/zweiteKlausurLoesung.cpp")
add_executable(ZweiteKlausur_SummeRekursion "First Year/Klausuren/Zweite Klausur/SummeRekursion.cpp")
add_executable(ZweiteKlausur_QuersummeRekursion
        "First Year/Klausuren/Zweite Klausur/QuersummeRekursion.cpp"
        "First Year/Klausuren/Zweite Klausur/Quersumme.cpp"
)
add_executable(ZweiteKlausur_QuersummeRekursionLoesung
        "First Year/Klausuren/Zweite Klausur/QuersummeRekursionLoesung.cpp"
        "First Year/Klausuren/Zweite Klausur/QuersummeLoesung.cpp"
)