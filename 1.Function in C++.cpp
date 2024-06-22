
//date -> 06/07/2023
//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//														Function


//_________________________________________________________________________________________________
//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
void say()//define
{
	cout<<("Hello Leaner!!..")<<endl;
}
main()
{
	say();
}*/




//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
void say(string msg)//define
{
	cout<<("Hello Leaner!!.. ")<<msg<<endl;
}
main()
{
	say("How r U ??");//call
}*/


//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
void say(string msg,int a)//define
{
	cout<<("Hello Leaner!!.. ")<<msg<<endl;
	cout<<a;
}
main()
{
	say("How r U ??",100);//call
}*/





//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
void say()//define
{
	puts("Hello Leaner!!.. ");
}
main()
{
	say();//call
}*/



//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//									 Recrtion or recrsive function



//_________________________________________________________________________________________________
//_________________________________________________________________________________________________

//factorial using recurtion
W
/*#include<iostream>
using namespace std;


int fact(int num)
{
	if(num==0)
	{
		return 1;
	
	}
	else
	{
		return num*fact(num-1);
	}
}


main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;
	int r=fact(num);
	cout<<"Factiorial of "<<num<<" is "<<r;
}*/



//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//								Call by Value 

//_________________________________________________________________________________________________
//_________________________________________________________________________________________________

/*#include<iostream>
using namespace std;

void change_value(int num )		//define
{
	num *= 100;
	cout<<"by passing call by value "<<num<<endl;
}

main()
{
	int num=100;
	cout<<"oringinal value "<<num<<endl;
	change_value(num);
	cout<<"oringinal value "<<num<<endl;
	
}*/




//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//								Call by Value 

//_________________________________________________________________________________________________
//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;

void  changevalue(int *p)
{
	*p += 15;
	cout<<"pointer value: "<<*p<<endl;
}
main()
{
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"original value : "<<num<<endl;
	changevalue(&num);
	cout<<"New value: "<<num<<endl;
	
}*/



//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//								Call by Referece 

//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


/*#include<iostream>
using namespace std;
main()
{
	int a=100;
	cout<<a<<endl;
	int &ref=a;
	cout<<ref<<endl;
	cout<<++ref<<endl;
//	cout<<*ref<<endl;
//	cout<<++(*ref)<<endl;
	cout<<a;
}*/





// date -> 07/07/2023

//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//								pointer


//_________________________________________________________________________________________________
//_________________________________________________________________________________________________




/*#include<iostream>
using namespace std;
main (){
    int a=10;
    int *p=&a;    // pointer
    int **q=&p;	  // pointer to pointer
    cout<<a<<endl;		//value of a
    cout<<&a<<endl;		//address of a
    cout<<p<<endl;		//address of p
    cout<<*p<<endl;		//value of p
    cout<<&p<<endl;		//address of p
    
    
	cout<<q<<endl;	//address of p
	cout<<*q<<endl;	//address of a
	cout<<**q<<endl; //value of a
	cout<<&q<<endl;		//address of q
}*/



//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//										Macros


//_________________________________________________________________________________________________
//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
#define PI 3.14
#define Square(r) ((r)*(r))
main (){
    int r;
    cout<< "Enter a Radius: ";
    cin>>r;		
    double area=PI*Square (r);
    cout<<"Area of Circle: "<<area;
}*/




//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//										Union


//_________________________________________________________________________________________________
//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
union Emp{
    int Eid;		//4 Bytes
    double salary; // 8 Bytes
    char ch; // 1 Byte
};
main (){
    union Emp E;
    cout<<sizeof(E);
	E.Eid = 12893;
	cout<<E.Eid<<endl;
	E.salary=43254;
	cout<<E.salary<<endl;
	E.ch='A';
	cout<<E.ch;

}*/




//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//										Structure


//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


/*#include<iostream>
using namespace std;
struct Emp{
	string name; // 8 bytes
	int Eid; // 4 bytes
	double salary; // 8 bytes
};


main()
{
	struct Emp E;
	cout<<sizeof(E.name)<<" Bytes"<<endl;
	cout<<sizeof(E.Eid)<<" Bytes"<<endl;
	cout<<sizeof(E.salary)<<" Bytes"<<endl;
	cout<<sizeof(E)<<" Bytes"<<endl;

}*/






/*#include<iostream>
using namespace std;
struct Emp{
	string name; // 8 bytes
	int Eid; // 4 bytes
	double salary; // 8 bytes
};


main()
{
	struct Emp E;
	E.name="Sahil";
	E.Eid=1986894;
	E.salary=17000;
	cout<<E.name<<endl<<E. Eid<<endl<<E.salary;
	
}*/






//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//										Exwption Handling


//_________________________________________________________________________________________________
//_________________________________________________________________________________________________










/*#include<iostream>
#include<stdexcept>
using namespace std;

main(){

	double bal=1000.0;
	try{

		double amt;
		//Deposit
		cout<<"Enter Deposit Amount: ";
		cin>>amt;
		if (amt<=0) {
			throw invalid_argument("Invalid Deposit Amount: ");
		}

		bal=bal+amt;
		cout<<"Available Amount: "<<bal<<endl;
		//Withdrawan

		cout<<"Enter Withdrawan Amount: ";
		cin>>amt;
		if(amt<0);{

			throw invalid_argument("Invalid Withdrawan Amount: ");

		}
		if(amt>bal){
			throw runtime_error("Insufficient Fund: ");

		}
		bal=bal-amt;
		cout<<"Available Amount: "<<bal<<endl;

	}
	catch(exception& e){

		cout<<e.what();
	}
}*/
