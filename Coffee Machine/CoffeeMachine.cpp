#include <iostream>

void makeCoffee(std::string coffee, int sugar);

    int main(){
        std::string coffee;
        int sugar;

        makeCoffee(coffee,sugar);

    return 0;
}

void makeCoffee(std::string coffee, int sugar){
    std::cout<<"Type in the coffee you would like to make.\n";
    std::getline(std::cin, coffee);
    std::cout<<"How much sugar do you want? \n";
    std::cin>>sugar;
    std::cout<<"Here is your "<<coffee<<" with "<<sugar<<" sugar added to it!\n";
}