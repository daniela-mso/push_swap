*This project has been created as part of the 42 curriculum by danielad.*

# push_swap

## Descripton

The **push_swap** is a algorithmic sorting project. The goal is to sort a stack of integers using a limited set of operations (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr) on two stacks (Stack A and Stack B). The objective is to achieve the sorting in the fewest number of moves possible.

## Instructions

### Compilation

Build the executable using the provided Makefile:
```bash
make
```

### Execution
Run the program by passing a sequence of integers as arguments:
```bash
./push_swap 4 2 56 7
```

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```

```bash
ARG=$(seq 1 100 | shuf | tr '\n' ' '); ./push_swap $ARG | wc -l
```

### Testing
Run the program with the folowing rule to test it against a large number of integers
```bash
make test
```val

### Valgrind check
Run 
```bash
make valgrind
```

Run 
```bash
make valgrind-large
```