//
//  main.cpp
//  Learning
//
//  Created by Keyanoush Razavi on 16.12.16.
//  Copyright © 2016 Kanonymous. All rights reserved.
//
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <array>
#include <vector>
#include "file_out.h"
#include "myclass.h"
#include "Person.hpp"


#define PI 3.14159

//What is polymorphism. It is using the same function in different objects with different outcome
class Enemy
{
public:
    void setAttackPower(int n) {attackPower = n;}
protected:
    int attackPower;
};

class Ninja : public Enemy
{
public:
    void attack()
    {cout << "Ninja Warrior Attack: -" << attackPower << endl;}
};

class Monster : public Enemy
{
public:
    void attack()
    {cout << "MOnster SLAM: -" << attackPower << endl;}
};

////////////////////

class BankAccount
{
public:
    BankAccount() {cout << "Hallo" << endl;}        //Das ist der constructer. Dieser wird immer aufgerufen wenn das object erstellt wird. könnte auch einen input haben der zB den namen sofot setzt
    void sayHi() {cout << "Hallo" << endl; }        //public fct. Kann von aussen benutzt werden
    void setName(string input) { name = input;}
    string getName() {return name;}
private:
    string name;                                    //Private variablen sind von aussen nicht zugreifbar. Nur durch interne funktionen geht dies
};

template<typename T>
struct adder
{
    vector<T> items;
    adder(const T &item) { items.push_back(item); }
    adder& operator,(const T & item) { items.push_back(item); return *this; }
};

template <class Type, size_t N>
class Array {
public:
    Array(const adder<Type> & init)
    {
        for (size_t i = 0; i<N; i++)
        {
            if( i< init.items.size()) m_Array[i] = init.items[i];
        }
    }
    size_t Size() const { return N;}
    Type & operator[](size_t i) {return m_Array[i];}
    const Type & operator[](size_t i) const {return m_Array[i];}
    
    
private:
    Type m_Array[N];
};


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    string hallo;
//    stringstream ss;
//    
//    ss << 1234 << "Hallo" ;
//    cout << ss.str();
//    
//    string test;
//    cin >>  test;
//    int n;
//    cin >> n;
//    ss << test << n;
//    cout << ss.str();
//    
//    ifstream myfile;
//    
//    myfile.open("hello.txt");
//    
//    
//    while(getline(myfile, hallo))
//    {
//        istringstream ss(hallo);
//    }
//    cout << endl;
    
// THis part of code creates us a new Array, made of our own array class that we created up
//    Array<int, 10> array = (adder<int>(1),2,3,4,5,6,7,8,9,10);
//    for (size_t i=0; i < array.Size(); i++)
//    {
//        std::cout << array[i] << std::endl;
//    }
    //my own bankaccount class
    BankAccount test;
    test.sayHi();
    
    //has to get variables for init, because we included a constructor
    MyClass testing(2,3, 3);
    testing.myPrint();
    MyClass *ptr = &testing;
    
    //diese funktion kommt nicht in MyClass vor. Myclass ist eine polymorphe funktion die die funktion von mother geerbt hat
    ptr->death();
    
    ptr->myPrint();
    
    testing.myConstPrint();
    
    Person Keya("Keyan", Birthday(2, 7, 1992));
    Keya.printInfo();
    
    //Polymorphism Test
    
    Ninja n;
    Monster m;
    
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    
    enemy1->setAttackPower(10);
    enemy2->setAttackPower(25);
    
    n.attack();
    m.attack();
    
    //Test
    vector<vector<string> > output;
    vector<vector<vector<string> > > calc_data;
    for(int i=0; i< 2; i++)
    {
        vector<string> test;
        test.push_back("1");
        test.push_back("2");
        test.push_back("3");
        output.push_back(test);
    }
    for(int i=0; i<5; i++)
    {
        vector<string> d1;
        vector<vector<string> > d2;
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                d1.push_back(to_string(k));
            }
            d2.push_back(d1);
        }
        calc_data.push_back(d2);
    }
    for(int i=0; i<5; i++)
    {
        stringstream ss;
        
//        file_out calculation;
//        calculation.path = "/Users/kanonym/Desktop/Learning/Calculation.csv";
//        calculation.write_trans(output);
//        calculation.append(calc_data[i]);
//        
//        vector<vector<string> > SensorOutput;
//        
//        for(size_t sensID=1; sensID<calc_data.size(); sensID++)
//        {
//            string part = to_string(sensID);
//            vector<string> curr_row;
//            curr_row.push_back(part);
//            SensorOutput.push_back(curr_row);
//            for(int j=0; j<90; j++)
//            {
//                curr_row.push_back("=A"+to_string(17+j-1));
//                SensorOutput.push_back(curr_row);
//            }
//        }
//        calculation.append(SensorOutput);
    }
    return 0;
}






