# Connect two independent structures to become a short linked list

```text
P1 info : 
 ----------------
P1 Address : 0x2de9f2b0
P1 x value : 3
P1 y value : 4
P1 nextaddress value : 0x2de9f2d0

P2 info : 
 ----------------
P2 Address : 0x2de9f2d0
P2 x value : 7
P2 y value : 16
P2 nextaddress value : 0
```

# Structure Layout
 - So the memory looks like: Node1  →  Node2  →  NULL
```
FirstPointPointer
      │
      ▼
+---------------------------+
| XCoordinate = 3           |
| YCoordinate = 4           |
| NextAddress ───────────┐  |
+-----------------------│---+
                        ▼
                +------------------+
                | XCoordinate = 7  |
                | YCoordinate =16  |
                | NextAddress=NULL |
                +------------------+
```
