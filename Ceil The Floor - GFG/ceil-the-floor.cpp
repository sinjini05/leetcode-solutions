//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {

    int c=-1,f=-1;

    int c1=0;

    for(int i=0;i<n;i++){

        if(arr[i]<x) f=max(f,arr[i]);

        if(arr[i]>x) 

        { if(c1==0){ c=arr[i]; c1++;}

          else c=min(c,arr[i]);

        }

        if(arr[i]==x){

            c=arr[i];

            f=arr[i];

            break;

        }

    }

    pair<int,int>p(f,c);

    return p;

}