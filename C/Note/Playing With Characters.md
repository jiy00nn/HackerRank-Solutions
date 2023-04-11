## Take a **character**, **string** or **sentence** with **character data type**

If you want to input some text data, you can use **character** data type. The charater data type allows **a variable to store only one character**. Because this size of data type is only 1 Byte, it cannot store more data. Storing more text data as a sentence, we need to use character array.

In C language, all strings end in a `\0`<sup>[1](#footnote_1)</sup>. It is called a **string terminator** or **null zero**. The string terminator is added automatically at the end of each string. So if you input a string, you need one more byte. For example, The string "hello", in the picture below, take up **6 bytes**.
![character array image](https://i.imgur.com/b6gLNhL.png)

Here is the example that how to declare character and character array.
### Example
```C
char c;
char s[];
```

To input text data, you can use `%c` and `%s`. Both expect the same type: `char*`. But the difference is the use of `%c` will read at most one character to it, while use of `%s` will read all non-whitespace characters it finds. The '%s' read until **whitespace characters**. So if you want to read until a newline character, you have to use `%[^\n]`<sup>[2](#footnote_2)</sup>.
### Example
```C
scanf("%c", &ch);
scanf("%s%*c", s);
scanf("%[^\n]%*c", sen);
```
> 💡 Because of buffer, the statment will read previous line. So prevent to read that, use `%*c`<sup>[3](#footnote_3)</sup>.

### Reference
<a name="footnote_1">[1]</a> [How strings work in C](https://www.freecodecamp.org/news/c-string-how-to-declare-strings-in-the-c-programming-language/#:~:text=The%20string%20terminator%20is%20represented%20like%20this%3A%20%27%5C0%27)<br />
<a name="footnote_2">[2]</a> [Meaning of %[^\n] in C](https://qr.ae/prMHcD)<br />
<a name="footnote_3">[3]</a> [What does *c mean in C](https://www.quora.com/What-does-*c-mean-in-C-C++-programming#:~:text=When%20passed%20as%20part%20of%20a%20%60scanf%60%20format%20string%2C%20%E2%80%9C%25*c%E2%80%9D%20means%20%E2%80%9Cread%20and%20ignore%20a%20character%E2%80%9D.)