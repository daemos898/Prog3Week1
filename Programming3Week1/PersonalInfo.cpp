//Include the necessary utilities
#include <iostream>
#include <string>

int main() {
    //Create variables for the various information needed
    std::string firstName = "Jennifer";
    std::string lastName = "Menendez";
    std::string streetAddress = "4917 Paradise Ave.";
    std::string city = "Las Vegas";
    std::string zipCode = "55406";

    //Print the information that was provided
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Street Address: " << streetAddress << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Zip Code: " << zipCode << std::endl;

    return 0;
}
