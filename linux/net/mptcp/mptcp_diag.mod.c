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
	{ 0x44d32385, "inet_diag_register" },
	{ 0x19bf34b1, "mptcp_diag_fill_info" },
	{ 0xcf000982, "inet_diag_unregister" },
	{ 0xd8a64453, "mptcp_token_get_sock" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xb0499174, "netlink_net_capable" },
	{ 0xc4a4fdc3, "inet_sk_diag_fill" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf33af8b9, "sk_free" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd7b3521c, "mptcp_token_iter_next" },
	{ 0xdf339fe3, "inet_diag_bc_sk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "0E90CE672841B1041B784D7");
