#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    int min = 0,temp;

    for(int i =0;i<n-2;i++)
    {
        min = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }

        selectionsort(arr,n);

        for(int i = 0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}