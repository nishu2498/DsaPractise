#include<iostream>
#include<vector>
using namespace std;
/*void modify(vector<int> &v)
{
    for ( auto &x : v)
        x = x + 5;
}*/
void print(vector<string> &v,string s)
{
    cout<<s<<":\t";
    for(auto i :v)
        cout<<"\n"<<i;
    cout<<endl;
}
int main()
{
    vector<string>v{"nishant","shashank","inamdar","dhayari","pune","maharashtra","india"};

    
    print(v,"data");
    return 0;
}

/*
problem 1:
    int x = 10;
    int &y = x;
    cout<<y<<" ";
    x = x + 5;
    cout<<y<<" ";
    y = y + 5;
    cout<<x<<" ";

problem 2:
    void swap(int &x,int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    int x = 10,y = 15;
    cout<<"Before swap:\t"<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swap:\t"<<x<<" "<<y<<endl;

problem 3 and 4:
void modify(vector<int> &v)
{
    for ( auto &x : v)
        x = x + 5;
}
void print(vector<int> &v,string s)
{
    cout<<s<<":\t";
    for(auto i :v)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    vector<int>v;

    for(int i = 1;i<=10;i++)
        v.push_back(i);
    print(v,"before modification");
    modify(v);
    print(v,"after modification");
    return 0;
}

problem 5:
void print(vector<string> &v,string s)
{
    cout<<s<<":\t";
    for(auto i :v)
        cout<<"\n"<<i;
    cout<<endl;
}
int main()
{
    vector<string>v{"nishant","shashank","inamdar","dhayari","pune","maharashtra","india"};

    
    print(v,"data");
    return 0;
}

*/