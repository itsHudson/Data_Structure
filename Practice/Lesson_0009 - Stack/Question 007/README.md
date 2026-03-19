# Convert Infix Expression to Postfix Expression

Given an infix expression in the form of string `str`, convert this infix expression into a postfix expression.

## Definition

- **Infix Expression**
  - An expression where the operator is placed between operands.
  - Example: `a + b`

- **Postfix Expression**
  - An expression where the operator is placed after the operands.
  - Example: `a b +`

## Operator Precedence

The order of precedence for operators is:

- `^` has the highest precedence
- `*` and `/` have the same precedence
- `+` and `-` have the lowest precedence

**Note:** Ignore the right associativity of the operator `^`.





---





# Example 1
```
Input: `str = "a+b*(c^d-e)^(f+g*h)-i"`
Output: `abcd^e-fgh*+^*+i-`
```
## Explanation
After converting the infix expression into postfix expression, the resulting postfix expression is: `abcd^e-fgh*+^*+i-`

---

# Example 2
```
Input: `str = "A*(B+C)/D"`
Output: `ABC+*D/`
```
## Explanation
After converting the infix expression into postfix expression, the resulting postfix expression is: `ABC+*D/`





---





# Example Program Output

## Example Run 1
- Enter your equation here: `(A+B)*(C+D)`
- The postfix of the equation = `AB+CD+*`

## Example Run 2
- Enter your equation here: `A*B+C*D`
- The postfix of the equation = `AB*CD*+`
