#include <iostream>

// Vor dem char noch const, da es Typsicherheit bringt
int countChar(const char *wort, char gezaehltesWort)
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

    std::cout << countChar("Missssissippi", 's') << std::endl;

    std::cout << "Programm ende..." << std::endl;
}