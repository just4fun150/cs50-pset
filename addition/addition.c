#include <stdio.h>
#include <cs50.h>


int addition(int aa, int bb );

int main (void)

{
    // ask user for input

    int a = get_int("give me an integer: ");

      // ask for another input

    int b = get_int("give me another integer: ");



    printf("the sum of %i and %i is %i \n", a,b,addition(a,b));


      // reusing function here
    int n = 1;
    int  k = 7;
    {

        printf("another one %i\n", addition(n,k));
    }
}


int addition(int aa, int bb )

{
int sum = aa + bb ;

return sum;

}
