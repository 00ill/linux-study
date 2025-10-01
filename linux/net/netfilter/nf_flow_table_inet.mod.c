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
	{ 0xa38fae7f, "nft_register_flowtable_type" },
	{ 0x1820fe57, "nf_flow_rule_route_ipv6" },
	{ 0x46ce0c1a, "nf_flow_rule_route_ipv4" },
	{ 0xeb6f869d, "nft_unregister_flowtable_type" },
	{ 0xdd41b06e, "nf_flow_offload_ipv6_hook" },
	{ 0x6dc3183f, "nf_flow_offload_ip_hook" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xc1b2fa7, "nf_flow_table_init" },
	{ 0x197dabf7, "nf_flow_table_offload_setup" },
	{ 0xb08b0957, "nf_flow_table_free" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table");


MODULE_INFO(srcversion, "260A41CF8B500D4CFAF41F6");
