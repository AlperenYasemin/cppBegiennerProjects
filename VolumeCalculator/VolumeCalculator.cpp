#include <iostream>

double sphere();
double cube();

int main(){
    int choice;
    std::cout<<"Which ones volume would you like to calculate?\n";
    std::cout<<"1. Sphere: \n";
    std::cout<<"2. Cube: \n";
    std::cin>>choice;

    switch(choice){
        case 1: std::cout<<sphere();
            break;
        case 2: std::cout<<cube();
            break;
    }
    return 0;
}

double sphere(){
    double radious;
    std::cout<<"What's the radious lenght?\n";
    std::cin>>radious;
    return ((double)4/3)*(3.14)*radious*radious*radious;
}
double cube(){
    double side;
    std::cout<<"What's the side length?\n";
    std::cin>>side;
    return side*side*side;
}