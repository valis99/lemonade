#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

//ask number from the user

{
    float dollar;
    
    
   
    {
         dollar = get_float ("change owed:  ");
    }
    
    
    while (dollar <= 0);
    
    int cents, coins;
   
    cents = round(dollar*100); //convert dollar to cents
   
    coins = 0;
    
    while (cents >= 25) //algorithm using quarters
    {
        cents -= 25;
        coins++;
    }
    while (cents >= 10) //algorithm using dimes
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5) //algorithm using nickels
    
    { cents -= 5;
        coins++;
    }
    while (cents >=1)
    {
        cents -= 1;
        coins++;
    }
    
    printf("coins: %i\n", coins);
    
}