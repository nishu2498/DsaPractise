#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    for(int i = 2;i<n;i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}
void primeFactors(int n)
{
    for(int i = 2;i<n;i++)
    {
        if(isPrime(i))
        {
            int x = i;
            while(n%x == 0)
            {
                cout<<i<<" ";
                x = x * i;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    primeFactors(n);
    return 0;
}
/*
python code for first digit of no
class Solution():
    def first_digit(self,no):
        while(no>10):
            no = no / 10
        return no
        
if __name__ == "__main__":
    num = int(input())
    obj = Solution()
    print(obj.first_digit(num))  
*/