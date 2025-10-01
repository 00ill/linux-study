savedcmd_fs/erofs/erofs.o := ld -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments   -r -o fs/erofs/erofs.o @fs/erofs/erofs.mod 
