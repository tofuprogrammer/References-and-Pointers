#include <iostream>
#include <string>

int main()
{
    // Creating and using references
    std::string text = "abc";
    std::string &letters = text; // & can be used to obtain the memory address of a variable
    std::string* pointer = &text; // A pointer stores a memory address as its value

    // Identical output
    std::cout << text << "\n";
    std::cout << letters << "\n";

    std::cout << "\n";
    // Outputs the memory address
    std::cout << &letters << "\n";
}
