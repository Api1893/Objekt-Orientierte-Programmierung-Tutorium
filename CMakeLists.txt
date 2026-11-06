cmake_minimum_required(VERSION 3.20)
project(Objekt_Orientierte_Programmierung_Tutorium)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ------------------------------------------------------------------
# Jeder Ordner "BlattN" wird automatisch ein eigenes Programm.
#
#  - Alle .cpp-Dateien im Ordner gehören zum Programm "BlattN".
#    Pro Blatt darf es deshalb nur EINE Datei mit main() geben
#    (AufgabenblattN.cpp).
#  - Dateien mit "Mitschrieb" im Namen sind Vorlesungsnotizen und
#    werden jeweils ein eigenes Programm (z. B. "Blatt4_Mitschrieb").
#
# Neue Dateien oder ein neuer Ordner "Blatt6" müssen hier NICHT
# eingetragen werden. In CLion danach nur "Reload CMake Project".
# ------------------------------------------------------------------

file(GLOB sheets RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
        CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Blatt*)

foreach (sheet ${sheets})
    if (IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${sheet})

        file(GLOB sources CONFIGURE_DEPENDS ${sheet}/*.cpp)

        # Mitschriebe aus dem Blatt-Programm heraushalten
        set(notes ${sources})
        list(FILTER notes INCLUDE REGEX "[Mm]itschrieb[^/]*\\.cpp$")
        list(FILTER sources EXCLUDE REGEX "[Mm]itschrieb[^/]*\\.cpp$")

        # Programm für das Aufgabenblatt
        if (sources)
            add_executable(${sheet} ${sources}
                    Blatt3/Aufg1.cpp
            )
            target_compile_options(${sheet} PRIVATE -Wall -Wextra)
        endif ()

        # Je ein Programm pro Mitschrieb
        foreach (note ${notes})
            get_filename_component(name ${note} NAME_WE)
            add_executable(${sheet}_${name} ${note})
            target_compile_options(${sheet}_${name} PRIVATE -Wall -Wextra)
        endforeach ()

    endif ()
endforeach ()
