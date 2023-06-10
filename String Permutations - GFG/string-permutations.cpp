//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void solve(string &s,int l,int r,vector<string> &ans)
	    {
	        if(l==r)
	        {
	           ans.push_back(s);
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
    vector<string> permutation(string S)
    {
       vector<string> ans;
	   solve(S,0,S.length()-1,ans);
	   sort(ans.begin(),ans.end());
	   return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends