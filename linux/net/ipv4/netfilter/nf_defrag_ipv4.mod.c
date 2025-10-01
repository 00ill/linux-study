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

KSYMTAB_FUNC(nf_defrag_ipv4_enable, "_gpl", "");
KSYMTAB_FUNC(nf_defrag_ipv4_disable, "_gpl", "");

SYMBOL_CRC(nf_defrag_ipv4_enable, 0x97d992e8, "_gpl");
SYMBOL_CRC(nf_defrag_ipv4_disable, 0xe4a7b2ec, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6fb0cf6f, "nf_register_net_hooks" },
	{ 0x9fe3c28b, "ip_defrag" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa243d05d, "nf_unregister_net_hooks" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x81d8a24c, "nf_defrag_v4_hook" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "592BF9386ABB0D4F67D1490");
