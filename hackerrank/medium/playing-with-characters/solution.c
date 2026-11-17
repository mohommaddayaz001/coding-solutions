#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char str[100];
    char sentence[100];

    scanf("%c", &ch);
    scanf("%s", str);

    getchar(); // Consume the newline character
    fgets(sentence, sizeof(sentence), stdin);

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s", sentence);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
