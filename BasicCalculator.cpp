#include <iostream>

int main(){

int a;
int b;
int c;
char x;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "Enter your operator: ";
    std::cin >> x;

    switch (x){
        case '+':
            std::cout << a+b;
            break;
        case '-':
            std::cout << a-b;
            break;
        case '*':
            c=a*b;
            std::cout << c;
            break;
        case '/':
            std::cout <<a/(double)b;
            break;
        default:
        std::cout << "Please enter a valid operator.";
    }
    return 0;
}