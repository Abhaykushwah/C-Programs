#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess, ngusses=1;
    srand(time(0));
    number = rand()%1000+1; //Genrating random number betwwen 1 to 100 
    printf("The number is %d",number);
    //keep the loop running until the number is guessed
    do{
        printf("Guess the number between 1 to 1000 : ");
        scanf("%d",&guess);
        if (guess> number){
            printf("Lower number please!\n");
         }
        else if(guess<number){
            printf("Higher number please!\n");
         }
        else{
            printf("You guessed it in %d attempts\n",ngusses);
        }
        ngusses++; 
    }while(guess!=number);
    
    return 0;
}