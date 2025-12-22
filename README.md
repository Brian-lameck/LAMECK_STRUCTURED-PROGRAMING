# ASSIGNMENTS

# Pointers in C: Complete Study Note

## 1. Normal Variables vs Pointers

| Feature              | Normal Variable                         | Pointer                                 |
|----------------------|------------------------------------------|------------------------------------------|
| Stores               | Actual value (e.g., `int x = 5;`)        | Memory address of another variable       |
| Memory Access        | Directly accesses its own memory         | Accesses memory indirectly via address   |
| Value Read           | Use variable name (e.g., `x`)            | Use `*ptr` to get the value at address   |
| Value Modified       | Assign directly (e.g., `x = 10;`)        | Modify via dereferencing (e.g., `*ptr = 10;`) |

---

## 2. Declaration & Definition

### Normal Variable:
```c
int age = 25;  // Declares and defines an integer variable
```
- `age` holds the value `25`.

### Pointer Variable:
```c
int *pAge;     // Declares a pointer to an integer
pAge = &age;   // Stores the address of `age` in `pAge`
```

### Operators:
- `&` → Address-of operator (gets memory address)
- `*` → Dereference operator (accesses value at address)

---

## 3. Dereferencing a Pointer

### Meaning:
Accessing or modifying the value stored at the memory address a pointer holds.

### Example:
```c
int num = 10;
int *ptr = &num;

printf("%d\n", *ptr);  // Outputs 10
*ptr = 20;             // Changes num to 20
```

---

## 4. When to Use Pointers (Use Cases)

### a. Modify Variables in Functions
```c
void update(int *x) {
    *x = *x + 5;
}
```

### b. Dynamic Memory Allocation
```c
int *arr = malloc(5 * sizeof(int));
```

---

## 5. Risks & Limitations of Pointers

- Dangling Pointers: Pointing to freed memory
- Memory Leaks: Forgetting to `free()` memory
- Null Pointer Dereference: Crashes if pointer is uninitialized
- Complex Debugging: Harder to trace bugs

---

## 6. Call by Value vs Call by Reference

| Feature              | Call by Value                          | Call by Reference                         |
|----------------------|-----------------------------------------|--------------------------------------------|
| What is passed       | Copy of the value                      | Address of the variable                    |
| Original modified?   | No                                     | Yes                                        |
| Syntax               | `void func(int x)`                     | `void func(int *x)`                        |

### Example:
```c
void byValue(int x) {
    x = x + 1;
}

void byReference(int *x) {
    *x = *x + 1;
}
```

---

## 7. When to Use Each

### a. Call by Value is Preferred When:
- You want to protect original data
- Example: Calculating something without changing inputs

### b. Call by Reference is Preferred When:
- You want to modify the original variable
- You want to return multiple values
- Example: Swapping two numbers, updating counters
