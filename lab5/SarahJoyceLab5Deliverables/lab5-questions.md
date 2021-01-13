# Lab 5 Questions - Sarah Joyce 
1. For lab5-1, describe how your input alters the execution path of the program.
	- At the beginning of the main function, var-ch is set to zero and we have no way to change it normally. At the end of the main function there is a condition which compares var-ch to the hex value 0xdeadbeef and only turns "Correct!" if they are equal. By overflowing the buffer, we can access the value of var-ch and change it to 0xdeadbeef so that the condition is true and the program prints "Correct!"
2. For lab5-2, draw a diagram of the stack frame for the 'secure' function after the call to strcpy(). Highlight how your input alters the execution path of the program.
	- See image included
