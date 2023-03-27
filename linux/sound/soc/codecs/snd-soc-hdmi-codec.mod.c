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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8c10c6f9, "snd_pcm_hw_constraint_eld" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xab001ea3, "snd_soc_dapm_add_routes" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8809e6c, "snd_ctl_new1" },
	{ 0x649892e8, "snd_pcm_create_iec958_consumer_default" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xc881751e, "snd_pcm_fill_iec958_consumer" },
	{ 0x37a0cba, "kfree" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0x7f09dea5, "snd_pcm_add_chmap_ctls" },
	{ 0xd565f92f, "snd_soc_jack_report" },
	{ 0xb87de145, "snd_ctl_add" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x5c407196, "snd_pcm_fill_iec958_consumer_hw_params" },
	{ 0xca4cf59e, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "29A03BBFA33195198FF56B6");
