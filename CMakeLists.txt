cmake_minimum_required(VERSION 4.3)
project(Objekt_Orientierte_Programmierung_Tutorium)

set(CMAKE_CXX_STANDARD 14)

include_directories(Blatt2)

add_executable(Objekt_Orientierte_Programmierung_Tutorium
        Blatt1/Aufg1.cpp
        Blatt1/Aufg2.cpp
        Blatt1/Aufg3.cpp
        Blatt1/Aufg4.cpp
        Blatt2/Aufg1.cpp
        Blatt2/Aufg2.cpp
        Blatt2/Aufg3.cpp
        Blatt2/Aufg4.cpp
        Blatt3/Vorlesung_mitschrieb.cpp
        Blatt3/Aufgabenblatt3.cpp
)
