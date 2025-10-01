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
	{ 0xf4a0aaa, "xt_register_targets" },
	{ 0xd1d1c7ef, "xt_register_match" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x5eab8ad3, "nf_ct_netns_put" },
	{ 0xb1a6bfbc, "xt_unregister_match" },
	{ 0x23defc63, "nf_ct_netns_get" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "5CC7560C30132B878B8E941");
