#include <iostream>
#include <fstream> 

using namespace std; 

void file(){
    ifstream fin; 
    fin.open("demo.csv");
    string line; 
    if (fin)
    {
        while (getline(fin,line,','))
        {
            cout << line << "," ;            
        }
    }else
    {
        cout << "Error" << endl; 
    }
    fin.close();
}

int main(){
    file();
    return 0; 
}