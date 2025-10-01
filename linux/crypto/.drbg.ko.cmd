savedcmd_crypto/drbg.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/drbg.ko crypto/drbg.o crypto/drbg.mod.o .module-common.o
