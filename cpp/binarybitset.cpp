#include<bits/stdc++.h>
using namespace std;

int maxAND(int arr[],int n)
{
    int res = 0;
    for(int i =0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            res = max(res,arr[i] & arr[j]);
        }
    }
    return res;
}

int main()
{
    int a[] = {4,8,6,2};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"maximum and value ="<<maxAND(a,n)<<endl;
}