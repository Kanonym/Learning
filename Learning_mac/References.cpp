//
//  References.cpp
//  Learning
//
//  Created by Keyanoush Razavi on 19.12.16.
//  Copyright © 2016 Kanonymous. All rights reserved.
//
// how to create an array of a selected type with a specific size
#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

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
    size_t Size() const {return N;}
    Type & operator[] (size_t i) {return m_Array[i];}
    const Type & operator[](size_t i) const{return m_Array[i];}
    
    
private:
    Type m_Array[N];
};

//int main()
{
    Array<int, 10> array = (adder<int>(1),2,3,4,5,6,7,8,9,10);
    for (size_t i=0; i < array.Size(); i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}
