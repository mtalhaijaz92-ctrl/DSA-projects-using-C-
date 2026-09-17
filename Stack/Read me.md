# Restaurant Plate Stack - C++

This is a simple C++ program that shows how a **Stack** works using a restaurant plate example.

In this program, plates are stored in a stack. The stack follows the **LIFO (Last In, First Out)** rule, which means the last plate added will be removed first.

## How it Works

The program uses:

```cpp
stack<string> plates;
```

Three plates are added:

* Plate 1
* Plate 2
* Plate 3

Since Plate 3 was added last, it will be on the top of the stack.

When plates are removed, Plate 3 is removed first and then Plate 2.

## Functions Used

### addPlate()

Adds a plate to the stack using `push()`.

### removePlate()

Removes the top plate using `pop()`.

### showTopPlate()

Shows the plate that is currently on top using `top()`.

### totalPlates()

Shows the total number of plates using `size()`.

The program also checks if the stack is empty before removing or showing a plate.

## Example

After adding the plates:

```text
Plate 3
Plate 2
Plate 1
```

After removing two plates:

```text
Plate 1
```

Total plates left:

```text
1
```

## Concepts Used

* C++
* Classes and Objects
* Stack
* STL
* `push()`
* `pop()`
* `top()`
* `empty()`
* `size()`

## Author

Muhammad Talha Ijaz
