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
	{ 0x71c90ddc, "single_open" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x669c413b, "_dev_err" },
	{ 0xdcb764ad, "memset" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x469438cc, "of_node_put" },
	{ 0x8f09f576, "of_device_is_compatible" },
	{ 0xd7dbf556, "of_property_read_u32_index" },
	{ 0x9a354cc, "devm_gpiod_get_array_optional" },
	{ 0xfa7dbf3f, "of_iomap" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0x7f60d880, "devm_gpiod_put_array" },
	{ 0xedc03953, "iounmap" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x828b8f68, "crypto_shash_update" },
	{ 0x6c311a85, "crypto_shash_digest" },
	{ 0xb19aaf1e, "crypto_shash_final" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x4d300d69, "__devm_spi_alloc_controller" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0xf39a6dab, "crypto_alloc_shash" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x7d0a187f, "devm_spi_register_controller" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x661256ad, "seq_read" },
	{ 0x10139ad8, "single_release" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rp2040-gpio-bridge");
MODULE_ALIAS("of:N*T*Craspberrypi,rp2040-gpio-bridgeC*");
MODULE_ALIAS("i2c:rp2040-gpio-bridge");

MODULE_INFO(srcversion, "037D9282FFE7C370F73D199");
