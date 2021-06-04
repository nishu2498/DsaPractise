#include<iostream>
using namespace std;

int myMax(int x,int y)
{
    return (x>y?x:y);
}
int myMax(int x,int y,int z)
{
    return myMax(myMax(x,y),z);
}

int main()
{
    int a,b,c;
    cout<<"enter 3 no:";
    cin>>a>>b>>c;
    cout<<"Maximum of 2 no: "<<myMax(a,b)<<endl;
    cout<<"Maximum of 3 no: "<<myMax(a,b,c)<<endl;
    return 0;
}