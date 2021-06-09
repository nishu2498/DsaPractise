#include <iostream>
#include<vector>
using namespace std;
// method 7 : using vector of vectors
void print(vector<vector<int>>&arr)
{
    for(int i =0;i<arr.size();i++)
    {
        for(int j = 0;j<arr[i].size();j++)
            cout<<arr[i][j]<<"\t";
        cout<<endl;
    }
}
int main()
{
    int m = 4, n= 3;
    vector<vector<int>> arr;
    for(int i =0;i<m;i++)
    {
        vector<int> v;
        for(int j =0;j<n;j++)
        {
            v.push_back(i);
        }
        arr.push_back(v);
    }
    print(arr);
    return 0;
}

/*
method 1:

using fixed row  and column no in arr as parameter

void print(int arr[3][2])
{
    for(int i =0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][2] = {{10,20},{30,40},{50,60}};
    print(arr);
    return 0;
}

method 2: 
by skipping first element of array, and pass it separate parameter 
void print(int arr[][2],int m)
{
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][2] = {{10,20},{30,40},{50,60}};
    print(arr,3);
    return 0;
}

method 3:
using const integers for row and columns
const int R = 3;
const int C = 2;
void print(int arr[R][C])
{
    for(int i =0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[R][C] = {{10,20},{30,40},{50,60}};
    print(arr);
    return 0;
}

method 4:
using double pointer method
void print(int **arr, int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < n; j++)
			cout << arr[i][j] << "\t";
        
        cout<<endl;
	}
}

int main()
{	
	int m = 5, n = 4;

	int **arr;
    arr = new int *[m];
	for(int i = 0; i < m; i++)
	{
		arr[i] = new int[n];

		for(int j = 0; j < n; j++)
		{
			arr[i][j] = i;

			//cout << arr[i][j] << " ";
		}
	}
    print(arr,m,n);

	return 0;
}

method 5:
using array of pointers

void print(int **arr, int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < n; j++)
			cout << arr[i][j] << "\t";
        
        cout<<endl;
	}
}

int main()
{	
	int m = 5, n = 4;
    int *arr[m];

    for(int i=0;i<m;i++)
    {
        arr[i] = new int[n];
        for(int j = 0;j<n;j++)
            arr[i][j] = i;
    }

    print(arr,m,n);

	return 0;
}

method 6:
using vector of array

void print(vector<int> v[],int m)
{
    for(int i =0;i<m;i++)
    {
        for(int j =0;j<v[i].size();j++)
            cout<<v[i][j]<<"\t";
        cout<<endl;
    }
}
int main()
{
    int m = 3, n = 2;
    vector<int> arr[m];

    for(int i = 0;i<m;i++)
    {
        for(int j =0;j<n;j++)
            arr[i].push_back(i);
    }
    print(arr,m);
}
*/