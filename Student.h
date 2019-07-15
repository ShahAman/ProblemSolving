#ifndef STUDENT_H
#define STUDENT_H


#include <string>
#include <iostream>
using namespace std;


class Student
{
private:
    int age, standard;
    string first_name, last_name;
public:
     Student();
     void set_age(int num);
     void set_standard(int snum);
     void set_first_name(string fname);
     void set_last_name(string lname);
     int get_age();
     int get_standard();
     string get_first_name();
     string get_last_name();
     string to_string();

};

#endif // STUDENT_H
