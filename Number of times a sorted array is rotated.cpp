#include<iostream>
using namespace std;
int Right_Array_Rotation(int arr[],int n)
{
int start=0;
int end=n-1;
int pivot=-1;
while(start<=end)
{
if(arr[start]<=arr[end])
         return start;
int mid=start+(end-start)/2;
int next=(mid+1)%n;
int prev=(mid-1+n)%n;
if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
{
pivot=mid;
break;
}
if(arr[start]<=arr[mid])
         start=mid+1;
else if(arr[mid]<=arr[end])
         end=mid-1;
}
 return pivot;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
         cin>>arr[i];
cout<<Right _Array_Rotation(arr,n);
}
