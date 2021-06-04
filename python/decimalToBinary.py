# decimal to binary
class Solution():
    def DecToBin(self,no):
        binary = []

        while no > 0:
            remainder = no % 2
            binary.append(remainder)
            no = no // 2

        answer = str(binary[::-1])
        return answer

if __name__ == '__main__':
    no = int(input())
    obj = Solution()
    print(obj.DecToBin(no))