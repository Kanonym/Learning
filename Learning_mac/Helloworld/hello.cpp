#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    ifstream myfile;
    string word;
    myfile.open("hello.txt");
    while(myfile >> word)
    {
        cout << word << ' ' ;
    }
    cout << endl;
    cout << "Hello world" << endl;
    
    return 0;
}
