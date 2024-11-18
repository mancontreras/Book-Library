#ifndef DVD_H
#define DVD_H
#include <string>
#include <iostream>

#include "Material.h"

class DVD : public Material {
private:
    double duration;
    string studio;
    string format;

public:
    DVD();
    DVD(string title, string author, int yearPublished, string availability,
        double duration, string studio, string format);

    double getDuration();
    string getStudio();
    string getFormat();
};

#endif
