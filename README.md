# Monty Interpreter

Interpreter for Monty ByteCodes files.

## Usage

```c
monty file_name
````

### Monty byte code files

Monty files rules:
* One instruction per line.
* Text after the command or its argument is ignored.
* Any number of spaces before or after the command and its argument.
* Blank lines allowed (empty or made of spaces).
* A monty file can be or not ended in '.m'. 

Example:

```c
user$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
          $
$
push 4$
    push 5    $
      push    6        $
pall$
user$
````

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
Now you can **use the command monty since any directory** in your linux machine.

## Monty programming language

Easy to use and amazing performance!
To know more about this programming language, click [here](
http://montyscoconut.github.io/).

![](http://montyscoconut.github.io/assets/media/wallpaper-1024.jpg)

## This repository

The program was made under this general schema:

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
* **Luis Enrique Mejía M.:** [GitHub](https://github.com/lemejiamo)
