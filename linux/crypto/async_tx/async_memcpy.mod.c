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

KSYMTAB_FUNC(async_memcpy, "_gpl", "");

SYMBOL_CRC(async_memcpy, 0xca393ba2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9d4ffc40, "__async_tx_find_channel" },
	{ 0x3cc01553, "dmaengine_get_unmap_data" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x15a513a3, "async_tx_submit" },
	{ 0xfea89c8c, "async_tx_quiesce" },
	{ 0x4829a47e, "memcpy" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6be6cb8c, "dmaengine_unmap_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "async_tx");


MODULE_INFO(srcversion, "6B1E7FF95EAC2758C9CD924");
