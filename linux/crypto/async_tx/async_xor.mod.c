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

KSYMTAB_FUNC(async_xor_offs, "_gpl", "");
KSYMTAB_FUNC(async_xor, "_gpl", "");
KSYMTAB_FUNC(async_xor_val_offs, "_gpl", "");
KSYMTAB_FUNC(async_xor_val, "_gpl", "");

SYMBOL_CRC(async_xor_offs, 0x4606f48e, "_gpl");
SYMBOL_CRC(async_xor, 0x7783a313, "_gpl");
SYMBOL_CRC(async_xor_val_offs, 0xd2ade233, "_gpl");
SYMBOL_CRC(async_xor_val, 0xe82110b7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9d4ffc40, "__async_tx_find_channel" },
	{ 0x3cc01553, "dmaengine_get_unmap_data" },
	{ 0x6be6cb8c, "dmaengine_unmap_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x15a513a3, "async_tx_submit" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfea89c8c, "async_tx_quiesce" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0xdcb764ad, "memset" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "async_tx,xor");


MODULE_INFO(srcversion, "3873C8882F41B45E33800A4");
