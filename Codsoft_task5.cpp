#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    string ISBN;
    bool available;
};

struct Borrower {
    string name;
    string borrowedISBN;
    int dueDays;
};

vector<Book> books;
vector<Borrower> borrowers;

void addBook() {
    Book newBook;
    cin.ignore();
    cout << "Enter book title: ";
    getline(cin, newBook.title);
    cout << "Enter author: ";
    getline(cin, newBook.author);
    cout << "Enter ISBN: ";
    getline(cin, newBook.ISBN);
    newBook.available = true;
    books.push_back(newBook);
    cout << "Book added successfully!\n";
}

void searchBook() {
    string keyword;
    cin.ignore();
    cout << "Enter title, author, or ISBN to search: ";
    getline(cin, keyword);
    bool found = false;
    for (const auto &book : books) {
        if (book.title == keyword || book.author == keyword || book.ISBN == keyword) {
            cout << "Found: " << book.title << " by " << book.author << " (" << book.ISBN << ") - " << (book.available ? "Available" : "Checked Out") << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Book not found.\n";
    }
}

void checkoutBook() {
    string isbn;
    cin.ignore();
    cout << "Enter ISBN of book to checkout: ";
    getline(cin, isbn);
    for (auto &book : books) {
        if (book.ISBN == isbn && book.available) {
            Borrower newBorrower;
            cout << "Enter borrower's name: ";
            getline(cin, newBorrower.name);
            newBorrower.borrowedISBN = isbn;
            newBorrower.dueDays = 14;
            borrowers.push_back(newBorrower);
            book.available = false;
            cout << "Book checked out successfully!\n";
            return;
        }
    }
    cout << "Book not available or not found.\n";
}

void returnBook() {
    string isbn;
    cin.ignore();
    cout << "Enter ISBN of book to return: ";
    getline(cin, isbn);
    for (auto &book : books) {
        if (book.ISBN == isbn && !book.available) {
            book.available = true;
            for (auto it = borrowers.begin(); it != borrowers.end(); ++it) {
                if (it->borrowedISBN == isbn) {
                    borrowers.erase(it);
                    cout << "Book returned successfully!\n";
                    return;
                }
            }
        }
    }
    cout << "Book not found or already returned.\n";
}

void calculateFine() {
    string name;
    cin.ignore();
    cout << "Enter borrower's name: ";
    getline(cin, name);
    for (const auto &borrower : borrowers) {
        if (borrower.name == name) {
            int overdueDays;
            cout << "Enter overdue days: ";
            cin >> overdueDays;
            if (overdueDays > 0) {
                cout << "Fine amount: Rs. " << overdueDays * 5 << "\n";
            } else {
                cout << "No fine applicable.\n";
            }
            return;
        }
    }
    cout << "Borrower not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Search Book\n";
        cout << "3. Checkout Book\n";
        cout << "4. Return Book\n";
        cout << "5. Calculate Fine\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        
        switch (choice) {
            case 1: addBook(); break;
            case 2: searchBook(); break;
            case 3: checkoutBook(); break;
            case 4: returnBook(); break;
            case 5: calculateFine(); break;
            case 6: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice, try again.\n";
        }
    } while (choice != 6);
    
    return 0;
}
