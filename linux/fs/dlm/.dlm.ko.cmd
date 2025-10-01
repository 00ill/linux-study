savedcmd_fs/dlm/dlm.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o fs/dlm/dlm.ko fs/dlm/dlm.o fs/dlm/dlm.mod.o .module-common.o
