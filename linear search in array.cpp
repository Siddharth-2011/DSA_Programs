#include<iostream>
using namespace std;

int linear_search(int a[],int key,int n)
{
	for(int i=0;i<n;i++)
	{
			if(a[i]==key)
		{
		return i;
		}
	}
	return -1;
}
main()
{
int arr[10],i,m,ele;
cout<<"enter the limit of array\n";
cin>>m;

			cout<<"enter the array\n";
			for(i=0;i<m;i++)
				cin>>arr[i];
	
					cout<<"enter the lement to be searched\n";
					cin>>ele;

			int pos=linear_search(arr, ele, m);
			if(pos==-1)
				cout<<"the element not found\n";
			else
				cout<<"the element is found at\t"<<pos+1;
}
