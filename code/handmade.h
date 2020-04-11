#ifndef HANDMADE_H

// todo(jax): Services that the platform layer provides to the game.

// note(jax): Services that the game provides to the platform layer.
// (this may expand in the future -- sound on seperate thread, etc..)

// FOUR THINGS - timings, controllor/kb input, bitmap buffer to use, sound buffer to use

struct game_offscreen_buffer {
	void* Memory;
	int Width;
	int Height;
	int Pitch;
	int BytesPerPixel = 4;
};

void GameUpdateAndRender(game_offscreen_buffer* Buffer, int BlueOffset, int GreenOffset);

#define HANDMADE_H
#endif