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

KSYMTAB_FUNC(gre_add_protocol, "_gpl", "");
KSYMTAB_FUNC(gre_del_protocol, "_gpl", "");
KSYMTAB_FUNC(gre_parse_header, "", "");

SYMBOL_CRC(gre_add_protocol, 0xd4431319, "_gpl");
SYMBOL_CRC(gre_del_protocol, 0x082fc154, "_gpl");
SYMBOL_CRC(gre_parse_header, 0xad20fdf0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf4f1057e, "__skb_checksum_complete" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x13f15bb4, "inet_add_protocol" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x67a911a9, "inet_del_protocol" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "45445061752825EA245BC8E");
