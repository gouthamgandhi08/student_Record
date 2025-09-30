# 🎓 Student Record Management System (Mini Project in C)

## 📌 Overview
This is a **menu-driven mini project in C** titled **"STUDENT RECORD"**.  
The program manages student records using **singly linked lists** and stores data persistently in a file (`student.dat`).  

It is modular, with separate C files for each functionality (add, delete, show, modify, save, sort, reverse).

---

## 🚀 Features
- ➕ **Add new student record**
- ❌ **Delete student record** (by roll number or name)
- 📋 **Show all records** (in tabular format)
- ✏️ **Modify student details** (by roll number, name, or percentage)
- 💾 **Save records** to file (`student.dat`)
- 🔚 **Exit** with options: Save & Exit / Exit without saving
- 🔄 **Sort records** (by name or percentage)
- 🗑️ **Delete all records**
- ↩️ **Reverse the list**

---

## 📂 File Structure
```
Student_Record/
│── README.md        # Project description
│── makefile         # Build automation file
│── header.h         # Structure and function prototypes
│── main.c           # Main menu driver
│── stud_add.c       # Add record function
│── stud_del.c       # Delete record function
│── stud_mod.c       # Modify record function
│── stud_show.c      # Show records function
│── stud_save.c      # Save records function
│── stud_sort.c      # Sorting function
│── stud_rev.c       # Reverse list function
│── student.dat      # Database file (auto-created at runtime)
```

---

## 🛠️ Compilation & Execution
Use the provided **makefile**:  

```bash
make
```

This generates the executable:  

```bash
./student
```

---

## 📊 Sample Menu
```
============= STUDENT RECORD MENU =============
a/A : Add new record
d/D : Delete a record
s/S : Show all records
m/M : Modify a record
v/V : Save
e/E : Exit
t/T : Sort the list
l/L : Delete all records
r/R : Reverse the list
===============================================
```

---

## 💡 Example Workflow
1. Add students with name & percentage → Roll numbers auto-assigned.  
2. Show list to view records.  
3. Modify student details (search by rollno, name, or percentage).  
4. Sort by name or percentage.  
5. Save records to `student.dat` before exiting.  

---

## 🖥️ Technologies Used
- **C Programming**
- **Linked Lists**
- **File Handling**
- **Makefile for Build Automation**

---

## 👨‍💻 Author
Developed by *Goutham Gandhi S* as part of a **C mini-project**.  

---
