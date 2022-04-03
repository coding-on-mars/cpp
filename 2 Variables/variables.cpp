#include "../stdc++.h"
using namespace std;
// b
// int main(){
//     cout << "Hello Shubham!";
//     // how about Amit?
//     return 0;
// } 

// https://stackoverflow.com/questions/50689210/how-to-allow-vs-code-to-take-input-from-users

// 
// int main(){
//     cout << "Hey buddy, what's your name?" << "\n";
//     string name;
//     cin >> name;
//     cout << "Nice to meet you " << name;
//     return 0;
// } 

// c
// ref: https://stackoverflow.com/questions/1410563/what-is-the-difference-between-a-definition-and-a-declaration
// int main(){
//     // extern string name; // pure declaration
//     // name = "Shubham"; // definition
//     string name = "Shubham"; // declaration and definition 1
//     string name; // declaration and definition 2
//     return 0;
// } 

// d
// int main(){
//     char ch = 'A'; // 8B, depends on implementation, GCC vs clang
//     bool canIgetPlaced = true; // 8B
//     int num = 10; // 32B, +-2^62-1
//     long largeNum; // 64B, +-2^64-1
//     string name = "Shubham"; // numOfChars * 8B
//     string* nameData = &name; // ?? how many bytes
//     cout << sizeof(ch);
//     return 0;
// } 

// e & f 
int main(){
    const int ageOfAmit = 10;
    /**
     * did something 
     * something more
     * few more things
     */
    // ageOfAmit = 11;

    cout << "Age of Amit is " << ageOfAmit << endl;
    return 0;
} 