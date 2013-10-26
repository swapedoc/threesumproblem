//Solving 3 sum problem
//swapedoc
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int arr[100]={0},n,j=0,l=0,a=0;
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);

for(int i=0;i<n-3;i++)
{a=arr[i];
j=i+1;
l=n-1;
while(j<l)
{if((a+arr[j]+arr[l])==0)
{cout<<a<<" "<<arr[j]<<" "<<arr[l]<<endl;l=l-1;j=j-1;}
else
if((a+arr[j]+arr[l])>0)
{l=l-1;}
else
{j=j+1;}}}
return 0;

}
