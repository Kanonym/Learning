//
//  file_out.h
//  Learning
//
//  Created by Keyanoush Razavi on 19.12.16.
//  Copyright © 2016 Kanonymous. All rights reserved.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifndef file_out_h
#define file_out_h


using namespace std;

class file_out{
public:
    string path;
    void write (vector <vector<string> >&);
    void write_trans (vector<vector<string> >&);
    void append (vector< vector<string> >&);
    void append_trans (vector< vector <string> >&);
    
    template <size_t size_x, size_t size_y>
    void write_arr(string (&arr)[size_x][size_y]);
    template <size_t size_x, size_t size_y>
    void append_arr(string (&arr)[size_x][size_y]);
};

//Templates for array writing. Das template hier sorgt dafür dass size_x und size_y zufällige datentypen mit beliebiger größe sind. Es werden zwei variable benutzt da es sich hierbei um ein 2D array handelt
template <size_t size_x, size_t size_y> void file_out::write_arr(string (&arr)[size_x][size_y])
{
    vector< vector<string> > vec2d;
    for(int i=0; i<size_x; i++)
    {
        vector<string> temp(arr[i], arr[i] + size_y);
        vec2d.push_back(temp);
    }
    write(vec2d);
}

template <size_t size_x, size_t size_y> void file_out::append_arr(string (&arr)[size_x][size_y])
{
    vector< vector<string> > vec2d;
    for(int i=0; i<size_x; i++)
    {
        vector<string> temp(arr[i], arr[i] + size_y);
        vec2d.push_back(temp);
    }
    append(vec2d);
}

#endif /* file_out_h */
