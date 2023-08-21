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