//
//  file_out.cpp
//  Learning
//
//  Created by Keyanoush Razavi on 19.12.16.
//  Copyright © 2016 Kanonymous. All rights reserved.
//

#include "file_out.h"

void file_out::write(vector< vector<string> >& vec_in)
{
    ofstream myfile;
    long size_x, size_y;
    
    size_x = vec_in.size();
    size_y = vec_in[0].size();
    
    myfile.open(path);
    
    for(int i=0; i<size_x; i++)
    {
        for(int j=0; j<size_y; j++)
        {
            if(!vec_in[i][j].empty())
            {
                if(*vec_in[i][j].end()-1 == '\n') myfile << vec_in[i][j].substr(0, *(vec_in[i][j].end()-1));
                else myfile << vec_in[i][j];
            }
            if(j!=size_y-1) myfile << "@@";
        }
        myfile << endl;
    }
    myfile.close();
}

void file_out::write_trans(vector<vector<string> >& vec_in)
{
    vector< vector<string> > output;
    for(size_t j=0; j<vec_in[0].size(); j++)
    {
        vector<string> temp;
        for(size_t i=0; i<vec_in.size(); i++)
        {
            temp.push_back(vec_in[i][j]);
        }
        output.push_back(temp);
    }
    write(output);
}

void file_out::append(vector<vector<string> >& vec_in)
{
    ofstream myfile;
    long size_x, size_y;
    size_x = vec_in.size();
    size_y = vec_in[0].size();
    myfile.open(path, ofstream::app);
    
    for(int i=0; i<size_x; i++)
    {
        for(int j=0; j<size_y; j++)
        {
            if(!vec_in[i][j].empty())
            {
                if(*(vec_in[i][j].end()-1) == '\n') myfile << vec_in[i][j].substr(0, *(vec_in[i][j].end()-1));
                else myfile << vec_in[i][j];
            }
            if(j!=size_y-1) myfile << "@@";
        }
        myfile << endl;
    }
    myfile.close();
}

void file_out::append_trans(vector<vector<string> >& vec_in)
{
    vector< vector<string> > output;
    for(size_t j=0; j<vec_in[0].size(); j++)
    {
        vector<string> temp;
        for(size_t i=0; i<vec_in.size(); i++)
        {
            temp.push_back(vec_in[i][j]);
        }
        output.push_back(temp);
    }
    append(output);
}










