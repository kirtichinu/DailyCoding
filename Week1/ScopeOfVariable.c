//Scope of a variable in c refers to a variable which is out of scope of that function example we have two functions and a variable is declared in one but used in another then it will throw an error because it is not declared in that function.

#include<stdio.h>
int main()
{
    int var_one=5;
    printf("%d",var_one);
    return 0;
}
int var2()
{
    int var_two=10;
    printf("%d",var_two);
    // printf("%d",var_one);
    // this shows an error in the terminal like this.-->
   //          |
   //          *              
//     ScopeOfVariable.c: In function 'var2':
// ScopeOfVariable.c:14:17: error: 'var_one' undeclared (first use in this function)
//      printf("%d",var_one);
//                  ^~~~~~~
// ScopeOfVariable.c:14:17: note: each undeclared identifier is reported only once for each function it appears in
    return 0;
}