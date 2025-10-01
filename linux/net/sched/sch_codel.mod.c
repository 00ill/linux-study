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
	{ 0xe2a03a1, "register_qdisc" },
	{ 0x51ae611e, "gnet_stats_copy_app" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbc2f4b81, "rtnl_kfree_skbs" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x583762a7, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E03CCBE365B612395ACFF15");
