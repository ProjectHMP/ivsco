void main()
{
    l_U4 = 0.40000000;
    l_U5 = 0;
    l_U10 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U19 = 0;
    l_U20 = 0;
    l_U28 = 0;
    l_U29 = 0;
    l_U61 = 0;
    l_U62 = 1;
    l_U63 = 0;
    l_U65 = 0;
    l_U66 = 0;
    l_U73 = 0;
    l_U74 = 1000;
    l_U75 = 1;
    l_U78 = -12.00000000;
    l_U79 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_128();
    }
    if (DOES_OBJECT_EXIST( l_U80 ))
    {
        GET_OBJECT_COORDINATES( l_U80, ref l_U6._fU0, ref l_U6._fU4, ref l_U6._fU8 );
    }
    if (DOES_SCRIPT_EXIST( "playboy4" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "playboy4" )) > 0)
        {
            GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U9 );
            SET_TEXT_RENDER_ID( l_U9 );
            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
            l_U29 = 1;
            g_U9364 = 1;
            l_U5 = 8;
        }
    }
    if (DOES_SCRIPT_EXIST( "francis4" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "francis4" )) > 0)
        {
            l_U79 = 1;
            GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U9 );
            SET_TEXT_RENDER_ID( l_U9 );
            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
            l_U29 = 1;
            g_U9364 = 1;
            g_U9365 = 66;
            l_U5 = 5;
        }
    }
    if (NOT l_U29)
    {
        if (NOT (IS_CHAR_INJURED( sub_708() )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_708(), 890.96090000, -494.85600000, 18.40230000, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                l_U30 = {894.54910000, -493.45960000, 18.45280000};
                l_U33 = 130.60940000;
                l_U34 = {894.84000000, -495.68000000, 19.54000000};
                l_U37 = {-0.00000000, 0.00000000, -167.01000000};
                l_U40 = 45.00000000;
                l_U41 = {894.51000000, -494.17000000, 19.54000000};
                l_U44 = {-7.47000000, -0.00000000, -167.48000000};
                l_U47 = 39.90000000;
                l_U48 = {893.59000000, -493.15000000, 19.23000000};
                l_U51 = {2.71000000, 0.00000000, -129.56000000};
                l_U54 = 51.60000000;
                l_U55 = {894.20000000, -496.38000000, 18.37000000};
                l_U58 = {895.83000000, -493.53000000, 21.18000000};
                l_U67 = "shitholerm";
                l_U68 = {900.87380000, -510.07770000, 13.96350000};
                l_U71 = 268.89290000;
                l_U73 = 1;
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_708(), 102.59010000, 845.95000000, 48.84000000, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                l_U30 = {102.14850000, 853.13370000, 44.13510000};
                l_U33 = 277.89200000;
                l_U34 = {104.09000000, 852.48000000, 45.05000000};
                l_U37 = {2.16000000, 0.00000000, -90.00000000};
                l_U40 = 47.70000000;
                l_U41 = {102.70000000, 852.48000000, 45.00000000};
                l_U44 = {1.76000000, 0.00000000, -90.00000000};
                l_U47 = 56.40000000;
                l_U48 = {101.52000000, 854.41000000, 45.19000000};
                l_U51 = {2.82000000, -0.00000000, -131.04000000};
                l_U54 = 51.80000000;
                l_U55 = {101.96000000, 850.94000000, 44.22000000};
                l_U58 = {104.78000000, 854.02000000, 46.87000000};
                l_U67 = "loftrm1";
                l_U68 = {111.44130000, 839.12710000, 13.71160000};
                l_U71 = 182.89150000;
                l_U73 = 0;
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_708(), -971.01000000, 891.17990000, 18.78000000, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                l_U30 = {-965.44760000, 891.74320000, 18.00130000};
                l_U33 = 235.41050000;
                l_U34 = {-964.78000000, 890.30000000, 18.84000000};
                l_U37 = {1.49000000, -0.00000000, -145.89000000};
                l_U40 = 51.90000000;
                l_U41 = {-965.25000000, 891.31000000, 19.11000000};
                l_U44 = {-7.47000000, -0.00000000, -155.47000000};
                l_U47 = 36.00000000;
                l_U48 = {-964.60000000, 892.62000000, 19.00000000};
                l_U51 = {-0.72000000, -0.00000000, 158.82000000};
                l_U54 = 47.70000000;
                l_U55 = {-966.95000000, 890.06000000, 18.10000000};
                l_U58 = {-964.61000000, 892.35000000, 20.61000000};
                l_U67 = "JersSaveApt";
                l_U68 = {-966.11660000, 894.73270000, 12.67580000};
                l_U71 = 270.82370000;
                l_U73 = 1;
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_708(), -430.36000000, 1460.83000000, 38.78000000, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                l_U30 = {-423.80960000, 1460.38800000, 37.96650000};
                l_U33 = 105.08710000;
                l_U34 = {-426.23000000, 1461.04000000, 39.51000000};
                l_U37 = {1.47000000, 0.00000000, 89.53000000};
                l_U40 = 46.00000000;
                l_U41 = {-423.69000000, 1461.06000000, 39.53000000};
                l_U44 = {0.42000000, -0.00000000, 91.37000000};
                l_U47 = 42.60000000;
                l_U48 = {-417.97000000, 1456.83000000, 39.57000000};
                l_U51 = {-1.41000000, -0.00000000, 69.87000000};
                l_U54 = 30.00000000;
                l_U55 = {-426.14000000, 1459.89000000, 38.03000000};
                l_U58 = {-423.39000000, 1461.85000000, 40.95000000};
                l_U67 = "playxroom";
                l_U68 = {-422.42510000, 1485.82900000, 17.86150000};
                l_U71 = 272.46330000;
                l_U73 = 0;
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_708(), 599.47630000, 1416.84700000, 18.07300000, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                l_U30 = {598.83250000, 1408.44300000, 16.47130000};
                l_U33 = 212.57420000;
                l_U34 = {599.47000000, 1406.25000000, 17.28000000};
                l_U37 = {-5.76000000, -0.00000000, 167.94000000};
                l_U40 = 45.00000000;
                if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
                {
                    l_U41 = {599.21000000, 1407.48000000, 17.08000000};
                    l_U44 = {-1.06000000, -0.00000000, -179.16000000};
                    l_U47 = 45.00000000;
                }
                else
                {
                    l_U41 = {599.41000000, 1407.80000000, 17.66000000};
                    l_U44 = {-1.20000000, -0.00000000, -177.32000000};
                    l_U47 = 56.70000000;
                }
                l_U48 = {597.59000000, 1409.52000000, 17.66000000};
                l_U51 = {-8.50000000, -0.00000000, -136.86000000};
                l_U54 = 48.00000000;
                l_U55 = {597.58000000, 1405.87000000, 16.59000000};
                l_U58 = {600.45000000, 1409.01000000, 18.77000000};
                l_U67 = "bronxsaveroom01";
                l_U68 = {596.37380000, 1403.61500000, 9.96500000};
                l_U71 = 0.00000000;
                l_U73 = 1;
            }
            else
            {
                sub_128();
            };;;;;
        }
    }
    while (true)
    {
        WAIT( 0 );
        if (g_U9368 == 1)
        {
            sub_128();
        }
        if (DOES_OBJECT_EXIST( l_U80 ))
        {
            if ((IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U80 )) AND (NOT (HAS_OBJECT_BEEN_DAMAGED( l_U80 ))))
            {
                if (IS_PLAYER_PLAYING( sub_622() ))
                {
                    switch (l_U5)
                    {
                        case 0:
                        g_U9367 = 0;
                        GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U9 );
                        SET_TEXT_RENDER_ID( l_U9 );
                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        l_U5 = 1;
                        break;
                        case 1:
                        if (sub_3275())
                        {
                            GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 80.00000000, ref l_U21 );
                            l_U22 = ROUND( l_U21 );
                            l_U21 = TO_FLOAT( l_U22 );
                            l_U5 = 2;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_IN_ANY_CAR( sub_708() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_708(), ref l_U72 );
                        }
                        if (HAS_OBJECT_BEEN_DAMAGED( l_U80 ))
                        {
                            CLEAR_HELP();
                            sub_128();
                        }
                        else if (IS_WANTED_LEVEL_GREATER( sub_622(), 0 ))
                        {
                            WAIT( 0 );
                        }
                        else
                        {
                            l_U21 += 0.01000000;
                            if (l_U21 > 100.00000000)
                            {
                                l_U21 = 0.00000000;
                            }
                            if (((((IS_CHAR_IN_AREA_3D( sub_708(), l_U55._fU0, l_U55._fU4, l_U55._fU8, l_U58._fU0, l_U58._fU4, l_U58._fU8, 0 )) AND (sub_3588( 4, 0 ))) AND (IS_OBJECT_STATIC( l_U80 ))) AND (IS_CHAR_ON_FOOT( sub_708() ))) AND (NOT g_U10978))
                            {
                                PRINT_HELP_FOREVER( "TV_HLP1" );
                                if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                                {
                                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U72 );
                                    if (NOT (IS_CAR_DEAD( l_U72 )))
                                    {
                                        if (IS_CAR_IN_AREA_3D( l_U72, l_U55._fU0 - 2.00000000, l_U55._fU4 - 2.00000000, l_U55._fU8 - 2.00000000, l_U58._fU0 + 2.00000000, l_U58._fU4 + 2.00000000, l_U58._fU8 + 2.00000000, 0 ))
                                        {
                                            SET_CAR_COORDINATES( l_U72, l_U68._fU0, l_U68._fU4, l_U68._fU8 );
                                            SET_CAR_HEADING( l_U72, l_U71 );
                                            SET_CAR_ON_GROUND_PROPERLY( l_U72 );
                                            CLEAR_ROOM_FOR_CAR( l_U72 );
                                        }
                                    }
                                    CLEAR_AREA( l_U30._fU0, l_U30._fU4, l_U30._fU8, 5.00000000, 0 );
                                    REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\TELEVISION" );
                                    l_U23 = GET_SOUND_ID();
                                    GET_GAME_VIEWPORT_ID( ref l_U12 );
                                    l_U5 = 3;
                                }
                                else if (HAS_OBJECT_BEEN_DAMAGED_BY_CHAR( l_U80, sub_708() ))
                                {
                                    sub_352( 4, "TV_HLP1" );
                                    CLEAR_HELP();
                                    sub_128();
                                }
                            }
                            else
                            {
                                sub_352( 4, "TV_HLP1" );
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP1" ))
                                {
                                    CLEAR_HELP();
                                }
                            }
                        }
                        break;
                        case 3:
                        if (NOT g_U9364)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                        }
                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP1" ))
                        {
                            CLEAR_HELP();
                        }
                        if (NOT g_U9364)
                        {
                            if (NOT l_U63)
                            {
                                sub_4405( l_U27 );
                                l_U62 = 2;
                                SET_PLAYER_CONTROL( sub_622(), 0 );
                                SET_CHAR_COORDINATES( sub_708(), l_U30._fU0, l_U30._fU4, l_U30._fU8 );
                                SET_CHAR_HEADING( sub_708(), l_U33 );
                                SWITCH_STREAMING( 0 );
                                OVERRIDE_FREEZE_FLAGS( 1 );
                                OPEN_SEQUENCE_TASK( ref l_U64 );
                                TASK_PLAY_ANIM( 0, "sit_down", "missambtv", 8.00000000, 0, 0, 0, 0, -2 );
                                TASK_PLAY_ANIM( 0, "sit_loop", "missambtv", 8.00000000, 1, 0, 0, 0, -2 );
                                CLOSE_SEQUENCE_TASK( l_U64 );
                                TASK_PERFORM_SEQUENCE( sub_708(), l_U64 );
                                CLEAR_SEQUENCE_TASK( l_U64 );
                                l_U63 = 1;
                            }
                            else if ((NOT (IS_CHAR_INJURED( sub_708() ))) AND (IS_CHAR_PLAYING_ANIM( sub_708(), "missambtv", "sit_loop" )))
                            {
                                FREEZE_CHAR_POSITION( sub_708(), 1 );
                                TASK_LOOK_AT_COORD( sub_708(), l_U6._fU0, l_U6._fU4, l_U6._fU8, -2, 4 );
                                PLAY_SOUND_FRONTEND( l_U23, "TELEVISION_TURN_ON" );
                                MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV( 1 );
                                sub_5123();
                                l_U5 = 4;
                            }
                        }
                        break;
                        case 4:
                        if (NOT g_U9364)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                        }
                        if (NOT g_U9364)
                        {
                            if (NOT l_U61)
                            {
                                if (USING_STANDARD_CONTROLS())
                                {
                                    PRINT_HELP( "TV_HLP2" );
                                }
                                else
                                {
                                    PRINT_HELP( "TV_HLP3" );
                                }
                                l_U61 = 1;
                            }
                        }
                        l_U5 = 5;
                        break;
                        case 5:
                        if (NOT g_U9364)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                        }
                        if (l_U79)
                        {
                            if (g_U9366)
                            {
                                l_U17 = 1;
                                STOP_STREAM();
                                while (NOT (PRELOAD_STREAM( "TV_ADVERTS_BURGERSHOT" )))
                                {
                                    PRELOAD_STREAM( "TV_ADVERTS_BURGERSHOT" );
                                    WAIT( 0 );
                                }
                                sub_5394();
                                g_U9364 = 1;
                                l_U5 = 6;
                            }
                        }
                        else if (NOT g_U9364)
                        {
                            if (NOT l_U10)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 1, ref l_U77 );
                                l_U10 = 1;
                                if (l_U77 == 0)
                                {
                                    g_U9365 = 1;
                                    sub_5394();
                                }
                                else if (l_U77 == 1)
                                {
                                    g_U9365 = 2;
                                    sub_5394();
                                }
                            }
                        }
                        l_U5 = 6;;
                        break;
                        case 6:
                        if (NOT g_U9364)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                        }
                        sub_5757();
                        if (NOT l_U66)
                        {
                            if (NOT l_U79)
                            {
                                SET_TEXT_RENDER_ID( l_U9 );
                                SET_MOVIE_TIME( l_U21 );
                                SET_MOVIE_VOLUME( l_U78 );
                            }
                            else
                            {
                                PLAY_STREAM_FROM_OBJECT( l_U80 );
                            }
                            PLAY_MOVIE();
                            l_U66 = 1;
                        }
                        else
                        {
                            l_U21 += 0.01000000;
                            if (l_U21 > 100.00000000)
                            {
                                l_U21 = 0.00000000;
                            }
                        }
                        if ((HAS_OBJECT_BEEN_DAMAGED( l_U80 )) || (g_U9367 == 1))
                        {
                            if (NOT l_U65)
                            {
                                if (g_U9366)
                                {
                                    l_U20 = 1;
                                    if (l_U17 == 0)
                                    {
                                        l_U17 = 1;
                                    }
                                    STOP_STREAM();
                                    RELEASE_MOVIE();
                                    l_U65 = 1;
                                }
                                else
                                {
                                    RELEASE_MOVIE();
                                    g_U9365 = 99;
                                    sub_5394();
                                    SET_TEXT_RENDER_ID( l_U9 );
                                    PLAY_MOVIE();
                                    l_U65 = 1;
                                }
                            }
                            else if (HAS_OBJECT_BEEN_DAMAGED( l_U80 ))
                            {
                                sub_128();
                            }
                        }
                        if (NOT g_U9364)
                        {
                            if (TIMERA() > 250)
                            {
                                if ((IS_CONTROL_JUST_PRESSED( 2, 65 )) || (IS_CONTROL_JUST_PRESSED( 2, 64 )))
                                {
                                    if (l_U21 >= 100.00000000)
                                    {
                                        l_U21 = 0.00000000;
                                    }
                                    if (NOT l_U73)
                                    {
                                        if (g_U9365 == 1)
                                        {
                                            g_U9365 = 2;
                                            STOP_MOVIE();
                                            RELEASE_MOVIE();
                                            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                            sub_5394();
                                            SET_TEXT_RENDER_ID( l_U9 );
                                            SET_MOVIE_TIME( l_U21 );
                                            PLAY_MOVIE();
                                            SETTIMERA( 0 );
                                        }
                                        else if (g_U9365 == 2)
                                        {
                                            g_U9365 = 1;
                                            STOP_MOVIE();
                                            RELEASE_MOVIE();
                                            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                            sub_5394();
                                            SET_TEXT_RENDER_ID( l_U9 );
                                            SET_MOVIE_TIME( l_U21 );
                                            PLAY_MOVIE();
                                            SETTIMERA( 0 );
                                        }
                                    }
                                    else
                                    {
                                        GENERATE_RANDOM_INT_IN_RANGE( l_U75, l_U74, ref l_U76 );
                                        if (l_U76 > 550)
                                        {
                                            if (g_U9365 == 1)
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 1000, ref l_U77 );
                                                if (l_U77 > 300)
                                                {
                                                    g_U9365 = 2;
                                                    STOP_MOVIE();
                                                    RELEASE_MOVIE();
                                                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                                    sub_5394();
                                                    SET_TEXT_RENDER_ID( l_U9 );
                                                    SET_MOVIE_TIME( l_U21 );
                                                    PLAY_MOVIE();
                                                    SETTIMERA( 0 );
                                                }
                                                else
                                                {
                                                    g_U9365 = 10;
                                                    STOP_MOVIE();
                                                    RELEASE_MOVIE();
                                                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                                    sub_5394();
                                                    SET_TEXT_RENDER_ID( l_U9 );
                                                    PLAY_MOVIE();
                                                    SETTIMERA( 0 );
                                                }
                                            }
                                            else if (g_U9365 == 2)
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 1000, ref l_U77 );
                                                if (l_U77 > 300)
                                                {
                                                    g_U9365 = 1;
                                                    STOP_MOVIE();
                                                    RELEASE_MOVIE();
                                                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                                    sub_5394();
                                                    SET_TEXT_RENDER_ID( l_U9 );
                                                    SET_MOVIE_TIME( l_U21 );
                                                    PLAY_MOVIE();
                                                    SETTIMERA( 0 );
                                                }
                                                else
                                                {
                                                    g_U9365 = 10;
                                                    STOP_MOVIE();
                                                    RELEASE_MOVIE();
                                                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                                    sub_5394();
                                                    SET_TEXT_RENDER_ID( l_U9 );
                                                    PLAY_MOVIE();
                                                    SETTIMERA( 0 );
                                                }
                                            }
                                            else if (g_U9365 == 10)
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 1000, ref l_U77 );
                                                if (l_U77 > 500)
                                                {
                                                    g_U9365 = 1;
                                                    STOP_MOVIE();
                                                    RELEASE_MOVIE();
                                                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                                    sub_5394();
                                                    SET_TEXT_RENDER_ID( l_U9 );
                                                    SET_MOVIE_TIME( l_U21 );
                                                    PLAY_MOVIE();
                                                    SETTIMERA( 0 );
                                                }
                                                else
                                                {
                                                    g_U9365 = 2;
                                                    STOP_MOVIE();
                                                    RELEASE_MOVIE();
                                                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                                    sub_5394();
                                                    SET_TEXT_RENDER_ID( l_U9 );
                                                    SET_MOVIE_TIME( l_U21 );
                                                    PLAY_MOVIE();
                                                    SETTIMERA( 0 );
                                                }
                                            };;;
                                        }
                                        else
                                        {
                                            g_U9365 = 10;
                                            STOP_MOVIE();
                                            RELEASE_MOVIE();
                                            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                            sub_5394();
                                            SET_TEXT_RENDER_ID( l_U9 );
                                            PLAY_MOVIE();
                                            SETTIMERA( 0 );
                                        }
                                    }
                                }
                            }
                            if (IS_CONTROL_JUST_PRESSED( 2, 0 ))
                            {
                                if (# -NULL-0xc27c84())
                                {
                                    if (l_U62 == 3)
                                    {
                                        l_U62 = 2;
                                        SET_CAM_ACTIVE( l_U26, 0 );
                                        SET_CAM_PROPAGATE( l_U26, 0 );
                                        SET_CAM_ACTIVE( l_U25, 1 );
                                        SET_CAM_PROPAGATE( l_U25, 1 );
                                    }
                                    else if (l_U62 == 2)
                                    {
                                        l_U62 = 3;
                                        SET_CAM_ACTIVE( l_U25, 0 );
                                        SET_CAM_PROPAGATE( l_U25, 0 );
                                        SET_CAM_ACTIVE( l_U26, 1 );
                                        SET_CAM_PROPAGATE( l_U26, 1 );
                                    }
                                }
                                else if (l_U62 == 3)
                                {
                                    l_U62 = 1;
                                    SET_CAM_ACTIVE( l_U26, 0 );
                                    SET_CAM_PROPAGATE( l_U26, 0 );
                                    SET_CAM_ACTIVE( l_U24, 1 );
                                    SET_CAM_PROPAGATE( l_U24, 1 );
                                }
                                else if (l_U62 == 2)
                                {
                                    l_U62 = 3;
                                    SET_CAM_ACTIVE( l_U25, 0 );
                                    SET_CAM_PROPAGATE( l_U25, 0 );
                                    SET_CAM_ACTIVE( l_U26, 1 );
                                    SET_CAM_PROPAGATE( l_U26, 1 );
                                }
                                else if (l_U62 == 1)
                                {
                                    l_U62 = 2;
                                    SET_CAM_ACTIVE( l_U24, 0 );
                                    SET_CAM_PROPAGATE( l_U24, 0 );
                                    SET_CAM_ACTIVE( l_U25, 1 );
                                    SET_CAM_PROPAGATE( l_U25, 1 );
                                };;;;
                            }
                            if ((USING_STANDARD_CONTROLS()) || (NOT IS_USING_CONTROLLER()))
                            {
                                if (IS_CONTROL_JUST_PRESSED( 2, 84 ))
                                {
                                    l_U78 += 1.50000000;
                                    PRINTNL();
                                    PRINTSTRING( "movievolume: " );
                                    PRINTFLOAT( l_U78 );
                                    PRINTNL();
                                    if (l_U78 > 0.00000000)
                                    {
                                        l_U78 = 0.00000000;
                                        SET_MOVIE_VOLUME( l_U78 );
                                    }
                                    else if (l_U78 < 65512)
                                    {
                                        l_U78 = -24.00000000;
                                        SET_MOVIE_VOLUME( l_U78 );
                                    }
                                    else
                                    {
                                        SET_MOVIE_VOLUME( l_U78 );
                                    }
                                }
                                if (IS_CONTROL_JUST_PRESSED( 2, 83 ))
                                {
                                    l_U78 -= 1.50000000;
                                    PRINTNL();
                                    PRINTSTRING( "movievolume: " );
                                    PRINTFLOAT( l_U78 );
                                    PRINTNL();
                                    if (l_U78 < -24.00000000)
                                    {
                                        l_U78 = -100.00000000;
                                        SET_MOVIE_VOLUME( l_U78 );
                                    }
                                    else
                                    {
                                        SET_MOVIE_VOLUME( l_U78 );
                                    }
                                }
                            }
                            else if (IS_CONTROL_JUST_PRESSED( 2, 82 ))
                            {
                                l_U78 += 1.50000000;
                                PRINTNL();
                                PRINTSTRING( "movievolume: " );
                                PRINTFLOAT( l_U78 );
                                PRINTNL();
                                if (l_U78 > 0.00000000)
                                {
                                    l_U78 = 0.00000000;
                                    SET_MOVIE_VOLUME( l_U78 );
                                }
                                else if (l_U78 < 65512)
                                {
                                    l_U78 = -24.00000000;
                                    SET_MOVIE_VOLUME( l_U78 );
                                }
                                else
                                {
                                    SET_MOVIE_VOLUME( l_U78 );
                                }
                            }
                            if (IS_CONTROL_JUST_PRESSED( 2, 81 ))
                            {
                                l_U78 -= 1.50000000;
                                PRINTNL();
                                PRINTSTRING( "movievolume: " );
                                PRINTFLOAT( l_U78 );
                                PRINTNL();
                                if (l_U78 < -24.00000000)
                                {
                                    l_U78 = -100.00000000;
                                    SET_MOVIE_VOLUME( l_U78 );
                                }
                                else
                                {
                                    SET_MOVIE_VOLUME( l_U78 );
                                }
                            }
                            if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                            {
                                SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U12, l_U67 );
                                if (NOT (IS_CHAR_INJURED( sub_708() )))
                                {
                                    SET_ROOM_FOR_CHAR_BY_NAME( sub_708(), l_U67 );
                                }
                                SWITCH_STREAMING( 1 );
                                OVERRIDE_FREEZE_FLAGS( 0 );
                                CLEAR_HELP();
                                STOP_MOVIE();
                                RELEASE_MOVIE();
                                if (NOT (l_U9 == -1))
                                {
                                    SET_TEXT_RENDER_ID( l_U9 );
                                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                }
                                PLAY_SOUND_FRONTEND( l_U23, "TELEVISION_TURN_OFF" );
                                sub_8442( l_U27 );
                                l_U63 = 0;
                                g_U9367 = 0;
                                l_U66 = 0;
                                l_U10 = 0;
                                sub_352( 4, "TV_HLP1" );
                                SETTIMERA( 0 );
                                l_U5 = 7;
                            }
                            if (USING_STANDARD_CONTROLS())
                            {
                                if (((((((IS_CONTROL_JUST_PRESSED( 2, 82 )) || (IS_CONTROL_JUST_PRESSED( 2, 79 ))) || (IS_CONTROL_JUST_PRESSED( 2, 80 ))) || (sub_8693())) || (sub_8749())) || (IS_CONTROL_JUST_PRESSED( 2, 66 ))) || (IS_CONTROL_JUST_PRESSED( 2, 67 )))
                                {
                                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP2" )))
                                    {
                                        PRINT_HELP( "TV_HLP2" );
                                    }
                                }
                            }
                            else if (((((((IS_CONTROL_JUST_PRESSED( 2, 84 )) || (IS_CONTROL_JUST_PRESSED( 2, 79 ))) || (IS_CONTROL_JUST_PRESSED( 2, 80 ))) || (sub_8693())) || (sub_8749())) || (IS_CONTROL_JUST_PRESSED( 2, 66 ))) || (IS_CONTROL_JUST_PRESSED( 2, 67 )))
                            {
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP3" )))
                                {
                                    PRINT_HELP( "TV_HLP3" );
                                }
                            }
                        }
                        break;
                        case 7:
                        if (TIMERA() > 2000)
                        {
                            if (HAS_SOUND_FINISHED( l_U23 ))
                            {
                                if (NOT g_U9364)
                                {
                                    sub_9042();
                                }
                                if (NOT (IS_CHAR_INJURED( sub_708() )))
                                {
                                    FREEZE_CHAR_POSITION( sub_708(), 0 );
                                    TASK_LOOK_AT_COORD( sub_708(), l_U6._fU0, l_U6._fU4, l_U6._fU8, 0, 0 );
                                    CLEAR_CHAR_TASKS( sub_708() );
                                    SET_PLAYER_CONTROL( sub_622(), 1 );
                                }
                                sub_573();
                                MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV( 0 );
                                AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
                                l_U5 = 8;
                            }
                        }
                        break;
                        case 8:
                        if (NOT (l_U9 == -1))
                        {
                            SET_TEXT_RENDER_ID( l_U9 );
                            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        }
                        if (NOT g_U9364)
                        {
                            sub_352( 4, "TV_HLP1" );
                            l_U5 = 2;
                        }
                        break;
                    }
                }
            }
            else
            {
                sub_128();
            }
        }
        else
        {
            sub_128();
        }
        sub_9291();
    }
    sub_128();
    return;
}

