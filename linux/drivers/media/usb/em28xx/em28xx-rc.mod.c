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
	{ 0x99c44b73, "input_allocate_device" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1ff3d80, "em28xx_write_reg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5ff003b0, "i2c_probe_func_quick_read" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xb727b479, "input_free_device" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0xeff886a7, "em28xx_write_reg_bits" },
	{ 0x661f928c, "rc_register_device" },
	{ 0xa6107fa3, "em28xx_unregister_extension" },
	{ 0x9128f4c2, "rc_keydown" },
	{ 0xbfa8ec75, "em28xx_toggle_reg_bits" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x591e5fc2, "em28xx_find_led" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x41cc93f6, "input_event" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x9f63cedb, "em28xx_register_extension" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc3a664eb, "em28xx_write_regs" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x374647f3, "_dev_printk" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xf8c2b5a7, "em28xx_read_reg" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "em28xx");


MODULE_INFO(srcversion, "1DA918012E5ED8C35235181");
