#include <iostream>
#include <string>

int main()
{
    // References
    std::string text = "abc";
    std::string &letters = text; // & can be used to obtain the memory address of a variable
    std::string* pointer = &text; // A pointer stores a memory address as its value

    // Identical output
    std::cout << text << "\n";
    std::cout << letters << "\n";

    std::cout << "\n";
    // Outputs the memory address
    std::cout << &letters << "\n";
    // Outputs the memory address using the pointer
    std::cout << pointer << "\n";
    // Outputs the variable's value using the pointer
    std::cout << *pointer << "\n";

    std::cout << "\n";
    // Change the pointer's value
    *pointer = "def";
    // Outputs the new value of the pointer
    std::cout << *pointer << "\n";
    // Outputs the first variables new value
    std::cout << text << "\n";
}
