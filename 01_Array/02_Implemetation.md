# 📚 Arrays in C  

![C Programming](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)  
![Data Structures](https://img.shields.io/badge/Data%20Structure-Array-green?style=for-the-badge&logo=matrix)  

---

## 📖 What is an Array?  

An **Array** in C is a **data structure** that stores a fixed-size sequence of elements of the **same data type**.  
- Arrays store data in **contiguous memory locations**.  
- Each element can be accessed using an **index number**.  
- Indexing starts from `0` and goes up to `size-1`.  
- It helps in reducing code complexity when dealing with large amounts of data.  

👉 Example: Instead of creating `int a, b, c, d, e;`, we can simply create an array `int arr[5];` to store 5 integers.  

---

## 🔹 One Dimensional Array  

A **One-Dimensional Array** is the simplest type of array.  
It can be visualized as a **list of elements stored in a single row**.  

- **Declaration:**  
  ```c
  data_type array_name[size];
  ```
- **Initialization:**  
  ```c
  int arr[5] = {10, 20, 30, 40, 50};
  ```
- **Accessing Elements:**  
  ```c
  printf("%d", arr[0]);   // prints 10
  ```

✅ Example explained:  
- `int` → Data type (array stores integers)  
- `arr` → Name of array  
- `[5]` → Size of array (5 elements)  
- `{10, 20, 30, 40, 50}` → Elements of the array  

---

## 🧮 Memory Representation  

When we declare an array, memory is allocated **sequentially (contiguously)**.  
Each element is stored at the next available address, depending on the size of its data type.  

For example:  
```c
int arr[5] = {10, 20, 30, 40, 50};
```

| Index | 0  | 1  | 2  | 3  | 4  |
|-------|----|----|----|----|----|
| Value | 10 | 20 | 30 | 40 | 50 |

👉 If an `int` takes **4 bytes**, then memory addresses will be like:  

```
1000 → 10  
1004 → 20  
1008 → 30  
1012 → 40  
1016 → 50  
```

---

## 🖼️ Visual Representation  

### 📌 Array as a List  
![Array Representation](/assets/1DArray.png)  

### 📌 Array Memory Layout  
![Array Memory Layout](/assets/ArrayMemory.jpg)  

---

## 🚀 Code Implementation  

```c
#include <stdio.h>

int main() {
    // Implementation of One Dimensional Array (manual assignment)
    int arr1[5];
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    arr1[3] = 40;
    arr1[4] = 50;

    // Another way of Implementing One Dimensional Array (initialization)
    int arr2[5] = {10, 20, 30, 40, 50};

    // Printing arr1
    printf("Elements of arr1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    // Printing arr2
    printf("\nElements of arr2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
```

---

## 🎯 Output  

```
Elements of arr1: 10 20 30 40 50  
Elements of arr2: 10 20 30 40 50
```

---

## ✨ Key Points  
- Arrays store elements in **contiguous memory locations**.  
- Index starts from `0`.  
- One Dimensional Array is a **linear list of data**.  
- Efficient for storing and accessing multiple values of the same type.  

---
## 📚 References
- [GeeksforGeeks: Arrays in C](https://www.geeksforgeeks.org/arrays-in-c-cpp/)
- [TutorialsPoint: C Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)

## 📞 Contact for Queries

If you have any doubts or queries regarding this code or arrays in C, feel free to reach out:

<p align="center">
  <img src="../assets/Sir.jpg" alt="Sir's Photo" width="150" style="border-radius:1rem">
</p>

**👨‍🏫 Asutosh sir** <br>
**📱 Contact Number:** +91-9937869696  
**📧 Email:** No idea <BR>
**📸 Instagram:** loading ⏳<BR>

---
✨ *Made with ❤️ by Subhrajeet Bhoi*
