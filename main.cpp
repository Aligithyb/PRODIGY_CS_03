
#include <iostream>
#include "checker.h"

int main() {
    std::string password;

    std::cout << "Enter your password: ";
    std::getline(std::cin, password);

    PasswordStrength strength = assessPasswordStrength(password);
    std::string description = getPasswordStrengthDescription(strength);

    std::cout << description << std::endl;

    return 0;
}

