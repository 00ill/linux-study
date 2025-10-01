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
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5c362e8, "i2c_unregister_device" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x669c413b, "_dev_err" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa60c35c2, "i2c_new_dummy_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x661f928c, "rc_register_device" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9128f4c2, "rc_keydown" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "5E6DFE345673C9FFE3CB965");
