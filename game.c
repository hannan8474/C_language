#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, you, nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    do{
        printf("Enter your guess:\n");
        scanf("%d",&you);
        if(you>number){
            printf("Lower Number Please!\n");
        }
        else if(you<number){
            printf("Higher Number Please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }
        while(you!=number);
    return 0;
}