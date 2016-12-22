//
//  Birthday.hpp
//  Learning
//
//  Created by Keyanoush Razavi on 21.12.16.
//  Copyright © 2016 Kanonymous. All rights reserved.
//

#ifndef Birthday_hpp
#define Birthday_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Birthday{
public:
    Birthday(int d, int m, int y) : month(m), day(d), year(y){}
    void printBirth();
private:
    int month;
    int day;
    int year;
    
};

#endif /* Birthday_hpp */
