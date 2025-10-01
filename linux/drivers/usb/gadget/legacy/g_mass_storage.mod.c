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
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0xb015117d, "usb_get_function_instance" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x13ef8f99, "usb_string_ids_tab" },
	{ 0x37a0cba, "kfree" },
	{ 0x5ca53377, "usb_get_function" },
	{ 0xe7d5be69, "usb_composite_unregister" },
	{ 0x53112ce3, "usb_put_function" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd85d013a, "usb_add_function" },
	{ 0x7ba0f654, "usb_composite_probe" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb1bbb287, "usb_composite_overwrite_options" },
	{ 0x3a7652c8, "usb_put_function_instance" },
	{ 0x82b6c60b, "fsg_common_set_cdev" },
	{ 0xdcb764ad, "memset" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0x12de885e, "usb_add_config" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usb_f_mass_storage,libcomposite");


MODULE_INFO(srcversion, "ACBA96CE3B483C403E2C9FB");
