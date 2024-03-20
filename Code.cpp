#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Book {
    string title;
    string author;
    int publicationYear;

public:
    Book(string title, string author, int publicationYear) : title(title), author(author), publicationYear(publicationYear) {}

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    int getPublicationYear() const {
        return publicationYear;
    }
        void display() const {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPublication Year: " << publicationYear << endl;
};
class Library {
    vector<Book> books;
public:
    void AddBook(const Book& book) {
        books.push_back(book);
    }

    void RemoveBook(const string& title) {
        books.erase(std::remove_if(books.begin(), books.end(), [&](const Book& b) {
            return b.getTitle() == title;
        }), books.end());

    }

    // add a function FindBookByTitle function
    Book FindBookByTitle(const string& title) const {
        for (const auto& book : books) {
            if (book.getTitle() == title) {
                return book;
            }
        }
        return Book("", "", 0); // Return a default-constructed book if not found
    }

    // add a function FindBookByAuthor function
    Book FindBookByAuthor(const string& author) const {
        for (const auto& book : books) {
            if (book.getAuthor() == author) {
                return book;
            }
        }
        return Book("", "", 0); // Return a default-constructed book if not found
    }

    // add a function ListAllBooks function
    void ListAllBooks() const {
        for (const auto& book : books) {
            book.display();
        }
    }

    //add a function SortBooksByTitle: Sorts the books alphabetically by title
    void SortBooksByTitle() {
        sort(books.begin(), books.end(), [](const Book& book1, const Book& book2) {
            return book1.getTitle() < book2.getTitle();
        });
    }

