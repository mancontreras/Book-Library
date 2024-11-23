#include "Magazine.h"
#include <string>
#include <sstream>

/*Include header file*/


/*Define constructors and getters*/
/*Specify that is a subclass*/
Magazine::Magazine() : Material() {

}

Magazine::Magazine(std::string _title, std::string _author, int _yearPublished, bool _availability,
                   int _issueNumber, std::string _editorial)
    : Material(_title, _author, _yearPublished, _availability) {
  
    issueNumber = _issueNumber;
    editorial = _editorial;
    }


void Magazine::addArticle(Article _article, int _index) {
    if (_index >= 0 && _index < 7) {
         articles[_index] = _article;
    }}
/*Define a method to store articles into an array*/


Article Magazine::getArticle(int index) {
    if (index >= 0 && index < 7) {
        return articles[index];
    }
       return Article();
}



int Magazine::getIssueNumber() {
    return issueNumber;
}

std::string Magazine::getEditorial() {
    return editorial;
}
