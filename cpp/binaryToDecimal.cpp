#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int binaryToDecimal(int no)
        {
            int val = 0;
            int base = 1;

            while(no>0)
            {
                int last_digit = no % 10;
                val = val + (last_digit * base);
                no = no / 10;
                base = base * 2;
            }
            return val;
        }
};

int main()
{
    int no;
    cin>>no;
    Solution obj;
    cout<<obj.binaryToDecimal(no)<<endl;
    return 0;
}