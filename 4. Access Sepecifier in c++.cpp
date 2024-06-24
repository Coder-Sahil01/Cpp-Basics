/*
private --->1. Member of class
			2. Friend				*/


//____________________________________________________________________________________________


/*#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:
		int a,b;
	public:
		void show()
		{
			a=10;b=20;
			cout<<a<<"	"<<b;
			
		}
		friend class B;
		
};

class B
{
	public:
		void disp(A ref)
		{
			ref.a=30;
			ref.b=50;
			cout<<endl;
			cout<<ref.a<<"	"<<ref.b;
		}
};

main()
{
	A obj;
	B obj2;
	obj.show();
	obj2.disp(obj);
}*/





//____________________________________________________________________________________________


/*
protected --->1. base class
			2. derive class			*/


//____________________________________________________________________________________________


/*#include<iostream>
#include<conio.h>
using namespace std;
class Base{
	protected:
 		int a,b;
 		public:
 			void show()
 			{
 				a=15; b=30;
 				cout<<a<<"		"<<b<<endl;
			}
 };


class Derive:public Base
{
	public:
 			void disp()
 			{
 				a=45; b=60;
 				cout<<a<<"		"<<b<<endl;
			}
};

main()
{
	class Derive obj;
	obj.disp();
	obj.show();
}*/



/*
public --->1. Inside class 
			2. Outside class			*/


//____________________________________________________________________________________________



/*#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		int a;
		void show ();
		{
			a=20;
			cout<<"Inside class "<<a<<endl;
		}
};



//void A::show ()
//	{
//		a=20;
//		cout<<"Outside class "<<a<<endl;
//	}


main()
{
	A obj;
	obj.show();
	obj.a=42;
	cout<<"Outside the Class "<<obj.a;

}*/


