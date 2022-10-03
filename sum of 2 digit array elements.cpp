#include<iostream>
using namespace std;
main()
{int i,sum=0,a[5]={25,6,27,5,20};

	for(i=0;i<5;i++)
	{if(a[i]>9&&a[i]<100)
	sum+=a[i];
	}
	cout<<sum;
}
