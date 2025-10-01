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

KSYMTAB_FUNC(nf_tproxy_handle_time_wait4, "_gpl", "");
KSYMTAB_FUNC(nf_tproxy_laddr4, "_gpl", "");
KSYMTAB_FUNC(nf_tproxy_get_sock_v4, "_gpl", "");

SYMBOL_CRC(nf_tproxy_handle_time_wait4, 0xd6342173, "_gpl");
SYMBOL_CRC(nf_tproxy_laddr4, 0x353a29fd, "_gpl");
SYMBOL_CRC(nf_tproxy_get_sock_v4, 0x19a193c1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x12bb5ee1, "__inet_lookup_established" },
	{ 0xe8a818fd, "udp4_lib_lookup" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc55b8e04, "__inet_lookup_listener" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa9f47075, "inet_twsk_deschedule_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2fcff7a7, "inet_twsk_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BE9C67D26E7CD5AA7761A41");
