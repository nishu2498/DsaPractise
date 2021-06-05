class Solution():
    def atm(self,withdrawl,account_balance):
        if withdrawl <= account_balance and withdrawl % 5 == 0:
            return (account_balance-withdrawl-0.50)
        else:
            return account_balance

if __name__ == "__main__":
    withdrawl_amount,account_balance = [float(x) for x in input().split()]
    obj = Solution()
    print(obj.atm(withdrawl_amount,account_balance))
    
        
