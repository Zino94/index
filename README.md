# Zithile 1113523 2024/11/28

# Zithile 1113552

Question 1

Write a program to calculate the diameter of a binary tree. The diameter of a binary tree is the length of the longest path between any two nodes in the tree. The path may or may not pass through the root.
You are required to:
1.Build the binary tree using level-order input. Use -1 to represent null nodes.
2.Implement a function to calculate the diameter of the binary tree efficiently using recursion.
Input Format:
1.The first line contains a list of integers representing the level-order traversal of the binary tree. Use -1 for null nodes.
Output Format:
Print an integer representing the diameter of the binary tree.
Example:
Input:
[8, 3, 2, 6, 5, 7, 9, 3, 7, 7, 7]
Output:
5

Question 2

Write a program to manage a task priority queue using a max heap. Each task has a name and a priority level. Your program should allow:
1.Add a Task: Add a task with a given priority.
2.Get the Highest Priority Task: Remove and return the task with the highest priority.
3.Display the Remaining Tasks: Print the remaining tasks in descending order of priority.
Input Format:
1.The first line contains an integer N, the number of operations.
2.The next N lines contain either:
o"ADD task_name priority" to add a task.
o"GET" to fetch the highest-priority task.
Output Format:
1.For every "GET" operation, print the name of the task with the highest priority.
2.At the end, print the list of remaining tasks in descending order of priority.

Example:
Input:
7
ADD Task1 2
ADD Task2 2
ADD Task3 3
GET
Task3
ADD Task4 23
GET
Task4
GET
Task1
Remaining tasks: [('Task2', 2)]

Question 3

You are given K sorted arrays of integers. Write a Python program to merge these arrays into a single sorted array using a Min Priority Queue.
Your program should:
1.Insert the first element of each array into a Min Priority Queue along with the array index and element index.
2.Extract the smallest element from the queue, add it to the result array, and insert the next element from the same array into the queue.
3.Continue this process until all elements from all arrays are merged.

Input Format
1.An integer K, the number of sorted arrays.
2.K sorted arrays, each entered on a new line, with elements separated by spaces.
Output Format
A single line containing the merged sorted array.

Example Input
2
2
2 4 5
2
3 5 4
2
Merged Array: [2, 2, 3, 4, 5, 4, 2]

Question 4

You are given N tasks, each with a profit and a deadline. Write a Python program to schedule the tasks such that the maximum profit is achieved, using a Max Priority Queue.
Each task must be completed within its deadline (1-based index), and only one task can be scheduled at a time.

Input Format
1.An integer N, the number of tasks.
2.N lines containing two integers each: profit and deadline of a task.
Output Format
1.The maximum profit that can be achieved.
2.The list of scheduled tasks in the order they are executed.

Example Input
3
43 54
34 65
23 8
Maximum Profit: 100
Scheduled Tasks: [43, 34, 23]

