class Solution:
    def toHex(self, num: int) -> str:
        if num == 0: return "0"
        
        uNum = num if num > 0 else num + 2**32;
        result = "";
        chars = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'];
        
        while uNum > 0:
            digit = uNum % 16
            result = chars[digit] + result
            uNum //= 16
        
        return result
