#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));

    int random;
    int guess;
    int tries=0;

    random = (rand() % 100) +1;

    std::cout<<"Guess the number!";

    do{
        tries++;
        std::cin>> guess;
        if(guess > 100 || guess<0){std::cout<<"Enter something valid! \n"; tries--;}
        else if(guess > random){std::cout<<"Nope! Too big! Tries: "<<tries<<'\n';}
        else if(guess < random){std::cout<<"Nope! Too small! Tries: "<<tries<<'\n';}

    }while(guess != random);
    std::cout<<"Congrats! It was " << random;
}