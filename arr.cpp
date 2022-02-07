// C++ program to demonstrate array of strings using
// array of strings.
#include <iostream>
#include <algorithm>
#include<math.h>
using namespace std;
int main()
 {
// 	int curr=0,k,n,max_sum,i;
// 	cout<<"\n Enter n:";
// 	cin>>n;
// 	int arr[n];
// 	cout<<"\n Enter "<<n<<" elements :";
// 	for(int i=0;i<n;i++)
// 	cin>>arr[i];
// 	cout<<"\n Enter k:";
// 	cin>>k;
// 	for(i=0;i<k;i++)
// 	curr+=arr[i];
// 	max_sum=curr;
// 	i=1;
// 	for(i=k;i<n;i++)
// 	{
// 		curr+=(arr[i]-arr[i-k]);
// 		max_sum=max(curr,max_sum);
// 	}
//     cout<<"Max sum: "<<max_sum;
  int arr[10];
  int i,j,k,n,temp;
  cout<<"Enter array size(max :10):";
  cin>>n;
  cout<<"\n Enter "<<n<<" elements: ";
  for(i=0;i<n;i++)
  cin>>arr[i];
  cout<<"\n Enter k :";
  cin>>k;
  cout<<"\n Array before reversal :";
  for(i=0;i<n;i++)
  cout<<arr[i]<<" ";
  for(i=0;i<n;i+=k)
  {
	  j=i+k-1;
	  while(j!=((k/2)-1))
	  {
        temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	  }
  }
  cout<<"\n Array after reversal :";
  for(i=0;i<n;i++)
  cout<<arr[i]<<" ";
}
