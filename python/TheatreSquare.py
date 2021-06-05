class Solution():
    def calculate(self,n,m,a):
        return (int((n+a-1)/a)*int((m+a-1)/a))
if __name__ == '__main__':
    n,m,a = [int(x) for x in input().split()]
    obj = Solution()
    print(obj.calculate(n,m,a))