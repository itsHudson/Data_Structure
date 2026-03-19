# Connect two independent structures to become a short linked list

```
P1 info : 
 ----------------
P1 Address : 0x347912b0
P1 x value : 3
P1 y value : 4
P1 nextaddress value : 0x347912d0

P2 info : 
 ----------------
P2 Address : 0x347912d0
P2 x value : 7
P2 y value : 16
P2 nextaddress value : 0
```


# Memory Relationship
```
FirstPointPointer (P1)
   |
   v
+-------------+
| x = 3       |
| y = 4       |
| next ------ | --------+
+-------------+         |
                        v
                   SecondPointPointer (P2)
                   +-------------+
                   | x = 7       |
                   | y = 16      |
                   | next = NULL |
                   +-------------+
```
