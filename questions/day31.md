---
id: day31_questions
layout: default
title: Day 31 Recap Questions
reference solutions:
  1. Put `template<typename T>` in the line above the function definition that uses T as a type.
  2. When you find yourself writing functions with essentially the same body, but different types.
  3. Generation of a concrete class or function (instance) for a particular combination of template arguments.
  4. The compiler (not linker) needs to have access to the implementation of templated functions to instantiate them with the template argument. Can use header file .h, but put implementation in .inc or similar file to be included where used.
---
1. How do we define a template function?
<br /><br /><br />
2. Under what conditions would you consider making a function templated?
<br /><br /><br />
3. What is template instantiation?
<br /><br /><br />
4. Why shouldn't template definitions be in .cpp files? How can we separate declaration and definition when using templates?
<br /><br /><br />
