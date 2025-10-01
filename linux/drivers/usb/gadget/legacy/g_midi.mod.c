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
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0xb015117d, "usb_get_function_instance" },
	{ 0x13ef8f99, "usb_string_ids_tab" },
	{ 0x5ca53377, "usb_get_function" },
	{ 0xe7d5be69, "usb_composite_unregister" },
	{ 0x53112ce3, "usb_put_function" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd85d013a, "usb_add_function" },
	{ 0x7ba0f654, "usb_composite_probe" },
	{ 0xb1bbb287, "usb_composite_overwrite_options" },
	{ 0x3a7652c8, "usb_put_function_instance" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x12de885e, "usb_add_config" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "68FAFF9AA45F656E1FDA28F");
