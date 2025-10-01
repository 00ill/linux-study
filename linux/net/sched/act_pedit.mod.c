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
	{ 0x897ad2bc, "tcf_register_action" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xeaa63e04, "tcf_idrinfo_destroy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x1773c5e, "tcf_action_update_stats" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x1a91296a, "tcf_unregister_action" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x518dc32e, "tcf_idr_check_alloc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb2cd810a, "tcf_action_check_ctrlact" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe94945de, "tcf_action_set_ctrlact" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{  0xf3f02, "tcf_chain_put_by_act" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1ddcccbb, "tcf_idr_create_from_flags" },
	{ 0xab32cf2d, "tcf_idr_cleanup" },
	{ 0x4055daec, "tcf_idr_release" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe2ece698, "ipv6_find_hdr" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8999f8d4, "skb_store_bits" },
	{ 0x122c3a7e, "_printk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C385E34F3AB114F86FC7365");
