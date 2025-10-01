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

KSYMTAB_FUNC(ata_link_next, "_gpl", "");
KSYMTAB_FUNC(ata_dev_next, "_gpl", "");
KSYMTAB_FUNC(atapi_cmd_type, "_gpl", "");
KSYMTAB_FUNC(ata_pack_xfermask, "_gpl", "");
KSYMTAB_FUNC(ata_xfer_mask2mode, "_gpl", "");
KSYMTAB_FUNC(ata_xfer_mode2mask, "_gpl", "");
KSYMTAB_FUNC(ata_xfer_mode2shift, "_gpl", "");
KSYMTAB_FUNC(ata_mode_string, "_gpl", "");
KSYMTAB_FUNC(ata_dev_classify, "_gpl", "");
KSYMTAB_FUNC(ata_id_string, "_gpl", "");
KSYMTAB_FUNC(ata_id_c_string, "_gpl", "");
KSYMTAB_FUNC(ata_id_xfermask, "_gpl", "");
KSYMTAB_FUNC(ata_pio_need_iordy, "_gpl", "");
KSYMTAB_FUNC(ata_do_dev_read_id, "_gpl", "");
KSYMTAB_FUNC(ata_cable_40wire, "_gpl", "");
KSYMTAB_FUNC(ata_cable_80wire, "_gpl", "");
KSYMTAB_FUNC(ata_cable_unknown, "_gpl", "");
KSYMTAB_FUNC(ata_cable_ignore, "_gpl", "");
KSYMTAB_FUNC(ata_cable_sata, "_gpl", "");
KSYMTAB_FUNC(ata_dev_pair, "_gpl", "");
KSYMTAB_FUNC(ata_do_set_mode, "_gpl", "");
KSYMTAB_FUNC(ata_wait_after_reset, "_gpl", "");
KSYMTAB_FUNC(ata_std_prereset, "_gpl", "");
KSYMTAB_FUNC(ata_std_postreset, "_gpl", "");
KSYMTAB_FUNC(ata_dev_set_feature, "_gpl", "");
KSYMTAB_FUNC(ata_std_qc_defer, "_gpl", "");
KSYMTAB_FUNC(ata_qc_complete, "_gpl", "");
KSYMTAB_FUNC(ata_qc_get_active, "_gpl", "");
KSYMTAB_FUNC(ata_link_online, "_gpl", "");
KSYMTAB_FUNC(ata_link_offline, "_gpl", "");
KSYMTAB_FUNC(ata_sas_port_suspend, "_gpl", "");
KSYMTAB_FUNC(ata_sas_port_resume, "_gpl", "");
KSYMTAB_FUNC(ata_host_suspend, "_gpl", "");
KSYMTAB_FUNC(ata_host_resume, "_gpl", "");
KSYMTAB_FUNC(ata_port_alloc, "_gpl", "");
KSYMTAB_FUNC(ata_port_free, "_gpl", "");
KSYMTAB_FUNC(ata_host_put, "_gpl", "");
KSYMTAB_FUNC(ata_host_alloc, "_gpl", "");
KSYMTAB_FUNC(ata_host_alloc_pinfo, "_gpl", "");
KSYMTAB_FUNC(ata_host_start, "_gpl", "");
KSYMTAB_FUNC(ata_host_init, "_gpl", "");
KSYMTAB_FUNC(ata_port_probe, "_gpl", "");
KSYMTAB_FUNC(ata_host_register, "_gpl", "");
KSYMTAB_FUNC(ata_host_activate, "_gpl", "");
KSYMTAB_FUNC(ata_host_detach, "_gpl", "");
KSYMTAB_FUNC(ata_pci_remove_one, "_gpl", "");
KSYMTAB_FUNC(ata_pci_shutdown_one, "_gpl", "");
KSYMTAB_FUNC(pci_test_config_bits, "_gpl", "");
KSYMTAB_FUNC(ata_pci_device_do_suspend, "_gpl", "");
KSYMTAB_FUNC(ata_pci_device_do_resume, "_gpl", "");
KSYMTAB_FUNC(ata_pci_device_suspend, "_gpl", "");
KSYMTAB_FUNC(ata_pci_device_resume, "_gpl", "");
KSYMTAB_FUNC(ata_platform_remove_one, "_gpl", "");
KSYMTAB_FUNC(ata_ratelimit, "_gpl", "");
KSYMTAB_FUNC(ata_msleep, "_gpl", "");
KSYMTAB_FUNC(ata_wait_register, "_gpl", "");
KSYMTAB_DATA(ata_dummy_port_ops, "_gpl", "");
KSYMTAB_DATA(ata_dummy_port_info, "_gpl", "");
KSYMTAB_FUNC(ata_print_version, "", "");
KSYMTAB_DATA(__tracepoint_ata_tf_load, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ata_tf_load, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ata_tf_load, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ata_exec_command, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ata_exec_command, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ata_exec_command, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ata_bmdma_setup, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ata_bmdma_setup, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ata_bmdma_setup, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ata_bmdma_start, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ata_bmdma_start, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ata_bmdma_start, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ata_bmdma_status, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ata_bmdma_status, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ata_bmdma_status, "_gpl", "");
KSYMTAB_DATA(dev_attr_unload_heads, "_gpl", "");
KSYMTAB_DATA(ata_common_sdev_groups, "_gpl", "");
KSYMTAB_FUNC(ata_std_bios_param, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_unlock_native_capacity, "_gpl", "");
KSYMTAB_FUNC(ata_sas_scsi_ioctl, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_ioctl, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_dma_need_drain, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_slave_alloc, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_device_configure, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_slave_destroy, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_queuecmd, "_gpl", "");
KSYMTAB_FUNC(__ata_ehi_push_desc, "_gpl", "");
KSYMTAB_FUNC(ata_ehi_push_desc, "_gpl", "");
KSYMTAB_FUNC(ata_ehi_clear_desc, "_gpl", "");
KSYMTAB_FUNC(ata_port_desc, "_gpl", "");
KSYMTAB_FUNC(ata_port_pbar_desc, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_cmd_error_handler, "", "");
KSYMTAB_FUNC(ata_scsi_port_error_handler, "_gpl", "");
KSYMTAB_FUNC(ata_port_wait_eh, "_gpl", "");
KSYMTAB_FUNC(ata_std_sched_eh, "_gpl", "");
KSYMTAB_FUNC(ata_std_end_eh, "", "");
KSYMTAB_FUNC(ata_port_schedule_eh, "_gpl", "");
KSYMTAB_FUNC(ata_link_abort, "_gpl", "");
KSYMTAB_FUNC(ata_port_abort, "_gpl", "");
KSYMTAB_FUNC(ata_port_freeze, "_gpl", "");
KSYMTAB_FUNC(ata_eh_freeze_port, "_gpl", "");
KSYMTAB_FUNC(ata_dev_disable, "_gpl", "");
KSYMTAB_FUNC(ata_get_cmd_name, "_gpl", "");
KSYMTAB_FUNC(ata_std_error_handler, "_gpl", "");
KSYMTAB_FUNC(ata_tport_delete, "_gpl", "");
KSYMTAB_FUNC(ata_tport_add, "_gpl", "");
KSYMTAB_FUNC(ata_port_classify, "_gpl", "");
KSYMTAB_DATA(sata_deb_timing_normal, "_gpl", "");
KSYMTAB_DATA(sata_deb_timing_hotplug, "_gpl", "");
KSYMTAB_DATA(sata_deb_timing_long, "_gpl", "");
KSYMTAB_FUNC(sata_scr_valid, "_gpl", "");
KSYMTAB_FUNC(sata_scr_read, "_gpl", "");
KSYMTAB_FUNC(sata_scr_write, "_gpl", "");
KSYMTAB_FUNC(sata_scr_write_flush, "_gpl", "");
KSYMTAB_FUNC(ata_tf_to_fis, "_gpl", "");
KSYMTAB_FUNC(ata_tf_from_fis, "_gpl", "");
KSYMTAB_FUNC(sata_link_debounce, "_gpl", "");
KSYMTAB_FUNC(sata_link_resume, "_gpl", "");
KSYMTAB_FUNC(sata_link_scr_lpm, "_gpl", "");
KSYMTAB_FUNC(sata_set_spd, "_gpl", "");
KSYMTAB_FUNC(sata_link_hardreset, "_gpl", "");
KSYMTAB_FUNC(sata_std_hardreset, "_gpl", "");
KSYMTAB_FUNC(ata_qc_complete_multiple, "_gpl", "");
KSYMTAB_FUNC(ata_slave_link_init, "_gpl", "");
KSYMTAB_FUNC(sata_lpm_ignore_phy_events, "_gpl", "");
KSYMTAB_DATA(dev_attr_link_power_management_supported, "_gpl", "");
KSYMTAB_DATA(dev_attr_link_power_management_policy, "_gpl", "");
KSYMTAB_FUNC(ata_ncq_prio_supported, "_gpl", "");
KSYMTAB_DATA(dev_attr_ncq_prio_supported, "_gpl", "");
KSYMTAB_FUNC(ata_ncq_prio_enabled, "_gpl", "");
KSYMTAB_FUNC(ata_ncq_prio_enable, "_gpl", "");
KSYMTAB_DATA(dev_attr_ncq_prio_enable, "_gpl", "");
KSYMTAB_DATA(ata_ncq_sdev_groups, "_gpl", "");
KSYMTAB_DATA(dev_attr_em_message, "_gpl", "");
KSYMTAB_DATA(dev_attr_em_message_type, "_gpl", "");
KSYMTAB_DATA(dev_attr_sw_activity, "_gpl", "");
KSYMTAB_FUNC(ata_change_queue_depth, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_change_queue_depth, "_gpl", "");
KSYMTAB_FUNC(ata_sas_device_configure, "_gpl", "");
KSYMTAB_FUNC(ata_sas_queuecmd, "_gpl", "");
KSYMTAB_FUNC(sata_async_notification, "_gpl", "");
KSYMTAB_FUNC(ata_eh_analyze_ncq_error, "_gpl", "");
KSYMTAB_DATA(sata_port_ops, "_gpl", "");
KSYMTAB_DATA(ata_sff_port_ops, "_gpl", "");
KSYMTAB_FUNC(ata_sff_check_status, "_gpl", "");
KSYMTAB_FUNC(ata_sff_pause, "_gpl", "");
KSYMTAB_FUNC(ata_sff_dma_pause, "_gpl", "");
KSYMTAB_FUNC(ata_sff_wait_ready, "_gpl", "");
KSYMTAB_FUNC(ata_sff_dev_select, "_gpl", "");
KSYMTAB_FUNC(ata_sff_irq_on, "_gpl", "");
KSYMTAB_FUNC(ata_sff_tf_load, "_gpl", "");
KSYMTAB_FUNC(ata_sff_tf_read, "_gpl", "");
KSYMTAB_FUNC(ata_sff_exec_command, "_gpl", "");
KSYMTAB_FUNC(ata_sff_data_xfer, "_gpl", "");
KSYMTAB_FUNC(ata_sff_data_xfer32, "_gpl", "");
KSYMTAB_FUNC(ata_sff_hsm_move, "_gpl", "");
KSYMTAB_FUNC(ata_sff_queue_work, "_gpl", "");
KSYMTAB_FUNC(ata_sff_queue_delayed_work, "_gpl", "");
KSYMTAB_FUNC(ata_sff_queue_pio_task, "_gpl", "");
KSYMTAB_FUNC(ata_sff_qc_issue, "_gpl", "");
KSYMTAB_FUNC(ata_sff_qc_fill_rtf, "_gpl", "");
KSYMTAB_FUNC(ata_sff_port_intr, "_gpl", "");
KSYMTAB_FUNC(ata_sff_interrupt, "_gpl", "");
KSYMTAB_FUNC(ata_sff_lost_interrupt, "_gpl", "");
KSYMTAB_FUNC(ata_sff_freeze, "_gpl", "");
KSYMTAB_FUNC(ata_sff_thaw, "_gpl", "");
KSYMTAB_FUNC(ata_sff_prereset, "_gpl", "");
KSYMTAB_FUNC(ata_sff_dev_classify, "_gpl", "");
KSYMTAB_FUNC(ata_sff_wait_after_reset, "_gpl", "");
KSYMTAB_FUNC(ata_sff_softreset, "_gpl", "");
KSYMTAB_FUNC(sata_sff_hardreset, "_gpl", "");
KSYMTAB_FUNC(ata_sff_postreset, "_gpl", "");
KSYMTAB_FUNC(ata_sff_drain_fifo, "_gpl", "");
KSYMTAB_FUNC(ata_sff_error_handler, "_gpl", "");
KSYMTAB_FUNC(ata_sff_std_ports, "_gpl", "");
KSYMTAB_FUNC(ata_pci_sff_init_host, "_gpl", "");
KSYMTAB_FUNC(ata_pci_sff_prepare_host, "_gpl", "");
KSYMTAB_FUNC(ata_pci_sff_activate_host, "_gpl", "");
KSYMTAB_FUNC(ata_pci_sff_init_one, "_gpl", "");
KSYMTAB_DATA(ata_bmdma_port_ops, "_gpl", "");
KSYMTAB_DATA(ata_bmdma32_port_ops, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_qc_prep, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_dumb_qc_prep, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_qc_issue, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_port_intr, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_interrupt, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_error_handler, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_post_internal_cmd, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_irq_clear, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_setup, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_start, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_stop, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_status, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_port_start, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_port_start32, "_gpl", "");
KSYMTAB_FUNC(ata_pci_bmdma_clear_simplex, "_gpl", "");
KSYMTAB_FUNC(ata_pci_bmdma_init, "_gpl", "");
KSYMTAB_FUNC(ata_pci_bmdma_prepare_host, "_gpl", "");
KSYMTAB_FUNC(ata_pci_bmdma_init_one, "_gpl", "");
KSYMTAB_DATA(sata_pmp_port_ops, "_gpl", "");
KSYMTAB_FUNC(sata_pmp_qc_defer_cmd_switch, "_gpl", "");
KSYMTAB_FUNC(sata_pmp_error_handler, "_gpl", "");

