#include<stdio.h>

int main()
{
    char str[1000];
    char ch;
    int i, capital, small, digit ;

    printf("Enter a String: ");
    gets(str);

    i = capital = small = digit = 0;

    while((ch = str[i]) != '\0')
    {
        if (str[i]>=65 && str[i]<=90 )
        {
            capital++;
        }
        else if (str[i]>=97 && str[i]<=120 )
        {
            small++ ;
        }
        else if (str[i]>=48 && str[i]<=97 )
        {
            digit++ ;
        }
        i++ ;
    }
  
    printf("The Number of Capital Letters: %d \n", capital);
    printf("The Number of Small Letters: %d \n", small);
    printf("The Number of Digits: %d \n", digit);

    return 0;
}
