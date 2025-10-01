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
	{ 0xdcb764ad, "memset" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5227fda3, "cec_unregister_adapter" },
	{ 0x33297427, "v4l2_async_unregister_subdev" },
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x9725ccf0, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x626c1dc6, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdb1edee6, "hdmi_infoframe_unpack" },
	{ 0x72a33d5d, "hdmi_infoframe_log" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3ac81b38, "__v4l2_ctrl_s_ctrl" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfecf197a, "v4l2_subdev_notify_event" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0x3dfb7db, "cec_s_phys_addr" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x8b5f7abc, "of_graph_get_endpoint_by_regs" },
	{ 0xc95ea0f9, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce5bb82a, "v4l2_fwnode_endpoint_free" },
	{ 0x469438cc, "of_node_put" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x462aedb0, "cec_register_adapter" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8444a114, "__v4l2_async_register_subdev" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x327c9a5d, "cec_delete_adapter" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x815588a6, "clk_enable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfe616670, "v4l2_event_subdev_unsubscribe" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cec,v4l2-async,videodev,v4l2-dv-timings,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Ctoshiba,tc358743");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358743C*");
MODULE_ALIAS("i2c:tc358743");

MODULE_INFO(srcversion, "56F25AD78A06B14729E7DF6");
