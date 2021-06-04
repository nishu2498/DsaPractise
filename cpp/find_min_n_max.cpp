#include<iostream>
using namespace std ;
 
int findMinandMax(int arr[],int no)
{
    int ans[2];
    int mini = arr[0];
    int maxi = arr[0];
    for(int i = 0;i<no;i++)
    {
        if(arr[i]<mini)
        {
            mini = arr[i];
        }

        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    ans[0] = mini;
    ans[1] = maxi;
    
    for(int i = 0;i<2;i++)
            cout<<ans[i]<<"\t";
    return 0;
}
 
 
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int no;
        cin>>no;
        int arr[no];
        for(int i=0;i<no;i++)
        {
            cin>>arr[i];
        }
        
        findMinandMax(arr,no);
        
    }
    return 0 ;
}