# move Nth Front 
 - Write the definition of the function moveNthFront that takes as a parameter a positive integer, N.
 - The function moves the nth element of the queue to the front. The order of the remaining elements remains unchanged.
 - For example, suppose: queue = {5, 11, 34, 67, 43, 55} and N = 3.
 - After a call to the function moveNthFront, queue = {34, 5, 11, 67, 43, 55}.
 - Add this function to the class queueType or linkedQueueType.
 - Also, write a program to test your method.

```text
Original Queue:
5 11 34 67 43 55

After moveNthFront(3):
34 5 11 67 43 55
```

# Explanation
 - The function moveNthFront(N) moves the N-th element of a queue to the front while maintaining the relative order of the remaining elements.
 - The algorithm temporarily removes the first N-1 elements and stores them.
 - Then the N-th element is removed and inserted at the front of the queue.
 - After that, the stored elements and the remaining elements are reinserted back into the queue in their original order.
