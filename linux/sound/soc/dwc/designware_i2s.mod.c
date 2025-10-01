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
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x53dcc4a9, "devm_platform_get_and_ioremap_resource" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x91e5a68d, "syscon_regmap_lookup_by_phandle_args" },
	{ 0x7763d7ce, "devm_reset_control_array_get" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0xef29fcdd, "clk_bulk_put" },
	{ 0x669c413b, "_dev_err" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x103afa42, "snd_pcm_hw_constraint_integer" },
	{ 0xaee2f445, "platform_get_irq_optional" },
	{ 0x955f3bc6, "snd_soc_set_runtime_hwparams" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2cd0b308, "devm_snd_dmaengine_pcm_register" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xb6caf056, "devm_clk_get_enabled" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd395caad, "clk_bulk_get" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Csnps,designware-i2s");
MODULE_ALIAS("of:N*T*Csnps,designware-i2sC*");
MODULE_ALIAS("of:N*T*Cstarfive,jh7110-i2stx0");
MODULE_ALIAS("of:N*T*Cstarfive,jh7110-i2stx0C*");
MODULE_ALIAS("of:N*T*Cstarfive,jh7110-i2stx1");
MODULE_ALIAS("of:N*T*Cstarfive,jh7110-i2stx1C*");
MODULE_ALIAS("of:N*T*Cstarfive,jh7110-i2srx");
MODULE_ALIAS("of:N*T*Cstarfive,jh7110-i2srxC*");

MODULE_INFO(srcversion, "CDABDCE5B7BF683F4D3F0B2");
