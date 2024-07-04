//Date ---> 13/07/2023
//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to print Multiplication table of a number using classes 

//___________________________________________________________________________
//___________________________________________________________________________


/*#include<iostream>
using namespace std;
class A
{
	int n,i,result;
	public:
		void table()
		{
			cout<<"Emter the Number, Which you want to print the table: ";
			cin>>n;
			cout<<"Table of " << n<<" is printed !!"<<endl;
			cout<<"______________________________________"<<endl<<endl;
			for(i=1;i<=10;i++)
			{
				cout<<n<<" * "<<i<<" = "<<n*i<<endl;
			}
		}
};


main()
{
	A obj;
	obj.table();
}*/








//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to print ASCII value using classes 

//___________________________________________________________________________
//___________________________________________________________________________

//1st Method --> Without using typecasting

/*#include<iostream>
using namespace std;
class A{
	char ch;
	public:
		void input()
		{
			cout<<"Enter Any Character: ";
			cin>>ch;
			
		}
		void show()
		{
			cout<<"ASCII value of "<<ch<<" in "<<(int)ch;
		}
};

main()
{
	A obj;
	obj.input();
	obj.show();
}*/



//2nd Method --> Without using typecasting




/*#include<iostream>
using namespace std;
class A{
	char ch;
	int n;
	public:
		void input()
		{
			cout<<"Enter Any Character: ";
			cin>>ch;
			
		}
		void show()
		{
			n=ch;
			cout<<"ASCII value of "<<ch<<" in "<<n;
		}
};

main()
{
	A obj;
	obj.input();
	obj.show();
}*/








//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to print ASCII table using classes

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;
class A{
	int i;
	public:
		void show()
		{
			cout<<" Charactor	Value"<<endl<<endl;
			
			for (i=0;i<=255;i++){
				cout<<endl<<"______________________________________"<<endl<<endl;
				cout<<"	"<<(char)i<<"	"<<i<<endl;
			}
		}
};

main()
{
	A obj;
	obj.show();
}*/




//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to check maximum number between two numbers using classes

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;
class Max
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter two number: ";
			cin>>a>>b;
		}
		void show()
		{
			if (a>b)
			cout<<"Maximum : "<<a;
			else
			cout<<"Maximum : "<<b;

		}
};


main()
{
	Max obj;
	obj.input();
	obj.show();
}*/






//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to check weather a number is Odd or Even using class 

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;
class Cheack{
	int num;
	public:
		void input()
		{
			cout<<"Enter the Number : ";
			cin>>num;
		}
		void show()
		{
			if(num%2==0)
			cout<<num<<" is Even Number !!";
			else
			cout<<num<<" is Odd Number !!";
		}
};


main()
{
	Cheack obj;
	obj.input();
	obj.show();
}*/




//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to swap two numbers using class and object

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;
class Swap{
	int a,b,c;
	public:
		void input()
		{
			cout<<"Enter two number : "<<endl;
			cout<<"A : ";
			cin>>a;
			cout<<"B : ";
			cin>>b;
		}
		void show(){
			c=a;
			a=b;
			b=c;
			cout<<"A = "<<a<<"	"<<"B = "<<b;
		}
};


main()
{
	Swap obj;
	obj.input();
	obj.show();
}*/






//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to check leap year using classes 

//___________________________________________________________________________
//___________________________________________________________________________


/*#include<iostream>
using namespace std;
class Leap{
	int year;
	public:
		void leapyear(){
			cout<<"Enter Year : ";
			cin>>year;
			if(year%100==0 && year%400==0 || year%4==0 && year%100!=0)
			cout<<year<<" is a leap year ";
			else
			cout<<year<<" is a not a leap year ";
			}
		
};


main()
{
	Leap obj;
	obj.leapyear();
}*/




