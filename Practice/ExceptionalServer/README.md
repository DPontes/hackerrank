# Exceptional Server

[Link to problem description](https://www.hackerrank.com/challenges/exceptional-server/problem)

To compile and run the program with the input file:

```
> c++ main.cpp -o run.out -std=c++14
> ./run.out < input.txt
```

## Expected output

```
Exception: A is negative
Not enough memory
2
```

## Notes on the challenge

In the `try` block we just have the call to use the `compute(A,B)` function and to print the result. Since this is a `static` function, we don't need to create any objects of type `Server`, we can call it directly instead.
If there is something wrong with the inputs, then executing this function will throw out the relevant exception. As the problem states, we need to be able to handle 3 different scenarios:

1. Not enough memory allocated
2. Other standard C++ exception
3. Other non-standard C++ exception

The first `catch` will be triggered whenever a `bad_alloc` exception occurs. Scenario 1 is actually a standard C++ exception, but we need to give it special treatment with a unique message for the challenge. This is why we put this `catch` first, as otherwise the `bad_alloc` exception would be treated the same as the others.
The second scenario will trigger when any other exceptions in the C++ exception library occur ([list of exceptions here](https://www.tutorialspoint.com/cplusplus/images/cpp_exceptions.jpg)). Because line

```cpp
if (A < 0) { throw std::invalid_argument("A is negative"); }
```

has manual text, this text will be printed whenever this error occurs. All other exceptions will print some standard code that gives some clue as to what caused the exception.
The final `catch` uses an ellipses `(...)` as the its condition. This menas that this `catch` will be triggered by any other exceptions not caught by the previous catches. Notably, this will be caused by the throw on line

```cpp
if (B == 0) throw 0;
```

as this is throwing a zero, which is not a  standard C++ exception.
Any of these catches being triggered will cause the loop to immediately move to the next iteration. so you don't have to worry about the computation being printed if they occur.
