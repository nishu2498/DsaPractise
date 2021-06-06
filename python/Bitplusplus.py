class Solution():
    def calculate(self,s,ans):
        for i in s:
            if i == '+':
                ans += 1
                break
            if i == '-':
                ans -= 1
                break
        return ans
if __name__ == '__main__':
    t = int(input())
    ans = 0
    obj = Solution()
    while t > 0:
        s = input()
        ans = obj.calculate(s,ans)
        t -= 1
    print(ans)
    
