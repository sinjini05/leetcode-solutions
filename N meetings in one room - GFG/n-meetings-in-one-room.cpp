//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
static bool  cmp(pair<int,int>l,pair<int ,int>r)
    {
        return (l.second < r.second);
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++){
            arr.push_back({start[i],end[i]});
        }
        sort(arr.begin(),arr.end(),cmp);
        
        int ans=0;
        int prevE=-1;
        for(int i=0;i<n;i++){
            int s=arr[i].first;
            int e=arr[i].second;
            
            if(prevE<s){
                ans++;
                prevE=e;
            }
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends