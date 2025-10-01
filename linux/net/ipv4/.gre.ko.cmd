savedcmd_net/ipv4/gre.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/ipv4/gre.ko net/ipv4/gre.o net/ipv4/gre.mod.o .module-common.o
