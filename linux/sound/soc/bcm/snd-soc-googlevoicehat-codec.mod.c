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
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xc1e6e422, "snd_soc_unregister_component" },
	{ 0x669c413b, "_dev_err" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x666f5d9, "snd_soc_register_component" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cgoogle,voicehat");
MODULE_ALIAS("of:N*T*Cgoogle,voicehatC*");

MODULE_INFO(srcversion, "2EFFFB7A3EA2E793E4775C0");
