#include<iostream>
using namespace std;
/*int main()
{
    int arr[] = {10,20,30,40,50};
    int *ptr = arr;
    cout<<sizeof(arr)<<"\n";
    cout<<sizeof(ptr)<<"\n";
    cout<<*(arr+1)<<"\n";
    cout<<ptr[2]<<"\n";
    cout<<arr[3]<<"\n";
    cout<<*(ptr+4)<<"\n";

    int (*ptr2)[5] = &arr;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;
    cout<<ptr2<<endl;

    return 0;
}
*/


const int n = 6;
void fun(int (&arr)[n]) // SAME AS void fun(int *arr)
{
    /*for (int i= 0;i<n;i++)
        cout<<arr[i]<<endl;*/
    for( int x: arr)
        cout<<x<<endl;
    cout<<"------------------------\n";
}
int main()
{
int arr[] = {1,2,3,4,5,6}; 
unsigned int n = sizeof(arr)/sizeof(arr[0]);
cout<<"Array size inside main() "<< n<<endl;
fun(arr);
return 0;
}
/*
void fun(string &&s)
{
    cout<<s<<endl;
}
*/
/*void fun(int &x)
{
    cout<<x<<endl;
}*/
/*int &fun()
{
    static int x = 10;
    return x;
}*/
// Driver program
/*
int &y = fun();
cout<<y<<endl;
y = 20;
cout<<fun()<<endl;
*/
//fun("user");
/*int &&x = 3;
fun(x);*/
/*string arr[] = {"nishant","shashank","inamdar"};
unsigned int n = sizeof(arr)/sizeof(arr[0]);
cout<<"Array size inside main() "<< n<<endl;
fun(arr,n);
for(string &x:arr)
    cout<<(x+".")<<endl;
fun(arr,n);*/

