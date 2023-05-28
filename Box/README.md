# Box
The Box class is designed to store and manage rectangular parallelepipeds. Each figure is represented by its length, width, and height, with its center located at the origin of the coordinate system.

## Class Structure
The Box class provides the following functionalities:

- An empty constructor that initializes a Box object with zero length, width, and height.
- A constructor that accepts three dimensions as arguments to initialize a Box object.
- Getters and setters for the three variables.
- An operator * to multiply the dimensions of a Box object by a constant factor.
- An operator / to divide the dimensions of a Box object by a fixed amount.
- An operator + to add a fixed quantity to all dimensions of a Box object.
- An operator - to subtract a fixed amount from all dimensions of a Box object.
- An operator + to add two Box objects together, resulting in a new Box object with dimensions equal to the sum of the corresponding dimensions of the operands.
- An operator - to subtract one Box object from another, producing a new Box object with dimensions equal to the difference of the corresponding dimensions of the operands.
- An assignment operator (=) to copy the dimensions of one Box object to another.
- A Boolean operator (==) to check if two Box objects are equal based on their corresponding dimensions.
- A Boolean operator (!=) to check if two Box objects are not equal.
- Pre-increment (++) and pre-decrement (--) operators to add or subtract one unit from all dimensions of a Box object.
- Post-increment (++) and post-decrement (--) operators to add or subtract one unit from all dimensions of a Box object.
- Compound assignment operators (+=, -=, *=, /=) to perform corresponding operations with a fixed quantity (integer).

Additionally, the operator << is overloaded to display the dimensions of a Box object in the output, formatted as "length: XXX, width: XXX, height: XXX".

example:
```
2 2 2 4 4 4 
Dimensions of created boxes:
Box-1:length: 2, width: 2, height: 2
Box-2:length: 4, width: 4, height: 4
Box-3:length: 0, width: 0, height: 0
Box-4:length: 0, width: 0, height: 0

Dimensions of boxes 3,4 after operations:
Box-3:length: 3, width: 3, height: 3
Box-4:length: 4.5, width: 4.5, height: 4.5
The boxes are not equal.

Dimensions of boxes 1,2 after operations:
Box-1:length: 7.5, width: 7.5, height: 7.5
Box-2:length: 4.5, width: 4.5, height: 4.5

Other operations:
length: 12.5, width: 12.5, height: 12.5
length: 3.5, width: 3.5, height: 3.5
length: 8, width: 8, height: 8
length: 2.25, width: 2.25, height: 2.25
```