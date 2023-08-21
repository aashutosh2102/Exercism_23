# Python Programming Language

Python is a dynamic and strongly typed programming language known for its versatility and support for various programming styles. It combines dynamic typing with strong type enforcement and supports both duck typing and gradual typing through type hints. It is suitable for imperative, declarative (functional), and object-oriented programming paradigms.

## Key Features

- **Dynamic and Strong Typing:** Python's dynamic typing allows variables to change types at runtime, while its strong type enforcement ensures type consistency.

- **Duck Typing:** Python uses duck typing, focusing on an object's behavior rather than its class, enabling flexibility in code.

- **Gradual Typing with Type Hints:** Type hints in Python provide a way to specify expected types for variables, enabling better understanding and catching type-related errors during development.

- **Programming Paradigms:** Python supports imperative, declarative (functional), and object-oriented programming styles, making it adaptable for various project needs.

- **Object-Oriented Internally:** Despite supporting different paradigms, Python treats everything as an object internally, aligning with its object-oriented nature.

- **Code Readability:** Python places a strong emphasis on code readability. It enforces indentation to structure code blocks, enhancing visual clarity.

## Code Examples

```python
# Demonstrating dynamic typing
my_first_variable = 1  # Integer
print(type(my_first_variable))  # Output: <class 'int'>

my_first_variable = 2  # Reassigned to another integer
print(my_first_variable)  # Output: 2

my_first_variable = "Now, I'm a string."  # Reassigned to a string
print(type(my_first_variable))  # Output: <class 'str'>

print(my_first_variable)  # Output: "Now, I'm a string."
```

# Constants

Constants are names meant to be assigned only once in a program. They should be defined at a module (file) level and are typically visible to all functions and classes in the program. Using SCREAMING_SNAKE_CASE signals that the name should not be re-assigned, or its value mutated.

## Functions

The `def` keyword begins a function definition. Each function can have zero or more formal parameters in `()` parentheses, followed by a `:` colon. Statements for the body of the function begin on the line following `def` and must be indented in a block.

### Code Examples

```python
# The body of a function is indented by 2 spaces and prints the sum of the numbers.
def add_two_numbers(number_one, number_two):
  total = number_one + number_two
  print(total)

add_two_numbers(3, 4)
# Output: 7

# Inconsistent indentation in your code blocks will raise an error.
def add_three_numbers_misformatted(number_one, number_two, number_three):
    result = number_one + number_two + number_three   # This was indented by 4 spaces.
  print(result)     # This was only indented by 2 spaces.

# The code above will raise an IndentationError.
```

# Functions and Return Values

Functions in Python explicitly return a value or object using the `return` keyword. If a function does not have an explicit `return` expression, it will implicitly return `None`.

## Function Definition and Return

Function definitions start with the `def` keyword, followed by the function name and parameters enclosed in `()` parentheses. A colon `:` indicates the start of the function body, which should be indented consistently. The `return` statement is used to specify the value or object that the function will produce.

### Code Examples

```python
# Function definition on the first line, calculating and returning the sum of the numbers.
def add_two_numbers(number_one, number_two):
  result = number_one + number_two
  return result  # Returns the sum of the numbers.

print(add_two_numbers(3, 4))
# Output: 7

# This function will return None since there's no explicit return statement.
def add_two_numbers(number_one, number_two):
  result = number_one + number_two

print(add_two_numbers(5, 7))
# Output: None
```

# Comments

Comments in Python start with a `#` that is not part of a string, and end at line termination. Unlike many other programming languages, Python does not support multi-line comment marks. Each line of a comment block must start with the `#` character.

## Docstrings

The first statement of a function body can optionally be a docstring, which concisely summarizes the function or object's purpose. Docstring conventions are laid out in [PEP 257](https://www.python.org/dev/peps/pep-0257/). Docstrings are declared using triple double quotes (`"""`) indented at the same level as the code block.

### Code Example

```python
# An example from PEP 257 of a multi-line docstring.
def complex(real=0.0, imag=0.0):
    """Form a complex number.

    Keyword arguments:
    real -- the real part (default 0.0)
    imag -- the imaginary part (default 0.0)
    """

    if imag == 0.0 and real == 0.0:
        return complex_zero
```

