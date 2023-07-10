//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
       int count0=0,count1=0,count2=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==0) count0++;
           else if(arr[i]==1) count1++;
           else count2++;
               
       }
       for(int i=0;i<count0;i++)
       {
           arr[i]=0;
       }
       for(int i=count0;i<count0+count1;i++)
       {
           arr[i]=1;
       }
       for(int i=count0+count1;i<n;i++)
       {
           arr[i]=2;
       }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends