#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x = 1.23, y = 1122456.453;
    double z = 1.2e+7;
    cout<<std::fixed;
    cout<<x<<"  "<<y<<"\n";
    cout<<std::setprecision(2);
    cout<<x<<"  "<<y<<"\n";
    cout<<std::showpos<<std::uppercase<<z<<endl;

    cout<<std::scientific;
    cout<<x<<"  "<<y<<"\n";
    cout<<std::setprecision(2);
    cout<<x<<"  "<<y<<"\n";
    cout<<std::showpos<<std::uppercase<<z<<endl;

    return 0;
    
}