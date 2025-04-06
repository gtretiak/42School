# Shell 00: Introduction to Shell Commands and Git
## Project Overview
Shell 00 is the first project in the 42 curriculum's C Piscine, designed to introduce fundamental Unix/Linux shell commands and Git version control basics. This project consists of 10 exercises that progressively teach essential skills for navigating command-line environments, manipulating files, understanding file permissions, and working with Git repositories.
## Educational Objectives
This project aims to:

Familiarize students with basic shell commands
Teach file manipulation and permissions in Unix/Linux systems
Introduce version control concepts with Git
Develop problem-solving skills through practical exercises
Establish good practices for file management and documentation

## Key Concepts and Skills Demonstrated

File Creation and Manipulation: Creating, modifying, and organizing files with specific content requirements
File Permissions and Attributes: Understanding and setting Unix file permissions
Directory Management: Creating directory structures and navigating the filesystem
Git Version Control: Basic Git operations including commits, repository management, and configuration
Regular Expressions: Using pattern matching with commands like find
Symbolic Links: Creating and managing symbolic links
Command Redirection: Manipulating input/output streams
Shell Scripting: Writing simple shell scripts to automate tasks

## Exercise Breakdown

Z: Creating a file with specific content using redirection
testShell00: Setting specific file permissions and using tar for archiving
Oh yeah, mooore...: Creating complex directory structures with specific permissions
SSH me!: Generating and managing SSH keys for secure authentication
midLS: Writing a command to list files in a specific format
GiT commit: Creating a script to display recent Git commits
gitignore: Developing a script to show files ignored by Git
diff: Understanding file differences and patch operations
clean: Using the find command to locate and remove temporary files
ft_magic: Creating a magic file for file type detection

## Technical Approach
This project employs a minimalist approach focusing on:

Command Line Proficiency: Using built-in shell commands rather than high-level abstractions
Scripting Efficiency: Creating concise, single-line commands where appropriate
Permission Management: Precise control over file access rights
Git Workflow: Structured approach to version control

## Technologies Used

Shell: /bin/sh (Bourne shell)
Core Unix Commands: ls, cat, chmod, mkdir, touch, tar, etc.
Git: Basic repository operations and configuration
SSH: Key generation for secure authentication
find: Pattern matching and file location
file: File type identification

## Setup Instructions

1. Clone this repository:
git clone https://github.com/gtretiak/42School/blob/main/Piscine-2024/Shell00/
2. cd Shell00
3. Each exercise is contained in its own directory (ex00, ex01, etc.)
4. To test specific exercises:
#### For exercise 00
cd ex00
cat z

#### For exercise 05
cd ../ex05
bash git_commit.sh
## Real-World Applications
The skills developed in this project are directly applicable to:

DevOps Engineering: Setting up automation scripts, managing permissions, and configuring version control are fundamental DevOps skills
System Administration: Understanding file permissions, creating directory structures, and managing symbolic links are essential for system administrators
Software Development Workflows: Proficiency with Git, SSH, and shell commands forms the foundation of modern development environments
Security Practices: Learning about file permissions and SSH key management introduces important security concepts
Automation: Creating shell scripts to automate repetitive tasks is valuable in virtually any technical role
Troubleshooting: Understanding how to examine file differences, find specific files, and check file types are critical troubleshooting skills

## Conclusion
While Shell 00 may appear simple, it establishes the fundamental command-line and version control skills that underpin virtually all software development and system administration tasks. Mastering these basics is essential before progressing to more complex programming concepts in the 42 curriculum.
These skills are particularly valuable to employers as they demonstrate not just theoretical knowledge but practical capability with the everyday tools of software development. The ability to work efficiently in command-line environments and manage version control properly is often assumed but not always present in new developers.
