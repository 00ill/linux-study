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
	{ 0x9143db32, "gpiod_get" },
	{ 0x281823c5, "__kfifo_out_peek" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0x15058ed7, "gpiod_put" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xd44e7bce, "snd_rawmidi_transmit_empty" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce1525a4, "snd_card_rw_proc_new" },
	{ 0xe368aa76, "gpiod_toggle_active_low" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0x9c5d5b94, "crc8" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd71fb816, "devm_free_irq" },
	{ 0xdf850618, "snd_rawmidi_transmit_ack" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x306f753, "snd_card_new" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x2092cf46, "gpiod_direction_input" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7195ba4d, "snd_rawmidi_transmit_peek" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xb1518e15, "cancel_work" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x853bcf02, "snd_rawmidi_set_ops" },
	{ 0x5789e9b7, "gpiod_is_active_low" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xc29bf967, "strspn" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c26a53b, "wait_for_completion_io_timeout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd,crc8");

MODULE_ALIAS("of:N*T*Cblokaslabs,pimidi");
MODULE_ALIAS("of:N*T*Cblokaslabs,pimidiC*");
MODULE_ALIAS("i2c:pimidi");

MODULE_INFO(srcversion, "1A85D6C85A7EE8523E03331");
