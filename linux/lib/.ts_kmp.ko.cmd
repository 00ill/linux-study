savedcmd_lib/ts_kmp.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o lib/ts_kmp.ko lib/ts_kmp.o lib/ts_kmp.mod.o .module-common.o
