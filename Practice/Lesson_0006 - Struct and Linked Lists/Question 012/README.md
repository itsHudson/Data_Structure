# Write a C++ structure named Patient to contain the data shown in the figure.

<style>
  .resized-image {
    width: 600px;
    height: auto;
  }
</style>
<img src="https://github.com/itsHudson/Data_Structure/blob/main/Practice/Lesson_0006%20-%20Struct%20and%20Linked%20Lists/Question%20011/011.png" class="resized-image" alt="image">

---

## Answer:
```cpp
struct Patient {
    string name;
    char gender;
    float height;
    int age;
    float weight;
    Patient* next;
};
```
