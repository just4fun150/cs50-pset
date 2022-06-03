#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("what's your name: ");

    int age = get_int("How old are you? ");

    printf("Your name is %s and your are %i old\n", name, age);
    
}  
    