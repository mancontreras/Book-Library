#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>

class Material {
private:
    string title;
    string author;
    int yearPublished;
    string availability;

public:
    Material(); 
    Material(string title, string author, int yearPublished, string availability); 

    
    string getTitle();
    string getAuthor();
    int getYearPublished();
    string getAvailability();

    
    void setAvailability(string availability);
};

#endif
