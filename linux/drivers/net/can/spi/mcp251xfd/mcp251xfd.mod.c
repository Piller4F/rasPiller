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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xedc84a05, "__devm_regmap_init" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe5c02461, "netdev_info" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x862258db, "timecounter_init" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x3a68c7b2, "register_candev" },
	{ 0x6d3b97c5, "can_rx_offload_queue_sorted" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0x3e6a656a, "netdev_notice" },
	{ 0x129bf20a, "napi_disable" },
	{ 0xe247157e, "regmap_raw_write" },
	{ 0x30cceca, "alloc_can_err_skb" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x73b71578, "spi_setup" },
	{ 0x4e14d824, "can_rx_offload_get_echo_skb" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3adb6eb6, "devm_clk_get_optional" },
	{ 0xe984ffe7, "can_rx_offload_enable" },
	{ 0x2713098, "can_bus_off" },
	{ 0x681d8fba, "netif_schedule_queue" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0xdcb764ad, "memset" },
	{ 0x4e553255, "close_candev" },
	{ 0x3fd5981f, "spi_async" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x5459aeef, "dev_coredumpv" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0x20105980, "driver_unregister" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0xe3cb7337, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf0f31154, "free_candev" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x2715240, "spi_sync" },
	{ 0x37f588ac, "can_rx_offload_add_manual" },
	{ 0xaae7faf5, "can_change_mtu" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0x7c7103a4, "can_change_state" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0xbd2131f0, "unregister_candev" },
	{ 0xe432fc34, "alloc_can_skb" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0x835033cd, "netdev_err" },
	{ 0x6ef1bfa7, "devm_gpiod_put" },
	{ 0x7da4ac10, "open_candev" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xa2f8cb4c, "can_rx_offload_threaded_irq_finish" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2a57f38, "can_skb_get_frame_len" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x36043ee3, "spi_write_then_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc8cbd20d, "spi_get_device_id" },
	{ 0x7cf632a4, "alloc_canfd_skb" },
	{ 0x6c736564, "regmap_get_val_bytes" },
	{ 0x738d543, "can_put_echo_skb" },
	{ 0xbcd951d2, "can_rx_offload_del" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf89a697a, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfdC*");
MODULE_ALIAS("spi:mcp2517fd");
MODULE_ALIAS("spi:mcp2518fd");
MODULE_ALIAS("spi:mcp251xfd");

MODULE_INFO(srcversion, "9613A1ED0310E3E5AB73411");
