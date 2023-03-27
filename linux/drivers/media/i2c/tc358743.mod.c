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
	{ 0x27339f09, "param_ops_int" },
	{ 0x1a51dca6, "v4l2_event_subdev_unsubscribe" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0xe865c4ed, "cec_delete_adapter" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x80e2d92e, "v4l2_fwnode_endpoint_free" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x47c74cf2, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x7db56bdd, "of_graph_get_next_endpoint" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0x5df3f798, "cec_register_adapter" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x905275c, "v4l2_async_register_subdev" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xcdf08f98, "cec_s_phys_addr" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x1a74c56c, "v4l2_subdev_notify_event" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x22813011, "hdmi_infoframe_log" },
	{ 0x998cc3c, "hdmi_infoframe_unpack" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x660e10cf, "__v4l2_ctrl_s_ctrl" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x9618d257, "v4l2_device_unregister_subdev" },
	{ 0x705a7f81, "v4l2_async_unregister_subdev" },
	{ 0x3802ed54, "cec_unregister_adapter" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xee93614d, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x71f93ddd, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "videodev,cec,v4l2-fwnode,v4l2-async,mc,v4l2-dv-timings");

MODULE_ALIAS("of:N*T*Ctoshiba,tc358743");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358743C*");
MODULE_ALIAS("i2c:tc358743");

MODULE_INFO(srcversion, "E41ADD7218AB6C60C17A6B9");
