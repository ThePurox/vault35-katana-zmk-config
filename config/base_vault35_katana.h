#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/outputs.h>

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
