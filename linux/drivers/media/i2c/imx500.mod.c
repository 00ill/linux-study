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
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x669c413b, "_dev_err" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x89e8fd53, "devm_gpiod_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x71c90ddc, "single_open" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfd9ee7fe, "__v4l2_subdev_state_get_crop" },
	{ 0x89fe0b01, "__v4l2_subdev_state_get_format" },
	{ 0xa2eb131b, "__v4l2_ctrl_modify_range" },
	{ 0x3ac81b38, "__v4l2_ctrl_s_ctrl" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0xbed9e63e, "cci_write" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x40ef4f7d, "cci_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x80e6e08c, "find_cpio_data" },
	{ 0xdcb764ad, "memset" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x3383ea7b, "fwnode_graph_get_next_endpoint" },
	{ 0xc95ea0f9, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xce5bb82a, "v4l2_fwnode_endpoint_free" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x92893115, "driver_unregister" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x999e8297, "vfree" },
	{ 0xd24101e7, "v4l2_ctrl_activate" },
	{ 0xfbbe1c93, "device_match_of_node" },
	{ 0x97b22b6a, "spi_bus_type" },
	{ 0xc4ec99cd, "bus_find_device" },
	{ 0x469438cc, "of_node_put" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa41c47e5, "devm_cci_regmap_init_i2c" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x9e781eac, "v4l2_ctrl_new_int_menu" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0xdbd31f73, "v4l2_fwnode_device_parse" },
	{ 0x4f66b8c7, "v4l2_ctrl_new_fwnode_properties" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x9676abff, "v4l2_async_register_subdev_sensor" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x36dc6ece, "put_device" },
	{ 0x33297427, "v4l2_async_unregister_subdev" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xd1b9afa6, "pm_runtime_get_if_in_use" },
	{ 0x9bf4bfe3, "cci_multi_reg_write" },
	{ 0x7cd7ba1d, "kernel_read_file_from_fd" },
	{ 0xc90aa5df, "__v4l2_ctrl_grab" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x6d58ceba, "__v4l2_ctrl_handler_setup" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x661256ad, "seq_read" },
	{ 0x10139ad8, "single_release" },
	{ 0x626c1dc6, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xfe616670, "v4l2_event_subdev_unsubscribe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-cci,v4l2-fwnode,mc,v4l2-async");

MODULE_ALIAS("spi:imx500");
MODULE_ALIAS("of:N*T*Csony,imx500");
MODULE_ALIAS("of:N*T*Csony,imx500C*");

MODULE_INFO(srcversion, "1B31296ADE2FF55B8B95F24");
