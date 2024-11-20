class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        if not accounts:
            return 0
        
        max_wealth = 0
        wealth_amount = 0
        
        for account in accounts:
            wealth_amount = 0
            #print(account)
            for wealth in account:
                #print(wealth)
                wealth_amount += wealth
            if wealth_amount > max_wealth:
                max_wealth = wealth_amount

        return max_wealth