#include <stdio.h>
#include <cs50.h>


float average (int lenght, int array[]);
int main(void)
{
    int n = get_int("scores: ");

    int scores [n];
    for (int i = 0; i < n; i++)
    {
        scores [i] = get_int("scores %i: ", i + 1);
    }
    printf("Average: %.1f\n ", average (n, scores));

}

float average (int lenght, int array[])
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
         sum += array[i];
    }
    return (float) sum /  (float) lenght;
}