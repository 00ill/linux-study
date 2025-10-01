savedcmd_crypto/seqiv.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/seqiv.ko crypto/seqiv.o crypto/seqiv.mod.o .module-common.o