SYMBOL_CRC(ata_link_next, 0x278cc9fd, "_gpl");
SYMBOL_CRC(ata_dev_next, 0x3c6802b4, "_gpl");
SYMBOL_CRC(atapi_cmd_type, 0x8462cb62, "_gpl");
SYMBOL_CRC(ata_pack_xfermask, 0x3a15013b, "_gpl");
SYMBOL_CRC(ata_xfer_mask2mode, 0xc2368ea5, "_gpl");
SYMBOL_CRC(ata_xfer_mode2mask, 0xe77d5ef3, "_gpl");
SYMBOL_CRC(ata_xfer_mode2shift, 0x58db1176, "_gpl");
SYMBOL_CRC(ata_mode_string, 0x6a9e90af, "_gpl");
SYMBOL_CRC(ata_dev_classify, 0x5bcc0df7, "_gpl");
SYMBOL_CRC(ata_id_string, 0xccd86806, "_gpl");
SYMBOL_CRC(ata_id_c_string, 0xafddd545, "_gpl");
SYMBOL_CRC(ata_id_xfermask, 0x030cbca2, "_gpl");
SYMBOL_CRC(ata_pio_need_iordy, 0xefd32d22, "_gpl");
SYMBOL_CRC(ata_do_dev_read_id, 0x03910995, "_gpl");
SYMBOL_CRC(ata_cable_40wire, 0x1570d985, "_gpl");
SYMBOL_CRC(ata_cable_80wire, 0xb174294b, "_gpl");
SYMBOL_CRC(ata_cable_unknown, 0xfdcb0b8e, "_gpl");
SYMBOL_CRC(ata_cable_ignore, 0xa605cf65, "_gpl");
SYMBOL_CRC(ata_cable_sata, 0x494ef617, "_gpl");
SYMBOL_CRC(ata_dev_pair, 0x5949f426, "_gpl");
SYMBOL_CRC(ata_do_set_mode, 0x1c032863, "_gpl");
SYMBOL_CRC(ata_wait_after_reset, 0x526821d3, "_gpl");
SYMBOL_CRC(ata_std_prereset, 0x05e640d3, "_gpl");
SYMBOL_CRC(ata_std_postreset, 0x25436a80, "_gpl");
SYMBOL_CRC(ata_dev_set_feature, 0xc72d736e, "_gpl");
SYMBOL_CRC(ata_std_qc_defer, 0xa210ef19, "_gpl");
SYMBOL_CRC(ata_qc_complete, 0x347c36fe, "_gpl");
SYMBOL_CRC(ata_qc_get_active, 0x9cf0caa0, "_gpl");
SYMBOL_CRC(ata_link_online, 0xe955c950, "_gpl");
SYMBOL_CRC(ata_link_offline, 0x5c8aa945, "_gpl");
SYMBOL_CRC(ata_sas_port_suspend, 0xe827d949, "_gpl");
SYMBOL_CRC(ata_sas_port_resume, 0x3098d11f, "_gpl");
SYMBOL_CRC(ata_host_suspend, 0x815d4d16, "_gpl");
SYMBOL_CRC(ata_host_resume, 0x65d9cfd2, "_gpl");
SYMBOL_CRC(ata_port_alloc, 0x22d5d1a0, "_gpl");
SYMBOL_CRC(ata_port_free, 0xc5879c3a, "_gpl");
SYMBOL_CRC(ata_host_put, 0xbe46d892, "_gpl");
SYMBOL_CRC(ata_host_alloc, 0xb1744fc6, "_gpl");
SYMBOL_CRC(ata_host_alloc_pinfo, 0x5690142c, "_gpl");
SYMBOL_CRC(ata_host_start, 0xdc80ee26, "_gpl");
SYMBOL_CRC(ata_host_init, 0xcbbe6d8d, "_gpl");
SYMBOL_CRC(ata_port_probe, 0x02c20663, "_gpl");
SYMBOL_CRC(ata_host_register, 0x83784fb6, "_gpl");
SYMBOL_CRC(ata_host_activate, 0x04fd701a, "_gpl");
SYMBOL_CRC(ata_host_detach, 0x21633aa2, "_gpl");
SYMBOL_CRC(ata_pci_remove_one, 0xa421f0f2, "_gpl");
SYMBOL_CRC(ata_pci_shutdown_one, 0x833c1473, "_gpl");
SYMBOL_CRC(pci_test_config_bits, 0x1cb37ef2, "_gpl");
SYMBOL_CRC(ata_pci_device_do_suspend, 0x6ca7b38a, "_gpl");
SYMBOL_CRC(ata_pci_device_do_resume, 0x79e53d27, "_gpl");
SYMBOL_CRC(ata_pci_device_suspend, 0x93aaba5d, "_gpl");
SYMBOL_CRC(ata_pci_device_resume, 0x27b5d5af, "_gpl");
SYMBOL_CRC(ata_platform_remove_one, 0xc7838680, "_gpl");
SYMBOL_CRC(ata_ratelimit, 0xf8f3a0fb, "_gpl");
SYMBOL_CRC(ata_msleep, 0xe67ab68b, "_gpl");
SYMBOL_CRC(ata_wait_register, 0xacc4cd93, "_gpl");
SYMBOL_CRC(ata_dummy_port_ops, 0xda050a52, "_gpl");
SYMBOL_CRC(ata_dummy_port_info, 0xd0b5e724, "_gpl");
SYMBOL_CRC(ata_print_version, 0x23b87937, "");
SYMBOL_CRC(__tracepoint_ata_tf_load, 0xa8f97178, "_gpl");
SYMBOL_CRC(__traceiter_ata_tf_load, 0x6446abce, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_tf_load, 0x08a88a9f, "_gpl");
SYMBOL_CRC(__tracepoint_ata_exec_command, 0xf0e52dc0, "_gpl");
SYMBOL_CRC(__traceiter_ata_exec_command, 0x603c3287, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_exec_command, 0xf80f5fc7, "_gpl");
SYMBOL_CRC(__tracepoint_ata_bmdma_setup, 0x41c36b9b, "_gpl");
SYMBOL_CRC(__traceiter_ata_bmdma_setup, 0x12e5f74f, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_bmdma_setup, 0xc68c41d6, "_gpl");
SYMBOL_CRC(__tracepoint_ata_bmdma_start, 0x1aa7a185, "_gpl");
SYMBOL_CRC(__traceiter_ata_bmdma_start, 0xe2e5c00e, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_bmdma_start, 0x9de88bc8, "_gpl");
SYMBOL_CRC(__tracepoint_ata_bmdma_status, 0xc19b2437, "_gpl");
SYMBOL_CRC(__traceiter_ata_bmdma_status, 0xa91a9d1d, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_bmdma_status, 0xc9715630, "_gpl");
SYMBOL_CRC(dev_attr_unload_heads, 0xd8d5e2a2, "_gpl");
SYMBOL_CRC(ata_common_sdev_groups, 0xd373eb2a, "_gpl");
SYMBOL_CRC(ata_std_bios_param, 0x0d7a91f2, "_gpl");
SYMBOL_CRC(ata_scsi_unlock_native_capacity, 0x93099309, "_gpl");
SYMBOL_CRC(ata_sas_scsi_ioctl, 0xce18cb28, "_gpl");
SYMBOL_CRC(ata_scsi_ioctl, 0x9f27f7da, "_gpl");
SYMBOL_CRC(ata_scsi_dma_need_drain, 0x48e90ad3, "_gpl");
SYMBOL_CRC(ata_scsi_slave_alloc, 0xc0fb3da2, "_gpl");
SYMBOL_CRC(ata_scsi_device_configure, 0xdce3b81f, "_gpl");
SYMBOL_CRC(ata_scsi_slave_destroy, 0x5461a61b, "_gpl");
SYMBOL_CRC(ata_scsi_queuecmd, 0x41fa1179, "_gpl");
SYMBOL_CRC(__ata_ehi_push_desc, 0x16425b79, "_gpl");
SYMBOL_CRC(ata_ehi_push_desc, 0x49456264, "_gpl");
SYMBOL_CRC(ata_ehi_clear_desc, 0x4c70ff96, "_gpl");
SYMBOL_CRC(ata_port_desc, 0x481e94a3, "_gpl");
SYMBOL_CRC(ata_port_pbar_desc, 0xb3e372b1, "_gpl");
SYMBOL_CRC(ata_scsi_cmd_error_handler, 0x72e520d0, "");
SYMBOL_CRC(ata_scsi_port_error_handler, 0x6027c3e5, "_gpl");
SYMBOL_CRC(ata_port_wait_eh, 0x64ae5039, "_gpl");
SYMBOL_CRC(ata_std_sched_eh, 0xe8d45d20, "_gpl");
SYMBOL_CRC(ata_std_end_eh, 0xf7977afc, "");
SYMBOL_CRC(ata_port_schedule_eh, 0xc3519fc3, "_gpl");
SYMBOL_CRC(ata_link_abort, 0x6552f2a3, "_gpl");
SYMBOL_CRC(ata_port_abort, 0x0b6472fe, "_gpl");
SYMBOL_CRC(ata_port_freeze, 0x79a84a25, "_gpl");
SYMBOL_CRC(ata_eh_freeze_port, 0xb2f46c41, "_gpl");
SYMBOL_CRC(ata_dev_disable, 0x2fd8ba7b, "_gpl");
SYMBOL_CRC(ata_get_cmd_name, 0xbd06f3a9, "_gpl");
SYMBOL_CRC(ata_std_error_handler, 0x92e33cd3, "_gpl");
SYMBOL_CRC(ata_tport_delete, 0x9a8dfe0f, "_gpl");
SYMBOL_CRC(ata_tport_add, 0xb87b0bc4, "_gpl");
SYMBOL_CRC(ata_port_classify, 0x7727316b, "_gpl");
SYMBOL_CRC(sata_deb_timing_normal, 0x9371ea58, "_gpl");
SYMBOL_CRC(sata_deb_timing_hotplug, 0xbc79eb0b, "_gpl");
SYMBOL_CRC(sata_deb_timing_long, 0x06c98647, "_gpl");
SYMBOL_CRC(sata_scr_valid, 0xf68b83f8, "_gpl");
SYMBOL_CRC(sata_scr_read, 0x89573ed1, "_gpl");
SYMBOL_CRC(sata_scr_write, 0xa315ef31, "_gpl");
SYMBOL_CRC(sata_scr_write_flush, 0xb6b70f87, "_gpl");
SYMBOL_CRC(ata_tf_to_fis, 0xdf0c757f, "_gpl");
SYMBOL_CRC(ata_tf_from_fis, 0xa4c085f8, "_gpl");
SYMBOL_CRC(sata_link_debounce, 0x8b0eef28, "_gpl");
SYMBOL_CRC(sata_link_resume, 0x88609092, "_gpl");
SYMBOL_CRC(sata_link_scr_lpm, 0xb54b3284, "_gpl");
SYMBOL_CRC(sata_set_spd, 0x175de5fd, "_gpl");
SYMBOL_CRC(sata_link_hardreset, 0xf9b95a1e, "_gpl");
SYMBOL_CRC(sata_std_hardreset, 0x1ddb2313, "_gpl");
SYMBOL_CRC(ata_qc_complete_multiple, 0x408cf8cf, "_gpl");
SYMBOL_CRC(ata_slave_link_init, 0xaa9988f1, "_gpl");
SYMBOL_CRC(sata_lpm_ignore_phy_events, 0xea10b028, "_gpl");
SYMBOL_CRC(dev_attr_link_power_management_supported, 0x3c9d5704, "_gpl");
SYMBOL_CRC(dev_attr_link_power_management_policy, 0x8ce8b84e, "_gpl");
SYMBOL_CRC(ata_ncq_prio_supported, 0x7bed29f8, "_gpl");
SYMBOL_CRC(dev_attr_ncq_prio_supported, 0xe76f8e16, "_gpl");
SYMBOL_CRC(ata_ncq_prio_enabled, 0x1c64b98d, "_gpl");
SYMBOL_CRC(ata_ncq_prio_enable, 0xb1697c9d, "_gpl");
SYMBOL_CRC(dev_attr_ncq_prio_enable, 0xef37c35b, "_gpl");
SYMBOL_CRC(ata_ncq_sdev_groups, 0x68e884f7, "_gpl");
SYMBOL_CRC(dev_attr_em_message, 0xebdf8fbd, "_gpl");
SYMBOL_CRC(dev_attr_em_message_type, 0x37140488, "_gpl");
SYMBOL_CRC(dev_attr_sw_activity, 0xf018fdb3, "_gpl");
SYMBOL_CRC(ata_change_queue_depth, 0x9834c6f9, "_gpl");
SYMBOL_CRC(ata_scsi_change_queue_depth, 0x46dc42b7, "_gpl");
SYMBOL_CRC(ata_sas_device_configure, 0x8359ee2c, "_gpl");
SYMBOL_CRC(ata_sas_queuecmd, 0xdc6821d2, "_gpl");
SYMBOL_CRC(sata_async_notification, 0xa8fa7105, "_gpl");
SYMBOL_CRC(ata_eh_analyze_ncq_error, 0x94820feb, "_gpl");
SYMBOL_CRC(sata_port_ops, 0x977ed47f, "_gpl");
SYMBOL_CRC(ata_sff_port_ops, 0xca6ddc2f, "_gpl");
SYMBOL_CRC(ata_sff_check_status, 0x8fa4725b, "_gpl");
SYMBOL_CRC(ata_sff_pause, 0xa0a49887, "_gpl");
SYMBOL_CRC(ata_sff_dma_pause, 0x5c7b8f99, "_gpl");
SYMBOL_CRC(ata_sff_wait_ready, 0x59528f3a, "_gpl");
SYMBOL_CRC(ata_sff_dev_select, 0x30db02c8, "_gpl");
SYMBOL_CRC(ata_sff_irq_on, 0x001c37e2, "_gpl");
SYMBOL_CRC(ata_sff_tf_load, 0x0a368da8, "_gpl");
SYMBOL_CRC(ata_sff_tf_read, 0x5f6ba72c, "_gpl");
SYMBOL_CRC(ata_sff_exec_command, 0x4d9ff34f, "_gpl");
SYMBOL_CRC(ata_sff_data_xfer, 0xa7720039, "_gpl");
SYMBOL_CRC(ata_sff_data_xfer32, 0x16afccde, "_gpl");
SYMBOL_CRC(ata_sff_hsm_move, 0x0ff12cda, "_gpl");
SYMBOL_CRC(ata_sff_queue_work, 0xa6b06f65, "_gpl");
SYMBOL_CRC(ata_sff_queue_delayed_work, 0x4e17c613, "_gpl");
SYMBOL_CRC(ata_sff_queue_pio_task, 0xc9d02d23, "_gpl");
SYMBOL_CRC(ata_sff_qc_issue, 0x68f137b5, "_gpl");
SYMBOL_CRC(ata_sff_qc_fill_rtf, 0x12bfc6cf, "_gpl");
SYMBOL_CRC(ata_sff_port_intr, 0x23d9ddc4, "_gpl");
SYMBOL_CRC(ata_sff_interrupt, 0x3a4f6a32, "_gpl");
SYMBOL_CRC(ata_sff_lost_interrupt, 0x51444614, "_gpl");
SYMBOL_CRC(ata_sff_freeze, 0xf5ae6d5a, "_gpl");
SYMBOL_CRC(ata_sff_thaw, 0xdc56143e, "_gpl");
SYMBOL_CRC(ata_sff_prereset, 0xb95271e3, "_gpl");
SYMBOL_CRC(ata_sff_dev_classify, 0x86c28e8c, "_gpl");
SYMBOL_CRC(ata_sff_wait_after_reset, 0xd1a317f0, "_gpl");
SYMBOL_CRC(ata_sff_softreset, 0x2fe7f8c4, "_gpl");
SYMBOL_CRC(sata_sff_hardreset, 0x487385cb, "_gpl");
SYMBOL_CRC(ata_sff_postreset, 0x609706dd, "_gpl");
SYMBOL_CRC(ata_sff_drain_fifo, 0xd0994be2, "_gpl");
SYMBOL_CRC(ata_sff_error_handler, 0xe979d6d5, "_gpl");
SYMBOL_CRC(ata_sff_std_ports, 0x73a48b4a, "_gpl");
SYMBOL_CRC(ata_pci_sff_init_host, 0x21d24b10, "_gpl");
SYMBOL_CRC(ata_pci_sff_prepare_host, 0x2f68a017, "_gpl");
SYMBOL_CRC(ata_pci_sff_activate_host, 0xd57839ec, "_gpl");
SYMBOL_CRC(ata_pci_sff_init_one, 0xe90d2812, "_gpl");
SYMBOL_CRC(ata_bmdma_port_ops, 0x33065ee9, "_gpl");
SYMBOL_CRC(ata_bmdma32_port_ops, 0x4bfbcd70, "_gpl");
SYMBOL_CRC(ata_bmdma_qc_prep, 0x800f6566, "_gpl");
SYMBOL_CRC(ata_bmdma_dumb_qc_prep, 0x82d9a68a, "_gpl");
SYMBOL_CRC(ata_bmdma_qc_issue, 0xec24648d, "_gpl");
SYMBOL_CRC(ata_bmdma_port_intr, 0xff821630, "_gpl");
SYMBOL_CRC(ata_bmdma_interrupt, 0xe818b32b, "_gpl");
SYMBOL_CRC(ata_bmdma_error_handler, 0x4a5413dc, "_gpl");
SYMBOL_CRC(ata_bmdma_post_internal_cmd, 0x329c7c93, "_gpl");
SYMBOL_CRC(ata_bmdma_irq_clear, 0xbafbb35f, "_gpl");
SYMBOL_CRC(ata_bmdma_setup, 0xac47ec77, "_gpl");
SYMBOL_CRC(ata_bmdma_start, 0x863183f8, "_gpl");
SYMBOL_CRC(ata_bmdma_stop, 0x5ab7f248, "_gpl");
SYMBOL_CRC(ata_bmdma_status, 0xef16e6f7, "_gpl");
SYMBOL_CRC(ata_bmdma_port_start, 0xdbd8924f, "_gpl");
SYMBOL_CRC(ata_bmdma_port_start32, 0xdb252de4, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_clear_simplex, 0x826c4a65, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_init, 0xc33db07c, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_prepare_host, 0xae1035fb, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_init_one, 0x1c42912a, "_gpl");
SYMBOL_CRC(sata_pmp_port_ops, 0xd5d82b0b, "_gpl");
SYMBOL_CRC(sata_pmp_qc_defer_cmd_switch, 0xd1d3d049, "_gpl");
SYMBOL_CRC(sata_pmp_error_handler, 0x00562963, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x93f27255, "pci_save_state" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x7a81541b, "async_synchronize_cookie" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x39819c60, "flush_dcache_page" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x583ab8fe, "devres_release_group" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xffb08bb5, "scsi_device_get" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x77bc13a0, "strim" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0xfe13a601, "trace_seq_printf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x43ff31cd, "devres_remove_group" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15fe7e9b, "dmam_alloc_attrs" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0x4d66beee, "scsi_remove_host" },
	{ 0x4ec3f61a, "transport_remove_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x15524fcf, "scsi_build_sense" },
	{ 0x1e426c2b, "scsi_schedule_eh" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0xf7370f56, "system_state" },
	{ 0x5ef3d553, "scsi_check_sense" },
	{ 0x16965a52, "device_initialize" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x53592c3f, "sdev_evt_send_simple" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xd955aac9, "pci_set_power_state" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4716832b, "of_get_next_available_child" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xde5315ca, "devres_add" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x43a73717, "scsi_device_set_state" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x3ab7b1cc, "scsi_set_sense_field_pointer" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0xf139d567, "pci_read_config_dword" },
	{ 0x6fb8ffad, "transport_setup_device" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x5566284a, "trace_seq_putc" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0xd71fb816, "devm_free_irq" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x5009c71d, "glob_match" },
	{ 0xa916b694, "strnlen" },
	{ 0xdbdaf44e, "scsi_eh_finish_cmd" },
	{ 0xc6cbbc89, "capable" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xa2526acb, "scsi_device_put" },
	{ 0xf811e69d, "scsi_eh_flush_done_q" },
	{ 0x55dc16b9, "pcim_iomap_regions" },
	{ 0xe2c00f91, "sg_miter_next" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8eb11fad, "scsi_host_put" },
	{ 0xdeeb9af9, "transport_class_unregister" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd057e6b7, "attribute_container_register" },
	{ 0x2e4ddee0, "pci_read_config_word" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0x2af3f40d, "sg_miter_stop" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x374fa8fb, "device_link_remove" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2faf3369, "transport_configure_device" },
	{ 0x81665d21, "devres_open_group" },
	{ 0x46a1ad99, "scsi_resume_device" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x5179e37c, "pcim_pin_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4f5fbe56, "transport_add_device" },
	{ 0x474aca38, "sg_miter_start" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x93022ba6, "__scsi_format_command" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf5cd854d, "pci_restore_state" },
	{ 0x564c900c, "bpf_trace_run1" },
	{ 0x73f49957, "device_del" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x5259efcd, "scsi_rescan_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x7cf55e07, "pci_set_master" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x10843d0a, "param_ops_string" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x47ab63cc, "pm_runtime_forbid" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe5e61c17, "attribute_container_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7ad72f95, "scsi_execute_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x1ada87cb, "transport_destroy_device" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc43d6f7b, "pci_disable_device" },
	{ 0x3d2468f0, "scsi_done" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcbeba1d, "sg_copy_from_buffer" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xe2522eee, "dma_unmap_sg_attrs" },
	{ 0xd9835348, "pcim_iomap_table" },
	{ 0x3770654, "scsi_remove_device" },
	{ 0x90c7f1e9, "blk_abort_request" },
	{ 0x9adbb8ff, "scsi_add_host_with_dma" },
	{ 0x42f7540f, "pci_read_config_byte" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x374647f3, "_dev_printk" },
	{ 0xb36396f8, "pcim_enable_device" },
	{ 0xe96e0f1d, "scsi_host_alloc" },
	{ 0x349cba85, "strchr" },
	{ 0x3143bdf1, "__scsi_add_device" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x710d6806, "device_link_add" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x16f123e, "sg_copy_to_buffer" },
	{ 0xe9ef8cde, "scsi_change_queue_depth" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee7eec94, "pci_bus_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xb8a0ce31, "dma_map_sg_attrs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa684ddcf, "transport_class_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7C19E6871B9CA288EC2972A");
