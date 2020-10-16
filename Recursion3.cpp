#include <iostream>
using namespace std;

int toh(char src, char dest, char help, int n)
{
    if(n == 0)
        return 0;
    toh(src,help,dest,n-1);
    cout << "Move " << n << "th ring from " << src << " to " << dest << endl;
    toh(help,dest,src,n-1);
    return 0;
}

int main()
{
    char src, dest, help;
    int n,a[10]={1,2,3};

    cin >> n;
    toh('A','B','C',n);

    return 0;
}
