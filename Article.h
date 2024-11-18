#ifndef ARTICLE_H
#define ARTICLE_H
#include <string>
#include <iostream>

class Article {
private:
    string title;
    string author;
    string content;

public:
    Article();
    Article(string title, string author, string content);

    string getTitle();
    string getAuthor();
    string getContent();
};

#endif
