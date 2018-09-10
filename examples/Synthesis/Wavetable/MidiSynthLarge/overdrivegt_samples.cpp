#include "overdrivegt_samples.h"
const AudioSynthWavetable::sample_data overdrivegt_samples[3] = {
	{
		(int16_t*)sample_0_overdrivegt_distgtra2, // sample
		true, // LOOP
		11, // LENGTH_BITS
		(1 << (32 - 11)) * CENTS_SHIFT(-45) * 44100.0 / NOTE(72) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)1831 - 1) << (32 - 11), // MAX_PHASE
		((uint32_t)1827 - 1) << (32 - 11), // LOOP_PHASE_END
		(((uint32_t)1827 - 1) << (32 - 11)) - (((uint32_t)1745 - 1) << (32 - 11)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * DECIBEL_SHIFT(-20.2)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.20 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(20.01 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(8315.67 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(100.02 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - DECIBEL_SHIFT(-3.4)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(0.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.4 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_1_overdrivegt_distgtre3, // sample
		true, // LOOP
		11, // LENGTH_BITS
		(1 << (32 - 11)) * CENTS_SHIFT(-35) * 44100.0 / NOTE(79) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)1431 - 1) << (32 - 11), // MAX_PHASE
		((uint32_t)1427 - 1) << (32 - 11), // LOOP_PHASE_END
		(((uint32_t)1427 - 1) << (32 - 11)) - (((uint32_t)1372 - 1) << (32 - 11)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * DECIBEL_SHIFT(-20.2)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.20 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(20.01 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(8315.67 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(100.02 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - DECIBEL_SHIFT(-3.4)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(0.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.4 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_2_overdrivegt_distgtra3, // sample
		true, // LOOP
		11, // LENGTH_BITS
		(1 << (32 - 11)) * CENTS_SHIFT(38) * 44100.0 / NOTE(84) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)1242 - 1) << (32 - 11), // MAX_PHASE
		((uint32_t)1238 - 1) << (32 - 11), // LOOP_PHASE_END
		(((uint32_t)1238 - 1) << (32 - 11)) - (((uint32_t)1195 - 1) << (32 - 11)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * DECIBEL_SHIFT(-20.2)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.20 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(20.01 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(8315.67 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(100.02 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - DECIBEL_SHIFT(-3.4)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(0.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.4 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
};

const uint32_t sample_0_overdrivegt_distgtra2[1024] = {
0x00000000,0xfd58fbd7,0xfdc2fd4c,0xfd0ffdb3,0xfb83fc31,0xfbebfbb8,0xfbf2fc25,0xfcc3fc2a,
0xfec0fde5,0xffeaff73,0x00d30092,0x003700b7,0x00d10037,0x02f60209,0x02a50337,0x016501de,
0x01c30198,0x023401de,0x03ae0300,0x039203e0,0x024d0305,0x01f001d2,0x01890220,0xfeff0037,
0xfea2fe7f,0xffb5ff2a,0xffd3000c,0xfe8cff37,0xfe33fe36,0xfdcafe3b,0xfc39fcf6,0xfc3bfc13,
0xfbdcfc2f,0xfbd9fba4,0xfd88fc8f,0x0007febb,0x02570159,0x01a40291,0xfe0effdb,0xfcbefd00,
0xfc94fcc6,0xf9e6fbb8,0xf576f778,0xf5e7f4c8,0xfe36f924,0x04df0314,0x00880314,0x02310034,
0x070e04e6,0x09960888,0x0ab80a41,0x0a2a0ad3,0x07dd090b,0x061a06d9,0x05a805b5,0x03bd053f,
0xffb0017c,0xfe36fed5,0xfbd7fcfb,0xfdedfc13,0x0032ffc7,0xfea2ff67,0xfdf7fe61,0xfcdffd3f,
0xfe54fd56,0xff2dff2d,0xfc84fdfc,0xfe5efc82,0xfea5ffdb,0xf752fb1f,0xf43bf4f0,0xf365f445,
0xebdff071,0xe694e7b1,0xf6edeb4b,0x193007bf,0x2785254e,0x18132088,0x16711503,0x11281632,
0x05280a3c,0xfe1801d7,0xf727f9f0,0xf65bf659,0xf385f5a8,0xf087f0f1,0xf8e0f3e8,0xfaa3fb83,
0xf5c1f83c,0xedf8f252,0xecc2eb3c,0xf6f7f1e8,0xf910f947,0xf52af77a,0xf18bf2d7,0xf1c0f179,
0xf023f126,0xfedff2cd,0x2fdd1628,0x32443b67,0x19b021ac,0x1e001ba8,0x15cd1afd,0x110412b1,
0x08030e01,0xf3fefedc,0xe3daea59,0xda8ddf53,0xd362d5b5,0xda67d534,0xe9d1e1b4,0xf234f028,
0xe9c7ef36,0xeb0ce733,0x054bf52d,0x3b941d5f,0x4dc15150,0x285b382b,0x31d5299b,0x283832d6,
0x08281765,0xfc6eff3c,0xf679faec,0xe9e7ef5b,0xecc5e923,0xf6ccf215,0xffe2fb03,0x099b0599,
0xfc2a0732,0xda8feb22,0xdeb9d45e,0xfa73f0a8,0xeffff7d5,0xe4a1e92a,0xe3f5e2d1,0xe8a0e641,
0x228cf6bb,0x44b64bbf,0x0c991ec7,0x275f1a59,0xff551ada,0xef45ed1a,0x0edc0073,0x022a0e8c,
0xedf8f541,0xf0a1ed9b,0xd957eb13,0xd259cccc,0xea06e13e,0xe572e873,0x115fee1b,0x561f41d3,
0x27f64285,0x2cad242c,0x252a2c34,0x20a82285,0x1084199f,0xff9e08bd,0xf1d4f698,0xe8a0eec2,
0xdf88e164,0xf291e48f,0x31550f4e,0x269f3bec,0x08e50d0d,0x234c162d,0x15ac251e,0xda69f647,
0xf394dba9,0xfa9902da,0xdc91e8b4,0xd0a6d5ef,0xd4cacffd,0xd38ad70e,0xcc51cef2,0xc815c992,
0xecc0ce83,0x478f242c,0x25f93dc1,0x400c27bf,0x4c2f531a,0xf4b42381,0x054eeb8a,0x058f1586,
0xdaece9d3,0xd3d1d66d,0xe26cd778,0xdbede6d8,0xcebdcdcd,0xef8ede38,0x1405fef0,0x470330f8,
0x33694519,0x32472aea,0x0ebc2e3b,0xf2a3f0a6,0x1ca90970,0x1b78254e,0xceb5f83c,0xd36cc1cb,
0xe86de71c,0xdc6edd3c,0x2cbaffcc,0x1b2f3375,0x16250cc1,0x2e702520,0x3b7b35da,0x0cc430a5,
0xe9a6e911,0x098701e3,0xd8edf4a5,0xbb3fc696,0xbc7db6de,0xc90cc512,0xccbdc9e5,0xea9dd871,
0x04cdf9ee,0x225511d3,0x373f3001,0x3ed93b43,0x47d542f1,0x45e24a37,0xf5dd2dd4,0xc1f8c2cc,
0xf26be32e,0xcf3be2c0,0xc2a4c77c,0xba19bc26,0xc551be5c,0xcf93cacf,0xebb2d86f,0x0f44033d,
0x00c9097d,0x247208fc,0x51254216,0x478650a7,0x2e5e3b5a,0xfd831b2a,0xe708e584,0xf270f436,
0xdffbe157,0x342b09f3,0xfd6228f5,0xfc0cea2e,0xf1bb0b4f,0xcec9cb82,0x09cdf2c3,0x1b8a0a79,
0x4d654198,0x09432d3f,0xf537ff71,0xbbb8d13a,0xeec4d160,0xd819ede7,0xc595c8d5,0xd879c678,
0x2ebe0743,0x109a2b21,0x0d3806cd,0xdc91ff88,0xf6e8d2cd,0x5cb834de,0x1b374adb,0x0e7501e1,
0x32cc2752,0x0bee2ca5,0xa03acd44,0xd513aad4,0xe586ed6b,0xc524d2bc,0xb231baa3,0xc2d6b410,
0xe08bd4df,0xe765e70f,0xe30ee1e9,0xf7d3f21d,0xefbbef56,0x0cc10002,0x00940a0c,0x06b9f9dc,
0x6387397e,0x298c5532,0x21651536,0x43e035c0,0x56044e7d,0x3334525d,0xd0a3f80a,0x0367dccb,
0x063d1506,0xfb0bf3bd,0x19f21411,0xb73bf11c,0xd2fdae35,0xeac8f028,0xc97bd5f1,0xcf8eca2c,
0xdcc3d4f5,0xe462e3da,0xe0f0e089,0xf1b6e6ba,0x08120000,0xf44f01a7,0x0261ed8e,0x5bad3abb,
0x250a4897,0x33b91f7f,0x455d4295,0x1f0442cf,0xb8c2d63d,0x0865dcfd,0xef7f0830,0xcb61da3c,
0xc3c8c11c,0xe23fd38d,0xe74ce79a,0xde2ce49e,0xf067dd2d,0x5ffd29d2,0x31645b98,0x27b71b46,
0x480d3ca7,0x20f443d9,0xef9df358,0x52eb1f89,0x39ae5671,0x12791fc3,0x17170ee7,0x26c824eb,
0x0efd19a6,0x0db10ea2,0x0f370bee,0xe6a50ded,0x9bf2a892,0x23c0d22f,0xdf2034e5,0x8cfc8ce0,
0xd74dbc04,0xd19ad7cb,0xbb9dc8af,0xec58c313,0x13dffe77,0x3a15320d,0x03e51cd7,0x21ae09e4,
0x3fd635a7,0x45c847d0,0xe7562bd7,0xd296bd35,0x0746fdc4,0xd3abefc3,0xc160c4b0,0xcc81c59d,
0xd477cf1c,0xdcb9d9c5,0x34b5f9b6,0x313e4b60,0x1d8a1724,0x468a35eb,0x45714a14,0x4062433f,
0xfdf42d7e,0xea81dd1e,0x0f1b0c5c,0xc870ec17,0xc3b4bd6f,0xcc90c9a8,0xcaf0cdec,0xc572c407,
0xd86fcf10,0xf18de31a,0xfbfcfac4,0x07a3ff8d,0x09c80bd2,0x105b07bc,0x1dd8274b,0xecf7fbc5,
0x06cffcb4,0xedf1fa43,0xf70ef14e,0xefb1f307,0xfe6dee97,0x61453450,0x2f3c55e4,0x34e823d4,
0x481c440e,0x52734cbf,0x1cb1498e,0xc79adac9,0x081ee661,0xe9a6055f,0xc980d31c,0xc68fc4dd,
0xd3f2cd9d,0xd296d55a,0xd9ebcf77,0x3bad0b0b,0x20b03d11,0x2ff21953,0x43884440,0x41ff3ef2,
0x374e40c4,0xdbeb1375,0xddc5c598,0xdcd8f163,0xae58bb9f,0xb35db081,0xbc52b784,0xbf41be28,
0xcb57c3d7,0xda39d227,0xf06ce54c,0x0151f945,0x09730780,0x01950532,0x18d80b95,0x075711f6,
0x119e094d,0x02df0eee,0xff37fc61,0x097a052d,0x09040a8f,0x4d281c1a,0x50dc66cd,0x346032c2,
0x54e94927,0x556b54ed,0x51995769,0xf32631e5,0xe6e9d227,0x0ae00af4,0xd2daec7e,0xc0e8c7e3,
0xc584bee0,0xd206cde7,0xd08fd0d8,0x1848e38e,0x37b83e76,0x20d81ff0,0x47ad3792,0x43744722,
0x3f1542b4,0x1efc3907,0xc446e6e2,0xf023d5f4,0xc64be55b,0xb862b66d,0xbc3bbb05,0xc139bfe6,
0xc4b2c143,0xcfe1cb4b,0xde70d52f,0xf096e8eb,0xfccbf6f5,0xfdd9ffe5,0xfa58f9c3,0x080300c2,
0x0d3f0cbf,0x034e09da,0xf76bfbcf,0xff1bf945,0x065e046b,0x2117082b,0x6c0c54de,0x3966558e,
0x50633c08,0x5ce85bf1,0x5b985ced,0x42ce5551,0xd6fc0b42,0x01a2da7d,0xf2820e06,0xc6f1d346,
0xc1fbc3f5,0xccc7c5c3,0xcc2bcfd4,0xd4bec988,0x32580291,0x21153861,0x25c7171a,0x3c8637b1,
0x3a243a0b,0x30f8392b,0xda200e1f,0xe21cc852,0xe65af75f,0xb5a6c5c0,0xb8b9b639,0xcb25be98,
0xe006d6bb,0xf1b8ea68,0xf498f47a,0xf2e2f48b,0xda4be396,0x0502ec0f,0xf8260800,0xe848ea68,
0xf252ed3b,0xee6af2f6,0xe03ae792,0xdfe7dcbe,0xef93e78b,0xf49bf49b,0x2592f9dc,0x612b5b63,
0x3176405f,0x57e643ab,0x5e375d1c,0x59965f5d,0x1f0e4be8,0xccbbdee6,0x0ea5f062,0xded50076,
0xc0f7c94b,0xc434bf8a,0xd18dcbab,0xccbbd1c0,0xfd26d218,0x3e2832bd,0x1abe27bf,0x399c271d,
0x405441ed,0x3c443dd3,0x276e39d6,0xcdc8f736,0xee41d24f,0xcff5ef01,0xaec9b438,0xc1ecb587,
0xe3afd316,0xf2f3f14e,0xcee0e304,0xee74d433,0xe38cf3b8,0xfb5be533,0xfa0c0617,0xe533ea75,
0xe89be5e1,0xebd3ec97,0xdfefe59a,0xdb79dd2b,0xe21cdc2c,0xf2adebe2,0xef6df186,0x4b9f0da1,
0x4ea8665b,0x39ce34d1,0x561e4cdd,0x56f9565d,0x518556ba,0xfb083965,0xd9d2cd0b,0x09d5022f,
0xd209edf3,0xc40ac73f,0xc815c2c5,0xd68dd117,0xd374d33f,0x285bf19f,0x2d233f13,0x21891990,
0x471b389b,0x44664812,0x3c124209,0xec6f1fa5,0xe499d344,0xf133fc0e,0xb18ccd09,0xb17dab5c,
0xdd9fbfb5,0x0b8b0172,0xdae5f108,0x19baf007,0xf5cb2349,0xd22ac7a9,0x1650ffb7,0xf3580805,
0x03caf3d3,0xd587f43b,0xdd1ccc3f,0xe5d7eb27,0xd39ad7b4,0xe2fcdb35,0xead2e8a7,0xfbe3e9db,
0x5de23779,0x2e6e4ce7,0x49963178,0x55c355ff,0x584557eb,0x3aa64db1,0xd2250849,0xff64d2bc,
0xfa7d1375,0xc8a0d968,0xbfa7c16e,0xd509c845,0xd98bdcf8,0xdc0ed1e1,0x44060fcc,0x319149f1,
0x354c274d,0x48b644a2,0x47a84718,0x3a274746,0xdbf20bd4,0xf16dd6e3,0xe2c2fb81,0xb3b9c1c1,
0xedf8c290,0x1a6b19bd,0xd9eef2f8,0x1375efeb,0x0c3e1ef2,0xf1def3a4,0xe87aedc1,0xfd97f0fb,
0xea12f9eb,0xd43bdae2,0xdaa8d630,0xd9dfdc75,0xcfb9d605,0xce1ecc21,0xe098d6a9,0xe730e650,
0x3054f8a6,0x52815b78,0x2c6c31d8,0x51ac41e6,0x570a5446,0x4c5f571a,0x0c693ad7,0xc7bdd1fa,
0x0c37f046,0xd883face,0xbdf4c446,0xc8dfbfad,0xde06d5ce,0xd5b7db8e,0x15d2e2d9,0x427342b9,
0x26c52b24,0x4a1638e4,0x4b8e4eb3,0x3e7e48db,0xe1b91566,0xfc3bdd08,0xf6920c27,0xb807d1e8,
0xc63cb0cb,0x185ffb98,0xdc5af8d9,0x1258f177,0x0fb317a9,0x29221884,0xcee00a5a,0xf698c97e,
0x046d11d5,0xdca0edb4,0xce37d0e5,0xd511d31e,0xcf31d27a,0xc9a1cc8d,0xd3edca4c,0xe471df1b,
0xf291e420,0x5e132c2d,0x2f4e5492,0x3dda297a,0x52ca4c27,0x5a5d5ad5,0x3c424ca3,0xd4c3143a,
0xe700c03a,0x030d0ccb,0xc20ddd26,0xbf8fbbde,0xd30fc742,0xd9acdbcd,0xd9e4cfd7,0x40050f26,
0x2bd94181,0x36822707,0x4c734681,0x46384a40,0xf8b53056,0xeb64d5c9,0x0a760d97,0xcb9eea7c,
0xb3b9b7d0,0xe9dbcc19,0xf766ecc5,0x17981339,0xeb16f800,0x36ef0ef6,0xe762290e,0xe453c641,
0x0e640c1d,0xef2cfd53,0xd7a3e1b4,0xdaefd800,0xd188d582,0xcfbed160,0xd2afcc74,0xe655dec0,
0xe38ee6b2,0x28b3efa7,0x59e35d8b,0x2e043875,0x49b73b97,0x578b521e,0x4f075720,0x1cc84216,
0xbf64dbed,0x06b4dec8,0xe0ae033d,0xbc9bc51c,0xc1b2bced,0xd940cdec,0xcf95d8ab,0x09dcd9e6,
0x40f6396f,0x27aa2f94,0x447733e2,0x4a444bee,0x0b4c3cac,0xe16eda58,0x1ab60cb0,0xde18ff0c,
0xb7a5c93f,0xb68bad3e,0x0461d22f,0x274b2ffe,0xdb98f328,0x2f49005f,0x17863b8d,0xd2dde125,
0x0f35f099,0x04a21327,0xe8daf507,0xdc61e047,0xd727da09,0xd513d552,0xd8fed5f4,0xe363ddea,
0xe79ce7c5,0xed06e34d,0x5ba62255,0x4463623b,0x36e23132,0x5281472c,0x5a5757ec,0x3f1551eb,
0xe4e71e65,0xd431bff4,0x084c00b2,0xc42fe631,0xb8a6b883,0xcab4bd6f,0xd7c3d76b,0xcc14cdcd,
0x2344e66e,0x45204d14,0x24e928ed,0x46953790,0x236544fb,0xdb0beb8a,0x1decfd1c,0xf1ca13d7,
0xcc77da53,0xb752bd9f,0xfd90c900,0x3036312d,0xed3107d5,0x1d69fb79,0x3b9437a2,0xdc221593,
0xecfccd05,0x15aa1111,0xf24503cf,0xd5e2e4e7,0xd181cdf6,0xd231d4cf,0xd7bed28e,0xd736d883,
0xe625dda4,0xe4f4e648,0x211cf12b,0x65405960,0x2f164835,0x496d3485,0x5a0855bb,0x4d725ab4,
0x1c1f3801,0xc084e6a3,0x028ad4b9,0xe1990716,0xb722c0e2,0xbf97b84b,0xd903ce4b,0xcd31d6d9,
0x0603d58a,0x3f483962,0x1ea62746,0x42cb2f41,0x394b4a53,0xd7b7018b,0x1370e87d,0x0799202a,
0xd8e3eade,0xba41c8d2,0xe8dabe3d,0x3348259c,0xf29e1150,0x0f1ef608,0x3bec2a88,0x1de43cf2,
0xc639e3b6,0x0b29dff9,0x039016a8,0xdd67ee46,0xc56dcc4c,0xcd78caeb,0xd188ccca,0xd367d66f,
0xd903d2a3,0xe118ddf9,0xf296e6f9,0x59f41e5b,0x447a6718,0x2ef6279e,0x570f4707,0x58d35cf5,
0x33544747,0xee801e6f,0xd2dfc45f,0x079bff2d,0xc068e4dd,0xb8b5b457,0xcd1ac1b4,0xd49dd5f4,
0xdd83cbe7,0x3d1617ed,0x1aeb3086,0x375e2186,0x48de4601,0xefd22d30,0xef77d23b,0x18891685,
0xe5cffddb,0xc4bfd525,0xc35db82d,0x2984f7f8,0xff1e20ce,0x0707f799,0x28db182a,0x3774367b,
0xe4fe19f9,0xe340ca8e,0x13e70a74,0xeb2f00ad,0xcaa2d99b,0xcbf1c6f6,0xcc86cc7c,0xd5f6d24f,
0xd445d332,0xdbacd93d,0xe868e054,0x170af1b6,0x68325485,0x27c647f6,0x45d62c71,0x5e6758a8,
0x48265865,0x241f3616,0xcc97f959,0xf9d7d20b,0xe9ef0737,0xb770c547,0xc34fbb7c,0xd582cc81,
0xce79d5f9,0x1980df6c,0x310c3e0d,0x21931b50,0x46b93763,0x1e0f456e,0xd7b2e471,0x18adfbac,
0xf92c11d5,0xd642e5be,0xbd5dc68a,0xfbcfcdd7,0x12f01857,0x0d740b4f,0x13250f2d,0x363c245c,
0x2f763bb2,0xd30a047a,0xf9acd0fb,0x0d6516e2,0xddb0f3f9,0xc749ce80,0xc9a3c73f,0xd17ccd27,
0xd51bd472,0xd4d2d445,0xde72d85d,0xec26e53b,0x2954fd30,0x60ef5a23,0x28ab41a4,0x47b72fcc,
0x5e3c591c,0x477d5878,0x204734fc,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

const uint32_t sample_1_overdrivegt_distgtre3[768] = {
0x00000000,0xed9fed58,0xfc0ff40b,0xfa10feb3,0xef70f2a9,0x063cf5e1,0x1efe1819,0x07c21681,
0x01b3ffbe,0x090706c1,0x0d2909f7,0x15ea1244,0x112d158f,0x05b10add,0x0a0a0500,0x0e4a0fee,
0xf98a03e0,0xfa9cf71b,0xfb2afcf1,0xf324f734,0xf0a4f013,0x018cf75a,0x051207b8,0xf605fcf1,
0xf78df403,0x097efffb,0x0e870eec,0x03750a18,0xf674fc3d,0xf1bcf32e,0xefeaf0f4,0xeda8ee4f,
0xf991f10e,0x072902a3,0x06f1077c,0x02a705c0,0xffb6ffaf,0x0570023c,0x13190ab1,0x1b081a72,
0x0ed21540,0x09c70b69,0x0345077e,0xf175fbe2,0xe7c5e8d7,0xee80ec82,0xe2e8e9ae,0xe01fdfa6,
0xe964e336,0xf62ef169,0xed90f3c7,0xf032eb1b,0x0673fa95,0x152c103c,0x17c11660,0x1ba71a5a,
0x11d51948,0xfe9d06f1,0x02cafdbc,0x0a3d088b,0xfc5f0537,0xf941f730,0x000ffdad,0x0e3c03c3,
0x1f071b38,0x05641533,0xf71bf9b3,0x0aaefe0a,0x17bb1558,0x122a1400,0x18cc1512,0x175c1a03,
0xff670e69,0xe6d9eff3,0xe6fbe4fd,0xed69ea47,0xe52eeca7,0xdae8dc14,0xf0ede412,0x032ffbc4,
0x079b06d6,0x11760a03,0x1dbd1a81,0x075616f5,0xef5ff659,0x06c6f7b0,0x0c050edc,0xfdef04e4,
0xed13f5d7,0xedcce953,0xf6ebf523,0xeb9ff1f1,0xe813e871,0xe458e766,0xe7abe19e,0x1a92fd02,
0x2c562ddf,0x1a841fff,0x2c13218f,0x230e2e28,0xf8c30e87,0xe3b1e924,0xf569e86f,0x1a370814,
0x193e2190,0x000f0946,0x0d0d0389,0x09a6111b,0xea65f99b,0xeef3e60a,0x0705fd59,0xfcf10722,
0xd67cea40,0xd181cccb,0xe5c1dd27,0xe8a9e887,0xef3eea43,0xeebdf32b,0xdd73e379,0xf8fee593,
0x24740f7a,0x3b0b351b,0x289233b7,0x2d5b25dc,0x38343664,0x2525310e,0x157c1a6c,0x16e815f8,
0x0d1413ef,0xf4bf0339,0xd1b8e1a9,0xe3bfd0d8,0x187a0187,0x0f1f1c60,0xeeebfc69,0xed0aea41,
0x0152f5bf,0x0dd60aae,0xfed8092d,0xe879f32e,0xd953df33,0xdc73d952,0xd55bdbb7,0xd41ad01b,
0xf223e1fc,0x0217fd21,0x0acc0559,0x14bf113a,0x19561520,0x3f542928,0x3f804a59,0x069f248c,
0xf782f32e,0x43af1839,0x3c0d552c,0xec680eef,0xd359db59,0xceeecec9,0xd608d3a0,0xcab4d0ef,
0xf873d53d,0x2af91ecb,0xfb6c192c,0xd470e259,0xe2dfd3d7,0x1516fbe6,0x38bc2a85,0x1fc83656,
0xf3c402e9,0x0f5cfa17,0x32d026f1,0x187e2bcf,0xfdda072b,0xef4cf77c,0xdb27e548,0xcc2bd215,
0xd22bcbf5,0xe42adbdc,0xebe6e8a2,0xfd56f2b3,0x162309b5,0x233b1f55,0x265b248e,0x2aa128da,
0x25f12a52,0x012a194e,0xd4f0e4e5,0xee68db8f,0xf3e9f931,0xdb55e6b1,0xd314d4f3,0xd532d403,
0xd3dfd4aa,0xff67dd19,0x3fe12cf4,0x1e6a3050,0x342d2275,0x448c4147,0x2eb33f72,0xedde0fdd,
0xeb2edf0d,0xfb43fcaf,0xcfb9e6ad,0xc221c2b3,0xdb99cd53,0xd0b3dc55,0xc963c83f,0xd922cf84,
0x2fd3f605,0x4da95a58,0x169a2662,0x22881f48,0x1e131d61,0x0c661c8c,0xfae1fc3a,0xf8d4fea7,
0xe376ec8f,0xe44ee0e7,0xe0bce726,0xcd4fd427,0xe819d380,0x09fe01e8,0xd56df483,0xe469cd83,
0x23d60611,0x5c5e42aa,0x1f91544e,0xd279e45c,0x13c8ef20,0x0c601e27,0xde7af191,0xe07cd991,
0xf5f5ebe4,0x226a00cf,0x4c694c04,0x148927cb,0x4d602aaf,0x40885b98,0xd2f1feed,0x0783e0c3,
0x05a814e9,0xec81f4e5,0x007fe829,0x3c903099,0xc678100a,0xae1098ef,0x063ee5eb,0xe6c0ff05,
0xdcfbd81a,0xf69be8c1,0xf0ebfa01,0xeddee9ea,0x09bdfca5,0xfdb4065b,0xfa42fc03,0xe9aef235,
0xeb22e883,0x327efe8f,0x45ad5609,0x2290258a,0x4608368f,0x382c478b,0xd4f3055e,0x1020df61,
0x136e2856,0xda37ef95,0xf2f6d6fc,0x50d72fd7,0x06093550,0x11bffaef,0x0f8a228a,0xc2a0dedf,
0xefb4d0d5,0xeafef967,0xda2edb77,0xdc33dd84,0xe493dd6c,0xeeaceb81,0xee15f046,0xebe1eb72,
0xe5b5ea40,0xe867e3e6,0xe8b8ebef,0x045be97f,0x6ac9402f,0x3a5e607f,0x2fe52604,0x1c6a3c74,
0xdbd5e4d6,0x19c900df,0xf3910cde,0xe0f7e4f3,0xe11de065,0x0c63e7b9,0x4af4401b,0x09512735,
0x273510ba,0x0e342e97,0xb8b7d118,0x03cfdaca,0x02580bbf,0xf92dfd31,0xe91ef0ba,0xe2a4e458,
0xe030e2c6,0xdfefdba3,0x249800dc,0xc6bd109c,0xb5f49a2a,0x02e9ece3,0x2342028b,0x68265c9a,
0x23d64168,0x382a29a4,0xde0a1c80,0xdff6c385,0x02260288,0xd8e4eb22,0xcd67d121,0xcec2cca1,
0xee5fd40d,0x546b2b16,0x1be04202,0x285d15e0,0x175c3169,0xc012dd5c,0x0766dadc,0x079e15ec,
0xf3b4f822,0xe33fedc2,0xe2dfdf37,0xde66e473,0xd966d79c,0x18e0ef73,0xe11323be,0x9b17978d,
0x0187d87b,0x1dda051a,0x73f25b3b,0x2bb05164,0x36e629a0,0xe14e1c4d,0xe52bca8f,0xf9b9ff7f,
0xd4b5e46d,0xca8ecbec,0xd025ce99,0xe537d1e6,0x576d1edb,0x30cf5788,0x28971cb7,0x2a46365a,
0xc748f6d5,0xf650cb73,0x0efb13fc,0xef7bfa9c,0xdf0be93f,0xdf78da2a,0xe357e61b,0xdabadbad,
0x281ef64e,0xd3cd2599,0xa2929048,0x0419e1e3,0x06ba0031,0x6c873a67,0x42bf6842,0x362a2e30,
0x02e83566,0xce92cd53,0x05f5f480,0xdd30f55e,0xcc09d01d,0xcd71cacf,0xdce8d380,0x411bfe7e,
0x4cbf6603,0x22fc2726,0x33b43139,0xe28217bd,0xe055c891,0x0f0c059b,0xf32e00e0,0xe30eebe1,
0xdd05dc1c,0xe0aee03e,0xdb6edd65,0x028fe568,0x2d1926d7,0xa4adf1b1,0xd82c9c0e,0x19170daa,
0x619e2c3e,0x50d37669,0x2d742a54,0x2df74204,0xc646ecc6,0xf5e6d6f5,0xe6a4f937,0xce11d637,
0xcbbfcb08,0xd00dcd02,0x20b1e524,0x599a5a33,0x225c3396,0x3cbd301c,0xfcb62ee4,0xccb9cd0d,
0x116ff2b2,0xfa560fcd,0xe38ceb16,0xd91bdb64,0xe882e08a,0xdb6ae532,0xef56d93d,0x47222514,
0xbbb61ce3,0xbc7e8f1c,0x19520061,0x51a3235b,0x60bf76a6,0x294033c8,0x458d3e18,0xd6c6147a,
0xe72bcad7,0xf007f944,0xd2a1deb4,0xc87acbfb,0xc891c7cc,0xf801d1cf,0x63b03d22,0x2b0d4ee9,
0x33c124cd,0x1e7438f7,0xc87de657,0x07f9dea1,0x05cd1698,0xe59defef,0xd976df03,0xe4e5dce4,
0xddc2e65a,0xe993d796,0x475c200b,0xcb8f283e,0xaa1a8f55,0x11f4eda8,0x3ae91800,0x6b086cb0,
0x266c3e05,0x4b723542,0xf5ac38c2,0xcb30c43a,0xf9a6ed79,0xd8a9eb2e,0xc699cdf7,0xc1ddc173,
0xe00ec892,0x5a581c30,0x38165f31,0x25d21e9a,0x2e9f3480,0xd2a102b8,0xf388cfdd,0x0b390f27,
0xe6e7f5ab,0xdbe3e0f7,0xe102db96,0xddaae3c7,0xdfebd58c,0x45bf1208,0xece93d75,0x949d998c,
0x0a40d2bc,0x288117ae,0x6f4b59f4,0x25c94b9d,0x433f28d5,0x1e5d4bf5,0xb8e9d644,0xf5d7d470,
0xe186f5ff,0xc880d14d,0xbe72c12f,0xd1b8c2f2,0x4225fc73,0x4d0f65d8,0x1ccd259c,0x33782b02,
0xee45204c,0xdc75ce31,0x0dbeff59,0xeb98ffd6,0xdee5e2a6,0xdc6bdace,0xded6e0dd,0xd8b3d5a1,
0x3d2703a8,0x0c0845fe,0x8d93b484,0xf58bb39c,0x1e351613,0x6a764344,0x2dc65b4b,0x36ea2015,
0x3be04e0f,0xbd19f6a8,0xe744c02e,0xec3ff8fc,0xcc6fd953,0xba97c173,0xc5ecbc21,0x1dc2e139,
0x62465bad,0x1be03a91,0x2e341e39,0x0cde2fa4,0xd25cdd26,0x09fbee3b,0xf60509d5,0xe388e77d,
0xde2be004,0xe1dee116,0xd683da4c,0x3287f625,0x264a4c18,0x96e9d630,0xdb219e5c,0x1b4a0e2d,
0x5e583028,0x41086929,0x2b802124,0x4edf479f,0xd7e3234a,0xcc3db2cb,0xf8c6f301,0xd361e607,
0xbb6dc602,0xbd53b79e,0x0275d0fd,0x671748a4,0x201649e9,0x24fc15e0,0x314332e2,0xe1521306,
0xe243ca8a,0x097a0545,0xe6b5f4e4,0xdcd4e28c,0xdbdfd93d,0xd507dbb6,0x08ffda76,0x411f4199,
0x9c04f48d,0xc7618de4,0x15a10292,0x48ef1ed5,0x51a868b6,0x24462860,0x56b54053,0x062048df,
0xb5f9c01b,0xfbf4df03,0xe03df4a0,0xc265d182,0xb56ab47b,0xe740c581,0x6177275c,0x32e66071,
0x19ab1418,0x348d2d6b,0xe9be1a84,0xe5bad310,0x065a0198,0xe9e0f6df,0xe1c1e5cd,0xdecbde09,
0xd8eadece,0xf607d6d8,0x4e4033b2,0xbd0a1cd9,0xac358b21,0x1389eec2,0x32911888,0x62655f89,
0x235139ce,0x4f503436,0x30c55559,0xb065e362,0xf085c27e,0xec25ff05,0xc6bad5f4,0xb1bdb8b7,
0xd112ba69,0x3ac2f974,0x57eb679b,0x107b285a,0x30a11be7,0x0bec30ff,0xd56ddea1,0x06a4ef7a,
0xf30a0402,0xe70be992,0xddcde1e3,0xda77dd7a,0xe471d4e9,0x4e4f1dec,0xde5d391e,0x978c917e,
0x08d8d6a8,0x1a181378,0x68774537,0x2dc754b0,0x41ed2914,0x495d544e,0xc4850d29,0xdd30b41d,
0xf8eeff05,0xcfa2e109,0xb484c160,0xc63eb55d,0x1e71e51b,0x66355c6f,0x14983b76,0x279612b2,
0x221b34d6,0xd523f276,0xfc34e087,0xfb510634,0xe992ee4e,0xdf68e580,0xdc14dd31,0xdd05d73f,
0x46980c5c,0x04f5496d,0x8b73aa9f,0xf4fdb683,0x13c312b4,0x5a1a2b80,0x3c6d618a,0x347f254b,
0x534f4dcb,0xe78732ec,0xbe87b05a,0x016fee72,0xd77df028,0xb70fc5a2,0xbb10b095,0xfdecd436,
0x68fc3e5d,0x250056a8,0x191c0c52,0x2d232fb0,0xdae6025e,0xf6c4dc12,0xfee90581,0xeb4cf148,
0xe4e7e996,0xe012e160,0xd774db3f,0x31ebf2fb,0x274852d9,0x8c5dc656,0xe463a53b,0x0de00b56,
0x405f1328,0x544b6597,0x2b102fc7,0x52004190,0x11a1493b,0xb15bc73d,0xff01d908,0xe195fc34,
0xbb6dcafe,0xb54bb182,0xeb9ec873,0x614c29e5,0x31675f6c,0x12730fa7,0x2fe528a9,0xdd960c83,
0xeefcd62c,0xfc7cffe1,0xea40f14d,0xe497e7ec,0xdf02e099,0xdb94dd3a,0x32c0f708,0x2f4f505e,
0xa223e509,0xc733994d,0x131bfe35,0x1eaf0acc,0x632d5396,0x275a4164,0x475631b5,0x31b54cf9,
0xb690ee07,0xe962bd0a,0xf29c00f5,0xc2e9d661,0xb1bdb727,0xd2e2bad6,0x3a5afc34,0x553c641e,
0x0e9b27e4,0x2b23173e,0x01b12895,0xdaf4db61,0xff70f251,0xf051fac4,0xe7a4ea04,0xe07de442,
0xdd30deed,0xf86fdb94,0x4ddd3426,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,
};

const uint32_t sample_2_overdrivegt_distgtra3[640] = {
0x00000000,0xe663d87f,0xf9f3f5dd,0xd2c0ea60,0xd237c999,0xd93bdb6c,0xcd19d136,0xced8cd97,
0xd4a8d0be,0xddedd986,0xe937e28b,0x047af2d1,0x4d2328f6,0x2ff04ecc,0x1dbc174c,0x3be2331a,
0x292133c8,0x295b2686,0x23ea2a1e,0x02e715ac,0xf7eef5ab,0x258a0b53,0x2ff73510,0x02081b68,
0xda45eade,0xe203d65b,0xf919f206,0xee91f6da,0xcc2eded8,0xd693c6d9,0xf683ecf3,0xf3dbf2df,
0x1dda05d7,0x2bb92bf4,0x1ef424aa,0x11bf1b01,0xeeabffd1,0x0155ed75,0x22a31a8e,0xf2b31226,
0xc3f5d30b,0xe287cd4f,0xf085efb2,0x0103f338,0x04fb0bfa,0xea2df323,0xf1e1ee6d,0xdca1e9d1,
0xe80cd9a1,0x22c90401,0x36713697,0x1373270a,0xebc2fe91,0xfbc1e87d,0x1d4e14e3,0x116e15d2,
0x190e1708,0xfd830e87,0xdc0debad,0xdd6cd54f,0x0c2af1f2,0x341d253f,0x1d11300f,0x01e60ac4,
0xe593f8ed,0xd4c7d323,0xf79ce809,0xee80f7cf,0xdcb7e490,0xd5c3d74f,0xdd1ad861,0xe7d5e24f,
0xff47ef08,0x32cc1ab3,0x213834ba,0x06930ca8,0x174c0d25,0x28741ffa,0x26802efe,0xe6130693,
0xf655e1ee,0x040c06e6,0xe8cbf609,0xd7bdde9e,0xda55d728,0xdc0ddc77,0xd891d9f9,0xdb0ed8e1,
0xe757dfb1,0xf938f09f,0x0650008d,0x0747084e,0x1fac0c8c,0x4e7d3bf3,0x33e84926,0x1ede22a8,
0x2575226e,0x298227c2,0xfeb51ecb,0xdee5e04f,0x025ff3a1,0xf3f9ff77,0xe24ae9db,0xdbcddccb,
0xe423df07,0x06bfecf8,0x36dc2b04,0x017b1f98,0x1263fbf7,0x3d722e5c,0x3b453fea,0x26bc321b,
0xfd1a158d,0xe335e7c1,0xf69fee57,0xdb11ee93,0xc637cac6,0xd548cbc1,0xe2c7de46,0xdd17e0d5,
0xe7a5dece,0x011ff2a5,0x3bfd1c2d,0x30f8453f,0x0dda1782,0x06600b80,0x2bd10e66,0x4413467a,
0x06a12980,0xcce9e1bd,0xfa20d95d,0x03470cc6,0xdc5fed24,0xcf69d368,0xdc5bd2b5,0xe3d3e3cd,
0x0c37ea73,0x27962b2a,0x0e741172,0x370c2288,0x3ff23f00,0x31413d81,0xe3cd0f75,0xf1c7d772,
0x110b0f8e,0xe11dfa6d,0xc589cf2d,0xd5b1c81c,0xe65be1d5,0xe1e3e5b9,0xdbc8dc1e,0xf253e4eb,
0x1239ff49,0x49c4333e,0x22563fcc,0x1e261370,0x3a0a30f0,0x2af73a72,0xd429fbbf,0xf6e1d7bb,
0xfde0069d,0xeea2f192,0x160ef880,0x1f612ab4,0xf8fe0399,0x1bf0075a,0x040f2031,0xcc36d986,
0x007be3f9,0xfe13076e,0xeea2f401,0x0862efa3,0x35b02d81,0xfd101c2a,0xc1bddf61,0xd5b7bc0d,
0xfd47f519,0xdc2ced5e,0xda5bd80b,0xdfa8d8df,0x3328fe80,0x3c544d40,0x0f021c50,0x286c1788,
0x2659337d,0xd291f77f,0xecd9d593,0xf871f7cc,0x339c0f50,0x0e573884,0xa5c3cb89,0xe733b98f,
0x3ae91002,0x2fc04ce2,0xc2d5f8cb,0xb309a624,0x0891e05c,0xf5600c3d,0xdce0e221,0xe5f5dde7,
0x2763fbfb,0x54005314,0xf48b271c,0xf9a5e706,0xdff6fab9,0xf609db99,0xfa1f069a,0xd64ee1ff,
0x2031e799,0x55495258,0x0ee330b9,0xcc8df2b0,0xd7ddbba2,0x4f0c161a,0x1b59517c,0x8859c72d,
0xcc918df3,0x1a0a07a7,0xf2390ba7,0xd069dd32,0xe169d006,0x42f50cef,0x28aa4ec8,0xe797f901,
0xdd63ea67,0xee1fd575,0x2154171c,0xe9410803,0xde8fdc3d,0x34f2fbb3,0x42d055d8,0x027e1928,
0xcbb8f18f,0xd4f9b7e5,0x36f60ae2,0x1e4741ae,0x93aad06f,0xe813a147,0x274e2006,0xf91310f9,
0xcf7de297,0xe3c7cc91,0x48cc19d9,0x144a423e,0xe143ee23,0xc738d331,0x10afddcd,0x29e832fa,
0xeb030741,0xe56de223,0x349cfeb6,0x403154b6,0xfa031332,0xc415e749,0xdc5bb7f1,0x3b311322,
0x291845d8,0xa651e2ab,0xeec9aec3,0x25a8215c,0xf34d0e30,0xc64ed959,0xd677c3db,0x3568008e,
0x26a24460,0xe401fd39,0xcbc1d071,0x1b98ea5d,0x2a40377c,0xe6af05d5,0xdd4adad4,0x27e1f361,
0x3fa64e00,0xf4f7111f,0xcef3ea4b,0xdd3bbec9,0x404e15ab,0x3f585270,0xb319fc9c,0xe674ab59,
0x274c1dee,0xf8051234,0xc685dcbd,0xd287c1d9,0x20acf09f,0x3e52450f,0xf1c916b2,0xce1bd728,
0x16a1e76b,0x30923796,0xe93f0cab,0xd7f7d845,0x1400e633,0x4cc24691,0x02262646,0xddd1f429,
0xddf4c96d,0x4da41690,0x46b362e6,0xb045fbe7,0xdd2ba639,0x21301476,0xf5560f65,0xc3a5d9ca,
0xcefabf8d,0x1f50ec73,0x4395482d,0xfaf91c6d,0xe0a7edf9,0xf96fde68,0x32342365,0xf004191a,
0xd04fd60a,0xfd9cd81d,0x4e1e36f9,0x08f831a8,0xe295f70a,0xd0d9c7b7,0x491c0764,0x44406484,
0xa93af38a,0xd3a79fc5,0x1c4b0b2a,0xf7490e98,0xca8ddebd,0xd5b7c6f7,0x1e43f02f,0x490a48de,
0xfece22b8,0xf977f72f,0xe7e9eaf5,0x23ae0422,0xf91d1dda,0xd2cdda45,0xef55d893,0x4e2c2532,
0x1a3f443c,0xe8f4fd4a,0xc861cb81,0x5612ff93,0x4800745e,0xc772028b,0xbbf7aa45,0x1d40f121,
0x036a2138,0xcc23e1b3,0xcfa0c691,0x136ce65f,0x40f44097,0xf7b71aa8,0xf08cf0c6,0xdef3df3b,
0x1ec6fef3,0xfb9619f7,0xd4e5df12,0xe82ed7f5,0x497617aa,0x261a4d78,0xeca7017b,0xc139ce31,
0x52faf6a7,0x3dda70d4,0xaf5ded9b,0xc6a7a371,0x1bc3fcc5,0xfd671733,0xcd0fe1e4,0xcdfbc525,
0x1514e526,0x41784328,0xf4e51678,0xfeaff4a7,0xe1c7eefa,0x1575f511,0x06751c74,0xdaa4e8b5,
0xe781dbc1,0x41a20e6c,0x270e4c4c,0xeac5fdf4,0xc1bdd1f7,0x4b38f100,0x39186d5c,0xa493de0c,
0xd9c5ac5f,0x191805c7,0xfb7711f0,0xce1de197,0xd22dc90e,0x12ffe691,0x3d253f9e,0xf13d115a,
0x0406f4bb,0xe57df8f3,0x0cceeee9,0x0ac01a50,0xe18bef85,0xe5b1e0b1,0x309afe37,0x2fb0491e,
0xf2d10519,0xe791ed87,0x3df50817,0x319451ea,0xc747fb0e,0xd3d3b953,0x17a4fe71,0xfa8b11d8,
0xcf39e1e4,0xcc7ac753,0xfc3fdb69,0x386c2a5e,0xf7141a2a,0x01e2f283,0xeb4b010b,0xff5fe79f,
0x114c1601,0xe7c5f8ab,0xe781e5ae,0x2093f42a,0x38aa4505,0xf65b0e26,0x06a2fa12,0x2ce61847,
0x2cfe36c3,0xd9050af3,0xd890c2c3,0x0f8efe35,0xf72107c6,0xd6b5e6e7,0xd04acd0f,0xee42da3d,
0x3752191e,0x0538295e,0x03a9f687,0x04a013a9,0xedb3eaff,0x140f07ca,0xf21305c4,0xe849ea0b,
0x0f87edd9,0x3c803a44,0xf7841744,0x0505f655,0x24e914be,0x307831ba,0xdd4d120e,0xd761c2ed,
0x0a46fb47,0xf72803a6,0xda63e985,0xd287d0b8,0xe6c7d9fa,0x2ff409e6,0x0f4d2fb4,0x017cf949,
0x0be6152d,0xea67ee07,0x172c057f,0xf8cd0c85,0xec2ceff6,0x05d1ecad,0x4494359b,0xff202520,
0x03fff6c5,0x253b14a5,0x363433ad,0xe6291b6e,0xd60ac68d,0x0ac7f99b,0xfb1f0638,0xde7cee3b,
0xd2e2d29f,0xe131d964,0x1fbef5b7,0x212434d5,0xfecd031b,0x0f0f0fa1,0xe8bdf2ab,0x189f019e,
0xfd611236,0xed02f14d,0xffadec22,0x46e82f87,0x030e2d4c,0x002ff45d,0x226311ac,0x3aa53370,
0xef1124a0,0xd1a7c915,0x07c5f383,0xfc4d067c,0xe243f07d,0xd3edd5f9,0xdf5fd8f7,0x164fee97,
0x27d733bc,0xfc2907a3,0x1a660bd8,0xe9e70516,0x0b50f0da,0x05541398,0xed65f52d,0xf537eafb,
0x41041d4b,0x0fe337fe,0xfb04f63d,0x1e6f0cd4,0x3a762fcb,0xfbab2d36,0xcd08ce15,0x05c8edd1,
0xfd6f06f5,0xe511f2e7,0xd489d7d3,0xdf23d971,0x08dae8a5,0x2d002d78,0xfc170efb,0x1c3806f5,
0xf3cb155a,0xfc00e7b3,0x0c440f4d,0xf24dfd69,0xef86ec8b,0x375c0c33,0x1f493fac,0xf85dfd87,
0x19b8076e,0x37d42b2d,0x0f24344d,0xc728da9d,0xfdbadee1,0xff1c06d3,0xe94ff539,0xd477db95,
0xded5d82d,0xf83be563,0x31d71f72,0x04401f09,0x170a02f8,0x0887221c,0xee93ea71,0x103e0620,
0xf8090652,0xecbeef1b,0x2516fb2f,0x2f6f4062,0xf58c08d0,0x10e5fdcd,0x312322da,0x21c93576,
0xc893efb5,0xee24cd2b,0x02ad03aa,0xee9bf8ea,0xd593e139,0xdb8ed503,0xebd9e1a5,0x2d690cb1,
0x0d7029aa,0x0b50fec7,0x13261e8e,0xe769f0a9,0x0eb3fcc2,0xfb6a0a72,0xeb8bf0a4,0x1090f045,
0x3cba3998,0xf9ca19e8,0x08bef727,0x2c1a1c30,0x2ec13584,0xd3a506a1,0xdfbcc48d,0x0589fe50,
0xf41ffd5d,0xd967e7c3,0xd805d34b,0xe4f1de7b,0x224bfb43,0x18362efe,0x0207ff71,0x16861612,
0xe541f710,0x0d5cf6bb,0xff3e0de7,0xece3f33b,0x06a1ed6b,0x43593479,0xff8b258d,0x03d0f567,
0x26a81690,0x32813358,0xd8070e0a,0xdc87c3db,0x0379fbab,0xf469fba3,0xdd02eb00,0xd79cd46e,
0xe1d1dd8b,0x1626ef8f,0x23873046,0xff9906d8,0x208d0fe4,0x06501b04,0xf403f54f,0x0615fe42,
0xf797026d,0xf63aef15,0x395817bf,0x1608374e,0xf7f1f9ac,0x197a0809,0x31ec27fc,0x05792be8,
0xc5c9d4cd,0xfc31ded8,0xfba3034a,0xea2ff411,0x0000dbeb,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,
};
