#include<iostream>
using namespace std;
int fib(int x) {
   if((x==1)||(x==0))
    {
      	return(x);
   	}
	else 
   	{
    	return(fib(x-1)+fib(x-2));
   	}
}
int main()
{
	int terms,i=0;
	cout<<"enter number of terms till you want fibonaci\n";
	cin>>terms;
	while(i<terms)
	{
		cout<<" "<<fib(i)<<endl;
		i++;
	}
	
}
