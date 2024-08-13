#ifndef PASSWORD_STRENGTH_H
#define PASSWORD_STRENGTH_H

#include <string>

// Enum to represent password strength
enum PasswordStrength {
    weak,
    MED,
    strong
};

// Function to assess the strength of the password
PasswordStrength assessPasswordStrength(const std::string &password);

// Function to get a description of the password strength
std::string getPasswordStrengthDescription(PasswordStrength strength);

#endif // PASSWORD_STRENGTH_H
