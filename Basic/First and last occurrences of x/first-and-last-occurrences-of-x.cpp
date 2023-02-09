//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    //int Firstoccurrence(int arr[], int n, int key)
    int f=-1, l=-1;
    for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			f=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]==x)
		{
			l=i;
			break;
		}
	}
	vector<int>ans;
	ans.push_back(f);
	ans.push_back(l);
	return ans;
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends