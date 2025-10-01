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

KSYMTAB_DATA(null_dailink_component, "_gpl", "");
KSYMTAB_DATA(snd_soc_debugfs_root, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_name_get, "_gpl", "");
KSYMTAB_FUNC(snd_soc_rtdcom_lookup, "_gpl", "");
KSYMTAB_FUNC(snd_soc_lookup_component_nolocked, "_gpl", "");
KSYMTAB_FUNC(snd_soc_lookup_component, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_pcm_runtime, "_gpl", "");
KSYMTAB_FUNC(snd_soc_close_delayed_work, "_gpl", "");
KSYMTAB_FUNC(snd_soc_copy_dai_args, "_gpl", "");
KSYMTAB_FUNC(snd_soc_find_dai, "_gpl", "");
KSYMTAB_FUNC(snd_soc_find_dai_with_mutex, "_gpl", "");
KSYMTAB_FUNC(snd_soc_remove_pcm_runtime, "_gpl", "");
KSYMTAB_FUNC(snd_soc_add_pcm_runtimes, "_gpl", "");
KSYMTAB_FUNC(snd_soc_runtime_set_dai_fmt, "_gpl", "");
KSYMTAB_FUNC(snd_soc_set_dmi_name, "_gpl", "");
KSYMTAB_FUNC(snd_soc_poweroff, "_gpl", "");
KSYMTAB_DATA(snd_soc_pm_ops, "_gpl", "");
KSYMTAB_FUNC(snd_soc_cnew, "_gpl", "");
KSYMTAB_FUNC(snd_soc_add_component_controls, "_gpl", "");
KSYMTAB_FUNC(snd_soc_add_card_controls, "_gpl", "");
KSYMTAB_FUNC(snd_soc_add_dai_controls, "_gpl", "");
KSYMTAB_FUNC(snd_soc_register_card, "_gpl", "");
KSYMTAB_FUNC(snd_soc_unregister_card, "_gpl", "");
KSYMTAB_FUNC(snd_soc_unregister_dai, "_gpl", "");
KSYMTAB_FUNC(snd_soc_register_dai, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_initialize, "_gpl", "");
KSYMTAB_FUNC(snd_soc_add_component, "_gpl", "");
KSYMTAB_FUNC(snd_soc_register_component, "_gpl", "");
KSYMTAB_FUNC(snd_soc_unregister_component_by_driver, "_gpl", "");
KSYMTAB_FUNC(snd_soc_unregister_component, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_parse_card_name, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_parse_audio_simple_widgets, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_parse_pin_switches, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_get_slot_mask, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_parse_tdm_slot, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dlc_use_cpu_as_platform, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_parse_node_prefix, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_parse_audio_routing, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_parse_aux_devs, "_gpl", "");
KSYMTAB_FUNC(snd_soc_daifmt_clock_provider_flipped, "_gpl", "");
KSYMTAB_FUNC(snd_soc_daifmt_clock_provider_from_bitmap, "_gpl", "");
KSYMTAB_FUNC(snd_soc_daifmt_parse_format, "_gpl", "");
KSYMTAB_FUNC(snd_soc_daifmt_parse_clock_provider_raw, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_stream_cpu, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_dai_id, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_dlc, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_get_dlc, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_dai_name, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_get_dai_name, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_dai_via_args, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_put_dai_link_codecs, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_get_dai_link_codecs, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_put_dai_link_cpus, "_gpl", "");
KSYMTAB_FUNC(snd_soc_of_get_dai_link_cpus, "_gpl", "");
KSYMTAB_FUNC(dapm_mark_endpoints_dirty, "_gpl", "");
KSYMTAB_FUNC(dapm_kcontrol_get_value, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_kcontrol_widget, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_kcontrol_dapm, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_force_bias_level, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_dai_get_connected_widgets, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_dai_free_widgets, "_gpl", "");
KSYMTAB_FUNC(dapm_regulator_event, "_gpl", "");
KSYMTAB_FUNC(dapm_pinctrl_event, "_gpl", "");
KSYMTAB_FUNC(dapm_clock_event, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_mux_update_power, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_mixer_update_power, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_free_widget, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_sync_unlocked, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_sync, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_update_dai, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_widget_name_cmp, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_add_routes, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_del_routes, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_weak_routes, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_new_widgets, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_get_volsw, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_put_volsw, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_get_enum_double, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_put_enum_double, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_info_pin_switch, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_get_pin_switch, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_put_pin_switch, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_new_control, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_new_controls, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_new_dai_widgets, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_stream_stop, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_enable_pin_unlocked, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_enable_pin, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_force_enable_pin_unlocked, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_force_enable_pin, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_disable_pin_unlocked, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_disable_pin, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_nc_pin_unlocked, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_nc_pin, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_get_pin_status, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_ignore_suspend, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_free, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dapm_init, "_gpl", "");
KSYMTAB_FUNC(snd_soc_jack_report, "_gpl", "");
KSYMTAB_FUNC(snd_soc_jack_add_zones, "_gpl", "");
KSYMTAB_FUNC(snd_soc_jack_get_type, "_gpl", "");
KSYMTAB_FUNC(snd_soc_jack_add_pins, "_gpl", "");
KSYMTAB_FUNC(snd_soc_jack_notifier_register, "_gpl", "");
KSYMTAB_FUNC(snd_soc_jack_notifier_unregister, "_gpl", "");
KSYMTAB_FUNC(snd_soc_jack_add_gpios, "_gpl", "");
KSYMTAB_FUNC(snd_soc_jack_add_gpiods, "_gpl", "");
KSYMTAB_FUNC(snd_soc_jack_free_gpios, "_gpl", "");
KSYMTAB_FUNC(snd_soc_calc_frame_size, "_gpl", "");
KSYMTAB_FUNC(snd_soc_params_to_frame_size, "_gpl", "");
KSYMTAB_FUNC(snd_soc_calc_bclk, "_gpl", "");
KSYMTAB_FUNC(snd_soc_params_to_bclk, "_gpl", "");
KSYMTAB_FUNC(snd_soc_tdm_params_to_bclk, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_is_dummy, "_gpl", "");
KSYMTAB_DATA(snd_soc_dummy_dlc, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_set_sysclk, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_set_clkdiv, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_set_pll, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_set_bclk_ratio, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_set_fmt, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_set_tdm_slot, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_set_channel_map, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_get_channel_map, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_set_tristate, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_digital_mute, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_action, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_active, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_compr_startup, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_compr_shutdown, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_compr_trigger, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_compr_set_params, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_compr_get_params, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_compr_ack, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_compr_pointer, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_compr_set_metadata, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dai_compr_get_metadata, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_set_sysclk, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_set_pll, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_enable_pin, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_enable_pin_unlocked, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_disable_pin, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_disable_pin_unlocked, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_nc_pin, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_nc_pin_unlocked, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_get_pin_status, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_force_enable_pin, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_force_enable_pin_unlocked, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_get_kcontrol, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_notify_control, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_set_jack, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_get_jack_type, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_init_regmap, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_exit_regmap, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_open, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_free, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_trigger, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_set_params, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_get_params, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_get_caps, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_get_codec_caps, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_ack, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_pointer, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_copy, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_set_metadata, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_compr_get_metadata, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_read, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_write, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_update_bits, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_update_bits_async, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_read_field, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_write_field, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_async_complete, "_gpl", "");
KSYMTAB_FUNC(snd_soc_component_test_bits, "_gpl", "");
KSYMTAB_FUNC(snd_soc_runtime_action, "_gpl", "");
KSYMTAB_FUNC(snd_soc_set_runtime_hwparams, "_gpl", "");
KSYMTAB_FUNC(snd_soc_runtime_calc_hw, "_gpl", "");
KSYMTAB_FUNC(widget_in_list, "_gpl", "");
KSYMTAB_FUNC(dpcm_end_walk_at_be, "_gpl", "");
KSYMTAB_FUNC(dpcm_be_dai_trigger, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dpcm_runtime_update, "_gpl", "");
KSYMTAB_FUNC(snd_soc_dpcm_get_substream, "_gpl", "");
KSYMTAB_FUNC(devm_snd_soc_register_dai, "_gpl", "");
KSYMTAB_FUNC(devm_snd_soc_register_component, "_gpl", "");
KSYMTAB_FUNC(devm_snd_soc_register_card, "_gpl", "");
KSYMTAB_FUNC(devm_snd_dmaengine_pcm_register, "_gpl", "");
KSYMTAB_FUNC(snd_soc_info_enum_double, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_enum_double, "_gpl", "");
KSYMTAB_FUNC(snd_soc_put_enum_double, "_gpl", "");
KSYMTAB_FUNC(snd_soc_info_volsw, "_gpl", "");
KSYMTAB_FUNC(snd_soc_info_volsw_sx, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_volsw, "_gpl", "");
KSYMTAB_FUNC(snd_soc_put_volsw, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_volsw_sx, "_gpl", "");
KSYMTAB_FUNC(snd_soc_put_volsw_sx, "_gpl", "");
KSYMTAB_FUNC(snd_soc_info_volsw_range, "_gpl", "");
KSYMTAB_FUNC(snd_soc_put_volsw_range, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_volsw_range, "_gpl", "");
KSYMTAB_FUNC(snd_soc_limit_volume, "_gpl", "");
KSYMTAB_FUNC(snd_soc_bytes_info, "_gpl", "");
KSYMTAB_FUNC(snd_soc_bytes_get, "_gpl", "");
KSYMTAB_FUNC(snd_soc_bytes_put, "_gpl", "");
KSYMTAB_FUNC(snd_soc_bytes_info_ext, "_gpl", "");
KSYMTAB_FUNC(snd_soc_bytes_tlv_callback, "_gpl", "");
KSYMTAB_FUNC(snd_soc_info_xr_sx, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_xr_sx, "_gpl", "");
KSYMTAB_FUNC(snd_soc_put_xr_sx, "_gpl", "");
KSYMTAB_FUNC(snd_soc_get_strobe, "_gpl", "");
KSYMTAB_FUNC(snd_soc_put_strobe, "_gpl", "");
KSYMTAB_FUNC(snd_soc_link_compr_startup, "_gpl", "");
KSYMTAB_FUNC(snd_soc_link_compr_shutdown, "_gpl", "");
KSYMTAB_FUNC(snd_soc_link_compr_set_params, "_gpl", "");
KSYMTAB_FUNC(snd_soc_card_get_kcontrol, "_gpl", "");
KSYMTAB_FUNC(snd_soc_card_jack_new, "_gpl", "");
KSYMTAB_FUNC(snd_soc_card_jack_new_pins, "_gpl", "");
KSYMTAB_FUNC(snd_soc_card_add_dai_link, "_gpl", "");
KSYMTAB_FUNC(snd_soc_card_remove_dai_link, "_gpl", "");
KSYMTAB_FUNC(snd_soc_new_compress, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_prepare_slave_config, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_register, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_unregister, "_gpl", "");

