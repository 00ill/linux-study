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
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xf3d2ce77, "snd_soc_limit_volume" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcfd51e72, "snd_soc_dai_set_bclk_ratio" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x98348416, "devm_snd_soc_register_card" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadc");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcC*");

MODULE_INFO(srcversion, "CC13FD909854121A3D6D0BE");
