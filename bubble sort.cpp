#include<iostream>
using namespace std;
void bubble_sort(int a[10],int n)
{for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
		
			}
		
	}
}

main()
{	int m,i,arr[10];
	cout<<"enter the array limit\n";
	cin>>m;

		cout<<"enter array\n";
		for(i=0;i<m;i++)
		cin>>arr[i];

			bubble_sort(arr,m);

		cout<<"array after swaping\n";
		for(i=0;i<m;i++)
		cout<<arr[i]<<"\t";
}
