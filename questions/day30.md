---
id: day30_questions
layout: default
title: Day 30 Recap Questions
reference solutions:
  1. Assignment
  2. Initialization (calls copy constructor)
  3. Shallow copy only does field-wise assignments, including copying pointers. Deep copy allocates memory and copies over values.
  4. If you need a non-default destructor to release resources, then you will mostly likely need a non-default copy constructor and a non-default assignment operator.
  5. [NEW] Myclass& operator=(const Myclass & copyfrom); return *this;
---

1. Does the line `f2 = f1;` use initialization or assignment (assume `Foo` is a clas
s and `f1` and `f2` are both of type `Foo`)?
<br /><br /><br />
2. Does the line `Foo f2 = f1;` use initialization or assignment (assume `Foo` is a class and `f1` is of type `Foo`)?
<br /><br /><br />
3. What is the difference between a shallow copy and a deep copy?
<br /><br /><br />
4. What is the rule of 3?
<br /><br /><br />
5. What is the expected prototype for an assignment operator in order to prevent changing the object being copied from, but also allow for chaining of assignment expressions. What should be returned?
<br /><br /><br />
