savedcmd_lib/ts_bm.ko := ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o lib/ts_bm.ko lib/ts_bm.o lib/ts_bm.mod.o .module-common.o
