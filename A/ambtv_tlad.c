void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0.40000000;
    l_U7 = 0;
    l_U14 = 1;
    l_U15 = 0;
    l_U21 = 0;
    l_U22 = 0;
    l_U23 = 0;
    l_U24 = 0;
    l_U28 = 0;
    l_U75 = 0;
    l_U76 = 0;
    l_U77 = 1;
    l_U78 = 0;
    l_U80 = 0;
    l_U81 = 0;
    l_U88 = 0;
    l_U91 = -12.00000000;
    l_U92 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_136();
    }
    if (DOES_OBJECT_EXIST( l_U93 ))
    {
        GET_OBJECT_COORDINATES( l_U93, ref l_U8._fU0, ref l_U8._fU4, ref l_U8._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U93 ))
    {
        if (sub_934( l_U93, "e1_lost_grnddrink" ))
        {
            l_U29 = {-1708.84400000, 348.60170000, 25.92240000};
            l_U32 = 250.00000000;
            l_U38[1] = {-1707.49500000, 348.37160000, 27.18502000};
            l_U51[1] = {2.55960400, -0.00000000, -89.12234000};
            l_U64[1] = 45.00000000;
            if (# -NULL-0xc27c84())
            {
                l_U38[2] = {-1707.49500000, 348.37160000, 27.18502000};
                l_U51[2] = {2.55960400, -0.00000000, -89.12234000};
                l_U64[2] = 45.00000000;
            }
            else
            {
                l_U38[2] = {-1710.80000000, 347.22760000, 27.21375000};
                l_U51[2] = {-11.78221000, 0.00000000, -53.50981000};
                l_U64[2] = 56.70000000;
            }
            l_U38[3] = {-1709.38000000, 349.58630000, 27.14694000};
            l_U51[3] = {-2.43597000, -0.00000000, -137.28340000};
            l_U64[3] = 48.00000000;
            l_U69 = {-1707.45100000, 346.33860000, 26.47214000};
            l_U72 = {-1709.16400000, 350.05460000, 27.93596000};
            l_U82 = "e1_lost_grnddrink";
            l_U83 = {-1705.50300000, 345.97640000, 25.92240000};
            l_U86 = 67.00000000;
            if (NOT g_U10462)
            {
                l_U88 = 1;
            }
        }
        else if (sub_934( l_U93, "e1_lost_grndbar" ))
        {
            l_U29 = {-1717.11100000, 350.03730000, 25.34160000};
            l_U32 = 180.00000000;
            l_U38[1] = {-1717.73900000, 344.56110000, 28.11092000};
            l_U51[1] = {2.51168000, 0.00000000, -156.01500000};
            l_U64[1] = 45.00000000;
            if (# -NULL-0xc27c84())
            {
                l_U38[2] = {-1719.60400000, 352.31210000, 26.37176000};
                l_U51[2] = {7.17631700, -0.00000000, -141.83650000};
                l_U64[2] = 45.00000000;
            }
            else
            {
                l_U38[2] = {-1719.60400000, 352.31210000, 26.37176000};
                l_U51[2] = {7.17631700, -0.00000000, -141.83650000};
                l_U64[2] = 56.70000000;
            }
            l_U38[3] = {-1714.02900000, 350.72370000, 26.87038000};
            l_U51[3] = {-6.88076000, -0.00000000, 124.16020000};
            l_U64[3] = 48.00000000;
            l_U69 = {-1717.38000000, 344.54780000, 25.20428000};
            l_U72 = {-1719.19900000, 352.15690000, 27.83739000};
            l_U82 = "e1_lost_grndbar";
            l_U83 = {-1719.64500000, 346.24150000, 25.34160000};
            l_U86 = 333.67140000;
            l_U88 = 1;
        }
        else
        {
            sub_136();
        }
    }
    while (true)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U93 ))
        {
            if ((IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U93 )) AND (NOT (HAS_OBJECT_BEEN_DAMAGED( l_U93 ))))
            {
                if (IS_PLAYER_PLAYING( sub_579() ))
                {
                    switch (l_U7)
                    {
                        case 0:
                        g_U10668 = 0;
                        GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U11 );
                        SET_TEXT_RENDER_ID( l_U11 );
                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        l_U7 = 1;
                        break;
                        case 1:
                        if (sub_2083())
                        {
                            GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 80.00000000, ref l_U25 );
                            l_U26 = ROUND( l_U25 );
                            l_U25 = TO_FLOAT( l_U26 );
                            if (g_U10462)
                            {
                                if (g_U10463)
                                {
                                    l_U7 = 5;
                                }
                            }
                            else
                            {
                                l_U7 = 2;
                            }
                        }
                        break;
                        case 2:
                        if (IS_CHAR_IN_ANY_CAR( sub_665() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_665(), ref l_U87 );
                        }
                        if (IS_WANTED_LEVEL_GREATER( sub_579(), 0 ))
                        {
                            WAIT( 0 );
                        }
                        else
                        {
                            l_U25 += 0.01000000;
                            if (l_U25 > 100.00000000)
                            {
                                l_U25 = 0.00000000;
                            }
                            if (((((LOCATE_CHAR_ON_FOOT_2D( sub_665(), -1707.91700000, 348.29710000, 1.00000000, 1.00000000, 0 )) AND (sub_2370( 4, 0 ))) AND (IS_OBJECT_STATIC( l_U93 ))) AND (NOT g_U12303)) AND (IS_OBJECT_UPRIGHT( l_U93, 1 )))
                            {
                                PRINT_HELP_FOREVER( "TV_HLP1" );
                                if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                                {
                                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U87 );
                                    if (NOT (IS_CAR_DEAD( l_U87 )))
                                    {
                                        if (IS_CAR_IN_AREA_3D( l_U87, l_U69._fU0 - 2.00000000, l_U69._fU4 - 2.00000000, l_U69._fU8 - 2.00000000, l_U72._fU0 + 2.00000000, l_U72._fU4 + 2.00000000, l_U72._fU8 + 2.00000000, 0 ))
                                        {
                                            SET_CAR_COORDINATES( l_U87, l_U83._fU0, l_U83._fU4, l_U83._fU8 );
                                            SET_CAR_HEADING( l_U87, l_U86 );
                                            SET_CAR_ON_GROUND_PROPERLY( l_U87 );
                                            CLEAR_ROOM_FOR_CAR( l_U87 );
                                        }
                                    }
                                    CLEAR_AREA( l_U29._fU0, l_U29._fU4, l_U29._fU8, 5.00000000, 0 );
                                    REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\TELEVISION" );
                                    l_U27 = GET_SOUND_ID();
                                    GET_GAME_VIEWPORT_ID( ref l_U13 );
                                    l_U7 = 3;
                                }
                            }
                            else
                            {
                                sub_309( 4, "TV_HLP1" );
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP1" ))
                                {
                                    CLEAR_HELP();
                                }
                            }
                        }
                        break;
                        case 3:
                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP1" ))
                        {
                            CLEAR_HELP();
                        }
                        if (NOT g_U10665)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                            if (NOT l_U78)
                            {
                                sub_3123( l_U28 );
                                l_U77 = 2;
                                SET_PLAYER_CONTROL( sub_579(), 0 );
                                SET_CHAR_COORDINATES( sub_665(), l_U29._fU0, l_U29._fU4, l_U29._fU8 );
                                SET_CHAR_HEADING( sub_665(), l_U32 );
                                SWITCH_STREAMING( 0 );
                                OVERRIDE_FREEZE_FLAGS( 1 );
                                OPEN_SEQUENCE_TASK( ref l_U79 );
                                TASK_PLAY_ANIM( 0, "sit_down", "missambtv", 8.00000000, 0, 0, 0, 0, -2 );
                                TASK_PLAY_ANIM( 0, "sit_loop", "missambtv", 8.00000000, 1, 0, 0, 0, -2 );
                                CLOSE_SEQUENCE_TASK( l_U79 );
                                TASK_PERFORM_SEQUENCE( sub_665(), l_U79 );
                                CLEAR_SEQUENCE_TASK( l_U79 );
                                l_U78 = 1;
                            }
                            else if ((NOT (IS_CHAR_INJURED( sub_665() ))) AND (IS_CHAR_PLAYING_ANIM( sub_665(), "missambtv", "sit_loop" )))
                            {
                                FREEZE_CHAR_POSITION( sub_665(), 1 );
                                TASK_LOOK_AT_COORD( sub_665(), l_U8._fU0, l_U8._fU4, l_U8._fU8, -2, 4 );
                                PLAY_SOUND_FRONTEND( l_U27, "TELEVISION_TURN_ON" );
                                MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV( 1 );
                                sub_3978();
                                l_U7 = 4;
                            }
                        }
                        break;
                        case 4:
                        if (NOT g_U10665)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                        }
                        if (NOT g_U10665)
                        {
                            if (NOT l_U76)
                            {
                                if (USING_STANDARD_CONTROLS())
                                {
                                    PRINT_HELP( "TV_HLP2" );
                                }
                                else
                                {
                                    PRINT_HELP( "TV_HLP3" );
                                }
                                l_U76 = 1;
                            }
                        }
                        l_U7 = 5;
                        break;
                        case 5:
                        if (g_U10462)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                            l_U14 = 1;
                            SET_CURRENT_MOVIE( "weazelep1" );
                        }
                        else if (NOT g_U10665)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                            if ((sub_4183( 0, 2 )) == 0)
                            {
                                l_U14 = 1;
                                sub_4225();
                            }
                            else
                            {
                                l_U14 = 2;
                                sub_4225();
                            }
                        }
                        l_U7 = 6;
                        break;
                        case 6:
                        sub_4539();
                        if (NOT l_U81)
                        {
                            SET_TEXT_RENDER_ID( l_U11 );
                            SET_MOVIE_TIME( l_U25 );
                            SET_MOVIE_VOLUME( l_U91 );
                            PLAY_MOVIE();
                            l_U81 = 1;
                        }
                        else
                        {
                            l_U25 += 0.01000000;
                            if (l_U25 > 100.00000000)
                            {
                                l_U25 = 0.00000000;
                            }
                        }
                        if ((HAS_OBJECT_BEEN_DAMAGED( l_U93 )) || (g_U10668 == 1))
                        {
                            if (NOT l_U80)
                            {
                                if (g_U10667)
                                {
                                    l_U24 = 1;
                                    if (l_U21 == 0)
                                    {
                                        l_U21 = 1;
                                    }
                                    STOP_STREAM();
                                    RELEASE_MOVIE();
                                    l_U80 = 1;
                                }
                                else
                                {
                                    RELEASE_MOVIE();
                                    l_U14 = 10;
                                    sub_4225();
                                    SET_TEXT_RENDER_ID( l_U11 );
                                    PLAY_MOVIE();
                                    l_U80 = 1;
                                }
                            }
                            else if (HAS_OBJECT_BEEN_DAMAGED( l_U93 ))
                            {
                                sub_136();
                            }
                        }
                        if (NOT g_U10665)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                            if (NOT g_U10462)
                            {
                                if (l_U92)
                                {
                                    sub_136();
                                }
                                if (TIMERA() > 250)
                                {
                                    if ((IS_CONTROL_JUST_PRESSED( 2, 65 )) || (IS_CONTROL_JUST_PRESSED( 2, 64 )))
                                    {
                                        if (l_U25 >= 100.00000000)
                                        {
                                            l_U25 = 0.00000000;
                                        }
                                        if (NOT l_U88)
                                        {
                                            switch (l_U14)
                                            {
                                                case 1:
                                                l_U14 = 2;
                                                break;
                                                case 2:
                                                l_U14 = 1;
                                                break;
                                            }
                                            sub_5034();
                                            sub_4225();
                                            sub_5104( 0 );
                                        }
                                        else if ((sub_4183( 0, 10 )) > 5)
                                        {
                                            switch (l_U14)
                                            {
                                                case 1:
                                                if ((sub_4183( 0, 10 )) > 3)
                                                {
                                                    l_U14 = 2;
                                                    l_U15 = 0;
                                                }
                                                else
                                                {
                                                    l_U14 = 10;
                                                    l_U15 = 1;
                                                }
                                                break;
                                                case 2:
                                                if ((sub_4183( 0, 10 )) > 3)
                                                {
                                                    l_U14 = 1;
                                                    l_U15 = 0;
                                                }
                                                else
                                                {
                                                    l_U14 = 10;
                                                    l_U15 = 1;
                                                }
                                                break;
                                                case 10:
                                                if ((sub_4183( 0, 10 )) > 5)
                                                {
                                                    l_U14 = 2;
                                                    l_U15 = 0;
                                                }
                                                else
                                                {
                                                    l_U14 = 1;
                                                    l_U15 = 0;
                                                }
                                                break;
                                            }
                                            sub_5034();
                                            sub_4225();
                                            sub_5104( l_U15 );
                                        }
                                        else
                                        {
                                            l_U14 = 10;
                                            sub_5034();
                                            sub_4225();
                                            sub_5104( 1 );
                                        }
                                    }
                                }
                                if (IS_CONTROL_JUST_PRESSED( 2, 0 ))
                                {
                                    if (# -NULL-0xc27c84())
                                    {
                                        switch (l_U77)
                                        {
                                            case 2:
                                            SET_CAM_ACTIVE( l_U33[l_U77], 0 );
                                            SET_CAM_PROPAGATE( l_U33[l_U77], 0 );
                                            l_U77 = 3;
                                            SET_CAM_ACTIVE( l_U33[l_U77], 1 );
                                            SET_CAM_PROPAGATE( l_U33[l_U77], 1 );
                                            break;
                                            case 3:
                                            SET_CAM_ACTIVE( l_U33[l_U77], 0 );
                                            SET_CAM_PROPAGATE( l_U33[l_U77], 0 );
                                            l_U77 = 2;
                                            SET_CAM_ACTIVE( l_U33[l_U77], 1 );
                                            SET_CAM_PROPAGATE( l_U33[l_U77], 1 );
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        switch (l_U77)
                                        {
                                            case 1:
                                            SET_CAM_ACTIVE( l_U33[l_U77], 0 );
                                            SET_CAM_PROPAGATE( l_U33[l_U77], 0 );
                                            l_U77 = 2;
                                            SET_CAM_ACTIVE( l_U33[l_U77], 1 );
                                            SET_CAM_PROPAGATE( l_U33[l_U77], 1 );
                                            break;
                                            case 2:
                                            SET_CAM_ACTIVE( l_U33[l_U77], 0 );
                                            SET_CAM_PROPAGATE( l_U33[l_U77], 0 );
                                            l_U77 = 3;
                                            SET_CAM_ACTIVE( l_U33[l_U77], 1 );
                                            SET_CAM_PROPAGATE( l_U33[l_U77], 1 );
                                            break;
                                            case 3:
                                            SET_CAM_ACTIVE( l_U33[l_U77], 0 );
                                            SET_CAM_PROPAGATE( l_U33[l_U77], 0 );
                                            l_U77 = 1;
                                            SET_CAM_ACTIVE( l_U33[l_U77], 1 );
                                            SET_CAM_PROPAGATE( l_U33[l_U77], 1 );
                                            break;
                                        }
                                    }
                                }
                                if ((USING_STANDARD_CONTROLS()) || (NOT IS_USING_CONTROLLER()))
                                {
                                    if (IS_CONTROL_JUST_PRESSED( 2, 84 ))
                                    {
                                        l_U91 += 1.50000000;
                                        PRINTNL();
                                        PRINTSTRING( "fMovieVolume: " );
                                        PRINTFLOAT( l_U91 );
                                        PRINTNL();
                                        if (l_U91 > 0.00000000)
                                        {
                                            l_U91 = 0.00000000;
                                            SET_MOVIE_VOLUME( l_U91 );
                                        }
                                        else if (l_U91 < 65512)
                                        {
                                            l_U91 = -24.00000000;
                                            SET_MOVIE_VOLUME( l_U91 );
                                        }
                                        else
                                        {
                                            SET_MOVIE_VOLUME( l_U91 );
                                        }
                                    }
                                    if (IS_CONTROL_JUST_PRESSED( 2, 83 ))
                                    {
                                        l_U91 -= 1.50000000;
                                        PRINTNL();
                                        PRINTSTRING( "fMovieVolume: " );
                                        PRINTFLOAT( l_U91 );
                                        PRINTNL();
                                        if (l_U91 < -24.00000000)
                                        {
                                            l_U91 = -100.00000000;
                                            SET_MOVIE_VOLUME( l_U91 );
                                        }
                                        else
                                        {
                                            SET_MOVIE_VOLUME( l_U91 );
                                        }
                                    }
                                }
                                else if (IS_CONTROL_JUST_PRESSED( 2, 82 ))
                                {
                                    l_U91 += 1.50000000;
                                    PRINTNL();
                                    PRINTSTRING( "fMovieVolume: " );
                                    PRINTFLOAT( l_U91 );
                                    PRINTNL();
                                    if (l_U91 > 0.00000000)
                                    {
                                        l_U91 = 0.00000000;
                                        SET_MOVIE_VOLUME( l_U91 );
                                    }
                                    else if (l_U91 < 65512)
                                    {
                                        l_U91 = -24.00000000;
                                        SET_MOVIE_VOLUME( l_U91 );
                                    }
                                    else
                                    {
                                        SET_MOVIE_VOLUME( l_U91 );
                                    }
                                }
                                if (IS_CONTROL_JUST_PRESSED( 2, 81 ))
                                {
                                    l_U91 -= 1.50000000;
                                    PRINTNL();
                                    PRINTSTRING( "fMovieVolume: " );
                                    PRINTFLOAT( l_U91 );
                                    PRINTNL();
                                    if (l_U91 < -24.00000000)
                                    {
                                        l_U91 = -100.00000000;
                                        SET_MOVIE_VOLUME( l_U91 );
                                    }
                                    else
                                    {
                                        SET_MOVIE_VOLUME( l_U91 );
                                    }
                                }
                                if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                                {
                                    SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U13, l_U82 );
                                    if (NOT (IS_CHAR_INJURED( sub_665() )))
                                    {
                                        SET_ROOM_FOR_CHAR_BY_NAME( sub_665(), l_U82 );
                                    }
                                    SWITCH_STREAMING( 1 );
                                    OVERRIDE_FREEZE_FLAGS( 0 );
                                    CLEAR_HELP();
                                    STOP_MOVIE();
                                    RELEASE_MOVIE();
                                    if (NOT (l_U11 == -1))
                                    {
                                        SET_TEXT_RENDER_ID( l_U11 );
                                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                    }
                                    PLAY_SOUND_FRONTEND( l_U27, "TELEVISION_TURN_OFF" );
                                    sub_6784( l_U28 );
                                    if (NOT (IS_CHAR_INJURED( sub_665() )))
                                    {
                                        FREEZE_CHAR_POSITION( sub_665(), 0 );
                                        TASK_LOOK_AT_COORD( sub_665(), l_U8._fU0, l_U8._fU4, l_U8._fU8, 0, 0 );
                                        CLEAR_CHAR_TASKS( sub_665() );
                                        SET_PLAYER_CONTROL( sub_579(), 1 );
                                    }
                                    l_U78 = 0;
                                    g_U10668 = 0;
                                    l_U81 = 0;
                                    sub_309( 4, "TV_HLP1" );
                                    SETTIMERA( 0 );
                                    l_U7 = 7;
                                }
                                if (USING_STANDARD_CONTROLS())
                                {
                                    if (((((((IS_CONTROL_JUST_PRESSED( 2, 82 )) || (IS_CONTROL_JUST_PRESSED( 2, 79 ))) || (IS_CONTROL_JUST_PRESSED( 2, 80 ))) || (sub_7165())) || (sub_7221())) || (IS_CONTROL_JUST_PRESSED( 2, 66 ))) || (IS_CONTROL_JUST_PRESSED( 2, 67 )))
                                    {
                                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP2" )))
                                        {
                                            PRINT_HELP( "TV_HLP2" );
                                        }
                                    }
                                }
                                else if (((((((IS_CONTROL_JUST_PRESSED( 2, 84 )) || (IS_CONTROL_JUST_PRESSED( 2, 79 ))) || (IS_CONTROL_JUST_PRESSED( 2, 80 ))) || (sub_7165())) || (sub_7221())) || (IS_CONTROL_JUST_PRESSED( 2, 66 ))) || (IS_CONTROL_JUST_PRESSED( 2, 67 )))
                                {
                                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP3" )))
                                    {
                                        PRINT_HELP( "TV_HLP3" );
                                    }
                                }
                            }
                            else
                            {
                                l_U92 = 1;
                                if (NOT g_U10463)
                                {
                                    sub_136();
                                }
                            }
                        }
                        break;
                        case 7:
                        if (TIMERA() > 2000)
                        {
                            if (HAS_SOUND_FINISHED( l_U27 ))
                            {
                                if (NOT g_U10665)
                                {
                                    sub_7541();
                                }
                                sub_530();
                                MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV( 0 );
                                AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
                                l_U7 = 8;
                            }
                        }
                        break;
                        case 8:
                        if (NOT (l_U11 == -1))
                        {
                            SET_TEXT_RENDER_ID( l_U11 );
                            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        }
                        if (NOT g_U10665)
                        {
                            sub_309( 4, "TV_HLP1" );
                            l_U7 = 2;
                        }
                        break;
                    }
                }
            }
            else
            {
                sub_136();
            }
        }
        else
        {
            sub_136();
        }
        sub_7705();
    }
    sub_136();
    return;
}

