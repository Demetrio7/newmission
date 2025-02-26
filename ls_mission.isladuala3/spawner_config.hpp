/*
class SpawnerClass - Название спавнера, используеться как аргумент для вызова функции
{
	conditionToAccess - СТРОКА - Условие для доступа к спавнеру (строка которая при компиляции в код должна возвращать true или false). Если True игрок получит доступ к спавнеру.
	
	vehicles - МАССИВ МАССИВОВ - Массив с доступной техникой.
	|- 0 - СТРОКА - Название техники которое будет отображаться в панели спавнера
	|- 1 - СТРОКА - Класснейм
	|- 2 - СТРОКА - Название переменной, где будет храниться кол-во использованной техники (в будущем будет определяться автоматически)
	|- 3 - ЧИСЛО  - Максимальное и изначально доступное число техники
	|- 4 - СТРОКА - НЕОБЯЗАТЕЛЕН -  Путь до картинки в меню (если не указывать будет использован баннер проекта)
	|- 4 - СТРОКА - НЕОБЯЗАТЕЛЕН -  Описание техники, которое отображаеться в правой части дисплея (если не указывать, описание будет пустым)
	spawnPoints - ARRAY OF ARRAYS - Spawn positions (markers/positions)
	|- 0 - STRING - Display name in the dialog
	|- 1 - МАССИВ ЗНАЧЕНИЙ - Точки спавна типа МАССИВ {x, y, z} или СТРОКА название предмета (обычно косилки) на карте, на месте которого будет появляться техника
	|- 2 - БУЛЕВО - True или False - Пока не знаю зачем, поэтому по используйте true

};

ПРИМЕР:
class MySuperSpawner
{	
	conditionToAccess = "true"; // 'SCHTAMP' in name player // Будет True только в том случае, если в имени игрока будет слово SCHTAMP

	vehicles[] = // (У последнего элемента массива не должно быть запятой)
	{
		{
			"Название техники 1",
			"класснейм_техники_1",
			"название_переменной_1",
			999, // начальное число техники == 999
			"путь/до/картинки.paa",
			"Мое самое лучшее описание этой техники."
		},
		{
			"Название техники 2",
			"класснейм_техники_2",
			"название_переменной_2"
		} // <=== вот тут не должно быть запятой
		
	};
	spawnpoints[] = 
	{
		{"Название моей точки спавна 1",{"название_моего_предмета_1", {x,y,z}},true}
	};
};
*/

class MainSpawn
{	
	conditionToAccess = "true";

	vehicles[] = 
	{
		{"=====Наземная техника=====","","","","",""},
		{
			"TX-130",
			"3as_saber_m1",
			"vehicle_count_spawn_1",
			2,
			"gui_spawner\images\vehicles\tx130mk1.paa"
		},
		{
			"БТР ""Банта""",
			"212th_B_APC_Wheeled_01_cannon_F",
			"vehicle_count_spawn_2",
			3,
			"gui_spawner\images\vehicles\batha.paa"
		},
		{
			"Машина технического обслуживания ""Варден""",
			"212AA_Galoomp",
			"vehicle_count_spawn_3",
			2
		},
		{
			"Легкий транспорт RTT",
			"3as_RTT",
			"vehicle_count_spawn_4",
			2,
			"gui_spawner\images\vehicles\rtt.paa"
		},
		{
			"BARC спидер",
			"ls_ground_barc",
			"vehicle_count_spawn_5",
			10,
			"gui_spawner\images\vehicles\barc.paa"
		},
		{
			"Транспортник - Накрытый",
			"442_argon_covered",
			"vehicle_count_spawn_6",
			5
		},
		{
			"Транспортник - Обычный",
			"442_argon_transport",
			"vehicle_count_spawn_7",
			5
		},
		{
			"Транспортник - Оружейный",
			"442_argon_ammo",
			"vehicle_count_spawn_8",
			2
		},
		{
			"Warthog 4ёх местный",
			"OPTRE_M12_FAV",
			"vehicle_count_spawn_9",
			5
		}
	};
	spawnpoints[] = 
	{
		{"Ангар #1",{"angar_spawn_0"},true},
		{"Ангар #2",{"angar_spawn_1"},true}
	};
};

class BigSpawn
{	
	conditionToAccess = "true";

