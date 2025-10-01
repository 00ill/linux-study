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
	{ 0xf1e98c74, "avenrun" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x746ba74a, "tcf_em_register" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e536d3e, "__skb_get_hash_net" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf0b111c6, "tcf_em_unregister" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B9ACF55348A8159B5951C0D");
