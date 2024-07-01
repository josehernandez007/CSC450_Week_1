
#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName, streetAddress, city, zipCode;

    // Input
    std::cout << "Enter First Name: ";
    std::cin >> firstName;

    std::cout << "Enter Last Name: ";
    std::cin >> lastName;

    std::cout << "Enter Street Address: ";
    std::cin.ignore(); // Ignore the newline character in the input buffer
    std::getline(std::cin, streetAddress);

    std::cout << "Enter City: ";
    std::getline(std::cin, city);

    std::cout << "Enter Zip Code: ";
    std::cin >> zipCode;

    // Output
    std::cout << "\n";
    std::cout << "Information for the fictional person:\n";
    std::cout << "First Name: " << firstName << "\n";
    std::cout << "Last Name: " << lastName << "\n";
    std::cout << "Street Address: " << streetAddress << "\n";
    std::cout << "City: " << city << "\n";
    std::cout << "Zip Code: " << zipCode << "\n";

    return 0;
}
