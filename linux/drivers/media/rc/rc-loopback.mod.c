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
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x661f928c, "rc_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0xc81c4ea7, "ir_raw_event_store_with_filter" },
	{ 0x219c9b83, "ir_raw_event_store" },
	{ 0x4a569ebc, "ir_raw_event_handle" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x1098f88, "ir_raw_encode_scancode" },
	{ 0x37a0cba, "kfree" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "00EEFB5C5D0151EF7D93024");
