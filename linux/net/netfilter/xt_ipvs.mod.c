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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd1d1c7ef, "xt_register_match" },
	{ 0xb1a6bfbc, "xt_unregister_match" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0xcb48b1da, "ip_vs_proto_get" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe2ece698, "ipv6_find_hdr" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip_vs");


MODULE_INFO(srcversion, "25C90829EA76CDEA97223B2");
