#include<iostream>
using namespace std;
main()
{
	int n,r,sum=0,nn,a[10],s,i;
	cout<<"enter limit of array\n";
	cin>>s;
	
		cout<<"enter array\n";
		for(i=0;i<s;i++)
		cin>>a[i];
		for(i=0;i<s;i++)
		{
		n=a[i];
        

while(n!=0)
		{
			nn=n%10;
			r=nn;
			sum=sum+r;
			n=n/10;
			
		}
		cout<<"sum of digits of number \t"<<sum<<endl;
		sum=0;
		}
}
