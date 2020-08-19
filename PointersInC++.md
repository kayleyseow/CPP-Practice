## Pointers In C++ Notes
8/15/2020

#### The Basics
  - computer memory is important
  - pointers used to manipulate and manage this said computer memory
  - an integer, a number, which stores a memory address
  - you need to be able to read and write from those bytes of memory, thus pointers
  - extremely useful tool, memory used for everything
  - POINTERS BASICALLY JUST AN INTEGER WHICH HOLDS A MEMORY ADDRESS!
  
#### Void Pointer
  - void data type specifies functions that don't return a value to the calling function
  - unlike C, C++ allows you to declare pointer variables to this type
  - useful because they are compatible with all types of pointer variables and therefore can serve as generic pointer variables in situations where code handles several different data types
  - syntax: void* pntr = nullptr;  <- completely typeless, (completely useless,) and has a memory address of 0
  - example to find memory address of a previously declared int  
    ```  
    int var = 8;
    void* ptr = &var;
    ```  
    ^ explanation: if you put an "&" before the variable, you're basically asking what the memory address of the variable is and assigning it to the pointer  

#### Types of Pointers  
  - depending on the size of the integer (16-bit, 32-bit, 64-bit) you can declare the pointer as different types
  - types include int, double (be sure to typecast though), long
  - useful for manipulation of that memory, like if you would want to read and write to that memory

#### Dereferencing
  - stick an asterisk in front of the pointer, so you can read from/write to your data
  - example of dereferencing (3rd line):  
    ```  
    int var = 8;
    int* ptr = &var;
    *ptr = 10; // change value of var from 8 to 10
    LOG(var); //prints out 10
    ```  

#### Create a Variable in the Heap Instead of the Stack (portion of memory)
  - example of creating a variable on the heap:
    ```
    char* buffer = new char[8]; // remember that a char is one byte, this line allocates 8 bytes of memory  
    memset(buffer, 0, 8);  
    ```  
  - memset syntax: memset(pointer to the beginning of the block of memory, a value that it takes in, the size, or how many bytes it should fill)
  - we should also delete data when we are done, because of the new keyword
  - example with delete:
    ```
    char* buffer = new char[8];  
    memset(buffer, 0, 8);   
    delete[] buffer; // use the delete keyword with the array operator to delete it  
    ```

#### Double Pointer
  - reminder that pointers are just variables, you are able to have pointers to pointers
  - example of a double pointer:
    ```
    char* buffer = new char[8];  
    memset(buffer, 0, 8);  
    char** ptr = &bufffer; // a double pointer!  
    delete[] buffer;  
    ```

#### Pointers and const
  - interactions between pointers and the const modifier
  - unlike C, you  an declare a pointer to a const object to give the program another access path to this unchanging value
  - example of declaring pointer to constant value:
    ```
    const char* x // const modifies char, x points to object of type char  
    ```
  - example of declaring pointer to constant value, where variable is initialized with literal value of the character string:
    ```
    const char* x = "This is only a test";
    ```
  - example of constant pointer declaration:
    ```
    char *const x = "this string is frozen";
    ```
    ^ in the code, it creates a constant that contains the address of the specified character string, value cannot change because the pointer itself is a constant
  - example of a constant reference to a constant value:
    ```
    const char *const x = "This is also an example";
    ```
    ^ in the code, a constant x points to another constant
  - constant pointers give you the convenience of the pointer notation
  - also protect program values from being changed
    
#### Recap
  - pointers are just integers which store memory addresses!

#### Helpful Links
  - "POINTERS in C++", https://www.youtube.com/watch?v=DTxHyVn0ODg
  - "CONST in C++", https://www.youtube.com/watch?v=4fJBrditnJU&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=34  
