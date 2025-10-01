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
	{ 0x122c3a7e, "_printk" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0x26e4dad9, "can_dropped_invalid_skb" },
	{ 0xabd0dc8b, "skb_clone_tx_timestamp" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x73507016, "skb_tstamp_tx" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7a5c410e, "sock_efree" },
	{ 0x50d00458, "netif_rx" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd14e8222, "ethtool_op_get_ts_info" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "F4E669602A3BC2D721CE6A6");
