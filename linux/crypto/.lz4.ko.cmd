savedcmd_crypto/lz4.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/lz4.ko crypto/lz4.o crypto/lz4.mod.o .module-common.o
