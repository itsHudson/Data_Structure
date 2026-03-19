# Implement Stack Using Array and Linked-List. Assume the following is a series of **stack operations** in a C++ program:

```text
push('TP01');
push('TP02');
push('TP03');
pop();
pop();
push('TP04');
push('TP05');
push('TP03');
pop();
push('TP02');
```

# Based on the specific steps above, write a program using an array-based stack implementation to verify the answer in (Question 001).

```text
Push TP01:
Current List: TP01 ,

Push TP02:
Current List: TP01 , TP02 ,

Push TP03:
Current List: TP01 , TP02 , TP03 ,

Pop TP03: TP03 is deleted!
Current List: TP01 , TP02 ,

Pop TP02: TP02 is deleted!
Current List: TP01 ,

Push TP04:
Current List: TP01 , TP04 ,

Push TP05:
Current List: TP01 , TP04 , TP05 ,

Push TP03:
Current List: TP01 , TP04 , TP05 , TP03 ,

Pop TP03: TP03 is deleted!
Current List: TP01 , TP04 , TP05 ,

Push TP02:
Current List: TP01 , TP04 , TP05 , TP02 ,

From base to Top:
Current List: TP01 , TP04 , TP05 , TP02 ,

From Top to base:
Current List: TP02 , TP05 , TP04 , TP01 ,
