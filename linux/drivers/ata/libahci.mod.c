#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(ahci_ignore_sss, "_gpl", "");
KSYMTAB_DATA(ahci_shost_groups, "_gpl", "");
KSYMTAB_DATA(ahci_sdev_groups, "_gpl", "");
KSYMTAB_DATA(ahci_ops, "_gpl", "");
KSYMTAB_DATA(ahci_pmp_retry_srst_ops, "_gpl", "");
KSYMTAB_FUNC(ahci_save_initial_config, "_gpl", "");
KSYMTAB_FUNC(ahci_start_engine, "_gpl", "");
KSYMTAB_FUNC(ahci_stop_engine, "_gpl", "");
KSYMTAB_FUNC(ahci_start_fis_rx, "_gpl", "");
KSYMTAB_FUNC(ahci_reset_controller, "_gpl", "");
KSYMTAB_FUNC(ahci_reset_em, "_gpl", "");
KSYMTAB_FUNC(ahci_init_controller, "_gpl", "");
KSYMTAB_FUNC(ahci_dev_classify, "_gpl", "");
KSYMTAB_FUNC(ahci_fill_cmd_slot, "_gpl", "");
KSYMTAB_FUNC(ahci_kick_engine, "_gpl", "");
KSYMTAB_FUNC(ahci_check_ready, "_gpl", "");
KSYMTAB_FUNC(ahci_do_softreset, "_gpl", "");
KSYMTAB_FUNC(ahci_do_hardreset, "_gpl", "");
KSYMTAB_FUNC(ahci_handle_port_intr, "_gpl", "");
KSYMTAB_FUNC(ahci_qc_issue, "_gpl", "");
KSYMTAB_FUNC(ahci_error_handler, "_gpl", "");
KSYMTAB_FUNC(ahci_port_resume, "_gpl", "");
KSYMTAB_FUNC(ahci_print_info, "_gpl", "");
KSYMTAB_FUNC(ahci_set_em_messages, "_gpl", "");
KSYMTAB_FUNC(ahci_host_activate, "_gpl", "");

SYMBOL_CRC(ahci_ignore_sss, 0xea50dad3, "_gpl");
SYMBOL_CRC(ahci_shost_groups, 0x0711a4a2, "_gpl");
SYMBOL_CRC(ahci_sdev_groups, 0x883e5eac, "_gpl");
SYMBOL_CRC(ahci_ops, 0xc55afc1d, "_gpl");
SYMBOL_CRC(ahci_pmp_retry_srst_ops, 0x594c6f24, "_gpl");
SYMBOL_CRC(ahci_save_initial_config, 0x28d70be5, "_gpl");
SYMBOL_CRC(ahci_start_engine, 0x22287147, "_gpl");
SYMBOL_CRC(ahci_stop_engine, 0x8f04bfc9, "_gpl");
SYMBOL_CRC(ahci_start_fis_rx, 0x63d80239, "_gpl");
SYMBOL_CRC(ahci_reset_controller, 0x6d55783e, "_gpl");
SYMBOL_CRC(ahci_reset_em, 0x4f5dfdc8, "_gpl");
SYMBOL_CRC(ahci_init_controller, 0x4f695da6, "_gpl");
SYMBOL_CRC(ahci_dev_classify, 0x40cacdb2, "_gpl");
SYMBOL_CRC(ahci_fill_cmd_slot, 0x9965797e, "_gpl");
SYMBOL_CRC(ahci_kick_engine, 0xb2689ac2, "_gpl");
SYMBOL_CRC(ahci_check_ready, 0x498285d9, "_gpl");
SYMBOL_CRC(ahci_do_softreset, 0x465d62fa, "_gpl");
SYMBOL_CRC(ahci_do_hardreset, 0xba427214, "_gpl");
SYMBOL_CRC(ahci_handle_port_intr, 0x3ca71f36, "_gpl");
SYMBOL_CRC(ahci_qc_issue, 0x398c6613, "_gpl");
SYMBOL_CRC(ahci_error_handler, 0xb722e6f2, "_gpl");
SYMBOL_CRC(ahci_port_resume, 0x005f093b, "_gpl");
SYMBOL_CRC(ahci_print_info, 0xa99f5bcb, "_gpl");
SYMBOL_CRC(ahci_set_em_messages, 0x331a0e0a, "_gpl");
SYMBOL_CRC(ahci_host_activate, 0xdc7694b8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x278cc9fd, "ata_link_next" },
	{ 0xa4c085f8, "ata_tf_from_fis" },
	{ 0xa210ef19, "ata_std_qc_defer" },
	{ 0xd1d3d049, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x562963, "sata_pmp_error_handler" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xdc80ee26, "ata_host_start" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x481e94a3, "ata_port_desc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x83784fb6, "ata_host_register" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x4fd701a, "ata_host_activate" },
	{ 0x669c413b, "_dev_err" },
	{ 0xdf0c757f, "ata_tf_to_fis" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x7727316b, "ata_port_classify" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x9371ea58, "sata_deb_timing_normal" },
	{ 0xbc79eb0b, "sata_deb_timing_hotplug" },
	{ 0xf9b95a1e, "sata_link_hardreset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x25436a80, "ata_std_postreset" },
	{ 0xacc4cd93, "ata_wait_register" },
	{ 0xda050a52, "ata_dummy_port_ops" },
	{ 0xc72d736e, "ata_dev_set_feature" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x79a84a25, "ata_port_freeze" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe67ab68b, "ata_msleep" },
	{ 0x526821d3, "ata_wait_after_reset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb54b3284, "sata_link_scr_lpm" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x15fe7e9b, "dmam_alloc_attrs" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x408cf8cf, "ata_qc_complete_multiple" },
	{ 0xea10b028, "sata_lpm_ignore_phy_events" },
	{ 0x4c70ff96, "ata_ehi_clear_desc" },
	{ 0x49456264, "ata_ehi_push_desc" },
	{ 0x6552f2a3, "ata_link_abort" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa8fa7105, "sata_async_notification" },
	{ 0xb6472fe, "ata_port_abort" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd5d82b0b, "sata_pmp_port_ops" },
	{ 0xf018fdb3, "dev_attr_sw_activity" },
	{ 0xd8d5e2a2, "dev_attr_unload_heads" },
	{ 0xe76f8e16, "dev_attr_ncq_prio_supported" },
	{ 0xef37c35b, "dev_attr_ncq_prio_enable" },
	{ 0x3c9d5704, "dev_attr_link_power_management_supported" },
	{ 0x8ce8b84e, "dev_attr_link_power_management_policy" },
	{ 0x37140488, "dev_attr_em_message_type" },
	{ 0xebdf8fbd, "dev_attr_em_message" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libata");


MODULE_INFO(srcversion, "D9553F58A841391127F5810");
