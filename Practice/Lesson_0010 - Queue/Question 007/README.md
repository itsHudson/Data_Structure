# Given a **circular-array-based queue `Q`** capable of holding **7 objects**, show the **final contents of the array** after the following code is executed. Show **step-by-step diagrams (with the arrows)** for each of the queue operations in the following code segment. State the **final array contents**.

```cpp
for (int k = 1; k <= 6; k++)
    Q.enqueue(k);

for (int k = 1; k <= 2; k++)
{
    Q.dequeue();
    Q.enqueue(k);
}
```

---


## 1. Understanding the Process
- This is a circular queue, so when the rear reaches the last index, it can continue from the beginning of the array if there is empty space.
  - Maximum size = 7
  - Array index = 0 to 6

- We will assume:
  - front points to the first element
  - rear points to the last element


---

## 2. Step-by-Step Queue Diagrams (Circular Queue)
### Initial State: Queue is empty.

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value |   |   |   |   |   |   |   |

**Front = -1, Rear = -1**

---

### Step 1: enqueue(1)
| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 1 |   |   |   |   |   |   |

**Front → index 0**  
**Rear → index 0**

---

### Step 2: enqueue(2)
| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 1 | 2 |   |   |   |   |   |

**Front → index 0**  
**Rear → index 1**

---

### Step 3: enqueue(3)
| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 1 | 2 | 3 |   |   |   |   |

**Front → index 0**  
**Rear → index 2**

---

### Step 4: enqueue(4)
| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 1 | 2 | 3 | 4 |   |   |   |

**Front → index 0**  
**Rear → index 3**

---

### Step 5: enqueue(5)
| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 1 | 2 | 3 | 4 | 5 |   |   |

**Front → index 0**  
**Rear → index 4**

---

### Step 6: enqueue(6)
| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 1 | 2 | 3 | 4 | 5 | 6 |   |

**Front → index 0**  
**Rear → index 5**

**Current queue order:**  
**Front → 1, 2, 3, 4, 5, 6 ← Rear**

---

### Step 7: First Loop Iteration (k = 1)

#### 7.1 dequeue()
**Element removed = 1**

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 1 | 2 | 3 | 4 | 5 | 6 |   |

**Front → index 1**  
**Rear → index 5**

**Current logical queue:**  
**Front → 2, 3, 4, 5, 6 ← Rear**

---

#### 7.2 enqueue(1)
(New element goes to index 6)

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 1 | 2 | 3 | 4 | 5 | 6 | 1 |

**Front → index 1**  
**Rear → index 6**

**Current logical queue:**  
**Front → 2, 3, 4, 5, 6, 1 ← Rear**

---

### Step 8: Second Loop Iteration (k = 2)

#### 8.1 dequeue()
**Element removed = 2**

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 1 | 2 | 3 | 4 | 5 | 6 | 1 |

**Front → index 2**  
**Rear → index 6**

**Current logical queue:**  
**Front → 3, 4, 5, 6, 1 ← Rear**

---

#### 8.2 enqueue(2)
(Rear wraps around to index 0)

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 2 | 2 | 3 | 4 | 5 | 6 | 1 |

**Front → index 2**  
**Rear → index 0**

**Current logical queue:**  
**Front → 3, 4, 5, 6, 1, 2 ← Rear**

---

## Final Results

### Final Array Contents
**[2, 2, 3, 4, 5, 6, 1]**

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 2 | 2 | 3 | 4 | 5 | 6 | 1 |

---

### Final Queue Order
Even though the array is: [2, 2, 3, 4, 5, 6, 1]
The actual queue (circular order) is: **3, 4, 5, 6, 1, 2**

Because:
- **Front = index 2**
- **Rear = index 0**

#### Circular Traversal
- index 2 → 3  
- index 3 → 4  
- index 4 → 5  
- index 5 → 6  
- index 6 → 1  
- index 0 → 2  

---

### Final Answer
- **Final array contents:** `[2, 2, 3, 4, 5, 6, 1]`  
- **Final queue order:** `3, 4, 5, 6, 1, 2`
