#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[], int n)
{   
    sort(arr,arr+n);
    int i=0; 
    for(int j=1;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
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
    int k = duplicate(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
    
    }
}