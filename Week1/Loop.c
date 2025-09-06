#include<stdio.h>
int main()
{
    //for loop
    printf("for loop\n");
    for(int i=0;i<=10;i++)
    {
        printf("%d\n",i);
    }
    printf("\n\nwhile loop\n");
    int j=0;
    while(j<25)
    {
        j++;
        printf("%d\n",j);
    }
    printf("\n\ndo while loop\n");
    int k=16;
    do{
        k--;
        printf("%d\n",k);
    }while(k>5);
}