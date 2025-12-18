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
