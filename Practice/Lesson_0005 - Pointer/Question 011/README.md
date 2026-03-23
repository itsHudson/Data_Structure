# Given the following declaration, which of the statements are valid? Explain why.
int x;  
int *p;  
int *q;  

  - a. p = q;  
  - b. *p = 56;  
  - c. p = x;  
  - d. *p = *q;  
  - e. q = &x;  
  - f. *p = q;  

---

## Answer:
a. p = q;  
✔ Valid  
Why: Both `p` and `q` are pointers of type `int*`. Assigning one pointer to another is valid because they store addresses of the same type.

b. *p = 56;  
❌ Invalid  
Why: Pointer `p` is not initialized (it does not point to any valid memory location). Dereferencing it (`*p`) leads to undefined behavior.

c. p = x;  
❌ Invalid  
Why: `p` is a pointer (stores an address), but `x` is an integer value. This is a type mismatch.

d. *p = *q;  
✔ Valid (with condition)  
Why: Both `*p` and `*q` refer to integer values. This statement is valid only if both pointers point to valid memory locations. Otherwise, it will cause runtime errors.

e. q = &x;  
✔ Valid  
Why: `&x` gives the address of variable `x`, which matches the type `int*`. Therefore, assigning it to pointer `q` is correct.

f. *p = q;  
❌ Invalid  
Why: `*p` is an integer value, but `q` is a pointer (`int*`). Assigning a pointer to an integer is a type mismatch.

---

## Summary:

a → Valid  
b → Invalid  
c → Invalid  
d → Valid (if initialized)  
e → Valid  
f → Invalid
