#include<iostream>
using namespace std;
int largest(int arr[], int n)
{
    int i, j; 
    int mx=0,count=0; 
    for(i=0;i<n;i++)
    {
        if(arr[i]>mx)
        {
            count++;
            mx=arr[i];
        }
    } 
    return mx;
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
    largest(arr,n);
}