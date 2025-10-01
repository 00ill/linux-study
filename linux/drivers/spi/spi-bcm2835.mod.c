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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x3bfc93cf, "dma_get_slave_caps" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x15058ed7, "gpiod_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd232569, "dma_unmap_page_attrs" },
	{ 0x50c7e6ee, "of_find_compatible_node" },
	{ 0xe792d1b4, "__dma_sync_single_for_device" },
	{ 0x605d5bfa, "cache_line_size" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x9df57208, "dma_map_page_attrs" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x38aa1397, "gpiod_add_lookup_table" },
	{ 0x9143db32, "gpiod_get" },
	{ 0xff81487d, "gpiod_remove_lookup_table" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2b21d1e1, "dma_release_channel" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x8e1f01a7, "spi_unregister_controller" },
	{ 0x4d300d69, "__devm_spi_alloc_controller" },
	{ 0x53dcc4a9, "devm_platform_get_and_ioremap_resource" },
	{ 0xb6caf056, "devm_clk_get_enabled" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0x4ac34dbd, "dma_request_chan" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x8704e806, "spi_register_controller" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xead9b7f4, "debugfs_create_u64" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x37704abd, "empty_zero_page" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x84679291, "spi_finalize_current_transfer" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spiC*");

MODULE_INFO(srcversion, "BD555340EE8618178B7D51A");
