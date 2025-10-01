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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe9c11251, "can_rx_unregister" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x37a0cba, "kfree" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe30296b1, "netlink_capable" },
	{ 0x58196490, "can_send" },
	{ 0xf45bdd92, "__dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa8b02e1f, "rtnl_register_module" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xac85f68f, "skb_copy" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0xc1be4b75, "can_rx_register" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "7D0BBFD1DDA4A3732CD60AA");
