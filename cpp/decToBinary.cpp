// decimal to binary using vector
#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<bool>decToBinary(int no)
        {
            vector<bool>binary;
            while(no>0)
            {
                int remainder = no % 2;
                binary.push_back(remainder);
                no = no / 2;
            }
            return binary;
        }   
};

int main()
{
    int no;
    cin>>no;
    vector<bool>answer;
    Solution obj;
    answer = obj.decToBinary(no);

    for(int i = answer.size()-1;i>=0;i--)
        cout<<answer[i];
    cout<<endl;
    return 0;
}