//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to check weather a character is vowel or consonant using class 
//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;
class Cheack_Vowel{
	char ch;
	public:
		void input()
		{
			cout<<"Enter Charactor : ";
			cin>>ch;
			
		}
		void test()
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='I')
			cout<<ch<<" is Vowel";
			else
			cout<<ch<<" is Consonant";
		}
};


main()
{
	Cheack_Vowel obj;
	obj.input();
	obj.test();
}*/






//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to check Prime Number or Not using Class 
//___________________________________________________________________________
//___________________________________________________________________________


//Those number who complitely devide by 1 and  itself os called prime number 


/*#include<iostream>
using namespace std;
class Is_prime{
	int num;
	public:
		void input(){
			cout<<"Enter the number : ";
			cin>>num;
			
		}
		
		void output()
		{
			int count=0,i;
			for (i=1;i<=num;i++)
			{
				if(num%i==0)
				{
					count++;
				}
			}
			if(count==2)
			cout<<"Prime number ";
			else
			cout<<"Not a prime number";
		}
};



main(){
	Is_prime obj;
	obj.input();
	obj.output();
}*/



//___________________________________________________________________________
//___________________________________________________________________________

// Write a  program to print first N natural numbers using class

//___________________________________________________________________________
//___________________________________________________________________________




/*#include<iostream>
using namespace std;
class A{
	int num;
	public:
		void input()
		{
			cout<<"Enter number : ";
			cin>>num;
			
		}
		void show(){
			if (num<=0)
			{
				cout<<"Please Enter Positive number and greater then zero !! ";
			}
			else
			{
				int i;
				for(i=1;i<=num;i++)
				{
					cout<<i<<"	 ";
				}
			}
		}
};




main()
{
	A obj;
	obj.input();
	obj.show();
	
}*/






//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to check Armstrong Number or Not using Class

//___________________________________________________________________________
//___________________________________________________________________________


/*#include<iostream>
using namespace std;
class AS{
	int num;
	public:
		void input()
		{
			cout<<"Enter the value : ";
			cin>>num;
		}
		void Arm_strong()
		{
			int sum=0,check , remender;
			check=num;
			while(num>0)
			{
				remender=num%10;
				sum=sum+(remender*remender*remender);
				num=num/10;
			}
			
			if (check==sum)
			cout<< check<<" is  a Armstrong number";
			else
			cout<< check<<" is not a Armstrong number";
		}
};



main()
{
	AS obj;
	obj.input();
	obj.Arm_strong();
}*/




//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to convert character uppercase into lowercase or vice-versa using class

//___________________________________________________________________________
//___________________________________________________________________________


/*#include<iostream>
using namespace std;
class A {
	char ch;
	public:
		void input()
		{
			cout<<"Enter Any Charactor : ";
			cin>>ch;
		}
		void show()
		{
			if(ch>='a'  && ch<='z')
			{
			
				ch=ch-32;
				cout<<"resut is : "<<ch;
			}
			else
			{
				ch=ch+32;
				cout<<"resut is : "<<ch;
			}
		}
};

main()
{
	A obj;
	obj.input();
	obj.show();	
}*/



//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to calculate area of circle using class and object

//___________________________________________________________________________
//___________________________________________________________________________


/*#include<iostream>
using namespace std;

class Area_circle{
	 long double r,area;
	public:
		long double pi=3.141592653589;
		void input()
		{
			cout<<"Enter Radius : ";
			cin>>r;
		}
		
		void circle()
		{
			area=pi*(r*r);
			cout<<"Area = "<<area;
		}
		
};

main()
{
	Area_circle obj;
	obj.input();
	obj.circle();
}*/





//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to calculate area of square using class and object

//___________________________________________________________________________
//___________________________________________________________________________




/*#include<iostream>
using namespace std;

class Area_square{
	double side,area;
	public:
		void input()
		{
			cout<<"Enter Side : ";
			cin>>side;
		}
		
		void square()
		{
			area=side*side;
			cout<<"Area = "<<area;
		}
		
};

main()
{
	Area_square obj;
	obj.input();
	obj.square();
}*/


