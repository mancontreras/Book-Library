#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include <string>
#include <iostream>

class Student{
    private:
    string loanStatus;
    string materialRetrieved;
    int debt;

    public:
    Student(string);
    void retrieveMaterial();
    void returnMaterial();
    void payDebt();

};

#endif
