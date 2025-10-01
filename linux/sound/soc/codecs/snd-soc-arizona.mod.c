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

KSYMTAB_FUNC(arizona_init_spk, "_gpl", "");
KSYMTAB_FUNC(arizona_init_spk_irqs, "_gpl", "");
KSYMTAB_FUNC(arizona_free_spk_irqs, "_gpl", "");
KSYMTAB_FUNC(arizona_init_mono, "_gpl", "");
KSYMTAB_FUNC(arizona_init_gpio, "_gpl", "");
KSYMTAB_FUNC(arizona_init_common, "_gpl", "");
KSYMTAB_FUNC(arizona_init_vol_limit, "_gpl", "");
KSYMTAB_DATA(arizona_mixer_texts, "_gpl", "");
KSYMTAB_DATA(arizona_mixer_values, "_gpl", "");
KSYMTAB_DATA(arizona_mixer_tlv, "_gpl", "");
KSYMTAB_DATA(arizona_sample_rate_text, "_gpl", "");
KSYMTAB_DATA(arizona_sample_rate_val, "_gpl", "");
KSYMTAB_FUNC(arizona_sample_rate_val_to_name, "_gpl", "");
KSYMTAB_DATA(arizona_rate_text, "_gpl", "");
KSYMTAB_DATA(arizona_rate_val, "_gpl", "");
KSYMTAB_DATA(arizona_isrc_fsh, "_gpl", "");
KSYMTAB_DATA(arizona_isrc_fsl, "_gpl", "");
KSYMTAB_DATA(arizona_asrc_rate1, "_gpl", "");
KSYMTAB_DATA(arizona_in_vd_ramp, "_gpl", "");
KSYMTAB_DATA(arizona_in_vi_ramp, "_gpl", "");
KSYMTAB_DATA(arizona_out_vd_ramp, "_gpl", "");
KSYMTAB_DATA(arizona_out_vi_ramp, "_gpl", "");
KSYMTAB_DATA(arizona_lhpf1_mode, "_gpl", "");
KSYMTAB_DATA(arizona_lhpf2_mode, "_gpl", "");
KSYMTAB_DATA(arizona_lhpf3_mode, "_gpl", "");
KSYMTAB_DATA(arizona_lhpf4_mode, "_gpl", "");
KSYMTAB_DATA(arizona_ng_hold, "_gpl", "");
KSYMTAB_DATA(arizona_in_hpf_cut_enum, "_gpl", "");
KSYMTAB_DATA(arizona_in_dmic_osr, "_gpl", "");
KSYMTAB_DATA(arizona_anc_input_src, "_gpl", "");
KSYMTAB_DATA(arizona_anc_ng_enum, "_gpl", "");
KSYMTAB_DATA(arizona_output_anc_src, "_gpl", "");
KSYMTAB_DATA(arizona_voice_trigger_switch, "_gpl", "");
KSYMTAB_FUNC(arizona_input_analog, "_gpl", "");
KSYMTAB_FUNC(arizona_in_ev, "_gpl", "");
KSYMTAB_FUNC(arizona_out_ev, "_gpl", "");
KSYMTAB_FUNC(arizona_hp_ev, "_gpl", "");
KSYMTAB_FUNC(arizona_dvfs_up, "_gpl", "");
KSYMTAB_FUNC(arizona_dvfs_down, "_gpl", "");
KSYMTAB_FUNC(arizona_dvfs_sysclk_ev, "_gpl", "");
KSYMTAB_FUNC(arizona_init_dvfs, "_gpl", "");
KSYMTAB_FUNC(arizona_anc_ev, "_gpl", "");
KSYMTAB_FUNC(arizona_clk_ev, "_gpl", "");
KSYMTAB_FUNC(arizona_set_sysclk, "_gpl", "");
KSYMTAB_DATA(arizona_dai_ops, "_gpl", "");
KSYMTAB_DATA(arizona_simple_dai_ops, "_gpl", "");
KSYMTAB_FUNC(arizona_init_dai, "_gpl", "");
KSYMTAB_FUNC(arizona_set_fll_refclk, "_gpl", "");
KSYMTAB_FUNC(arizona_set_fll, "_gpl", "");
KSYMTAB_FUNC(arizona_init_fll, "_gpl", "");
KSYMTAB_FUNC(arizona_set_output_mode, "_gpl", "");
KSYMTAB_DATA(arizona_adsp2_rate_controls, "_gpl", "");
KSYMTAB_FUNC(arizona_eq_coeff_put, "_gpl", "");
KSYMTAB_FUNC(arizona_lhpf_coeff_put, "_gpl", "");
KSYMTAB_FUNC(arizona_of_get_audio_pdata, "_gpl", "");
KSYMTAB_FUNC(arizona_jack_codec_dev_probe, "_gpl", "");
KSYMTAB_FUNC(arizona_jack_codec_dev_remove, "_gpl", "");
KSYMTAB_FUNC(arizona_jack_set_jack, "_gpl", "");

