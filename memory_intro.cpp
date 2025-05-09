#include <iostream>
using namespace std;

// Function to demonstrate memory concepts
void demonstrateMemory() {
    // Variable declarations (stack memory)
    int integerVar = 42;       // 4 bytes (typically)
    char charVar = 'A';        // 1 byte
    double doubleVar = 3.14;   // 8 bytes (typically)

    // Pointers to show memory addresses
    int* intPtr = &integerVar;
    char* charPtr = &charVar;
    double* doublePtr = &doubleVar;

    // Dynamic memory allocation (heap)
    int* heapVar = new int(100);

    // Output: Syntax demonstration
    cout << "=== C++ Syntax and Variable Declarations ===" << endl;
    cout << "Integer variable: " << integerVar << endl;
    cout << "Character variable: " << charVar << endl;
    cout << "Double variable: " << doubleVar << endl;

    // Output: Memory addresses (physical memory in RAM)
    cout << "\n=== Memory Addresses (Physical Memory in RAM) ===" << endl;
    cout << "Physical memory is a series of bytes in RAM, each with a unique address." << endl;
    cout << "Address of integerVar: " << &integerVar << endl;
    cout << "Address of charVar: " << (void*)&charVar << endl;
    cout << "Address of doubleVar: " << &doubleVar << endl;
    cout << "Address of heapVar (heap): " << heapVar << endl;

    // Output: Memory segments
    cout << "\n=== Memory Segments ===" << endl;
    cout << "Stack: Local variables (integerVar, charVar, doubleVar) are stored here." << endl;
    cout << "Heap: Dynamically allocated memory (heapVar) is stored here." << endl;
    cout << "Addresses are organized by the OS; stack grows downward, heap grows upward." << endl;

    // Output: Byte-level memory usage
    cout << "\n=== Byte-Level Memory Usage ===" << endl;
    cout << "Size of int: " << sizeof(integerVar) << " bytes" << endl;
    cout << "Size of char: " << sizeof(charVar) << " bytes" << endl;
    cout << "Size of double: " << sizeof(doubleVar) << " bytes" << endl;
    cout << "Pointer arithmetic (intPtr + 1): " << intPtr + 1 << " (moves 4 bytes)" << endl;

    // Output: Compiler's role
    cout << "\n=== Compiler's Role ===" << endl;
    cout << "The compiler translates C++ code to machine code, assigning memory addresses." << endl;
    cout << "It ensures variables are allocated in the correct segment (stack/heap)." << endl;

    // Clean up heap memory
    delete heapVar;
}

int main() {
    // Call the demonstration function
    demonstrateMemory();
    return 0;
}
