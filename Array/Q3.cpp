#include<iostream>
using namespace std;
bool sorted(int arr[], int n)
{
    if(n==1)
    {
        cout<<"1";
    } 
    if(n==0)
    {
        return false;
    } 
    if(n>1 && n<100000)
    {
    for(int i=1; i<n; i++)
    {
        if(arr[i-1]>arr[i])
        {
            return false;
        } 

    } 
    return true;
    }
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
   cout<<sorted(arr,n);
    
}