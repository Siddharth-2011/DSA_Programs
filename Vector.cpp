#include<iostream>
#include<vector>
using namespace std;

main()
{vector<int> v;
int i;
v.push_back(10); //v[0]
v.push_back(11); //v[1]
v.push_back(12); //v[2]
v.push_back(13); //v[3]
v[1]=3;

for(i=0;i<v.size();i++)
cout<<v[i]<<endl;
}
