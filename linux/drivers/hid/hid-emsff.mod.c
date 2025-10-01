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
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0xde3f8b9d, "hid_hw_request" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x6a35ed2, "input_ff_create_memless" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v00002006p00000118");

MODULE_INFO(srcversion, "17284268322DA54BCC58FD2");
