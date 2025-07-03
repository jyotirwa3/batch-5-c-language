#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    printf("%d", a);        // 10

    printf("\na = %d", a);  // a = 10

    printf("\n%d a = ", a); // 10 a =

    printf("\n a = %d , b = %d", a, b); // a = 10 , b = 20

    int c = 12.5;
    printf("\nc = %d",c); // 12

    float f1 = 34.2;
    printf("\n f1 = %f",f1);
    // printf("\n f1 = %d",f1); // garbage value 

    float f2 = 12;
    printf("\n f2 = %f",f2); // f2 = 12.000000
    
    char ch = 'a';
    printf("\ncharacter = %c",ch);

    char ch2 = "a";
    printf("\ncharacter2 = %c",ch2); /// not get a value


    /////// string 
    char name[10] = "test";
    printf("\nname = %s",name);


    return 0;
}