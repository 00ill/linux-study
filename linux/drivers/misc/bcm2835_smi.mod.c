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

KSYMTAB_FUNC(bcm2835_smi_set_regs_from_settings, "", "");
KSYMTAB_FUNC(bcm2835_smi_get_settings_from_regs, "", "");
KSYMTAB_FUNC(bcm2835_smi_user_dma, "", "");
KSYMTAB_FUNC(bcm2835_smi_write_buf, "", "");
KSYMTAB_FUNC(bcm2835_smi_read_buf, "", "");
KSYMTAB_FUNC(bcm2835_smi_set_address, "", "");
KSYMTAB_FUNC(bcm2835_smi_get, "", "");

SYMBOL_CRC(bcm2835_smi_set_regs_from_settings, 0xab7a4d1d, "");
SYMBOL_CRC(bcm2835_smi_get_settings_from_regs, 0xf6720336, "");
SYMBOL_CRC(bcm2835_smi_user_dma, 0x91338427, "");
SYMBOL_CRC(bcm2835_smi_write_buf, 0x045a0916, "");
SYMBOL_CRC(bcm2835_smi_read_buf, 0x3a444f4b, "");
SYMBOL_CRC(bcm2835_smi_set_address, 0x72db83c4, "");
SYMBOL_CRC(bcm2835_smi_get, 0x06aa8ba5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xcf2a6966, "up" },
	{ 0x35908cc9, "of_find_device_by_node" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x2b21d1e1, "dma_release_channel" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x53dcc4a9, "devm_platform_get_and_ioremap_resource" },
	{ 0x4ac34dbd, "dma_request_chan" },
	{ 0x15fe7e9b, "dmam_alloc_attrs" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x37a0cba, "kfree" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0xb388db83, "dma_wait_for_async_tx" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smiC*");

MODULE_INFO(srcversion, "23D107124FC85BE107CB8B1");
