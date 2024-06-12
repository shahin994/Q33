#include <iostream>
#include <string>
#include <regex>

bool validateMobileNumber(const std::string &phoneNumber) {
    // Regular expression to match a valid mobile number
    std::regex pattern("\\b(\\+98|0)?9\\d{9}\\b");

    // Check if the phone number matches the pattern
    return std::regex_match(phoneNumber, pattern);
}

int main() {
    std::string phoneNumber;
    std::cout << "Enter a mobile phone number: ";
    std::cin >> phoneNumber;

    if (validateMobileNumber(phoneNumber)) {
        std::cout << "The phone number is a valid mobile number." << std::endl;
    } else {
        std::cout << "Invalid mobile phone number. Please enter a valid mobile number." << std::endl;
    }

    return 0;
}