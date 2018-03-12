#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Book
{
	private:
		string Author;
		string Title;
	public:
	void BookAuthor()
	{
		getline ( cin, Author );
	}
	void BookTitle()
	{
		getline (cin, Title);
	}
	void setPages()
	{
		cin >> Pages;
	}
	void Info()
	{
		cout << "bookinfo" << endl << "bookname " << Title  << endl << "bookauthor" << Author << endl << "stranisi " << Pages;
	}
	private:
		string Pages;
};
main()
{
	Book knigga;
	knigga.BookAuthor();
	knigga.BookTitle();
	knigga.setPages();
	knigga.Info();
}
