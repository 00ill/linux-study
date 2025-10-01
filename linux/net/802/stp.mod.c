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

KSYMTAB_FUNC(stp_proto_register, "_gpl", "");
KSYMTAB_FUNC(stp_proto_unregister, "_gpl", "");

SYMBOL_CRC(stp_proto_register, 0xa40c4c58, "_gpl");
SYMBOL_CRC(stp_proto_unregister, 0x14a0cd53, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6c9c5043, "llc_sap_open" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1fa0b3fb, "llc_sap_close" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "BB7D27BD763A038AC4B2C8E");
