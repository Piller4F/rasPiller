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
	{ 0x44239691, "_dev_info" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0x24d079af, "i2c_mux_add_adapter" },
	{ 0xe354468e, "mux_control_states" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x7a5dffba, "i2c_mux_alloc" },
	{ 0xa1438c8f, "of_get_next_child" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x164050e3, "of_find_i2c_adapter_by_node" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0xb65f1104, "devm_mux_control_get" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xbfc43e73, "mux_control_select" },
	{ 0xe9ea6823, "mux_control_deselect" },
	{ 0xa22b682b, "i2c_put_adapter" },
	{ 0x97eb7767, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "i2c-mux,mux-core");

MODULE_ALIAS("of:N*T*Ci2c-mux");
MODULE_ALIAS("of:N*T*Ci2c-muxC*");

MODULE_INFO(srcversion, "905F9D7E9050EAB93F5DF67");
