#include <stdio.h>
#include <stdlib.h>

float power(float n, float m)
{
    if( m > 0)
    {
        if(m == 1)
        {
           return n;
        }
        else return n*power(n,m-1);
    }
    if ( m < 0)
    {
        if(abs(m) == 1)
        {
            return 1/n;
        }
        else return (1/n)*power(n,m+1);
    }
    if ( m == 0 )
    {
        return 1;
    }
}

int main()
{
    float n;
    printf("Enter the number: ");
    scanf("%f",&n);
    float m;
    printf("Enter the power: ");
    scanf("%f",&m);
    float ans = power(n,m);
    printf("%f\n",ans);
    return 0;
}
