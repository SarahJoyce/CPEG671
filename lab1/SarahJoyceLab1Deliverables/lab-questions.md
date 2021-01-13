# Lab 1 Questions - Sarah Joyce
1. What vagrant command would you use to list the status of all virtual machines?
  - You would use the command "vagrant global-status".

2. For lab1-2.c, what is significant about the addresses of x and y? Why is this happening?
  - The addresses of x and y are always 4 apart from each other in hexadecimal every time we run the program. This is because int x is assigned first and an integer is 4 bytes. Then y is assigned immediately after.

3. For lab1-2.c, are the addresses of x and y the same each time the program is run? If yes, why? If not, why not?
  - The addresses are not the same each time the program is run because at run time, the program assigns the variables to a new location in memory, and there is no correlation between the location in memory each time it is run.

4. For lab1-3.c, would an array of a different type affect how you accessed the array elements?
  - No, an array of a different type would not change how we access the array elements, because indexing by number is the same for all arrays so we can reuse this pointer method to access elements in arrays of different types.
