#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(cdrom_dummy_generic_packet, "", "");
KSYMTAB_FUNC(register_cdrom, "", "");
KSYMTAB_FUNC(unregister_cdrom, "", "");
KSYMTAB_FUNC(cdrom_get_media_event, "", "");
KSYMTAB_FUNC(cdrom_open, "", "");
KSYMTAB_FUNC(cdrom_release, "", "");
KSYMTAB_FUNC(cdrom_number_of_slots, "", "");
KSYMTAB_FUNC(cdrom_check_events, "", "");
KSYMTAB_FUNC(init_cdrom_command, "", "");
KSYMTAB_FUNC(cdrom_mode_sense, "", "");
KSYMTAB_FUNC(cdrom_mode_select, "", "");
KSYMTAB_FUNC(cdrom_multisession, "_gpl", "");
KSYMTAB_FUNC(cdrom_read_tocentry, "_gpl", "");
KSYMTAB_FUNC(cdrom_get_last_written, "", "");
KSYMTAB_FUNC(cdrom_ioctl, "", "");

SYMBOL_CRC(cdrom_dummy_generic_packet, 0x9a25722e, "");
SYMBOL_CRC(register_cdrom, 0x19d9e1d4, "");
SYMBOL_CRC(unregister_cdrom, 0xd5a1e227, "");
SYMBOL_CRC(cdrom_get_media_event, 0x49c61658, "");
SYMBOL_CRC(cdrom_open, 0xc7c3879a, "");
SYMBOL_CRC(cdrom_release, 0x628b20ad, "");
SYMBOL_CRC(cdrom_number_of_slots, 0x83d9bca6, "");
SYMBOL_CRC(cdrom_check_events, 0x792e2791, "");
SYMBOL_CRC(init_cdrom_command, 0xbb24f607, "");
SYMBOL_CRC(cdrom_mode_sense, 0x948b17c2, "");
SYMBOL_CRC(cdrom_mode_select, 0x857897bb, "");
SYMBOL_CRC(cdrom_multisession, 0x142afcf3, "_gpl");
SYMBOL_CRC(cdrom_read_tocentry, 0x597b28b0, "_gpl");
SYMBOL_CRC(cdrom_get_last_written, 0x285ea808, "");
SYMBOL_CRC(cdrom_ioctl, 0xc1ac9d84, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1693c4c3, "unregister_sysctl_table" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x96848186, "scnprintf" },
	{ 0x1ed10558, "proc_dostring" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc6cbbc89, "capable" },
	{ 0x52f7b522, "invalidate_bdev" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F14CF377A5E79485A8A0727");
