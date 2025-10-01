savedcmd_crypto/md4.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o .module-common.o
