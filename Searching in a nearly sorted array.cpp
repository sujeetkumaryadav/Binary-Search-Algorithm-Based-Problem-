#include<iostream>
using namespace std;
int Modified_Binary_search(int arr[],int n,int ele)
{
int start=0;
int end=n-1;
while(start<=end)
{
int mid=start+(end-start)/2; //(start+end)/2
if(ele==arr[mid])
         return mid;
if(mid-1>=start && arr[mid-1]==ele)
         return mid-1;
if(mid+1<=end && arr[mid+1]==ele)
         return mid+1;
else if(ele<arr[mid])
         end=mid-2;
else
         start=mid+2;
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
cout<<Modified_Binary_search(arr,n,ele);
}
