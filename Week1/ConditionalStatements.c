#include<stdio.h>
int main()
//if else statements

{
    float age;
    printf("enter your age");
    scanf("%f",&age);

    if(age>=18)
    {
        printf("you are an adult now");
    }
    else if(age<18)
    {
        printf("you are not an adult yet");
    }
    else{
        printf("wrong input");
    }
    return 0;
}