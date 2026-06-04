#include <iostream>
using namespace std;

int main() {
   
    int x = 0;   
    int* p = &x; // 'p' stores the memory address of 'x'
    
    *p = 10;     // Dereferencing: Directly modifying the value inside x's memory slot via pointer
    
    cout << "Value of x          : " << x << endl;
    cout << "Memory Address of x : " << p << endl;
    cout << "--------------------------------------" << endl;


    int y = 20;
    int* q = &y; // 'q' stores the memory address of 'y'
    
    cout << "Value of y          : " << *q << endl; 
    cout << "Memory Address of y : " << q << endl;
    cout << "--------------------------------------" << endl;


    int sum = *p + *q; 
    
    cout << "SUM (*p + *q)       : " << sum << endl;
    cout << "--------------------------------------" << endl;

    return 0;
}
