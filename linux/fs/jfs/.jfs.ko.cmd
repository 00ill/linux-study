savedcmd_fs/jfs/jfs.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o fs/jfs/jfs.ko fs/jfs/jfs.o fs/jfs/jfs.mod.o .module-common.o
