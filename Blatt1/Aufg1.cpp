#include <iostream>

void grade(int points)
{
    if (points < 50)
    {
        std::cout << "nicht bestanden" << std::endl;
    }
    else if (points <= 75)
    {
        std::cout << "bestanden" << std::endl;
    }

    else if (points <= 90)
    {
        std::cout << "Sehr gut" << std::endl;
    }

    else if (points < 0 || points > 100) {
        std::cout << "Keine gueltige Punktzahl eingegeben!" << std::endl;
    }
}

int main()
{
    std::cout << "starting tests..." << std::endl;
    grade(800);
    std::cout << "all tests passed..." << std::endl;
}