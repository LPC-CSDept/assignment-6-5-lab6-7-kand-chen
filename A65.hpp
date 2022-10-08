//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().
void swap(int &a, int &b, int &c);
void swaptwo(int &a, int &b);

void getinput(int a, int b, int c){
    cout << "Enter three integers separated by a space " << endl;
    cin >> a >> b >> c;
    swap(a, b, c);
}

void swap(int &a, int &b, int &c){
    int n1, n2, n3;
    n1 = c;
    n2 = a;
    n3 = b;
    cout << n1 << ", " << n2 << ", " << n3;
}
// swaptwo() ; to swap two values (a, b) to (b, a)
void getInput(int a, int b)
{
    cout << "Enter two integers separated by spaces \n";
    cin >> a >> b;
    swaptwo(a, b); 
}

void swaptwo(int &a, int &b){
    int n1;
    n1 = a;
    a = b;
    b =  n1;
    cout << a << ", " << b << endl;
}


