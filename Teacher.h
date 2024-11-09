#ifndef TEACHER_H
#define TEACHER_H

#include "User.h"
#include <string>
#include <iostream>

class Teacher{
    private: 
    string materialLoaned;

    public:
    Teacher(string);
    void receiveMaterial();
    void issueMaterial();

};
#endif