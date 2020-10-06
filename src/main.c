#include "computing.h"
#include <stdio.h>
#include <string.h>


int main()               // main
{                        //
    int count;
    int count_words; // init var for count words in the text
    printlogo();             // void print start text
    printf("Enter number of words in text ==> "); //
    scanf("%d\n", &count); // enter count words in the text
    count++;             // for E0F string
    count_words = count;
    char array[count_words][16];
    array[count_words][16] = stringing(array, count_words);       // void function
    count_words = count;
    array[count_words][16] = computing(array, count_words);
    count_words = count;
    //printf("\ncount--> %d",count_words);
    int i;
    i = print(array, count_words);
    //printf("\n%c",array[0][0]);
    
}
