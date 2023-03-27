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
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x68bae379, "single_release" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0xe5c61ec4, "devm_gpiochip_add_data_with_key" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x361f740c, "devm_irq_domain_create_sim" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x5926a33b, "device_property_read_string" },
	{ 0xa4cd005d, "device_property_read_u16_array" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x92997ed8, "_printk" },
	{ 0x21012113, "platform_device_register_full" },
	{ 0x563605b8, "fwnode_create_software_node" },
	{ 0x248e1473, "kfree_strarray" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x941aafa1, "fwnode_remove_software_node" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0x4558a487, "single_open" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb88dbfce, "irq_set_irqchip_state" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0xbd86ca3b, "__irq_resolve_mapping" },
	{ 0xbb5f7ae5, "gpiochip_get_desc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x283d2cbc, "irq_create_mapping_affinity" },
	{ 0x97df9f42, "gpiochip_get_data" },
	{ 0xd5ee3859, "debugfs_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-mockup");
MODULE_ALIAS("of:N*T*Cgpio-mockupC*");

MODULE_INFO(srcversion, "8688769DC011A3E8479D0C7");
