class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1 || n == 4){
            return 1;
        }
        
        if (n == 0 || n%4 != 0){
            return 0;
        }
        return isPowerOfFour(n / 4);
    }
};