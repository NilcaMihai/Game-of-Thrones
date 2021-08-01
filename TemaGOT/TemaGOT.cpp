#include <iostream>
#include "GOT.h"
#include <string>


int main()
{
    std::string parola;
    std::cout << "Introdu textul!\n";
    std::cout << "Pot fi introduse doar caractere din alfabetul latin cu litere mici:\n";
    std::cin >> parola;

    if (estePalindrom(parola))
    {
        std::cout << "Da, este un palindrom!\n";
        std::cout << "Si poate fi rearanjat astfel: " << parola << "\n";
    }
    else
        std::cout << "Nu este un palindrom!\n";
}
