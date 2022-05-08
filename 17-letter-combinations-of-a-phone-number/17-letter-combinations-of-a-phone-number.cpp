class Solution {
    void solve(string output,vector<string>& ans,int index,string mapping[],string digits){
        if(index >= digits.length()){      //base case
            ans.push_back(output);
            return ;
        }
        int number=digits[index]-'0';
        string value=mapping[number];
        
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(output,ans,index+1,mapping,digits);
            output.pop_back();
            
        }       
    }
public:
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output="";
        int index=0;
        if(digits.length()==0){
            return ans;
        }
        string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(output,ans,index,mapping,digits);
        return ans;    
    }
};