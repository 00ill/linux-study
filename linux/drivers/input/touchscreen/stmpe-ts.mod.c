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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xe031e584, "stmpe_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x84213325, "stmpe_set_bits" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x33537d42, "stmpe_block_read" },
	{ 0x21ef3229, "touchscreen_report_pos" },
	{ 0x41cc93f6, "input_event" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x439f656c, "platform_get_irq_byname" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x28ed1bed, "stmpe_enable" },
	{ 0x13006337, "stmpe811_adc_common_init" },
	{ 0xdb536eab, "stmpe_reg_write" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xcc61903, "touchscreen_parse_properties" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x228466ca, "stmpe_reg_read" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,stmpe-ts");
MODULE_ALIAS("of:N*T*Cst,stmpe-tsC*");

MODULE_INFO(srcversion, "A623AFBB261678A6102B88F");
