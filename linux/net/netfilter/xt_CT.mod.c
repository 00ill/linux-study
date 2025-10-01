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
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x23defc63, "nf_ct_netns_get" },
	{ 0x30b59088, "nf_ct_tmpl_alloc" },
	{ 0x3a4114ea, "nf_ct_ecache_ext_add" },
	{ 0xeabb2511, "nf_ct_tmpl_free" },
	{ 0x5eab8ad3, "nf_ct_netns_put" },
	{ 0xa916b694, "strnlen" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x166bc38a, "nf_conntrack_helper_try_module_get" },
	{ 0x9029198e, "nf_ct_helper_ext_add" },
	{ 0x670bf447, "nf_conntrack_helper_put" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "B321839DBA61488687A2201");
