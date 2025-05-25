/*
#include <stdio.h>

int main() {                                                    
    char first_name[50], last_name[50];                         // Takes input in different variables
    printf("Enter your first name and last name: ");
    scanf("%s %s", first_name, last_name);

    printf("%s %s\n", first_name, last_name);                   // Prints through different variables

    return 0;
}
*/




/*
#include <stdio.h>

int main() {                                                    
    char full_name[100];
    printf("Enter your full name: ");
    fgets(full_name, 100, stdin);                                // Takes a sentence or no. of words in single input
    puts(full_name);                                             // Prints a sentence or no. of words through a single variable
    printf("%s", full_name);

    return 0;
}
*/




/*
#include <stdio.h>

int main() {                                                     // finding length without use for library functions
    char name[100], cnt = 0;
    printf("Enter a name: ");
    scanf(" %[^\n]", name);

    while (name[cnt] != '\0') {
        cnt++;
    }
    printf("Length of given name is %d\n", cnt);

    return 0;
}
*/




/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "I am sreyash";
    char fst_str[100] = "Hello ";
    char sec_str[] = "World";

    int len = strlen(str);                                       // Return length using library functions
    printf("%d\n", len);
    int cmp = strcmp(fst_str, sec_str);
    printf("%d\n", cmp);
    strcat(fst_str, sec_str);                                    // Concatenates two string only if the len of first string is enough to store another string
    puts(fst_str);
    strcpy(fst_str, sec_str);                                    // Copies one string with other
    puts(fst_str);

    return 0;
}
*/




/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    fgets(str, 100, stdin);

    printf("%c", str[1]);

    return 0;
}
*/




/*
#include <stdio.h>
#include <string.h>

int count_of_vowels(char [], int []);
int count_of_consonants(char [], int []);
int count_of_characters(char []);
int count_of_words(char []);
int count_of_newlines(char []);

void convert_cap_to_small(char []);

int main()
{
    char str[100];
    int vowel[5], i, cons[26];
    for(i = 0; i< 5; i++)
        vowel[i] = 0;
        
    for(i = 0; i< 26; i++)
        cons[i] = 0;
    
    
    printf("Enter String:\n");
    fgets(str, sizeof(str),stdin);
    
   
    
    printf("Count of Vowels = %d\n",count_of_vowels(str, vowel));
    printf("Count of Consonants = %d\n",count_of_consonants(str, cons));
 

    return 0;
}

int count_of_vowels(char str[], int vowel[])
{
    int i = 0;
        
    while(str[i] != '\0')
    {
        if((str[i] == 'a' || str[i] == 'A') && vowel[0]==0)
            vowel[0] = 1;
            
        else if((str[i] == 'e' || str[i] == 'E') && vowel[1]==0)
            vowel[1] = 1;
            
        else if((str[i] == 'i' || str[i] == 'I') && vowel[2]==0)
            vowel[2] = 1;
            
        else if((str[i] == 'o' || str[i] == 'O') && vowel[3]==0)
            vowel[3] = 1;
            
        else if((str[i] == 'u' || str[i] == 'U') && vowel[4]==0)
            vowel[4] = 1;
            
        i++;
    }
    
    int sum = 0;
    for(i = 0; i < 5; i++)
        sum += vowel[i];
    return sum;
    
}


int count_of_consonants(char str[], int cons[])
{
    int i = 0;
    
    char str_copy[100];
    strcpy(str_copy, str);
    
    convert_cap_to_small(str_copy);
    
    
    while(str_copy[i] != '\0' && str_copy[i]!='\n')
    {
        if(!(str_copy[i] == 'a'|| str_copy[i] == 'e' || str_copy[i] == 'i'  || str_copy[i] == 'o' ||
       str_copy[i] == 'u'))
        
        {
            cons[(int)str_copy[i] - 97] = 1;
        }
        
        i++;
    }
    
    int sum = 0;
    
    for(i = 0; i < 26; i++)
        sum += cons[i];
    return sum;
}


void convert_cap_to_small(char str_copy[])
{
    int i = 0;
    while(str_copy[i]!='\0' && str_copy[i]!='\n')
    {
        if(str_copy[i] >= 'A' && str_copy[i] <= 'Z')
            str_copy[i] = str_copy[i] + 32;
            
        i++;
    }
}
*/