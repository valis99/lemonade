#include <cs50.h>
#include <stdio.h>

int main(void)

{
    float a = get_float("length of a: ");
    float b = get_float("length of b: ");
    float c = get_float("length of c: ");

    if ( a+b > c)
    {
        printf("true");

    }
    else
     {
         printf("false");
     }


}