#include<iostream>
#include<vector>
using namespace std;

main()
{int i;
double a[]={1.1,2.2,3.3,4.4};

vector<double> v1(a,a+4);
vector<double> v2(3);
cout<<"\nV1\n";
for(i=0;i<v1.size();i++)
cout<<v1[i]<<endl;

 
v1.swap(v2);

while(!v2.empty())
{cout<<v2.back()<<endl;
v2.pop_back();
}
}
