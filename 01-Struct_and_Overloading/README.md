VecF – Vettore di float in C++

Classe VecF per un vettore di float con memoria dinamica e overloading degli operatori. Esercizio del corso di Robot Programming (Sapienza).

Compilazione ed esecuzione
bash
g++ -Wall -g -o vecf main.cpp vecF.cpp
./vecf
Funzionalità
Costruttori, costruttore di copia, distruttore e operator= con deep copy (rule of three)
get(i) e set(i, f) per leggere e scrivere gli elementi
a + b, a - b: somma e differenza elemento per elemento
a * s: moltiplicazione per uno scalare
a * b: prodotto scalare (restituisce un float)
Limitazioni
Nessun controllo sugli indici in get e set
operator= non gestisce l'auto-assegnazione (a = a)
Supportato solo vettore * scalare, non scalare * vettore
