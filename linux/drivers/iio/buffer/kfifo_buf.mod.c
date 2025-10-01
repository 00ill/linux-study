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

KSYMTAB_FUNC(iio_kfifo_allocate, "", "");
KSYMTAB_FUNC(iio_kfifo_free, "", "");
KSYMTAB_FUNC(devm_iio_kfifo_buffer_setup_ext, "_gpl", "");

SYMBOL_CRC(iio_kfifo_allocate, 0x74a1807c, "");
SYMBOL_CRC(iio_kfifo_free, 0xbfa58fcc, "");
SYMBOL_CRC(devm_iio_kfifo_buffer_setup_ext, 0xb357fc4e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x30a80826, "__kfifo_from_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xe2964344, "__wake_up" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x48041a47, "iio_buffer_put" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x1cac64bd, "iio_buffer_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0xde5315ca, "devres_add" },
	{ 0x1072f0db, "iio_device_attach_buffer" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "6860102B30E7AEB16C5C2C1");
