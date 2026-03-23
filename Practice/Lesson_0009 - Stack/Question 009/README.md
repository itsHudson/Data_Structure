# Infix to Postfix Conversion: Question and Answer

## Question:
Convert the infix expression **A + B * C - D / E** into postfix form and fill in the stack and output step-by-step.

---

## Answer:

### Expression: A + B * C - D / E

| Expression | Stack | Output |
|------------|-------|--------|
| A+B*C-D/E  |       | A      |
| +B*C-D/E   | +     | A      |
| B*C-D/E    | +     | AB     |
| *C-D/E     | + *   | AB     |
| C-D/E      | + *   | ABC    |
| -D/E       | -     | ABC*+  |
| D/E        | -     | ABC*+D |
| /E         | - /   | ABC*+D |
| E          | - /   | ABC*+DE|
| End        |       | ABC*+DE/- |

---

## Final Postfix Expression:
