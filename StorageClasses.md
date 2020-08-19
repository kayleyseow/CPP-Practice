## Storage Classes Notes  
8/14/2020  

#### There are five types of storage classes in C++  
  - Automatic  
  - Static   
  - Extern  
  - Register  
  - "Free Store Objects"  

#### Automatic  
•some space is allocated when the function is running  
•can declare as "auto", but because it is default, almost never used  
•only be used within functions, such as local variables  
•for example, "int month;" is the same as "auto int month;"  

#### Static  
•starts when program executes, lasts until the program ends  
•maintain values between function calls  
•can be added to global variables (cannot be accessed through other files)  
•they will access the same memory block  
•**declaration of static x assumes variable x to be an int, if not an int, you must explicitly state (static double x)  

#### Extern  
•reference of global variable visible to ALL program files  
•point to variable name that has been previously defined  
•used when there are two or more files sharing the same global variables or functions  
•used to declare global variable in another file  

#### Register  
•variables that should be stored in register instead of RAM  
•when you make a variable, memory will be allocated  
•used for variables that require quick access, such as counters  
•*might* be stored in a register depending on hardware and implementation restrictions  

#### Free Store Objects/Mutable  
•member of an object to override a constant  
•can be modified by a const member function  
•objects created using the new operator, objects remain in existence until you use the delete operator  
•these objects are not automatic, not destroyed when program is over  
•control over memory use

#### Helpful Links  
  - "C++ - Storage Classes", https://www.youtube.com/watch?v=NuramFTO6Mk  
  - "C++ - Auto Storage Class", https://www.youtube.com/watch?v=mnyKrsU49Zs&list=PLWPirh4EWFpGDG3--IKMLPoYrgfuhaz_t&index=35  
  - "C++ - Static Storage Class", https://www.youtube.com/watch?v=QJnIGL1KVhc&list=PLWPirh4EWFpGDG3--IKMLPoYrgfuhaz_t&index=37  
  - "C++ - Extern Storage Class", https://www.youtube.com/watch?v=PjdBu1GKDn4&list=PLWPirh4EWFpGDG3--IKMLPoYrgfuhaz_t&index=38  
  - "C++ - Register Storage Class", https://www.youtube.com/watch?v=fyAD7fbVCfg&list=PLWPirh4EWFpGDG3--IKMLPoYrgfuhaz_t&index=36  
  - "C++ - Mutable Storage Class", https://www.youtube.com/watch?v=UFNXd0p7rSA&list=PLWPirh4EWFpGDG3--IKMLPoYrgfuhaz_t&index=39  
