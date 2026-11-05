---
id: day29_questions
layout: default
title: Day 29 Recap Questions
reference solutions:
  1. When we create two functions with the same name but different parameters. No.
  2. Almost (operators like `::` and `.` cannot be overloaded.)
  3. [NEW] As a helper function (all parameters explicit), as a class member (left operand is implicit parameter of class type), as a class friend (all parameters explicit, left operand is not class type, function has access to class private members)
  4. A copy constructor initializes a new object by copying information from the argument. It is called when making an explicit call to the copy constructor, sending an object to a function by argument using pass-by-value, and returning a class object from a function by value.
  5. C++ generates an implicitly-defined (shallow) copy constructor that copies over the individual fields.
  6. Signifies that some other class/function has access to an object's private members. It's used when we would like to define functions (like stream insertion/extraction) that need access to the private data but are not (can't be) members of the class.
---

1. What is overloading in C++? Can you overload a function using the same name and parameter types, but different return type?
<br /><br /><br />
2. Is it true that we can overload any operator symbol for a class?
<br /><br /><br />
3. What are three different contexts for overloading an operator? 
<br /><br /><br />
4. What is a copy constructor? When will it be called?
<br /><br /><br />
5. What happens if you don't define a copy constructor?
<br /><br /><br />
6. What is the `friend` keyword? When do we use it?
<br /><br /><br />
