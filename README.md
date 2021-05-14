# Monty Interpreter

Interpreter for Monty ByteCodes files.

## Usage

```c
monty file_name
````

### Monty byte code files

Files containing Monty byte codes usually have the  `.m`  extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

```c
user$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
user$
````

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account.

## Available functions

 |File|Description|
 |:-:|:-:|
|PUSH|Pushes an element to the stack|
|PALL|Prints all the values on the stack, starting from the top of stack|
|PINT|Prints the value at the top of the stack|
|POP|Removes the top element of the stack|
|SWAP|Swaps the top two elements of the stack|
|ADD|Adds the top two elements of the stack|

## Installation
#### Download
 ```c
git clone https://github.com/Naveduran/monty.git
````
#### Compilation
```c
cd monty && gcc -Wall -Werror -Wextra -pedantic *.c
````
#### Installation
```c
sudo mv monty /usr/local/bin
````
Now you can **use the command monty since anywhere** in your linux machine.

![](http://montyscoconut.github.io/assets/media/wallpaper-1024.jpg)

## Monty is a programming language!

Easy to use and amazing performance!
To know more about this programming language, click [here](
http://montyscoconut.github.io/).

## Files of this repository

![](https://pbs.twimg.com/media/E1TY1NvXEAElua7?format=jpg&name=900x900)


  |File|Description|
  |:-:|:-:|
  |[main.c](./file)|Entry point.|
  |[initialize_data.c](./file)|Inicialize an empty structure, as preparation to save the program information.|
  |[open_file.c](./file)|Open the path of the file and saves the file's content.|
  |[_strtok.c](./file)|Split a string lines, and then in words.|
  |[search_and_exec.c](./file)|Compare the instruction give in each line with the available functions list.|
  |[f_push_and_pall.c](./file) [f_pint_and_pop.c](./file) [f_swap_and_add.c](./file) [f_f_nop.c.c](./file)|These files contain the named functions.|
  |[h_list.c](./file)|Helpers to manage double linked list.|
  |[h_errors.c](./file)|Helpers to manage error messages.|
  |[h_free_memory.c](./file)|Helpers to manage memory.|
  |[h_others.c](./file)|Other helpers, to compare strings.|
  |[monty.h](./file)|Header file.|

 ## Environment
 This project has been tested on `Ubuntu 14.06.6 LTS`

 ## Authors
* **Natalia Vera:** [GitHub](https://github.com/Naveduran) - [Email](naveduran@gmail.com) - [Twitter](https://twitter.com/NaVeDuran1)
*  **Luis Enrique Mejía M.:** [GitHub](https://github.com/lemejiamo)
