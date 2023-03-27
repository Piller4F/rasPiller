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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa51dc25d, "rt_mutex_lock" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x56470118, "__warn_printk" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0xe582db1e, "__i2c_smbus_xfer" },
	{ 0x79f41072, "rt_mutex_trylock" },
	{ 0x9165adee, "rt_mutex_unlock" },
	{ 0x3599f100, "sysfs_remove_link" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf1d26d04, "of_get_child_by_name" },
	{ 0x17cce949, "i2c_adapter_type" },
	{ 0x3c787dd1, "sysfs_create_link" },
	{ 0xeb8454c4, "i2c_del_adapter" },
	{ 0x44239691, "_dev_info" },
	{ 0x37a20e4e, "i2c_smbus_xfer" },
	{ 0x4db460d, "i2c_add_numbered_adapter" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa1438c8f, "of_get_next_child" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xe315b3eb, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x10d2d1ae, "__i2c_transfer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7BED06BCD5A3F14A81CCD58");
