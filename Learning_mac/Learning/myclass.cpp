//
//  myclass.cpp
//  Learning
//
//  Created by Keyanoush Razavi on 20.12.16.
//  Copyright © 2016 Kanonymous. All rights reserved.
//

#include "myclass.h"

//MyClass::MyClass(int a, int b) : regVar(a), constVar(b)
//{
    //test
//}

void MyClass::myPrint()
{
    cout << "Helloooooo" << endl;
}

MyClass::~MyClass()
{
    cout << "Bye" << endl;
}

void MyClass::myConstPrint() const
{
    cout << "KOnstantes Hallo" << endl;
}
