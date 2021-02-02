#include<iostream>
using namespace std;
int Floor_Of_Element(int arr[],int n,int ele)
{
int start=0;
int ans=-1;
while(start<=end)
{
int mid=start+(end-start)/2;
if(ele==arr[mid])
         return arr[mid];
else if(ele<arr[mid])
         end=mid-1;
else if(ele>arr[ mid])
{
ans=arr[mid];
start=mid+1;
}
}
return ans;
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
cout<<Floor_Of_Element(arr,n,ele);
}
