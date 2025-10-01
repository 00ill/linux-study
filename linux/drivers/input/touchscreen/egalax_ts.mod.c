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
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0x64433362, "input_mt_report_pointer_emulation" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x9143db32, "gpiod_get" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x2092cf46, "gpiod_direction_input" },
	{ 0x15058ed7, "gpiod_put" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,egalax_ts");
MODULE_ALIAS("of:N*T*Ceeti,egalax_tsC*");
MODULE_ALIAS("i2c:egalax_ts");

MODULE_INFO(srcversion, "367D147BEE5155D8DEFC284");
