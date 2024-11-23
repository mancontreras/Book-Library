#ifndef MATERIAL_H
#define MATERIAL_H
/*Define header file*/
#include <string>


/* Define my attributes and methods*/
class Material {
    /*Attributes protected as it is the superclass*/
protected:
    std::string title;
    std::string author;
    int yearPublished;
    bool availability;

public:
    Material(); 
    Material(std::string _title, std::string _author, int _yearPublished, bool _availability);



    std::string getTitle();
    std::string getAuthor();
    int getYearPublished();
    bool getAvailability();

    
    void setAvailability(bool _availability);
};

#endif
