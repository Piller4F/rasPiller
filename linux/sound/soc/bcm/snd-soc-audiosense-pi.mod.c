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
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x5152826b, "snd_pcm_hw_constraint_msbits" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x293ea448, "snd_pcm_hw_constraint_list" },
	{ 0xd0f9583a, "snd_soc_unregister_card" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x64591ba4, "snd_soc_dai_set_sysclk" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x30f8c3c, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cas,audiosense-pi");
MODULE_ALIAS("of:N*T*Cas,audiosense-piC*");

MODULE_INFO(srcversion, "C7232EC1672CCB252C1EC13");
