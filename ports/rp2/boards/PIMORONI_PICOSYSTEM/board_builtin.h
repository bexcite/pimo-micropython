#define MICROPY_BOARD_BUILTINS \
    { MP_OBJ_NEW_QSTR(MP_QSTR_Buffer), (mp_obj_t)&PicosystemBuffer_type }, \
    { MP_OBJ_NEW_QSTR(MP_QSTR_Voice), (mp_obj_t)&PicosystemVoice_type }, \
    { MP_ROM_QSTR(MP_QSTR_pen), MP_ROM_PTR(&picosystem_pen_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&picosystem_init_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_start), MP_ROM_PTR(&picosystem_start_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_quit), MP_ROM_PTR(&picosystem_quit_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_flip), MP_ROM_PTR(&picosystem_flip_obj) }, \
    { MP_ROM_QSTR(MP_QSTR__logo), MP_ROM_PTR(&picosystem_logo_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_stats), MP_ROM_PTR(&picosystem_stats_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_play), MP_ROM_PTR(&picosystem_play_obj) }, \
\
    { MP_ROM_QSTR(MP_QSTR_alpha), MP_ROM_PTR(&picosystem_alpha_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_clip), MP_ROM_PTR(&picosystem_clip_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_blend), MP_ROM_PTR(&picosystem_blend_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_target), MP_ROM_PTR(&picosystem_target_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_camera), MP_ROM_PTR(&picosystem_camera_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_cursor), MP_ROM_PTR(&picosystem_cursor_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_spritesheet), MP_ROM_PTR(&picosystem_spritesheet_obj) }, \
\
    { MP_ROM_QSTR(MP_QSTR_clear), MP_ROM_PTR(&picosystem_clear_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_pixel), MP_ROM_PTR(&picosystem_pixel_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_line), MP_ROM_PTR(&picosystem_line_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_hline), MP_ROM_PTR(&picosystem_hline_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_vline), MP_ROM_PTR(&picosystem_vline_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_rect), MP_ROM_PTR(&picosystem_rect_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_frect), MP_ROM_PTR(&picosystem_frect_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_circle), MP_ROM_PTR(&picosystem_circle_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_fcircle), MP_ROM_PTR(&picosystem_fcircle_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_ellipse), MP_ROM_PTR(&picosystem_ellipse_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_fellipse), MP_ROM_PTR(&picosystem_fellipse_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_poly), MP_ROM_PTR(&picosystem_poly_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_fpoly), MP_ROM_PTR(&picosystem_fpoly_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_blit), MP_ROM_PTR(&picosystem_blit_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_sprite), MP_ROM_PTR(&picosystem_sprite_obj) }, \
\
    { MP_ROM_QSTR(MP_QSTR_text), MP_ROM_PTR(&picosystem_text_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_measure), MP_ROM_PTR(&picosystem_measure_obj) }, \
\
    { MP_ROM_QSTR(MP_QSTR_rgb), MP_ROM_PTR(&picosystem_rgb_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_hsv), MP_ROM_PTR(&picosystem_hsv_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_intersects), MP_ROM_PTR(&picosystem_intersects_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_intersection), MP_ROM_PTR(&picosystem_intersection_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_contains), MP_ROM_PTR(&picosystem_contains_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_pressed), MP_ROM_PTR(&picosystem_pressed_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_button), MP_ROM_PTR(&picosystem_button_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_battery), MP_ROM_PTR(&picosystem_battery_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_led), MP_ROM_PTR(&picosystem_led_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_backlight), MP_ROM_PTR(&picosystem_backlight_obj) }, \
\
    { MP_ROM_QSTR(MP_QSTR_UP), MP_ROM_INT(23) }, \
    { MP_ROM_QSTR(MP_QSTR_DOWN), MP_ROM_INT(20) }, \
    { MP_ROM_QSTR(MP_QSTR_LEFT), MP_ROM_INT(22) }, \
    { MP_ROM_QSTR(MP_QSTR_RIGHT), MP_ROM_INT(21) }, \
\
    { MP_ROM_QSTR(MP_QSTR_A), MP_ROM_INT(18) }, \
    { MP_ROM_QSTR(MP_QSTR_B), MP_ROM_INT(19) }, \
    { MP_ROM_QSTR(MP_QSTR_X), MP_ROM_INT(17) }, \
    { MP_ROM_QSTR(MP_QSTR_Y), MP_ROM_INT(16) }, \
