savedcmd_crypto/xcbc.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/xcbc.ko crypto/xcbc.o crypto/xcbc.mod.o .module-common.o
