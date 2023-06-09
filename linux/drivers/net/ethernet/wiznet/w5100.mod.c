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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe5c02461, "netdev_info" },
	{ 0x349cba85, "strchr" },
	{ 0x129bf20a, "napi_disable" },
	{ 0x1ab402df, "napi_schedule_prep" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc051115b, "free_netdev" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x5682efd3, "netif_receive_skb" },
	{ 0x258e6d74, "napi_enable" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5ff38fa7, "platform_get_resource" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x354f99d0, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x47279311, "__napi_schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8c551e5e, "napi_complete_done" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7606362, "platform_get_irq" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x6f414e08, "gpiod_get_raw_value" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x75554048, "devm_platform_get_and_ioremap_resource" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1b6678ba, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A85EE68F372BC98FC30CA66");