\
    { MP_ROM_QSTR(MP_QSTR_HFLIP), MP_ROM_INT(0x01) }, \
    { MP_ROM_QSTR(MP_QSTR_VFLIP), MP_ROM_INT(0x02) }, \
\
    { MP_ROM_QSTR(MP_QSTR_COPY), MP_ROM_INT(0) }, \
    { MP_ROM_QSTR(MP_QSTR_ALPHA), MP_ROM_INT(1) }, \
    { MP_ROM_QSTR(MP_QSTR_MASK), MP_ROM_INT(2) }, \
    { MP_ROM_QSTR(MP_QSTR_PEN), MP_ROM_INT(3) }, \
    { MP_ROM_QSTR(MP_QSTR_DARKEN), MP_ROM_INT(4) }, \
    { MP_ROM_QSTR(MP_QSTR_LIGHTEN), MP_ROM_INT(5) }, \
    { MP_ROM_QSTR(MP_QSTR_ADD), MP_ROM_INT(6) }, \
    { MP_ROM_QSTR(MP_QSTR_SUBTRACT), MP_ROM_INT(7) }, \
    { MP_ROM_QSTR(MP_QSTR_MULTIPLY), MP_ROM_INT(8) }, \
    { MP_ROM_QSTR(MP_QSTR_DISSOLVE), MP_ROM_INT(9) }, \
