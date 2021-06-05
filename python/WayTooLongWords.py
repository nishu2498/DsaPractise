class Solution():
    def answer(self,s):
        if len(s) <= 10:
            return s
        else:
            start = s[0]
            end = s[len(s)-1]
            l_sub_str = s[1:len(s)-1]
            sub_str = start + str(len(l_sub_str)) + end
            return sub_str

if __name__ == '__main__':
    testcases = int(input())
    while (testcases>0):
        s = input()
        obj = Solution()
        print(obj.answer(s))
        testcases -= 1