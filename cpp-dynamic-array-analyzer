#include <iostream>
using namespace std;

int main () {
    int n ,i;
    cout <<"Enter the Size of The Array: ";
    cin >> n;

    int a[n];
    int *p= new int[n];

    cout <<"Enter the Elements of The Array"<< endl;
    for (i=0; i<n; i++){
        cout << "Element " << i+1 << ": ";
        cin >> *(p+i);
    }
    cout << endl;
    cout <<"_______________________________________________________________________________________"<< endl;

    cout <<"The Elements of The Array are: ";
    for (i=0; i<n; i++){
        cout << *(p+i) << " ";
    }
    cout << endl;
    cout <<"_______________________________________________________________________________________"<< endl;

    cout <<"The Even and Odd Elements of The Array are: "<< endl;
    for (i=0; i<n; i++){
        cout << "index: " << i+1 << ":";
        if (*(p+i) % 2 == 0){
            cout << " Even Element: " << *(p+i) << endl;
        }
        else {
            cout << " Odd Element: " << *(p+i) << endl;
        }
    }
    cout << endl;
    cout <<"_______________________________________________________________________________________"<< endl;

    cout <<"The Positive, Negative and Zero Elements of The Array are: "<< endl;
    for (i=0; i<n; i++){
        cout << "index: " << i+1 << ":";
        if (*(p+i) > 0){
            cout << " Positive Element: " << *(p+i) << endl;
        }

        else if (*(p+i) < 0){ 
            cout << " Negative Element: " << *(p+i) << endl;
        }
        
        else {
            cout << " Zero Element: " << *(p+i) << endl;
        }
    }
    cout << endl;
    cout <<"_______________________________________________________________________________________"<< endl;

    // Deallocate the memory allocated for the array
    // حذف الذاكرة المخصصة للمصفوفة
    delete[] p;
    p = nullptr;
    
    return 0;
}

// OUTPUT:
// Enter the Size of The Array: 5
// Enter the Elements of The Array
// Element 1: 1
// Element 2: -2
// Element 3: 0
// Element 4: 3
// Element 5: -4
// _______________________________________________________________________________________
// The Elements of The Array are: 1 -2 0 3 -4
// _______________________________________________________________________________________
// The Even and Odd Elements of The Array are:
// index: 1: Odd Element: 1
// index: 2: Even Element: -2
// index: 3: Even Element: 0
// index: 4: Odd Element: 3
// index: 5: Even Element: -4
// _______________________________________________________________________________________
// The Positive, Negative and Zero Elements of The Array are:
// index: 1: Positive Element: 1
// index: 2: Negative Element: -2
// index: 3: Zero Element: 0
// index: 4: Positive Element: 3
// index: 5: Negative Element: -4
// _______________________________________________________________________________________
