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

KSYMTAB_DATA(nf_nat_snmp_hook, "_gpl", "");

SYMBOL_CRC(nf_nat_snmp_hook, 0x30a05725, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3d0fe93d, "nf_conntrack_helper_register" },
	{ 0xe9dec2e9, "nf_conntrack_broadcast_help" },
	{ 0x951f365e, "nf_conntrack_helper_unregister" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_broadcast");


MODULE_INFO(srcversion, "7D079407BE700CDA22DAF21");
