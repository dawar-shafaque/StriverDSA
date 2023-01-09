#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
void print2largest(int arr[], int n) 
    { 
        sort(arr,arr+n);
        cout<<arr[1]<<endl;
        cout<<arr[n-2];

    }
int main()
{
    int n;
    cin>>n; 
    int arr[n];
    int i; 
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    } 
    print2largest(arr,n);
}