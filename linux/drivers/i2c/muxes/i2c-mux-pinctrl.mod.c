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
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x44239691, "_dev_info" },
	{ 0x24d079af, "i2c_mux_add_adapter" },
	{ 0xab1a44c0, "i2c_root_adapter" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8d352267, "pinctrl_lookup_state" },
	{ 0x411bd073, "devm_pinctrl_get" },
	{ 0x7a5dffba, "i2c_mux_alloc" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x164050e3, "of_find_i2c_adapter_by_node" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x1ad07240, "of_property_read_string_helper" },
	{ 0xcf28c7ed, "pinctrl_select_state" },
	{ 0xa22b682b, "i2c_put_adapter" },
	{ 0x97eb7767, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrl");
MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrlC*");

MODULE_INFO(srcversion, "43EFAACBE84B0EDD634202A");