SYMBOL_CRC(null_dailink_component, 0xaabbccdd, "_gpl");
SYMBOL_CRC(snd_soc_debugfs_root, 0x6f5d11b2, "_gpl");
SYMBOL_CRC(snd_soc_dai_name_get, 0x20dd2ee6, "_gpl");
SYMBOL_CRC(snd_soc_rtdcom_lookup, 0xc97bbc67, "_gpl");
SYMBOL_CRC(snd_soc_lookup_component_nolocked, 0xd9663153, "_gpl");
SYMBOL_CRC(snd_soc_lookup_component, 0xfc718954, "_gpl");
SYMBOL_CRC(snd_soc_get_pcm_runtime, 0xccb09baa, "_gpl");
SYMBOL_CRC(snd_soc_close_delayed_work, 0x17f73e32, "_gpl");
SYMBOL_CRC(snd_soc_copy_dai_args, 0x3a8fa32d, "_gpl");
SYMBOL_CRC(snd_soc_find_dai, 0xa3abeb3f, "_gpl");
SYMBOL_CRC(snd_soc_find_dai_with_mutex, 0xbad7f81b, "_gpl");
SYMBOL_CRC(snd_soc_remove_pcm_runtime, 0xa185f646, "_gpl");
SYMBOL_CRC(snd_soc_add_pcm_runtimes, 0x24098383, "_gpl");
SYMBOL_CRC(snd_soc_runtime_set_dai_fmt, 0xd86f7db9, "_gpl");
SYMBOL_CRC(snd_soc_set_dmi_name, 0x6e48df05, "_gpl");
SYMBOL_CRC(snd_soc_poweroff, 0xa581382b, "_gpl");
SYMBOL_CRC(snd_soc_pm_ops, 0xd08d2a5b, "_gpl");
SYMBOL_CRC(snd_soc_cnew, 0x429d908d, "_gpl");
SYMBOL_CRC(snd_soc_add_component_controls, 0xddfb6567, "_gpl");
SYMBOL_CRC(snd_soc_add_card_controls, 0x8935b329, "_gpl");
SYMBOL_CRC(snd_soc_add_dai_controls, 0xe43787ca, "_gpl");
SYMBOL_CRC(snd_soc_register_card, 0x35498050, "_gpl");
SYMBOL_CRC(snd_soc_unregister_card, 0xdfa58c18, "_gpl");
SYMBOL_CRC(snd_soc_unregister_dai, 0xc90e07ac, "_gpl");
SYMBOL_CRC(snd_soc_register_dai, 0x2b65b2ec, "_gpl");
SYMBOL_CRC(snd_soc_component_initialize, 0x14b60f98, "_gpl");
SYMBOL_CRC(snd_soc_add_component, 0xb12b7358, "_gpl");
SYMBOL_CRC(snd_soc_register_component, 0x0666f5d9, "_gpl");
SYMBOL_CRC(snd_soc_unregister_component_by_driver, 0xa47ccfb8, "_gpl");
SYMBOL_CRC(snd_soc_unregister_component, 0xc1e6e422, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_card_name, 0x487bda51, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_audio_simple_widgets, 0xda769b09, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_pin_switches, 0x8a502be1, "_gpl");
SYMBOL_CRC(snd_soc_of_get_slot_mask, 0x10bc78b7, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_tdm_slot, 0x68d350ab, "_gpl");
SYMBOL_CRC(snd_soc_dlc_use_cpu_as_platform, 0xce4b2614, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_node_prefix, 0x0fad34d0, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_audio_routing, 0x269cf38f, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_aux_devs, 0xdfc6cb12, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_clock_provider_flipped, 0xc317a15e, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_clock_provider_from_bitmap, 0xf9622dd1, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_parse_format, 0xf65465e1, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_parse_clock_provider_raw, 0x30dbbf3f, "_gpl");
SYMBOL_CRC(snd_soc_get_stream_cpu, 0xbf74f1a8, "_gpl");
SYMBOL_CRC(snd_soc_get_dai_id, 0x95847995, "_gpl");
SYMBOL_CRC(snd_soc_get_dlc, 0x0eb0001e, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dlc, 0xeb62c27b, "_gpl");
SYMBOL_CRC(snd_soc_get_dai_name, 0x10db7ea6, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_name, 0xcf626089, "_gpl");
SYMBOL_CRC(snd_soc_get_dai_via_args, 0xe50db602, "_gpl");
SYMBOL_CRC(snd_soc_of_put_dai_link_codecs, 0x505cc5f8, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_link_codecs, 0xf71bca54, "_gpl");
SYMBOL_CRC(snd_soc_of_put_dai_link_cpus, 0x440cd9a7, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_link_cpus, 0xb951c3f7, "_gpl");
SYMBOL_CRC(dapm_mark_endpoints_dirty, 0x9009c356, "_gpl");
SYMBOL_CRC(dapm_kcontrol_get_value, 0x6bda0134, "_gpl");
SYMBOL_CRC(snd_soc_dapm_kcontrol_widget, 0xe4f718dd, "_gpl");
SYMBOL_CRC(snd_soc_dapm_kcontrol_dapm, 0x4ea8cba3, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_bias_level, 0xb4ead16a, "_gpl");
SYMBOL_CRC(snd_soc_dapm_dai_get_connected_widgets, 0x8799afe2, "_gpl");
SYMBOL_CRC(snd_soc_dapm_dai_free_widgets, 0x549ebdc7, "_gpl");
SYMBOL_CRC(dapm_regulator_event, 0xd7281bdb, "_gpl");
SYMBOL_CRC(dapm_pinctrl_event, 0x31df9591, "_gpl");
SYMBOL_CRC(dapm_clock_event, 0xa53e12ac, "_gpl");
SYMBOL_CRC(snd_soc_dapm_mux_update_power, 0xac61bfa0, "_gpl");
SYMBOL_CRC(snd_soc_dapm_mixer_update_power, 0xbf3721f6, "_gpl");
SYMBOL_CRC(snd_soc_dapm_free_widget, 0x575b48e1, "_gpl");
SYMBOL_CRC(snd_soc_dapm_sync_unlocked, 0x5f8e6c14, "_gpl");
SYMBOL_CRC(snd_soc_dapm_sync, 0x7ba0b3cf, "_gpl");
SYMBOL_CRC(snd_soc_dapm_update_dai, 0x148087c2, "_gpl");
SYMBOL_CRC(snd_soc_dapm_widget_name_cmp, 0xf741718c, "_gpl");
SYMBOL_CRC(snd_soc_dapm_add_routes, 0x6c7b687c, "_gpl");
SYMBOL_CRC(snd_soc_dapm_del_routes, 0x6e336033, "_gpl");
SYMBOL_CRC(snd_soc_dapm_weak_routes, 0x111df214, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_widgets, 0x145de600, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_volsw, 0x2128f382, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_volsw, 0xf2fef9c5, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_enum_double, 0x892f2f94, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_enum_double, 0x5d3260cd, "_gpl");
SYMBOL_CRC(snd_soc_dapm_info_pin_switch, 0x206d8929, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_pin_switch, 0x944260cf, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_pin_switch, 0x323ddbac, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_control, 0xb4c8e7f0, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_controls, 0xa9c7f153, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_dai_widgets, 0xda396a10, "_gpl");
SYMBOL_CRC(snd_soc_dapm_stream_stop, 0x95c92bb9, "_gpl");
SYMBOL_CRC(snd_soc_dapm_enable_pin_unlocked, 0x0754a75b, "_gpl");
SYMBOL_CRC(snd_soc_dapm_enable_pin, 0x837aad40, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_enable_pin_unlocked, 0xf2b105be, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_enable_pin, 0x4249de05, "_gpl");
SYMBOL_CRC(snd_soc_dapm_disable_pin_unlocked, 0xbf9c9f7c, "_gpl");
SYMBOL_CRC(snd_soc_dapm_disable_pin, 0x8d028463, "_gpl");
SYMBOL_CRC(snd_soc_dapm_nc_pin_unlocked, 0x858e584f, "_gpl");
SYMBOL_CRC(snd_soc_dapm_nc_pin, 0x46aca4bb, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_pin_status, 0x7f814883, "_gpl");
SYMBOL_CRC(snd_soc_dapm_ignore_suspend, 0x9d101eb4, "_gpl");
SYMBOL_CRC(snd_soc_dapm_free, 0x51eef11d, "_gpl");
SYMBOL_CRC(snd_soc_dapm_init, 0x839d9975, "_gpl");
SYMBOL_CRC(snd_soc_jack_report, 0x32e4b9a3, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_zones, 0x286d763a, "_gpl");
SYMBOL_CRC(snd_soc_jack_get_type, 0x4dd9ed1a, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_pins, 0x4a7fb851, "_gpl");
SYMBOL_CRC(snd_soc_jack_notifier_register, 0x9f93c97d, "_gpl");
SYMBOL_CRC(snd_soc_jack_notifier_unregister, 0x202bd8ea, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_gpios, 0x5c24c15d, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_gpiods, 0xe81e469b, "_gpl");
SYMBOL_CRC(snd_soc_jack_free_gpios, 0xdabea34d, "_gpl");
SYMBOL_CRC(snd_soc_calc_frame_size, 0x2541a979, "_gpl");
SYMBOL_CRC(snd_soc_params_to_frame_size, 0xee9124b3, "_gpl");
SYMBOL_CRC(snd_soc_calc_bclk, 0x7e606130, "_gpl");
SYMBOL_CRC(snd_soc_params_to_bclk, 0x2acda8a0, "_gpl");
SYMBOL_CRC(snd_soc_tdm_params_to_bclk, 0x6c456e7b, "_gpl");
SYMBOL_CRC(snd_soc_dai_is_dummy, 0xc0486494, "_gpl");
SYMBOL_CRC(snd_soc_dummy_dlc, 0x0da95366, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_sysclk, 0x0f19dda0, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_clkdiv, 0x94ddfa76, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_pll, 0x3db15a33, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_bclk_ratio, 0xcfd51e72, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_fmt, 0xe1a5f7a7, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_tdm_slot, 0x42d820de, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_channel_map, 0x21edcd49, "_gpl");
SYMBOL_CRC(snd_soc_dai_get_channel_map, 0x5c1c1aed, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_tristate, 0xf8912d2d, "_gpl");
SYMBOL_CRC(snd_soc_dai_digital_mute, 0xeab0ea23, "_gpl");
SYMBOL_CRC(snd_soc_dai_action, 0x9bf760bb, "_gpl");
SYMBOL_CRC(snd_soc_dai_active, 0xa932d852, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_startup, 0xfc2e8493, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_shutdown, 0x4e25bdd9, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_trigger, 0x174579f0, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_set_params, 0x4db6bb60, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_get_params, 0x66114ea5, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_ack, 0x0973e438, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_pointer, 0xcf1b7542, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_set_metadata, 0x56a5bbe0, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_get_metadata, 0x1ebd58c8, "_gpl");
SYMBOL_CRC(snd_soc_component_set_sysclk, 0x82f8a615, "_gpl");
SYMBOL_CRC(snd_soc_component_set_pll, 0x6219fee8, "_gpl");
SYMBOL_CRC(snd_soc_component_enable_pin, 0x09560465, "_gpl");
SYMBOL_CRC(snd_soc_component_enable_pin_unlocked, 0x4f25ad04, "_gpl");
SYMBOL_CRC(snd_soc_component_disable_pin, 0xacc484ad, "_gpl");
SYMBOL_CRC(snd_soc_component_disable_pin_unlocked, 0x2e876ec6, "_gpl");
SYMBOL_CRC(snd_soc_component_nc_pin, 0x70c92986, "_gpl");
SYMBOL_CRC(snd_soc_component_nc_pin_unlocked, 0x1b403d71, "_gpl");
SYMBOL_CRC(snd_soc_component_get_pin_status, 0x38b16ef8, "_gpl");
SYMBOL_CRC(snd_soc_component_force_enable_pin, 0xa34de55d, "_gpl");
SYMBOL_CRC(snd_soc_component_force_enable_pin_unlocked, 0x48e8108d, "_gpl");
SYMBOL_CRC(snd_soc_component_get_kcontrol, 0x4d89c53b, "_gpl");
SYMBOL_CRC(snd_soc_component_notify_control, 0xf80c492c, "_gpl");
SYMBOL_CRC(snd_soc_component_set_jack, 0xb17870d2, "_gpl");
SYMBOL_CRC(snd_soc_component_get_jack_type, 0x01303fea, "_gpl");
SYMBOL_CRC(snd_soc_component_init_regmap, 0x9acd3432, "_gpl");
SYMBOL_CRC(snd_soc_component_exit_regmap, 0x2b89fe91, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_open, 0x036b91cc, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_free, 0xdec44fb9, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_trigger, 0x4fabddc7, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_set_params, 0xe958be08, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_params, 0x60a326ce, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_caps, 0x5f39dbbe, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_codec_caps, 0x098b6d99, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_ack, 0x793f6422, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_pointer, 0x288afdc2, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_copy, 0x0f85e17e, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_set_metadata, 0xcb042fed, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_metadata, 0x7b3bdc35, "_gpl");
SYMBOL_CRC(snd_soc_component_read, 0xd50a6007, "_gpl");
SYMBOL_CRC(snd_soc_component_write, 0x244c4519, "_gpl");
SYMBOL_CRC(snd_soc_component_update_bits, 0xe35415b5, "_gpl");
SYMBOL_CRC(snd_soc_component_update_bits_async, 0xbd1b5894, "_gpl");
SYMBOL_CRC(snd_soc_component_read_field, 0x9d7314ff, "_gpl");
SYMBOL_CRC(snd_soc_component_write_field, 0xe33f6e95, "_gpl");
SYMBOL_CRC(snd_soc_component_async_complete, 0x1afc65ed, "_gpl");
SYMBOL_CRC(snd_soc_component_test_bits, 0x888069f8, "_gpl");
SYMBOL_CRC(snd_soc_runtime_action, 0xe3ea32f1, "_gpl");
SYMBOL_CRC(snd_soc_set_runtime_hwparams, 0x955f3bc6, "_gpl");
SYMBOL_CRC(snd_soc_runtime_calc_hw, 0x060b0af5, "_gpl");
SYMBOL_CRC(widget_in_list, 0x1a687be8, "_gpl");
SYMBOL_CRC(dpcm_end_walk_at_be, 0xbe6efe6a, "_gpl");
SYMBOL_CRC(dpcm_be_dai_trigger, 0x3a2b97e4, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_runtime_update, 0xa363b3d3, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_get_substream, 0xab6bcf29, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_dai, 0xdeb055e2, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_component, 0x084f321a, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_card, 0x98348416, "_gpl");
SYMBOL_CRC(devm_snd_dmaengine_pcm_register, 0x2cd0b308, "_gpl");
SYMBOL_CRC(snd_soc_info_enum_double, 0x2bfdd58b, "_gpl");
SYMBOL_CRC(snd_soc_get_enum_double, 0x1a32c879, "_gpl");
SYMBOL_CRC(snd_soc_put_enum_double, 0xd44144c9, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw, 0x04fd5f2a, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw_sx, 0xaae47aec, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw, 0xc7ba913d, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw, 0x026aa5f3, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw_sx, 0x18937cc3, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw_sx, 0xbe5be66f, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw_range, 0x8830d3c5, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw_range, 0x4586e558, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw_range, 0x8bf569e8, "_gpl");
SYMBOL_CRC(snd_soc_limit_volume, 0xf3d2ce77, "_gpl");
SYMBOL_CRC(snd_soc_bytes_info, 0x7ae1d2b2, "_gpl");
SYMBOL_CRC(snd_soc_bytes_get, 0xaf6b8cd9, "_gpl");
SYMBOL_CRC(snd_soc_bytes_put, 0xbf02aec0, "_gpl");
SYMBOL_CRC(snd_soc_bytes_info_ext, 0xd8e5bb48, "_gpl");
SYMBOL_CRC(snd_soc_bytes_tlv_callback, 0xc1a0f5a8, "_gpl");
SYMBOL_CRC(snd_soc_info_xr_sx, 0xdf55ab77, "_gpl");
SYMBOL_CRC(snd_soc_get_xr_sx, 0xd2bb1480, "_gpl");
SYMBOL_CRC(snd_soc_put_xr_sx, 0x176b204e, "_gpl");
SYMBOL_CRC(snd_soc_get_strobe, 0xa7ed4ffa, "_gpl");
SYMBOL_CRC(snd_soc_put_strobe, 0xdbf47079, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_startup, 0x9b97839b, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_shutdown, 0x1178bd80, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_set_params, 0xda84d77d, "_gpl");
SYMBOL_CRC(snd_soc_card_get_kcontrol, 0x49d91fad, "_gpl");
SYMBOL_CRC(snd_soc_card_jack_new, 0x7cce589b, "_gpl");
SYMBOL_CRC(snd_soc_card_jack_new_pins, 0x9b76ae25, "_gpl");
SYMBOL_CRC(snd_soc_card_add_dai_link, 0xe216ec8b, "_gpl");
SYMBOL_CRC(snd_soc_card_remove_dai_link, 0x8fff9ae0, "_gpl");
SYMBOL_CRC(snd_soc_new_compress, 0xb7b39fc5, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_prepare_slave_config, 0x2c6921cc, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_register, 0x040af04d, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_unregister, 0xf3e800a7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xab8bc1a2, "snd_pcm_rate_mask_intersect" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0x15058ed7, "gpiod_put" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x469438cc, "of_node_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xbbdd3e30, "snd_pcm_hw_limit_rates" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x3eff421, "regmap_get_val_bytes" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x38fcc4f6, "snd_dmaengine_pcm_sync_stop" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb9ece412, "snd_jack_report" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0x6cfb64fe, "regmap_raw_read" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0x78bc2567, "devres_destroy" },
	{ 0x96848186, "scnprintf" },
	{ 0xa458afe9, "gpiod_get_index" },
	{ 0xd323a7b7, "snd_dmaengine_pcm_trigger" },
	{ 0xc00e0644, "snd_pcm_hw_constraint_minmax" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x285c647d, "gpiod_export" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b21d1e1, "dma_release_channel" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x148653, "vsnprintf" },
	{ 0x5d4699ce, "regulator_disable_deferred" },
	{ 0x5a1edda3, "snd_ctl_free_one" },
	{ 0xb62cadeb, "snd_ctl_find_id" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0xde5315ca, "devres_add" },
	{ 0xc1728bb0, "snd_pcm_new_internal" },
	{ 0x7a1c2aba, "of_get_property" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xf8cacad3, "snd_dmaengine_pcm_refine_runtime_hwparams" },
	{ 0xbc4c32ec, "snd_dmaengine_pcm_get_chan" },
	{ 0x2536a64a, "pinctrl_pm_select_default_state" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdc04138f, "snd_pcm_stream_unlock_irq" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x84c818c7, "devm_kstrdup" },
	{ 0xb0fcfbbc, "snd_pcm_stream_lock_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9a3a6576, "debugfs_lookup_and_remove" },
	{ 0x36dc6ece, "put_device" },
	{ 0x8c191e7b, "gpiod_unexport" },
	{ 0xa4435faa, "snd_component_add" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x223d6547, "snd_dmaengine_pcm_close" },
	{ 0x3bfc93cf, "dma_get_slave_caps" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9d9e8944, "module_put" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x306f753, "snd_card_new" },
	{ 0xe59b5736, "snd_card_disconnect_sync" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xdd322d46, "snd_dmaengine_pcm_request_channel" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x147c8e68, "pinctrl_pm_select_sleep_state" },
	{ 0x5d809a68, "simple_open" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x362a075c, "snd_pcm_lib_ioctl" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xdc02eb39, "dmi_available" },
	{ 0x72873ffc, "snd_jack_new" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb5c0ffa, "snd_pcm_stream_unlock_irqrestore" },
	{ 0xa2357a44, "snd_jack_add_new_kctl" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3e7bb035, "dev_get_regmap" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x93d1d1e4, "snd_ctl_notify" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xb84bf9e4, "regulator_allow_bypass" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0xdb3e916f, "regmap_async_complete" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x85bdb3f9, "snd_pcm_set_managed_buffer" },
	{ 0x6451e759, "_snd_pcm_stream_lock_irqsave_nested" },
	{ 0x11089ac7, "_ctype" },
	{ 0x28b118b6, "device_register" },
	{ 0x564c900c, "bpf_trace_run1" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x3f302749, "debugfs_create_u32" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x6ed8b709, "snd_dmaengine_pcm_open" },
	{ 0xabf686ac, "regmap_parse_val" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x33d5f3c5, "snd_dmaengine_pcm_pointer" },
	{ 0x99546f5c, "of_graph_get_port_parent" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x4ac34dbd, "dma_request_chan" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0xe6b525d4, "pinctrl_lookup_state" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x661256ad, "seq_read" },
	{ 0xd4f6529c, "snd_compress_new" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x1bc182c4, "snd_hwparams_to_dma_slave_config" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3034b00c, "devm_pinctrl_get" },
	{ 0xd21b61bd, "async_schedule_node_domain" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2862394e, "pinctrl_select_state" },
	{ 0x604dd937, "snd_pcm_hw_constraint_msbits" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x945fcc46, "of_count_phandle_with_args" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x522e77e7, "snd_dmaengine_pcm_set_config_from_dai_data" },
	{ 0xbadbda04, "device_add_groups" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x893a5557, "regmap_exit" },
	{ 0x81188c30, "match_string" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xee1be65c, "regmap_raw_write" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x71c90ddc, "single_open" },
	{ 0xa286a234, "snd_pcm_format_name" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x815588a6, "clk_enable" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xebe20c1, "of_property_read_string_helper" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xb1441b25, "snd_dmaengine_pcm_pointer_no_residue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-pcm-dmaengine,snd-compress");


MODULE_INFO(srcversion, "D6B42151F1F3A24972349EE");
