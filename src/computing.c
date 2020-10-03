#include "computing.h"
#include <stdio.h>
#include <string.h>

int stringing(             //
        int count_words)   // function for enter data and check quantity symbols
{                          //
    int i = 0;             // init var for clear clipboard
    char* str;             // init string for data
    int count_symbols = 0; // init var for count symbols in the text
    char array[count_words * 16];                         // create char array
    str = array;                                          // array --> str
    printf("Please use a space after punctuation marks"); //
    printf("\nEnter u text ==> ");                        //
    scanf("\n%d", &i);                            // scan for clean clipboard
    while ((*str++ = getchar()) != '\n') {        // enter data
        count_symbols++;                          // quantity symbols ++;
        *str = '\0';                              // add last mark string
    }                                             //
    computing(array, count_words, count_symbols); // void function
    return 0;                                     //
}

void print() // function for print start text
{            //
    printf("\n┏━━━┳┓╋╋╋┏┓╋╋╋╋┏┓╋╋╋╋┏┓╋╋╋╋╋╋╋╋╋╋╋┏┓    "); //
    printf("\n┃┏━┓┃┃╋╋╋┃┃╋╋╋╋┃┃╋╋╋┏┛┗┓╋╋╋╋╋╋╋╋╋╋┃┃    "); //
    printf("\n┃┃╋┃┃┃┏━━┫┗━┳━━┫┗━┳━┻┓┏┫┏┓┏┳━━┳━┳━┛┣━━┓ "); //
    printf("\n┃┗━┛┃┃┃┏┓┃┏┓┃┏┓┃┏┓┃┃━┫┃┗┛┗┛┃┏┓┃┏┫┏┓┃━━┫ "); //
    printf("\n┃┏━┓┃┗┫┗┛┃┃┃┃┏┓┃┗┛┃┃━┫┗┓┏┓┏┫┗┛┃┃┃┗┛┣━━┃ "); //
    printf("\n┗┛╋┗┻━┫┏━┻┛┗┻┛┗┻━━┻━━┻━┻┛┗┛┗━━┻┛┗━━┻━━┛ "); //
    printf("\n╋╋╋╋╋╋┃┃                                "); //
    printf("\n╋╋╋╋╋╋┗┛                              \n"); //
}
