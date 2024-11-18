#ifndef BOOK_H
#define BOOK_H

#include "Material.h"
#include <string>
#include <iostream>


class Book : public Material {
private:
    int numberOfPages;
    string ISBN;
    string editorial;

public:
    Book();
    Book(string title, string author, int yearPublished, string availability,
         int numberOfPages, string ISBN, string editorial);

    int getNumberOfPages();
    string getISBN();
    string getEditorial();
};

#endif
