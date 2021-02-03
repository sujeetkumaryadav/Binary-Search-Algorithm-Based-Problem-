#include<iostream>
using namespace std;
char Next_Alphabet(char arr[],int n,char ele)
{
int start=0;
int end=n-1;
char res='#';
while(start<=end)
{
int mid=start+(end-start)/2;
if(arr[mid]==ele)
         start=mid+1;
else if(ele<arr[mid])
{
res=arr[mid];
end=mid-1;
}
else
         start=mid+1;
}
return res;
}
int main()
{
int n;
cin>>n;
char arr[n];
for(int i=0;i<n;i++)
         cin>>arr[i];
         char ele;
         cin>>ele;
cout<<Next_Alphabet(arr,n,ele);
}