	vehicles[] = 
	{
		{"=====Крупногабаритная техника=====","","","","",""},
		{
			"Мобильная арт установка AV-7",
			"3as_AV7",
			"big_count_spawn_1",
			4,
			"gui_spawner\images\vehicles\av7.paa"
		},
		/*{
        "HAVw A6 Juggernaut",
		"3as_Jug",
		"big_count_spawn_3",
		3
		},
		{
			"ATAP",
			"3as_ATAP_base",
			3
		},
		{
			"RX200 Артиллерия",
			"442_rx200_arty",
			3
		}*/
	};
	spawnpoints[] = 
	{
		{"Место для большой техники #1",{"big_spawn_1"},true}
	};
};

class AirSpawn
{	
	conditionToAccess = "true";

	vehicles[] = 
	{
		{"=====Воздушная техника=====","","","","",""},
		{
			"LAAT/I (Gunship)",
			"ls_laat_ab",
			"laat_count_spawn_1",
			6
		},
		{
			"LAAT/I Gunship (Medevac)",
			"ls_laat_medevac",
			"laat_count_spawn_2",
			1
		},
		/*{
			"Z95",
			"3as_Z95_Republic",
			"z95_count_spawn_1",
			6
		},*/
	};
	spawnpoints[] = 
	{
		{"ВПП #1",{"air_spawn_0"},true},
		{"ВПП #2",{"air_spawn_1"},true},
		{"ВПП #3",{"air_spawn_2"},true},
		{"ВПП #4",{"air_spawn_3"},true}
	};
};

class Z95Spawn
{	
	conditionToAccess = "true";

	vehicles[] = 
	{
		{"=====Воздушная техника=====","","","","",""},
		{
			"Z95",
			"3as_Z95_Republic",
			"z95_count_spawn_1",
			6
		},
		{
			"V19",
			"lsd_air_v19",
			"z95_count_spawn_2",
			3
		},
		{
			"[Jedi] Aircar",
			"MEOP_veh_aerocar_MercBlue",
			"z95_count_spawn_3",
			3
		},
		{
			"[Jedi] Codiak",
			"MEOP_veh_kodiakArm_old_blue",
			"z95_count_spawn_4",
			2
		},
	};
	spawnpoints[] = 
	{
		{"ВПП #1",{"z95_spawn_1"},true},
		{"ВПП #2",{"z95_spawn_2"},true}
	};
};

class UkrainianSpawn
{	
	conditionToAccess = "true";

	vehicles[] = 
	{
		{"=====Наземная техника=====","","","","",""},
		{
			"Warthog 2ух местный",
			"OPTRE_M914_RV",
			"vehicle_count_spawn_1",
			5,
		},
		{
			"Warthog 4ёх местный",
			"OPTRE_M12_FAV",
			"vehicle_count_spawn_2",
			5,
		},
		{
			"Warthog 8ми местный",
			"OPTRE_M813_TT",
			"vehicle_count_spawn_3",
			5
		},
		{
			"BARC спидер",
			"ls_ground_barc",
			"vehicle_count_spawn_4",
			10,
			"gui_spawner\images\vehicles\barc.paa"
		}
	};
	spawnpoints[] = 
	{
		{"Точка #1",{"ukrainian_spawn_0"},true},
		{"Точка #2",{"ukrainian_spawn_1"},true}
	};
};

class SsdSpawn
{	
	conditionToAccess = "true";

	vehicles[] = 
	{
		{"=====Наземная техника=====","","","","",""},
		{
			"БМК - Лидер",
			"HMCS_VW1",
			"ssd_count_spawn_1",
			2
		},
		{
			"БМК",
			"HMCS",
			"ssd_count_spawn_1",
			3
		}
	};
	spawnpoints[] = 
	{
		{"Точка №1",{"ssd_spawn_1"},true}
	};
};

class QiSpawn
{	
	conditionToAccess = "true";

	vehicles[] = 
	{
		{"=====Наземная техника=====","","","","",""},
		{
			"BARC спидер",
			"ls_ground_barc",
			"qi_count_spawn_1",
			3,
			"gui_spawner\images\vehicles\barc.paa"
		},
		{
			"Warthog 8ми местный",
			"OPTRE_M813_TT",
                        "qi_count_spawn_2",
			2
		},
		{
			"Warthog 4ёх местный",
			"OPTRE_M12_FAV",
			"qi_count_spawn_3",
			2
		}
	};
	spawnpoints[] = 
	{
		{"Точка №1",{"qi_spawn_1"},true}
	};
};