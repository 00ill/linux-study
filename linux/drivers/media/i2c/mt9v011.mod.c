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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x122c3a7e, "_printk" },
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x89fe0b01, "__v4l2_subdev_state_get_format" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:mt9v011");

MODULE_INFO(srcversion, "C68EF240E7EF1704A392AFB");
