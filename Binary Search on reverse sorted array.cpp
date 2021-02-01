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
         start=mid+1;
else
         end=mid-1;
}
return -1;
}
int main()
{
int arr[]={20,17,15,14,13,12,10,9,8,4};
int n=sizeof(arr)/sizeof(int);
int ele=14;
cout<<Binary_search(arr,n,ele);
}
