#include<iostream>
using namespace std;
int Reverse_Binary_search(int arr[],int n,int ele)
{
int start=0;
int end=n-1;
while(start<=end)
{
int mid=start+(end-start)/2; //(start+end)/2
if(ele==arr[mid])
         return mid;
else if(ele<arr[mid])
         start=mid+1;
else
         end=mid-1;
}
return -1;
}
int Binary_search(int arr[],int n,int ele)
{
int start=0;
int end=n-1;
while(start<=end)
{
int mid=start+(end-start)/2; //(start+end)/2
if(ele==arr[mid])
         return mid;
else if(ele<arr[mid])
         end=mid-1;
else
         start=mid+1;
}
return -1;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
         cin>>arr[i];
int ele;
cin>>ele;
if(n==1)
{
 if(arr[0]==ele)
         cout<<"0";
 else
         cout<<"-1";
}
else
{
if(arr[0]<arr[1])
cout<<Binary_search(arr,n,ele);
else
cout<<Reverse_Binary_search(arr,n,ele);
}
}

