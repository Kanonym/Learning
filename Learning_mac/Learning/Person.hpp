//
//  Person.hpp
//  Learning
//
//  Created by Keyanoush Razavi on 21.12.16.
//  Copyright © 2016 Kanonymous. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>
#include "Birthday.hpp"

//namespace std include in BIrthday.h

class Person
{
public:
    Person(string n, Birthday b) : name(n), bd(b) {}
    void printInfo();
private:
    string name;
    Birthday bd;
};

#endif /* Person_hpp */
