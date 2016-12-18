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

#define PI 3.14159

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string hallo;
    cout << "Hello, World!\n";
    
    ifstream myfile;
    
    myfile.open("hello.txt");
    
    while(myfile >> hallo)
    {
        cout << hallo;
    }
    cout << endl;
    
    double dRadius = 3.0;
    double dArea = PI * dRadius * dRadius;

    
    return 0;
}
