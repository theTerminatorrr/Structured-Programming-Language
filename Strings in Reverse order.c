#include<stdio.h>
int main()
{
    char str1[1000] ;
    char str2[1000];
    int len = 0;
    int j, i = 0;

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

    printf("String you Gave = %s \n", str1);

    printf("String in Reverse Order = %s \n", str2);

    return 0;
}
