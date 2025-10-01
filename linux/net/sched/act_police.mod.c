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
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xeaa63e04, "tcf_idrinfo_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1773c5e, "tcf_action_update_stats" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x1a91296a, "tcf_unregister_action" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x518dc32e, "tcf_idr_check_alloc" },
	{ 0xb2cd810a, "tcf_action_check_ctrlact" },
	{ 0xf630261, "gen_replace_estimator" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xa05b6be2, "psched_ppscfg_precompute" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xe94945de, "tcf_action_set_ctrlact" },
	{  0xf3f02, "tcf_chain_put_by_act" },
	{ 0x8c459bf3, "qdisc_get_rtab" },
	{ 0x4055daec, "tcf_idr_release" },
	{ 0xa28cfcc0, "gen_estimator_active" },
	{ 0x997e4842, "tcf_idr_create" },
	{ 0xab32cf2d, "tcf_idr_cleanup" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4df2ea84, "gen_estimator_read" },
	{ 0x2af17741, "skb_gso_validate_mac_len" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "21E69916AEC9B66835EE741");
