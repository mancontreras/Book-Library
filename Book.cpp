#include "Book.h"

#include <string>
#include <iostream>

Book::Book() : Material() {
    numberOfPages = 0;
    ISBN = "";
    editorial = "";
}

Book::Book(string title, string author, int yearPublished, string availability,
           int numberOfPages, string ISBN, string editorial)
    : Material(title, author, yearPublished, availability) {
    this->numberOfPages = numberOfPages;
    this->ISBN = ISBN;
    this->editorial = editorial;
}

int Book::getNumberOfPages() {
    return numberOfPages;
}

string Book::getISBN() {
    return ISBN;
}

string Book::getEditorial() {
    return editorial;
}
