# Shell 00: Introduction to Shell Commands and Git
## Project Overview
Shell 00 is the first project in the 42 curriculum's C Piscine, designed to introduce fundamental Unix/Linux shell commands and Git version control basics. This project's exercises progressively teach essential skills for navigating command-line environments, manipulating files, understanding file permissions, and working with Git repositories.
## Educational Objectives
This project aims to:
1) Familiarize students with basic shell commands
2) Teach file manipulation and permissions in Unix/Linux systems
3) Introduce version control concepts with Git
4) Establish good practices for file management and documentation

## Key Concepts and Skills Demonstrated
1) File Creation and Manipulation: Creating, modifying, and organizing files with specific content requirements
2) File Permissions and Attributes: Understanding and setting Unix file permissions
3) Directory Management: Creating directory structures and navigating the filesystem
4) Git Version Control: Basic Git operations including commits, repository management, and configuration
5) Regular Expressions: Using pattern matching with commands like find
6) Symbolic Links: Creating and managing symbolic links
7) Command Redirection: Manipulating input/output streams
8) Shell Scripting: Writing simple shell scripts to automate tasks

## Exercise Breakdown
1) ex00: Creating and printing on the standard output a file with specific content (touch, vim, cat)
2) ex01: Setting specific file permissions, size, time-stamp and using tar for archiving (ls, touch, truncate, chmod, tar)
3) ex02: Creating complex directory structures with specific permissions (mkdir, ln)
4) ex03: Generating and managing SSH keys for secure authentication and using GIT
5) ex04: Writing a command to list files in a specific format (ls)
6) ex05: Creating a script to display recent Git commits (git log, #!/bin/bash)
7) ex06: Developing a script to show files ignored by Git (git ls-files, .gitignore)
8) ex07: Understanding file differences and patch operations (diff, sw.diff, patch, .patch)
9) ex08: Using the find command to locate and remove temporary files (find)

## Technical Approach
This project employs a minimalist approach focusing on:
1) Command Line Proficiency: Using built-in shell commands rather than high-level abstractions
2) Scripting Efficiency: Creating concise, single-line commands where appropriate
3) Permission Management: Precise control over file access rights
4) Git Workflow: Structured approach to version control

## Technologies Used
1) Shell: /bin/sh (Bourne shell)
2) Core Unix Commands: ls, cat, chmod, mkdir, touch, vim, tar, truncate, ln, etc.
3) Git: Basic repository operations and configuration
4) SSH: Key generation for secure authentication
5) find: Pattern matching and file location
6) file: File type identification

## Setup Instructions
1. Clone this repository:
git clone https://github.com/gtretiak/42School/blob/main/Piscine-2024/shell00
2. cd shell00
3. Each exercise is contained in its own directory (ex00, ex01, etc.)
4. To test specific exercises:
#### For exercise 00
cd ex00; cat z
#### For exercise 01
append a new file with tar -rvf archive.tar newfile.txt
list the container with tar -tvf archive.tar
delete with tar --delete -f testShell00.tar newfile.txt
#### For exercise 02
list the container with tar -tvf archive.tar
then try to rebuild all the files with exactly the same time-stamps, permissions and types (files, directories, hard and symbolic links)
#### For exercise 04
cat midLS; then use the command with options wherever you need
#### For exercise 05
bash git_commit.sh
#### For exercise 06
bash git_ignore.sh; then use it wherever you need, but don't forget to create .gitignore and include there name of the files you need to be ignored
#### For exercise 07
create any file and add some context into it; then run diff (with or without option -u) file1 file2 > changes.patch or sw.diff; then cat the output file
#### For exercise 08
cat clean; then read comments

## Real-World Applications
The skills developed in this project are directly applicable to:
1. DevOps Engineering: Setting up automation scripts, managing permissions, and configuring version control are fundamental DevOps skills
2. System Administration: Understanding file permissions, creating directory structures, and managing symbolic links are essential for system administrators
3. Software Development Workflows: Proficiency with Git, SSH, and shell commands forms the foundation of modern development environments
4. Security Practices: Learning about file permissions and SSH key management introduces important security concepts
5. Automation: Creating shell scripts to automate repetitive tasks is valuable in virtually any technical role
6. Troubleshooting: Understanding how to examine file differences, find specific files, and check file types are critical troubleshooting skills

## Examples:
1. Detecting any crucial differences between files during code review, tracking legal documents, comparing current malfunctiong and previous well-working system configuration.
2. Preventing sensitive data (API keys, credentials, etc.) from being accidentally committed, avoiding security breaches.
3. Automatical finding and removing unnecessary (e.g. backup, temporary) files across the entire file system for saving valuable storage
4. Handling multi-user file permission which allows necessary services to function and configuration files to prevent unauthorized access

## Conclusion
Shell 00 establishes the fundamental command-line and version control skills that underpin virtually all software development and system administration tasks.
These skills are particularly valuable to employers as they demonstrate not just theoretical knowledge but practical capability with the everyday tools of software development. The ability to work efficiently in command-line environments and manage version control properly is often assumed but not always present in new developers.
