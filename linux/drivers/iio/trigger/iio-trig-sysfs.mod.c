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
	{ 0x16965a52, "device_initialize" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x36dc6ece, "put_device" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5403b271, "iio_trigger_unregister" },
	{ 0x8e61091d, "irq_work_sync" },
	{ 0x205e3bd7, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d9e8944, "module_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8ab34ed9, "iio_trigger_poll" },
	{ 0xe90c91f, "irq_work_queue" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x59a9f358, "__iio_trigger_alloc" },
	{ 0xbff97efa, "iio_trigger_register" },
	{ 0xd8940511, "__module_get" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0xb52f31ba, "iio_bus_type" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "E6D55EB9ACC474CB8B0DC1D");
