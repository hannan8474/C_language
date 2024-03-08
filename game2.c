#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int guess(char comp, char you){
    if(you=='s' && comp=='s'){
        return 0;
    }
    else if(you=='g' && comp=='g'){
        return 0;
    }
    else if(you=='w' && comp=='w'){
        return 0;
    }
    else if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }
    else if(you=='g' && comp=='w'){
        return -1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }   
}
int main(){
    int number;
    char you, comp;
    srand(time(0));
    number=rand()%100+1;
    printf("Enter s for snake, w for water, g for gun:\n");
    scanf("%c",&you);
    if(number>=0 && number<33){
        comp='s';
    }
    else if(number>=33 && number<66){
        comp='w';
    }
    else if(number>=66 && number<100){
        comp='g';
    }
    int result=guess(comp,you);
    if(result==0){
        printf("Game Draw\n");
    }
    else if(result==-1){
        printf("You Lose!\n");
    }
    else if (result==1)
    {
        printf("You Won!\n");
    }
    printf("You chose %c and computer chose %c\n", you, comp);

    return 0;
};
