//
// Macros
//

extern bool is_turbo_mouse;

// Change language and switch to a layer with letters
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LTR_EN:
      if (record->event.pressed) {
        register_code16(LOPT(LSFT(LCTL(KC_KP_8))));
      }
      else {
        unregister_code16(LOPT(LSFT(LCTL(KC_KP_8))));
        layer_move(_LTR);
      }
      break;

    case LTR_UA:
      if (record->event.pressed) {
        register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
      }
      else {
        unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        layer_move(_LTR);
      }
      break;

      case TTURBO:
        if (record->event.pressed) {
          is_turbo_mouse = true;
        } else {
          is_turbo_mouse = false;
        }
        return false;
  }
  return true;
};
