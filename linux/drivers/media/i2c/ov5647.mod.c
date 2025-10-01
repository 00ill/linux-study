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
	{ 0x33297427, "v4l2_async_unregister_subdev" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x89fe0b01, "__v4l2_subdev_state_get_format" },
	{ 0xfd9ee7fe, "__v4l2_subdev_state_get_crop" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0xa2eb131b, "__v4l2_ctrl_modify_range" },
	{ 0x3ac81b38, "__v4l2_ctrl_s_ctrl" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x6d58ceba, "__v4l2_ctrl_handler_setup" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd1b9afa6, "pm_runtime_get_if_in_use" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x8b5f7abc, "of_graph_get_endpoint_by_regs" },
	{ 0xa6d71c96, "v4l2_fwnode_endpoint_parse" },
	{ 0x469438cc, "of_node_put" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x1ae48415, "v4l2_ctrl_new_std_menu" },
	{ 0x133d5f87, "v4l2_ctrl_new_std_menu_items" },
	{ 0x9e781eac, "v4l2_ctrl_new_int_menu" },
	{ 0xdbd31f73, "v4l2_fwnode_device_parse" },
	{ 0x4f66b8c7, "v4l2_ctrl_new_fwnode_properties" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x9676abff, "v4l2_async_register_subdev_sensor" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x626c1dc6, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xfe616670, "v4l2_event_subdev_unsubscribe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async,videodev,v4l2-fwnode,mc");

MODULE_ALIAS("of:N*T*Covti,ov5647");
MODULE_ALIAS("of:N*T*Covti,ov5647C*");
MODULE_ALIAS("i2c:ov5647");

MODULE_INFO(srcversion, "303EB300B461EA821E45365");
