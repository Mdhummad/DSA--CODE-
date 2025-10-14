// write a function to find out the first and last digit of a number without returning anything
// #include<iostream>
// using namespace std;

// void lastnum(int a, int &lastdigit, int &firstdigit) {
//     lastdigit = a % 10;  // Get the last digit
//     while(a >= 10) {
//         a = a / 10;  // Reduce `a` until it's the first digit
//     }
//     firstdigit = a;  // Get the first digit
// } 

// int main() {
//     int x;
//     int lastDigit;
//     int firstDigit;

//     cout << "Enter your number: ";
//     cin >> x;

//     lastnum(x, lastDigit, firstDigit);

//     cout << "First digit: " << firstDigit << ", Last digit: " << lastDigit << endl;

//     return 0;
// }



// USING POINTER
#include<iostream>
using namespace std;

void lastnum(int a, int* lastdigit, int* firstdigit) {
    *lastdigit = a % 10;  // Get the last digit
    while(a >= 10) {
        a = a / 10;  // Reduce `a` until it's the first digit
    }
    *firstdigit = a;  // Get the first digit
return;
} 

int main() {
    int x;
    int lastDigit;
    int firstDigit;
    cout << "Enter your number: ";
    cin >> x;
int* ptr1=&lastDigit;
int* ptr2=&firstDigit;
    lastnum(x, ptr1, ptr2);

    cout << "First digit: " << firstDigit << ", Last digit: " << lastDigit << endl;

    return 0;
}