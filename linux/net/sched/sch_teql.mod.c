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
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xe2a03a1, "register_qdisc" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x95313763, "qdisc_reset" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1e1ea1b4, "unregister_qdisc" },
	{ 0xca06e160, "noop_qdisc" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x85f3ffea, "softnet_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x685b0483, "neigh_lookup" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc9ddfdb8, "neigh_destroy" },
	{ 0xa23c3e56, "__neigh_event_send" },
	{ 0xc55ae4cd, "__neigh_create" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "03B1352519EF748EA0AD45A");
