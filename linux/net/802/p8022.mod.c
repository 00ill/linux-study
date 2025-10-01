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

KSYMTAB_FUNC(register_8022_client, "", "");
KSYMTAB_FUNC(unregister_8022_client, "", "");

SYMBOL_CRC(register_8022_client, 0x676c4984, "");
SYMBOL_CRC(unregister_8022_client, 0xaafb824a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x55967982, "llc_build_and_send_ui_pkt" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x6c9c5043, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1fa0b3fb, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "985E938BE75A994E86F822C");
