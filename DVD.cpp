#include "DVD.h"
#include <string>

/*Include header file*/


/*Define constructors and getters*/
/*Specify that is a subclass*/
DVD::DVD() : Material() {}

DVD::DVD(std::string _title, std::string _author, int _yearPublished, bool _availability,
         double _duration, std::string _studio, std::string _format)
    : Material(_title, _author, _yearPublished, _availability) {
    duration = _duration;
    studio = _studio;
    format = _format;
}

double DVD::getDuration() {
    return duration;
}

std::string DVD::getStudio() {
    return studio;
}

std::string DVD::getFormat() {
    return format;
}
