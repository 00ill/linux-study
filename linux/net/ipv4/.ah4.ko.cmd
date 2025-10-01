savedcmd_net/ipv4/ah4.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/ipv4/ah4.ko net/ipv4/ah4.o net/ipv4/ah4.mod.o .module-common.o
