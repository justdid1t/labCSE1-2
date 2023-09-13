//In this problem we have apply Binary Search to find an index of a target value.
//In order to apply Binary Search the array must be in sorted order,so we applied bubble sort algorithm

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    //sort(arr,arr+n);
    //bubble sort

    for(int i=1; i<n;i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    int t; cin>>t;

    int l=0,h=n-1,indx = -1;
    while(l <= h)
    {
        int mid = (l+h)/2;
        if(arr[mid] == t) {indx = mid; break;}
        else if(arr[mid] > t)
        {
            h = mid-1;
        }
        else l = mid+1;
    }

    cout<<indx<<endl;

    return 0;
}

