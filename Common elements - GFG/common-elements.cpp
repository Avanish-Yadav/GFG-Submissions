//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public: 
       vector<int> rectify(int arr[],int n)
       {
           vector<int> ans;
           for(int i=0;i<n;i++)
           {
              ans.push_back(arr[i]);
              if(arr[i]==arr[i+1])
                ans.pop_back();
           }
           return ans;
       }
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_map<int,int> mp;
            vector<int> a=rectify(A,n1);
            vector<int> b=rectify(B,n2);
            vector<int> c=rectify(C,n3);
            for(int i=0;i<a.size();i++)
            {
                mp[a[i]]++;
            }
            
            for(int i=0;i<b.size();i++)
            {
                mp[b[i]]++;
            }
            
            for(int i=0;i<c.size();i++)
            {
                mp[c[i]]++;
            }
            vector<int> nums;
            for(auto it:mp)
            {
                if(it.second==3)
                 nums.push_back(it.first);
            }
            sort(nums.begin(),nums.end());
            return nums;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends