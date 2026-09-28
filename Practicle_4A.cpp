#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    double price;

public:
    // Default constructor
    Book() {
        bookID = 0;
        title = "";
        author = "";
        price = 0.0;
    }

    // Function to take input from the user
    void acceptInput() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        
        // Clears the newline character left in the buffer by cin >> bookID
        cin.ignore(); 

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    // Function to display book details
    void display() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Book book1, book2;

    cout << "Enter details for the First Book:" << endl;
    book1.acceptInput();

    cout << "\nEnter details for the Second Book:" << endl;
    book2.acceptInput();

    cout << "\nFirst Book Details:" << endl;
    book1.display();

    cout << "Second Book Details:" << endl;
    book2.display();

    return 0;
}
