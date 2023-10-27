//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int arr[], int n, int X)  
{
    sort(arr,arr+n);
    if(n<4)
        return 0;
    for(int i=0;i<n-2;i++){
        int target=X-arr[i];
        for(int j=i+1;j<n-1;j++){
            int start=j+1,end=n-1;
            int remain=target-arr[j];
            while(start<end){
                if(arr[start]+arr[end]==remain)
                    return 1;
                else if(arr[start]+arr[end]>remain)
                    end--;
                else
                    start++;
            }
            
        }
    }
        return 0;
}