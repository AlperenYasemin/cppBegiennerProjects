#include <iostream>

int main(){

    int a;
    int b;
    char c;
    std::cout<<"Enter the length of the object: ";
    std::cin >> a;

    std::cout<<"Enter the width of the object: ";
    std::cin>>b;

    std::cout<<"Enter the character of the object: ";
    std::cin>>c;

    for(int i=0; i<a; i++){
        std::cout<<'\n';
        for(int j=0; j<b; j++){
            std::cout<<c;
        }
    }

    return 0;
}