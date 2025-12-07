🏥 Hospital Queue Management System (C++)

This project simulates a hospital patient queue management system using Linked List Data Structure in C++.
It gives higher priority to Emergency patients and maintains an ordered queue accordingly.

📌 Features
Feature	Description
➕ Add Patient	Inserts a patient based on priority (Emergency → top)
⚕️ Treat Patient	Removes and treats the first patient in queue
📋 Show Queue	Displays all waiting patients in priority order
❌ Exit	Stops the program
🧠 Data Structure Used

Singly Linked List

Insertion sorted by priority:

priority = 1 → Emergency (High Priority)

priority = 2 → Normal

🏗️ How It Works

When a patient is added:

Emergency patients are placed at the front

Normal patients are placed after existing emergencies

When treating a patient:

The first patient in the list is removed and treated

📍 Example Output
=== Hospital Queue System ===
1. Add Patient
2. Treat Patient
3. Show Queue
0. Exit
Enter choice: 1
Enter Patient ID: 101
Enter Patient Name: Ram
Priority (1-Emergency / 2-Normal): 1
Patient added successfully!

🛠️ Technology Used

Language: C++

Concept: Linked List

IDE/Compiler: Any (VS Code, Turbo C++, CodeBlocks, etc.)

📂 File Structure
📁 HospitalQueueSystem
│── main.cpp  → Source Code
│── README.md → Documentation

🚀 How to Run

1️⃣ Compile the code

g++ main.cpp -o hospital


2️⃣ Run the program

./hospital

🎯 Learning Outcomes

✔ Understanding of dynamic memory allocation
✔ Linked List insertion based on priority
✔ Queue processing in real-life scenarios
✔ C++ struct and pointers usage

📘 Future Enhancements (Optional)

✔ GUI using SFML or Qt

✔ File storage for patient history

✔ Login system for hospital staff

✔ Web version in HTML/CSS + JS
