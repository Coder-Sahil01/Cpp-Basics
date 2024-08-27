//_____________________________________________________________________
//_____________________________________________________________________

//Constructor
    
//_____________________________________________________________________
//_____________________________________________________________________

//In this code compiler gives the garbej value  

/*#include<iostream>
using namespace std;
class A
{

	public: //optional
		int a;
//	A()
//	{
//		a=100;
//	}
	void show()
	{
		cout<<a;
	}

};

main()
{
	A obj;
	obj.show();
}*/



/*#include<iostream>
using namespace std;
class A
{

	public: //optional
		int a;
	A()				//here we create constuctor
	{
		a=100;
	}
	void show()
	{
		cout<<a;
	}

};

main()
{
	A obj;
	obj.show();
}*/







//_____________________________________________________________________
//_____________________________________________________________________

//Destructor
    
//_____________________________________________________________________
//_____________________________________________________________________



/*#include<iostream>
using namespace std;
class A
{

	int a;
	public:	
	A()				//here we create constuctor
	{
		a=100;
		cout<<a<<endl;
	}
	~A()			//here we create deconstuctor
	{
		cout<<"Destroyed object"<<endl;
	}

};

main()
{
	A obj;
	
}*/





//_____________________________________________________________________
//_____________________________________________________________________

//Default Constructor
    
//_____________________________________________________________________
//_____________________________________________________________________



/*#include<iostream>
using namespace std;
class A
{

	int a;
	public:	
	A()				//here we create constuctor
	{
		a=100;
		cout<<a<<endl;
	}

};

main()
{
	A obj;
	
}*/




//_____________________________________________________________________
//_____________________________________________________________________

//Parameterized Constructor
    
//_____________________________________________________________________
//_____________________________________________________________________


/*#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		A(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a<<"		"<<b;
		}
};

main()
{
	A obj(20,50);
	obj.show();
}*/







//_____________________________________________________________________
//_____________________________________________________________________

//Copy Constructor
    
//_____________________________________________________________________
//_____________________________________________________________________

/*#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		A(int x,int y)
		{
			a=x;
			b=y;
		}
		A(A &ref)
		{
			a=ref.a;
			b=ref.b;
		}
		void show()
		{
			cout<<a<<"		"<<b<<endl;
		}
};

main()
{
	A obj(20,50);
	A obj2=obj;
	obj.show();
	obj2.show();
}*/





//_____________________________________________________________________
//_____________________________________________________________________

//Example of All three types of consturctor in one snipet of code

//_____________________________________________________________________
//_____________________________________________________________________



/*#include<iostream>
using namespace std;
class test
{
	private:
		int a,b;
	public:
		test(){
			cout<<"Enter Values: ";
			cin>>a>>b;
			cout<<a<<"	"<<b<<endl;
			
		}
		
		test(int x ,int y)
		{
			a=x;
			b=y;
			
			cout<<"Sum = "<<a+b<<endl;
			
		}
		test(test &obj)
		{
			a=obj.a;
			b=obj.b;
			cout<<"Sub = "<<a-b<<endl;
		}
		
};


int main()
{
	test obj,obj2(150,50);
//	test obj3(obj2);
	test obj3(obj);
	
	return 0;
}*/





