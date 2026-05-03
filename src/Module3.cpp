#include <iostream>
using namespace std;

// Function to allocate memory and assign value
int* createPointer(int value) {
    int* ptr = new int;   // allocate memory
    *ptr = value;         // store value
    return ptr;
}

// Function to display value and pointer info
void displayData(int num, int* ptr, string label) {
    cout << label << " value: " << num << endl;
    cout << label << " pointer value: " << *ptr << endl;
    cout << label << " memory address: " << ptr << endl;
    cout << "-----------------------------" << endl;
}

// Function to safely delete memory
void cleanup(int*& ptr) {
    delete ptr;       // free memory
    ptr = nullptr;    // avoid dangling pointer
}

int main() {
    int num1, num2, num3;

    // Input
    cout << "Enter three numbers:\n";
    cout << "1: ";
    cin >> num1;
    cout << "2: ";
    cin >> num2;
    cout << "3: ";
    cin >> num3;

    // Create pointers using dynamic memory
    int* ptr1 = createPointer(num1);
    int* ptr2 = createPointer(num2);
    int* ptr3 = createPointer(num3);

    // Display results
    cout << "\nResults: \n";
    displayData(num1, ptr1, "Number 1");
    displayData(num2, ptr2, "Number 2");
    displayData(num3, ptr3, "Number 3");

    // Clean up memory
    cleanup(ptr1);
    cleanup(ptr2);
    cleanup(ptr3);

    return 0;
}
