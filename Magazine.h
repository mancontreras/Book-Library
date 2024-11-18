#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <string>
#include <iostream>
#include "Article.cpp"


#include "Material.h"

class Magazine : public Material {
private:
    int issueNumber;
    string editorial;
    Article ATitle;
    Article Editorial;


public:
    Magazine();
    Magazine(string title, string author, int yearPublished, string availability,
             int issueNumber, string editorial);

    int getIssueNumber();
    string getEditorial();
};

#endif
