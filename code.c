#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int random_number = rand() % 100 +1; // Generate a random number between 0 and 100
    int number_of_guesses = 0;
    int guessed_number;
    // printf("Random Number: %d\n", random_number); // Print the random number
   
    do{
 printf("guess the number: ");
 scanf("%d", &guessed_number);
 if(guessed_number > random_number){
     printf("lower number please\n");
 }
 else if(guessed_number < random_number){-
     printf("higher number please\n");
 }
 else{
     printf("Congrats!!");
 }
 number_of_guesses++;
    } while(guessed_number != random_number);
    printf("you guessed it in %d attempts", number_of_guesses);

    return 0;
}
