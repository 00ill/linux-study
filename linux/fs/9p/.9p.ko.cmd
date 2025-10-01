savedcmd_fs/9p/9p.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o fs/9p/9p.ko fs/9p/9p.o fs/9p/9p.mod.o .module-common.o
