#ifndef DVD_H
#define DVD_H
#include <string>
#include "Material.h"

/* Include header file of the superclass */


/* Define my attributes and methods*/
/*Specify that is a subclass*/
class DVD : public Material {
private:
    double duration;
    std::string studio;
    std::string format;

public:
    DVD();
    DVD(std::string _title, std::string _author, int _yearPublished, bool _availability,
        double _duration, std::string _studio, std::string _format);

    double getDuration();
    std::string getStudio();
    std::string getFormat();
};

#endif
