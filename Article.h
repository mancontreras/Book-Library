#ifndef ARTICLE_H
#define ARTICLE_H
#include <string>


/* Define my attributes and methods*/
class Article {
private:
    std::string atitle;
    std::string writer;
    std::string content;



public:
    Article();
    Article(std::string _atitle, std::string _writer, std::string _content);

    std::string getTitle();
    std::string getAuthor();
    std::string getContent();
};

#endif
