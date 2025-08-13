#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);  // Example: "3 * 4"
    
    std::istringstream iss(input);
    int a, b;
    char op;

    iss >> a >> op >> b;

//write your code below
    return 0;
}
