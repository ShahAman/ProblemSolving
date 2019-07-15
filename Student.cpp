#include "Student.h"

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>


using namespace std;

  Student::Student()
    {
        age = 0;
        standard = 0;
        first_name.clear();
        last_name.clear();
    }
    void Student::set_age(int num)
    {
        age = num;
    }
    void Student::set_standard(int snum)
    {
        standard = snum;
    }
    void Student::set_first_name(string fname)
    {
        first_name = fname;
    }
    void Student::set_last_name(string lname)
    {
        last_name = lname;
    }
    int Student::get_age()
    {
        return age;
    }
    int Student::get_standard()
    {
        return standard;
    }
   string Student::get_first_name()
    {
        return first_name;
    }
    string Student::get_last_name()
    {
        return last_name;
    }
    string Student::to_string()
    {
        stringstream ss;
        char c = ',';
        ss << age << c << first_name << c << last_name << c << standard;
        return ss.str();
    }
