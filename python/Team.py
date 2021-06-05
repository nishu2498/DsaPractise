class Solution():
    def calculate(self,lst):
        c = 0
        #print(lst)
        for i in lst:
            if i == 1:
                c += 1
        #print(c)
        if c >= 2:
            return 1
        else:
            return 0

if __name__ == "__main__":
    t = int(input())
    obj = Solution()
    ans = []
    while t > 0:
        lst = [int(x) for x in input().split()]
        ans.append(obj.calculate(lst))
        t -= 1
    count = 0
    #print(ans)
    for i in ans:
        if i == 1:
            count += 1
    print(count)