                                 //...FIRST c++ PROGRAM......

//DATE :- 24/06/2023

//_________________________________________________________________________________________________



/*#include<iostream>
main()
{
	cout<<"Sahil\n";
	
}*/

//This is give a error.



//_________________________________________________________________________________________________


/*#include<iostream>

main()
{
	std::cout<<"Sahil\n";
	std::cout<<"Mohit";
}*/



//_________________________________________________________________________________________________


//using namespace


/*#include<iostream>
using namespace std;
main()
{
	cout<<"Sahil\n";
	cout<<"Mohit";
}*/


//_________________________________________________________________________________________________


/*#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter the number: ";
	cin>>num;   //input
	cout<<num;  //output
}*/

//_________________________________________________________________________________________________


/*#include<iostream>
using namespace std;
int num=100;
main()
{
	int num=10;
	cout<<num;  //output
}*/


//IT WILL BE PRINT 10 BECAUSE IT IS LOCAL VARIABLE 
//IF WE WANT TO PRINT 100 THEN BE USE  :: (SCOPE RESOVLUATION OPRATOR).

//EX:

/*#include<iostream>
using namespace std;
int num=100;
main()
{
	int num=10;
	cout<<::num;  //output
}*/

//_________________________________________________________________________________________________




/*#include<iostream>
using namespace std;
void show()
{
	cout<<"SAHIL";
}

void show()
{
	cout<<"MOHIT";
}

main()
{
	show();
}*/



//IT WILL GIVE ERROR AS A REDEFINATION OF VOID SHOW();
//BUT IF WE WANT TO PRINT IN SAME WAY WITHOUT CHANGE THE FUNCTION NAME WE USE NAMESPACE TEMPLATE

//EX:

/*#include<iostream>
using namespace std;
namespace FIRST{
	void show()
	{
		cout<<"SAHIL\n";
	}
}
namespace SECOND{
	void show()
	{
		cout<<"MOHIT";
	}
}
main()
{
	FIRST::show();
	SECOND::show();
}*/



//_________________________________________________________________________________________________


//DATE :- 26/06/2023


//_________________________________________________________________________________________________


								/*DATATYPE*/
								
								

/*#include<iostream>
using namespace std;
main()
{
	int a=10;
	char b='a';
	string c="Sahil";
	float d=15.56;
	
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
}*/



//_________________________________________________________________________________________________





/*#include<iostream>
using namespace std;
main()
{
	cout<<sizeof(int)<<" Bytes"<<endl;
	cout<<sizeof(char)<<" Bytes"<<endl;
	cout<<sizeof(string)<<" Bytes"<<endl;
	cout<<sizeof(float)<<" Bytes"<<endl;
	cout<<sizeof(double)<<" Bytes"<<endl;
}*/




//_________________________________________________________________________________________________




                                 /*TYPECASTING*/


//_________________________________________________________________________________________________



/*#include<iostream>
#include<typeinfo>
using namespace std;
main()
{
	int a=10;
	double b=3.14;
	char c='A';
	cout<<typeid(a).name()<<endl;
	cout<<typeid(b).name()<<endl;
	cout<<typeid(c).name()<<endl;
}*/


//_________________________________________________________________________________________________


/*#include<iostream>
#include<typeinfo>
using namespace std;
main()
{
	int a=10;
	double b=3.14;
	//implicit typecasting
	double a2=a;
	cout<<a2<<endl;
	int b2=b;
	cout<<b2<<endl;
	
	//explicit typecasting
	double a3=(double)a;
	cout<<a3<<endl;
	int b3=(int)b;
	cout<<b3<<endl;
}*/



//_________________________________________________________________________________________________



//								 VARIABLES


//_________________________________________________________________________________________________





/*#include<iostream>
using namespace std;
main()
{
	int a=10;
	cout<<a;
}*/



//_________________________________________________________________________________________________




/*#include<iostream>
using namespace std;
int b=20;  //GLOBAL VARIABLE
main()
{
	int a  //  LOCAL VARIABLE
	cout<<"Enter a Number: ";
	cin>>a;
	cout<<"The value of a is: "<<a<<endl;
	cout<<"The value of a is: "<<b;
}*/




//_________________________________________________________________________________________________




/*#include<iostream>
using namespace std;
int b=20;  //GLOBAL VARIABLE
main()
{
	int a=10;  //  LOCAL VARIABLE
	static int c=30;
	cout<<"The value of a is: "<<a<<endl;
	cout<<"The value of b is: "<<b<<endl;
	cout<<"The value of c is: "<<c;
}*/




