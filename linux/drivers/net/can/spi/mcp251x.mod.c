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
	{ 0xaae7faf5, "can_change_mtu" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x738d543, "can_put_echo_skb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0x7da4ac10, "open_candev" },
	{ 0x60e5cc72, "netif_device_attach" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4e553255, "close_candev" },
	{ 0xc8cbd20d, "spi_get_device_id" },
	{ 0xe5c61ec4, "devm_gpiochip_add_data_with_key" },
	{ 0xe5c02461, "netdev_info" },
	{ 0xa387f57e, "device_property_present" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x3a68c7b2, "register_candev" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0x73b71578, "spi_setup" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe3cb7337, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3adb6eb6, "devm_clk_get_optional" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x835033cd, "netdev_err" },
	{ 0x2707f7c0, "can_get_echo_skb" },
	{ 0x2713098, "can_bus_off" },
	{ 0x30cceca, "alloc_can_err_skb" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf0f31154, "free_candev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0xbd2131f0, "unregister_candev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x97df9f42, "gpiochip_get_data" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe432fc34, "alloc_can_skb" },
	{ 0x36043ee3, "spi_write_then_read" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2715240, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb9f3fc35, "can_free_echo_skb" },
	{ 0x71ef59f8, "consume_skb" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "AE778549642376519C2D4B8");
