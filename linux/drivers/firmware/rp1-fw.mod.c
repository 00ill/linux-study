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

KSYMTAB_FUNC(rp1_firmware_message, "_gpl", "");
KSYMTAB_FUNC(rp1_firmware_put, "_gpl", "");
KSYMTAB_FUNC(rp1_firmware_get_feature, "_gpl", "");
KSYMTAB_FUNC(rp1_firmware_get, "_gpl", "");
KSYMTAB_FUNC(devm_rp1_firmware_get, "_gpl", "");

SYMBOL_CRC(rp1_firmware_message, 0xf2926e01, "_gpl");
SYMBOL_CRC(rp1_firmware_put, 0x94aca951, "_gpl");
SYMBOL_CRC(rp1_firmware_get_feature, 0xe45534a3, "_gpl");
SYMBOL_CRC(rp1_firmware_get, 0x003defb6, "_gpl");
SYMBOL_CRC(devm_rp1_firmware_get, 0xc143c387, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xe466271e, "mbox_send_message" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xa6257a2f, "complete" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x8f09f576, "of_device_is_compatible" },
	{ 0x35908cc9, "of_find_device_by_node" },
	{ 0x469438cc, "of_node_put" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x36dc6ece, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x820287fa, "mbox_free_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x2c238875, "of_address_to_resource" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x527df72c, "devm_ioremap" },
	{ 0x49863bda, "mbox_request_channel" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1-firmware");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1-firmwareC*");

MODULE_INFO(srcversion, "57FE6FE4B41A722ED315B56");
