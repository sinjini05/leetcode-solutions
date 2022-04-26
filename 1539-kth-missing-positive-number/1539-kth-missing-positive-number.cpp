class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s=0;
        int e=arr.size();
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]-(mid+1)>=k){
                e=mid;
            }
            else{
                s=mid+1;
            }
             mid=s+(e-s)/2;
        }
        return s+k;
        
        
    }
};