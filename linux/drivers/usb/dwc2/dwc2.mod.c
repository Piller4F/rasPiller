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
	{ 0xffb50d2f, "phy_init" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xcc50ac7d, "usb_gadget_map_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x746a0650, "usb_add_hcd" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x8c26046f, "usb_hcd_unmap_urb_for_dma" },
	{ 0x4558a487, "single_open" },
	{ 0x396d7aec, "devm_phy_get" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd6c2af8a, "usb_remove_hcd" },
	{ 0xea124bd1, "gcd" },
	{ 0x1e69b5ad, "usb_debug_root" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0x60ccffd4, "dma_set_mask" },
	{ 0x68bae379, "single_release" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x513d6f7f, "usb_create_hcd" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5494dec9, "usb_del_gadget_udc" },
	{ 0x7be89624, "usb_gadget_giveback_request" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1ad09590, "usb_hcd_giveback_urb" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xdcf25530, "seq_read" },
	{ 0x3adb6eb6, "devm_clk_get_optional" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x265c90ab, "__devm_reset_control_get" },
	{ 0x5966c90b, "dma_set_coherent_mask" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4aef05b3, "usb_hub_clear_tt_buffer" },
	{ 0xd5a90eda, "usb_gadget_set_state" },
	{ 0xe463b667, "usb_put_hcd" },
	{ 0x8c1c49b8, "usb_role_switch_register" },
	{ 0xa10417cc, "phy_power_off" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0x84937b2, "usb_gadget_unmap_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x42790c9f, "dmam_free_coherent" },
	{ 0x2e80a424, "dma_sync_single_for_cpu" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xe9e1234a, "usb_hcd_link_urb_to_ep" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0xdbffb989, "phy_power_on" },
	{ 0x107fca41, "phy_reset" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5926a33b, "device_property_read_string" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x5ff38fa7, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x26559349, "of_match_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x4fe38208, "usb_hcd_check_unlink_urb" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x44239691, "_dev_info" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0x89e9194a, "debugfs_create_regset32" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0xafdac584, "phy_exit" },
	{ 0x69afa598, "devm_usb_get_phy" },
	{ 0x110a2aca, "usb_add_gadget_udc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xae553d4b, "usb_hcd_map_urb_for_dma" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0x7a41b9f2, "usb_ep_set_maxpacket_limit" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x80f6a052, "usb_get_dr_mode" },
	{ 0x1690b503, "usb_role_switch_get_drvdata" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x4f336844, "dma_sync_single_for_device" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0x72f6dca1, "usb_phy_set_charger_current" },
	{ 0x20bb3feb, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7606362, "platform_get_irq" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x75554048, "devm_platform_get_and_ioremap_resource" },
	{ 0xf2a504e0, "usb_wakeup_enabled_descendants" },
	{ 0xf1efd2fc, "usb_hcd_unlink_urb_from_ep" },
	{ 0xb405ab58, "usb_hcd_resume_root_hub" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa387f57e, "device_property_present" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xde3fe2c3, "regulator_enable" },
};

MODULE_INFO(depends, "roles");

MODULE_ALIAS("acpi*:BCM2848:*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usb");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usbC*");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usb");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usbC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usb");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usb");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usb");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usbC*");
MODULE_ALIAS("of:N*T*Csnps,dwc2");
MODULE_ALIAS("of:N*T*Csnps,dwc2C*");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotg");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotgC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-usbC*");
MODULE_ALIAS("of:N*T*Camcc,dwc-otg");
MODULE_ALIAS("of:N*T*Camcc,dwc-otgC*");
MODULE_ALIAS("of:N*T*Capm,apm82181-dwc-otg");
MODULE_ALIAS("of:N*T*Capm,apm82181-dwc-otgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-fsotg");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-fsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-hsotgC*");

MODULE_INFO(srcversion, "8613F698607B174FC74A24E");
