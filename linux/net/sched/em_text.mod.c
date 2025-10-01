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
	{ 0x746ba74a, "tcf_em_register" },
	{ 0x9166fada, "strncpy" },
	{ 0x1c06a7eb, "nla_put_nohdr" },
	{ 0xd35112a, "nla_append" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa6cc03d, "textsearch_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x839b056, "textsearch_prepare" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf0b111c6, "tcf_em_unregister" },
	{ 0x6919475c, "skb_find_text" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C000BC7478F1905A5C89003");
