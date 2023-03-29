# Bank Account C++ Program

This is a simple program that showcases inheritance in C++. It simulates a basic bank account system with the following account types:

- Account
- CreditCard
- Savings

Each account type has its own unique features and functionalities.

## Usage

Upon running the program, you will be presented with the following options:

```
Quit, deposit or withdraw (q, d, w)?:
```
- To quit the program, enter q.
- To make a deposit, enter d followed by the amount you wish to deposit (e.g. d 100).
- To make a withdrawal, enter w followed by the amount you wish to withdraw (e.g. w 50).

## Classes

* ## Account

The `Account` class represents a basic bank account with a starting balance of $100 *(added manually in main.cpp)* . It allows you to make deposits and withdrawals and keeps track of your current balance.

* ## CreditCard

The `CreditCard` class represents a credit card account with a starting balance of $100 and a credit limit. It allows you to make purchases and payments, and keeps track of your current balance and credit limit.The limit is $200 *(added manually in main.cpp)*

* ## Savings

The `Savings` class represents a savings account with a starting balance of $100 *(added manually in main.cpp)* and a limit on the number of withdrawals you can make. It allows you to make deposits and withdrawals *(3)*, and keeps track of your current balance.

## Example 

```
Quit, deposit or withdraw (q, d, w)?: 
w
Give the amount: 
100
Quit, deposit or withdraw (q, d, w)?: 
q
0
0
0

```

```
Quit, deposit or withdraw (q, d, w)?: 
w
Give the amount: 
50
Quit, deposit or withdraw (q, d, w)?: 
w
Give the amount: 
60
Withdraw denied for simple
Withdraw denied for My savings
Quit, deposit or withdraw (q, d, w)?: 
w
Give the amount: 
10
Quit, deposit or withdraw (q, d, w)?: 
q
40
-20
40

```

After selecting the 'q' (quit) option, the program will execute the 'getBalance' function which displays the current balance of each account type, including credit card balances and savings account balances.