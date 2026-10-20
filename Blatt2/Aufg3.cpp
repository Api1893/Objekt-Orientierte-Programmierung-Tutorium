#import <iostream>
#import <cassert>

std::string grade(int points) {
        if (points < 50) return "Nicht bestanden";
        if (points <= 75) return "Bestanden";
        if (points > 75 && points < 90) return "Gut";
        if (points >= 90) return "Sehr gut";
}

int main() {
        std::cout << "Programm start..." << std::endl;

        std::cout << grade(40) << std::endl;
        assert(grade(49) == "Nicht bestanden");
        assert(grade(75) == "Bestanden");
        assert(grade(76) == "Gut");
        assert(grade(90) == "Sehr gut");

        std::cout << "Programm ende..." << std::endl;
}