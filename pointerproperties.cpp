#pragma clang diagnostic push
#pragma ide diagnostic ignored "bugprone-sizeof-expression"
// Section 12
// Simple Pointers
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ----------------- HELPER FUNCTIONS ----------------- //

//void double_data(int *int_ptr) {
//    *int_ptr *= 2;
//}
//
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void display(const vector<string> *const v ) {
//    //(*v).at(0) = "Funny"; //compiler error, constant value
//    for (auto str: *v)
//        cout << str << " ";
//    cout << endl;
////    v = nullptr; //compiler error, constant pointer
//}
//
//void display(int *array, int sentinel) {
//    while (*array != sentinel)
//        cout << *array++ << " ";
//    cout << endl;
//}

//int main()
//{
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

// ----------------- ARRAYS AND POINTERS, SUBSCRIPT/OFFSET EQUIVALENCY ----------------- //

//    int scores[] {100, 95, 89};
//    cout << "Value of scores: " << scores << endl;
//
//    int *score_ptr {scores};
//    cout << "Value of score_ptr: " << score_ptr << endl;
//    cout << "\nArray subscript notation -------------------------" << endl;
//    cout << scores[0] << endl;
//    cout << scores[1] << endl;
//    cout << scores[2] << endl;
//    cout << "\nPointer subscript notation -------------------------" << endl;
//    cout << score_ptr[0] << endl;
//    cout << score_ptr[1] << endl;
//    cout << score_ptr[2] << endl;
//    cout << "\nPointer offset notation -----------------------------" << endl;
//    cout << *score_ptr << endl;
//    cout << *(score_ptr+1) << endl;
//    cout << *(score_ptr+2) << endl;
//    cout << "\nArray offset notation -----------------------------" << endl;
//    cout << *scores << endl;
//    cout << *(scores+1) << endl;
//    cout << *(scores+2) << endl;

// ----------------- POINTER ARITHMETIC ----------------- //

//    int scores[] {100, 95, 89, 68, -1}; //sentinel value -1
//    int *score_ptr {scores};
//
//    while (*score_ptr != -1) {
//        cout << *score_ptr << endl;
//        score_ptr++;
//    }
//
//    score_ptr = scores;
//    while (*score_ptr != -1)
//        cout << *score_ptr++ << endl; //equivalent style

//    string s1{"Frank"};
//    string s2{"Frank"};
//    string s3{"James"};
//
//    string *p1 {&s1};
//    string *p2 {&s2};
//    string *p3 {&s1};
//
//    cout << boolalpha;
//    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl; // false
//    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl; // true
//
//    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl; // true
//    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // true
//
//    p3 = &s3; //point to James
//    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // false

//    char name [] {"Frank"};
//    char *char_ptr1 {nullptr};
//    char *char_ptr2 {nullptr};
//
//    char_ptr1 = &name[0]; //F
//    char_ptr2 = &name[3]; //N
//
//    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2-char_ptr1) << " characters away from " << *char_ptr1 << endl;

// ----------------- PASSING POINTERS TO A FUNCTION ----------------- //

//    int value{10};
//    int *int_ptr {nullptr};
//
//    cout << "Value: " << value << endl;
//    double_data(&value);
//    cout << "Value: " << value << endl;
//
//    cout << "--------------------" << endl;
//    int_ptr = &value;
//    double_data(int_ptr);
//    cout << "Value: " << value << endl;

//    int x {100}, y{200};
//    cout << "\nx: " << x << endl;
//    cout << "y: " << y << endl;
//    swap(&x, &y);
//    cout << "\nx: " << x << endl;
//    cout << "y: " << y << endl;

//    cout << "----------------------" << endl;
//    vector<string> stooges {"Larry", "Moe", "Curly"};
//    display(&stooges);

//    cout << "\n----------------------------" << endl;
//    int scores[] {100, 98, 97, 79, 85, -1};
//    display(scores, -1);

// ----------------- RETURNING POINTERS FROM A FUNCTION ----------------- //

//int *create_array(size_t size, int init_value = 0) {
//    int *new_storage {nullptr};
//    new_storage = new int[size];
//    for (size_t i{0}; i<size; ++i)
//        *(new_storage+i) = init_value;
//    return new_storage;
//}
//
//void display(const int *const array, size_t size) {
//    for (size_t i{0}; i<size; ++i)
//        cout << array[i] << " ";
//    cout << endl;
//}
//
//int main() {
//    int *my_array {nullptr};
//    size_t size;
//    int init_value {};
//    cout << "\n How many integers would you like to allocate? ";
//    cin >> size;
//    cout << "What value would you like them initialized to? ";
//    cin >> init_value;
//    my_array = create_array(size, init_value);
//    cout << "\n-------------------------------" << endl;
//    display(my_array, size);
//    delete [] my_array;
//    cout << endl;
//    return 0;
//}

// ----------------- REFERENCES ----------------- //

//int main() {
//    int num {100};
//    int &ref {num};
//    cout << num << endl;
//    cout << ref << endl;
//
//    num = 200;
//    cout << "\n-----------------------" << endl;
//    cout << num << endl;
//    cout << ref << endl;
//
//    ref = 300;
//    cout << "\n-----------------------" << endl;
//    cout << num << endl;
//    cout << ref << endl;

//    vector <string> stooges {"Larry", "Moe", "Curly"};
//    for (auto str: stooges)
//            str = "Funny"; //str is a COPY of each vector element
//    for (auto str: stooges) //warning thrown because copies are made for no reason
//            cout << str << endl;
//    cout << "\n--------------------------------" << endl;
//    for (auto &str: stooges)
//            str = "Funny";
//    for (auto const &str:stooges)
//            cout << str << endl; //vector elements have changed
//    for (auto const &str: stooges)
//            cout << str << endl;
//
//    cout << endl;
//    return 0;
//}

// ----------------- SECTION CHALLENGE ----------------- //

int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2) {
    int *new_array {nullptr};
    new_array = new int[size1*size2];
    int position {0};
    for (size_t i{0}; i < size1; ++i) {
        for (size_t j{0}; j < size2; ++j) {
            new_array[position] = array1[i] * array2[j];
            ++position;
        }
    }
    return new_array;
}

void display(const int *const array, size_t size) {
    for (size_t i{0}; i<size; ++i)
        cout << array[i] << " ";
    cout << endl;
}

int main() {
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    cout << "Output" << endl;
    cout << "\n----------------------------------" << endl;
    cout << "Array 1: ";
    display(array1, 5);
    cout << "Array 2: ";
    display(array2, 3);
    int *results = apply_all(array1, 5, array2, 3);
    cout << "Results: ";
    display(results, 5*3);
    return 0;
}
#pragma clang diagnostic pop