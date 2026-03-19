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

# Draw a step-by-step diagram to describe the above operations and determine the final answer in the stack after all operations are executed.
## Step 1: push("TP01")
 - Stack:
   ```
   Top
   TP01
   ```

---

## Step 2: push("TP02")
 - Stack:
   ```
   Top
   TP02
   TP01
   ```

---

## Step 3: push("TP03")
 - Stack:
   ```
   Top  
   TP03  
   TP02  
   TP01
   ```

---

## Step 4: pop()
 - Removed: TP03

- Stack:
  ```
  Top  
  TP02  
  TP01
  ```

---

## Step 5: pop()
 - Removed: TP02

 - Stack:
   ```
   Top  
   TP01
   ```

---

## Step 6: push("TP04")
 - Stack:
   ```
   Top  
   TP04  
   TP01
   ```

---

## Step 7: push("TP05")
- Stack:
  ```
  Top  
  TP05  
  TP04  
  TP01
  ```

---

## Step 8: push("TP03")
 - Stack:
   ```
   Top  
   TP03  
   TP05  
   TP04  
   TP01
   ```

---

## Step 9: pop()
 - Removed: TP03

 - Stack:
   ```
   Top  
   TP05  
   TP04  
   TP01
   ```

---

## Step 10: push("TP02")
 - Stack:
   ```
   Top  
   TP02  
   TP05  
   TP04  
   TP01
   ```

---

## Final Answer in the Stack
 - From Base to Top: TP01, TP04, TP05, TP02
 - From Top to Base: TP02, TP05, TP04, TP01
