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

KSYMTAB_FUNC(rp1_pio_can_add_program, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_add_program, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_remove_program, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_clear_instr_mem, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_claim, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_unclaim, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_is_claimed, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_init, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_set_config, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_exec, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_clear_fifos, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_set_clkdiv, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_set_pins, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_set_pindirs, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_set_enabled, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_restart, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_clkdiv_restart, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_enable_sync, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_put, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_get, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_set_dmactrl, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_fifo_state, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_drain_tx, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_gpio_init, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_gpio_set_function, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_gpio_set_pulls, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_gpio_set_outover, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_gpio_set_inover, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_gpio_set_oeover, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_gpio_set_input_enabled, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_gpio_set_drive_strength, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_config_xfer, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_sm_xfer_data, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_open, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_close, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_set_error, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_get_error, "_gpl", "");
KSYMTAB_FUNC(rp1_pio_clear_error, "_gpl", "");

SYMBOL_CRC(rp1_pio_can_add_program, 0xf7f0329f, "_gpl");
SYMBOL_CRC(rp1_pio_add_program, 0xb478565a, "_gpl");
SYMBOL_CRC(rp1_pio_remove_program, 0x2b0285ec, "_gpl");
SYMBOL_CRC(rp1_pio_clear_instr_mem, 0x0756c152, "_gpl");
SYMBOL_CRC(rp1_pio_sm_claim, 0x2048a782, "_gpl");
SYMBOL_CRC(rp1_pio_sm_unclaim, 0xb5560f7d, "_gpl");
SYMBOL_CRC(rp1_pio_sm_is_claimed, 0x9eb8debd, "_gpl");
SYMBOL_CRC(rp1_pio_sm_init, 0xa426d5b4, "_gpl");
SYMBOL_CRC(rp1_pio_sm_set_config, 0x87fbfafb, "_gpl");
SYMBOL_CRC(rp1_pio_sm_exec, 0x78684f51, "_gpl");
SYMBOL_CRC(rp1_pio_sm_clear_fifos, 0x6f4ad0c8, "_gpl");
SYMBOL_CRC(rp1_pio_sm_set_clkdiv, 0xc4b7b24f, "_gpl");
SYMBOL_CRC(rp1_pio_sm_set_pins, 0x20e33dc4, "_gpl");
SYMBOL_CRC(rp1_pio_sm_set_pindirs, 0xe73f23fd, "_gpl");
SYMBOL_CRC(rp1_pio_sm_set_enabled, 0x00cb1a1a, "_gpl");
SYMBOL_CRC(rp1_pio_sm_restart, 0x3ee8314e, "_gpl");
SYMBOL_CRC(rp1_pio_sm_clkdiv_restart, 0xdbaef7af, "_gpl");
SYMBOL_CRC(rp1_pio_sm_enable_sync, 0x755d559e, "_gpl");
SYMBOL_CRC(rp1_pio_sm_put, 0xf9eeca06, "_gpl");
SYMBOL_CRC(rp1_pio_sm_get, 0xf0a11f01, "_gpl");
SYMBOL_CRC(rp1_pio_sm_set_dmactrl, 0xf43c6805, "_gpl");
SYMBOL_CRC(rp1_pio_sm_fifo_state, 0xf4b58c42, "_gpl");
SYMBOL_CRC(rp1_pio_sm_drain_tx, 0xe6b798fa, "_gpl");
SYMBOL_CRC(rp1_pio_gpio_init, 0x2f64a4f6, "_gpl");
SYMBOL_CRC(rp1_pio_gpio_set_function, 0xf3280aea, "_gpl");
SYMBOL_CRC(rp1_pio_gpio_set_pulls, 0xfa7dabb0, "_gpl");
SYMBOL_CRC(rp1_pio_gpio_set_outover, 0x23fdeb26, "_gpl");
SYMBOL_CRC(rp1_pio_gpio_set_inover, 0x6cdb68a9, "_gpl");
SYMBOL_CRC(rp1_pio_gpio_set_oeover, 0x8ccd4baa, "_gpl");
SYMBOL_CRC(rp1_pio_gpio_set_input_enabled, 0xf54bb4a1, "_gpl");
SYMBOL_CRC(rp1_pio_gpio_set_drive_strength, 0x5697dd56, "_gpl");
SYMBOL_CRC(rp1_pio_sm_config_xfer, 0x2dc1ffcb, "_gpl");
SYMBOL_CRC(rp1_pio_sm_xfer_data, 0xcad0b9cc, "_gpl");
SYMBOL_CRC(rp1_pio_open, 0x29925ff9, "_gpl");
SYMBOL_CRC(rp1_pio_close, 0xb103a745, "_gpl");
SYMBOL_CRC(rp1_pio_set_error, 0xba80b828, "_gpl");
SYMBOL_CRC(rp1_pio_get_error, 0x66f7631e, "_gpl");
SYMBOL_CRC(rp1_pio_clear_error, 0x05b56513, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x449ad0a7, "memcmp" },
	{ 0xcf2a6966, "up" },
	{ 0x37a0cba, "kfree" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x6775d5d3, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe36c448e, "of_alias_get_id" },
	{ 0xc143c387, "devm_rp1_firmware_get" },
	{ 0xe45534a3, "rp1_firmware_get_feature" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x53dcc4a9, "devm_platform_get_and_ioremap_resource" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x59c02473, "class_create" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4ae7394, "device_create" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x2b21d1e1, "dma_release_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4ac34dbd, "dma_request_chan" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0xf2926e01, "rp1_firmware_message" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rp1-fw");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1-pio");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1-pioC*");

MODULE_INFO(srcversion, "20BF2AFB4C9829DF67110D4");
