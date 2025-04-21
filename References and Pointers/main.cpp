#include <iostream>
#include <string>

int main()
{
    std::string text = "abc";
    std::string &letters = text;

    std::cout << text << "\n";
    std::cout << letters << "\n";
}
