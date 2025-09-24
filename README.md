# Linked-list-in-cpp

## Aim

To implement and understand the working of Singly, Doubly, and Circular Linked Lists in C++.

## Theory

A **Linked List** is a linear data structure where elements are stored in nodes connected by pointers. Unlike arrays, linked lists provide dynamic memory allocation and efficient insertions/deletions without shifting elements.

### Types of Linked Lists

- **Singly Linked List:** Each node contains data and a pointer to the next node.
- **Doubly Linked List:** Each node contains data, a pointer to the next node, and a pointer to the previous node.
- **Circular Linked List:** The last node points back to the first node, forming a circle. This can be singly or doubly linked.

### Advantages

- Dynamic size, grows or shrinks as needed.
- Efficient insertions and deletions.
- No memory wastage (no predefined size like arrays).

### Disadvantages

- No random access; traversal is required to access elements.
- Extra memory needed for storing pointers.

## Algorithms

### Singly Linked List

**Node Structure:**  
- Data  
- Pointer to next node  

**Insertion at End:**  
1. Create new node.  
2. If list is empty, head points to new node.  
3. Else, traverse to last node and link new node.  

**Deletion by Value:**  
1. If list empty, exit.  
2. If head node matches, update head.  
3. Else, find node before target and update its next pointer.  

**Display:**  
Traverse from head to NULL and print data.

---

### Doubly Linked List

**Node Structure:**  
- Data  
- Pointer to next node  
- Pointer to previous node  

**Insertion at Beginning:**  
1. Create new node.  
2. Set new node's next to current head.  
3. Update previous pointer of current head to new node.  
4. Update head to new node.  

**Deletion by Value:**  
1. If list empty, exit.  
2. Find node to delete.  
3. Update previous node’s next and next node’s previous pointers to bypass deleted node.  

**Display:**  
Traverse from head to NULL, printing data; optionally traverse backward using previous pointers.

---

### Circular Linked List (Singly)

**Node Structure:**  
- Data  
- Pointer to next node  

**Insertion:**  
1. Create new node.  
2. If list empty, new node points to itself and head points to new node.  
3. Else, traverse to last node (which points to head) and link new node in circle.  

**Deletion:**  
1. If list empty, exit.  
2. If deleting head, update last node’s next pointer and head.  
3. Else, find node before target and update its next pointer to bypass deleted node.  

**Display:**  
Traverse starting from head until coming back to head, printing data.

---

## Conclusion

This study and implementation cover the fundamental types of linked lists in C++:

- **Singly Linked Lists** provide simple dynamic storage with forward traversal.
- **Doubly Linked Lists** allow traversal in both directions, making insertion and deletion more flexible.
- **Circular Linked Lists** link the last node back to the first, allowing continuous traversal and are useful in applications like round-robin scheduling.

Each linked list type has unique advantages and use-cases. Understanding them deepens knowledge of pointers, dynamic memory, and data structure design critical for advanced programming.

---

