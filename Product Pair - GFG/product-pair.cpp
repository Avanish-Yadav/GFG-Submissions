//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        if(n==1)
            return 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=i;
        }
        if(x==0){
            if(mp.find(0)!=mp.end()){
                return 1;
            }
            else
                return 0;
        }
        for(auto it:mp){
            if(it.first==0 || x%it.first!=0)
                continue;
            int remain=x/it.first;
            if(mp.find(remain)!=mp.end())
                return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        long long x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.isProduct(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
// } Driver Code Ends