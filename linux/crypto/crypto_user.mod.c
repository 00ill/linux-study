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
	{ 0x1d25a0ff, "netlink_kernel_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x208bf44f, "netlink_rcv_skb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe30296b1, "netlink_capable" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0xdcb764ad, "memset" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x35d3dc46, "crypto_alg_sem" },
	{ 0x668b19a1, "down_read" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4acc62e9, "crypto_mod_get" },
	{ 0x53b954a2, "up_read" },
	{ 0xa916b694, "strnlen" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa7a5b8c1, "crypto_remove_spawns" },
	{ 0xce807a25, "up_write" },
	{ 0xdf0577ce, "crypto_mod_put" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x286bf76b, "crypto_unregister_instance" },
	{ 0xaef5b584, "crypto_alg_mod_lookup" },
	{ 0xc10c6da6, "__netlink_kernel_create" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7ac71ae4, "__netlink_dump_start" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "47078A5764AEF77783AD062");
