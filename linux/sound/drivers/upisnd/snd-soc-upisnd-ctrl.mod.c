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
	{ 0x281823c5, "__kfifo_out_peek" },
	{ 0xd7b39c37, "adau1961_is_hp_capless" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x51e39634, "gpiochip_request_own_desc" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xd44e7bce, "snd_rawmidi_transmit_empty" },
	{ 0x35498050, "snd_soc_register_card" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x469438cc, "of_node_put" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x42d820de, "snd_soc_dai_set_tdm_slot" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xda98d9d6, "adau1961_set_vgnd_shorted" },
	{ 0x285c647d, "gpiod_export" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0xb6841069, "kset_unregister" },
	{ 0xce1525a4, "snd_card_rw_proc_new" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x304e7bbf, "sysfs_notify" },
	{ 0x9c5d5b94, "crc8" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x36dc6ece, "put_device" },
	{ 0xdf850618, "snd_rawmidi_transmit_ack" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x61651be, "strcat" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0xb2491898, "gpiochip_free_own_desc" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xc4ec99cd, "bus_find_device" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdfa58c18, "snd_soc_unregister_card" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7195ba4d, "snd_rawmidi_transmit_peek" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xe58ce88c, "devm_gpiod_get_index" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x2d5b0050, "kobject_init_and_add" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb76aa100, "i2c_bus_type" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x89426a62, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x853bcf02, "snd_rawmidi_set_ops" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf9b89832, "kset_find_obj" },
	{ 0x6080511e, "kobject_set_name" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x32700730, "kobject_uevent" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x704e841b, "kset_register" },
	{ 0x168a52f7, "irq_of_parse_and_map" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x53b954a2, "up_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3a10d37a, "kobject_get" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x5c26a53b, "wait_for_completion_io_timeout" },
	{ 0x67b68af, "kset_create_and_add" },
	{ 0x317df83, "kobject_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-upisnd-codec,snd-rawmidi,snd-soc-core,snd,crc8");

MODULE_ALIAS("i2c:blokas,upisnd-ctrl");
MODULE_ALIAS("of:N*T*Cblokas,upisnd-ctrl");
MODULE_ALIAS("of:N*T*Cblokas,upisnd-ctrlC*");
MODULE_ALIAS("of:N*T*Cblokas,pisound-micro");
MODULE_ALIAS("of:N*T*Cblokas,pisound-microC*");

MODULE_INFO(srcversion, "74A1B3B9ECD0F3FE981515F");
