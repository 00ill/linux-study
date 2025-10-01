savedcmd_fs/gfs2/gfs2.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o fs/gfs2/gfs2.ko fs/gfs2/gfs2.o fs/gfs2/gfs2.mod.o .module-common.o
