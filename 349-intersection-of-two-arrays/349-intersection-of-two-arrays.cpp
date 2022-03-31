class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> vec;
        while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]>nums2[j])
            j++;
        else if(nums1[i]<nums2[j])
            i++;
        else{
            if(vec.size()==0 || nums1[i]!=vec[vec.size()-1]){
				vec.push_back(nums1[i]);
			}
            i++;
            j++;
        }
        }
        
         return vec;   
    }
};