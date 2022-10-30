#pragma clang diagnostic push
#pragma ide diagnostic ignored "bugprone-sizeof-expression"
// Section 12
// Simple Pointers
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num(10);
    cout << "Value of num is: " << num << endl;
    cout << "sizeof num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;

    int *p;
    cout << "\nValue of p is: " << p << endl; //garbage
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof p is: " << sizeof p << endl;
    p = nullptr;
    cout << "\nValue of p is: " << p << endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    cout << "\nsizeof p1 is:  " << sizeof p1 << endl;
    cout << "sizeof p2 is: " << sizeof p2 << endl;
    cout << "sizeof p3 is: " << sizeof p3 << endl;
    cout << "sizeof p4 is: " << sizeof p4 << endl;
    cout << "sizeof p5 is: " << sizeof p5 << endl;

    return 0;
}


#pragma clang diagnostic pop