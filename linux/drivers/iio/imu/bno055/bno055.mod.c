#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(bno055_regmap_config, "_gpl", "IIO_BNO055");
KSYMTAB_FUNC(bno055_probe, "_gpl", "IIO_BNO055");

SYMBOL_CRC(bno055_regmap_config, 0x74020dc1, "_gpl");
SYMBOL_CRC(bno055_probe, 0xb6c00e8b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1c6e9142, "regcache_drop_region" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x5b1448b3, "iio_trigger_notify_done" },
	{ 0xf7a1c51e, "iio_push_to_buffers" },
	{ 0xf9a482f9, "msleep" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xe62942b0, "devm_clk_get_optional_enabled" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xf261f72a, "_dev_notice" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xcb7b8aa9, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0xf431c0a6, "iio_get_debugfs_dentry" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0x5d809a68, "simple_open" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "17EDF17FF09E162DE5538B7");
