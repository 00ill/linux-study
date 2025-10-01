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
	{ 0x3d2deda3, "__serio_register_driver" },
	{ 0x1f2d1566, "serio_close" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x41cc93f6, "input_event" },
	{ 0x429ac205, "serio_unregister_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x36bb6003, "serio_open" },
	{ 0xb727b479, "input_free_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "serio");

MODULE_ALIAS("serio:ty02pr42id*ex*");

MODULE_INFO(srcversion, "2040749EB102A067D44DC02");
