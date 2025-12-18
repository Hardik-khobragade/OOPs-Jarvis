/* ------------------------------------
   INHERITANCE (BASIC IDEA)
------------------------------------ */

/*
Inheritance:
- One class acquires properties of another class
- Base class → Parent class
- Derived class → Child class
*/

/* ------------------------------------
   BASE CLASS (PARENT)
------------------------------------ */

/*
class University
{
public:
    university_data;
    university_functions;
};
*/

/* ------------------------------------
   DERIVED CLASS (CHILD)
------------------------------------ */

/*
class College : access_specifier University
{
public:
    college_data;
    college_functions;
};
*/

/* ------------------------------------
   MULTI-LEVEL INHERITANCE
------------------------------------ */

/*
class University
{
};
*/

/*
class College : public University
{
};
*/

/*
class Student : public College
{
};
*/

/* ------------------------------------
   ACCESS SPECIFIER IN INHERITANCE
------------------------------------ */

/*
public inheritance:
- public members stay public
- protected members stay protected
*/

/*
protected inheritance:
- public → protected
- protected → protected
*/

/*
private inheritance:
- public → private
- protected → private
*/

/* ------------------------------------
   OBJECT CREATION (INHERITANCE)
------------------------------------ */

/*
Derived_class object_name;
*/

/* ------------------------------------
   REAL FLOW (University → College → Student)
------------------------------------ */

/*
University
   ↓
College
   ↓
Student
*/
