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

KSYMTAB_FUNC(sps30_probe, "_gpl", "IIO_SPS30");

SYMBOL_CRC(sps30_probe, 0xe71fc14e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe783e261, "sysfs_emit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xcb7b8aa9, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "3DFBB45960952DBA3F6F59C");
