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
	{ 0xe113bbbc, "csum_partial" },
	{ 0x746ec9f7, "nf_ct_helper_log" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x30a05725, "nf_nat_snmp_hook" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x951f365e, "nf_conntrack_helper_unregister" },
	{ 0x3d0fe93d, "nf_conntrack_helper_register" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_snmp");


MODULE_INFO(srcversion, "B44525A3329588C447CB261");
