savedcmd_net/ipv4/fou.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/ipv4/fou.ko net/ipv4/fou.o net/ipv4/fou.mod.o .module-common.o
