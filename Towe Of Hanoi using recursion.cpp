#include<iostream>
using namespace std;
void TOH(int n, char from, char to, char temp)
{
	if(n==0)
	return ;
	else
	{
		TOH(n-1,from,temp,to);
		cout<<"Move Ring\t"<<n<<"\tfrom\t"<<from<<"\tto\t"<<to<<"\n";
		TOH(n-1,temp,to,from);
	}
}
int main()
{
	TOH(3,'L','R','C');
	return 0;
}
