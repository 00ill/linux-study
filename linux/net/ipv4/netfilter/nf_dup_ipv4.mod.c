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

KSYMTAB_FUNC(nf_dup_ipv4, "_gpl", "");

SYMBOL_CRC(nf_dup_ipv4, 0xd6b9da5d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xcde2f9d8, "__pskb_copy_fclone" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0xdbf248b6, "ip_local_out" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DDB9BCCE08421A3C4548613");
