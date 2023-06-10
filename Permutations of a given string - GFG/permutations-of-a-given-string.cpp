//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	set<string> st;
	    void solve(string &s,int l,int r,vector<string> &ans)
	    {
	        
	        if(l==r)
	        {
	           st.insert(s);
	           return;
	        }
	        else{
	            for(int i=l;i<=r;i++)
	            {
	                swap(s[l],s[i]);
                    solve(s,l+1,r,ans);
                     swap(s[l],s[i]);
	            }
	        }
	  
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> ans;
		    
		    solve(S,0,S.length()-1,ans);
		    for(auto it: st)
		    {
		        ans.push_back(it);
		    }
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends