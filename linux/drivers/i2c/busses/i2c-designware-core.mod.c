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

KSYMTAB_FUNC(i2c_dw_fw_parse_and_configure, "_gpl", "I2C_DW_COMMON");
KSYMTAB_FUNC(i2c_dw_prepare_clk, "_gpl", "I2C_DW_COMMON");
KSYMTAB_FUNC(i2c_dw_disable, "_gpl", "I2C_DW_COMMON");
KSYMTAB_FUNC(i2c_dw_probe, "_gpl", "I2C_DW_COMMON");
KSYMTAB_DATA(i2c_dw_dev_pm_ops, "_gpl", "");
KSYMTAB_FUNC(i2c_dw_configure_master, "_gpl", "I2C_DW");
KSYMTAB_FUNC(i2c_dw_probe_master, "_gpl", "I2C_DW");

SYMBOL_CRC(i2c_dw_fw_parse_and_configure, 0xd390d9d5, "_gpl");
SYMBOL_CRC(i2c_dw_prepare_clk, 0xdebc33ca, "_gpl");
SYMBOL_CRC(i2c_dw_disable, 0x747ea351, "_gpl");
SYMBOL_CRC(i2c_dw_probe, 0x0beeea03, "_gpl");
SYMBOL_CRC(i2c_dw_dev_pm_ops, 0x87172c49, "_gpl");
SYMBOL_CRC(i2c_dw_configure_master, 0x15737351, "_gpl");
SYMBOL_CRC(i2c_dw_probe_master, 0x77ce5b83, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x4eea661, "devm_platform_ioremap_resource" },
	{ 0x8d1a1cb6, "of_fwnode_ops" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x68054572, "i2c_recover_bus" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x9dc6e8a, "i2c_generic_scl_recovery" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x8939688b, "device_set_node" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe7278cfd, "i2c_add_numbered_adapter" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xa1e5ca2, "i2c_parse_fw_timings" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3034b00c, "devm_pinctrl_get" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6962EB12764A3D09758945C");
