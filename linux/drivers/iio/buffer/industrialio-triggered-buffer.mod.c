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

KSYMTAB_FUNC(iio_triggered_buffer_setup_ext, "", "");
KSYMTAB_FUNC(iio_triggered_buffer_cleanup, "", "");
KSYMTAB_FUNC(devm_iio_triggered_buffer_setup_ext, "_gpl", "");

SYMBOL_CRC(iio_triggered_buffer_setup_ext, 0xab10f750, "");
SYMBOL_CRC(iio_triggered_buffer_cleanup, 0xd579a247, "");
SYMBOL_CRC(devm_iio_triggered_buffer_setup_ext, 0xcb7b8aa9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x74a1807c, "iio_kfifo_allocate" },
	{ 0x21b473b6, "iio_device_id" },
	{ 0x3d6eb20d, "iio_alloc_pollfunc" },
	{ 0x1072f0db, "iio_device_attach_buffer" },
	{ 0xbfa58fcc, "iio_kfifo_free" },
	{ 0x1c287816, "iio_dealloc_pollfunc" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "83931E8CFA427C40CA53704");
