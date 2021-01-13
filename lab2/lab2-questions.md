# Lab 2 Questions - Sarah Joyce

1. What gcc command flags would you use to produce an assembly listing in 32-bit mode using the intel style assembly syntax?
	- We would use the -m32 flag and write 'gcc -m32 filename.c -o filename' to compile the code.
2. Suppose you wrote a program in C that declared and initialized variable a with value 42 and variable b with value 52. The program then returned the sum of these two values. How would the assembly listing differ if compiled with optimization and without optimization?
	- The optimized listing is a lot shorter than the non-optimized one. When I tested this myself, the code for the non-optimized version had many more lines and included every single instruction. The optimized version was very few lines and didn't even include the original values assigned to the variables, so I wouldn't have been able to tell that a was 42 and b was 52 if I had not already known. I assume including less data in the optimized version makes the program run a lot faster. This could also be very helpful for security because it would be harder to reverse engineer without detailed assembly code.
3. For lab2-1.s, what does the first SUB instruction do? What purpose does this serve?
	- The first SUB instruction subtracts 16 from the current position of the stack pointer, which moves the stack pointer to create space on the stack for the main function and its variables.
4. For lab2-2.s, how many local variables exist? How do you know this?
	- There are two local variables. We know this because there are two mov instructions which copy data to different locations between the stack pointer and the base pointer.
5. For lab2-3.s, draw a diagram of the stack prior to execution of line 32 – there should be 3 stack frames – show the beginning and end of each frame as well as the current positions of EBP and ESP.
	- See the diagram pdf included
6. For lab2-4.s, line 33 can be replaced with a (arguably) simpler instruction – what is the instruction that could replace it? Does this new instruction take up more or less room in the executable?
	- The simpler instruction which could replace this would be 'inc DWORD PTR [ebp-12]'. This command increments the operand by one. The new instruction takes up less space because it has less operands.
