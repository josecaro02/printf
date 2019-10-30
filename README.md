# Printf Real Project!
# Description This function emulates the functionality of **"printf" function in C!**

## Introduction
This document describes the functionality of this "_printf" program that emulates in most of the characteristics of the "printf" program given with standart I&O library of C. Additionally we will give you a brief explanation of each file and its functions.
## Download
> `git clone https://github.com/josecaro02/printf.git`
You have to clone this project in your pc. 
## Use
The file **holberton.h** is the only header file that you need to include in any file that will implement our **_printf**.

`#include "holberton.h"`

Now the way to implement the function is the next.

` _printf("text", argument1, argument2,...);`

>- Text: between double quotes all that you want to write.
>
>- Arguments: inside the text you have to be careful if you call a variable, so based in the next chart you can choose which variable you will put in the argument and its translation in the text field.

|Variable     | char | integer  | string |  
|-------------|------|----------|--------|
| Translation |%c    | %d or %i |%s or %S     | 

>Additionally if you want o make some conversions to your numbers or strings you can use the next translations.

| Conversion  | base 10 to 16| base 10 to 8 | base 10 to 2  | Reverse String | rot13 string  |
|-------------|----| --| --|--| --|
| Translation |%x lowercase letters or %X uppercase letters| %o | %b | %r | %R |
**Return**: finally you have to know that this function return an **int** with the quantity of characters that you print.

## Example
![Main function to test all the cases](https://i.pinimg.com/originals/c1/4d/35/c14d35f66fd88564c795cebcc29f2517.jpg)
![Result after compile the program](https://i.pinimg.com/originals/52/b3/53/52b35363ea961c3ff4381d62dc22ec72.jpg)




# Diagram
![Diagram of the function](https://i.pinimg.com/originals/e0/12/b0/e012b0148441f55cb9f7bd9ae9cd6cc6.jpg)

## Built with
Ubuntu 14.04 ,Emacs and 
# Authors
- [Nicolás Sanchéz Parra] - (www.github.com/Nzparra)
- [José David Caro Cantor] - (www.github.com/josecaro02)
