# Rest of the code is already given
time complexity problem


class Solution:    
    def grayToBinary(self, n):
        binary = 0
        while n:
            binary ^= n
            n >>= 1
        return binary
