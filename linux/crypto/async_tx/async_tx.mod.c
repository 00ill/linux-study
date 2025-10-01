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

KSYMTAB_FUNC(__async_tx_find_channel, "_gpl", "");
KSYMTAB_FUNC(async_tx_submit, "_gpl", "");
KSYMTAB_FUNC(async_trigger_callback, "_gpl", "");
KSYMTAB_FUNC(async_tx_quiesce, "_gpl", "");

SYMBOL_CRC(__async_tx_find_channel, 0x9d4ffc40, "_gpl");
SYMBOL_CRC(async_tx_submit, 0x15a513a3, "_gpl");
SYMBOL_CRC(async_trigger_callback, 0x2f451274, "_gpl");
SYMBOL_CRC(async_tx_quiesce, 0xfea89c8c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0xb388db83, "dma_wait_for_async_tx" },
	{ 0xf1e046cc, "panic" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "08915ACF300183F5A43051C");
