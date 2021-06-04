class Solution():
    def binaryToDec(self,no):
        sum = 0
        #base  = 1
        factor = 0
        while no != 0:
            last_digit = no % 10 # get the last digit
            #print(last_digit)
            sum = sum + (last_digit * pow(2,factor))
            #print(sum)
            no = no // 10
            factor += 1
            #base = base * 2
            

        return sum #int(no,2)

if __name__ == '__main__':
    no = int(input())
    obj = Solution()
    print(obj.binaryToDec(no))