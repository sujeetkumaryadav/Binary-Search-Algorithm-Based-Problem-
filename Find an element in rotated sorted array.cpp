//Find an element in Rotated sorted Array
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
int Binary_Search(int arr[],int ele,int start,int end)
{
while(start<=end)
{
int mid=start+(end-start)/2;
if(ele==arr[mid])
         return mid;
else if(ele<arr[mid])
         end=mid-1;
else
         start=mid+1;
}
return -1;
}
int Element_in_Rotated_array(int arr[],int n,int ele)
{
         int start,end;
int index=Right_Array_Rotation(arr,n);
if(index!=-1)
{
if(arr[index]<=ele && arr[n-1]>=ele)
       {
         start=index+1;
         end=n-1;
       }
else{
         start=0;
         end=index-1;
}
return Binary_Search(arr,ele,start,end);
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
cout<<Element_in_Rotated_array(arr,n,ele);
}
