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
	{ 0xe2bd2e91, "param_ops_string" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x4f66f641, "platform_get_irq_optional" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xdb4f3503, "__devm_uio_register_device" },
	{ 0x5f9abf, "devm_kstrdup" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x2c761af5, "__pm_runtime_disable" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("of:N*T*");
MODULE_ALIAS("of:N*T*C*");

MODULE_INFO(srcversion, "A159FBEF0B6BDA203BF8FEB");
