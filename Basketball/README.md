# Basketball
This project includes the following files:

- `main.cpp`
- `overload.h`
- `Comparator.h`
- `Player.h`
- `Player.cpp`
- `BasketballPlayer.h`
- `BasketballPlayer.cpp`

The `main.cpp` file contains four functions that can be executed by entering a corresponding number between 1 and 4. If any other number is entered, the program will exit.

## Function 1
This function creates a Player and a BasketballPlayer (using inheritance) and displays their information using getters.

Example usage:

```
Number: 1
nick galis shooting_guard
panagiotis fasoulas center

nick
fasoulas
center
Goodbye 1!
```

## Function 2
This function demonstrates the getPlayerDescription function, which returns a string containing the information of a Player or a BasketballPlayer depending on the object it is called from.

Example usage:
```
Number: 2
nick galis
panagiotis fasoulas center

nick-galis
panagiotis-fasoulas-center
Goodbye 2!
```

## Function 3
This function demonstrates function overloading and operator overloading for `BasketballPlayer` objects.

- The << operator is overloaded to print the description of BasketballPlayer objects using getPlayerDescription.
- The == operator is overloaded to return true when two players play in the same position.
- The standard `print` function takes a value of any type (including objects) and prints it.


```
Number: 3
nick galis position1
panagiotis fasoulas position1

true
nick-galis-position1 panagiotis-fasoulas-position1
1
test
nick-galis-position1
Goodbye 3!

Number: 3
nick galis p
george meditskos center

false
nick-galis-unknown george-meditskos-center
1
test
nick-galis-unknown
Goodbye 3!
```
Example usage:

## Function 4

This function demonstrates the use of a constructor that accepts two std::vector objects of the same type(unknown in advance,`templates`).The vectors can contain either simple types (integers) or objects of the BasketballPlayer class.

- The first two vectors are filled with integers until the value -1 is entered.
- The last two vectors are filled with `BasketballPlayer` objects until "q" is entered as input. Only the position of the player is considered for the objects, not the first and last name.


Example usage:

```
Number: 4
1 2 3 -1 // first vector has the elements 1 2 3
1 2 3 -1 // the second vector has the same elements

true
guard center q // the first vector has two players with positions guard and center
guard center q // the second vector has the same position as the first one
true
Goodbye 4!

Number: 4
1 2 3 4 5 -1
1 2 3 4 5 5 -1

false
guard q
center q
false
Goodbye 4!

Number: 4
1 1 1 1 1 -1
1 1 -1

false
guard guard guard q
guard guard q
false
Goodbye 4!
```