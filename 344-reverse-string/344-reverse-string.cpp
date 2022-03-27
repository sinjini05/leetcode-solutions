class Solution {
public:
    void reverseString(vector<char>& s) {
        int begin=0,last=s.size()-1;
        while(begin<last){
            swap(s[last],s[begin]);
             begin++;
            last--; 
            
        }
    }
};