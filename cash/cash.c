#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    // Get positive dollars from user
    
    
    
float dollars;
    
    do
    {
        dollars = get_float("change amount: ");
    } 
        while ( dollars < 0);

   int cents = round ( dollars * 100);
    int coins = 0;
    while ( cents >= 25)
        { cents-=25;
            coins++;      }
    while   ( cents > 10)
{ cents-=10;
        coins++;      }
        while  ( cents > 5)
{  cents-=5;
        coins++; 
                        }
                        
    while   ( cents > 1)
        { cents-=1;
        coins++;      }
printf("your coins is %i \n",coins );
}