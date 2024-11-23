#include "Book.h"

#include <string>
#include <iostream>

/* Include header file*/
/*Specify that is a subclass*/
Book::Book() : Material() {
    
}

Book::Book(std::string _title, std::string _author, int _yearPublished, bool _availability,
           int _numberOfPages, std::string _isbn, std::string _editorial)
    : Material(_title, _author, _yearPublished, _availability) {
    numberOfPages = _numberOfPages;
    isbn = _isbn;
    editorial = _editorial;
    }

/*Default constructor and one with parameters */

int Book::getNumberOfPages() {
    return numberOfPages;
}

std::string Book::getISBN() {
    return isbn;
}

std::string Book::getEditorial() {
    return editorial;
}

/* Getters for the attributes*/