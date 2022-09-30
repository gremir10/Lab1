#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //declare an int named val, and print it
    int val = 10;
    printf("%d\n", val);

    //declare a string in main called name and initialize it to your name.
    //print the string forward and backward

    char name[8] = "Miranda";
    printf("%s\n", name);

    //guessing game
    int guess1;
    int guess2;
    int number1;
    int number2;

    //generate two random numbers between 1-10
    srand(time(NULL));
    number1 = rand() % 11;
    number2 = rand() % 11;

    printf("%d\n", number1);
    printf("%d\n", number2);

    printf("Enter two guesses: ");
    scanf("%d", &guess1);
    scanf("%d", &guess2);


    if ((guess1 == number1) && (guess2 == number2)) {
        printf("You guessed both numbers in correct order, 100 points");
    } else if ((guess2 == number1) && (guess1 == number2)) {
        printf("You guessed both correctly in the opposite order, 50 points");
    } else if ((guess1 == number1) || (guess2 == number2)) {
        printf("You guessed one of the numbers in the correct order, 25 points");
    } else if ((guess1 == number2) || (guess2 == number1)) {
        printf("You guessed one of the numbers, but in the wrong order. 10 points.");
    } else {
        printf("You suck at guessing. 0 points.");
    }
    return 0;
}
