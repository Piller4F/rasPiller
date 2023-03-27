#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x8ec3220e, "arizona_request_irq" },
	{ 0x3e93312, "arizona_lhpf4_mode" },
	{ 0x969554b2, "arizona_set_fll" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x82b21b31, "arizona_free_spk_irqs" },
	{ 0x9404018d, "arizona_lhpf_coeff_put" },
	{ 0x85905795, "arizona_init_vol_limit" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0xcc4445a9, "wm_adsp_early_event" },
	{ 0xb41f770a, "snd_soc_dapm_get_enum_double" },
	{ 0x7f247c40, "arizona_init_dai" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xfd03ebaf, "arizona_in_ev" },
	{ 0x1ddda2f4, "snd_soc_component_disable_pin" },
	{ 0xa6751421, "arizona_jack_set_jack" },
	{ 0x9a50f326, "dapm_regulator_event" },
	{ 0x51d11cb5, "arizona_lhpf1_mode" },
	{ 0x729a5ef3, "arizona_mixer_values" },
	{ 0x88a1dda5, "wm_adsp_compr_set_params" },
	{ 0xb8f6e136, "regmap_write_async" },
	{ 0x926a9cb4, "arizona_dvfs_down" },
	{ 0x13347758, "wm_adsp_compr_trigger" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x334db2f1, "wm_adsp_fw_get" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x9aa7a05, "arizona_init_dvfs" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x98cda18f, "wm_adsp2_init" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x1fbf2ce8, "wm_adsp2_component_remove" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0x101c0ef5, "wm_adsp2_preloader_get" },
	{ 0xc841eec4, "wm_adsp_compr_free" },
	{ 0xf423a684, "arizona_dvfs_up" },
	{ 0x6255e4d1, "wm_adsp2_preloader_put" },
	{ 0x6bf72fbe, "snd_soc_put_volsw_range" },
	{ 0xa4654e8c, "wm_adsp2_component_probe" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x637e8d6d, "wm_adsp_compr_open" },
	{ 0x894458f3, "wm_adsp_fw_enum" },
	{ 0xc9c29637, "arizona_mixer_tlv" },
	{ 0x639c6d73, "arizona_out_ev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5f687f33, "arizona_adsp2_rate_controls" },
	{ 0xe8d4c513, "arizona_clk_ev" },
	{ 0x2a22511d, "snd_soc_add_component_controls" },
	{ 0x170749e5, "arizona_jack_codec_dev_probe" },
	{ 0x16bc1b0f, "snd_soc_info_volsw_range" },
	{ 0x13e19b34, "snd_soc_bytes_info" },
	{ 0x66d2c650, "arizona_init_spk" },
	{ 0xf57080a9, "arizona_hp_ev" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfd2a211f, "snd_soc_get_volsw_range" },
	{ 0x3c71ccdd, "wm_adsp_compr_copy" },
	{ 0x1a38e4f, "wm_adsp_event" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x56c387eb, "arizona_simple_dai_ops" },
	{ 0x6d1f6a79, "wm_adsp_compr_get_caps" },
	{ 0x334bfc12, "arizona_free_irq" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x5227f347, "arizona_set_irq_wake" },
	{ 0xc64e0d9c, "arizona_lhpf3_mode" },
	{ 0x71ec8642, "arizona_out_vi_ramp" },
	{ 0x2420386f, "arizona_isrc_fsl" },
	{ 0x7c6a07ab, "snd_soc_component_init_regmap" },
	{ 0x265ab1c2, "arizona_in_vi_ramp" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x972f6434, "arizona_dai_ops" },
	{ 0x7f26f273, "arizona_mixer_texts" },
	{ 0xa813511f, "arizona_init_fll" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0xccc0ab9d, "arizona_of_get_audio_pdata" },
	{ 0xaa3044a3, "arizona_set_fll_refclk" },
	{ 0xcd614fd3, "arizona_init_gpio" },
	{ 0x44af57c8, "arizona_dvfs_sysclk_ev" },
	{ 0x103be782, "arizona_out_vd_ramp" },
	{ 0x478dd002, "arizona_in_vd_ramp" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x99a0e606, "arizona_eq_coeff_put" },
	{ 0xb7c24b53, "wm_adsp2_remove" },
	{ 0x98cf0444, "arizona_jack_codec_dev_remove" },
	{ 0x983dc881, "snd_soc_bytes_get" },
	{ 0x44870973, "arizona_set_sysclk" },
	{ 0x816c2d4d, "arizona_ng_hold" },
	{ 0x99a83bf6, "snd_soc_new_compress" },
	{ 0xe6a11e2b, "snd_soc_bytes_put" },
	{ 0x625eb096, "wm_adsp_compr_handle_irq" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xb607fd36, "snd_soc_bytes_info_ext" },
	{ 0x88a04ec9, "wm_adsp2_set_dspclk" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x9889519e, "arizona_init_spk_irqs" },
	{ 0x4da3f8c7, "arizona_init_common" },
	{ 0xb0ddedd7, "wm_adsp_compr_pointer" },
	{ 0x410458d5, "wm_adsp_fw_put" },
	{ 0x54fc2a9b, "snd_soc_dapm_put_enum_double" },
	{ 0x60390628, "arizona_lhpf2_mode" },
};

MODULE_INFO(depends, "arizona,snd-soc-arizona,snd-soc-wm-adsp,snd-soc-core");


MODULE_INFO(srcversion, "E0B4BA090E90059B54AD208");
