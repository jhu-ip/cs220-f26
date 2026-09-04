---
id: day04_questions
layout: default
title: Day 4 Recap Questions
reference solutions:
  1. "&&" is logical "and", "&" is bitwise (will cover later)
  2. "!" is logical "not", '~' is bit op (will cover later) 
  3. 0 || true && 3 -> false || true -> true
  4. exit the current block, skipping to the enclosing "}"
  5. skip to the end of the current iteration
  6. [UPDATED] 100 080 060 040 020
  7. Trick question - it is no longer in scope; trying to access it would cause a compiler error (assuming no other `i` variables exist). Last value during loop execution was 0.
  8. `int i = 100; while (i > 0) { printf("%03d ", i); i -= 20; }`
  9. first; 24 / 3 -> 8, 'c' > 'D' -> true (1), ++num -> 7; bool result is true; num is 1; compiler generates warning - using the result of an assignment as a condition without parentheses [-Wparentheses]
---

1. Which one is the logical "and" operator in C, `&&` or `&` or both?
<br />  <br /> <br />

2. Which one is the logical "negation" operator in C, `~` or `!` or both?
<br />  <br /> <br />

3. What is the result of evaluating `(34 + 2) / 40 || 80 > 'A' && 15 % 4` ?
<br />  <br /> <br />

4. What does the keyword **break** do in a control structure?
<br />  <br /> <br />

5. What does the keyword **continue** do in loops?
<br />  <br /> <br />

6. What is the output of this code segment?
```c
for (int i = 100; i > 0; i -= 20) printf("%03d ", i);
```
<br />  <br /> <br />

7. What is the value of `i` after the code segment above?
<br />  <br /> <br />

8. Rewrite the `for` loop from question 6 using a `while` loop and other statements as needed.
<br />  <br /> <br />

9. What is printed by the following code segment? What is the value of num after the segment executes? 
```c
int num = 6;
if ( num = 24 / 3 && 'c' > 'D' || ++num) printf("first");
else printf("second");
```
<br />  <br /> <br />



