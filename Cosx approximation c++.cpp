/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

//degree to radian conversion
double rad(double x)
{
	double r=x*(3.14/180);
	return r;	
}

//power 
double power(double y, int n)
{
	
	double pw=pow(y,n);
	return pw;
}

//factorial
double fact(double p)
{
	
	double f=1;
	for(int i=0;i<p;i++)
	{
		f=f*(i+1);
	}
	
	return f;

}


int main()

   {
   
	double a;
	cout<<"Enter the angle in dgree"<<endl;
	cin>>a;
	
	int m;
	cout<<"enter the repetion number"<<endl;
	cin>>m;
	
	
	

//looping

double cosx=0;
double b=rad(a);

for(int i=0;i<m;i++)
{
	
	cosx=cosx+(pow(-1,i)*pow (b,2*i)/fact(2*i));
    
}
cout<<"approx value of cosx is "<<cosx<<endl;

return 0;

}

