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

KSYMTAB_FUNC(libeth_rx_fq_create, "_gpl", "LIBETH");
KSYMTAB_FUNC(libeth_rx_fq_destroy, "_gpl", "LIBETH");
KSYMTAB_FUNC(libeth_rx_recycle_slow, "_gpl", "LIBETH");
KSYMTAB_FUNC(libeth_rx_pt_gen_hash_type, "_gpl", "LIBETH");

SYMBOL_CRC(libeth_rx_fq_create, 0xb1289a2a, "_gpl");
SYMBOL_CRC(libeth_rx_fq_destroy, 0x6961f87d, "_gpl");
SYMBOL_CRC(libeth_rx_recycle_slow, 0x1f994df9, "_gpl");
SYMBOL_CRC(libeth_rx_pt_gen_hash_type, 0xdb291eae, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4c10c0b0, "page_pool_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7137b995, "page_pool_put_unrefed_netmem" },
	{ 0x56faa867, "page_pool_create" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F72D6D0450E207CDF51C46");
