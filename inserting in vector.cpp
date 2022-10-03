#include<iostream>
#include<vector>
using namespace std;

main()
{int i;
int a[]={100,110,120,130};

vector<int> v(a,a+4);
cout<<"\n before\n";
for(i=0;i<v.size();i++)
{cout<<v[i]<<endl;
}

v.insert(v.begin()+2,115);
cout<<"\n after\n";
for(i=0;i<v.size();i++)
{cout<<v[i]<<endl;
}
v.erase(v.begin()+1);

cout<<"\n after deletion\n";
for(i=0;i<v.size();i++)
{cout<<v[i]<<endl;
}

}
