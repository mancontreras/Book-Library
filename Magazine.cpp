#include "Magazine.h"
#include <string>
#include <iostream>

Magazine::Magazine() : Material() {
    issueNumber = 0;
    editorial = "";
}

Magazine::Magazine(string title, string author, int yearPublished, string availability,
                   int issueNumber, string editorial)
    : Material(title, author, yearPublished, availability) {
    this->issueNumber = issueNumber;
    this->editorial = editorial;
}

int Magazine::getIssueNumber() {
    return issueNumber;
}

string Magazine::getEditorial() {
    return editorial;
}
