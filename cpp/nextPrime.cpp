#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        int nextPrime(int no)
        {
            no++;
            while(true)
            {
                int i = 0;
                for(i = 2;i<no;i++)
                {
                    if(no%i == 0)
                    {
                        break;
                    }
                }
                if (i == no)
                    return no;
                no++;
            }
        }
};

int main()
{
    int no;
    cin>>no;
    Solution obj;
    cout<<obj.nextPrime(no)<<endl;
    return 0;
}
