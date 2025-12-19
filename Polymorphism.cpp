/* ------------------------------------
   POLYMORPHISM
------------------------------------ */

/*
Polymorphism:
- One name, many forms
- Same function name behaves differently
*/

/* ------------------------------------
   TYPES OF POLYMORPHISM
------------------------------------ */

/*
1. Compile-time Polymorphism
   - Function Overloading
   - Operator Overloading

2. Runtime Polymorphism
   - Function Overriding
   - Virtual Functions
*/

/* ====================================
   COMPILE-TIME POLYMORPHISM
==================================== */

/* ------------------------------------
   FUNCTION OVERLOADING
------------------------------------ */

/*
Function Overloading:
- Same function name
- Different parameter list
- Decided at compile time
*/

/* ------------------------------------
   TYPES OF FUNCTION OVERLOADING
------------------------------------ */

/*
1. By number of parameters
*/

/*
return_type function_name(type1 param1);
return_type function_name(type1 param1, type2 param2);
*/

/*
2. By type of parameters
*/

/*
return_type function_name(int param);
return_type function_name(float param);
*/

/*
3. By order of parameters
*/

/*
return_type function_name(int param, float param);
return_type function_name(float param, int param);
*/

/* ------------------------------------
   OPERATOR OVERLOADING (INTRO ONLY)
------------------------------------ */

/*
operator_symbol overloaded using operator keyword
*/

/* ====================================
   RUNTIME POLYMORPHISM
==================================== */

/* ------------------------------------
   FUNCTION OVERRIDING
------------------------------------ */

/*
Function Overriding:
- Same function name
- Same parameter list
- In different classes
- Requires inheritance
*/

/* ------------------------------------
   BASE CLASS
------------------------------------ */

/*
class University
{
public:
    virtual return_type function_name();
};
*/

/* ------------------------------------
   DERIVED CLASS
------------------------------------ */

/*
class College : public University
{
public:
    return_type function_name();   // overridden function
};
*/

/* ------------------------------------
   VIRTUAL FUNCTION
------------------------------------ */

/*
virtual keyword ensures
- Function call resolved at runtime
- Achieves dynamic binding
*/

/* ------------------------------------
   BASE CLASS POINTER
------------------------------------ */

/*
Base_class* base_pointer;
*/

/* ------------------------------------
   POINTING TO DERIVED OBJECT
------------------------------------ */

/*
base_pointer = &derived_object;
*/

/* ------------------------------------
   FUNCTION CALL
------------------------------------ */

/*
base_pointer->function_name();
*/

/* ------------------------------------
   SUMMARY
------------------------------------ */

/*
Overloading:
- Compile time
- Same class
- Different parameters

Overriding:
- Runtime
- Different classes
- Same function signature
*/

/*
#include <iostream>
using namespace std;

class University
{
public:
    virtual void showDetails()
    {
        cout << "This is a University" << endl;
    }
};

class College : public University
{
public:
    void showDetails()
    {
        cout << "This is a College under University" << endl;
    }
};

int main()
{
    University* u;
    College c;

    u = &c;
    u->showDetails();   // Calls College version

    return 0;
}

*/


#include <iostream>
using namespace std;

class Student
{
public:
    int marks;

    Student(int m)
    {
        marks = m;
    }

    Student operator + (Student s)
    {
        Student temp(0);
        temp.marks = marks + s.marks;
        return temp;
    }
};

int main()
{
    Student s1(50);
    Student s2(60);

    Student s3 = s1 + s2;

    cout << s3.marks << endl;

    return 0;
}





// sum(2,3) sum(2,3,4)

// #include<iostream> 
// using namespace std;
// class Operations
// {
//    public:
//       int sum(int a,int b)
//       {
//          return a+b;
//       }
//          int sum(int a,int b,int c)
//       {
//          return a+b+c;
//       }
// };

// int main()
// {
//    Operations op;
//    cout<<op.sum(2,3)<<endl;
//       cout<<op.sum(2,3,2)<<endl;
//    return 0;
// }