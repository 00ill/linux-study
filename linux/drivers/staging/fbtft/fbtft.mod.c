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

MODULE_INFO(staging, "Y");

KSYMTAB_FUNC(fbtft_write_buf_dc, "", "");
KSYMTAB_FUNC(fbtft_dbg_hex, "", "");
KSYMTAB_FUNC(fbtft_unregister_backlight, "", "");
KSYMTAB_FUNC(fbtft_register_backlight, "", "");
KSYMTAB_FUNC(fbtft_framebuffer_alloc, "", "");
KSYMTAB_FUNC(fbtft_framebuffer_release, "", "");
KSYMTAB_FUNC(fbtft_register_framebuffer, "", "");
KSYMTAB_FUNC(fbtft_unregister_framebuffer, "", "");
KSYMTAB_FUNC(fbtft_init_display, "", "");
KSYMTAB_FUNC(fbtft_probe_common, "", "");
KSYMTAB_FUNC(fbtft_remove_common, "", "");
KSYMTAB_FUNC(fbtft_write_reg8_bus8, "", "");
KSYMTAB_FUNC(fbtft_write_reg16_bus8, "", "");
KSYMTAB_FUNC(fbtft_write_reg16_bus16, "", "");
KSYMTAB_FUNC(fbtft_write_reg8_bus9, "", "");
KSYMTAB_FUNC(fbtft_write_vmem16_bus8, "", "");
KSYMTAB_FUNC(fbtft_write_vmem16_bus9, "", "");
KSYMTAB_FUNC(fbtft_write_vmem8_bus8, "", "");
KSYMTAB_FUNC(fbtft_write_vmem16_bus16, "", "");
KSYMTAB_FUNC(fbtft_write_spi, "", "");
KSYMTAB_FUNC(fbtft_write_spi_emulate_9, "", "");
KSYMTAB_FUNC(fbtft_read_spi, "", "");
KSYMTAB_FUNC(fbtft_write_gpio8_wr, "", "");
KSYMTAB_FUNC(fbtft_write_gpio16_wr, "", "");
KSYMTAB_FUNC(fbtft_write_gpio16_wr_latched, "", "");

SYMBOL_CRC(fbtft_write_buf_dc, 0xa4f35e1a, "");
SYMBOL_CRC(fbtft_dbg_hex, 0x1de8ac9d, "");
SYMBOL_CRC(fbtft_unregister_backlight, 0xaa33144c, "");
SYMBOL_CRC(fbtft_register_backlight, 0xbe196225, "");
SYMBOL_CRC(fbtft_framebuffer_alloc, 0x20f5c7f1, "");
SYMBOL_CRC(fbtft_framebuffer_release, 0x25686946, "");
SYMBOL_CRC(fbtft_register_framebuffer, 0x5589d913, "");
SYMBOL_CRC(fbtft_unregister_framebuffer, 0x62a9589c, "");
SYMBOL_CRC(fbtft_init_display, 0x36144069, "");
SYMBOL_CRC(fbtft_probe_common, 0x7b8cf75f, "");
SYMBOL_CRC(fbtft_remove_common, 0x3144d34c, "");
SYMBOL_CRC(fbtft_write_reg8_bus8, 0x36666ef8, "");
SYMBOL_CRC(fbtft_write_reg16_bus8, 0x11985dc1, "");
SYMBOL_CRC(fbtft_write_reg16_bus16, 0x7522079c, "");
SYMBOL_CRC(fbtft_write_reg8_bus9, 0x6e18a36b, "");
SYMBOL_CRC(fbtft_write_vmem16_bus8, 0x4fd47f57, "");
SYMBOL_CRC(fbtft_write_vmem16_bus9, 0x2cec9f77, "");
SYMBOL_CRC(fbtft_write_vmem8_bus8, 0x6cc88554, "");
SYMBOL_CRC(fbtft_write_vmem16_bus16, 0x5ca8df6f, "");
SYMBOL_CRC(fbtft_write_spi, 0xa6196524, "");
SYMBOL_CRC(fbtft_write_spi_emulate_9, 0xeb3295f2, "");
SYMBOL_CRC(fbtft_read_spi, 0x05527268, "");
SYMBOL_CRC(fbtft_write_gpio8_wr, 0xb2052f0a, "");
SYMBOL_CRC(fbtft_write_gpio16_wr, 0x0f0c0ec3, "");
SYMBOL_CRC(fbtft_write_gpio16_wr_latched, 0xea9a5d36, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4cc2fbd2, "unregister_framebuffer" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x49a2e97f, "param_ops_ulong" },
	{ 0xcd458c71, "backlight_device_unregister" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x77bc13a0, "strim" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x96848186, "scnprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb3058b55, "fb_deferred_io_init" },
	{ 0xc7271929, "fb_deferred_io_cleanup" },
	{ 0x7a9d63d0, "framebuffer_alloc" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x43650a37, "fb_sys_write" },
	{ 0xa2c8ab97, "sys_imageblit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0x6dcebf17, "sys_fillrect" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xee7a3241, "device_create_file" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xa41bd271, "of_match_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0xa0fffb26, "device_property_read_string" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb5d42d3e, "register_framebuffer" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcad93fec, "fb_deferred_io_mmap" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa548b29e, "sys_copyarea" },
	{ 0x999e8297, "vfree" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x433cb9ab, "backlight_device_register" },
	{ 0xb832fe45, "fb_sys_read" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xd044c193, "framebuffer_release" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf5365614, "devm_gpiod_get_index_optional" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "backlight");


MODULE_INFO(srcversion, "12B1B6A29003AA9D01167F6");
