//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	   vector<int> nums1;
	   vector<int> nums2;
	   vector<int> nums3;
	   
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]>=0)
	            nums1.push_back(arr[i]);
	       else
	            nums2.push_back(arr[i]);
	   }
	   
	   for(int i=0,j=0,k=0;i<n;i++)
	   {
	       if(j<nums1.size())
	           nums3.push_back(nums1[j++]);
	       if(k<nums2.size())
	            nums3.push_back(nums2[k++]);
	   }
	   for(int i=0;i<n;i++)
	   {
	       arr[i]=nums3[i];
	   }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends