# Lab 7 Questions - Sarah Joyce

1. Describe the reverse engineering procedure you used to write your solution script.

First I had to print a string to the terminal, so I used 'info functions plt' to find that there was a 'printf' function in the binary. I then had to split up the string to keep the number of parameters under 4, since I could not do more than a pop4ret. I searched for each of the strings individually and put their addresses into my script.
Then, to spawn the shell, I was looking for a function that I recognized could spawn a shell like execve. When I used 'info functions plt' I found that the binary included the 'system' function. I also found the string '/bin/sh' in the binary and I knew that running 'system(/bin/sh)' would spawn a shell.

2. List all functions you used, their addresses, and why/how you used them.

I used these functions to output the string.
printf was used to print the string:
printf = p32(0x08048370)

The pop3ret, pop4ret, and format strings '%s%s\n' and '%s%s%s' were used for the split string.
The format strings with and without the \n were specifically chosen to print them all on the same line and make them look like they were one string.
pop3ret = p32(0x80485b9)
pop4ret = p32(0x80485b8)
formatstr2 = p32(0xf7f6439e)
formatstr3 = p32(0xf7ff1b38)

Addresses of the words in the string:
ispace = p32(0xf7de4b8c)
did = p32(0xf7ff1d9e)
it = p32(0x804827f)
ex = p32(0x804821c)
space = p32(0x804802a)

For spawning the shell:
The system function:
system = p32(0x08048390)

A single pop ret for a single parameter:
popret = p32(0x8048351)

The string '/bin/sh', which was the parameter for the system function:
binsh = p32(0xf7f64352)
