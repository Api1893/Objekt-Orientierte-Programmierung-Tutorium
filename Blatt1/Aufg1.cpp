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
}

int main()
{
    std::cout << "starting tests..." << std::endl;
    grade(90);
    std::cout << "all tests passed..." << std::endl;
}