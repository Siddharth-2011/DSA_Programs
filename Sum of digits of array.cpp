#include<iostream>
using namespace std;
main()
{
int n,sum=0,r,m,i,a[10];

	cout<<"enter the limit m\n";
	cin>>m;
		
		cout<<"enter the array\n";
		for(i=0;i<m;i++)
		cin>>a[i];
		
	for(i=0;i<m;i++)
	{
		n=a[i];	
		while(n==0)
		{
			n=n%10;
			r=n;
			sum+=r;
			cout<<"sum of element is\t"<<sum;
		
	}
}
}
