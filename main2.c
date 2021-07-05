#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int puan=0;
int life=2;
int x,y,nm,nm2,rght,ans;



    printf("*welcome to the game\n*you have 3 life\n\n");
    bas:
    srand(time(NULL));
    nm=rand()%50+1;
    nm2=rand()%50+1;

    printf("%d+%d=?",nm,nm2);
    scanf("%d",&ans);

rght=nm+nm2;
    if(ans==rght)
    {
        printf("good job!!\n");
        goto bas;
    }
    else
    {
        printf("wrong answer\n");
        life--;
    if(life>=0)
    {
        goto bas;
    }
        
         else
        {
        printf("you lost");
        }
    }
}
