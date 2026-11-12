---
id: day32_questions
layout: default
title: Day 32 Recap Questions
reference solutions:
  1. "Many forms" - blanket term for all types of ways that classes and functions have different versions that can be executed (inheritance, overloading, overriding, etc.).
  2. Constructors and an explicitly defined assignment operator.
  3. Only member functions of the class and member functions of any derived class have access to the field/function.
  4. [EDIT] Call a base class constructor as the first thing in the derived class initializer list. Otherwise, default base class constructor must exist to be executed.
  5. When a call to a [overridden] member function will cause a different function to be executed depending on the run-time class of object that invokes the function. Must use `virtual` when declaring the function. [Without virtual, you can override but not get dynamic binding.]
  6. base, child, base, child ; without 'virtual' in BaseClass we get base, child, base, base
  7. Yes
---
1.	What is polymorphism?
<br /><br /><br />
2.	What two types of functions are not inherited by a derived class?
<br /><br /><br />
3.	What does `protected` access imply for a class field or function?
<br /><br /><br />
4.  How do we initialize the private fields that are inherited from a Base class in a constructor of a Derived class?
<br /><br /><br />
5.	What is dynamic binding and how do we enable it?
<br /><br /><br />
6.  What is the output of the below code? What if we remove "virtual" from compute() in the BaseClass?

    ```cpp
    class BaseClass {
    public:
      virtual void compute() { std::cout << "base "; }
    };
    class ChildClass : public BaseClass {
    public:
      virtual void compute() { std::cout << "child "; }
    };

    int main() {
       BaseClass b;
       b.compute();
       ChildClass c;
       c.compute();
       BaseClass *p;
       p = &b;
       p->compute();
       p = &c;  // allowed because each ChildClass object "IS-A" BaseClass object
       p->compute();
    }
    ```
<br /><br /><br />
7.	Can a child class have multiple parents?
