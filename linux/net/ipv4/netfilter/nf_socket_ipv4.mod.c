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

KSYMTAB_FUNC(nf_sk_lookup_slow_v4, "_gpl", "");

SYMBOL_CRC(nf_sk_lookup_slow_v4, 0x4a2deada, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe8a818fd, "udp4_lib_lookup" },
	{ 0x12bb5ee1, "__inet_lookup_established" },
	{ 0xc55b8e04, "__inet_lookup_listener" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AC3F2AAFE81DE959ABEB758");
