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

KSYMTAB_FUNC(l2tp_nl_register_ops, "_gpl", "");
KSYMTAB_FUNC(l2tp_nl_unregister_ops, "_gpl", "");

SYMBOL_CRC(l2tp_nl_register_ops, 0x144a9c15, "_gpl");
SYMBOL_CRC(l2tp_nl_unregister_ops, 0x337f2432, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2b9da7a4, "genl_lock" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xce91aba6, "genl_register_family" },
	{ 0x21885d6c, "l2tp_session_get_by_ifname" },
	{ 0xb8b52bd2, "l2tp_tunnel_get" },
	{ 0x844c1665, "l2tp_session_get" },
	{ 0x1117aeaf, "l2tp_tunnel_put" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xfbcd121e, "genlmsg_put" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x41e4f2cd, "genl_unregister_family" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2da4728e, "l2tp_tunnel_get_next" },
	{ 0xe83e33f8, "l2tp_session_get_next" },
	{ 0xd3f109ff, "l2tp_session_put" },
	{ 0xe1088e2b, "genlmsg_multicast_allns" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb9398153, "l2tp_tunnel_create" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x971e2b4e, "l2tp_tunnel_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc341c37, "l2tp_tunnel_delete" },
	{ 0x2a7346bb, "l2tp_session_set_header_len" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "843C84BD4D01A26590216F5");
