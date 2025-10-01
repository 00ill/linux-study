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
	{ 0x89fe0b01, "__v4l2_subdev_state_get_format" },
	{ 0x3ac81b38, "__v4l2_ctrl_s_ctrl" },
	{ 0xa2eb131b, "__v4l2_ctrl_modify_range" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x669c413b, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa41c47e5, "devm_cci_regmap_init_i2c" },
	{ 0xdcb764ad, "memset" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x3383ea7b, "fwnode_graph_get_next_endpoint" },
	{ 0xc95ea0f9, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xce5bb82a, "v4l2_fwnode_endpoint_free" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0xdbd31f73, "v4l2_fwnode_device_parse" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x9e781eac, "v4l2_ctrl_new_int_menu" },
	{ 0x133d5f87, "v4l2_ctrl_new_std_menu_items" },
	{ 0xf27b4bb9, "v4l2_ctrl_cluster" },
	{ 0x4f66b8c7, "v4l2_ctrl_new_fwnode_properties" },
	{ 0x247cff22, "__v4l2_subdev_init_finalize" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7f18c891, "v4l2_i2c_subdev_set_name" },
	{ 0x8444a114, "__v4l2_async_register_subdev" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x15be55ad, "v4l2_subdev_cleanup" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbed9e63e, "cci_write" },
	{ 0xd1b9afa6, "pm_runtime_get_if_in_use" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x33297427, "v4l2_async_unregister_subdev" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x9bf4bfe3, "cci_multi_reg_write" },
	{ 0x6d58ceba, "__v4l2_ctrl_handler_setup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xc90aa5df, "__v4l2_ctrl_grab" },
	{ 0x580fd1bb, "v4l2_subdev_link_validate" },
	{ 0xd523ea7, "v4l2_subdev_get_fmt" },
	{ 0x626c1dc6, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xfe616670, "v4l2_event_subdev_unsubscribe" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-cci,v4l2-fwnode,mc,v4l2-async");

MODULE_ALIAS("of:N*T*Csony,imx290");
MODULE_ALIAS("of:N*T*Csony,imx290C*");
MODULE_ALIAS("of:N*T*Csony,imx290lqr");
MODULE_ALIAS("of:N*T*Csony,imx290lqrC*");
MODULE_ALIAS("of:N*T*Csony,imx290llr");
MODULE_ALIAS("of:N*T*Csony,imx290llrC*");
MODULE_ALIAS("of:N*T*Csony,imx327lqr");
MODULE_ALIAS("of:N*T*Csony,imx327lqrC*");
MODULE_ALIAS("of:N*T*Csony,imx462lqr");
MODULE_ALIAS("of:N*T*Csony,imx462lqrC*");
MODULE_ALIAS("of:N*T*Csony,imx462llr");
MODULE_ALIAS("of:N*T*Csony,imx462llrC*");

MODULE_INFO(srcversion, "0CFFA43D7738EE4CFA53182");
