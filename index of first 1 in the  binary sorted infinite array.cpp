#include<iostream>
using namespace std;
int Binary_Search_Of_First_Occurence(int arr[],int start,int end,int ele)
{
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
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
         cin>>arr[i];
int ele=1;
int start=0;
int end=1;
while(ele>arr[end])
{
start=end;
end=end*2;
}
cout<<Binary_Search_Of_First_Occurence(arr,start,end,ele);
}
