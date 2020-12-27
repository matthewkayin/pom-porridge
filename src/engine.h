#pragma once

#include <stdbool.h>

extern const int SCREEN_WIDTH;
extern const int SCEEN_HEIGHT;

bool engine_init();
void engine_quit();

void engine_clock_init();
float engine_clock_tick();

void engine_render_state();