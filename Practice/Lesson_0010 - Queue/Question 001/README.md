# Calculate the sum for all elements in Queue. 
 - Write a C++ program to find the sum of all elements of three queues (Q1, Q2, Q3) after the below processes. 
  - Q1.enqueue(34.5); Q1.enqueue(22.5);
  - Q1.enqueue(44.5); Q2.enqueue(10.4);
  - Q2.enqueue(35.7); Q2.enqueue(38.7);
  - Q2.enqueue(19.7); Q3.enqueue(Q2.dequeue());
  - Q3.enqueue(Q2.dequeue()); Q3.enqueue(Q1.dequeue());
  - Q2.enqueue(66.7);
  - cout << Q1.sum() << “, “ << Q2. sum() << “, “ << Q3. sum() << “.“  << endl;

```text
67, 125.1, 80.6.
