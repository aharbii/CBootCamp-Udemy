#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**********************************************************
 * String Searching and Tokenization:
 *      --> strchr: Locate first occurrence of character
 *                  in string
 *      --> strstr: Locate substring
 *      --> strtok: Split string into tokens
 * 
 *      --> Task 1: strchr
 *          Find all the occurence of a character in a 
 *          string and print:
 *          "This is a sample string"
 *              ^  ^   ^      ^
 * 
 *      --> Task 2: strstr
 *          Find the first occurrence of a string in
 *          another string and print:
 *          "This is a sample string"
 *                     ------
 *      
 *      --> Task 3: strtok
 *          Store string token in a matrix and print:
 *          "This, is a. sample.string"
 *          [0] This
 *          [1] is
 *          [2] a
 *          [3] sample
 *          [4] string
**********************************************************/

int find_all_occurrences(char str[], char c, int indexes[])
{
    int found = 0;
    char *pstr = str;
    do
    {
        pstr = strchr(pstr, c);
        if (pstr)
        {
            indexes[found++] = pstr++ - str;
        }
        
    } while (pstr);
    
    return found;
}

void print_occurrences(char str[], int occurrences_indexes[], int found)
{
    char pattern[strlen(str) + 1];
    memset(pattern, ' ', sizeof(pattern));
    for (int i = 0; i < found; i++)
    {
        pattern[occurrences_indexes[i]] = '^';
    }
    pattern[sizeof(pattern) - 1] = '\0';
    printf("%s\n", str);
    printf("%s\n", pattern);
    
    
}

/* return -1 if sub isn't in str OR the starting index of sub in str */
int find_substring(char str[], char substring[]) 
{
    char *psub = strstr(str, substring);
    return psub ? psub - str : -1;
}

void print_string_position(char str[], char substring[], int index)
{
    char pattern[strlen(str) + 1];
    memset(pattern, ' ', sizeof(pattern));
        
    if (index >= 0)
    {
        for (int i = index; i < (index + strlen(substring)); i++)
        {
            pattern[i] = '-';
        }
    }
    pattern[sizeof(pattern) - 1] = '\0';
    printf("%s\n", str);
    printf("%s\n", pattern);
}

/* return the number of tokens found in the string */
int tokenize_string(char str[], const char delimiters[], int tok_max_len, char tokens[][tok_max_len])
{
    char *ptok = str;
    int i;
    for (i = 0; ptok; i++)
    {
        ptok = strtok(i == 0 ? ptok : NULL, delimiters);
        strncpy(tokens[i], ptok, ptok ? tok_max_len : 0);
    }
    return (i - 1);   
}

void print_tokens(int n_tokens, int tok_max_len, char tokens[][tok_max_len], char str[], const char delimiters[])
{
    printf("\n\nTokenization with delimiters \"%s\":\n", delimiters);
    printf("%s\n", str);
    for (int i = 0; i < n_tokens; i++)
    {
        printf("[%d] %s\n", i, tokens[i]);
    }
}

int main()
{
    char str[] = "This, is a. sample-string";
    int occurrences_indexes[sizeof(str)];
    int found = find_all_occurrences(str, 's', occurrences_indexes);
    print_occurrences(str, occurrences_indexes, found);
    
    char substring[] = "sample";
    int index = find_substring(str, substring);
    print_string_position(str, substring, index);

    const char delimiters[] = " ,.-";
    int tok_max_len = sizeof(str);
    char tokens[tok_max_len][tok_max_len];
    char str_cpy[tok_max_len];
    strncpy(str_cpy, str, tok_max_len);
    int n_tokens = tokenize_string(str_cpy, delimiters, tok_max_len, tokens);
    print_tokens(n_tokens, tok_max_len, tokens, str, delimiters);

    

    return 0;
}