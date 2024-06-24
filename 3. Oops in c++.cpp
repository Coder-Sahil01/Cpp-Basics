

//							 object oriented programing in c++

//_____________________________________________________________________________________________
//_____________________________________________________________________________________________

//													Basics of classes 

//_____________________________________________________________________________________________
//_____________________________________________________________________________________________



/*#include<iostream>
using namespace std;

class Persons{
	private:
		int age;
		string name;
		string address;
	public:
		void input(){
			cout<<"Enter Your AGE: ";
			cin>>age;
			cout<<"Enter Your Name: ";
			cin>>name;
			cout<<"Enter Your Address: ";
			cin>>address;
		}
		void show(){
			cout<<"Age := "<<age<<endl;
			cout<<"Name := "<<name<<endl;
			cout<<"Address:= "<<address<<endl;
		}
};


main()
{
	Persons Sahil,Mohit,Rohit;
	
	Sahil.input();
	Sahil.show();
	
	Mohit.input();
	Mohit.show();
	
	Rohit.input();
	Rohit.show();

}*/





//_____________________________________________________________________________________________
//_____________________________________________________________________________________________

//														local class
 
//_____________________________________________________________________________________________
//_____________________________________________________________________________________________

/*#include<iostream>
#include<conio.h>
using namespace std;
void fun(){
	class A
	{
		private:  //for data member
			int a,b;
		public:	// for member function
			void show()
			{
				cout<<"Enter two number: ";
				cin>>a>>b;
				cout<<a<<"	"<<b;
			}
	};
	A obj;
	obj.show();
}
main()
{
//	clrscr();
	fun();

}*/





//_____________________________________________________________________________________________
//_____________________________________________________________________________________________

//														global class
 
//_____________________________________________________________________________________________
//_____________________________________________________________________________________________



/*#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	private:  //for data member
		int a,b;
	public:	// for member function
		void input()
		{
			cout<<"Enter two number: ";
			cin>>a>>b;
		}
		
		void show()
		{
			cout<<a<<"	"<<b;
		}
};

class B:public A
{
	public:
		void disp()
		{
			cout<<endl<<a<<endl<<b;
		}
};
	

main()
{

//	A obj;
	B obj2;
	obj2.input();
	obj2.show();
	obj2.disp();
	
}
*/




/*#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	
	public:
		class B   //Member variable of class A
		{
			int a,b;
			public:		
			void input()	//Member Function of class B
			{
				cout<<"Enter two number: ";
				cin>>a>>b;
			}
		
			void show()
			{
				cout<<a<<"	"<<b;
			}
		};
};

main()
{
	A::B obj;
	obj.input();
	obj.show();
}*/



//_____________________________________________________________________________________________

//program to write string using class .
//_____________________________________________________________________________________________


/*#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	
	public:
		void show()
	{
		cout<<"Hello World !!.   Welcome in the Coding..... ";
	}
};


main()
{
	A obj;
	obj.show();
	
}

*/







//_____________________________________________________________________________________________

//program to add two numbers using class | sum of two numbers using classes in c++

//_____________________________________________________________________________________________



/*#include<iostream>
#include<conio.h>
using namespace std;
class Add
{
	int a,b,c;
	public:
		void input()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void sum()
		{
			c=a+b;
		}
		void disp()
		{
			cout<<"Sum = "<<c;
		}
	
};


main()
{
	Add obj;
	obj.input();
	obj.sum();
	obj.disp();
}*/





//_____________________________________________________________________________________________


//program to multiply two numbers using class | Multiplication of two numbers using class in


//_____________________________________________________________________________________________


/*#include<iostream>
#include<conio.h>
using namespace std;
class Add
{
	int a,b,c;
	public:
		void input()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void mul()
		{
			c=a*b;
		}
		void disp()
		{
			cout<<"Sum = "<<c;
		}
	
};


main()
{
	Add obj;
	obj.input();
	obj.mul();
	obj.disp();
}*/





//_____________________________________________________________________________________________


//										inheritance

//_____________________________________________________________________________________________


//									1. 	single inheritance


//_____________________________________________________________________________________________

