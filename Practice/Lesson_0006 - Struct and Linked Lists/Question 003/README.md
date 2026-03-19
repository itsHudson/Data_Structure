# Display the linked structures using a structure pointer

```text
P1 info : 
 ----------------
P1 Address : 0x16a922b0
P1 x value : 3
P1 y value : 4
P1 nextaddress value : 0x16a922d0

P2 info : 
 ----------------
P2 Address : 0x16a922d0
P2 x value : 7
P2 y value : 16
P2 nextaddress value : 0

3 , 4 , 0x16a922d0
7 , 16 , 0
```

# Structure Layout
 - HeadPointer → Node1 → Node2 → NULL
```text
FirstPointPointer
       │
       ▼
+-----------------------+
| XCoordinate = 3       |
| YCoordinate = 4       |
| NextAddress ----------┐
+-----------------------│
                        ▼
                +-----------------------+
                | XCoordinate = 7       |
                | YCoordinate = 16      |
                | NextAddress = NULL    |
                +-----------------------+
