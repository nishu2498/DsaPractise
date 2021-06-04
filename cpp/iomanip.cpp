#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    bool a = true;
    cout<<a<<endl;
    cout<<boolalpha<<a<<endl; // valid
    cout<<std::boolalpha<<a<<endl; //valid
    cout<<noboolalpha<<a<<endl; // resetting it back to original

    int x = 26, y = 20;
    cout<<x<<" "<<y<<endl;
    cout<<hex<<x<<" "<<y<<endl; // set hex flag
    cout<<std::hex<<x<<" "<<y<<endl; // another method to set hex flag
    cout<<oct<<x<<" "<<y<<endl; // set oct flag
    cout<<std::oct<<x<<" "<<y<<endl; // another method to set oct flag
    cout<<dec<<x<<" "<<y<<endl; // set back to default decimal flag
    cout<<std::dec<<x<<" "<<y<<endl; // another way to set back to default

    /*cout<<showbase<<oct<<x<<endl;
    cout<<std::showbase<<oct<<x<<endl;
    cout<<showbase<<hex<<x<<endl;
    cout<<std::showbase<<hex<<x<<endl;
    cout<<showpos<<showbase<<oct<<x<<endl;
    cout<<showpos<<showbase<<hex<<x<<endl;
    cout<<std::showpos<<std::showbase<<std::oct<<x<<endl;
    cout<<std::showpos<<std::showbase<<std::hex<<x<<endl;
    cout<<std::uppercase<<x<<endl;
    cout<<uppercase<<x<<endl;
    cout<<nouppercase<<noshowpos<<noshowbase<<oct<<x<<" "<<hex<<x<<endl;
    cout<<nouppercase<<noshowpos<<noshowbase<<dec<<x<<endl;
    */

    cout<<std::showpos<<hex<<x<<" "<<y<<endl;

    int m = 12;
    cout<<std::setw(5);
    cout<<std::setfill('*');
    cout<<a<<endl;
    cout<<setw(5);
    cout<<"Hit"<<endl;
    cout<<std::left;
    cout<<std::setw(5);
    cout<<a<<endl;

    cout<<setprecision(4);
    double x1 = 15.5683,y1 = 34267.1;
    cout<<x1<<" "<<y1<<endl;
    double z1 = 1.23;
    cout<<std::showpoint<<z1<<"\n";
    cout<<std::showpos<<z1<<"\n";
    cout<<std::uppercase<<z1<<"\n";
    cout<<x1<< " "<<y1<<endl;


    return 0;
}