//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to print first N perfect square number using class

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
#include<math.h>
using namespace std;


class A{
	int num,i,s,p;
	public:
		void input()
		{
			cout<<"Enter number : ";
			cin>>num;
		}
		
		void perfect()
		{
			for (i=1;i<=num;i++)
			{
				s=sqrt(i*i);
				p=s*i;
				cout<<p<<endl;
			}
		}
		
};

main()
{
	A obj;
	obj.input();
	obj.perfect();
}*/






//___________________________________________________________________________
//___________________________________________________________________________

// Write a  program to find area of triangle using class and object

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
#include<math.h>
using namespace std;

class Area_tri{
	float s1,s2,s3,area,half;
	public:
		void input()
		{
			cout<<"Enter Side : ";
			cin>>s1>>s2>>s3;
			half=(s1+s2+s3)/2;
		}
		
		void triangle()
		{
			area=sqrt(half*(half-s1)*(half-s2)*(half-s3));
			cout<<"Area = "<<area;
		}
		
};

main()
{
	Area_tri obj;
	obj.input();
	obj.triangle();
}*/






//___________________________________________________________________________
//___________________________________________________________________________

// Write a   program to check weather a Number is Palindrome or Not using Class 

//___________________________________________________________________________
//___________________________________________________________________________


/*#include<iostream>
using namespace std;

class A {
	int n,c,r,sum;
	public:
		void input()
		{
			cout<<"Enter Any Number: ";
			cin>>n;
		}
		void output()
		{
			c=n;
			sum=0;
			while(n>0)
			{
				r=n%10;
				sum=(sum*10)+r;
				n=n/10;
			}
			if (c==sum)
			cout<<"Palindrom number";
			else
			cout<<"Not Palindrom number";
		}
};


main()
{
	A obj;
	obj.input();
	obj.output();
}*/





//___________________________________________________________________________
//___________________________________________________________________________

// Write a   program to calculate area of rectangle using class and object

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;
class A {
	int L,W;
	public:
		void input()
		{
			cout<<"Enter Length : ";
			cin>>L;
			cout<<"Enter Width : ";
			cin>>W;
		}
		
		void area_of_rectangle()
		{
			int area;
			area=L*W;
			cout<<"Area = "<<area;
		}
};

main()
{
	A obj;
	obj.input();
	obj.area_of_rectangle();
}*/






//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to check buzz number or not using class

//___________________________________________________________________________
//___________________________________________________________________________


/*#include<iostream>
using namespace std;
class A {
	int num ;
	public:
		void input()
		{
			cout<<"Enter number : ";
			cin>>num;
		}
		void buzz()
		{
			if(num%7==0 || num%10==7)
			cout<<"Buzz Number";
			else
			cout<<"Not Buzz Number";
		}
};


main()
{
	A obj;
	obj.input();
	obj.buzz();
}*/



//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to check Perfect Number or Not using Class

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;
class A {
	int num ;
	public:
		void input()
		{
			cout<<"Enter number : ";
			cin>>num;
		}
		void output()
		{
			int i,sum=0;
			for (i=1;i<num;i++)
			{
				if (num%i==0)
				{
					sum=sum+i;	
				}
			}
			if(sum==num)
			{
				cout<<"Perfect Number";
			}
			else
			{
				cout<<"Not Perfect Number";
			}
		}
};


main()
{
	A obj;
	obj.input();
	obj.output();
}*/






//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to calculate Factorial of a number using class 

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;
class A {
	int num ;
	public:
		void input()
		{
			cout<<"Enter number : ";
			cin>>num;
		}
		void factorial()
		{
			int i;
			long int fact=1;
			for (i=1;i<=num;i++)
			{
				fact=fact*i;
			}
			cout<<"factorial : "<<fact;
		}
		
};


main()
{
	A obj;
	obj.input();
	obj.factorial();
	
}*/




