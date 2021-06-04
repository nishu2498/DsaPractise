#include<iostream>
using namespace  std;

int getkthmin(int arr[],int n,int k)
{
    int temp = 0;
    int j = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]<arr[j])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            j++;
        }
    }

    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

    return arr[k-1];
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];;
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }

        cout<<getkthmin(arr,n,k)<<"\n";
    }

    return 0;
}