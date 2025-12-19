/* ------------------------------------
   RUNTIME POLYMORPHISM
------------------------------------ */

/*
Runtime Polymorphism:
- Function call decided at runtime
- Achieved using virtual functions
- Requires inheritance
*/

/* ------------------------------------
   VIRTUAL FUNCTION (SYNTAX)
------------------------------------ */

/*
Virtual Function:
- Declared using 'virtual' keyword
- Defined in base class
- Overridden in derived class
*/

/*
class Base_class
{
public:
    virtual return_type function_name();
};
*/

/* ------------------------------------
   DERIVED CLASS WITH OVERRIDING
------------------------------------ */

/*
Derived class:
- Inherits base class
- Provides its own implementation
*/

/*
class Derived_class : public Base_class
{
public:
    return_type function_name();   // overriding virtual function
};
*/

/* ------------------------------------
   BASE CLASS POINTER (IMPORTANT)
------------------------------------ */

/*
Base_class* base_pointer;
*/

/* ------------------------------------
   DERIVED CLASS OBJECT
------------------------------------ */

/*
Derived_class object_name;
*/

/* ------------------------------------
   POINTER POINTING TO DERIVED OBJECT
------------------------------------ */

/*
base_pointer = &object_name;
*/

/* ------------------------------------
   FUNCTION CALL (RUNTIME BINDING)
------------------------------------ */

/*
base_pointer->function_name();
*/

/* ------------------------------------
   PURE VIRTUAL FUNCTION
------------------------------------ */

/*
Pure Virtual Function:
- Virtual function with no body
- Assigned value = 0
- Forces derived class to implement it
*/

/* ------------------------------------
   ABSTRACT CLASS
------------------------------------ */

/*
Abstract Class:
- Contains at least one pure virtual function
- Object cannot be created
*/

/*
class Base_class
{
public:
    virtual return_type function_name() = 0;
};
*/

/* ------------------------------------
   DERIVED CLASS IMPLEMENTING PURE VIRTUAL FUNCTION
------------------------------------ */

/*
class Derived_class : public Base_class
{
public:
    return_type function_name();   // compulsory implementation
};
*/

/* ------------------------------------
   IMPORTANT RULES
------------------------------------ */

/*
- Pure virtual function makes class abstract
- Abstract class object cannot be created
- Derived class must implement pure virtual function
*/

/* ------------------------------------
   SUMMARY
------------------------------------ */

/*
Virtual Function:
- Has body in base class
- Overriding is optional

Pure Virtual Function:
- No body in base class
- Overriding is compulsory
*/

#include <iostream>
using namespace std;

// -------------------------------
// Base Class
// -------------------------------
class University
{
public:
    virtual void showDetails()
    {
        cout << "University Details" << endl;
    }
};

// -------------------------------
// Derived Class
// -------------------------------
class College : public University
{
public:
    void showDetails()
    {
        cout << "College Details" << endl;
    }
};

int main()
{
    University u;   // base class pointer
    College c;       // derived class object

    u = c;          // base pointer → derived object
    u.showDetails(); // runtime polymorphism
      c.showDetails();
   
    return 0;
}



