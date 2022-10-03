#include<iostream>
using namespace std;
int factorial(int n)
{
	int facto=1;
	if(n==0)
	return 1;
	else
	{
		facto=factorial(n-1)*n;
	}
	return facto;
}
int main()
{
	int m;
	cout<<"input the number whose factorial is to be calculated\n";
	cin>>m;
	int result=factorial(m);
	cout<<"\n the factorial is\t"<<result;
}
