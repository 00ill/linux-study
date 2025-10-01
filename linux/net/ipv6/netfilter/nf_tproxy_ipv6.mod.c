#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(nf_tproxy_laddr6, "_gpl", "");
KSYMTAB_FUNC(nf_tproxy_handle_time_wait6, "_gpl", "");
KSYMTAB_FUNC(nf_tproxy_get_sock_v6, "_gpl", "");

SYMBOL_CRC(nf_tproxy_laddr6, 0x97fcb9d2, "_gpl");
SYMBOL_CRC(nf_tproxy_handle_time_wait6, 0xebe57130, "_gpl");
SYMBOL_CRC(nf_tproxy_get_sock_v6, 0x41393d59, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x23d57d72, "__inet6_lookup_established" },
	{ 0x155a24ab, "udp6_lib_lookup" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf1fc2a4, "inet6_lookup_listener" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xa9f47075, "inet_twsk_deschedule_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2fcff7a7, "inet_twsk_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "EFBE83AB24F234B2D85BF98");
