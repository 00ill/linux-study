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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x27271c6b, "cdev_del" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb103a745, "rp1_pio_close" },
	{ 0x6775d5d3, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcad0b9cc, "rp1_pio_sm_xfer_data" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdcb764ad, "memset" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xb478565a, "rp1_pio_add_program" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x8f09f576, "of_device_is_compatible" },
	{ 0x469438cc, "of_node_put" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0x29925ff9, "rp1_pio_open" },
	{ 0x2048a782, "rp1_pio_sm_claim" },
	{ 0x2dc1ffcb, "rp1_pio_sm_config_xfer" },
	{ 0x6f4ad0c8, "rp1_pio_sm_clear_fifos" },
	{ 0xc4b7b24f, "rp1_pio_sm_set_clkdiv" },
	{ 0x2f64a4f6, "rp1_pio_gpio_init" },
	{ 0xf3280aea, "rp1_pio_gpio_set_function" },
	{ 0xa426d5b4, "rp1_pio_sm_init" },
	{ 0xcb1a1a, "rp1_pio_sm_set_enabled" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x59c02473, "class_create" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x4ae7394, "device_create" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe73f23fd, "rp1_pio_sm_set_pindirs" },
	{ 0xba80b828, "rp1_pio_set_error" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rp1-pio");

MODULE_ALIAS("of:N*T*Craspberrypi,ws2812-pio-rp1");
MODULE_ALIAS("of:N*T*Craspberrypi,ws2812-pio-rp1C*");

MODULE_INFO(srcversion, "693FEAC55E62E1705C204AE");
