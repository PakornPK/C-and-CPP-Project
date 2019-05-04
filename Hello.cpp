#include <iostream>
#include <fstream>

using namespace std; 

void file(){
    ofstream fout("demo.csv");
    if (fout)
    {
        fout << "test" << endl; 
        cout << "successfully" << endl;
    }else
    {
        cout << "Error" << endl; 
    }
    fout.close(); 
    
}

int main(){    
    file();
    return 0; 
}