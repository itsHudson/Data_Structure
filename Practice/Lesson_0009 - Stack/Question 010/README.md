# Infix to Postfix Conversion: Question and Answer

## Question:
Convert the infix expression **A + B * C / (E - F)** into postfix form and show the step-by-step stack and output.

---

## Answer:

### Expression: A + B * C / (E - F)

| Expression | Stack | Output |
|------------|-------|--------|
| A+B*C/(E-F) |       | A      |
| +B*C/(E-F)  | +     | A      |
| B*C/(E-F)   | +     | AB     |
| *C/(E-F)    | + *   | AB     |
| C/(E-F)     | + *   | ABC    |
| /(E-F)      | + /   | ABC*   |
| (E-F)       | + / ( | ABC*   |
| E-F)        | + / ( | ABC*E  |
| -F)         | + / ( - | ABC*E |
| F)          | + / ( - | ABC*EF|
| )           | + /   | ABC*EF-|
| End         |       | ABC*EF-/+ |

---

## Final Postfix Expression: ABC*EF-/+


---

## Explanation:
- Operands (A, B, C, E, F) are directly added to output.
- `*` and `/` have higher precedence than `+`.
- Parentheses `()` force evaluation order:
  - Everything inside `(E - F)` is processed first.
- When `)` is encountered:
  - Pop operators until `(` is found.
- At the end:
  - Pop all remaining operators from the stack.

---

## Key Concept:
- Stack is used to handle precedence and parentheses.
- Final output follows: Operand → Operand → Operator order (Postfix)
