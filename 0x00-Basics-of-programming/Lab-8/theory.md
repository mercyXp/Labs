# LABORATORY WORK ¹ 8

## C++: DATA, POINTERS, AND ARRAYS

---

## THEORY AND EXPLANATIONS

### Stages of Preparing Variables and Functions for Use in a Program

The main elements of a C++ program are variables and functions. Each of these elements must be prepared for use. This preparation generally involves three stages: **declaration**, **definition**, and **initialization**.

1. **Declaration**: Assigning a name and type to the variable or function.
2. **Definition**: Creating the variable (allocating memory) or writing the function's source code.
3. **Initialization**: Assigning an initial value to the variable.

For variables, declaration and definition are often combined. For example:

```cpp
int variableName = 0;  // Declaration, definition, and initialization

# Global and Local Variables
A global variable, i.e., one declared outside of functions, is assigned a default initial value of **zero**. For local variables, the initial value is **undefined**. If the initial value is known in advance, initialization is done during the definition. For example:

```cpp
int variableName = 5;
Function Declaration
This involves specifying the prototype of the function, i.e., the function's name, parameter types, and return type (parameter names are optional). For example:
cpp


int functionName(int, double);
Function Definition
This includes the complete header with parameter names and the source code (function body). For example:
cpp


int functionName(int a, double b) {
    return a + b;
}
If a function has not been declared earlier in the program file, its definition serves as its declaration.
Rules for Variables and Functions
A variable can be assigned a new value only after it has been declared and defined, either using an assignment operator or an input operator.
Variables can be used in comparisons and calculations only after they have been assigned a value (including during initialization).
A function can only be called after it has been declared or defined. This is because the program code is parsed sequentially, so the declaration and/or definition of any object must occur before its first usage.
Scope of Data
A declared name can only be used in a specific part of the program. The scope of a variable is the block in which it is declared, starting from the point of declaration to the end of the block.
Global Variables: Declared outside functions.
Local Variables: If global and local variables share the same name, the local variable remains visible in its block.
The scope of a function's formal parameters is its body.
Pointers in C++
A pointer is a variable whose value is the address of a memory area allocated for a variable or value of a specific type. Declaring a pointer specifies the type of data the pointer will reference. For example:
cpp


int* p; // Pointer to an integer
char* c; // Pointer to a character
Memory Operators
new: Dynamically allocates memory and initializes a pointer variable. Example:
cpp


int* ptr = new int;
delete: Frees allocated memory. Example:
cpp


delete ptr;
Pointer Operations
Address-of Operator (&): Gets the address of a variable, typically to assign it to a pointer. Example:
cpp


int a = 5;
int* p = &a;
Dereference Operator (*): Accesses the object a pointer points to. Example:
cpp


*p = 10; // Modifies the value of 'a' via the pointer 'p'
Accessing Structure Fields via Pointer
If a structure is referenced through a pointer, the -> operator is used to access its fields. Example:
cpp


struct Example {
    int value;
};
Example* ptr = new Example;
ptr->value = 10;
Pointer Arithmetic
Only integer addition or subtraction can be performed on pointers. The pointer value changes based on the size of the type it references. For example:
cpp


int arr;
int* ptr = arr;
ptr++; // Moves to the next integer (not the next byte)
Arrays in C++
The name of an array is a pointer that stores the address of the first element of the array. Array elements are indexed starting from 0.
Defining Constants for Array Size
Named constants can be used for specifying the number of elements in arrays, defined using the preprocessor directive #define. Example:
cpp


#define SIZE 10
int array[SIZE];
Static Arrays
Declared with a fixed number of elements:
cpp


int array;
Dynamic Arrays
Declared as a pointer variable:
cpp


int* array = new int;
Freeing Dynamic Memory
Free memory allocated to a dynamic array:
cpp


delete[] array;
Accessing Array Elements
Array elements can be accessed either by index (indexing) or using a pointer (indirect addressing). For example:
cpp


array[0] = 10; // Indexing
*(array + 1) = 20; // Pointer dereferencing