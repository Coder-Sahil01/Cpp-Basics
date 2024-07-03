

/*#include<iostream>
using namespace std;

template<class T>		//function template
void show (T a,T b)
{
	cout<<"A: "<<a<<"	"<<"B: "<<b<<endl;
}

main()
{
	
	int p=10,q=20;
	char m='a',n='b';
	float s=10.45,f=45.45;
	show(p,q);
	show(m,n);
	show(s,f);
}*/






/*#include<iostream>
using namespace std;
template<class T>            // class template			
class show 
{
	T a,b;
	public:
		show(T p,T q)
		{
			a=p;
			b=q;
			
		}
		void display()
		{
			cout<<"A: "<<a<<"	"<<"B: "<<b<<endl;
	
		}
};


main()
{
//	show<int> obj(10,56);		//Class name <datatype> class_object
	show<char> obj('a','b');
//	show<float> obj(15.142,46.150);
	obj.display();
}*/