    //add a function SortBooksByAuthor: Sorts the books alphabetically by author
    void SortBooksByAuthor() {
        sort(books.begin(), books.end(), [](const Book& book1, const Book& book2) {
            return book1.getAuthor() < book2.getAuthor();
        });
    }
};
class UserInterface {
public:
    static void menu(Library& library) {
        int choice;
        do {
            cout << "\nLibrary Management System\n";
            cout << "1. Add a book\n";
            cout << "2. Remove a book\n";
            cout << "3. Search for a book by title\n";
            cout << "4. Search for books by author\n";
            cout << "5. List all books\n";
            cout << "6. Sort books by title\n";
            cout << "7. Sort books by author\n";
            cout << "8. Exit\n";
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addBook(library);
                    break;
                case 2:
                    removeBook(library);
                    break;
                case 3:
                    searchBookByTitle(library);
                    break;
                case 4:
                    searchBooksByAuthor(library);
                    break;
                case 5:
                    library.ListAllBooks();
                    break;
                case 6:
                    library.SortBooksByTitle();
                    break;
                case 7:
                    library.SortBooksByAuthor();
                    break;
                case 8:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 8);
    }class UserInterface {
public:
    static void menu(Library& library) {
        int choice;
        do {
            cout << "\nLibrary Management System\n";
            cout << "1. Add a book\n";
            cout << "2. Remove a book\n";
            cout << "3. Search for a book by title\n";
            cout << "4. Search for books by author\n";
            cout << "5. List all books\n";
            cout << "6. Sort books by title\n";
            cout << "7. Sort books by author\n";
            cout << "8. Exit\n";
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addBook(library);
                    break;
                case 2:
                    removeBook(library);
                    break;
                case 3:
                    searchBookByTitle(library);
                    break;
                case 4:
                    searchBooksByAuthor(library);
                    break;
                case 5:
                    library.ListAllBooks();
                    break;
                case 6:
                    library.SortBooksByTitle();
                    break;
                case 7:
                    library.SortBooksByAuthor();
                    break;
                case 8:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 8);
    }class UserInterface {
public:
    static void menu(Library& library) {
        int choice;
        do {
            cout << "\nLibrary Management System\n";
            cout << "1. Add a book\n";
            cout << "2. Remove a book\n";
            cout << "3. Search for a book by title\n";
            cout << "4. Search for books by author\n";
            cout << "5. List all books\n";
            cout << "6. Sort books by title\n";
            cout << "7. Sort books by author\n";
            cout << "8. Exit\n";
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addBook(library);
                    break;
                case 2:
                    removeBook(library);
                    break;
                case 3:
                    searchBookByTitle(library);
                    break;
                case 4:
                    searchBooksByAuthor(library);
                    break;
                case 5:
                    library.ListAllBooks();
                    break;
                case 6:
                    library.SortBooksByTitle();
                    break;
                case 7:
                    library.SortBooksByAuthor();
                    break;
                case 8:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 8);
    }class UserInterface {
public:
    static void menu(Library& library) {
        int choice;
        do {
            cout << "\nLibrary Management System\n";
            cout << "1. Add a book\n";
            cout << "2. Remove a book\n";
            cout << "3. Search for a book by title\n";
            cout << "4. Search for books by author\n";
            cout << "5. List all books\n";
            cout << "6. Sort books by title\n";
            cout << "7. Sort books by author\n";
            cout << "8. Exit\n";
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addBook(library);
                    break;
                case 2:
                    removeBook(library);
                    break;
                case 3:
                    searchBookByTitle(library);
                    break;
                case 4:
                    searchBooksByAuthor(library);
                    break;
                case 5:
                    library.ListAllBooks();
                    break;
                case 6:
                    library.SortBooksByTitle();
                    break;
                case 7:
                    library.SortBooksByAuthor();
                    break;
                case 8:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 8);
    }class UserInterface {
public:
    static void menu(Library& library) {
        int choice;
        do {
            cout << "\nLibrary Management System\n";
            cout << "1. Add a book\n";
            cout << "2. Remove a book\n";
            cout << "3. Search for a book by title\n";
            cout << "4. Search for books by author\n";
            cout << "5. List all books\n";
            cout << "6. Sort books by title\n";
            cout << "7. Sort books by author\n";
            cout << "8. Exit\n";
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addBook(library);
                    break;
                case 2:
                    removeBook(library);
                    break;
                case 3:
                    searchBookByTitle(library);
                    break;
                case 4:
                    searchBooksByAuthor(library);
                    break;
                case 5:
                    library.ListAllBooks();
                    break;
                case 6:
                    library.SortBooksByTitle();
                    break;
                case 7:
                    library.SortBooksByAuthor();
                    break;
                case 8:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 8);
    }class UserInterface {
public:
    static void menu(Library& library) {
        int choice;
        do {
            cout << "\nLibrary Management System\n";
            cout << "1. Add a book\n";
            cout << "2. Remove a book\n";
            cout << "3. Search for a book by title\n";
            cout << "4. Search for books by author\n";
            cout << "5. List all books\n";
            cout << "6. Sort books by title\n";
            cout << "7. Sort books by author\n";
            cout << "8. Exit\n";
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addBook(library);
                    break;
                case 2:
                    removeBook(library);
                    break;
                case 3:
                    searchBookByTitle(library);
                    break;
                case 4:
                    searchBooksByAuthor(library);
                    break;
                case 5:
                    library.ListAllBooks();
                    break;
                case 6:
                    library.SortBooksByTitle();
                    break;
                case 7:
                    library.SortBooksByAuthor();
                    break;
                case 8:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 8);
    }class UserInterface {
public:
    static void menu(Library& library) {
        int choice;
        do {
            cout << "\nLibrary Management System\n";
            cout << "1. Add a book\n";
            cout << "2. Remove a book\n";
            cout << "3. Search for a book by title\n";
            cout << "4. Search for books by author\n";
            cout << "5. List all books\n";
            cout << "6. Sort books by title\n";
            cout << "7. Sort books by author\n";
            cout << "8. Exit\n";
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addBook(library);
                    break;
                case 2:
                    removeBook(library);
                    break;
                case 3:
                    searchBookByTitle(library);
                    break;
                case 4:
                    searchBooksByAuthor(library);
                    break;
                case 5:
                    library.ListAllBooks();
                    break;
                case 6:
                    library.SortBooksByTitle();
                    break;
                case 7:
                    library.SortBooksByAuthor();
                    break;
                case 8:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 8);
    }
