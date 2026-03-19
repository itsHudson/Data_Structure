# Display the linked structures using a structure pointer

```
P1 info : 
 ----------------
P1 Address : 0x2e60d2b0
P1 x value : 3
P1 y value : 4
P1 nextaddress value : 0x2e60d2d0

P2 info : 
 ----------------
P2 Address : 0x2e60d2d0
P2 x value : 7
P2 y value : 16
P2 nextaddress value : 0

3 , 4 , 0x2e60d2d0
7 , 16 , 0
```

# Visual Structure
```
FirstPointPointer
      |
      v
+-------------+
| x = 3       |
| y = 4       |
| next ------ | ------+
+-------------+       |
                      v
                +-------------+
                | x = 7       |
                | y = 16      |
                | next = NULL |
                +-------------+
```
