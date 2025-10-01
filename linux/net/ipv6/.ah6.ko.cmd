savedcmd_net/ipv6/ah6.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/ipv6/ah6.ko net/ipv6/ah6.o net/ipv6/ah6.mod.o .module-common.o