/*#include<iostream>
#include<conio.h>
using namespace std;

class base
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter The Number: ";
			cin>>a>>b;
		}
		void show()
		{
			cout<<"A = "<<a<<"		"<<"B = "<<b<<endl;
			
		}
};

class derive:public base
{
	int m,n;
	public:
		void getdata()
		{
			cout<<"Enter The Number: ";
			cin>>m>>n;
		}
		void disp()
		{
			cout<<"M = "<<m<<"		"<<"N = "<<n<<endl;
		}
			
};

main()
{
	base obj1;
	derive obj2;
	
//	obj1.input();
//	obj1.show();
	
	obj2.input();
	obj2.show();
	obj2.getdata();
	obj2.disp();
}*/






/*#include<iostream>
#include<conio.h>
using namespace std;

class base
{
	protected:
		int a,b;
	public:
		void input()
		{
			cout<<"Enter The Number: ";
			cin>>a>>b;
		}
		void show()
		{
//			cout<<"A = "<<a<<"		"<<"B = "<<b<<endl;
			
		}
};

class derive:public base
{
	int m,n;
	public:
		void getdata()
		{
			cout<<"Enter The Number: ";
			cin>>m>>n;
		}
		void disp()
		{
			cout<<"M = "<<m<<"		"<<"N = "<<n<<endl;
			cout<<"A = "<<a<<"		"<<"B = "<<b<<endl;
		}
			
};

main()
{
	base obj1;
	derive obj2;
	
//	obj1.input();
//	obj1.show();
	
	obj2.input();
//	obj2.show();
	obj2.getdata();
	obj2.disp();
}*/







/*#include<iostream>
#include<conio.h>
using namespace std;

class base
{
	protected:
		int a,b;
	public:
		void input()
		{
			cout<<"Enter The Number: ";
			cin>>a>>b;
		}
		void show()
		{
//			cout<<"A = "<<a<<"		"<<"B = "<<b<<endl;
			
		}
};

class derive:public base
{
	int m,n;
	public:
		void getdata()
		{
			cout<<"Enter The Number: ";
			cin>>m>>n;
		}
		void disp()
		{
			cout<<"M = "<<m<<"		"<<"N = "<<n<<endl;
			cout<<"A = "<<a<<"		"<<"B = "<<b<<endl;
		}
			
};

main()
{
//	base obj1;
	derive obj2;
	
//	obj1.input();
//	obj1.show();
	
	obj2.input();
//	obj2.show();
	obj2.getdata();
	obj2.disp();
}*/




//_____________________________________________________________________________________________


//									2. 	Multi level inheritance


//_____________________________________________________________________________________________



/*#include<iostream>
#include<conio.h>
using namespace std;

class base
{
	int a;
	public:
		void input()
		{
			cout<<"Enter The Number: ";
			cin>>a;
		}
		void show()
		{
			cout<<"A = "<<a<<endl;
			
		}
};

class derive1:public base
{
	int b;
	public:
		void getdata()
		{
			cout<<"Enter The Number: ";
			cin>>b;
		}
		void disp()
		{
			cout<<"B = "<<b<<endl;
		}
			
};




class derive2:public derive1
{
	int c;
	public:
		void getdata1()
		{
			cout<<"Enter The Number: ";
			cin>>c;
		}
		void disp1()
		{
			cout<<"C = "<<c<<endl;
		}
			
};




main()
{
	base obj1;
	derive1 obj2;
	derive2 obj3;
	
	obj1.input();
	obj1.show();
	
	obj2.getdata();
	obj2.disp();
	
	obj3.getdata1();
	obj3.disp1();
}*/











/*#include<iostream>
#include<conio.h>
using namespace std;

class base
{
	int a;
	public:
		void input()
		{
			cout<<"Enter The Number: ";
			cin>>a;
		}
		void show()
		{
			cout<<"A = "<<a<<endl;
			
		}
};

class derive1:public base
{
	int b;
	public:
		void getdata()
		{
			cout<<"Enter The Number: ";
			cin>>b;
		}
		void disp()
		{
			cout<<"B = "<<b<<endl;
		}
			
};




class derive2:public derive1
{
	int c;
	public:
		void getdata1()
		{
			cout<<"Enter The Number: ";
			cin>>c;
		}
		void disp1()
		{
			cout<<"C = "<<c<<endl;
		}
			
};




main()
{
	derive2 obj3;
	
	obj3.input();
	obj3.show();
	
	obj3.getdata();
	obj3.disp();
	
	obj3.getdata1();
	obj3.disp1();
}*/







