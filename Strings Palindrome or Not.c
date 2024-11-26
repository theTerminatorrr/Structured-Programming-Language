// check a Strings is Palindrome or not.

#include<stdio.h>
#include <string.h>

int main()
{

    char str1[1000] ;
    char str2[1000];
    int len = 0;
    int d, j, i = 0;

    printf("Enter a String : ");
    gets(str1);

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    for(j=0,i=len-1; i>=0; i--,j++ )
    {
        str2[j] = str1[i];
    }
    str2[j] != '\0';

    d = strcmp(str1, str2);

    if(d==0)
    {
        printf("String is Palindrome...\n");
    }
    else
    {
        printf("String is Not Palindrome...\n");
    }

    return 0;
}
