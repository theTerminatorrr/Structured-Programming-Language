#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, r;

    printf("Enter the value of A: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    while(b !=0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    
    printf("GCD = %d\n",a);

    return 0;
}
