#include<iostream>
using namespace std;
class Solution
{
    public:
        void insertionsort(int array[],int no_of_elements)
            {
                int value = 0,key = 0;
                for(int i = 0;i<no_of_elements;i++)
                    {
                        value = array[i];
                        key = i;
                        while(key > 0 && array[key-1] > value)
                            {
                                array[key] = array[key-1];
                                key = key - 1;
                            }
                    array[key] = value;
                    }
            }

};


int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int no_of_elements;
        cin>>no_of_elements;
        int array[no_of_elements];
        for(int i=0;i<no_of_elements;i++)
        {
            cin>>array[i];
        }
        Solution obj;
        obj.insertionsort(array,no_of_elements);
        for(int i =0;i<no_of_elements;i++)
        {
            cout<<array[i]<<" ";
        }
    }

    return 0;
}