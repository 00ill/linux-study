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
	{ 0x144a9c15, "l2tp_nl_register_ops" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9d9e8944, "module_put" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x491dab98, "dev_forward_skb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xd068eaec, "l2tp_session_create" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0xb911c495, "kernel_sock_ip_overhead" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x50e77ca9, "l2tp_session_register" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0xd3f109ff, "l2tp_session_put" },
	{ 0xd8940511, "__module_get" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x1850d759, "l2tp_session_delete" },
	{ 0x9fdfb96f, "l2tp_xmit_skb" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xa89a25ba, "dev_get_tstats64" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "12B3B355B01D0F670FBC4E7");
