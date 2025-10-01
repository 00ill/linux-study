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

KSYMTAB_FUNC(nfnl_lock, "_gpl", "");
KSYMTAB_FUNC(nfnl_unlock, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_subsys_register, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_subsys_unregister, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_has_listeners, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_send, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_set_err, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_unicast, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_broadcast, "_gpl", "");

SYMBOL_CRC(nfnl_lock, 0x5ce3b588, "_gpl");
SYMBOL_CRC(nfnl_unlock, 0xdb065657, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_register, 0x5578a646, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_unregister, 0xa4217810, "_gpl");
SYMBOL_CRC(nfnetlink_has_listeners, 0x7500c497, "_gpl");
SYMBOL_CRC(nfnetlink_send, 0xcc5b23bc, "_gpl");
SYMBOL_CRC(nfnetlink_set_err, 0xa987348f, "_gpl");
SYMBOL_CRC(nfnetlink_unicast, 0x129e5945, "_gpl");
SYMBOL_CRC(nfnetlink_broadcast, 0xbd4d83d0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x19f33626, "nf_ctnetlink_has_listener" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1d25a0ff, "netlink_kernel_release" },
	{ 0xec449138, "netlink_has_listeners" },
	{ 0x5150f902, "netlink_set_err" },
	{ 0xb57e03d9, "netlink_broadcast" },
	{ 0x4a64a7, "nlmsg_notify" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0xc10c6da6, "__netlink_kernel_create" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x16576c30, "netlink_ack" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x9d9e8944, "module_put" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xb0499174, "netlink_net_capable" },
	{ 0x208bf44f, "netlink_rcv_skb" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F0EA545FB3BFD895ECC0242");
