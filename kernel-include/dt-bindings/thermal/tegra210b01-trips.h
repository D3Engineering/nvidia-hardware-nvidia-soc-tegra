/*
 * This header defines the trip temperatures for Tegra210b01
 */
#ifndef _DT_BINDINGS_THERMAL_TEGRA210B01_TRIPS_H
#define _DT_BINDINGS_THERMAL_TEGRA210B01_TRIPS_H

/* DFLL trips, in millicelsius */
#define TEGRA210B01_DFLL_THERMAL_FLOOR_0	20000
#define TEGRA210B01_DFLL_THERMAL_FLOOR_NOFLOOR	120000

#define TEGRA210B01_DFLL_THERMAL_CAP_NOCAP	0
#define TEGRA210B01_DFLL_THERMAL_CAP_0		64000
#define TEGRA210B01_DFLL_THERMAL_CAP_1		84000

/* GPU DVFS thermal trips, in millicelsius */
#define TEGRA210B01_GPU_DVFS_THERMAL_MIN	-25000
#define TEGRA210B01_GPU_DVFS_THERMAL_TRIP_1	20000
#define TEGRA210B01_GPU_DVFS_THERMAL_TRIP_2	30000
#define TEGRA210B01_GPU_DVFS_THERMAL_TRIP_3	50000
#define TEGRA210B01_GPU_DVFS_THERMAL_TRIP_4	70000
#define TEGRA210B01_GPU_DVFS_THERMAL_TRIP_5	105000

#define TEGRA210B01_GPU_DVFS_THERMAL_CAP_1	80000

/* SoC DVFS thermal trips, in millicelsius */
#define TEGRA210B01_SOC_THERMAL_FLOOR_0		20000
#define TEGRA210B01_SOC_THERMAL_CAP_0		84000

#endif /* _DT_BINDINGS_THERMAL_TEGRA210B01_TRIPS_H */
