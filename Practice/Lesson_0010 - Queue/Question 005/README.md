# Create a queue using an array implementation. The queue can store up to **7 elements**. Draw a **step-by-step queue diagram** based on the implementation of array and find the **final output** of the current queue after the following process:
- `enqueue("TP01");`
- `enqueue("TP02");`
- `enqueue("TP03");`
- `dequeue();`
- `enqueue("TP04");`
- `enqueue("TP05");`
- `dequeue();`
- `enqueue("TP02");`

- Furthermore, this queue program should be built in **C++** using an **array implementation**.

---

## Answer: C++ Array Queue Implementation (Output)
```text
Removed: TP01
Removed: TP02
Current queue: TP03 TP04 TP05 TP02 
```

---

## Answer: Step-by-Step Queue Diagram
### Initial State
| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value |   |   |   |   |   |   |   |

**Front = -1, Rear = -1**

---

### Step 1: enqueue("TP01")
| Index | 0   | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|-----|---|---|---|---|---|---|
| Value | TP01|   |   |   |   |   |   |

**Front = 0, Rear = 0**

---

### Step 2: enqueue("TP02")
| Index | 0   | 1   | 2 | 3 | 4 | 5 | 6 |
|-------|-----|-----|---|---|---|---|---|
| Value | TP01| TP02|   |   |   |   |   |

**Front = 0, Rear = 1**

---

### Step 3: enqueue("TP03")
| Index | 0   | 1   | 2   | 3 | 4 | 5 | 6 |
|-------|-----|-----|-----|---|---|---|---|
| Value | TP01| TP02| TP03|   |   |   |   |

**Front = 0, Rear = 2**

---

### Step 4: dequeue()

**Removed: TP01**

| Index | 0   | 1   | 2   | 3 | 4 | 5 | 6 |
|-------|-----|-----|-----|---|---|---|---|
| Value | TP01| TP02| TP03|   |   |   |   |

**Front = 1, Rear = 2**

**Logical Queue: TP02, TP03**

---

### Step 5: enqueue("TP04")
| Index | 0   | 1   | 2   | 3   | 4 | 5 | 6 |
|-------|-----|-----|-----|-----|---|---|---|
| Value | TP01| TP02| TP03| TP04|   |   |   |

**Front = 1, Rear = 3**

**Logical Queue: TP02, TP03, TP04**

---

### Step 6: enqueue("TP05")
| Index | 0   | 1   | 2   | 3   | 4   | 5 | 6 |
|-------|-----|-----|-----|-----|-----|---|---|
| Value | TP01| TP02| TP03| TP04| TP05|   |   |

**Front = 1, Rear = 4**

**Logical Queue: TP02, TP03, TP04, TP05**

---

### Step 7: dequeue()

**Removed: TP02**

| Index | 0   | 1   | 2   | 3   | 4   | 5 | 6 |
|-------|-----|-----|-----|-----|-----|---|---|
| Value | TP01| TP02| TP03| TP04| TP05|   |   |

**Front = 2, Rear = 4**

**Logical Queue: TP03, TP04, TP05**

---

### Step 8: enqueue("TP02")
| Index | 0   | 1   | 2   | 3   | 4   | 5   | 6 |
|-------|-----|-----|-----|-----|-----|-----|---|
| Value | TP01| TP02| TP03| TP04| TP05| TP02|   |

**Front = 2, Rear = 5**

**Logical Queue: TP03, TP04, TP05, TP02**
