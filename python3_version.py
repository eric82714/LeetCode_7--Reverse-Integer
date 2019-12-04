class Solution:
    def reverse(self, x: int) -> int:
        negative = x < 0
        x = abs(x)
        reversed_x = 0
        
        while x != 0:
            reversed_x = reversed_x * 10 + x % 10
            x //= 10
            
        if reversed_x > 2**31 - 1:
            return 0
        
        return reversed_x if not negative else -reversed_x
