#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int distinct(int arr[],int no)
        {
            int count = 0;
            bool isDistinct = true;

            for(int i = 0;i<no;i++)
            {
                isDistinct = true;

                for(int j = i-1;j>=0;j--)
                {
                    if(arr[i] == arr[j])
                    {
                        isDistinct = false;
                        break;
                    }
                }
                if(isDistinct == true)
                    count++;
            }
            return count;
        }
};
int main()
{
    int no;
    cin>>no;
    int array[no];
    for(int i = 0;i<no;i++)
    {
        cin>>array[i];
    }
    Solution obj;
    cout<<obj.distinct(array,no)<<endl;
    return 0;    
}