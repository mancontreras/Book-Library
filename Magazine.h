#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <string>
#include "Material.h"
#include "Article.h"
/*Here I included the header file for article because with the cpp it didn't run*/

/* Include header file of the superclass */


/* Define my attributes and methods*/
/*Specify that is a subclass*/

class Magazine : public Material {
private:
    int issueNumber;
    std::string editorial;
    Article articles[7];
    


public:
    Magazine();
    Magazine(std::string _title, std::string _author, int _yearPublished, bool _availability,
             int _issueNumber, std::string _editorial);

   
   
   void addArticle(Article _article, int index);

    Article getArticle(int index);
   
    int getIssueNumber();
    std::string getEditorial();
};

#endif
