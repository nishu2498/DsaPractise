#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    bool res;
    res = (x==4)&&(x++);
    cout<<res<<" "<<x<<endl;
    x = 5;
    res = (x==4)||(x++);
    cout<<res<<" "<<x<<endl;
    x = 5;
    res = (x==5)||(x++);
    cout<<res<<" "<<x<<endl;
    x = 1;
    int y = 2,z = 3;
    int a;
    a = (x,y,z);
    cout<<a<<endl;
    a = x,y,z;
    cout<<a<<endl;
    x = 10;y = 20;z = 30;
    if(z>y>x)
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;


    cout<<"enter any no:"<<endl;
    cin>>x;
    y = abs(x)%10;
    cout<<"Last digit of no = "<<y<<endl;
    return 0;
}