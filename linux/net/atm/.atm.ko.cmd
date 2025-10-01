savedcmd_net/atm/atm.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/atm/atm.ko net/atm/atm.o net/atm/atm.mod.o .module-common.o
