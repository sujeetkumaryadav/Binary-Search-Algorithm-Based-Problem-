#include<iostream>
using namespace std;
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
cout<<Binary_search(arr,n,ele);
}
