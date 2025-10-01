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
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xab0ea0f, "au8522_release_state" },
	{ 0x89c0507d, "au8522_get_state" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x65d0306e, "au8522_writereg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x14051359, "au8522_readreg" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x56026f88, "v4l2_ctrl_subdev_log_status" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,au8522_common,mc");

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "4ED5C93D9A70F8255FE1CAF");
