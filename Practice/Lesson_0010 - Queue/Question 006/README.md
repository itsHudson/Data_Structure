# Create a queue using a linked list implementation. Draw a **step-by-step queue diagram** based on the implementation of linked list and find the **final output** of the current queue after the following process:
- `enqueue("TP01");`
- `enqueue("TP02");`
- `enqueue("TP03");`
- `dequeue();`
- `enqueue("TP04");`
- `enqueue("TP05");`
- `dequeue();`
- `enqueue("TP02");`

- Furthermore, this queue program should be built in **C++** using an **implementation of Linked List**.

---

## Answer: C++ Linked List Queue Implementation (Output)
```text
Removed: TP01
Removed: TP02
Current queue: TP03 TP04 TP05 TP02
```

---

## Answer: Step-by-Step Queue Diagram
### Initial State
| Node Position | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
|--------------|---|---|---|---|---|---|---|
| Value        |   |   |   |   |   |   |   |

**Front = NULL, Rear = NULL**

---

### Step 1: enqueue("TP01")
| Node Position | 1    | 2 | 3 | 4 | 5 | 6 | 7 |
|--------------|------|---|---|---|---|---|---|
| Value        | TP01 |   |   |   |   |   |   |

**Front = TP01, Rear = TP01**

---

### Step 2: enqueue("TP02")
| Node Position | 1    | 2    | 3 | 4 | 5 | 6 | 7 |
|--------------|------|------|---|---|---|---|---|
| Value        | TP01 | TP02 |   |   |   |   |   |

**Front = TP01, Rear = TP02**

---

### Step 3: enqueue("TP03")
| Node Position | 1    | 2    | 3    | 4 | 5 | 6 | 7 |
|--------------|------|------|------|---|---|---|---|
| Value        | TP01 | TP02 | TP03 |   |   |   |   |

**Front = TP01, Rear = TP03**

---

### Step 4: dequeue()

**Removed: TP01**

| Node Position | 1    | 2    | 3    | 4 | 5 | 6 | 7 |
|--------------|------|------|------|---|---|---|---|
| Value        | TP01 | TP02 | TP03 |   |   |   |   |

**Front = TP02, Rear = TP03**

**Logical Queue: TP02, TP03**

---

### Step 5: enqueue("TP04")
| Node Position | 1    | 2    | 3    | 4    | 5 | 6 | 7 |
|--------------|------|------|------|------|---|---|---|
| Value        | TP01 | TP02 | TP03 | TP04 |   |   |   |

**Front = TP02, Rear = TP04**

**Logical Queue: TP02, TP03, TP04**

---

### Step 6: enqueue("TP05")
| Node Position | 1    | 2    | 3    | 4    | 5    | 6 | 7 |
|--------------|------|------|------|------|------|---|---|
| Value        | TP01 | TP02 | TP03 | TP04 | TP05 |   |   |

**Front = TP02, Rear = TP05**

**Logical Queue: TP02, TP03, TP04, TP05**

---

### Step 7: dequeue()

**Removed: TP02**

| Node Position | 1    | 2    | 3    | 4    | 5    | 6 | 7 |
|--------------|------|------|------|------|------|---|---|
| Value        | TP01 | TP02 | TP03 | TP04 | TP05 |   |   |

**Front = TP03, Rear = TP05**

**Logical Queue: TP03, TP04, TP05**

---

### Step 8: enqueue("TP02")
| Node Position | 1    | 2    | 3    | 4    | 5    | 6    | 7 |
|--------------|------|------|------|------|------|------|---|
| Value        | TP01 | TP02 | TP03 | TP04 | TP05 | TP02 |   |

**Front = TP03, Rear = TP02**

**Logical Queue: TP03, TP04, TP05, TP02**
