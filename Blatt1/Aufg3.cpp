#include <iostream>

int countChar(char *wort, char gezaehltesWort)
{
    int anzahlDerZeichen = 0;

    // Läuft das Wort durch bis ans Ende \0
    for (int i = 0; wort[i] != '\0'; i++) {
        if (wort[i] == gezaehltesWort) {
            anzahlDerZeichen++;
        }
    }

    return anzahlDerZeichen;
}

int main()
{
    std::cout << "Programm start..." << std::endl;

    std::cout << countChar("Mississippi", 's') << std::endl;

    std::cout << "Programm ende..." << std::endl;
}