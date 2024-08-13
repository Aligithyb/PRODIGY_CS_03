
#include "checker.h"

#include <cctype>

PasswordStrength assessPasswordStrength(const std::string &password) {
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    if (password.length() < 8) {
        return weak;
    }

    for (char ch : password) {
        if (std::isupper(ch)) {
            hasUpper = true;
        } else if (std::islower(ch)) {
            hasLower = true;
        } else if (std::isdigit(ch)) {
            hasDigit = true;
        } else if (std::ispunct(ch)) {
            hasSpecial = true;
        }
    }
    if (hasUpper && hasLower && hasDigit && hasSpecial) {
        return strong;
    } else if ((hasUpper || hasLower) && (hasDigit || hasSpecial)) {
        return MED;
    } else {
        return weak;
    }
}

std::string getPasswordStrengthDescription(PasswordStrength strength) {
    switch (strength) {
        case weak:
            return "Weak: Your password is too short or lacks variety.";
        case MED:
            return "Medium: Your password has some variety but could be improved.";
        case strong:
            return "Strong: Your password is robust and secure.";
        default:
            return "Unknown strength";
    }
}

