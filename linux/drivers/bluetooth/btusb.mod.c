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
	{ 0x13445e92, "param_ops_bool" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x37f09290, "of_property_read_variable_u16_array" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xee779107, "btrtl_shutdown_realtek" },
	{ 0x4d8c35d7, "btrtl_setup_realtek" },
	{ 0x55f6b237, "btbcm_set_bdaddr" },
	{ 0xa6b208af, "btbcm_setup_patchram" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0xe0d9c90, "btbcm_setup_apple" },
	{ 0xc357a55b, "btintel_configure_setup" },
	{ 0xa6ee775f, "hci_register_dev" },
	{ 0xecd30577, "usb_driver_claim_interface" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xecd7e4ca, "of_irq_get_byname" },
	{ 0x26559349, "of_match_device" },
	{ 0x970e914f, "usb_match_id" },
	{ 0x6a47613f, "gpiod_get_optional" },
	{ 0x702b033b, "hci_alloc_dev_priv" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2113ba38, "usb_get_from_anchor" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x17ddbd1a, "usb_enable_autosuspend" },
	{ 0xfd782340, "pm_runtime_forbid" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0xbf5a8406, "pm_runtime_allow" },
	{ 0x214e4265, "bt_warn" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xa6d4ab81, "hci_recv_diag" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x81bb8729, "__dev_kfree_skb_irq" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5c0705e2, "btintel_bootup" },
	{ 0x5ec0dbfb, "btintel_secure_send_result" },
	{ 0xbf35443c, "hci_recv_frame" },
	{ 0xb0a6d269, "usb_autopm_put_interface" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x718b8b7, "bt_info" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9a73d57e, "usb_queue_reset_device" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0xc4ff0e53, "__hci_cmd_sync_ev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf4ca96b0, "__hci_cmd_sync" },
	{ 0x7c45c7f8, "usb_driver_release_interface" },
	{ 0x38117856, "hci_free_dev" },
	{ 0x82395752, "gpiod_put" },
	{ 0x2cd2c61a, "hci_unregister_dev" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "btrtl,btbcm,btintel,bluetooth");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2B1E09D0F5300FFE59FAC16");
