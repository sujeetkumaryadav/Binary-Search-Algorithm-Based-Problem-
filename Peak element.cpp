#include<iostream>
using namespace std;
int Peak_Element(int arr[],int n)
{
int start=0;
   int end=n-1;
   while(start<=end)
   {
       int mid =start+(end-start)/2;
       if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1]))
       return mid;
       else if(arr[mid]<=arr[mid+1])
         start=mid+1;
         else
         end=mid-1;
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
cout<<Peak_Element(arr,n);

}
