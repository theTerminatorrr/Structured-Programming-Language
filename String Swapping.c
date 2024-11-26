#include<stdio.h>
#include <string.h>

int main()
{
    char str1[1000] ;
    char str2[1000];
    char temp[1000];

    printf("\n Before Swapping...\n");

    printf("Enter 1st String : ");
    gets (str1);

    printf("Enter 2nd String : ");
    gets (str2);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("\n\n After Swapping...\n");

    printf("String 1 : %s", str1);
    printf("\nString 2 : %s", str2);

    return 0;
}
