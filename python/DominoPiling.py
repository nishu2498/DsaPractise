class Solution():
    def calculate(self,m,n):
        return (int((m*n)/2))

if __name__ == '__main__':
    m,n = [int(x) for x in input().split()]
    obj = Solution()
    print(obj.calculate(m,n))