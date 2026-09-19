#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
  string title;
  string author;
  string ISBN;
  double price;
public:
 //Function to record book information
  void record()
{
 cout<<"Enter Book Title:";
 getline(cin, title);

 cout<<"Enter Author Name:";
 getline(cin,author);

 cout<<"Enter ISBN:";
 getline(cin,ISBN);

 cout<<"Enter Price:";
 cin>>price;
 cin.ignore();
}
 void display()
 {
  cout<<"\n---Book Information---"<<endl;
  cout<<"Title:"<<title<<endl;
  cout<<"Author:"<<author<<endl;
  cout<<"ISBN:"<<ISBN<<endl;
  cout<<"Price:"<<price<<endl;
 }
};
 int main()
{
 Book b1;

 cout<<"====Digital Book Inventory System===="<<endl;

 b1.record();
 b1.display();

 return 0;
}
