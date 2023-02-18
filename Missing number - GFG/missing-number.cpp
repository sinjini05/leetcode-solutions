//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int arr[], int n)
{
     int s=0;  // for total sum upto n digits
    int c=0;  // for sum of array contents
    
    for(int i=1;i<=n;i++){
        s+=i;
    }
    
    
    for(int i=0;i<n-1;i++){
        c+=arr[i];
    }
    
    return s-c;  // subtract array sum from total and we will get required number 

    // Your code goes here
}