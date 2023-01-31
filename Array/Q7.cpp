#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pushZerosToEnd(int arr[], int n) 
	{   
	    int temp[n],j,i;
	    j=0;
	    for(i=0;i<n;i++)
	    {   
            
	        if(arr[i]!=0)
	        {   
	            temp[j] = arr[i];
	            j++;
	        } 
	    } 
	    j=1;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                temp[n-j]= arr[i];
                j++;
            }
        }
        copy(temp,temp+n,arr);
	   
	}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    pushZerosToEnd(arr,n);

    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}