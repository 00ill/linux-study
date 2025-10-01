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
	{ 0x122c3a7e, "_printk" },
	{ 0x35eff5e0, "nf_osf_fingers" },
	{ 0x12201dd, "nf_osf_match" },
	{ 0xb1a6bfbc, "xt_unregister_match" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nfnetlink_osf");


MODULE_INFO(srcversion, "E93CBF49DC4B12E98F1A35D");
