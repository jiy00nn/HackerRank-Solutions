## Use **stdin** and **stdout**  in C

Some C compilers gives method to read and write.<sup>[1](#footnote_1)</sup> Representatively, there is `scanf()` to read and `printf()` to write. These function are inbuilt library functions in C language.<sup>[2](#footnote_2)</sup> And they are defined and declared in `stdio.h`.

If you want to use them, you need to import the header file:
```C
#include <stdio.h>
```

### Example
**Code**
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    
    scanf("%[^\n]s", str);
    printf("%s\n", str);

    return 0;
}
```

> 💡 The expression %[^\n] in C is used for generally reading the whole line.<sup>[3](#footnote_3)</sup>

**Result**

Input
```bash
Hello World!
```
Output
```bash
Hello World!
```

### Reference
<a name="footnote_1">[1]</a> [Use of fflush(stdin) in C:GeeksforGeeks Article](https://www.geeksforgeeks.org/use-fflushstdin-c/#:~:text=Can%20we%20use%20it%20for%20input%20stream%20like%20stdin%3F)<br />
<a name="footnote_2">[2]</a> [Scanf and Printf in C:OpenGenusIQ](https://iq.opengenus.org/scanf-and-printf-in-c/)<br />
<a name="footnote_3">[3]</a> [Meaning of %[^\n] in C](https://qr.ae/prMHcD)