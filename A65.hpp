//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

void swaptwo(int &a, int &b){
    int temp1;
    temp1 = a;
    a = b;
    b = temp1;
}

// swaptwo() ; to swap two values (a, b) to (b, a)
void swap(int &a, int &b, int &c){ // 
    int temp2;
    temp2 = c; // temp2 = 30
    c = a; // c = 10
    a = temp2; // a = 30
    swaptwo(b, c);
}


