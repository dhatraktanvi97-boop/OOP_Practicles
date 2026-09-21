# include <iostream>
# include<string>

using namespace std;
class Book
{private : 
int bookID;
string title;
string author;
double price;

public:

Book()
{
bookID = 101;
title = "C++ Programming";
author = "Bajarnee Stroustrup";
price = 500.00;
}


// Parameterized Constructor
Book(int id, string t, string a, double p)
{
bookID = id;
title = t;
author = a;
price = p;
}

// Function to display  book details 
void display()
{
cout<<"Book ID : "<<bookID<<endl;
cout << "Title : "<<title<<endl;
cout<<"Price : "<<price<<endl;
cout<<"-------------------------------"<<endl;
}
};

int main ()
{
Book b1;
 Book b2(102, "Object Oriented Programming", "Robert Lafore", 650.00);

cout<<"First Book Details : "<<  endl;
b1.display();

cout<<"Second Book Details : "<< endl;
b2.display();
return 0;
}
