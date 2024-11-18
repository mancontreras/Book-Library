#include "Article.h"
#include <string>
#include <iostream>

Article::Article() {
    title = "";
    author = "";
    content = "";
}

Article::Article(string title, string author, string content) {
    this->title = title;
    this->author = author;
    this->content = content;
}

string Article::getTitle() {
    return title;
}

string Article::getAuthor() {
    return author;
}

string Article::getContent() {
    return content;
}
