#include <iostream>
#include <fstream>
#include <random>

using namespace std; 

void file(){
    ofstream fout("demo.csv");
    double v1,v2; 
    
    if (fout)
    {
        for(size_t i = 0 ; i < 10 ; i++){
            v1 = rand()% 100 ; 
            v2 = rand()% 1000; 
            fout << v1 << "," << v2 <<  endl;
        } 
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