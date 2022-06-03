
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive integer from user
    int n=0;
    
    
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1 || n> 8);

    // Print rows 

for (int i = 0; i < n; i++){  
    for ( int j = n-1; j > 1; j--)
        
        printf(" ");
        
        // colum
for (int j = 0; j <= i; j++){
    printf("#");
}     

printf("\n");  
}   
}


