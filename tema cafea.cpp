// tema cafea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int tip_cafea;

    std::cout << "Introdu numarul pentru tipul de cafea: ";
    std::cin >> tip_cafea;

    // Afisarea cafelei corespunzatoare
    switch (tip_cafea) {
    case 1:
        std::cout << "Latte\n";
        break;
    case 2:
        std::cout << "Americano\n";
        break;
    case 3:
        std::cout << "Espresso\n";
        break;
    case 4:
        std::cout << "Cappuccino\n";
        break;
    case 5:
        std::cout << "Macchiato\n";
        break;
    default:
        std::cout << "Numarul introdus nu corespunde niciunui tip de cafea.\n";
        break;
    }

    return 0;
}