#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    std::srand(std::time(0));

    int numberGuess;
    int attmpts = 0;
    int lngth;
    int tries;

    std::cout << "Welcome to the Guess the Number game!\n" << std::endl;

    while (true) {
        std::cout << "Length of the random numbers: ";
        if (!(std::cin >> lngth)) {
            std::cout << "Invalid! Please input numbers only!" << std::endl;
            std::cout << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        break;
    }

    while (true) {
        std::cout << "how many attemps you want? : ";
        if (!(std::cin >> tries)) {
            std::cout << "Invalid! Please input numbers only!" << std::endl;
            std::cout << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        break;
    }

    std::cout << "\nTry to guess the number between 1 and " << lngth << " (" << tries << " tries)" << std::endl;

    int hiddenNumber = std::rand() % lngth + 1;
    bool guessedTrue = false;
    std::string a = "Enter your guess: ";
    std::string b;

    for (int i = 0; i < tries; i++) {
        
        while (true) {
            if (!(std::cin >> numberGuess)) {
                b = " Invalid! Please input numbers only!";
                std::cout << std::endl;;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }

            break;
        }

        attmpts++;

        if (numberGuess == hiddenNumber) {
            guessedTrue = true;
            b = "Congratulations!";
            break;
        }
        else if (numberGuess < hiddenNumber) {
            b = " is Too low! Try again!";
        }
        else {
            b = " is Too high! Try again!";
        }
            std::cout << b << "\r" << std::flush;
    }

    if (!guessedTrue) {
        std::cout << "Game Over! The hidden number is " << hiddenNumber << std::endl;
    }


    return 0;
}