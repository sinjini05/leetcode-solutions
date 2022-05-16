class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char first=coordinates[0];
        int second=coordinates[1];
        int value = (first-'a') + 1;
        if((value%2!=0 && second%2!=0) || (value%2==0 && second%2==0))
            return false;
        else
            return true;
    }
};