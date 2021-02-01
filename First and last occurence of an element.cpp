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

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
         cin>>arr[i];
int ele;
cin>>ele;
cout<<FirstOccurence(arr,n,ele)<<endl;
cout<<LastOccurence(arr,n,ele);
}

