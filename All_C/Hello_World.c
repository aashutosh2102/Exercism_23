// Include the standard definitions header from the standard library, so that we
// have access to 'NULL'. This can be removed if your changes remove the need
// for 'NULL'.
#include <stddef.h>

#include "hello_world.h"

// Define the function itself.
const char *hello(void)
{
   // To fix this function, change the return statement here to instead return
   // a string equivalent to the string expected by the failing test.
   return "Hello, World!";
}





// This is called an include guard, which ensures that the header is only
// included once. You could alternatively use '#pragma once'. See
// https://en.wikipedia.org/wiki/Include_guard.
#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H

// Declare the 'hello()' function, which takes no arguments and returns a
// 'const char *', i.e. a pointer to a character (in this case the first
// character in a string). The function itself is defined in the hello_world.c
// source file. Ths function is called by the test case(s) in the test source
// file test/test_hello_world.c.
const char *hello(void);

#endif




/*
//My Code
#include<stdio.h>
int main()
{
    printf("Hello, World!");
}
*/