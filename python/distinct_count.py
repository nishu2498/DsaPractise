class Solution():
    def distinct(self,arr,no):
        count = 0
        isDistinct = True

        for i in range(0,no):
            isDistinct = True
            for j in range(0,i):
                if arr[i] == arr[j]:
                    isDistinct = False
                    break
            if isDistinct == True:
                count += 1
        
        return count

if __name__ == '__main__':
    no = int(input())
    array = [int(x) for x in input().split()]
    obj = Solution()
    print(obj.distinct(array,no))

