#include<iostream>
using namespace std;
int prime(int x){
    int flag=0;
    for(int i=2;i<x/2;i++){
       if(x%i==0)
       flag=1;
       break;
    }
    if(flag==0)
    return 1;

    else
    return 0;
}
int prime1(int n){
    int f=1;
    int m=1;
    while(m!=n){
         int fc=prime(f);
         if(fc==1)
         m++;

         f++;
    }
    return f;
}
int main(){
    int cnt=0;
    int n;
    cin>>n;
    int a=prime1(n);
    cout<<n<<"th prime no. is"<<a; 

}