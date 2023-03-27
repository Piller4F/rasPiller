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
	{ 0xf9a482f9, "msleep" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0xc9220ea9, "snd_soc_register_component" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x410839b6, "snd_soc_unregister_component" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x92997ed8, "_printk" },
	{ 0x67ce7ef7, "snd_soc_component_write" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713C*");

MODULE_INFO(srcversion, "0A2C0001ECF0C592F1B2ABA");
