#include<iostream>
using namespace std;
int main()
{
    int x = 3, y = 6;
    cout<<(x&y)<<endl;
    cout<<(x|y)<<endl;
    cout<<(x^y)<<endl;

    cout<<(x<<1)<<endl;
    cout<<(x<<2)<<endl;
    int z = 4, k = 0;
    k = (x<<z);
    cout<<k<<endl;

    x = 33;
    k = 0;
    cout<<(x>>1)<<endl;
    cout<<(x>>2)<<endl;
    k = (x>>z);
    cout<<k<<endl;

    unsigned int m = 1;
    cout<<(~m)<<endl;
    m = 5;
    cout<<(~m)<<endl;

    int n = 1;
    cout<<(~n)<<endl;
    n = 5;
    cout<<(~n)<<endl;
    return 0;
}