/*#include<iostream>
#include<conio.h>
using namespace std;

class base
{
	protected:
		int a;
	public:
		void input()
		{
			cout<<"Enter The Number: ";
			cin>>a;
		}
//		void show()
//		{
//			cout<<"A = "<<a<<endl;
//			
//		}
};

class derive1:public base
{
	int b;
	public:
		void getdata()
		{
			cout<<"Enter The Number: ";
			cin>>b;
		}
		void disp()
		{
			cout<<"B = "<<b<<endl;
			cout<<"A = "<<a<<endl;
		}
			
};




class derive2:public derive1
{
	int c;
	public:
		void getdata1()
		{
			cout<<"Enter The Number: ";
			cin>>c;
		}
		void disp1()
		{
			cout<<"C = "<<c<<endl;
		}
			
};




main()
{
	derive2 obj3;
	
	obj3.input();
//	obj3.show();
	
	obj3.getdata();
	obj3.disp();
	
	obj3.getdata1();
	obj3.disp1();
}*/









/*#include<iostream>
#include<conio.h>
using namespace std;

class base
{
	protected:
		int a;
	public:
		void input()
		{
			cout<<"Enter The Number: ";
			cin>>a;
		}
//		void show()
//		{
//			cout<<"A = "<<a<<endl;
//			
//		}
};

class derive1:public base
{
	protected:
		int b;
	public:
		void getdata()
		{
			cout<<"Enter The Number: ";
			cin>>b;
		}
//		void disp()
//		{
//			cout<<"B = "<<b<<endl;
//			cout<<"A = "<<a<<endl;
//		}
			
};




class derive2:public derive1
{
	int c;
	public:
		void getdata1()
		{
			cout<<"Enter The Number: ";
			cin>>c;
		}
		void disp1()
		{
			cout<<"C = "<<c<<endl;
			cout<<"B = "<<b<<endl;
			cout<<"A = "<<a<<endl;
		}
			
};




main()
{
	derive2 obj3;
	
	obj3.input();
//	obj3.show();
	
	obj3.getdata();
//	obj3.disp();
	
	obj3.getdata1();
	obj3.disp1();
}*/








//_____________________________________________________________________________________________


//									3. 	Multiple inheritance


//_____________________________________________________________________________________________



/*#include<iostream>
#include<conio.h>
using namespace std;
class base1
{
	int a,b,c;
	public:
		void input()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show()
		{
			c=a+b;
			cout<<"Sum = "<<c<<endl;
		}
	
	
};



class base2
{
	int a,b,c;
	public:
		void input1()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show1()
		{
			c=a-b;
			cout<<"Sub = "<<c<<endl;
		}
	
};



class derive:public base1,public base2
{
	int a,b,c;
	public:
		void input3()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show3()
		{
			c=a*b;
			cout<<"Mul = "<<c<<endl;
		}
	
};



main()
{
	base1 obj1;
	base2 obj2;
	derive obj3;
	
	obj1.input();
	obj1.show();
	
	obj2.input1();
	obj2.show1();
	
	obj3.input3();
	obj3.show3();
}*/








/*#include<iostream>
#include<conio.h>
using namespace std;
class base1
{
	int a,b,c;
	public:
		void input()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show()
		{
			c=a+b;
			cout<<"Sum = "<<c<<endl;
		}
	
	
};



class base2
{
	int a,b,c;
	public:
		void input1()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show1()
		{
			c=a-b;
			cout<<"Sub = "<<c<<endl;
		}
	
};



class derive:public base1,public base2
{
	int a,b,c;
	public:
		void input3()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show3()
		{
			c=a*b;
			cout<<"Mul = "<<c<<endl;
		}
	
};



main()
{
//	base1 obj1;
//	base2 obj2;
	derive obj3;
	
//	obj1.input();
//	obj1.show();
//	
//	obj2.input1();
//	obj2.show1();
	
	obj3.input3();
	obj3.show3();
	obj3.input();
	obj3.show();
	obj3.input1();
	obj3.show1();
}*/










