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

KSYMTAB_DATA(nf_nat_tftp_hook, "_gpl", "");

SYMBOL_CRC(nf_nat_tftp_hook, 0x09dcd177, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeb1edfd1, "nf_ct_helper_init" },
	{ 0x40705e5c, "nf_conntrack_helpers_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3ae789da, "nf_conntrack_helpers_unregister" },
	{ 0x76e331cf, "nf_ct_expect_alloc" },
	{ 0xfeb7f1cc, "nf_ct_expect_init" },
	{ 0x2d10edf5, "nf_ct_expect_put" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x746ec9f7, "nf_ct_helper_log" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "D77D4B3D9420FB0EF7A6669");
