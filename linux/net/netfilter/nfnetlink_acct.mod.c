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

KSYMTAB_FUNC(nfnl_acct_find_get, "_gpl", "");
KSYMTAB_FUNC(nfnl_acct_put, "_gpl", "");
KSYMTAB_FUNC(nfnl_acct_update, "_gpl", "");
KSYMTAB_FUNC(nfnl_acct_overquota, "_gpl", "");

SYMBOL_CRC(nfnl_acct_find_get, 0x86e039eb, "_gpl");
SYMBOL_CRC(nfnl_acct_put, 0xbecf5d14, "_gpl");
SYMBOL_CRC(nfnl_acct_update, 0xfec01bc0, "_gpl");
SYMBOL_CRC(nfnl_acct_overquota, 0xd1b5bcdc, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x5578a646, "nfnetlink_subsys_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4217810, "nfnetlink_subsys_unregister" },
	{ 0x9d9e8944, "module_put" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x129e5945, "nfnetlink_unicast" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x7ac71ae4, "__netlink_dump_start" },
	{ 0xbd4d83d0, "nfnetlink_broadcast" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "29788C5ECBF8961BEE2E816");
