//
// Created by yichen on 2020-10-03.
//

#include <string>
#include <iostream>
#include "Person.h"


//PersonMethod definition


Person::Person(string name) {
    m_strName = name;
}

Person::~Person() {

}

void Person::GetPersonInfo() const {
    cout << "name:  " << m_strName << endl;
}