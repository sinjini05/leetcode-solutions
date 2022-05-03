class Solution {
    void solve(vector<int>nums, vector<int>output,int index,vector<vector<int>>&ans){
        if(index>=nums.size()){       //base case
            ans.push_back(output);
            return;
        }
        solve(nums,output,index+1,ans);    //exclude
        
        int element=nums[index];          //include
        output.push_back(element);
        solve(nums,output,index+1,ans);  
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        vector<int>output;
        solve(nums,output,index,ans);
        return ans;
        
        
    }
};