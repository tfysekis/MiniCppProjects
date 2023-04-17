# Shopping Card


This program is a simple implementation of a customer product manager using dynamic lists in C++. It allows users to add and remove products for customers, and it focuses on the dynamic list data structure.

## Product 

This class represents a product in the inventory. Each product has the following properties:

- unsigned int id: code of the product
- char *name: the name of the product
- float price: the price of the product


## Customer 

This class represents a customer with the following methods:

- `char *getUsername()`: Getter for the client's username
- `int getNumberOfProducts()`: Returns the number of products in the cart (in start is 0)
- `bool addProduct(Product *product)`: Add a product to the list, whose the pointer is given as a parameter (ie the object already exists and we pass it as a parameter via pointer). Returns false if the list is full, otherwise true.
- `float getTotalCost()`: Returns the total cost of the products in the cart (initially it is 0 -> empty basket)
- `Product *findProductById(unsigned int id, int &pos)`: Returns a pointer to cart product whose id is the id given as a parameter. If the product exists, its position in the array is stored in pos. If not, the function returns NULL and pos=-1
- `bool removeProduct(unsigned int id)`: Removes the product with id from the cart. Returns true if the product exists and has been removed, else (if the product does not exists) returns false.

The main.cpp file includes 5 test cases that can be run individually or all together. These test cases are:

- `testCreateProduct()`: Create a new product and verify its properties
- `testCreateCustomer()`: Create a new customer and verify its properties
- `testAddProduct()`: Add products to a customer's cart and verify that the cart's total cost is updated correctly
- `testFindProduct()`: Find a product in a customer's cart by its id and verify that its properties are correct
- `testRemoveProduct()`: Remove a product from a customer's cart and verify that it is no longer in the cart

To run the program, execute the main.cpp file. If no test cases are specified, all test cases will be run. Here's an example of running the program for the first 3 cases:

![test cases](Screenshot%20from%202023-04-17%2023-47-32.png)