savedcmd_crypto/sm3.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/sm3.ko crypto/sm3.o crypto/sm3.mod.o .module-common.o
