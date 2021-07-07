//
// Created by yichen on 2020-10-03.
//

#ifndef MODULE01_ASSIGNMENT01_PERSON_H
#define MODULE01_ASSIGNMENT01_PERSON_H
#include <string>
using namespace std;




//create a class call Person
class Person{
public:                                             //Access specifier
    Person(string name = "");                       //constructor
    ~Person();
    void GetPersonInfo() const;
    string m_strName;
};

#endif //MODULE01_ASSIGNMENT01_PERSON_H
