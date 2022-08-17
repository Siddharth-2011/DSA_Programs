#include <iostream>
using namespace std;
void display(int a[],int size);
 
int insert(int a[], int n, int key, int pos)
{
	int i;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];
 
    // insert x at pos
    a[pos - 1] = key;
 
	return n;
}
 
int main(void)
{
    int arr[6] = { 10,20,30 };
    int n = 3;
	int key=15;
	int pos=1;
	//insert element key at given pos 
	n=insert(arr,n,key,pos);
	//display array
	display(arr,n);
    return 0;
}
void display(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\t";
    }	
    cout<<endl;
}


