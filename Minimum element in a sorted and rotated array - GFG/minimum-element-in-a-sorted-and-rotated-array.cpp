//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
   
class Solution{
public:


  //simply using binary search
int findMin(int arr[], int n){
        int l = 0, h = n-1;
        while(l < h)
        {
            int mid = (l+h)/2;
            
            if(arr[mid] > arr[h])
                l = mid+1;
            else
                h = mid;
        }
        
        return arr[l];
    }
};
 

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends