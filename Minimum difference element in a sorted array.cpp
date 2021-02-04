#include<iostream>
#include<math.h>
using namespace std;
int Bs(int arr[],int n,int ele)
{
int start=0;
int end=n-1;
while(start<=end)
{
int mid=start+(end-start)/2;
if(ele==arr[mid])
         return arr[mid];
else if(ele<arr[mid])
         end=mid-1;
else
         start=mid+1;
}
int a=abs(arr[start]-ele);
int b=abs(arr[end]-ele);
if(a<b)
         return arr[start];
else
       return arr[end];
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
cout<<Bs(arr,n,ele);
}
