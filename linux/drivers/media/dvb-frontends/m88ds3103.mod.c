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

KSYMTAB_FUNC(m88ds3103_get_agc_pwm, "", "");
KSYMTAB_FUNC(m88ds3103_attach, "_gpl", "");

SYMBOL_CRC(m88ds3103_get_agc_pwm, 0x7dbf9a51, "");
SYMBOL_CRC(m88ds3103_attach, 0x6368f70f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x5390eff6, "i2c_new_client_device" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x5c362e8, "i2c_unregister_device" },
	{ 0x649b3692, "i2c_mux_del_adapters" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8733236, "intlog10" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x669c413b, "_dev_err" },
	{ 0xa0f62c1e, "__i2c_transfer" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x760c9fbb, "i2c_mux_alloc" },
	{ 0xde29233a, "i2c_mux_add_adapter" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa60c35c2, "i2c_new_dummy_device" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xf2413f61, "regmap_multi_reg_write" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux,regmap-i2c");

MODULE_ALIAS("i2c:m88ds3103");
MODULE_ALIAS("i2c:m88rs6000");
MODULE_ALIAS("i2c:m88ds3103b");

MODULE_INFO(srcversion, "DEA8FD79C767843373D70DC");
