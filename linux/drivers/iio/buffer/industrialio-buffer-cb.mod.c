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

KSYMTAB_FUNC(iio_channel_get_all_cb, "_gpl", "");
KSYMTAB_FUNC(iio_channel_cb_set_buffer_watermark, "_gpl", "");
KSYMTAB_FUNC(iio_channel_start_all_cb, "_gpl", "");
KSYMTAB_FUNC(iio_channel_stop_all_cb, "_gpl", "");
KSYMTAB_FUNC(iio_channel_release_all_cb, "_gpl", "");
KSYMTAB_FUNC(iio_channel_cb_get_channels, "_gpl", "");
KSYMTAB_FUNC(iio_channel_cb_get_iio_dev, "_gpl", "");

SYMBOL_CRC(iio_channel_get_all_cb, 0xde5465c2, "_gpl");
SYMBOL_CRC(iio_channel_cb_set_buffer_watermark, 0x9acf62ab, "_gpl");
SYMBOL_CRC(iio_channel_start_all_cb, 0x7a711aef, "_gpl");
SYMBOL_CRC(iio_channel_stop_all_cb, 0x2a1fab3c, "_gpl");
SYMBOL_CRC(iio_channel_release_all_cb, 0x267c0508, "_gpl");
SYMBOL_CRC(iio_channel_cb_get_channels, 0xb51946f2, "_gpl");
SYMBOL_CRC(iio_channel_cb_get_iio_dev, 0xe6494c63, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f97afba, "iio_update_buffers" },
	{ 0x34dfd43f, "iio_channel_release_all" },
	{ 0x48041a47, "iio_buffer_put" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x1cac64bd, "iio_buffer_init" },
	{ 0x82bbb77e, "iio_channel_get_all" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "123098293507E7A1F5DCE8E");