void sub_136()
{
    int I;

    RELEASE_MOVIE();
    if (NOT (l_U11 == -1))
    {
        SET_TEXT_RENDER_ID( l_U11 );
        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    }
    sub_216( "TV_HLP1" );
    sub_216( "TV_HLP2" );
    sub_216( "TV_HLP3" );
    sub_309( 4, "TV_HLP1" );
    if (NOT (IS_CHAR_INJURED( sub_665() )))
    {
        FREEZE_CHAR_POSITION( sub_665(), 0 );
    }
    g_U10665 = 0;
    g_U10668 = 0;
    SWITCH_STREAMING( 1 );
    OVERRIDE_FREEZE_FLAGS( 0 );
    MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV( 0 );
    if (l_U23)
    {
        for ( I = 0; I <= 1; I++ )
        {
            RELEASE_TEXTURE( l_U17[I] );
        }
    }
    MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "TV_fakeStatic" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_216(unknown uParam0)
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

void sub_309(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((g_U10468 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_530();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_579(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_530()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_579()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_665()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

boolean sub_934(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_ROOM_KEY_FROM_OBJECT( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

int sub_2083()
{
    REQUEST_ANIMS( "missambtv" );
    if (HAVE_ANIMS_LOADED( "missambtv" ))
    {
        return 1;
    }
    return 0;
}

int sub_2370(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_579() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_579() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_579() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_2466())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_665() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_2551())
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

int sub_2466()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_2551()
{
    return sub_2562( 0, 0 );
}

int sub_2562(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

void sub_3123(unknown uParam0)
{
    if (sub_3132())
    {
        if (NOT l_U75)
        {
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U33[1] );
            SET_CAM_POS( l_U33[1], l_U38[1]._fU0, l_U38[1]._fU4, l_U38[1]._fU8 );
            SET_CAM_ROT( l_U33[1], l_U51[1]._fU0, l_U51[1]._fU4, l_U51[1]._fU8 );
            SET_CAM_FOV( l_U33[1], l_U64[1] );
            CREATE_CAM( 14, ref l_U33[2] );
            SET_CAM_POS( l_U33[2], l_U38[2]._fU0, l_U38[2]._fU4, l_U38[2]._fU8 );
            SET_CAM_ROT( l_U33[2], l_U51[2]._fU0, l_U51[2]._fU4, l_U51[2]._fU8 );
            SET_CAM_FOV( l_U33[2], l_U64[2] );
            CREATE_CAM( 14, ref l_U33[3] );
            SET_CAM_POS( l_U33[3], l_U38[3]._fU0, l_U38[3]._fU4, l_U38[3]._fU8 );
            SET_CAM_ROT( l_U33[3], l_U51[3]._fU0, l_U51[3]._fU4, l_U51[3]._fU8 );
            SET_CAM_FOV( l_U33[3], l_U64[3] );
            SET_CAM_ACTIVE( l_U33[2], 1 );
            SET_CAM_PROPAGATE( l_U33[2], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U75 = 1;
        }
    }
    return;
}

void sub_3132()
{
    return sub_2562( 1, 1 );
}

void sub_3978()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

void sub_4183(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_4225()
{
    if (l_U14 == 1)
    {
        if (NOT IS_EPISODIC_DISC_BUILD())
        {
            SET_CURRENT_MOVIE( "e1:/movies/weazelep1" );
        }
        else
        {
            SET_CURRENT_MOVIE( "EFLC_WEAZEL" );
        }
    }
    else if (l_U14 == 2)
    {
        if (NOT IS_EPISODIC_DISC_BUILD())
        {
            SET_CURRENT_MOVIE( "e1:/movies/CNTep1" );
        }
        else
        {
            SET_CURRENT_MOVIE( "EFLC_CNT" );
        }
    }
    else if (l_U14 == 10)
    {
        SET_CURRENT_MOVIE( "static" );
    }
    else if (l_U14 == 66)
    {
        SET_CURRENT_MOVIE( "burgershot_nosound" );
    }
    else if (l_U14 == 98)
    {
        SET_CURRENT_MOVIE( "static_nosound" );
    };;;;;
    return;
}

void sub_4539()
{
    GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U11 );
    SET_TEXT_RENDER_ID( l_U11 );
    DRAW_MOVIE( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_5034()
{
    STOP_MOVIE();
    RELEASE_MOVIE();
    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    return;
}

void sub_5104(boolean bParam0)
{
    SET_TEXT_RENDER_ID( l_U11 );
    if (NOT bParam0)
    {
        SET_MOVIE_TIME( l_U25 );
    }
    PLAY_MOVIE();
    SETTIMERA( 0 );
    return;
}

void sub_6784(unknown uParam0)
{
    if (l_U75)
    {
        SET_CAM_ACTIVE( l_U33[1], 0 );
        SET_CAM_PROPAGATE( l_U33[1], 0 );
        SET_CAM_ACTIVE( l_U33[2], 0 );
        SET_CAM_PROPAGATE( l_U33[2], 0 );
        SET_CAM_ACTIVE( l_U33[3], 0 );
        SET_CAM_PROPAGATE( l_U33[3], 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        END_CAM_COMMANDS( ref uParam0 );
        DESTROY_CAM( l_U33[1] );
        DESTROY_CAM( l_U33[2] );
        DESTROY_CAM( l_U33[3] );
        l_U75 = 0;
    }
    return;
}

int sub_7165()
{
    if ((IS_CONTROL_PRESSED( 0, 78 )) || (IS_CONTROL_PRESSED( 2, 78 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_7221()
{
    if ((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_7541()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_7705()
{
    unknown uVar2;

    switch (l_U21)
    {
        case 1:
        REQUEST_STREAMED_TXD( "TV_fakeStatic", 0 );
        if (NOT (HAS_STREAMED_TXD_LOADED( "TV_fakeStatic" )))
        {
            break;
        }
        l_U17[0] = GET_TEXTURE_FROM_STREAMED_TXD( "TV_fakeStatic", "static_0" );
        l_U17[1] = GET_TEXTURE_FROM_STREAMED_TXD( "TV_fakeStatic", "static_1" );
        l_U17[2] = GET_TEXTURE_FROM_STREAMED_TXD( "TV_fakeStatic", "static_2" );
        l_U23 = 1;
        l_U21 = 2;
        case 2:
        if (l_U24)
        {
            SET_TEXT_RENDER_ID( l_U11 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar2 );
            DRAW_SPRITE( l_U17[l_U22], 0.50000000, 0.50000000, 1.00000000, 1.00000000, (TO_FLOAT( uVar2 )) * 180.00000000, 255, 255, 255, 255 );
            sub_8021( ref l_U22, 1, 0, 2 );
        }
        break;
    }
    return;
}

void sub_8021(unknown uParam0, int iParam1, int iParam2, int iParam3)
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