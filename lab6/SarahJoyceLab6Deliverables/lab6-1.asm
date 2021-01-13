call pushcontent1
.string "Hello World!\n"
pushcontent1:
call pushcontent2
.string "/tmp/hello.txt"
pushcontent2:
call func
.string "/tmp/hello.txt"
func:
pop ebx
mov eax, 8
mov ecx, 0777
int 0x80
pop ebx
mov eax, 5
mov ecx, 2
mov edx, 0777
int 0x80
mov ebx, eax
pop ecx
mov eax, 4
mov edx, 13
int 0x80
