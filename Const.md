## Const Notes
8/19/2020  

#### Quick Introduction
  - const is somewhat of a "fake keyword", doesn't really do much 
  - a promise that you give, that it will be constant (you should be keeping promises!, but sometimes you don't)

#### Syntax
  - example of a const int: 
    const int x = 4; 

#### Const & Pointers
  - example of using const and pointers:  
    ```
    const int max_age = 90;//const must be before int declaration  
    int* a = new int;//creates pointer a, with size of 4 bytes  
    *a = 2;//change the contents of the memory address  
    a = (int*)&max_age;//bypass constant by making it an int pointer  
    std::cout << *a << std::endl;  
    ```
  - example of trying to change the contents of the const pointer and how you would get an error:  
    ```
    const int max_age = 90;//const must be before int declaration  
    const int* a = new int;//creates constant pointer a, with size of 4 bytes  
    *a = 2;//attempts to change the contents of the memory address, but will give you an error  
    a = (int*)&max_age;//bypass constant by making it an int pointer  
    std::cout << *a << std::endl;  
    ```
  - example of being able to change the contents, but not being able to point to something else:
    ```
    const int max_age = 90;  
    int* const a = new int;//creates constant pointer a, with size of 4 bytes  
    *a = 2;  
    a = (int*)&max_age;//tries to reassign the pointer to point to something else, but will give you an error  
    std::cout << *a << std::endl;  
    ```
  - int* const a is the same thing as const int* a, both are before the *
  - writing const int* const a = new int; means that you cannot change the contents of the pointer, and you cannot change wheree the pointer is pointing
  - remember, you are either talking about the pointer itself or where the pointer is pointing
  
#### Const & Methods and Classes
  - example of variables and methods and classes:
    ```
    class Entity{  
    private:  
      int m_x, m_y;  
    public:  
      int Getx() const{ //you can have a const here because all you're doing is just getting a variable  
        return m_x;  
      }  
      void Setx(int x){  
        m_x = x;  
      }  
    };  
    ```
  - example of pointers and methods and classes:
    ```
    class Entity{  
    private:  
      int* m_x, m_y;  
    public:   
      const int* const Getx() const{ //you need to have three, because it returns a pointer which can't be modified and that contents cannot be modified  
        return m_x;//third const guarantees that this return will not modify the m_x  
      }  
      void Setx(int x){  
        m_x = x;  
      }  
    };  
    ```
  - why do you want to declare them as const?
    ^ if you had the class, Entity in the main class, you would not want to copy your class, not copying your objects
  - sometimes, you will see two versions of the same identical functions, but one with const
  - remember to mark your methods as const when you know your methods will not touch anything
  - you can use mutable to basically override

#### Helpful Links
  - "CONST in C++", https://www.youtube.com/watch?v=4fJBrditnJU&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb
    