//_________________________________________________________________________________________________



//                                    	OPERATORS



//_________________________________________________________________________________________________


//ASSIGNMENT OPERATOR

/*#include<iostream>
using namespace std;
main()
{
	int a=4;  //simple assinment operators
	cout<<"value of a: "<<a;
	a+=10;  // compound assinment operators
	cout<<"value of a: "<<a;
}*/



//_________________________________________________________________________________________________

//Arithmetic operators

/*#include<iostream>
using namespace std;
main()
{
	int a=6 ,b=4;
	cout<<"A+B = "<<a+b<<endl;
	cout<<"A-B = "<<a-b<<endl;
	cout<<"A*B = "<<a*b<<endl;
	cout<<"A/B = "<<a/b<<endl;
	cout<<"A%B = "<<a%b<<endl;
}*/




//_________________________________________________________________________________________________

//Relational operators


/*#include<iostream>
using namespace std;
main()
{
	int a=4,b=6;
	cout<<"a<b = "<<(a<b)<<endl;
	cout<<"a>b = "<<(a>b)<<endl;
	cout<<"a<=b = "<<(a<=b)<<endl;
	cout<<"a>=b = "<<(a>=b)<<endl;
	cout<<"a!=b = "<<(a!=b)<<endl;
	cout<<"a==b = "<<(a==b)<<endl;
	
	
}*/






//_________________________________________________________________________________________________

//Relational operators


/*#include<iostream>
using namespace std;
main()
{
	int a=4,b=6;
	cout<<(a>b && a<b)<<endl;
	cout<<(a>b || a<b)<<endl;
	cout<<!(a>b);
}*/



//_________________________________________________________________________________________________

//increment and decrement  operators


/*#include<iostream>
using namespace std;
main()
{
	int a=4;
	cout<<++a<<endl;
	cout<<a++<<endl;
	cout<<--a<<endl;
	cout<<a--<<endl;
	cout<<a;
}*/


//_________________________________________________________________________________________________

//Ternary operators


/*#include<iostream>
using namespace std;
main()
{
	int a=4,b=5;
	cout<<(a>b?a:b);
	
}*/



//_________________________________________________________________________________________________

//Bitwise operators


/*#include<iostream>
using namespace std;
main()
{
	int a=4,b=5;
	cout<<(a&b)<<endl;
	cout<<(a|b)<<endl;
	cout<<(a^b);
	
}*/



//HOW TO PERFORM BITWISE OPERATORS WITH EXAMPLE

//if a=4 and b=5

/*		a		b			a&b			a|b			a^b
	
		0		0			0			0			0
		1		1			1			1			0
		0		0			0			0			0
		0		1			0			1			1
		
value = 4		5			4			5			1
*/




//_________________________________________________________________________________________________
//_________________________________________________________________________________________________





//_________________________________________________________________________________________________



//                                       LOOPS



//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
main()
{
	for(int i=1;i<=100;i++)
	{
	cout<<"Sahil"<<"   ";
	}
}*/





//_________________________________________________________________________________________________





/*#include<iostream>
using namespace std;
main()
{
	int a=1;
	while(a<=100)
	{
	cout<<a<<" ";
	a++;
	}
}*/


//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
main()
{
	int a=1;
	do
	{
	cout<<a<<" ";
	a++;
	}
	while(a<0);
}*/



//_________________________________________________________________________________________________

//date 01/07/2023

//_________________________________________________________________________________________________



//use of While loop for unlock the phone password

/*
#include<iostream>
using namespace std;
main()
{
	int pwd=7282,mypwd;
	cout<<"Enter Your Password: ";
	cin>>mypwd;
	while(pwd>0)
	{
		if(pwd!=mypwd)
		{
			cout<<"Enter Your Password: ";
			cin>>mypwd;
		}
		else
		{
			cout<<"Unlocked!!";
			break;
		}
	}
}*/



//_________________________________________________________________________________________________



//							DO WHILE LOOP


//_________________________________________________________________________________________________

/*
#include<iostream>
using namespace std;
main()
{
	string name;
	cout<<"Enter the Name: ";
	cin>>name;
	do{
		cout<<name;
	}
	while(name!="Sahil");
}*/



//_________________________________________________________________________________________________


/*#include<iostream>
using namespace std;
main()
{
	string name;
	cout<<"Enter the Name: ";
	cin>>name;
	do{
		cout<<name;
		break;
	}
	while(name!="Sahil");
}*/



//_________________________________________________________________________________________________



//													FOR LOOP


//_________________________________________________________________________________________________


//MULTIFLICATION TABLE USING FOR LOOP


/*#include<iostream>
using namespace std;
main()
{
	int num ,i;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<"The Table of "<<num<<" is printed...."<<endl;
	cout<<"___________________________________________________________________"<<endl;
	cout<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
	
}*/




//_________________________________________________________________________________________________


//												CONDITIONAL STATEMANTS

//_________________________________________________________________________________________________

//if statement

/*#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if(num!=0)
	{
		cout<<"Sahil"<<endl;
	}
	
	cout<<"Mihir";
}*/



//_________________________________________________________________________________________________

//if - else statement

/*#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if(num!=0)
	{
		cout<<"Sahil"<<endl;
	}
	else
	{
		cout<<"Mihir";
	}
}*/




//_________________________________________________________________________________________________


/*#include<iostream>
using namespace std;
main()
{
	string signal;
	cout<<"Enter Signal Value: ";
	cin>>signal;
	if(signal=="red")
	{
		cout<<"Dont't go! plz stop."<<endl;
		
	}
	cout<<"The signal is Green Now! then u can go :";
}*/


//_________________________________________________________________________________________________


//												IF ELSE STATEMENT

//_________________________________________________________________________________________________


/*#include<iostream>
using namespace std;
main(){
	string weather;
	cout<<"enter weather condition: ";
	cin>>weather;
	if(weather=="raining")
	{
		cout<<"Need an umbrella to go out.";	
	}
	else
	{
		cout<<"No need! U may go.";
		
	}
}*/



//_________________________________________________________________________________________________


//												IF,IF-ELSE,ELSE STATEMENT


//_________________________________________________________________________________________________


/*#include<iostream>
using namespace std;
main()
{
	int amt,tax;
	cout<<"Enter Amount: ";
	cin>>amt;
	if(amt<=100000)
	{
		cout<<"No Need! to Pay Tax";
	}
	else if(amt>100000 && amt<=500000)
	{
		tax=amt*10/100;
		cout<<"Tax Amount: "<<tax;
	}
	else if(amt>500000 && amt<=1000000)
	{
		tax=amt*20/100;
		cout<<"Tax Amount: "<<tax;
	}
	else
	{
		tax=amt*28/100;
		cout<<"Tax Amount: "<<tax;
	}
}*/


//_________________________________________________________________________________________________


//												NESTED IF STATEMENT


//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"Enter your Age: ";
	cin>>age;
	if(age>=18)
	{
		if(age>=18 && age<=59)
		{
			cout<<"Eligible for Organizational work.";
			
		}
		else
		{
			cout<<"Age is not satisfactory as per the organizational work";
		}
	}
	else
	{
		cout<<" they are child! don't force for work!..";
	}
}*/



//_________________________________________________________________________________________________


//	05/07/2023
//												SWITCH STATEMENT


//_________________________________________________________________________________________________



//CALCULATER EXPRETION 


/*#include<iostream>
using namespace std;
main(){
	char value;
	int num1,num2;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"what U want: ";
	cin>>value;
	cout<<"Enter the Second number: ";
	cin>>num2;
	switch(value)
	{
		case '+':
			cout<<"Addition"<<" = "<<num1+num2;
			break;
		case '-':
			cout<<"Subtraction"<<" = "<<num1-num2;
			break;
		case '*':
			cout<<"Multiplication"<<" = "<<num1*num2;
			break;
		case '/':
			cout<<"Division"<<" = "<<num1/num2;
			break;
		case '%':
			cout<<"Remainder"<<" = "<<num1%num2;
			break;
		default:
			cout<<"enter valid value";
	}
	
	
}*/



//_________________________________________________________________________________________________


//															JUMPING STATEMENT 


//_________________________________________________________________________________________________

//USE OF BREAK

/*#include<iostream>
using namespace std;
main()
{
	int num;
	for (num=1;num<=10;num++)
	{
		if(num==5)
		{
			break;
		}
		cout<<num<<endl;
	}
	cout<<"hi Viewer...";
}*/



//_________________________________________________________________________________________________

//USE OF CONTINUE

/*#include<iostream>
using namespace std;
main()
{
	int num;
	for (num=1;num<=10;num++)
	{
		if(num==5)
		{
			continue;
		}
		cout<<num<<endl;
	}
	cout<<"hi Viewer...";
}*/




//_________________________________________________________________________________________________

//USE OF GO TO

/*#include<iostream>
using namespace std;
main()
{
	int num;
	for (num=1;num<=10;num++)
	{
		if(num==5)
		{
			goto out;
		}
		cout<<num<<endl;
	}
	cout<<"hi Viewer...";
	out:
		cout<<"Hello World!!";
}*/




//_________________________________________________________________________________________________

//use of return

/*#include<iostream>
using namespace std;
int add(){
	int a=10,b=20;
	return a+b;
}
main(){
	cout<<add();
}*/



//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//												Concept of  Arrays


//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


/*#include<iostream>
using namespace std;
main(){
	int a[5]={10,20,30,40,50};
	for (int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
}*/


//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
main(){
	int a[5];
	cout<<"Enter Arrey element: ";
	for (int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Arrey element are: "<<endl;
	for (int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
}*/



//_________________________________________________________________________________________________

//reverse of arrey

/*#include<iostream>
using namespace std;
main(){
	int a[5];
	cout<<"Enter Arrey element: ";
	for (int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Arrey element are: "<<endl;
	for (int i=4;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
}*/




//_________________________________________________________________________________________________



/*#include<iostream>
using namespace std;
main(){
	int a[5];
	cout<<"Enter Arrey element: ";
	for (int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Arrey element are: "<<endl;
	cout<<a[3];
}*/



//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//											 STRINGS


//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//without giving space

/*#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char myname[20];
	cout<<"Enter Your Full Name: ";
	cin>>myname;
	cout<<"Full Name: "<<myname;
}*/



//_________________________________________________________________________________________________


/*#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char myname[20];
	cout<<"Enter Your Full Name: ";
	gets(myname);
	puts(myname);
	
	string myaddress;
	cout<<"Enter Your Full Address:";
	getline(cin,myaddress);
	cout<<"Full Address: "<<myaddress;
	
	
}*/



 //_________________________________________________________________________________________________


//use of pushback() and popback


//_________________________________________________________________________________________________



/*#include<iostream>
#include<string.h>
using namespace std;
main(){
	string myaddress="Warisaliganj Nawada";
	cout<<"Original value: "<<myaddress<<endl;
	myaddress.push_back('S');
	cout<<"Modified value: "<<myaddress<<endl;
	myaddress.pop_back();
	cout<<"pop value: "<<myaddress;
}*/




//_________________________________________________________________________________________________
//_________________________________________________________________________________________________


//inbiuld function for string 


/*#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str[]="Sahil Kumar";
	int L=strlen(str);
	cout<<"Length of string"<<endl;
	cout<<L<<endl;
	cout<<"Reverse of string"<<endl;
	cout<<strrev(str);
	
	
}*/



/*#include<string.h>
using namespace std;
main()
{
	char str[]="Sahil Kumar";
	int L=strlen(str);
	cout<<"Length of string"<<endl;
	cout<<L<<endl;
	char str2[L];
	cout<<"copy in another Array"<<endl;
	strcpy(str2,str);
	cout<<str<<"		"<<str2;
	
	
}*/


//concadination of two array

/*#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str1[]="Sahil Kumar";
	char str2[]=" Kushwaha";
	strcat(str1,str2);
	cout<<str1;
}*/



/*#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str1[]="Sahil Kumar";
	char str2[]=" Kushwaha";
	int value=strcmp(str1,str2);
	if(value==0)
	{
		cout<<"String are Equal";
	}
	else
	{
		cout<<"String are not Equal";
	}
}*/




/*#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str1[]="Sahil Kumar";
	char str2[]="Sahil Kumar";
	int value=strcmp(str1,str2);
	if(value==0)
	{
		cout<<"String are Equal";
	}
	else
	{
		cout<<"String are not Equal";
	}
}*/




/*#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string name="Sahil";
//	cout<<name.size();
	cout<<name.length();
	
	
}*/


/*#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string name="Sahil";
	name.replace(0,5,"Kumar");		//here 0 is a starting index and 5 is a length of string which one we want to change
	cout<<name;
	
}*/






/*#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string name1="Sahil";
	string name2=" Kumar";
	name1.append(name2);
	cout<<name1;
	
}*/




/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
main()
{
	string name="Sahil";
	reverse(name.begin(),name.end());
	cout<<name;
	
}*/


//_________________________________________________________________________________________________
//_________________________________________________________________________________________________

