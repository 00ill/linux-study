# Embedded Linux & OS Master Roadmap (6-Month Schedule)

## 🎯 Goals
- Master Linux CLI and build practical development environment
- Learn Linux system programming in C
- Develop kernel modules and device drivers
- Compare and experiment with RTOS vs Linux
- Complete a solid portfolio repository

---

## 📅 6-Month Curriculum

### Month 1: Linux CLI & Environment Basics
- Practice 50 essential Linux commands (files, processes, network)
- Configure shell environment (alias, tmux) + write practical scripts
- Learn and practice systemd service creation and automation
- **Mini-Project**: Develop practical shell scripts & automation tools → Publish on GitHub

---

### Month 2: Linux System Programming (C)
- File I/O, process management, fork/exec/pipe, signal handling, pthreads
- **Mini-Projects**:
  - Create a mini top-like utility reading /proc data
  - Create a mini netcat-like socket communication tool
- Organize Makefiles and package a small utility collection ("mini-busybox")

---

### Month 3: Kernel Module Development
- Write a Hello World kernel module, load/unload with insmod/rmmod, check dmesg logs
- Use module parameters and printk with various log levels
- Register entries in procfs/sysfs for user-kernel communication
- Practice kernel timers and workqueues
- **Mini-Project**: Organize kernel modules repository (from Hello World to sysfs)

---

### Month 4: Device Driver Development
- Develop GPIO/LED and button interrupt drivers
- Write I2C/SPI sensor drivers (e.g., MPU6050)
- Practice platform_driver and Device Tree Overlay usage
- **Mini-Project**: Test drivers on Raspberry Pi with user space test applications

---

### Month 5: RTOS vs Linux Comparison & Practice
- Setup FreeRTOS board/emulator; practice LED, UART, and button handling
- Cross-compile Linux kernel for embedded boards and rebuild
- Learn and apply Yocto-based root filesystem builds
- **Mini-Project**: Document and demonstrate FreeRTOS vs Linux behavior comparison (videos and write-ups)

---

### Month 6: Advanced CLI, CI/CD, and Collaboration
- Analyze performance using perf, ftrace, sysdig tools
- Automate kernel module build and testing with GitHub Actions CI/CD
- Learn and adopt git workflows and prepare for open-source contributions
- **Final Portfolio**:
  - mini-busybox utility collection
  - kernel modules repository
  - device driver repository
  - FreeRTOS vs Linux practical reports
  - CI/CD automation scripts and workflows

---

## 📅 Weekly/Daily Detailed Schedule (10 hours/week, 1.5~2 hours/day)

### Month 1: Linux CLI & Environment
- Week 1: Learn and practice 50 essential Linux commands (ls, cd, grep, etc.)
- Week 2: Configure shell environment (alias, tmux), write automation scripts
- Week 3: Practice systemd service creation and configuration
- Week 4: Complete and organize Mini-Project scripts

### Month 2: Linux System Programming (C)
- Week 1: File I/O and argument/environment variable handling programs
- Week 2: Practice process creation (fork/exec/pipe) and signal handling
- Week 3: Implement producer-consumer pattern with pthreads
- Week 4: Develop and document Mini-Projects (mini top, mini netcat)

### Month 3: Kernel Module Development
- Week 1: Develop Hello World module and module parameters
- Week 2: Use printk log levels and analyze dmesg outputs
- Week 3: Register procfs/sysfs entries; practice timer and workqueue APIs
- Week 4: Organize and upload kernel module projects to GitHub

### Month 4: Device Driver Development
- Week 1: Develop GPIO, LED, and button interrupt drivers
- Week 2: Write I2C/SPI sensor drivers
- Week 3: Implement platform_driver and Device Tree Overlay usage
- Week 4: Test on Raspberry Pi and write user space test applications

### Month 5: RTOS vs Linux Practice
- Week 1: Setup FreeRTOS board/emulator and complete basic LED/UART projects
- Week 2: Cross-compile and rebuild Linux kernel for embedded board
- Week 3: Learn and apply Yocto build system
- Week 4: Finalize RTOS vs Linux comparison project (videos and reports)

### Month 6: Advanced CLI, CI/CD, Collaboration
- Week 1: Learn perf, ftrace, sysdig performance tools
- Week 2: Write GitHub Actions workflows for CI/CD automation
- Week 3: Practice git workflows, prepare for open source contributions
- Week 4: Finalize portfolio, write blogs, and create video tutorials

---
