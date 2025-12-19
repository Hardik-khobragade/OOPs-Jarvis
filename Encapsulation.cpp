/* ------------------------------------
   CLASS & OBJECT
------------------------------------ */

/*
class class_name
{
    data_members;
    member_functions;
};
*/

/*
object creation:
class_name object_name;
*/

/* ------------------------------------
   ACCESS SPECIFIERS
------------------------------------ */

/*
private:
    data_member;        // cannot be accessed directly
*/

/*
public:
    member_function();  // can be accessed using object
*/

/* ------------------------------------
   REAL EXAMPLE (University Theme)
------------------------------------ */

/*
class Student
{
private:
    int studentId;        // data hiding
    string studentName;

public:
    void setStudent();    // setter
    void showStudent();   // getter
};
*/

/* ------------------------------------
   CONSTRUCTOR
------------------------------------ */

/*
Constructor:
- Same name as class
- No return type
- Called automatically when object is created
*/

/*
class_name()
{
    initialization code
}
*/

/* ------------------------------------
   DESTRUCTOR
------------------------------------ */

/*
Destructor:
- Same name as class
- Starts with ~
- Called automatically when object is destroyed
*/

/*
~class_name()
{
    cleanup code
}
*/
#include<iostream>
using namespace std;

class Pen
{
    private:
        int size;
    public:
    Pen(){
        cout<<"Pen is created"<<endl;
    }
    ~Pen(){
    cout<<"Pen is destoyed"<<endl;
    }

    string color;
    int price;
    void showColor(){
        cout<<"hello";
    }
};
//class classname {};
//class blueprint of object
//object realtime entity

//how to create class

int main()
{
    Pen cello;
    cello.price = 5;
    cout<<cello.price<<endl;
    cello.price=10;
    cout<<cello.price<<endl;
  
}


//animal -- proprty walk,talk
//Dog  ---proprt walk,bark,jump
//cat ---protty walk,jump