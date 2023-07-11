//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
    vector<int> nums;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    
    for(auto it:mp){
        if(it.second>1)
          nums.push_back(it.first);
    }
    if(nums.size()==0){
        nums.push_back(-1);
        return nums;
    }
    else
      sort(nums.begin(),nums.end());
      return nums;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends