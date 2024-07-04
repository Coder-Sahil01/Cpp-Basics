//______________________________________________________________________________________________
//______________________________________________________________________________________________

//								 for pracrice perpose

//______________________________________________________________________________________________
//______________________________________________________________________________________________


//Date   ---> 09/07/2023


//______________________________________________________________________________________________


//What is C++ ?

/*#include<iostream.h>
main()
{
	
}
//or

#include<iostream>
using namespace std;
main()
{
	
}*/


//______________________________________________________________________________________________



//cheak the given number is prime or not



/*#include<iostream>
using namespace std;
main()
{
	int num,count,i=2;
	cout<<"Enter Number which you want to cheack is prime or not : ";
	cin>>num;
	while(i<=num/2)
	
	{
	if(num%i==0)
	{
		count=1;
		break;
	}
	i++;
	}
	
		if(count==0)
		{
			cout<<"Prime Number....";
		}
		else
		{
			cout<<"Not a Prime number...";
		}
}*/




//______________________________________________________________________________________________
//chack odd or even


/*#include<iostream>
using namespace std;
main()
{
	int num,i;
	cout<<"Enter a Number: ";
	cin>>num;
	for(i=0;i<num;i++)
	{
		if(i%2==0)
		{
			if(i%5==0 && i%3==0)
			{
				continue;
			}
			else
			{
				cout<<i<<" is a Even number !!"<<endl;
			}
		}
		else
		{
			if(i%23==0)
			{
				break;
			}
			else
			{
				cout<<i<<" is a Odd number !!"<<endl;
			}
		}
	}
}*/




//______________________________________________________________________________________________

//switch case





/*#include<iostream>
using namespace std;
main()

{
	char exp;
	int num1,num2;
	cout<<"Enter First Number: ";
	cin>>num1;
	cout<<"Enter Second  Number: ";
	cin>>num2;
	cout<<"Enter Which Expression you want to parform: ";
	cin>>exp;
	switch(exp)
	{
		case '/':
			cout<<"Your Division = "<<num1/num2;
			break;
		case '-':
			cout<<"Your Subtraction = "<<num1-num2;
			break;
		case '*':
			cout<<"Your MaltiPlication = "<<num1*num2;
			break;
		case '+':
			cout<<"Your Addition = "<<num1+num2;
			break;
		case '%':
			cout<<"Your Reaminder = "<<num1%num2;
			break;
		default:
			cout<<"This Expression is not Found  !!"<<endl;
			cout<<"Please Enter Another Expression";
	}
}*/




//______________________________________________________________________________________________



//Array 



//______________________________________________________________________________________________
//______________________________________________________________________________________________

//integer type array

/*#include<iostream>
using namespace std;
main()
{
	int a[10],i;
	for (i=0;i<5;i++)
	{
		cout<<"Enter "<<i<<" "<<"Element ";
		cin>>a[i];
	}
	cout<<"______________________________________________________________________"<<endl;
	for (i=0;i<5;i++)
	{
		cout<<"Your "<<i<<" "<<"Element is "<<a[i]<<endl;
	}
	
}*/




/*#include<iostream>
#include<string.h>
using namespace std;
main()
{
//	char arr[20];
//	cout<<"Enter any words: ";
//	gets(arr);
//	puts(arr);
	
	string sahil;
	cout<<"Enter any Sentence: ";
	getline(cin,sahil);
	cout<<"Your tiped sentence is "<<sahil;
}*/





//______________________________________________________________________________________________
//______________________________________________________________________________________________

//Function
//
//#include<iostream>
//using namespace std;
//void add()
//{
//	int a,b;
//	cout<<"Enter two number: ";
//	cin>>a>>b;
//	cout<<"Addition: "<<a+b<<endl;
//}
//main()
//{
//	add();
//}




/*include<iostream>
using namespace std;
void add(int a, int b)
{
//	int a,b;
//	cout<<"Enter two number: ";
//	cin>>a>>b;
	cout<<"Addition: "<<a+b<<endl;
}

 main()
{
	int num1,num2;
	cout<<"Enter two number: ";
	cin>>num1>>num2;
	add(num1,num2);
	return 0;
}*/






//pointer
//
//#include<iostream>
//using namespace std;
//main()
//{
//	int *ptr;
//	int  Sahil;
//	cout<<"Enter your Age : ";
//	cin>>Sahil;
//	ptr=&Sahil;
//	cout<<"Address of Sahil Variable is "<<ptr <<endl;
//	cout<<"Your Age is : "<<*ptr;
//}









// Macro 


/*#include<iostream>
using namespace std;
#define pi 3.14159265359
#define radius (r*r)


main()

{
	float r;
	cout<<"Enter Radius : ";
	cin>>r;
	double area;
	cout<<"Area = "<<pi*radius;
}*/




//union

/*#include<iostream>
using namespace std;

union student{
	int roll_no;
	double fee;
	char name;
	
};

main()
{
	union student S;
	cout<<"Size of Union is : "<<sizeof(S)<<endl;
	cout<<"_____________________________________________________"<<endl;
	cout<<"Enter your Roll no : ";
	cin>>S.roll_no;
	cout<<"Enter your fee no : ";
	cin>>S.fee;
	cout<<"Enter your Name no : ";
	cin>>S.name;
	cout<<"_____________________________________________________"<<endl;
	cout<<"Your Roll no is : "<<S.roll_no<<endl;
	cout<<"Your Fee is : "<<S.fee<<endl;
	cout<<"Your Name is : "<<S.name<<endl;
	
}*/




/*#include<iostream>
using namespace std;
struct Emp{
	int id;
	char name;
	double salary;
};

main()
{
	struct Emp E ;
	cout<<"The size of Structure is : "<<sizeof(E)<<endl;
	cout<<"________________________________________________-"<<endl;
	cout<<"Enter your id : ";
	cin>>E.id;
	cout<<"Enter your name : ";
	cin>>E.name;
	cout<<"Enter your salary : ";
	cin>>E.salary;
	cout<<"___________________________________________________"<<endl;
	cout<<"your id : "<<E.id<<"		";
	cout<<"your Name : "<<E.name<<"		";
	cout<<"your Salary: "<<E.salary<<"		";
}*/




//#include<iostream>
//#include<fstream>
//using namespace std;
//main()
//{
//	ofstream onSahil;
//	onSahil.open("C:\\Users\\DELL\\OneDrive\\Documents\\SEM 1\\self ip 326\\Desktop\\PracticeFile.txt");
//	cout<<"file created Successfully !!";
//	onSahil.close();
//	
//}





//
//#include<iostream>
//#include<fstream>
//using namespace std;
//main()
//{
//	ofstream onSahil;
//	onSahil.open("C:\\Users\\DELL\\OneDrive\\Documents\\SEM 1\\self ip 326\\Desktop\\PracticeFile.txt");
//	onSahil<<"hii I am sahil and i am want to meet you";	
//	cout<<"Write Successfully !!";
//	onSahil.close();
//	
//}
//





//
//#include<iostream>
//#include<fstream>
//using namespace std;
//main()
//{
//	ofstream onSahil;
//	remove("C:\\Users\\DELL\\OneDrive\\Documents\\SEM 1\\self ip 326\\Desktop\\PracticeFile.txt");
//	
//	
//}
//
//




