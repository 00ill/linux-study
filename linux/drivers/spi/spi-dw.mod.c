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

KSYMTAB_FUNC(dw_spi_set_cs, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_check_status, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_update_config, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_add_host, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_remove_host, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_suspend_host, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_resume_host, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_dma_setup_mfld, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_dma_setup_generic, "_gpl", "SPI_DW_CORE");

SYMBOL_CRC(dw_spi_set_cs, 0x3c9b3250, "_gpl");
SYMBOL_CRC(dw_spi_check_status, 0xee4d8a0c, "_gpl");
SYMBOL_CRC(dw_spi_update_config, 0x84220148, "_gpl");
SYMBOL_CRC(dw_spi_add_host, 0x81a07385, "_gpl");
SYMBOL_CRC(dw_spi_remove_host, 0x255b7382, "_gpl");
SYMBOL_CRC(dw_spi_suspend_host, 0x2183bec7, "_gpl");
SYMBOL_CRC(dw_spi_resume_host, 0x08175ada, "_gpl");
SYMBOL_CRC(dw_spi_dma_setup_mfld, 0x1d9e2f51, "_gpl");
SYMBOL_CRC(dw_spi_dma_setup_generic, 0xa07a71af, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x65fcf275, "spi_controller_resume" },
	{ 0x2f246056, "spi_controller_suspend" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x148b3a5a, "pci_dev_put" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbdbc389d, "pci_get_device" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b21d1e1, "dma_release_channel" },
	{ 0x299f2196, "spi_delay_exec" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x84679291, "spi_finalize_current_transfer" },
	{ 0xe100f81f, "__dma_request_channel" },
	{ 0x8939688b, "device_set_node" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36dc6ece, "put_device" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x3bfc93cf, "dma_get_slave_caps" },
	{ 0xb0d4c80e, "debugfs_create_regset32" },
	{ 0x669c413b, "_dev_err" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e1f01a7, "spi_unregister_controller" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x4ac34dbd, "dma_request_chan" },
	{ 0x645615a2, "__spi_alloc_controller" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0x1b41c806, "spi_mem_default_supports_op" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x8704e806, "spi_register_controller" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "041BDD275CDF591EF6C5D4E");
