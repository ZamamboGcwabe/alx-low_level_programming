.section .data
message:
  .ascii "Hello, Holberton\n\0"

.section .text
.globl main
.type main, @function
main:
  pushq %rbp       # save the old base pointer
  movq %rsp, %rbp  # set up the new base pointer

  # prepare arguments to printf
  leaq message(%rip), %rdi   # message string
  xorl %eax, %eax            # format string (empty, since message already contains new line)

  # call printf
  call printf

  # clean up stack and return
  leave
  ret

