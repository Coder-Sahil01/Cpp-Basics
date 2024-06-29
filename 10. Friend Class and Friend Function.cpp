
//Friend Class

//___________________________________________________________________________________-

/*#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter Two Number: ";
			cin>>a>>b;
			
		}
		friend class B;
};

class B{
	int c;
	public:
		void add(A obj)
		{
			c=obj.a+obj.b;
			cout<<"ADDITION = "<<c<<endl;
		}
};


main()
{
	A oo;
	B kk;
	oo.input();
	kk.add(oo);
}*/





//___________________________________________________________________________________

//Friend Function

//___________________________________________________________________________________-


/*#include<iostream>
using namespace std;
class A
{

	int a,b;
	public:
	void input()
	{
		cout<<"enter value:";
		cin>>a>>b;
	}
	friend void add(A ob);
};


void add(A ob)
{
	int c;
	c=ob.a+ob.b;
	cout<<"Sum="<<c;

}
int main()
{
	A kk;
	kk.input();
	add(kk);
	return 0;
}*/
