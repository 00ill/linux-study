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
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0x60f37a71, "hid_alloc_report_buf" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xb727b479, "input_free_device" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0x6e527b0a, "hid_parse_report" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0xaf0660c0, "param_set_bool" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x85d4ff86, "power_supply_register" },
	{ 0x84fc3420, "power_supply_powers" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3925304c, "power_supply_unregister" },
	{ 0xc69639d5, "hid_destroy_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x6d77e136, "hid_hw_open" },
	{ 0x74b5d32f, "hid_allocate_device" },
	{ 0xb19d3a3e, "hid_add_device" },
	{ 0xfd444e73, "hid_input_report" },
	{ 0x41cc93f6, "input_event" },
	{ 0x12437bc7, "power_supply_changed" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x19d347dd, "param_get_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");
MODULE_ALIAS("hid:b0003g*v000028DEp00001205");

MODULE_INFO(srcversion, "6DFE5D52166FCFBD9C07C1C");
