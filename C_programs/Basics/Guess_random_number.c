#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int num,guessnum,cnt;
    srand(getpid());
    num=rand()%21;
    // printf("Rand_Num:%d-\n",num);

    while(1)
    {
        printf("Enter the number to guess: ");
        scanf("%d",&guessnum);
        cnt++;
    
        if(num==guessnum)
        {
            printf("Your Guess is Correct....!!!\n");
            break;
        }
        else if(cnt==4)
        {
            printf("You Loose the Game....!");
            break;
        }
        else
        {
            printf("Your Guess is Wrong....!!!\n");
        }
    }
}