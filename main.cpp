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

    if (op == '*') {
        std::cout << (a * b) << std::endl;
    } else {
        std::cout << "Only multiplication (*) is supported." << std::endl;
    }

    return 0;
}
