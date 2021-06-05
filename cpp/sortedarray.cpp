#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
        bool isSorted(int arr[],int n)
        {
            for(int i = 1;i<n;i++)
            {
                if(arr[i]<arr[i-1])
                    return false;
            }
            return true;
        }
};
int main()
{
    int no;
    cin>>no;
    int array[no];
    for(int i = 0;i<no;i++)
        cin>>array[i];
    
    Solution obj;

    if(obj.isSorted(array,no))
        cout<<"Sorted"<<endl;
    else 
        cout<<"Not Sorted"<<endl;
    return 0;
}