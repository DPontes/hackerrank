# Print Pretty

[Link to problem description](https://www.hackerrank.com/challenges/prettyprint/problem)

To compile and run the program with the input file:

```
> g++ main.cpp -o run.out -std=c++14
> ./run.out < input.txt
```

## Expected output

```
0x64
_______+2006.01
2.331415927E+03
```

## Notes

C++ has a variety of [manipulators](http://www.cplusplus.com/reference/library/manipulators/) that will change the format of the output printed with `cout`.
These manipulators are not printed themselves, they just affect what you are trying to print.

This problem forces two manipulators:

- `setw`: sets a fixed width for the output
- `internal`: right-aligns the output

The first line must therefore undo the latter as it is required that the output is left-aligned.

### The Manipulators used

- `hex`: output the number in hexadecimal
- `left`: left-aligns the output
- `showbase`: makes sure that the output has a `0x` at the beginning
- `nouppercase`: converts all alphabetic values to lowercase
- `dec`: switches numbers back to decimal
- `right`: right-aligns the output
- `setw(15)`: sets a fixed width of 15 characters
- `setfill('_')`: changes the default padding to `_` when the printed value doesn't fill up the whole length
- `showpos`: shows a plus sign before a positive number
- `fixed`: ensure the number is printed out entirely and that scientific notation isn't used for large numbers
- `setprecision(x)`: sets the number of decimal places
- `scientific`: prints output in scientific notation format
- `uppercase`: ensures the alphabetic characters in the output are converted to uppercase
- `noshowpos`: undoes previous `showpos` manipulator and gets rid of the `+` sign
