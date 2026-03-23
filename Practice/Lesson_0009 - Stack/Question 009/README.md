# Infix to Postfix Conversion: Question and Answer

## Question: Convert the infix expression **A + B * C - D / E** into postfix form and fill in the stack and output step-by-step.

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

## Final Postfix Expression: ABC*+DE/-


---

## Explanation:
- Operands (A, B, C, D, E) go directly to output.
- Operators follow precedence:
  - `*` and `/` have higher precedence than `+` and `-`
- Use stack to temporarily hold operators.
- When a lower precedence operator appears:
  - Pop higher precedence operators from stack to output
- At the end:
  - Pop all remaining operators from the stack to output

---

## Key Rules:
- Operand → Output directly  
- Operator → Push to stack  
- Higher precedence → Push  
- Lower precedence → Pop first  
- End → Empty the stack  

---
