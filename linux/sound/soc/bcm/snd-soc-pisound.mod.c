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
	{ 0xe914e41e, "strcpy" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0x15058ed7, "gpiod_put" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x35498050, "snd_soc_register_card" },
	{ 0x469438cc, "of_node_put" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa458afe9, "gpiod_get_index" },
	{ 0xc00e0644, "snd_pcm_hw_constraint_minmax" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xcc429b8f, "kernel_kobj" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36dc6ece, "put_device" },
	{ 0xdf850618, "snd_rawmidi_transmit_ack" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xc4ec99cd, "bus_find_device" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdfa58c18, "snd_soc_unregister_card" },
	{ 0x97b22b6a, "spi_bus_type" },
	{ 0x2092cf46, "gpiod_direction_input" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7195ba4d, "snd_rawmidi_transmit_peek" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0xdcb764ad, "memset" },
	{ 0x7fca93ba, "snd_pcm_hw_constraint_mask64" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xad811a0a, "kobject_create_and_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x853bcf02, "snd_rawmidi_set_ops" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x317df83, "kobject_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-soc-core,snd,snd-pcm");

MODULE_ALIAS("of:N*T*Cblokaslabs,pisound");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisoundC*");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spi");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spiC*");

MODULE_INFO(srcversion, "BB3B74CE93CF7FACECEDB24");