//_____________________________________________________________________________________________


//									4. herarical	inheritance


//_____________________________________________________________________________________________





/*#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show()
		{
			cout<<"Sum = "<<a+b<<endl;
		}
	
	
};



class derive1:public base
{
	int a,b;
	public:
		void input1()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show1()
		{
			cout<<"Sub = "<<a-b<<endl;
		}
	
};



class derive2:public base
{
	int a,b;
	public:
		void input3()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show3()
		{
			cout<<"Mul = "<<a*b<<endl;
		}
	
};


main()
{
	base obj1;
	derive1 obj2;
	derive2 obj3;
	
	obj1.input();
	obj1.show();
	
	obj2.input1();
	obj2.show1();
	
	obj3.input3();
	obj3.show3();
}*/









/*#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show()
		{
			cout<<"Sum = "<<a+b<<endl;
		}
	
	
};



class derive1:public base
{
	int a,b;
	public:
		void input1()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show1()
		{
			cout<<"Sub = "<<a-b<<endl;
		}
	
};



class derive2:public base
{
	int a,b;
	public:
		void input3()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
		void show3()
		{
			cout<<"Mul = "<<a*b<<endl;
		}
	
};


main()
{
	base obj1;
	derive1 obj2;
	derive2 obj3;

	obj1.input();
	obj1.show();

	cout<<"___________________________________________________________________"<<endl;
		
	obj2.input1();
	obj2.show1();
	obj2.input();
	obj2.show();

	cout<<"___________________________________________________________________"<<endl;
		
	obj3.input3();
	obj3.show3();
	obj3.input();
	obj3.show();
}*/











/*#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	protected:
		int a,b;
	public:
		void input()
		{
			cout<<"Enter First number: ";
			cin>>a;
			cout<<"Enter Second number: ";
			cin>>b;
		}
//		void show()
//		{
//			cout<<"Sum = "<<a+b<<endl;
//		}
//	
	
};



class derive1:public base
{
	int m,n;
	public:
		void input1()
		{
			cout<<"Enter First number: ";
			cin>>m;
			cout<<"Enter Second number: ";
			cin>>n;
		}
		void show1()
		{
			cout<<"Sub = "<<m-n<<endl;
			cout<<"Sum = "<<a+b<<endl;
		}
	
};



class derive2:public base
{
	int q,r;
	public:
		void input3()
		{
			cout<<"Enter First number: ";
			cin>>q;
			cout<<"Enter Second number: ";
			cin>>r;
		}
		void show3()
		{
			cout<<"Mul = "<<q*r<<endl;
			cout<<"Sum = "<<a+b<<endl;
		}
	
};


main()
{
	base obj1;
	derive1 obj2;
	derive2 obj3;

//	obj1.input();
//	obj1.show();

	cout<<"___________________________________________________________________"<<endl;
		
	obj2.input1();
	obj2.input();
	obj2.show1();
//	obj2.show();

	cout<<"___________________________________________________________________"<<endl;
		
	obj3.input3();
	obj3.input();
	obj3.show3();
//	obj3.show();
}*/







//_____________________________________________________________________________________________


//									4. Hybrid	inheritance


//_____________________________________________________________________________________________



/*#include<iostream>
#include<conio.h>
using namespace std;

class A{
	int n;
	public:
		void input(){
			cout<<"Enter Value: ";
			cin>>n;
			
		}
		void show()
		{
			cout<<n<<endl;
			
		}
};

class B:virtual public A
{
	
};


class C:virtual public A
{
	
};


class D:public B,public C
{
	
};

main()
{
	A obj;
	B obj1;
	C obj2;
	D obj3;
	
	
	
//	obj.input();
//	obj.show();
	
	
//	obj1.input();
//	obj1.show();

//	obj2.input();
//	obj2.show();

 	obj3.input();
	obj3.show();
	
}*/
