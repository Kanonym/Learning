//
//  myclass.hpp
//  Learning
//
//  Created by Keyanoush Razavi on 20.12.16.
//  Copyright © 2016 Kanonymous. All rights reserved.
//

#ifndef myclass_h
#define myclass_h

#include <stdio.h>
#include <iostream>

using namespace std;

//Die funktion death ist ein virtuelle funktion, die bei geerbten verwendet wird wenn die funktion nicht nochmals in der tochter deklariert wurde
//tempplate specoalization wenn die klasse auf unterschiedliche typen unterschiedlch reagieren soll

template<class T>
class nTemp{
public:
    nTemp(T x)
    {
        cout << x << " not a char" << endl;
    }
};

//falls jetzt char übergeben wird, gesondert beachten
template<>
class nTemp <char>
{
public:
    nTemp(char x){cout << x << " das ist ein char" << endl;}
};


class mother
{
public:
    
    //template class that can take 2 different types.
    template<class T, class U>
    T smaller(T a, U b)
    {
        return(a<b ? a:b);          //this is equipvalent to is first is tru return a else return b
    }
    
    virtual void death()
    {
        cout << "Muss töten" << endl;
    }
};

class MyClass : public mother
{
public:
    int var;
    MyClass(int x) : constVar(x) {}
    MyClass(int a, int b, int c) : regVar(a), constVar(b), var(c) {}    //THis is the only way to initialize the constant member variables, if we try to call the variables in our constructer it results in an error, this is called a member initialization list.
    //Alternative would be to let seperate init from header.
    //MyClass(int a, int b); Watch cpp file
    ~MyClass();
    void myPrint();
    void myConstPrint() const;    //const function in unserer klasse
    //operator overlaoding
    MyClass operator+(MyClass &obj)
    {
        MyClass res(19);
        res.var= this->var+obj.var;
        return res;
    }
protected:
private:
    int regVar;
    const int constVar;
};

#endif /* myclass_hpp */
