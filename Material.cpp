#include "Material.h"
#include <string>

/*Include header file */

/*Define contructors, attributes and methods*/
Material::Material() {}


Material::Material(std::string _title, std::string _author, int _yearPublished, bool _availability) {
    title = _title;
    author = _author;
    yearPublished = _yearPublished;
    availability = _availability;}

std::string Material::getTitle() {
    return title;
}

std::string Material::getAuthor() {
    return author;
}

int Material::getYearPublished() {
    return yearPublished;
}



bool Material::getAvailability() {
    return availability;}


void Material::setAvailability(bool _availability){
    availability = _availability;               
}

