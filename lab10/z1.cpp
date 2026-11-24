#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    p = q;
    
    cout << *p << " " << *q << endl;
    cout << p << " " << q << " " << a << " " << b << endl;


    int d= 10, c=20; 
    int *s= &d, *r= &c;
    s= *r
 
    cout << *s<< " " << *r<< endl;
    cout << s<< ""<< r<< " " << d<< " " << c<< endl;

    return 0;
}


