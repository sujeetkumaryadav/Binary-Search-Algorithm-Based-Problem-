#include<iostream>
using namespace std;
int Binary_Search(int arr[],int start,int end,int ele)
{
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
int Position_Of_Element(int arr[],int n,int ele)
{
int start=0;
int end=1;
while(ele>end)
{
start=end;
end=end*2;
}
return Binary_Search(arr,start,end,ele);
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
cout<<Position_Of_Element(arr,n,ele);
}
