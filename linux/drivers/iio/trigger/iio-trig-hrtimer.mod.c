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
	{ 0x3732d676, "iio_register_sw_trigger_type" },
	{ 0x5403b271, "iio_trigger_unregister" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x205e3bd7, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dce7dd4, "iio_format_value" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x4d5c1754, "iio_unregister_sw_trigger_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x59a9f358, "__iio_trigger_alloc" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xbff97efa, "iio_trigger_register" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0x8ab34ed9, "iio_trigger_poll" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio-sw-trigger,industrialio");


MODULE_INFO(srcversion, "26DAE31E1F737B2E0E5683D");
