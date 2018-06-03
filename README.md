# printf
Re-creation of the printf function, supporting %s, %S, %p, %d, %D, %i, %o, %O, %u, %U, %x, %X, %c, %C and more

This project aims at rebuilding the printf library with basic functionality.

This implementation includes management of:
* Minimal field width
* Precision
* Wildcards
* Length flags "hh, h, l, ll, j, z"
* Flags "#, 0, -, +"
* Unicode characters
* Convensions "s, S, p, d, D, i, o, O, u, U, x, X, c, C, n"

In addition, a number of funstions has been implemented for color and effects, including:
* settext (sets text color in RGB)
* setbackground (sets background color)
* blink
* emojis
 
 ![alt text](https://github.com/conanwu777/printf/blob/master/img.png)
