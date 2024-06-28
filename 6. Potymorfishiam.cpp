//________________________________________________________________________________
//________________________________________________________________________________

// 									Polymorphism

//________________________________________________________________________________
//________________________________________________________________________________

// Compile time Polymorphism


/*#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
	double a,b;		// if we write int then we cant get float as result but if we
					//write double or float then we get those datatype and int also 
	public:
		void show(int x, int y)
		{
			a=x; 
			b=y;
			cout<<a<<"		"<<b<<endl;
			
		}
		
		void show(double x, double y)
		{
			a=x; 
			b=y;
			cout<<a<<"		"<<b<<endl;
			
		}
		
};

int main()
{
	
	A obj;
	obj.show(10,20);
	obj.show(12.2015,56.1202);
	return 0;
}*/



//________________________________________________________________________________
//________________________________________________________________________________

// 									Polymorphism

//________________________________________________________________________________
//________________________________________________________________________________

// Run time Polymorphism


/*#include<iostream>
using namespace std;
class A
{
	public:
		virtual void show()  //here we write virtual than its ignor by compile if
							 //we want to excute class A function then remove virtual
		{
			cout<<"Hii !! I am Base class";
		}
};


class B : public A
{
	public:
		void show()
		{
			cout<<"Hii !! I am Derive class";
		}
};

int main()
{
	A *p;
	B obj;
	p=&obj;
	p->show();  //Excute base function
	
	
	return 0;
}*/



