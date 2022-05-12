class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles,k=numExchange,left=ans;
        while(left>=k){
            int x = left/k;
            int y = left%k;
            ans+=x;
            left = x+y;
        }
        return ans;
    }
};