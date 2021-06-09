#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //vector<int> v{10,20,30,40,50};
    vector<int> v = {100,200,300,400};
    int no,ans = 0;
    cin>>no;
    vector<int>v1;
    for(int i = 0;i<no;i++)
    {
        cin>>ans;
        v1.push_back(ans);
    }
    v = v1;
    for(int x:v)
        cout<<x<<"\t";
    cout<<endl;
    
    return 0;
}

/*
method 1: for fixed size 2d array:
    int arr[3][2] = {1,2,3,4,5,6};
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<2;j++)
            cout<<arr[i][j]<<"\t";
        cout<<"\n";
    }
method 2: variable size array :
    int m = 4, n = 5;
    int arr[m][n];
    // 2d array creation 
    for(int i = 0;i<m;i++)
        for(int j=0;j<n;j++)
            arr[i][j] = i+j;
    // 2d array display
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
method 3: using double pointers:
         _     _ _ _
   arr->|_| ->|_|_|_|
        |_| ->|_|_|_|
        |_| ->|_|_|_|
    
    int m = 3, n= 2;
    int **arr; // double pointer 
    arr = new int*[m]; // array of pointers

    for(int i =0;i<m;i++) // run through array of pointers 
        arr[i] = new int[n]; // create a new row of n size 
    
    for(int i =0;i<m;i++)
        for(int j =0;j<n;j++)
            arr[i][j] = i+j;

    for(int i = 0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<"\t";
        cout<<endl;
    }
    
    // method 4: array of pointer
        arr
         _    _ _ _ _
        |_|->|_|_|_|_|
        |_|->|_|_|_|_|
        |_|->|_|_|_|_|
    int m = 3, n= 2;
    int *arr[m]; // array of m pointers created
    for(int i=0;i<m;i++) // run through array of pointers
        arr[i] =  new int[n]; // in each individual array element, new pointer to n elements in row created
    for(int i = 0;i<m;i++)
        for(int j = 0;j<n;j++)
            arr[i][j] = i+j;

    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
            cout<<arr[i][j]<<"\t";
        cout<<"\n";
    }   

    method 5:  using vector

    int m = 4, n = 3;
    vector<int> arr[m];

    for(int i = 0;i<m;i++)
        for(int j = 0;j<n;j++)
            arr[i].push_back((i+j));

    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    method 6: using vector of vectors
    int m = 4, n = 5;
    vector<vector<int>>arr;

    for(int i =1;i<=m;i++)
    {
        vector<int> v;
        for(int j = 1;j<=n;j++)
        {
            v.push_back((i+j));
        }
        arr.push_back(v);
    }

    for(int i = 0;i<m;i++)
    {
        for(int j =0;j<n;j++)
            cout<<arr[i][j]<<"\t";
        cout<<endl;
    }
*/