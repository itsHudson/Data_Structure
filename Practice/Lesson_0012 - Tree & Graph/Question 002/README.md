# Graph Analysis
- Consider the graph and answer the following:
  1. List the **vertices and edges**.  
  2. Are vertices **b and c adjacent**?  
  3. What is the **out-degree of vertex g**?  
  4. What is the **in-degree of vertex d**?  
  5. What is **d⁺(f)**?  
  6. What is **d⁻(b)**?  
  7. Give a **simple path** in the graph.  
  8. Give a **cycle path** in the graph.


<style>
  .resized-image {
    width: 600px;
    height: auto;
  }
</style>
<img src="https://github.com/itsHudson/Data_Structure/blob/main/Practice/Lesson_0012%20-%20Tree%20%26%20Graph/Question%20002/002.png" class="resized-image" alt="image">


---

## Graph Representation (from image)

### Vertices
a, b, c, d, e, f, g

---

### Edges
(a, b), (b, g), (a, c), (b, c), (g, c),  
(c, e), (e, f), (c, f), (c, d), (d, f), (g, d)

---

# Answer

## 1. Vertices and Edges

### Vertices
`V = {a, b, c, d, e, f, g}`

### Edges
`E = {(a,b), (a,c), (b,a), (b,g), (c,a), (c,d), (c,e), (c,f), (c,g), (d,c), (d,f), (d,g), (e,c), (e,f), (f,c), (f,d), (f,e), (g,b), (g,c), (g,d)}`

---

## 2. Are b and c adjacent?
- There is **no direct edge** between `b` and `c` in the picture.
- So they are **not adjacent**.
**Answer: No**

---

## 3. Out-degree of vertex g

Vertex `g` is connected to:
- `b`
- `c`
- `d`

So the degree of `g` is **3**.

Because the graph is undirected, the out-degree is also treated as **3** here.

**Answer: 3**

---

## 4. In-degree of vertex d

Vertex `d` is connected to:
- `c`
- `f`
- `g`

So the degree of `d` is **3**.

Because the graph is undirected, the in-degree is also treated as **3** here.

**Answer: 3**

---

## 5. d⁺(f) (out-degree of f)

Vertex `f` is connected to:
- `c`
- `d`
- `e`

So:

**d⁺(f) = 3**

---

## 6. d⁻(b) (in-degree of b)

Vertex `b` is connected to:
- `a`
- `g`

So:

**d⁻(b) = 2**

---

## 7. Example of a Simple Path

One correct simple path is:

`a, c, g, b`

This is a simple path because:
- `a` connects to `c`
- `c` connects to `g`
- `g` connects to `b`
- no vertex is repeated

**Answer: a, c, g, b**

---

## 8. Example of a Cycle Path

One correct cycle path is:

`a, c, g, b, a`

This is a cycle because:
- `a` connects to `c`
- `c` connects to `g`
- `g` connects to `b`
- `b` connects back to `a`

It starts and ends at the same vertex.

**Answer: a, c, g, b, a**

---
