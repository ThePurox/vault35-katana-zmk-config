#include "keys_de.h"
#include <behaviors.dtsi>
#include <dt-bindings/zmk/backlight.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/outputs.h>

#define NAV 1
#define NUM 2
#define SYM 3
#define MED 4
#define QWERTY_BASE

&caps_word {
    continue-list = <UNDERSCORE MINUS BSPC LSHFT RSHFT>;
};


/ {
    combos {
        compatible = "zmk,combos";
/* parentheticals */
        combo_lbrc {
            timeout-ms = <40>;
            key-positions = <1 11>;
            bindings = <&kp DE_LBRC>;
        };
        combo_lbkt {
            timeout-ms = <40>;
            key-positions = <2 12>;
            bindings = <&kp DE_LBKT>;
        };
        combo_lpar {
            timeout-ms = <40>;
            key-positions = <3 13>;
            bindings = <&kp DE_LPAR>;
        };
        combo_lt {
            timeout-ms = <40>;
            key-positions = <4 14>;
            bindings = <&kp DE_LT>;
        };
        combo_gt {
            timeout-ms = <40>;
            key-positions = <5 15>;
            bindings = <&kp DE_GT>;
        };
        combo_rpar {
            timeout-ms = <40>;
            key-positions = <6 16>;
            bindings = <&kp DE_RPAR>;
        };
        combo_rbkt {
            timeout-ms = <40>;
            key-positions = <7 17>;
            bindings = <&kp DE_RBKT>;
        };
        combo_rbrc {
            timeout-ms = <40>;
            key-positions = <8 18>;
            bindings = <&kp DE_RBRC>;
        };
/* caps */
        combo_caps-word {
            timeout-ms = <40>;
            key-positions = <13 16>;
            bindings = <&caps_word>;
        };
        combo_capslock {
            timeout-ms = <40>;
            key-positions = <3 6>;
            bindings = <&kp CAPSLOCK>;
        };
/* deletion */
        combo_bspc {
            timeout-ms = <40>;
            key-positions = <6 7>;
            bindings = <&kp BSPC>;
        };
        combo_del {
            timeout-ms = <40>;
            key-positions = <7 8>;
            bindings = <&kp DEL>;
        };
        combo_delword {
            timeout-ms = <40>;
            key-positions = <6 8>;
            bindings = <&kp LC(BSPC)>;
        };
    };
};


/ {

    behaviors {
        hl: homerow_mods_left {
            compatible = "zmk,behavior-hold-tap";
            label = "homerow mods left";
            #binding-cells = <2>;
            // flavor = "tap-preferred";
            flavor = "balanced";
            tapping-term-ms = <170>;
            quick-tap-ms = <100>;
            // global-quick-tap;
            bindings = <&kp>, <&kp>;
            // opposite side hand keys
            hold-trigger-key-positions = <5 6 7 8 9 15 16 17 18 19 25 26 27 28 29 30 32 33>;
        };
        hr: homerow_mods_right {
            compatible = "zmk,behavior-hold-tap";
            label = "homerow mods right";
            #binding-cells = <2>;
            // flavor = "tap-preferred";
            flavor = "balanced";
            tapping-term-ms = <170>;
            quick-tap-ms = <100>;
            // global-quick-tap;
            bindings = <&kp>, <&kp>;
            // opposite side hand keys
            hold-trigger-key-positions = <0 1 2 3 4 10 11 12 13 14 20 21 22 23 24 30 32 33>;
        };

        my_lt: my_layer_taps {
            compatible = "zmk,behavior-hold-tap";
            label = "my layer taps";
            #binding-cells = <2>;
            // flavor = "tap-preferred";
            flavor = "balanced";
            tapping-term-ms = <170>;
            quick-tap-ms = <100>;
            // global-quick-tap;
            bindings = <&mo &kp>, <&kp>;
            // non-thumb keys
            hold-trigger-key-positions = <0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29>;
        };
    };
};
