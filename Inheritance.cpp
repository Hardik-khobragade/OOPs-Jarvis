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


#include<iostream>
using namespace std;
//parent class
class Animal{
   public:
      void walk()
      {
         cout<<"Walked"<<endl;
      }
   protected:
      void run(){
         cout<<"run"<<endl;
      }
};


class Dog : public Animal{
   public:
      void bark(){
         cout<<"Bhow bhow"<<endl;
      }
      void run(){
         run();
      }
};


class cat:public Animal{

};

//animal->dog->tomyy

int main()
{
   Dog tommy;
   tommy.walk();
   tommy.bark();

   tommy.run();

}