## Print number with format specifiers

To print input value of two int and float, follow these three steps.

> 1. Declare 4 variables: two of type int and two of type float 
> 2. Read 2 lines of input from stdin and initialize your 4 variables
> 3. Use the + and - operator and print the result

In third step, you can control how the result is showed using format specifiers. There are many format specifiers in C language<sup>[1](#footnote_1)</sup>.

|Format specifiers|Type|
|---|---|
|%i or %d | int|
|%c | char|
|%f | float (see also the note below)|
|%s | string|

Adding some other parts with the format specifiers can also control the form of output<sup>[2](#footnote_2)<sup>.
- Minus symbol(-) : left alignment
- A number after `%` : the minimum field with
- period(.) : separate field width and precision

## Example
### Code
```C
int int_num1, int_num2;
float float_num1, float_num2;

scanf("%d %d", &int_num1, &int_num2);
scanf("%f %f", &float_num1, &float_num2);

printf("%d %d\n", int_num1 + int_num2, int_num1 - int_num2);
printf("%.1f %.1f", float_num1 + float_num2, float_num1 - float_num2);
```
### Result
```bash
14 6
6.0 2.0
```

## Reference
<a name="footnote_1">[1]</a> [Format specifiers](https://www.codingunit.com/printf-format-specifiers-format-conversions-and-formatted-output#:~:text=available%20to%20you.-,Format%20Specifiers,-There%20are%20many)

<a name="footnote_2">[2]</a> [Smita Kapse. "Format specifiers in C". tutorialspoint. ](https://www.tutorialspoint.com/format-specifiers-in-c)