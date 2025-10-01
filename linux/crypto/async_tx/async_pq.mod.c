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

KSYMTAB_FUNC(async_gen_syndrome, "_gpl", "");
KSYMTAB_FUNC(async_syndrome_val, "_gpl", "");

SYMBOL_CRC(async_gen_syndrome, 0x7cce2b88, "_gpl");
SYMBOL_CRC(async_syndrome_val, 0xaef81916, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x9d4ffc40, "__async_tx_find_channel" },
	{ 0x3cc01553, "dmaengine_get_unmap_data" },
	{ 0x6be6cb8c, "dmaengine_unmap_put" },
	{ 0xfea89c8c, "async_tx_quiesce" },
	{ 0x6680e7aa, "raid6_empty_zero_page" },
	{ 0x804a5b70, "raid6_call" },
	{ 0xdcb764ad, "memset" },
	{ 0x17f54263, "raid6_gfexp" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x15a513a3, "async_tx_submit" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4606f48e, "async_xor_offs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "async_tx,raid6_pq,async_xor");


MODULE_INFO(srcversion, "6135C3A1A03DA6A7CCBE102");
