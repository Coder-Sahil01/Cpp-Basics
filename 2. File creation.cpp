//file handling
//___________________________________________________________________________________________
//___________________________________________________________________________________________

//									Creation of a file

//___________________________________________________________________________________________
//___________________________________________________________________________________________



/*#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream onfile;
	onfile.open("C:\\Users\\DELL\\OneDrive\\Documents\\SEM 1\\self ip 326\\Desktop\\file.txt");
	cout<<"File Created succesfully !!..";
	onfile.close();
}*/



//___________________________________________________________________________________________
//___________________________________________________________________________________________

//									write some data on file

//___________________________________________________________________________________________
//___________________________________________________________________________________________


/*#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream onfile;
	onfile.open("C:\\Users\\DELL\\OneDrive\\Documents\\SEM 1\\self ip 326\\Desktop\\file.txt");
	onfile<<"Thank U so much, I am fine.";
	
	cout<<"Data has been Written in the file !!...";
	onfile.close();
}*/



//___________________________________________________________________________________________
//___________________________________________________________________________________________

//									read  data from file

//___________________________________________________________________________________________
//___________________________________________________________________________________________


/*#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream infile; string str; //we create a string so that we print the sentence on the consle screen .
	infile.open("C:\\Users\\DELL\\OneDrive\\Documents\\SEM 1\\self ip 326\\Desktop\\file.txt");
	while(getline(infile,str))		// we getline function for print the space also
// and while loop for print the hole sentence
	{
		cout<<str;
	}
	cout<<"\nData has been readed in the console screen !!...";
	infile.close();
}*/






//___________________________________________________________________________________________
//___________________________________________________________________________________________

//								copy data from one to another file 

//___________________________________________________________________________________________
//___________________________________________________________________________________________


/*#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream infile; char str;
	ofstream onfile;
	infile.open("C:\\Users\\DELL\\OneDrive\\Documents\\SEM 1\\self ip 326\\Desktop\\file.txt");
	onfile.open("C:\\Users\\DELL\\OneDrive\\Documents\\SEM 1\\self ip 326\\Desktop\\file2.txt");
	
	while(infile.get(str))
	{
		onfile.put(str);
	}
	cout<<"Data has been copied !!...";
	infile.close();
	onfile.close();
}*/



//___________________________________________________________________________________________
//___________________________________________________________________________________________

//								Deletion of file 

//___________________________________________________________________________________________
//___________________________________________________________________________________________


/*#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int value =remove ("C:\\Users\\DELL\\OneDrive\\Documents\\SEM 1\\self ip 326\\Desktop\\file.txt");
	if (value==0)
	{
		cout<<"File deleted !!";
	}
	else{
		cout<<"File not Deleted !!";
	}
}*/