//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to calculate Sum of Digits of a Number using class

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;
class A {
	int num ;
	public:
		void input()
		{
			cout<<"Enter number : ";
			cin>>num;
		}
		void sumofdigit()
		{
			int i,sum=0,r;
			while(num>0)
			{
				r=num%10;
				sum=sum+r;
				num=num/10;
			}
			cout<<"Sum of Digit : "<<sum;
		}
		
};


main()
{
	A obj;
	obj.input();
	obj.sumofdigit();
	
}*/





//___________________________________________________________________________
//___________________________________________________________________________

// Write a  program to Reverse a Number using class 

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;
class A {
	int num ;
	public:
		void input()
		{
			cout<<"Enter number : ";
			cin>>num;
		}
		void reverse()
		{
			int rev=0,remd;
			while(num>0)
			{
				remd=num%10;
				rev=rev*10+remd;
				num=num/10;
			}
			cout<<"Sum of Digit : "<<rev;
		}
		
};


main()
{
	A obj;
	obj.input();
	obj.reverse();
}*/





//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to print fibonacci Series using Class 

//___________________________________________________________________________
//___________________________________________________________________________


/*#include<iostream>
using namespace std;
class A{
	int num;
	public:
		void input(){
			cout<<"Enter the Number of term: ";
			cin>>num;
		}
		
		void fibonacci()
		{
			int a=0,b=1,c,i;
			for (i=1;i<=num;i++)
			{
				cout<<a<<endl;
				c=a+b;
				a=b;
				b=c;
			}
		}
		
};


int main()
{
	
	A obj;
	obj.input();
	obj.fibonacci();
}*/




//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to print Tribonacci Series using Class 

//___________________________________________________________________________
//___________________________________________________________________________



/*#include<iostream>
using namespace std;

class A{
	int num;
	public:
		void input(){
			cout<<"Enter the Number of term: ";
			cin>>num;
		}
		
		void Tribonacci()
		{
			int a=0,b=1,c=2,d,i;
			for (i=1;i<=num;i++)
			{
				cout<<a<<endl;
				d=a+b+c;
				a=b;
				b=c;
				c=d;
			}
		}
};



int main()
{
	
	A obj;
	obj.input();
	obj.Tribonacci();
}*/





//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to make Calculator using Class

//___________________________________________________________________________
//___________________________________________________________________________






/*#include<iostream>
using namespace std;

class A{
	int num1,num2,ch;
	public:
		void calculator()
	{
		cout<<"Enter Anu two Numner : ";
		cin>>num1>>num2;
		cout<<"Enter Choice For Operation : ";
		cin>>ch;
		
		if(ch==1)
		{
			cout<<"Addition = "<<num1+num2;
			
		}
		
		if(ch==2)
		{
			cout<<"Subtraction = "<<num1-num2;
			
		}
		if(ch==3)
		{
			cout<<"Multiplication= "<<num1*num2;
			
		}
		if(ch==4)
		{
			cout<<"Division = "<<num1/num2;
			
		}
		if(ch>4)
		{
			cout<<"Invalid Choice";
			
		}
	}
};



int main()
{
	
	A obj;
	obj.calculator();
}*/





//___________________________________________________________________________
//___________________________________________________________________________

// Write a program to find Greatest among three numbers using Class 

//___________________________________________________________________________
//___________________________________________________________________________


/*#include<iostream>
using namespace std;

class A{
	public:
		int a,b,c;
			void input(){
			cout<<"Enter three Number :  ";
			cin>>a>>b>>c;
		}
		
		void show()
		{
			if(a>b)
			{
				if(a>c)
				cout<<"max : "<<a;
				else
				cout<<"max : "<<c;
			}
			else
			{
				if(b>c)
				cout<<"max : "<<b;
				else
				cout<<"max : "<<c;
			}
		}
};



int main()
{
	A obj;
	obj.input();
	obj.show();
	
}*/