\
    { MP_ROM_QSTR(MP_QSTR_CHERRY), MP_ROM_INT( 0 ) }, \
    { MP_ROM_QSTR(MP_QSTR_TOMATO), MP_ROM_INT( 1 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BANANA), MP_ROM_INT( 2 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ORANGE), MP_ROM_INT( 3 ) }, \
    { MP_ROM_QSTR(MP_QSTR_EGGPLANT), MP_ROM_INT( 4 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CARROT), MP_ROM_INT( 5 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTATO), MP_ROM_INT( 6 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPINACH), MP_ROM_INT( 7 ) }, \
    { MP_ROM_QSTR(MP_QSTR_GINGER), MP_ROM_INT( 8 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MEAT), MP_ROM_INT( 9 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BEANS), MP_ROM_INT( 10 ) }, \
    { MP_ROM_QSTR(MP_QSTR_TURNIP), MP_ROM_INT( 11 ) }, \
    { MP_ROM_QSTR(MP_QSTR_STRAWBERRY), MP_ROM_INT( 12 ) }, \
    { MP_ROM_QSTR(MP_QSTR_PUMPKIN), MP_ROM_INT( 13 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CUCUMBER), MP_ROM_INT( 14 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RICE_BOWL), MP_ROM_INT( 15 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CLAW), MP_ROM_INT( 16 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD_WOOD), MP_ROM_INT( 17 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD_FROST), MP_ROM_INT( 18 ) }, \
    { MP_ROM_QSTR(MP_QSTR_AXE), MP_ROM_INT( 19 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SAIS), MP_ROM_INT( 20 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MORNING_STAR), MP_ROM_INT( 21 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BOW_HUNTERS), MP_ROM_INT( 22 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ARROW), MP_ROM_INT( 23 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ARROW_FIRE), MP_ROM_INT( 24 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ARROW_ICE), MP_ROM_INT( 25 ) }, \
    { MP_ROM_QSTR(MP_QSTR_TRIDENT), MP_ROM_INT( 26 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPEAR), MP_ROM_INT( 27 ) }, \
    { MP_ROM_QSTR(MP_QSTR_TRIDENT_FIRE), MP_ROM_INT( 28 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MACHINEGUN), MP_ROM_INT( 29 ) }, \
    { MP_ROM_QSTR(MP_QSTR_PISTOL), MP_ROM_INT( 30 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SHOTGUN), MP_ROM_INT( 31 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ORB_GREEN), MP_ROM_INT( 32 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ORB_RED), MP_ROM_INT( 33 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ORB_YELLOW), MP_ROM_INT( 34 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ORB_BLUE), MP_ROM_INT( 35 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CANDY), MP_ROM_INT( 36 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RUBY_BLUE), MP_ROM_INT( 37 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BUTTON), MP_ROM_INT( 38 ) }, \
    { MP_ROM_QSTR(MP_QSTR_OFFICIAL_LETTER), MP_ROM_INT( 39 ) }, \
    { MP_ROM_QSTR(MP_QSTR_COIN_A), MP_ROM_INT( 40 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SKULL), MP_ROM_INT( 41 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_CHECK), MP_ROM_INT( 42 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_CANCEL), MP_ROM_INT( 43 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ARMOR_WOOD), MP_ROM_INT( 44 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ARMOR_IRON), MP_ROM_INT( 45 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ARMOR_GOLD), MP_ROM_INT( 46 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ARMOR_DIAMOND), MP_ROM_INT( 47 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CORN), MP_ROM_INT( 48 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BROCCOLI), MP_ROM_INT( 49 ) }, \
    { MP_ROM_QSTR(MP_QSTR_COOKIE), MP_ROM_INT( 50 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RADISHES), MP_ROM_INT( 51 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MALLET_FROST), MP_ROM_INT( 52 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CAMPFIRE), MP_ROM_INT( 53 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SHOTGUN_AUTO), MP_ROM_INT( 54 ) }, \
    { MP_ROM_QSTR(MP_QSTR_PISTOL_AUTO), MP_ROM_INT( 55 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BODY_PROTECTOR), MP_ROM_INT( 56 ) }, \
    { MP_ROM_QSTR(MP_QSTR_HAT_WIZARD), MP_ROM_INT( 57 ) }, \
    { MP_ROM_QSTR(MP_QSTR_HELMET_IRON), MP_ROM_INT( 58 ) }, \
    { MP_ROM_QSTR(MP_QSTR_HELMET_VIKING), MP_ROM_INT( 59 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BOOTS_LEATHER), MP_ROM_INT( 60 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BOOTS_IRON), MP_ROM_INT( 61 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BOOTS_GOLD), MP_ROM_INT( 62 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BOOTS_DIAMOND), MP_ROM_INT( 63 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_HEART), MP_ROM_INT( 64 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SLIME_GREEN), MP_ROM_INT( 65 ) }, \
    { MP_ROM_QSTR(MP_QSTR_COIN_B), MP_ROM_INT( 66 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD_IRON), MP_ROM_INT( 67 ) }, \
    { MP_ROM_QSTR(MP_QSTR_DAGGER_IRON), MP_ROM_INT( 68 ) }, \
    { MP_ROM_QSTR(MP_QSTR_VEST_LEATHER), MP_ROM_INT( 69 ) }, \
    { MP_ROM_QSTR(MP_QSTR_DYNAMITE), MP_ROM_INT( 70 ) }, \
    { MP_ROM_QSTR(MP_QSTR_HEALTH_KIT), MP_ROM_INT( 71 ) }, \
    { MP_ROM_QSTR(MP_QSTR_PILOT_GOGGLES), MP_ROM_INT( 72 ) }, \
    { MP_ROM_QSTR(MP_QSTR_HAT_DEMON_KING), MP_ROM_INT( 73 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BOMB), MP_ROM_INT( 74 ) }, \
    { MP_ROM_QSTR(MP_QSTR_WATERING_CAN), MP_ROM_INT( 75 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MASK_DEMON), MP_ROM_INT( 76 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MASK_ELVEN), MP_ROM_INT( 77 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPEECH_BUBBLE_A), MP_ROM_INT( 78 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPEECH_BUBBLE_B), MP_ROM_INT( 79 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_HEART_HALF), MP_ROM_INT( 80 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_HEART_EMPTY), MP_ROM_INT( 81 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_HEART_FROZEN), MP_ROM_INT( 82 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BUTTERFLY), MP_ROM_INT( 83 ) }, \
    { MP_ROM_QSTR(MP_QSTR_TORCH), MP_ROM_INT( 84 ) }, \
    { MP_ROM_QSTR(MP_QSTR_STONE_PIECE), MP_ROM_INT( 85 ) }, \
    { MP_ROM_QSTR(MP_QSTR_PLAYING_CARD), MP_ROM_INT( 86 ) }, \
    { MP_ROM_QSTR(MP_QSTR_DIE), MP_ROM_INT( 87 ) }, \
    { MP_ROM_QSTR(MP_QSTR_HAT_HIGH_KNIGHT_DECORATED), MP_ROM_INT( 88 ) }, \
    { MP_ROM_QSTR(MP_QSTR_HAT_HIGH_KNIGHT), MP_ROM_INT( 89 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_ARROW_UP), MP_ROM_INT( 90 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RING_GOLDEN), MP_ROM_INT( 91 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RING_DEMONS), MP_ROM_INT( 92 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RING_FROST), MP_ROM_INT( 93 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RING_NATURE), MP_ROM_INT( 94 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POUCH_LITTLE), MP_ROM_INT( 95 ) }, \
    { MP_ROM_QSTR(MP_QSTR_COIN_SILVER), MP_ROM_INT( 96 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTION_HEALTH), MP_ROM_INT( 97 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTION_MAGIC), MP_ROM_INT( 98 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RING_DIAMOND), MP_ROM_INT( 99 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RING_EMERALD), MP_ROM_INT( 100 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_STACK_WOOD), MP_ROM_INT( 101 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_STACK_STONE), MP_ROM_INT( 102 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_STACK_SAND), MP_ROM_INT( 103 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_STACK_BIOLOGIC), MP_ROM_INT( 104 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_STACK_LAVA), MP_ROM_INT( 105 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_STACK_IRON), MP_ROM_INT( 106 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_STACK_ICE), MP_ROM_INT( 107 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_STACK_DARK), MP_ROM_INT( 108 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_STACK_GOLD), MP_ROM_INT( 109 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SHIELD_KNIGHT), MP_ROM_INT( 110 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POUCH_LARGE), MP_ROM_INT( 111 ) }, \
    { MP_ROM_QSTR(MP_QSTR_COIN_GOLDEN), MP_ROM_INT( 112 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTION_HEALTH_EMPTY), MP_ROM_INT( 113 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTION_MAGIC_EMPTY), MP_ROM_INT( 114 ) }, \
    { MP_ROM_QSTR(MP_QSTR_WINGS), MP_ROM_INT( 115 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BONE), MP_ROM_INT( 116 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_WOOD), MP_ROM_INT( 117 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_STONE), MP_ROM_INT( 118 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_SAND), MP_ROM_INT( 119 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_BIOLOGIC), MP_ROM_INT( 120 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_LAVA), MP_ROM_INT( 121 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_IRON), MP_ROM_INT( 122 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_ICE), MP_ROM_INT( 123 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_DARK), MP_ROM_INT( 124 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK_GOLD), MP_ROM_INT( 125 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SHIELD_MIRROR), MP_ROM_INT( 126 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SHIELD), MP_ROM_INT( 127 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER_DANDELION), MP_ROM_INT( 128 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER_TULIP_RED), MP_ROM_INT( 129 ) }, \
    { MP_ROM_QSTR(MP_QSTR_GRASS), MP_ROM_INT( 130 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER_TULIP_BLUE), MP_ROM_INT( 131 ) }, \
    { MP_ROM_QSTR(MP_QSTR_WAND_FIRE), MP_ROM_INT( 132 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPEAR_FROST), MP_ROM_INT( 133 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MACHETE), MP_ROM_INT( 134 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LOG), MP_ROM_INT( 135 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MINE), MP_ROM_INT( 136 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MORNING_STAR_LARGE), MP_ROM_INT( 137 ) }, \
    { MP_ROM_QSTR(MP_QSTR_AXE_DOUBLE), MP_ROM_INT( 138 ) }, \
    { MP_ROM_QSTR(MP_QSTR_STONE_SMALL), MP_ROM_INT( 139 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD_SILVER), MP_ROM_INT( 140 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD_SILVER_GREAT), MP_ROM_INT( 141 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD_DIAMOND), MP_ROM_INT( 142 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CROWN), MP_ROM_INT( 143 ) }, \
    { MP_ROM_QSTR(MP_QSTR_GOLD), MP_ROM_INT( 144 ) }, \
    { MP_ROM_QSTR(MP_QSTR_DIAMOND), MP_ROM_INT( 145 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RUBY), MP_ROM_INT( 146 ) }, \
    { MP_ROM_QSTR(MP_QSTR_EMERALD), MP_ROM_INT( 147 ) }, \
    { MP_ROM_QSTR(MP_QSTR_AXE_DOUBLE_GOLD), MP_ROM_INT( 148 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POISON_MUSHROOM), MP_ROM_INT( 149 ) }, \
    { MP_ROM_QSTR(MP_QSTR_ROPE), MP_ROM_INT( 150 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LOG_WITH_LEAF), MP_ROM_INT( 151 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTION_SPEED_EMPTY), MP_ROM_INT( 152 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTION_SPEED), MP_ROM_INT( 153 ) }, \
    { MP_ROM_QSTR(MP_QSTR_EMERALD_CRYSTAL), MP_ROM_INT( 154 ) }, \
    { MP_ROM_QSTR(MP_QSTR_HAT_SEAMONSTER), MP_ROM_INT( 155 ) }, \
    { MP_ROM_QSTR(MP_QSTR_DAGGER_SILVER), MP_ROM_INT( 156 ) }, \
    { MP_ROM_QSTR(MP_QSTR_DAGGER_SILVER_RARE), MP_ROM_INT( 157 ) }, \
    { MP_ROM_QSTR(MP_QSTR_DAGGER_DIAMOND), MP_ROM_INT( 158 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CROWN_KINGS), MP_ROM_INT( 159 ) }, \
    { MP_ROM_QSTR(MP_QSTR_APPLE), MP_ROM_INT( 160 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LEAF_SMALL), MP_ROM_INT( 161 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LEAF_ACORN), MP_ROM_INT( 162 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LEAF_LARGE), MP_ROM_INT( 163 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LEAF_LONG), MP_ROM_INT( 164 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MUSHROOM), MP_ROM_INT( 165 ) }, \
    { MP_ROM_QSTR(MP_QSTR_WOOD), MP_ROM_INT( 166 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_STAR), MP_ROM_INT( 167 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BIRD), MP_ROM_INT( 168 ) }, \
    { MP_ROM_QSTR(MP_QSTR_GREEN_BALL), MP_ROM_INT( 169 ) }, \
    { MP_ROM_QSTR(MP_QSTR_KEY_IRON), MP_ROM_INT( 170 ) }, \
    { MP_ROM_QSTR(MP_QSTR_KEY_GOLD), MP_ROM_INT( 171 ) }, \
    { MP_ROM_QSTR(MP_QSTR_KEY_GOLD_WORM), MP_ROM_INT( 172 ) }, \
    { MP_ROM_QSTR(MP_QSTR_AMULET_FROST), MP_ROM_INT( 173 ) }, \
    { MP_ROM_QSTR(MP_QSTR_AMULET_FIRE), MP_ROM_INT( 174 ) }, \
    { MP_ROM_QSTR(MP_QSTR_AMULET_FOREST), MP_ROM_INT( 175 ) }, \
    { MP_ROM_QSTR(MP_QSTR_WORM), MP_ROM_INT( 176 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LEAF_SMALL_EATEN), MP_ROM_INT( 177 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LEAF_ACORN_EATEN), MP_ROM_INT( 178 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LEAF_LARGE_EATEN), MP_ROM_INT( 179 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LEAF_LONG_EATEN), MP_ROM_INT( 180 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER_SMALL), MP_ROM_INT( 181 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER_MEDIUM), MP_ROM_INT( 182 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER_LARGE), MP_ROM_INT( 183 ) }, \
    { MP_ROM_QSTR(MP_QSTR_TOTEM_IRON_SMALL), MP_ROM_INT( 184 ) }, \
    { MP_ROM_QSTR(MP_QSTR_EYEBALL), MP_ROM_INT( 185 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FISH), MP_ROM_INT( 186 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BURGER), MP_ROM_INT( 187 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_SUN), MP_ROM_INT( 188 ) }, \
    { MP_ROM_QSTR(MP_QSTR_NOTE), MP_ROM_INT( 189 ) }, \
    { MP_ROM_QSTR(MP_QSTR_WATER), MP_ROM_INT( 190 ) }, \
    { MP_ROM_QSTR(MP_QSTR_LADLE), MP_ROM_INT( 191 ) }, \
    { MP_ROM_QSTR(MP_QSTR_AVOCADO), MP_ROM_INT( 192 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTION_WHITE), MP_ROM_INT( 193 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTION_YELLOW), MP_ROM_INT( 194 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTION_GREEN), MP_ROM_INT( 195 ) }, \
    { MP_ROM_QSTR(MP_QSTR_POTION_RED), MP_ROM_INT( 196 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CANDYCANE), MP_ROM_INT( 197 ) }, \
    { MP_ROM_QSTR(MP_QSTR_EGG_FRIED), MP_ROM_INT( 198 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SICKLE_IRON), MP_ROM_INT( 199 ) }, \
    { MP_ROM_QSTR(MP_QSTR_GRAPPLING_HOOK), MP_ROM_INT( 200 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CLIMBING_HOOK), MP_ROM_INT( 201 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CHEESE_A), MP_ROM_INT( 202 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CHEESE_B), MP_ROM_INT( 203 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_SELECT), MP_ROM_INT( 204 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_SETTING_SELECT), MP_ROM_INT( 205 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPELL_FIRE), MP_ROM_INT( 206 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPELL_FIRE_MISSILE), MP_ROM_INT( 207 ) }, \
    { MP_ROM_QSTR(MP_QSTR_MEDICAL_KIT), MP_ROM_INT( 208 ) }, \
    { MP_ROM_QSTR(MP_QSTR_RING_DEATH), MP_ROM_INT( 209 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BLUEBERRIES), MP_ROM_INT( 210 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER_PINK), MP_ROM_INT( 211 ) }, \
    { MP_ROM_QSTR(MP_QSTR_PAN), MP_ROM_INT( 212 ) }, \
    { MP_ROM_QSTR(MP_QSTR_COMPUTER), MP_ROM_INT( 213 ) }, \
    { MP_ROM_QSTR(MP_QSTR_HEADPHONES), MP_ROM_INT( 214 ) }, \
    { MP_ROM_QSTR(MP_QSTR_STONE_TABLET_EMPTY), MP_ROM_INT( 215 ) }, \
    { MP_ROM_QSTR(MP_QSTR_STONE_TABLET_WRITTEN_HALF), MP_ROM_INT( 216 ) }, \
    { MP_ROM_QSTR(MP_QSTR_STONE_TABLET_WRITTEN), MP_ROM_INT( 217 ) }, \
    { MP_ROM_QSTR(MP_QSTR_DEMON_RED), MP_ROM_INT( 218 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BURNING_SPEAR), MP_ROM_INT( 219 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_CURSOR), MP_ROM_INT( 220 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPELL_MANA), MP_ROM_INT( 221 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPELL_MANA_RAIN), MP_ROM_INT( 222 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPELL_MANA_MISSILE), MP_ROM_INT( 223 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BOOK_LARGE), MP_ROM_INT( 224 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CABBAGE), MP_ROM_INT( 225 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CONTAINER), MP_ROM_INT( 226 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER_ROSE), MP_ROM_INT( 227 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_SPACER_A), MP_ROM_INT( 228 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_SPACER_B), MP_ROM_INT( 229 ) }, \
    { MP_ROM_QSTR(MP_QSTR_GLASS), MP_ROM_INT( 230 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_DECREASE), MP_ROM_INT( 231 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_INCREASE), MP_ROM_INT( 232 ) }, \
    { MP_ROM_QSTR(MP_QSTR_EAGLE), MP_ROM_INT( 233 ) }, \
    { MP_ROM_QSTR(MP_QSTR_DEMON_GREEN), MP_ROM_INT( 234 ) }, \
    { MP_ROM_QSTR(MP_QSTR_DEMON_BLUE), MP_ROM_INT( 235 ) }, \
    { MP_ROM_QSTR(MP_QSTR_CORPSE), MP_ROM_INT( 236 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_CURRENT), MP_ROM_INT( 237 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPELL_EMERALD_SPLASH), MP_ROM_INT( 238 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPELL_EMERALD_THUNDER), MP_ROM_INT( 239 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_CLOCK), MP_ROM_INT( 240 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_ATTENTION), MP_ROM_INT( 241 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BATTERY_CELL), MP_ROM_INT( 242 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_QUESTION_MARK), MP_ROM_INT( 243 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_DISABLED_A), MP_ROM_INT( 244 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_DISABLED_B), MP_ROM_INT( 245 ) }, \
    { MP_ROM_QSTR(MP_QSTR_BOW), MP_ROM_INT( 246 ) }, \
    { MP_ROM_QSTR(MP_QSTR_START_MARKER), MP_ROM_INT( 247 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SMALL_START_MARKER), MP_ROM_INT( 248 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLAG_A), MP_ROM_INT( 249 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLAG_B), MP_ROM_INT( 250 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLAG_C), MP_ROM_INT( 251 ) }, \
    { MP_ROM_QSTR(MP_QSTR_FLAG_D), MP_ROM_INT( 252 ) }, \
    { MP_ROM_QSTR(MP_QSTR_UI_ERROR), MP_ROM_INT( 253 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPELL_EXPLOSION), MP_ROM_INT( 254 ) }, \
    { MP_ROM_QSTR(MP_QSTR_SPELL_EXPLOSIVE_MISSILE), MP_ROM_INT( 255 ) },