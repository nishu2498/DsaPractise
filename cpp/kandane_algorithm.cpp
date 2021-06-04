#include<bits/stdc++.h>
using namespace std;

class Solution {

    public:

    /*int min(int arr[],int n)
    {
        int mini = arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<mini)
            {
                mini = arr[i];
            }
        }
        return mini;
    }*/

    int maxSubarraySum(int arr[],int n)
    {
        int currentSum = 0;
        int maxSum = 0;

        for(int i=0;i<n;i++)
        {
            currentSum = currentSum + arr[i];
            if (currentSum > maxSum)
                maxSum = currentSum;
            if (currentSum < 0)
                currentSum = 0;
        }
        return maxSum;
        
    }
};

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }

        Solution obj;
        cout<<obj.maxSubarraySum(a,n)<<endl;
    }
}