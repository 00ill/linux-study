#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(charlcd_backlight, "_gpl", "");
KSYMTAB_FUNC(charlcd_poke, "_gpl", "");
KSYMTAB_FUNC(charlcd_alloc, "_gpl", "");
KSYMTAB_FUNC(charlcd_free, "_gpl", "");
KSYMTAB_FUNC(charlcd_register, "_gpl", "");
KSYMTAB_FUNC(charlcd_unregister, "_gpl", "");

SYMBOL_CRC(charlcd_backlight, 0xd3e29970, "_gpl");
SYMBOL_CRC(charlcd_poke, 0x09917359, "_gpl");
SYMBOL_CRC(charlcd_alloc, 0xfe711631, "_gpl");
SYMBOL_CRC(charlcd_free, 0xf3304696, "_gpl");
SYMBOL_CRC(charlcd_register, 0x6fd9cc4a, "_gpl");
SYMBOL_CRC(charlcd_unregister, 0xf883c540, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe3799008, "nonseekable_open" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x94090688, "misc_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2002cbd1, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9BCC8F2EA8082C14EEEAAA5");
