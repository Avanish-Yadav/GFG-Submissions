//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        sort(arr,arr+n);
        
        for(int i=0;i<n;i++){
            int start=i+1,end=n-1;
            int remain=X-arr[i];
            while(start<end){
                if(arr[start]+arr[end]==remain)
                    return 1;
                else if(arr[start]+arr[end]>remain)
                    end--;
                else
                    start++;
            }
            
        }
        return 0;
    }
        

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends