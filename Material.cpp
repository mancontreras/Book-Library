#include "Material.h"
#include <iostream>
#include <string>



Material::Material() {
    title = "";
    author = "";
    yearPublished = 0;
    availability = "Unavailable";
}

Material::Material(string title, string author, int yearPublished, string availability) {
    this->title = title;
    this->author = author;
    this->yearPublished = yearPublished;
    this->availability = availability;
}

string Material::getTitle() {
    return title;
}

string Material::getAuthor() {
    return author;
}

int Material::getYearPublished() {
    return yearPublished;
}

string Material::getAvailability() {
    return availability;
}

void Material::setAvailability(string availability) {
    this->availability = availability;
}

