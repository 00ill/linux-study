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
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x6b9b40e, "i2c_get_adapter" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xf3d2ce77, "snd_soc_limit_volume" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x50c7e6ee, "of_find_compatible_node" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xf265423a, "of_changeset_action" },
	{ 0xaff77e28, "i2c_smbus_read_byte" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0xaad5afda, "i2c_put_adapter" },
	{ 0x8935b329, "snd_soc_add_card_controls" },
	{ 0x696f2b63, "of_changeset_init" },
	{ 0x3c2b68f7, "of_changeset_apply" },
	{ 0x98348416, "devm_snd_soc_register_card" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplus");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusC*");

MODULE_INFO(srcversion, "3CA881414BE596957AD9AD0");
