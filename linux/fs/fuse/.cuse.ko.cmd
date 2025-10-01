savedcmd_fs/fuse/cuse.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o fs/fuse/cuse.ko fs/fuse/cuse.o fs/fuse/cuse.mod.o .module-common.o
