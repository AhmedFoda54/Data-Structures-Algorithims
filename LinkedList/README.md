# Linked List Project

## Overview

This project implements a generic singly linked list in C++ using a templated `LinkedList` class. The project demonstrates basic linked list operations like inserting, deleting, searching, merging, and reversing nodes in the list. The code includes the following files:

- **LinkedList.h**: Contains the implementation of the `LinkedList` class.
- **Node.h**: Defines the structure and operations of a single node used in the linked list.
- **main.cpp**: The driver program to test and demonstrate the functionality of the `LinkedList` class.

## Files

### 1. `LinkedList.h`
This file contains the declaration and implementation of the `LinkedList` class template, which provides methods for:

- **Insert at beginning (`InsertBeg`)**
- **Insert at the end (`InsertEnd`)**
- **Find a value (`Find`)**
- **Count occurrences of a value (`CountOccurence`)**
- **Delete the first node (`DeleteFirst`)**
- **Delete the last node (`DeleteLast`)**
- **Delete a node by value (`DeleteNode`)**
- **Merge two linked lists (`Merge`)**
- **Find the k-th element (`KthElement`)**
- **Remove the minimum element (`RemoveMin`)**

### 2. `Node.h`
This file defines the `Node` class template, which represents a single node in the linked list. Each node holds:

- An item of any data type.
- A pointer to the next node in the list.

The `Node` class provides methods to set and get both the item and the next node pointer.

### 3. `main.cpp`
This is the main driver program to test the functionality of the linked list. It includes examples for inserting, deleting, merging, and reversing the list, as well as various other operations such as:

- Adding elements to the list.
- Testing the insertion at the beginning and end.
- Searching for values and counting occurrences.
- Removing the first, last, or a specific node.
- Merging two lists.
- Finding k-th elements and calculating recursive sums.

## Features

- **Templated Design**: Both `Node` and `LinkedList` classes are templates, allowing for generic usage with any data type.
- **Memory Management**: Dynamic memory allocation is handled in the `LinkedList` destructor and `DeleteAll` function to ensure proper cleanup of nodes.
- **Utility Functions**: A variety of utility functions are provided to manage and manipulate the linked list, including functions to merge two lists, reverse the list, and remove the minimum node.

## Compilation

To compile the project, use a C++ compiler such as `g++`:

```bash
g++ -o LinkedList main.cpp
