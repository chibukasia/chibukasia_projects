#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    FILE * fpointer=fopen("Terms and conditions.html", "a");
        fprintf(fpointer,"\t\tTERMS AND CONDITIONS\n THIS GAME IS ONLY VIABLE TO PEOPLE ABOVE 18 YEARS\n IF YOU'RE FOUND PLAYING THE GAME AND YOU'RE BELOW 18\nYOU WILL BE SUBJECTED  TO A JAIL TERM OF 3YEARS OR A FINE OF $50000");
        fclose(fpointer);

    printf("\n\t\t#######################\n");
    printf("\t\t#     WELCOME          #\n");
    printf("\t\t#       TO             #\n");
    printf("\t\t#      LOTTO           #\n");
    printf("\t\t#      GAME            #\n");
    printf("\t\t#       BE             #\n");
    printf("\t\t#      OUR             #\n");
    printf("\t\t#      LUCKY           #\n");
    printf("\t\t#     WINNER           #\n");
    printf("\t\t#######################\n");
    printf("You're required to enter your three lucky numbers\n");
    printf("If the order of the three lucky numbers matches our secret number\n");
    printf("you win\n");
    printf("If the match doesn't go through, you loose\n");
    printf("If the your number matches with our secret number,\n");
    printf("You win $100,000\n");
    printf("You've only three guesses\n");
    printf("\t\t##       GOOD LUCK!!!        ##\n");

    int secretNumber=347;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    int guessOver=0;

    while(guess!=secretNumber && guessOver==0)
    {
        if (guessCount<guessLimit){
        printf("Enter your guess number: ");
        scanf("%d",&guess);
        guessCount++;
        }

        else {
            guessOver=1;
        }
    }
        if (guessOver==1){
            printf("Your guess limit is up!!");
        }
        else{
            printf("you're a lucky winner of $100,000!!\n");
            printf("\t\t***CONGRAGULATIONS***");
        }


    return 0;
}

