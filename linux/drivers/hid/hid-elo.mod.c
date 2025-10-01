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
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x41cc93f6, "input_event" },
	{ 0x630a82d3, "hid_is_usb" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf4c39b28, "usb_hub_find_child" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004E7p00000009");
MODULE_ALIAS("hid:b0003g*v000004E7p00000030");

MODULE_INFO(srcversion, "8963A560A9B15C561BA7DDC");
