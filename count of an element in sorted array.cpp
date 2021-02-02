#include<iostream>
using namespace std;
int FirstOccurence(int arr[],int n,int ele)
{
int start=0;
int end=n-1;
int res=-1;
while(start<=end)
{
int mid=start+(end-start)/2;
if(ele==arr[mid])
{
res=mid;
end=mid-1;
}
else if(ele<arr[mid])
         end=mid-1;
else
         start=mid+1;
}
return res;
}
int LastOccurence(int arr[],int n,int ele)
{
int start=0;
int end=n-1;
int res=-1;
while(start<=end)
{
int mid=start+(end-start)/2;
if(ele==arr[mid])
{
res=mid;
start=mid+1;
}
else if(ele<arr[mid])
         end=mid-1;
else
         start=mid+1;
}
return res;
}
int Count(int arr[],int n,int ele)
{
if((FirstOccurence(arr,n,ele)==-1)||(LastOccurence(arr,n,ele)==-1))
         return 0;
  return   (LastOccurence(arr,n,ele)-FirstOccurence(arr,n,ele))+1;
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
cout<<Count(arr,n,ele);
}


