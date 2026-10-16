#include <iostream>
#include <cassert>
#include <string>

int countChar(const std::string& wort, char gesuchtesWort) {
      int anzahlGesuchtesWort = 0;

      for (int i = 0; i < wort.size(); i++) {
            if (wort[i] == gesuchtesWort) {
                  anzahlGesuchtesWort++;
            }
      }
      return anzahlGesuchtesWort;
}

int main() {
      std::cout << "Programm start..." << std::endl;

      int anzahlMenge = countChar("Mississippi", 's');
      std::cout << anzahlMenge << std::endl;

      assert(countChar("Mississippi", 's') == 4);
      assert(countChar("Mississippi", 'x') == 0);
      assert(countChar(" ", 's') == 0);

      std::cout << "Programm ende..." << std::endl;
}