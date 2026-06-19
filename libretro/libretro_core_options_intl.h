#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 2.0
 ********************************
 */

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
 */

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "hacks",
      "模拟优化",
      "配置处理器超频和影响底层性能与兼容性的模拟精度参数。"
   },
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "snes9x_2010_region",
      "主机区域（重启）",
      NULL,
      "指定主机所在的区域。PAL为50Hz，NTSC为60Hz。如果选择了错误的区域，游戏运行速度会比正常快或慢。",
      NULL,
      NULL,
      {
         { "auto", "自动" },
         { "ntsc", "NTSC" },
         { "pal",  "PAL" },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_audio_interpolation",
      "音频插值（不精确）",
      NULL,
      "选择每个SFC声道音高的插值方式。'高斯'匹配真实硬件。'立方'更明亮清晰，但不匹配硬件且不撤销BRR采样压缩。'Sinc'最清晰/明亮（8抽头）且最耗CPU。",
      NULL,
      NULL,
      {
         { "gaussian", "高斯（精确）" },
         { "cubic",    "立方（更明亮）" },
         { "sinc",     "Sinc（最清晰）" },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_aspect",
      "首选宽高比",
      NULL,
      "选择首选内容宽高比。仅当RetroArch的宽高比在视频设置中设为'核心提供'时才生效。",
      NULL,
      NULL,
      {
         { "4:3",         NULL },
         { "uncorrected", "未校正" },
         { "auto",        "自动" },
         { "ntsc",        "NTSC" },
         { "pal",         "PAL" },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_turbodelay",
      "连发脉冲设置",
      NULL,
      "射击间隔：中 - 6帧，快 - 4帧，慢 - 8帧。",
      NULL,
      NULL,
      {
         { "medium", "中" },
         { "fast", "快" },
         { "slow", "慢" },
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_2010_blargg",
      "Blargg NTSC滤镜",
      NULL,
      "应用视频滤镜来模拟各种NTSC电视信号。",
      NULL,
      NULL,
      {
         { "disabled",   "禁用" },
         { "monochrome", "单色" },
         { "rf",         "RF" },
         { "composite",  "复合" },
         { "s-video",    "S-Video" },
         { "rgb",        "RGB" },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_frameskip",
      "跳帧",
      NULL,
      "跳过帧以避免音频缓冲区欠载（爆音）。以视觉流畅度为代价提高性能。'自动'在前端建议时跳帧。'手动'使用'跳帧阈值（%）'设置。",
      NULL,
      NULL,
      {
         { "disabled", "禁用" },
         { "auto",     "自动" },
         { "manual",   "手动" },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_frameskip_threshold",
      "跳帧阈值（%）",
      NULL,
      "当'跳帧'设为'手动'时，指定音频缓冲区占用率阈值（百分比），低于该值时将跳帧。较高的值通过更频繁地丢帧来降低爆音风险。",
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      NULL
   },
   {
      "snes9x_2010_overclock",
      "SuperFX超频",
      NULL,
      "超频或降频SuperFX芯片。这可能提高使用SuperFX的游戏的帧率和可玩性。",
      NULL,
      "hacks",
      {
         { "5 MHz (Underclock)", "5 MHz（降频）" },
         { "8 MHz (Underclock)", "8 MHz（降频）" },
         { "9 MHz (Underclock)", "9 MHz（降频）" },
         { "10 MHz (Default)",  "10 MHz（默认）" },
         { "11 MHz", NULL },
         { "12 MHz", NULL },
         { "13 MHz", NULL },
         { "14 MHz", NULL },
         { "15 MHz", NULL },
         { "20 MHz", NULL },
         { "30 MHz", NULL },
         { "40 MHz", NULL },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_overclock_cycles",
      "减少卡顿（修改，不安全）",
      NULL,
      "超频SFC CPU。可能导致游戏崩溃！缩短加载时间使用'轻度'，大多数卡顿游戏使用'兼容'，仅在绝对必要时使用'最大'（Gradius 3、Super R-type等）。",
      NULL,
      "hacks",
      {
         { "disabled",   "禁用" },
         { "light",      "轻度" },
         { "compatible", "兼容" },
         { "max",        "最大" },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_reduce_sprite_flicker",
      "减少闪烁（修改，不安全）",
      NULL,
      "增加屏幕上可同时绘制的精灵数量。",
      NULL,
      "hacks",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_block_invalid_vram_access",
      "阻止无效VRAM访问（重启）",
      NULL,
      "某些自制程序/ROM修改需要禁用此选项才能正常运行。",
      NULL,
      "hacks",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_mode7_hires",
      "Mode 7 - 高分辨率（重启）",
      NULL,
      "以更高分辨率渲染Mode 7背景。2x以512像素渲染（更平滑的对角线）；4x以1024像素渲染（最平滑，更耗性能）。2x_hv / 4x_hv变体通过对相邻渲染行进行帧末双线性Y平均来额外垂直加倍输出（448行）；HUD/精灵/非M7层进行行复制。平滑Mode 7地面纹理的行间过渡，但不增加逐行细节（M7平面仍以224个源行采样）。仅影响Mode 7（驾驶/赛车/俯视旋转游戏）。其他模式不变。默认关闭。",
      NULL,
      "hacks",
      {
         { "disabled", "禁用" },
         { "2x",       NULL },
         { "4x",       NULL },
         { "2x_hv",    NULL },
         { "4x_hv",    NULL },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_mode7_hires_bilinear",
      "Mode 7 - 双线性滤镜",
      NULL,
      "对Mode 7背景应用双线性滤镜。稳定：仅沿X轴混合，使用地板Y采样。对高对比度水平条纹（彩虹环、调色板旋转效果）鲁棒；推荐默认。平滑：4角双线性，带行对比度保护，在高对比度行对上回退到稳定行为（避免Tiny Toons标题画面等内容上的模糊接缝）。沿两个轴更积极的平滑；比稳定模式略耗性能。独立于高分辨率选项；在原生、2x和4x下均可工作。",
      NULL,
      "hacks",
      {
         { "disabled", "禁用" },
         { "stable",   "稳定" },
         { "smooth",   "平滑" },
         { NULL, NULL},
      },
      NULL
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};

struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "hacks",
      NULL,
      NULL
   },
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_tr[] = {

   /* These variable names and possible values constitute an ABI with ZMZ (ZSNES Libretro player).
    * Changing "Show layer 1" is fine, but don't change "layer_1"/etc or the possible values ("Yes|No").
    * Adding more variables and rearranging them is safe. */
   {
      "snes9x_2010_overclock",
      "SuperFX Hız Aşırtma",
      NULL,
      "SuperFX işlemcisi frekans çarpanıdır. Kare hızını artırabilir veya zamanlama hatalarına neden olabilir. 10 altındaki değerler yavaş cihazlarda oyun performansını artırabilir.",
      NULL,
      NULL,
      {
         { "40 MHz", NULL },
         { "30 MHz", NULL },
         { "20 MHz", NULL },
         { "15 MHz", NULL },
         { "14 MHz", NULL },
         { "13 MHz", NULL },
         { "12 MHz", NULL },
         { "11 MHz", NULL },
         { "10 MHz (Default)",  NULL },
         { "9 MHz (Underclock)", NULL },
         { "8 MHz (Underclock)", NULL },
         { "5 MHz (Underclock)", NULL },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_overclock_cycles",
      "Yavaşlamayı Azalt (Hack, Güvensiz)",
      "Yavaslamayi Azalt (G�vensiz)",
      "SNES İşlemcisi için hız aşırtmadır. Oyunların çökmesine neden olabilir! Daha kısa yükleme süreleri için 'Hafif'i, yavaşlama gösteren oyunların çoğunda' Uyumlu 've yalnızca kesinlikle gerekliyse' Maks 'kullanın (Gradius 3, Süper R tipi ...).",
      NULL,
      NULL,
      {
         { "disabled",   NULL },
         { "light",      "Hafif" },
         { "compatible", "Uyumlu" },
         { "max",        "Maks" },
         { NULL, NULL},
      },
      NULL
   },
   {
      "snes9x_2010_reduce_sprite_flicker",
      "Kırılmayı Azalt (Hack, Güvensiz)",
      NULL,
      "Ekranda aynı anda çizilebilen sprite sayısını arttırır.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      NULL
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};

struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_SLOVAK */

/* RETRO_LANGUAGE_PERSIAN */

/* RETRO_LANGUAGE_HEBREW */

/* RETRO_LANGUAGE_ASTURIAN */

/* RETRO_LANGUAGE_FINNISH */

#ifdef __cplusplus
}
#endif

#endif
