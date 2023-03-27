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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe51a70f7, "input_device_enabled" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x96848186, "scnprintf" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x25b50ab1, "fwnode_property_read_string" },
	{ 0x2bcd02e8, "irq_of_parse_and_map" },
	{ 0x7a49fbe0, "fwnode_property_present" },
	{ 0x87fc0b31, "fwnode_property_read_u32_array" },
	{ 0x50263445, "of_fwnode_ops" },
	{ 0x5926a33b, "device_property_read_string" },
	{ 0xa387f57e, "device_property_present" },
	{ 0x238873f3, "device_get_child_node_count" },
	{ 0x248cf697, "gpiod_cansleep" },
	{ 0xe4c3763f, "gpiod_set_debounce" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfa6d6f4c, "gpiod_is_active_low" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0xb48e5cec, "devm_gpio_request_one" },
	{ 0xd5038891, "devm_fwnode_gpiod_get_index" },
	{ 0x66d72ac, "device_get_next_child_node" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0xbe56d94c, "devm_request_any_context_irq" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x771f85fb, "input_event" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
	{ 0xaf18e39b, "gpiod_get_value" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "977BC2C7C8360BA56889E48");
