#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int k, int n) 
	{  
	   if(n>1 && n<100000)
	   {        
	       if(k<n)
	       {
	            int temp[n];
	            copy(arr+k,arr+n,temp);
	            copy(arr,arr+k,temp+n-k);
	            copy(temp,temp+n,arr);
	       }   
	       
	   }
	} 
int main()
{  
    int n;
    cin>>n;
    int k;
    cin>>k; 
    int arr[n];
    int i; 
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    } 
    leftRotate(arr,k,n);
    for(i=0; i<n; i++)
    {
        cout<<arr[i];
    } 
}