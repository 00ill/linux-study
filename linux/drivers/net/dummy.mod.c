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
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0x11d66fa5, "dev_lstats_read" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xabd0dc8b, "skb_clone_tx_timestamp" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x73507016, "skb_tstamp_tx" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa5243c62, "__rtnl_link_register" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x84d5fdff, "__rtnl_link_unregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xce807a25, "up_write" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B4CD341B4ED84418ADB52E6");
