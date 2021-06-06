"""
you must need to go through this question's solution again..
it finds equivalent no of base 9 corresponding to input decimal no
"""
class Solution():
    def calculate(self,number):
        result = 0
        multiplier = 1

        while number > 0:

            result = result + multiplier *(number%9)
            number = number // 9
            multiplier = multiplier * 10

        return result

if __name__ == '__main__':
    no = int(input())
    obj = Solution()
    print(obj.calculate(no))