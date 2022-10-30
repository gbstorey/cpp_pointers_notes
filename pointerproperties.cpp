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
// ----------------- BASIC PROPERTIES ----------------- //

//    int num(10);
//    cout << "Value of num is: " << num << endl;
//    cout << "sizeof num is: " << sizeof num << endl;
//    cout << "Address of num is: " << &num << endl;
//
//    int *p;
//    cout << "\nValue of p is: " << p << endl; //garbage
//    cout << "Address of p is: " << &p << endl;
//    cout << "sizeof p is: " << sizeof p << endl;
//    p = nullptr;
//    cout << "\nValue of p is: " << p << endl;
//
//    int *p1 {nullptr};
//    double *p2 {nullptr};
//    unsigned long long *p3 {nullptr};
//    vector<string> *p4{nullptr};
//    string *p5{nullptr};
//
//    cout << "\nsizeof p1 is:  " << sizeof p1 << endl;
//    cout << "sizeof p2 is: " << sizeof p2 << endl;
//    cout << "sizeof p3 is: " << sizeof p3 << endl;
//    cout << "sizeof p4 is: " << sizeof p4 << endl;
//    cout << "sizeof p5 is: " << sizeof p5 << endl;
//
//    int score(10);
//    double high_temp(100.7);
//
//    int *score_ptr {nullptr};
//
//    score_ptr = &score;
//
//    cout << "Value of score is: " << score << endl;
//    cout << "Address of score is: " << &score << endl;
//    cout << "Value of score_ptr is: " <<score_ptr << endl;

//    score_ptr = &high_temp; // Compiler error

// ----------------- DEREFERENCING ----------------- //

//    int score {100};
//    int *score_ptr {&score};
//
//    cout << *score_ptr << endl; // 100
//    *score_ptr = 200;
//    cout << *score_ptr << endl; //200
//    cout << score << endl; //200

//    double high_temp {100.7};
//    double low_temp {37.4};
//    double *temp_ptr {&high_temp};
//
//    cout << *temp_ptr << endl; //100.7
//    temp_ptr = &low_temp;
//    cout << *temp_ptr << endl; //34.7

//    string name {"Frank"};
//    string *string_ptr {&name};
//
//    cout << *string_ptr << endl; //Frank
//    name = "James";
//    cout << *string_ptr << endl; //James

//    vector<string> stooges {"Larry", "Moe", "Curly"};
//    vector<string> *vector_ptr {nullptr};
//
//    vector_ptr = &stooges;
//    cout << "First stooge: " << (*vector_ptr).at(0) << endl; //Larry
//
//    cout << "Stooges: ";
//    for (auto stooge: *vector_ptr)
//        cout << stooge << ", ";
//    cout << endl;

// ----------------- DYNAMIC MEMORY ALLOCATION ----------------- //
//    int *int_ptr {nullptr};
//    int_ptr = new int;
//    cout << int_ptr << endl;
//    delete int_ptr;
//
//    size_t size{0};
//    double *temp_ptr {nullptr};
//    cout << "How many temps?: ";
//    cin >> size;
//
////    while (true)   // std::bad_alloc = memory leak
//        temp_ptr = new double[size];
//
//    cout << temp_ptr << endl;
//    delete [] temp_ptr;

// ----------------- ARRAYS AND POINTERS ----------------- //





    cout << endl;

    return 0;
}


#pragma clang diagnostic pop