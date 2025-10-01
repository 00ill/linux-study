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

KSYMTAB_FUNC(nsh_push, "_gpl", "");
KSYMTAB_FUNC(nsh_pop, "_gpl", "");

SYMBOL_CRC(nsh_push, 0xaed3ca07, "_gpl");
SYMBOL_CRC(nsh_pop, 0xd23cd963, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1673efa9, "dev_add_offload" },
	{ 0x9b346ec6, "dev_remove_offload" },
	{ 0x33b58322, "skb_push" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x594477ee, "skb_pull_rcsum" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xddffd668, "skb_mac_gso_segment" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "01EB4787913035115C71231");
