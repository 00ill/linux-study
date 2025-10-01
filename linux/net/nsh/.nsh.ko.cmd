savedcmd_net/nsh/nsh.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/nsh/nsh.ko net/nsh/nsh.o net/nsh/nsh.mod.o .module-common.o
