savedcmd_crypto/zstd.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/zstd.ko crypto/zstd.o crypto/zstd.mod.o .module-common.o
