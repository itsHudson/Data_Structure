# Question 1: Define the meaning of classes and objects.
## Answer:
  - A **class** is a user-defined data type in C++ that acts as a blueprint for creating objects. It groups data members (variables) and member functions (methods) into a single unit.
  - An **object** is an instance of a class. It represents a real-world entity and is used to access the data and functions defined in the class.

---

# Question 2: Differentiate Class and Structure in C++.
## Answer:
  - A **class** has its members (data and functions) set to **private by default**, while a **structure (struct)** has its members set to **public by default**.
  - A **class** is mainly used for implementing object-oriented programming concepts such as encapsulation and data hiding.
  - A **structure** is generally used for simple data grouping without strict access control.
  - Both class and struct can contain variables and functions, but classes are more commonly used in complex programs.

---

# Question 3: Define Constructor and Destructor.
## Answer:
  - A **constructor** is a special member function that is automatically called when an object is created. It is used to initialize the object’s data members. It has the same name as the class and does not have a return type.
  - A **destructor** is a special member function that is automatically called when an object is destroyed. It is used to release resources such as memory. It has the same name as the class but is preceded by a tilde (~).

---

# Question 4: What is “Constructor overloading”?
## Answer:
  - Constructor overloading is a feature in C++ where a class can have **multiple constructors with different parameter lists**.
  
  - This allows objects to be initialized in different ways depending on the arguments provided.
  
  - For example:
    - A default constructor (no parameters)
    - A constructor with one parameter
    - A constructor with multiple parameters
  
  - The compiler determines which constructor to call based on the arguments passed during object creation.

---
