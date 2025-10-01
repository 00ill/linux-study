savedcmd_vmlinux := scripts/link-vmlinux.sh "ld" "-EL  -maarch64elf -z noexecstack --no-warn-rwx-segments" "--no-undefined -X --pic-veneer -shared -Bsymbolic -z notext  --no-apply-dynamic-relocs --fix-cortex-a53-843419 --build-id=sha1 --orphan-handling=warn";  true

source_vmlinux := scripts/link-vmlinux.sh

deps_vmlinux := \
    $(wildcard include/config/LTO_CLANG) \
    $(wildcard include/config/X86_KERNEL_IBT) \
    $(wildcard include/config/MODULES) \
    $(wildcard include/config/VMLINUX_MAP) \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/KALLSYMS_ALL) \
    $(wildcard include/config/KALLSYMS_ABSOLUTE_PERCPU) \
    $(wildcard include/config/KALLSYMS) \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/SHELL) \
    $(wildcard include/config/BUILDTIME_TABLE_SORT) \

vmlinux: $(deps_vmlinux)

$(deps_vmlinux):
