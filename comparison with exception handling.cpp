//WAP to compare two positive numbers and handle all exception that may occur
#include<iostream>
using namespace std;
void compare(int num1,int num2);

main()
{int a,b;
cout<<"enter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
compare(a,b);
}

void compare(int num1, int num2)
{
	try
    {if(num1<=0||num2<=0)
     {   throw('a');
	   }
	else
	{  if(num1>num2)
	    {cout<<num1<<"\nis greater\n";
	    }
	    else if(num2>num1)
	    {cout<<num2<<"\nis greater\n";
		}
		else
		{cout<<num1<<"="<<num2;
		}
	}
	}

      catch(int i)
        {cout<<"\n expression caught either a or b is less than or equals to zero\n";
        }
      catch(char i)
        { cout<<"\n a or b is equals to zero correct it\n";
      }
}
