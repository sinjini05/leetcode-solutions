//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int A[], int B[], int l1, int l2)
    {
        int sum1=0, sum2=0;
        int answer = 0;
        int aIndex = 0, bIndex = 0;
        while(1) {
            if (aIndex >= l1 || bIndex >= l2) { //any index out of bounds case
                if (aIndex >= l1 && bIndex >= l2) {
                    break;
                } else if (aIndex >= l1) {
                    sum2 += B[bIndex];
                    bIndex++;
                } else if (bIndex >= l2) {
                    sum1 += A[aIndex];
                    aIndex++;
                }
            } else if (A[aIndex] < B[bIndex]) { 
                sum1 += A[aIndex];
                aIndex++;
            } else if (A[aIndex] > B[bIndex]) {
                sum2 += B[bIndex];
                bIndex++;
            } else if (A[aIndex] == B[bIndex]) {
                answer += A[aIndex] + max(sum1,sum2);
                sum1 = 0;
                sum2 = 0;
                aIndex++;
                bIndex++;
            }
        }
        answer += max(sum1,sum2);
        return answer;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends