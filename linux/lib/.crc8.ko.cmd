savedcmd_lib/crc8.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o lib/crc8.ko lib/crc8.o lib/crc8.mod.o .module-common.o
