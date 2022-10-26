
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main (void)

{
   string s = get_string("text: "); //enter text
    int letter = 0;  // 
    
    int word = 1;
    
    int sentence = 0;
    
    for ( int i = 0; i < strlen(s); i++)

{
    
     if ( (s[i] >= 'a' && s[i] <= 'z') ||( s[i] >= 'A' && s[i] <= 'Z' )) // compare characters
    
     {    // find this out// printf("%c",s[i]);
    letter++;

        }
    
    else if (s[i] ==' ')   
    {
        word++;
    }
    
    else if (s[i] =='!' || s[i] == '.'  || s[i] == '?')
    
    {
    sentence++; 
    }
}

printf("\n%s",s);
   printf("\n letter:%i word:%i setence:%i",letter,word,sentence); //

   float L = 100 *((float)letter / (float)word);
   float S = 100 * ((float)sentence / (float)word);
   float index =0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

if (grade < 16 && grade >=0)
        {
            printf("\nGrade %i",grade);// we want all numbers between 15 to 1 // i support x is 1
            printf("\n");
        }

else if (grade >= 16)

{
    printf("\nGrade 16+");
}

else 
{
    printf("\nBefore Grade 1"); 
}


}
