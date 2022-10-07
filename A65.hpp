//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().
void swap(int a, int b, int c);
void swaptwo(int a, int b);

void swap(int a, int b, int c){
    cout << "Enter three integers, separated by spaces: \n";
    cin >> a >> b >> c;
    cout << c << ", ";
    swaptwo(a, b);
}

void swaptwo(int a, int b){
    cout << a << ", " << b << endl;
}

// swaptwo() ; to swap two values (a, b) to (b, a)
