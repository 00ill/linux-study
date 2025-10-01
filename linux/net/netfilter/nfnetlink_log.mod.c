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
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x5578a646, "nfnetlink_subsys_register" },
	{ 0x9f09e91e, "nf_log_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa4217810, "nfnetlink_subsys_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x36b39609, "nf_log_unregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x129e5945, "nfnetlink_unicast" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xd3a55bcc, "nf_log_unset" },
	{ 0xdcb764ad, "memset" },
	{ 0x9ed72da3, "proc_create_net_data" },
	{ 0x8d732959, "make_kuid" },
	{ 0x796c3d7, "make_kgid" },
	{ 0x8ec23266, "proc_set_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d9e8944, "module_put" },
	{ 0x44162dce, "__put_net" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x73c78fd1, "nfnl_ct_hook" },
	{ 0x429085d9, "nf_log_unbind_pf" },
	{ 0x2f9fa610, "nf_log_bind_pf" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0x391df80a, "netstamp_needed_key" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0xe4151e2c, "from_kgid_munged" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "11A536EB814DB45420785A0");
