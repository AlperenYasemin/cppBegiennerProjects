#include <iostream>
#include <cmath>

int main(){
    int a ;
    int b ;

    std::cout << "Enter side a: " << "\n";
    std::cin >> a;

    std::cout<< "Enter side b: "<< "\n";
    std::cin>> b;

    int c = sqrt(pow(a, 2)+pow(b, 2));

    std::cout<<c;

    return 0;
}