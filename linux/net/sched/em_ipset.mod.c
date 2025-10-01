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
	{ 0x2301b333, "ip_set_nfnl_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x77bc3ac4, "ip_set_nfnl_get_byindex" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xf0b111c6, "tcf_em_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x82f0dea4, "ip_set_test" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x33b58322, "skb_push" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2FFEEF47248D946AED3F588");