void sub_128()
{
    int I;

    RELEASE_MOVIE();
    if ((DOES_SCRIPT_EXIST( "francis4" )) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "francis4" )) > 0))
    {
        STOP_STREAM();
    }
    if (NOT (l_U9 == -1))
    {
        SET_TEXT_RENDER_ID( l_U9 );
        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    }
    sub_259( "TV_HLP1" );
    sub_259( "TV_HLP2" );
    sub_259( "TV_HLP3" );
    sub_352( 4, "TV_HLP1" );
    if (NOT (IS_CHAR_INJURED( sub_708() )))
    {
        FREEZE_CHAR_POSITION( sub_708(), 0 );
    }
    g_U9364 = 0;
    g_U9365 = 1;
    g_U9367 = 0;
    g_U9368 = 0;
    SWITCH_STREAMING( 1 );
    OVERRIDE_FREEZE_FLAGS( 0 );
    MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV( 0 );
    if (l_U19)
    {
        for ( I = 0; I <= 1; I++ )
        {
            RELEASE_TEXTURE( l_U13[I] );
        }
    }
    MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "TV_fakeStatic" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_259(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_352(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((g_U9172 == iParam0) AND (l_U3))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_573();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_622(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_573()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_622()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_708()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_3275()
{
    REQUEST_ANIMS( "missambtv" );
    if (HAVE_ANIMS_LOADED( "missambtv" ))
    {
        return 1;
    }
    return 0;
}

int sub_3588(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_622() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_622() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_622() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_3684())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_708() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_3769())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_3684()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_3769()
{
    return sub_3780( 0, 0 );
}

int sub_3780(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

void sub_4405(unknown uParam0)
{
    if (sub_4414())
    {
        if (NOT l_U28)
        {
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U24 );
            SET_CAM_POS( l_U24, l_U34._fU0, l_U34._fU4, l_U34._fU8 );
            SET_CAM_ROT( l_U24, l_U37._fU0, l_U37._fU4, l_U37._fU8 );
            SET_CAM_FOV( l_U24, l_U40 );
            CREATE_CAM( 14, ref l_U25 );
            SET_CAM_POS( l_U25, l_U41._fU0, l_U41._fU4, l_U41._fU8 );
            SET_CAM_ROT( l_U25, l_U44._fU0, l_U44._fU4, l_U44._fU8 );
            SET_CAM_FOV( l_U25, l_U47 );
            CREATE_CAM( 14, ref l_U26 );
            SET_CAM_POS( l_U26, l_U48._fU0, l_U48._fU4, l_U48._fU8 );
            SET_CAM_ROT( l_U26, l_U51._fU0, l_U51._fU4, l_U51._fU8 );
            SET_CAM_FOV( l_U26, l_U54 );
            SET_CAM_ACTIVE( l_U25, 1 );
            SET_CAM_PROPAGATE( l_U25, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U28 = 1;
        }
    }
    return;
}

void sub_4414()
{
    return sub_3780( 1, 1 );
}

void sub_5123()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

void sub_5394()
{
    if (g_U9365 == 1)
    {
        SET_CURRENT_MOVIE( "weazel" );
    }
    else if (g_U9365 == 2)
    {
        SET_CURRENT_MOVIE( "CNT" );
    }
    else if (g_U9365 == 10)
    {
        SET_CURRENT_MOVIE( "static" );
    }
    else if (g_U9365 == 66)
    {
        SET_CURRENT_MOVIE( "burgershot_nosound" );
    }
    else if (g_U9365 == 98)
    {
        SET_CURRENT_MOVIE( "static_nosound" );
    }
    else if (g_U9365 == 99)
    {
        SET_CURRENT_MOVIE( "static" );
    };;;;;;
    return;
}

void sub_5757()
{
    GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U9 );
    SET_TEXT_RENDER_ID( l_U9 );
    DRAW_MOVIE( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_8442(unknown uParam0)
{
    if (l_U28)
    {
        SET_CAM_ACTIVE( l_U24, 0 );
        SET_CAM_PROPAGATE( l_U24, 0 );
        SET_CAM_ACTIVE( l_U25, 0 );
        SET_CAM_PROPAGATE( l_U25, 0 );
        SET_CAM_ACTIVE( l_U26, 0 );
        SET_CAM_PROPAGATE( l_U26, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        END_CAM_COMMANDS( ref uParam0 );
        DESTROY_CAM( l_U24 );
        DESTROY_CAM( l_U25 );
        DESTROY_CAM( l_U26 );
        l_U28 = 0;
    }
    return;
}

int sub_8693()
{
    if ((IS_CONTROL_PRESSED( 0, 78 )) || (IS_CONTROL_PRESSED( 2, 78 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_8749()
{
    if ((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_9042()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_9291()
{
    unknown uVar2;

    switch (l_U17)
    {
        case 1:
        REQUEST_STREAMED_TXD( "TV_fakeStatic", 0 );
        if (NOT (HAS_STREAMED_TXD_LOADED( "TV_fakeStatic" )))
        {
            break;
        }
        l_U13[0] = GET_TEXTURE_FROM_STREAMED_TXD( "TV_fakeStatic", "static_0" );
        l_U13[1] = GET_TEXTURE_FROM_STREAMED_TXD( "TV_fakeStatic", "static_1" );
        l_U13[2] = GET_TEXTURE_FROM_STREAMED_TXD( "TV_fakeStatic", "static_2" );
        l_U19 = 1;
        l_U17 = 2;
        case 2:
        if (l_U20)
        {
            SET_TEXT_RENDER_ID( l_U9 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar2 );
            DRAW_SPRITE( l_U13[l_U18], 0.50000000, 0.50000000, 1.00000000, 1.00000000, (TO_FLOAT( uVar2 )) * 180.00000000, 255, 255, 255, 255 );
            sub_9607( ref l_U18, 1, 0, 2 );
        }
        break;
    }
    return;
}

void sub_9607(unknown uParam0, int iParam1, int iParam2, int iParam3)
{
    boolean bVar6;

    bVar6 = true;
    (uParam0^) += iParam1;
    while (bVar6)
    {
        if ((uParam0^) > iParam3)
        {
            (uParam0^) -= (iParam3 - iParam2) + 1;
        }
        else if ((uParam0^) < iParam2)
        {
            (uParam0^) += (iParam3 - iParam2) + 1;
        }
        else
        {
            bVar6 = false;
        }
    }
    return;
}