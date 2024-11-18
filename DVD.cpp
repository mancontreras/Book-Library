#include "DVD.h"

DVD::DVD() : Material() {
    duration = 0.0;
    studio = "";
    format = "";
}

DVD::DVD(string title, string author, int yearPublished, string availability,
         double duration, string studio, string format)
    : Material(title, author, yearPublished, availability) {
    this->duration = duration;
    this->studio = studio;
    this->format = format;
}

double DVD::getDuration() {
    return duration;
}

string DVD::getStudio() {
    return studio;
}

string DVD::getFormat() {
    return format;
}
