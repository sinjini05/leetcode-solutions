//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {

        for(int i=s.size()-1;i>=0; i--)

        {

            if(s[i]=='1' or s[i]=='3' or s[i]=='5' or s[i]=='7' or      s[i]=='9')

            {

                return s;

            }

            else s.erase(i,1);

        }

        return s;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends