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
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb6092a57, "input_mt_sync_frame" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x64433362, "input_mt_report_pointer_emulation" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x78663f7e, "hid_register_report" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xde3f8b9d, "hid_hw_request" },
	{ 0xa4e2ea7d, "param_get_uint" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000269");
MODULE_ALIAS("hid:b0003g*v000005ACp00000269");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000265");
MODULE_ALIAS("hid:b0003g*v000005ACp00000265");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000324");
MODULE_ALIAS("hid:b0003g*v000005ACp00000324");

MODULE_INFO(srcversion, "13D0C620F3E65B678507654");
