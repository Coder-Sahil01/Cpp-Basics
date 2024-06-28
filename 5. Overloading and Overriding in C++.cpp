//________________________________________________________________________________
//________________________________________________________________________________

// 									Overloading

//________________________________________________________________________________
//________________________________________________________________________________


//Syntax

/*#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
	public:
		void fun()
		{

		}
		
		void fun(int a,int b)
		{
			
		}
};

int main()
{
	return 0;
}*/




//________________________________________________________________________________
//________________________________________________________________________________

//with help of class

/*#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
	int num1=20,num2=25;
	public:
		void fun()
		{
			int sum=num1+num2;
			cout<<"ADDITION = "<<sum<<endl;
		};
		void fun(int a,int b)
		{
			int sub=a-b;
			cout<<"ADDITION = "<<sub<<endl;
		}
};

int main()
{
	A obj;
	obj.fun();
	obj.fun(56,25);
	return 0;
}*/






//________________________________________________________________________________
//________________________________________________________________________________


/*#include<iostream>
using namespace std;
int num1=20,num2=25;
void fun()
{
	int sum=num1+num2;
	cout<<"ADDITION = "<<sum<<endl;
};
void fun(int a,int b)
{
	int sub=a-b;
	cout<<"SUBTRACTION = "<<sub<<endl;
}


int main()
{
	fun();
	fun(56,25);
	return 0;
}*/







//________________________________________________________________________________
//________________________________________________________________________________

//									Overriding

//________________________________________________________________________________
//________________________________________________________________________________



//Syntax

/*#include<iostream>
using namespace std;
class A
{
	public:
		void fun()
		{

		}
};


class B : public A
{
	public:
		void fun()
		{

		}
};

int main()
{
	return 0;
}*/






/*#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
	public:
		void fun()
		{
			cout<<"SAHIL"<<endl;
		}
	
};

class B: public A
{
	public:
		void fun()
		{
			cout<<"KUSHWAHA"<<endl;
		}	
};

int main()
{
	B obj;
//	obj.fun();		//IT'S CALL THE CLASS B FUNCTION
	obj.A::fun();	//IT'S CALL THE CLASS A FUNCTION
	
	return 0;
}*/




//________________________________________________________________________________
//________________________________________________________________________________

// via using pointer

/*#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
	public:
		void fun()
		{
			cout<<"SAHIL"<<endl;
		}
	
};

class B: public A
{
	public:
		void fun()
		{
			cout<<"KUSHWAHA"<<endl;
		}	
};

int main()
{
	A *ptr;
	B obj;
	
	ptr=&obj;
	ptr->fun(); 	//IT'S CALL THE CLASS A FUNCTION
	
	
	
	return 0;
}*/


//if we want to Execute class B object using Above method then we use virtual
//keyword in function  the Example is given below



/*#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
	public:
		virtual void fun()
		{
			cout<<"SAHIL"<<endl;
		}
	
};

class B: public A
{
	public:
		void fun()
		{
			cout<<"KUSHWAHA"<<endl;
		}	
};

int main()
{
	A *ptr;
	B obj;
	
	ptr=&obj;
	ptr->fun(); 	//IT'S CALL THE CLASS A FUNCTION
	
	
	
	return 0;
}*/



