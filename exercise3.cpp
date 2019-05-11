#include <iostream>

using namespace std; 

int main(){
    char cchar; 
    short sshort; 
    int iint; 
    long llong; 
    long long Llong; 
    float ffloat; 
    double ddouble; 
    long double ldouble; 
    bool bbool; 
    cout << "this sizeof(char) is " << sizeof(cchar) << " bytes" << endl; 
    cout << "this sizeof(short) is " << sizeof(sshort) << " bytes" << endl; 
    cout << "this sizeof(int) is " << sizeof(iint) << " bytes" << endl; 
    cout << "this sizeof(long) is " << sizeof(llong) << " bytes" << endl; 
    cout << "this sizeof(long long) is " << sizeof(Llong) << " bytes" << endl; 
    cout << "this sizeof(float) is " << sizeof(ffloat) << " bytes" << endl; 
    cout << "this sizeof(double) is " << sizeof(ddouble) << " bytes" << endl; 
    cout << "this sizeof(long double) is " << sizeof(ldouble) << " bytes" << endl; 
    cout << "this sizeof(bool) is " << sizeof(bbool) << " bytes" << endl; 
    return 0; 
}