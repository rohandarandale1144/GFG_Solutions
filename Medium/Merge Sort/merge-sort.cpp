//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int an=m-l+1;
        int bn=r-m;

    int a1[an], b1[bn];
    for(int i=0;i<an;i++)
    {
        a1[i]=arr[l+i];
    }
    for(int j=0;j<bn;j++)
    {
        b1[j]=arr[m+1+j];
    }
    int i=0, j=0, k=l;
    
    while(i<an && j<bn)
    {
        if(a1[i]<b1[j])
        {
            arr[k++]=a1[i++];
        }
        else
        {
            arr[k++]=b1[j++];
        }
    }
    while(i<an)
    {
        arr[k++]=a1[i++];
    }
    while(j<bn)
    {
        arr[k++]=b1[j++];
    }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
        return;

        int mid;
        mid=(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends