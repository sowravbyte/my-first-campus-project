# 🎓 DIU Lost & Found

A simple and beginner-friendly **Lost & Found Management System** built with **C programming** for managing lost and found items on campus.

This is my **first campus project**, developed to practice core C programming concepts such as **structures, functions, file handling, binary files, pointers, and CRUD operations**.

---

## 📌 Project Overview

**DIU Lost & Found** provides a simple way to record and manage lost and found items within a campus environment.

Users can:

* Report a lost item
* Report a found item
* View all reported items
* Search for an item using its ID
* Delete an item record
* Automatically generate a unique Item ID
* Store item information permanently using file handling

The project uses a binary file (`file.txt`) to store all item records.

---

## ✨ Features

### 🔴 Report Lost Item

Users can report a lost item by providing:

* Item name
* Category
* Location
* Date

The system automatically assigns a unique Item ID and marks the status as **Lost**.

### 🟢 Report Found Item

Users can report an item they have found. The system stores the item information and automatically marks its status as **Found**.

### 📋 View All Items

Displays all stored lost and found items with their:

* ID
* Name
* Category
* Location
* Date
* Status

### 🔍 Search Item

Users can search for a specific item using its unique Item ID.

### 🗑️ Delete Item

Users can remove an item record from the system using its Item ID.

### 🆔 Automatic ID Generation

The system automatically generates Item IDs starting from **1001** and assigns the next available ID to new records.

### 💾 File Persistence

All records are stored in a binary file, allowing data to remain available even after the program is closed.

---

## 🛠️ Technologies Used

* **Language:** C
* **Compiler:** GCC
* **File Handling:** Binary File I/O
* **Data Structure:** `struct`
* **Storage:** `file.txt`

### C Concepts Practiced

* Structures
* Functions
* Pointers
* Arrays
* Strings
* `fread()` / `fwrite()`
* `fopen()` / `fclose()`
* `remove()` / `rename()`
* Conditional statements
* Loops
* User input validation

---

## 📂 Project Structure

```text
DIU-Lost-and-Found/
│
├── DIU_Lost_and_Found.c
├── file.txt
└── README.md
```

> `file.txt` is created automatically when the first item is reported.

---

## 🚀 How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/sowravbyte/campus-find.git
```

### 2. Navigate to the Project Directory

```bash
cd campus-find
```

### 3. Compile the Program

```bash
gcc DIU_Lost_and_Found.c -o campus-find
```

### 4. Run the Program

**Windows:**

```bash
campus-find.exe
```

**Linux / macOS:**

```bash
./campus-find
```

---

## 🖥️ Main Menu

```text
========== CAMPUS FIND ==========

1. Report Lost Item
2. Report Found Item
3. View All Items
4. Search Item
5. Delete Item
6. Exit

Enter your choice:
```

---

## 📊 Item Information

Each item contains the following information:

| Field    | Description                            |
| -------- | -------------------------------------- |
| ID       | Unique item identifier                 |
| Name     | Name of the lost/found item            |
| Category | Type or category of item               |
| Location | Location where the item was lost/found |
| Date     | Date of report                         |
| Status   | Lost or Found                          |

---

## 🎯 Project Goals

The main goal of this project is to build a practical application using fundamental C programming concepts.

Through this project, I practiced:

* Designing a real-world problem solution
* Working with structures
* Managing records using files
* Reading and writing binary data
* Implementing basic CRUD operations
* Handling user input
* Organizing a C project into reusable functions

---

## 🔮 Future Improvements

Possible future versions may include:

* 🔎 Search by item name or category
* 📍 Search by location
* 📅 Search by date
* ✏️ Update item information
* 🔄 Change item status from Lost → Found
* 🤝 Match lost and found items automatically
* 👤 User authentication
* 🗄️ Database integration
* 🌐 Web-based interface
* 📱 Mobile application
* 📊 Admin dashboard

---

## 📚 What I Learned

This project helped me understand how basic C programming concepts can be combined to solve a real-world problem.

In particular, I gained practical experience with **structures, pointers, functions, strings, and file handling**, while learning how to design a small management system from scratch.

---

## 👨‍💻 Author

**_sadakuzzaman**

Software Engineering Student
GitHub: [@sowravbyte](https://github.com/sowravbyte)

---

## ⭐ Acknowledgement

This project was created as my **first campus-focused C programming project** as part of my learning journey in software development.

If you find this project useful or interesting, feel free to ⭐ the repository.
