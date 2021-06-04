/*#include<iostream>
using namespace std;
int main()
{
int arr[] = {34,15,29,8};
int n = sizeof(arr)/sizeof(arr[0]);
int temp;
for(int i=1;i<=n-1;i++)
{
    for(int j = 0;j<=n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

for(int i=0;i<=n-1;i++)
{
    cout<<arr[i]<<"\t";
}

return 0;
}*/

#include<iostream>
using namespace std;
void bubble_sort(int array[],int no_of_element)
{
	int temp = 0;
	for(int i = 1;i <=no_of_element-1; i++)
	   {
		for(int j = 0; j<=no_of_element-1-i;j++)
			{
				if(array[j] > array[j+1])
				  {
					temp = array[j];
					array[j] = array[j+1];
					array[j+1] = temp;
				  }
			}
	   }
}


int main()
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	 	int no_of_element;
		cin>>no_of_element;
		int array[no_of_element];
		for(int i = 0; i < no_of_element;i++)
		   {
			cin>>array[i];
		   }
		bubble_sort(array,no_of_element);
		for(int i = 0; i < no_of_element;i++)
		   {
			cout<<array[i]<<"\t";
		   }
        }
	return 0;
}