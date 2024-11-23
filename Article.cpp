#include "Article.h"
#include <string>

/*Includes the header file */

Article::Article() {}

Article::Article(std::string _atitle, std::string _writer, std::string _content) {
    atitle = _atitle;
    writer = _writer;
    content = _content;
}
/*Default constructor and one with parameters */

std::string Article::getTitle() {
    return atitle;
}

std::string Article::getAuthor() {
    return writer;
}

std::string Article::getContent() {
    return content;
}
/* Getters for the attributes*/