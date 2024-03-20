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
};
