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

KSYMTAB_FUNC(lc_create, "", "");
KSYMTAB_FUNC(lc_reset, "", "");
KSYMTAB_FUNC(lc_destroy, "", "");
KSYMTAB_FUNC(lc_del, "", "");
KSYMTAB_FUNC(lc_try_get, "", "");
KSYMTAB_FUNC(lc_find, "", "");
KSYMTAB_FUNC(lc_get, "", "");
KSYMTAB_FUNC(lc_put, "", "");
KSYMTAB_FUNC(lc_committed, "", "");
KSYMTAB_FUNC(lc_element_by_index, "", "");
KSYMTAB_FUNC(lc_seq_printf_stats, "", "");
KSYMTAB_FUNC(lc_seq_dump_details, "", "");
KSYMTAB_FUNC(lc_try_lock, "", "");
KSYMTAB_FUNC(lc_is_used, "", "");
KSYMTAB_FUNC(lc_get_cumulative, "", "");

SYMBOL_CRC(lc_create, 0xcf0aff85, "");
SYMBOL_CRC(lc_reset, 0xc4d80ba9, "");
SYMBOL_CRC(lc_destroy, 0x851681e7, "");
SYMBOL_CRC(lc_del, 0x8d7268ac, "");
SYMBOL_CRC(lc_try_get, 0x660b120c, "");
SYMBOL_CRC(lc_find, 0xdc890d61, "");
SYMBOL_CRC(lc_get, 0xfbb30ebd, "");
SYMBOL_CRC(lc_put, 0x753a06ce, "");
SYMBOL_CRC(lc_committed, 0x001487e6, "");
SYMBOL_CRC(lc_element_by_index, 0x7169f731, "");
SYMBOL_CRC(lc_seq_printf_stats, 0x2a7976a1, "");
SYMBOL_CRC(lc_seq_dump_details, 0x2e956b97, "");
SYMBOL_CRC(lc_try_lock, 0x6d2b5f55, "");
SYMBOL_CRC(lc_is_used, 0xb60ec1e6, "");
SYMBOL_CRC(lc_get_cumulative, 0x29a34d81, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7f4f826, "kmem_cache_size" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "43229F0F59F0F37ED2DA84B");
