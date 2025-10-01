savedcmd_crypto/sm4.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/sm4.ko crypto/sm4.o crypto/sm4.mod.o .module-common.o
