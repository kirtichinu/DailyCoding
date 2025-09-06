#include<stdio.h>
int main()
{
    //enter marks of a student for three different subjects and print them likewise

    int marks[3];

    printf("Enter phy marks = ");
    scanf("%d",&marks[0]);

    printf("Enter chem marks = ");
    scanf("%d",&marks[1]);

    printf("Enter maths marks = ");
    scanf("%d",&marks[2]);

    printf(" phy = %d\n chem = %d\n maths = %d\n",marks[0],marks[1],marks[2]);
    return 0;

}