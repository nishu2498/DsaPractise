class Solution():
    
    def calculate(self,lst,n,k):
        count = 0
        for i in lst:
            if i > 0 and i >= lst[k-1]:
                count += 1
        return count

if __name__ == '__main__':
    n,k = [int(x) for x in input().split()]
    lst = [int(x) for x in input().split()]
    obj = Solution()
    print(obj.calculate(lst,n,k))