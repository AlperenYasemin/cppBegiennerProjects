#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int random = (rand()%20)+1;
    std::cout<<"Dice rolls and your number is: "<< random <<'\n';

    if(random<=5){std::cout<<"You trip and fell. Game over!";}
    else if(random<=10){std::cout<<"You hit the enemy but it wasn't strong enough. Now its time for it's attack!";}
    else if(random<=15){std::cout<<"You hit the enemy right on the leg! It can't walk anymore!";}
    else{std::cout<<"You hit the enemy right on the head! You finally killed it!";}
return 0;
}

