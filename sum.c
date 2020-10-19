#include <cs50.h>
#include <stdio.h>


int add_two_ints(int a , int b);
int main(void)
{
//get integer one

     int x = get_int("give me an intger: ");
     int y = get_int("give me an another integer: ");

     int z = add_two_ints(x,y);

     printf("the sum of is: %i\n ", z);
}



    int add_two_ints(int a , int b)
    {
        int sum = a + b;
        return sum;
    }