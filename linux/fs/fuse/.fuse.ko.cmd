savedcmd_fs/fuse/fuse.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o fs/fuse/fuse.ko fs/fuse/fuse.o fs/fuse/fuse.mod.o .module-common.o
