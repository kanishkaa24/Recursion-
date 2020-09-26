#include <stdio.h>
#include <stdlib.h>

void fibbonaci(int n)
{
    if(n > 0)
    {
        static int n1 = 0;
        static int n2 = 1;
        static int n3;
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        printf("%d ",n3);
    }
    fibbonaci(n-1);
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("%d %d ",0,1);
    fibbonaci(n-2);
    return 0;
}
