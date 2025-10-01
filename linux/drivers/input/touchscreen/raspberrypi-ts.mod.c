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
	{ 0xdcb764ad, "memset" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0xb6092a57, "input_mt_sync_frame" },
	{ 0x21ef3229, "touchscreen_report_pos" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x692bdce9, "of_get_parent" },
	{ 0xdd0c3387, "devm_rpi_firmware_get" },
	{ 0x469438cc, "of_node_put" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x669c413b, "_dev_err" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xcc61903, "touchscreen_parse_properties" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0xda91c459, "input_setup_polling" },
	{ 0xf11817cb, "input_set_poll_interval" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-ts");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-tsC*");

MODULE_INFO(srcversion, "1E5687FB1917709C6064492");