SYMBOL_CRC(arizona_init_spk, 0x9ce9c721, "_gpl");
SYMBOL_CRC(arizona_init_spk_irqs, 0xa96b28d9, "_gpl");
SYMBOL_CRC(arizona_free_spk_irqs, 0xaa50477d, "_gpl");
SYMBOL_CRC(arizona_init_mono, 0xd86fb372, "_gpl");
SYMBOL_CRC(arizona_init_gpio, 0xaf8f70a9, "_gpl");
SYMBOL_CRC(arizona_init_common, 0xe2a1ac84, "_gpl");
SYMBOL_CRC(arizona_init_vol_limit, 0xfc898c26, "_gpl");
SYMBOL_CRC(arizona_mixer_texts, 0x7f26f273, "_gpl");
SYMBOL_CRC(arizona_mixer_values, 0x729a5ef3, "_gpl");
SYMBOL_CRC(arizona_mixer_tlv, 0xc9c29637, "_gpl");
SYMBOL_CRC(arizona_sample_rate_text, 0x69102a20, "_gpl");
SYMBOL_CRC(arizona_sample_rate_val, 0xdfe804b8, "_gpl");
SYMBOL_CRC(arizona_sample_rate_val_to_name, 0x7fcb929a, "_gpl");
SYMBOL_CRC(arizona_rate_text, 0xab4d845c, "_gpl");
SYMBOL_CRC(arizona_rate_val, 0x46277216, "_gpl");
SYMBOL_CRC(arizona_isrc_fsh, 0xbfb17a79, "_gpl");
SYMBOL_CRC(arizona_isrc_fsl, 0x2420386f, "_gpl");
SYMBOL_CRC(arizona_asrc_rate1, 0xde5be3e7, "_gpl");
SYMBOL_CRC(arizona_in_vd_ramp, 0x478dd002, "_gpl");
SYMBOL_CRC(arizona_in_vi_ramp, 0x265ab1c2, "_gpl");
SYMBOL_CRC(arizona_out_vd_ramp, 0x103be782, "_gpl");
SYMBOL_CRC(arizona_out_vi_ramp, 0x71ec8642, "_gpl");
SYMBOL_CRC(arizona_lhpf1_mode, 0x51d11cb5, "_gpl");
SYMBOL_CRC(arizona_lhpf2_mode, 0x60390628, "_gpl");
SYMBOL_CRC(arizona_lhpf3_mode, 0xc64e0d9c, "_gpl");
SYMBOL_CRC(arizona_lhpf4_mode, 0x03e93312, "_gpl");
SYMBOL_CRC(arizona_ng_hold, 0x816c2d4d, "_gpl");
SYMBOL_CRC(arizona_in_hpf_cut_enum, 0xd8a7b36e, "_gpl");
SYMBOL_CRC(arizona_in_dmic_osr, 0x88a143b6, "_gpl");
SYMBOL_CRC(arizona_anc_input_src, 0x0e93f73b, "_gpl");
SYMBOL_CRC(arizona_anc_ng_enum, 0x48e31891, "_gpl");
SYMBOL_CRC(arizona_output_anc_src, 0xb56c878b, "_gpl");
SYMBOL_CRC(arizona_voice_trigger_switch, 0xe7aaf4f6, "_gpl");
SYMBOL_CRC(arizona_input_analog, 0x5ce77112, "_gpl");
SYMBOL_CRC(arizona_in_ev, 0xbcab30ee, "_gpl");
SYMBOL_CRC(arizona_out_ev, 0x6f26f508, "_gpl");
SYMBOL_CRC(arizona_hp_ev, 0x9f59eace, "_gpl");
SYMBOL_CRC(arizona_dvfs_up, 0xfcb6e43f, "_gpl");
SYMBOL_CRC(arizona_dvfs_down, 0x51ec0ce8, "_gpl");
SYMBOL_CRC(arizona_dvfs_sysclk_ev, 0xee668532, "_gpl");
SYMBOL_CRC(arizona_init_dvfs, 0x8d29e711, "_gpl");
SYMBOL_CRC(arizona_anc_ev, 0x90db1421, "_gpl");
SYMBOL_CRC(arizona_clk_ev, 0xc83a4943, "_gpl");
SYMBOL_CRC(arizona_set_sysclk, 0xfbbd7415, "_gpl");
SYMBOL_CRC(arizona_dai_ops, 0xa77b84fc, "_gpl");
SYMBOL_CRC(arizona_simple_dai_ops, 0x82cddc2f, "_gpl");
SYMBOL_CRC(arizona_init_dai, 0x94176a40, "_gpl");
SYMBOL_CRC(arizona_set_fll_refclk, 0xda42945b, "_gpl");
SYMBOL_CRC(arizona_set_fll, 0x3a7789f1, "_gpl");
SYMBOL_CRC(arizona_init_fll, 0xabac56fd, "_gpl");
SYMBOL_CRC(arizona_set_output_mode, 0x1218c955, "_gpl");
SYMBOL_CRC(arizona_adsp2_rate_controls, 0x50625b91, "_gpl");
SYMBOL_CRC(arizona_eq_coeff_put, 0x704c88ae, "_gpl");
SYMBOL_CRC(arizona_lhpf_coeff_put, 0x7d6a6522, "_gpl");
SYMBOL_CRC(arizona_of_get_audio_pdata, 0x0150852f, "_gpl");
SYMBOL_CRC(arizona_jack_codec_dev_probe, 0x3c46e36a, "_gpl");
SYMBOL_CRC(arizona_jack_codec_dev_remove, 0xe3a7b9df, "_gpl");
SYMBOL_CRC(arizona_jack_set_jack, 0xa0a2cf86, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb724c49d, "regulator_enable" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x15058ed7, "gpiod_put" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa34de55d, "snd_soc_component_force_enable_pin" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x3eff421, "regmap_get_val_bytes" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x32e4b9a3, "snd_soc_jack_report" },
	{ 0xbf02aec0, "snd_soc_bytes_put" },
	{ 0xd50a6007, "snd_soc_component_read" },
	{ 0x74e0bd7f, "gpiod_set_raw_value_cansleep" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xd44144c9, "snd_soc_put_enum_double" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x244c4519, "snd_soc_component_write" },
	{ 0x7ba0b3cf, "snd_soc_dapm_sync" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x12a51d51, "arizona_clk32k_disable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x1a32c879, "snd_soc_get_enum_double" },
	{ 0x6bea7ebf, "arizona_clk32k_enable" },
	{ 0x77cdfe6a, "arizona_set_irq_wake" },
	{ 0x4fd5f2a, "snd_soc_info_volsw" },
	{ 0x8d15784e, "arizona_free_irq" },
	{ 0xc529465e, "devm_gpio_request_one" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf2fef9c5, "snd_soc_dapm_put_volsw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb84bf9e4, "regulator_allow_bypass" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcae7cb9b, "snd_pcm_hw_constraint_list" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x6c7b687c, "snd_soc_dapm_add_routes" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x2bfdd58b, "snd_soc_info_enum_double" },
	{ 0x508f371f, "snd_jack_set_key" },
	{ 0x9560465, "snd_soc_component_enable_pin" },
	{ 0x8bd98638, "of_prop_next_u32" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xe35415b5, "snd_soc_component_update_bits" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa9c7f153, "snd_soc_dapm_new_controls" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x44056010, "gpio_to_desc" },
	{ 0xacc484ad, "snd_soc_component_disable_pin" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x80dd4730, "gpiod_get_optional" },
	{ 0x58a80b6c, "_dev_crit" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf2413f61, "regmap_multi_reg_write" },
	{ 0x2128f382, "snd_soc_dapm_get_volsw" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0xea124bd1, "gcd" },
	{ 0xee1be65c, "regmap_raw_write" },
	{ 0xa932d852, "snd_soc_dai_active" },
	{ 0x6e336033, "snd_soc_dapm_del_routes" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2acda8a0, "snd_soc_params_to_bclk" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x110f8f98, "regulator_set_voltage" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5035eb1d, "arizona_request_irq" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,arizona,snd-pcm,snd");


MODULE_INFO(srcversion, "2A27B6EF13314E041EF37FD");
