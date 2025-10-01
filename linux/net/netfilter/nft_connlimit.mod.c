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
	{ 0xcbfd1d19, "nft_register_obj" },
	{ 0x5b221cd, "nft_register_expr" },
	{ 0x90fe0bd5, "nft_unregister_obj" },
	{ 0xbb2d7381, "nf_conncount_gc_list" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf2a1dbb9, "nf_conncount_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xded40268, "nf_conncount_list_init" },
	{ 0x23defc63, "nf_ct_netns_get" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0x98b8f481, "nf_conncount_add" },
	{ 0x45ddb855, "nf_ct_get_tuplepr" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x5eab8ad3, "nf_ct_netns_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_conncount,nf_conntrack");


MODULE_INFO(srcversion, "786A266E76FFFE46F4280E8");
