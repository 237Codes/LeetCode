class Solution:
    def countPrimes(self, n: int) -> int:
        countPrime = 0
        myDict = {i: True for i in range(2,n)}
        # base case 
        if n < 2:
            return 0
        # Seive of eratosthenes 
        # checking up to the square root 
        for number in range(2, int(math.sqrt(n)+1)): # 2:True, 3:True, 4:True, 5:True, ,7, 8, 9, 10
            print(number) # 2, 3
            if myDict[number]:
                print(myDict[number])
                # countPrime += 1
                for multiple in range (number*number, n):
                    # print(f"multiple:  {multiple}")
                    # print(myDict[number])
                    if multiple % number == 0:
                        myDict[multiple] = False
                        # print(myDict[multiple])
        count_true = len([trueValue for keys in myDict.values() if trueValue])
        return count_true

