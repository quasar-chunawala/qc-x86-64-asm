; Use RIP relative memory addressinng
    default rel

; Mark the stack as non-executable for Binutils 2.39+
    section .note.GNU-stack noalloc noexec nowrite progbits