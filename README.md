# xor_shellcode

---

# 简单的异或shellcode

将generate_xor.c总的shellcode替换为你自己的shellcode即可得到异或后的shellcode。

再将异或后的shellcode放入loader.c中，编译后即可使用。

---

自带的shellcdoe是一个https_reserve监听端口为443，ip为192.168.124.135的C2产生的，可以直接用来做实验。
