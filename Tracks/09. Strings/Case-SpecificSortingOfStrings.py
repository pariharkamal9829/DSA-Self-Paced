# Rest of the code is already given in driver code time complexity problem

class Solution:
    def caseSort(self, s, n):
        lower_chars = []
        upper_chars = []
        
        for c in s:
            if c.islower():
                lower_chars.append(c)
            elif c.isupper():
                upper_chars.append(c)
        
        lower_chars.sort()
        upper_chars.sort()
        
        sorted_string = []
        lower_idx = upper_idx = 0
        
        for c in s:
            if c.islower():
                sorted_string.append(lower_chars[lower_idx])
                lower_idx += 1
            elif c.isupper():
                sorted_string.append(upper_chars[upper_idx])
                upper_idx += 1
        
        return ''.join(sorted_string)
