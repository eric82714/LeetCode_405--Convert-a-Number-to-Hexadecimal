class Solution {
public:
    string toHex(int num) {
        if (num == 0) return string("0");
        
        unsigned uNum = num;
        string result;
        char chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        
        while(uNum > 0) {
            unsigned digit = uNum % 16;
            result = chars[digit] + result;
            uNum /= 16;
        }
        
        return result;
    }
};
