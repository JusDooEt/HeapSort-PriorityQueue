# HeapSort
![image](https://github.com/JusDooEt/HeapSort-PriorityQueue/assets/152052216/2e59130b-c505-4288-8fec-d0bf79fa590b)
## About
The heapsort is a widely used sorting algorithm due to its time efficiency with a given number of elements (n). The time complexity of the heap sort is O(n log(n)) due to the recursive nature and a binary tree data structure. This program will create a heap data structure out of the integers  the user inputs when prompted. It will then read back the values in a sorted heap. A heap is structured as a binary tree but has a couple other conditions in order to define the binary tree as a heap. In the case of a heap a parent must always be greater than their children and the leaves of the tree must be to the furthest left with no gaps between them, also known as a "complete tree".
### Example
![image](https://github.com/JusDooEt/HeapSort-PriorityQueue/assets/152052216/28e08b2b-d0b9-4b3c-abaf-893ee2d9f067)
### Incomplete Binary Tree Example
![image](https://github.com/JusDooEt/HeapSort-PriorityQueue/assets/152052216/17421ea6-e5ef-4344-8143-9cf59171fc99)

### Reminder
A complete binary tree is also considered as a full binary tree, but a full tree does not necessarily mean it can be defined as complete.
#### Examples
##### Complete and Full Tree
![image](https://github.com/JusDooEt/HeapSort-PriorityQueue/assets/152052216/acaf181a-8557-48d2-90f6-1bec3c45e5bd)

##### Full but not Complete
![image](https://github.com/JusDooEt/HeapSort-PriorityQueue/assets/152052216/976504a4-c37e-47f8-b892-cfc5971c3e7e)


## Usage
- This program should be used as a template when implementing a heap sort algorithm into other independent projects.
- This algorithm is best used for a large amount of items to sort in order to take advantage of the competitive time complexity.
- This algorithm can be used for initialization of values and also future edits to values due to its fast nature.
- Be careful of stack overflow with recursive calls for reheap. Recursive calls will add more stack frames to the run-time stack.

## Functionality
- The PQ class is structured similar to a queue data structure but uses the methods in the HeapType class to create the proper data structure.
- The HeapType class will sort the queue defined by the PQ class and is called by the enqueue and dequeue methods of the PQ class.
- Both classes have function methods to check if the data structure "isFull" of "isEmpty '' for easy implementations outside of the class.
