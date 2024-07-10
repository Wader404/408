# Introduction

## Contents

- [Structure](#Structure)
- [Usage](#Usage)
- [Notes](#Notes)

## Structure

```
.
├── bin
├── choice.txt
├── makefile
├── README.md
└── src
    ├── 10.c
    ├── 1.c
    ├── 2.c
    ├── 3.c
    ├── 4.c
    ├── 5.c
    ├── 6.c
    ├── 7.c
    ├── 8.c
    ├── 9.c
    ├── include
    │   ├── ack_stack.c
    │   ├── ack_stack.h
    │   ├── linked_list.c
    │   ├── linked_list.h
    │   ├── linked_stack.c
    │   ├── linked_stack.h
    │   ├── seq_queue.c
    │   ├── seq_queue.h
    │   ├── seq_stack.c
    │   └── seq_stack.h
    └── makefile

4 directories, 24 files
```

## Usage

1. In current folder, run `make all` to compile all programs and generate binary files in `./bin`  
2. In current folder, run `make clean` to clean all the binary files in `./bin`  
 
## Notes

1. In question 3, 0 will not be store in stack out of unknown reason  
2. In question 7, program doesn't overflow(which is supposed to overflow)  
