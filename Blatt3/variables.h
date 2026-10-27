//
// Created by Apisit Khamdeekoet on 25.10.26.
//

#include <cassert>
#ifndef OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_VARIABLE_H
#define OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_VARIABLE_H
#endif //OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_VARIABLE_H

// Aufgabe 3 b) Trennung zwischen Dateinamen und implemntierung
namespace hfu {
// ------------- Aufgabe 1 a) -----------------
    int* copy(int* numbers, int size) {
    int* copyArray = new int[size];

    for (int i = 0; i < size; i++) {
        copyArray[i] = numbers[i];
        //std::cout << copyArray[i] << std::endl;
    }
    return copyArray;
    }

    // --------- Aufgabe 1 b) ----------------
    void compare(int* sorted, int* numbers, int size) {
    for(int i = 0; i + 1 < size; i++) {
        assert(sorted[i] <= sorted[i + 1]);
        }
    }

    // --------- Aufgabe 1 c) ----------------
    void sort(int* numbers, int size) {
        for (int i = 1; i < size; ++i) {
            int key = numbers[i];
            int j = i - 1;
            while (j >= 0 && numbers[j] > key) {
                numbers[j + 1] = numbers[j];
                j = j - 1;
            }
            numbers[j + 1] = key;
        }
    }

    void test_sort(int* numbers, int size) {
        int* original = copy(numbers, size);
        sort(numbers, size);

        for(int i = 0; i + 1 < size; i++) {
            assert(numbers[i] <= numbers[i + 1]);
    }

        // Vergleich
        compare(numbers, original, size);
        delete[] original;
    }

    // --------- Aufgabe 1 d) ----------------
    // Gleicher Namensmethode möglich, durch Überladung
    void test_sort() {
        int firstArray[5] = {1,2,3,4,5};
        int secondArray[5] = {5,4,3,2,1};
        int thirdArray[5] = {3,-1,8,-6,2};
        int fourthArray[5] = {7,3,5,2};
        int size = 5;

        test_sort(firstArray, size);
        test_sort(secondArray, size);
        test_sort(thirdArray, size);
        test_sort(fourthArray, size);
    }

    // --------- Aufgabe 3 b) ----------------
    // String vergleichen
    void stringCompare(std::string& text1, std::string& text2) {
        std::cout << (text1 == text2) << std::endl;
        std::cout << (text1 < text2) << std::endl;
        std::cout << (text1 > text2) << std::endl;

        std::string firstCompareText = text1;
        std::string secondCompareText = text2;

        // Damit der Inhalt verglichen wird des Objektes. Wird die compare() Methode verwendet
        assert(firstCompareText.compare(secondCompareText));
    }
}