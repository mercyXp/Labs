# Laboratory Work No.9  
## C++: STRINGS

## I. THEORY AND EXPLANATIONS

### I.1. Characters
Character constants are enclosed in single quotes: `'q'`, `'4'`, `'&'`.
A `char` type variable is allocated 1 byte of memory.

---

### I.2. Escape Character Constants
Control characters, which cannot be entered from the keyboard, are represented as special constants with a backslash. They are used like regular constants. For example:

```cpp
char tab = '\t', new_line = '\n';
```
The table below shows examples of some of these constants:

Code	Meaning
~\n~   New line
~\t~   Horizontal tab
~"~	   Double quotation mark
~'~	   Single quotation mark
~\0~   Null character
~\~	   Backslash
~\N~   Octal constant (N is the octal value)
~\xN~  Hexadecimal constant (N is the hexadecimal value)

### I.3. Strings
When processing text, it is convenient to work not only with individual characters but also with sequences of characters—strings. A string in C is a sequence of characters ending with a character having code 0: '\0'. This character is not counted when determining the length of the string.

To handle strings as a single object, standard functions are available. These functions all use the null character as a delimiter.

String constants are enclosed in double quotes: "word", "many words", "1 2 3 4 5"

The null character is automatically added to the end of string constants. For example, the string "many words" contains 11 characters, but its length is 10. In a program, a string constant is treated as a constant pointer to char.

For storing a sequence of characters, a character array is used. Individual characters in a string can be accessed like elements of an array. To ensure the array is treated as a single string, it must include a null character. For example:

```cpp
char str_c[15];  // Declaration and definition of a static array
                 // str_c is a constant pointer
```
This array can store strings with lengths from 0 to 14 characters. Strings can be constructed either character by character or using standard functions. An example of character-by-character initialization (the last 7 elements of the array are unused):

```cpp
char let[15] = {'l', 'e', 't', 't', 'e', 'r', 's', '\0'};
````
Strings can also be handled using pointer variables:

```cpp
char *str_d;  // Declaration and definition of a pointer variable
str_d = "Initial string";  // Assigning a string constant
```
or
```
str_d = new char[40];     // Allocating memory dynamically
```

### I.4. Arrays of Strings
An array of strings is a two-dimensional array. In general, a two-dimensional array is treated as an array of one-dimensional arrays. A static two-dimensional array is declared as follows:

```cpp
type s[number_of_rows][number_of_columns];
```
Since array elements are stored row by row in memory, the number of columns must be known; otherwise, the starting address of the next row cannot be calculated.

For a string array, the number of columns must be equal to the maximum string length + 1. Examples of working with a static array of 3 or more strings, each with a length of at least 6:

```cpp
strcpy(str[2], "three");  // Assigning a value to the 2nd string in the array
cout << str[2] << endl;   // Printing the 2nd string in the array
cout << *str[2] << endl;  // Printing the first character of the 2nd string in the array
```
### II. EXAMPLES
Concatenating Strings:

```cpp
char str1[] = "Hello";
char str2[] = "World";
strcat(str1, str2);  // str1 becomes "HelloWorld"
```
String Comparison:

```cpp
if (strcmp(str1, str2) == 0) {
    cout << "The strings are equal" << endl;
} else {
    cout << "The strings are different" << endl;
}
```
Finding the Length of a String:

```cpp
int len = strlen(str1);
cout << "Length of str1: " << len << endl;
```
Copying Strings:

```cpp

strcpy(str1, "New String");
cout << "str1: " << str1 << endl;
```
Using String Input:

```cpp
char user_input[50];
cout << "Enter your name: ";
cin >> user_input;
cout << "You entered: " << user_input << endl;
```