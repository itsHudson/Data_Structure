# Question 13: Graph Analysis
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
<img src="https://github.com/itsHudson/Data_Structure/blob/main/Practice/Lesson_0012%20-%20Tree%20%26%20Graph/Question%20003/003.png" class="resized-image" alt="image">


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
{a, b, c, d, e, f, g}

### Edges
{(a,b), (b,g), (a,c), (b,c), (g,c), (c,e), (e,f), (c,f), (c,d), (d,f), (g,d)}

---

## 2. Are b and c adjacent?

- Yes, there is an edge between **b and c**

**Answer: Yes**

---

## 3. Out-degree of vertex g

Vertex g connects to:
- b
- c
- d

Total = **3**

**Answer: 3**

---

## 4. In-degree of vertex d

Vertex d connects from:
- c
- g
- f

Total = **3**

**Answer: 3**

---

## 5. d⁺(f) (out-degree of f)

Vertex f connects to:
- e
- c
- d

Total = **3**

**Answer: 3**

---

## 6. d⁻(b) (in-degree of b)

Vertex b connects from:
- a
- g

Total = **2**

**Answer: 2**

---

## 7. Example of a Simple Path

a → c → e → f

(No repeated vertices)

---

## 8. Example of a Cycle Path

c → d → f → c

(Start and end at same vertex)

---
