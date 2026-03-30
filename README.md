Docker-Based Build Automation for Modular C CLI Application

Overview

This project demonstrates a containerized build and execution system for a modular C-based command-line application using Docker, Makefile, and Bash scripting.

The objective is to simulate a real-world software development workflow where applications are compiled and executed in a consistent Linux environment using containerization.

---

Features

- Modular C program with multiple operations:
  - Addition
  - Subtraction
  - Multiplication
  - Division
- Menu-driven command-line interface
- Input validation and error handling
- Automated build process using Makefile
- Script-based execution using Bash
- Fully containerized environment using Docker

---

Project Structure

File Name| Description
main.c| Main program with CLI interface and logic
add.c| Implementation of arithmetic operations
add.h| Function declarations
Makefile| Build automation using make
build.sh| Script to automate build and execution
Dockerfile| Defines container environment and setup
README.md| Project documentation

---

Technologies Used

- C Programming
- Docker
- Linux (Ubuntu)
- GCC Compiler
- Makefile
- Bash Scripting

---

How to Run

Step 1: Clone the Repository

git clone https://github.com/tejaswinijudah/docker-based-c-build-automation.git
cd docker-based-c-build-automation

Step 2: Build Docker Image

docker build -t embedded-build .

Step 3: Run the Container

docker run -it embedded-build

---

Sample Execution

Select operation:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter choice: 1
Enter two numbers: 5 10
Result: 15

---

Key Concepts Demonstrated

- Containerization using Docker
- Consistent build environments using Linux containers
- Modular programming in C
- Build automation using Makefile
- Workflow automation using shell scripting

---

Future Enhancements

- Add more mathematical operations
- Extend to file-based input/output
- Integrate logging mechanisms
- Add CI/CD pipeline using GitHub Actions

---

Author

Tejaswini
Electronics and Communication Engineering Student
Anna University, CEG
