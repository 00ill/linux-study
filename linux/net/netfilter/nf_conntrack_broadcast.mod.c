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

KSYMTAB_FUNC(nf_conntrack_broadcast_help, "_gpl", "");

SYMBOL_CRC(nf_conntrack_broadcast_help, 0xe9dec2e9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x76e331cf, "nf_ct_expect_alloc" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x2d10edf5, "nf_ct_expect_put" },
	{ 0xcdb362e, "__nf_ct_refresh_acct" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "F053A535DA30A19991D2DB9");
