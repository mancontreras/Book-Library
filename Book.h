#ifndef BOOK_H
#define BOOK_H

#include "Material.h"
#include <string>
/* Include header file of the superclass */


/* Define my attributes and methods*/
/*Specify that is a subclass*/

class Book : public Material {
private:
    int numberOfPages;
    std::string isbn;
    std::string editorial;

public:
    Book();
    Book(std::string _title, std::string _author, int _yearPublished, bool _availability,
         int _numberOfPages, std::string _isbn, std::string _editorial);

    int getNumberOfPages();
    std::string getISBN();
    std::string getEditorial();
};

#endif
