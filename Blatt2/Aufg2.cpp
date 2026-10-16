#include <iostream>
#include <cassert>







int countChar(char& wort, char gesuchtesWort) {
      int anzahlGesuchtesWort = 0;

      for (int i = 0; i < wort[i] != '\0'; i++) {
            if (wort[i] == gesuchtesWort) {
                  anzahlGesuchtesWort++;
            }
      }
      
      return anzahlGesuchtesWort;
}



int main() {
      std::cout << "Programm start..." << std::endl;

      std::string countChar("Mississippi", 's');

      //assert(countChar("Mississippi", 's'));

      std::cout << "Programm ende..." << std::endl;
}