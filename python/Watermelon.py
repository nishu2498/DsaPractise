class Solution():
    def EvenorOdd(self,no):
        if no % 2 == 0:
            return "YES"
        else:
            return "NO"

if __name__ == '__main__':
    no = int(input())
    obj = Solution()
    print(obj.EvenorOdd(no))