#include<typeinfo>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    auto a = 10;
    auto b = 15.5;
    cout<<a<<"\n"<<b<<"\n";
    cout<<typeid(a).name()<<"\n"<<typeid(b).name()<<"\n";
    double f = 0x1.1p2;
    cout<<f<<endl;
    int i = INT_MIN;
    cout<<i<<endl;
    int j = INT_MAX;
    cout<<j<<endl;
    cout<<"\n=============\n";
    int x = 15,y=2; // eg of c++ style conversion , in c style conversion , we do double(x)
    double z = static_cast<double>(x)/y;
    cout<<z<<"\n";
    string name;
    cout<<"\n enter your name: ";
    getline(cin,name);
    cout<<name<<endl;

    cout<<"enter first integer:\n";
    cin>>x;
    cout<<"enter second integer: \n";
    cin>>y;
    cout<<"multiplication: "<<(x*y)<<endl;
    cout<<"Printing \  example"<<endl;
    cout<<"welcome to \"practise session \""<<endl;
    string s = "G:\\Desktop\\Pictures\\abc.jpeg";
    cout<<s;
    return 0;
}