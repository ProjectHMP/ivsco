void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = 0;
    l_U482 = {365.14480000, 1506.39800000, 15.97200000};
    l_U485 = 330.00000000;
    l_U487 = {369.64030000, 1510.69800000, 16.16600000};
    l_U490 = 330.00000000;
    l_U492 = {1223.57300000, 694.04890000, 39.02000000};
    l_U497 = 375732086;
    l_U499 = 1445589009;
    l_U501 = {0.08200000, -2.10400000, 0.50000000};
    l_U504 = 364686627;
    l_U506 = {0.11600000, -2.42000000, 0.50000000};
    l_U509 = 2.50000000;
    l_U514 = 0;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U522 = 0.00000000;
    l_U523 = 0;
    l_U525 = 1;
    l_U528 = 4;
    l_U529 = 0;
    l_U531 = 0;
    l_U533 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_340();
        sub_2450();
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    sub_8965( "E4AUD" );
    LOAD_ADDITIONAL_TEXT( "E4AUD", 6 );
    sub_9108( 0, sub_6536(), "Niko", 0 );
    STOP_PED_SPEAKING( sub_6536(), 0 );
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "ELIZ4", 0 );
    sub_9302( "ELIZ4" );
    sub_9474( 4, 0 );
    sub_10531();
    while (true)
    {
        WAIT( 0 );
        sub_10562();
        switch (l_U481)
        {
            case 0:
            if (g_U9893._fU24)
            {
                START_CUTSCENE_NOW( "EM_7" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "EM_7" );
                if (NOT (IS_CHAR_DEAD( sub_6536() )))
                {
                    SET_CHAR_COORDINATES( sub_6536(), l_U482._fU0, l_U482._fU4, l_U482._fU8 );
                    SET_CHAR_HEADING( sub_6536(), l_U485 );
                }
                SET_CAM_BEHIND_PED( sub_6536() );
                sub_22923();
                sub_24203( 1 );
                sub_24203( 0 );
                sub_24290();
                SET_WIDESCREEN_BORDERS( 0 );
                LOAD_SCENE( l_U482._fU0, l_U482._fU4, l_U482._fU8 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                DO_SCREEN_FADE_IN( 400 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                PRINT_NOW( "EB4X02", 7500, 1 );
                sub_8882();
                l_U481 = 1;
            }
            else if (NOT (IS_CHAR_DEAD( sub_6536() )))
            {
                SET_CHAR_COORDINATES( sub_6536(), l_U482._fU0, l_U482._fU4, l_U482._fU8 );
                SET_CHAR_HEADING( sub_6536(), l_U485 );
            }
            SET_CAM_BEHIND_PED( sub_6536() );
            sub_22923();
            sub_24203( 1 );
            sub_24203( 0 );
            sub_24290();
            SET_WIDESCREEN_BORDERS( 0 );
            LOAD_SCENE( l_U482._fU0, l_U482._fU4, l_U482._fU8 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_IN( 400 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            PRINT_NOW( "EB4X02", 8000, 1 );
            sub_8882();
            l_U481 = 1;;
            break;
            case 1:
            l_U481 = 2;
            break;
            case 2:
            l_U481 = 3;
            break;
            case 3:
            if (sub_24931())
            {
                sub_32183();
                if (DOES_BLIP_EXIST( l_U495 ))
                {
                    REMOVE_BLIP( l_U495 );
                }
                SET_WIDESCREEN_BORDERS( 1 );
                l_U481 = 4;
            }
            else if (IS_VEH_DRIVEABLE( l_U486 ))
            {
                if (NOT l_U520)
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_6536(), l_U486 )))
                    {
                        if (sub_32329())
                        {
                            if (LOCATE_CAR_3D( l_U486, l_U487._fU0, l_U487._fU4, l_U487._fU8, 200.00000000, 200.00000000, 50.00000000, 0 ))
                            {
                                PRINT_NOW( "EB4X07", 7500, 1 );
                                if (NOT (IS_CAR_DEAD( l_U486 )))
                                {
                                    SET_CAR_HEALTH( l_U486, 1 );
                                    SET_ENGINE_HEALTH( l_U486, 0 );
                                    SET_PETROL_TANK_HEALTH( l_U486, 0 );
                                }
                                l_U533 = 1;
                                sub_31805();
                            }
                            else if (DOES_BLIP_EXIST( l_U491 ))
                            {
                                PRINT_NOW( "EB4X04", 7500, 1 );
                                SET_BLIP_AS_FRIENDLY( l_U491, 0 );
                            }
                            if (IS_CAR_DOOR_DAMAGED( l_U486, 5 ))
                            {
                                if (NOT l_U521)
                                {
                                    sub_29629();
                                }
                            }
                            else
                            {
                                sub_29539();
                            }
                        }
                    }
                    if (IS_CAR_DOOR_DAMAGED( l_U486, 5 ))
                    {
                        if (NOT l_U521)
                        {
                            sub_29629();
                        }
                    }
                    else
                    {
                        sub_29539();
                    }
                    sub_32789();
                    sub_33379();
                }
                else if (l_U521)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_6536(), l_U487._fU0, l_U487._fU4, l_U487._fU8, 200.00000000, 200.00000000, 50.00000000, 0 ))
                    {
                        PRINT_NOW( "EB4X07", 7500, 1 );
                        if (NOT (IS_CAR_DEAD( l_U486 )))
                        {
                            SET_CAR_HEALTH( l_U486, 1 );
                            SET_ENGINE_HEALTH( l_U486, 0 );
                            SET_PETROL_TANK_HEALTH( l_U486, 0 );
                        }
                        l_U533 = 1;
                        sub_31805();
                    }
                    else
                    {
                        sub_32044();
                    }
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_6536(), l_U487._fU0, l_U487._fU4, l_U487._fU8, 200.00000000, 200.00000000, 50.00000000, 0 ))
            {
                PRINT_NOW( "EB4X07", 7500, 1 );
                l_U533 = 1;
                sub_31805();
            }
            else if (NOT (IS_CAR_DEAD( l_U486 )))
            {
                if (NOT l_U520)
                {
                    if (l_U529)
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_6536(), l_U486, 200.00000000, 200.00000000, 200.00000000, 0 )))
                        {
                            GET_CAR_COORDINATES( l_U486, ref l_U511._fU0, ref l_U511._fU4, ref l_U511._fU8 );
                            GET_GAME_VIEWPORT_ID( ref l_U530 );
                            if (NOT (CAM_IS_SPHERE_VISIBLE( l_U530, l_U511._fU0, l_U511._fU4, l_U511._fU8, 4.00000000 )))
                            {
                                PRINT_NOW( "EB4X09", 7500, 1 );
                                sub_31805();
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_IN_CAR( sub_6536(), l_U486 )))
                    {
                        PRINT_NOW( "EB4X04", 7500, 1 );
                        if (DOES_BLIP_EXIST( l_U491 ))
                        {
                            SET_BLIP_AS_FRIENDLY( l_U491, 0 );
                        }
                        else
                        {
                            ADD_BLIP_FOR_CAR( l_U486, ref l_U491 );
                            SET_BLIP_AS_FRIENDLY( l_U491, 0 );
                        }
                        l_U529 = 1;
                    }
                }
            }
            else if (l_U529)
            {
                sub_39485();
            }
            CLEAR_PRINTS();
            sub_32044();;;;
            if (IS_VEH_DRIVEABLE( l_U486 ))
            {
                if (IS_CHAR_IN_CAR( sub_6536(), l_U486 ))
                {
                    if (IS_KEYBOARD_KEY_PRESSED( 36 ))
                    {
                        LOAD_SCENE( l_U492._fU0, l_U492._fU4, l_U492._fU8 );
                        SET_CHAR_COORDINATES( sub_6536(), l_U492._fU0, l_U492._fU4, l_U492._fU8 );
                    }
                }
            }
            break;
            case 4:
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (IS_VEH_DRIVEABLE( l_U486 ))
            {
                if (IS_CHAR_IN_CAR( sub_6536(), l_U486 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_6536(), 1274.65500000, 689.73080000, 35.95920000 );
                }
                SET_CAR_HEADING( l_U486, 155.73490000 );
                SET_CAR_COORDINATES( l_U486, 1222.75700000, 692.18960000, 36.53460000 );
            }
            sub_32183();
            SET_WIDESCREEN_BORDERS( 1 );
            SET_CAM_BEHIND_PED( sub_6536() );
            SET_CHAR_HEADING( sub_6536(), 162.28490000 );
            SET_CHAR_COORDINATES( sub_6536(), 1226.78700000, 695.28700000, 36.45460000 );
            LOAD_ADDITIONAL_TEXT( "E4AUD", 6 );
            START_CUTSCENE_NOW( "IMEM7" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "IMEM7" );
            SET_WIDESCREEN_BORDERS( 1 );
            if (IS_VEH_DRIVEABLE( l_U486 ))
            {
                sub_27268( "IF IS_VEH_DRIVEABLE(mannyCar)\n" );
            }
            else
            {
                sub_27268( "CAR_IS_GONE!!!!!!!!!!!!!!!!!!!!!\n" );
            }
            while (NOT sub_40120())
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U500 )))
            {
                DETACH_PED( l_U500, 1 );
                DELETE_CHAR( ref l_U500 );
            }
            if (NOT (IS_CHAR_DEAD( l_U505 )))
            {
                DETACH_PED( l_U505, 1 );
                DELETE_CHAR( ref l_U505 );
            }
            sub_28149();
            DO_SCREEN_FADE_IN( 400 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            l_U481 = 5;
            break;
            case 5:
            if (NOT (IS_CAR_DEAD( l_U486 )))
            {
                if (TIMERA() < 4500)
                {
                    if (sub_40592())
                    {
                        DO_SCREEN_FADE_OUT( 250 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        SET_CAM_ACTIVE( l_U532, 0 );
                        SET_CAM_PROPAGATE( l_U532, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_CAM( l_U532 );
                        END_CAM_COMMANDS( ref l_U496 );
                        SET_CHAR_HEADING( sub_6536(), 300.00000000 );
                        SET_CHAR_COORDINATES( sub_6536(), 1227.96400000, 699.63410000, 36.33800000 );
                        SET_CAM_BEHIND_PED( sub_6536() );
                        sub_8882();
                        SET_WIDESCREEN_BORDERS( 0 );
                        if (NOT (IS_CHAR_DEAD( l_U498 )))
                        {
                            DELETE_CHAR( ref l_U498 );
                        }
                        if (NOT (IS_CAR_DEAD( l_U486 )))
                        {
                            DELETE_CAR( ref l_U486 );
                        }
                        DO_SCREEN_FADE_IN( 250 );
                        while (NOT IS_SCREEN_FADED_IN())
                        {
                            WAIT( 0 );
                        }
                        l_U481 = 6;
                    }
                }
                else if (NOT (IS_CHAR_DEAD( l_U498 )))
                {
                    DELETE_CHAR( ref l_U498 );
                }
                if (NOT (IS_CAR_DEAD( l_U486 )))
                {
                    DELETE_CAR( ref l_U486 );
                }
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                SET_CAM_ACTIVE( l_U532, 0 );
                SET_CAM_PROPAGATE( l_U532, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U532 );
                END_CAM_COMMANDS( ref l_U496 );
                SET_CHAR_HEADING( sub_6536(), 300.00000000 );
                SET_CHAR_COORDINATES( sub_6536(), 1227.96400000, 699.63410000, 36.33800000 );
                SET_CAM_BEHIND_PED( sub_6536() );
                sub_8882();
                SET_WIDESCREEN_BORDERS( 0 );
                l_U481 = 6;;
            }
            break;
            case 6:
            sub_10584();
            break;
        }
    }
    return;
}

void sub_340()
{
    sub_349();
    return;
}

void sub_349()
{
    int iVar2;

    iVar2 = 6;
    sub_363( iVar2 );
    sub_1539( iVar2 );
    return;
}

void sub_363(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_407();
        sub_568();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_676();
            sub_715();
        }
    }
    sub_791();
    sub_892();
    uVar5 = sub_1005( uParam0 );
    sub_1446( uVar5, 0 );
    return;
}

void sub_407()
{
    sub_421( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_521();
    }
    return;
}

void sub_421(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_521()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_568()
{
    sub_577();
    return;
}

void sub_577()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_676()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_715()
{
    sub_724();
    return;
}

void sub_724()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_791()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_892()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_914();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_914()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1005(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1404( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1404(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1446(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_1539(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1548();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2323();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1548()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1586( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1586( 1, g_U569[I] )) != 0)
            {
                sub_1872( I );
            }
        }
    }
    if (NOT sub_2038())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_1586(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_1872(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1957( g_U569 - 1 );
    return;
}

void sub_1957(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2038()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1586( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2323()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_2450()
{
    g_U2226 = 0;
    PRINTSTRING( "missionCleanup()" );
    if (NOT l_U520)
    {
        if (NOT (IS_CHAR_DEAD( l_U500 )))
        {
            if (l_U481 == 6)
            {
                DETACH_PED( l_U500, 1 );
                DELETE_CHAR( ref l_U500 );
            }
            SET_CHAR_HEALTH( l_U500, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U505 )))
        {
            if (l_U481 == 6)
            {
                DETACH_PED( l_U505, 1 );
                DELETE_CHAR( ref l_U505 );
            }
            SET_CHAR_HEALTH( l_U505, 0 );
        }
    }
    sub_2636();
    sub_8492();
    sub_8552( l_U528, "EB4X08" );
    sub_8882();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2636()
{
    sub_2645();
    return;
}

void sub_2645()
{
    int iVar2;

    iVar2 = 5;
    sub_2659( iVar2 );
    return;
}

void sub_2659(unknown uParam0)
{
    unknown uVar3;

    g_U10981[uParam0]._fU4 = 1;
    uVar3 = sub_1005( uParam0 );
    sub_2693( uVar3 );
    sub_2796( "****** STRAND DEACTIVATING *******\n" );
    sub_2815( uParam0 );
    g_U15946[uVar3]._fU132._fU0 = 0;
    return;
}

void sub_2693(unknown uParam0)
{
    if (NOT g_U22274[uParam0]._fU0)
    {
        return;
    }
    g_U22274[uParam0]._fU0 = 0;
    g_U26439--;
    return;
}

void sub_2796(unknown uParam0)
{
    return;
}

void sub_2815(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;

    if (NOT g_U10981[uParam0]._fU8)
    {
        return;
    }
    if (NOT g_U10981[uParam0]._fU4)
    {
        return;
    }
    bVar3 = false;
    uVar4 = sub_1005( uParam0 );
    if ((g_U13391[uParam0]._fU80._fU0 == 0) || (g_U13391[uParam0]._fU80._fU0 == 1))
    {
        sub_2926( uParam0 );
        g_U22274[uVar4]._fU0 = 0;
    }
    else
    {
        bVar3 = true;
    }
    g_U10981[uParam0]._fU144._fU0 = 0;
    if (g_U13391[uParam0]._fU160._fU0)
    {
        if (g_U13391[uParam0]._fU160._fU80)
        {
            if (NOT g_U13391[uParam0]._fU160._fU96)
            {
                sub_7469( uParam0 );
            }
            else
            {
                bVar3 = true;
            }
        }
        else
        {
            bVar3 = true;
        }
    }
    if ((g_U13391[uParam0]._fU0._fU0 == 0) || (g_U13391[uParam0]._fU0._fU0 == 1))
    {
        sub_8107( uParam0 );
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        return;
    }
    g_U10981[uParam0]._fU8 = 0;
    return;
}

void sub_2926(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU80._fU0 = 0;
        sub_3047( uParam0 );
        sub_5479( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_5767( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_5767( uParam0, iVar4 );
        break;
        case 6:
        sub_5767( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_6216( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_1404( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_3047(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 1)))
    {
        sub_3104( uParam0 );
        sub_3250( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_3104( uParam0 );
        sub_3440( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_3250( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 1)))
    {
        sub_3104( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_4721( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_3104( uParam0 );
    }
    return;
}

void sub_3104(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
    g_U13391[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU0._fU68;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_3250(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
    g_U13391[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU80._fU68;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_3440(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_3250( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU80._fU4;
        iVar8 = sub_3623( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU80._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_1404( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U5 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U6 );
        sub_4276( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

int sub_3623(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1404( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_4276(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_4368( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_4368( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_4368( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_4368( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_4368( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_4368( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_4368(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_4721(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_3104( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU0._fU4;
        iVar8 = sub_3623( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU0._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_1404( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U5 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U6 );
        if (l_U31)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U31 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U31 = 1;
        }
        sub_4276( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_5479(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
        }
    }
    g_U13391[uParam0]._fU80._fU0 = 0;
    g_U13391[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU80._fU24, "", 32 );
    g_U13391[uParam0]._fU80._fU56 = 10;
    g_U13391[uParam0]._fU80._fU60 = nil;
    g_U13391[uParam0]._fU80._fU64 = nil;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U13391[uParam0]._fU80._fU72 = 1;
    g_U13391[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_5767(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_5479( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_5905( uParam0, 0 );;
    sub_3047( uParam0 );
    return;
}

void sub_5905(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
        }
    }
    g_U13391[uParam0]._fU0._fU0 = 0;
    g_U13391[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU0._fU24, "", 32 );
    g_U13391[uParam0]._fU0._fU56 = 10;
    g_U13391[uParam0]._fU0._fU60 = nil;
    g_U13391[uParam0]._fU0._fU64 = nil;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U13391[uParam0]._fU0._fU72 = 1;
    g_U13391[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_6216(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U13391[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U13391[iParam0]._fU80._fU60 );
        }
        sub_5479( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U13391[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U13391[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U13391[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    sub_5905( iParam0, 0 );
    if (bVar4)
    {
        sub_6425();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_6481();
        return;
    }
    sub_3047( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_7178( iParam0 );
    }
    if (g_U2)
    {
        if (g_U3)
        {
            WAIT( 1500 );
            g_U4 = 1;
        }
    }
    return;
}

void sub_6425()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_6481()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_6493() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_6536() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_6536(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_6655();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6536(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_6493(), 0 );
    sub_6808();
    if (IS_PLAYER_PLAYING( sub_6493() ))
    {
        SET_PLAYER_CONTROL( sub_6493(), 1 );
    }
    return;
}

void sub_6493()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_6536()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_6655()
{
    g_U15936._fU0 = 0;
    g_U15936._fU4 = 0;
    g_U15936._fU8 = 0;
    g_U15936._fU12 = 0;
    g_U15936._fU16 = 0;
    g_U15936._fU20 = 0;
    g_U15936._fU24 = -1;
    g_U15936._fU32 = nil;
    g_U15936._fU28 = 0;
    return;
}

void sub_6808()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_6493() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_6536() ))
    {
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_6493(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_6536() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6536(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_6536(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_6536(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15936._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U30)
        {
            return;
        }
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_6493(), 1 );
    }
    else if (NOT l_U30)
    {
        return;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_6493(), 0 );;
    return;
}

void sub_7178(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_7469(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U13391[uParam0]._fU160._fU0)
    {
        return;
    }
    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        g_U13391[uParam0]._fU160._fU0 = 0;
        return;
    }
    uVar3 = sub_1005( uParam0 );
    DESTROY_THREAD( g_U13391[uParam0]._fU160._fU104 );
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    sub_7609( uParam0 );
    if (g_U13391[uParam0]._fU160._fU8)
    {
        g_U15946[uVar3]._fU8[0]._fU0[3] = 0;
    }
    return;
}

void sub_7609(unknown uParam0)
{
    g_U13391[uParam0]._fU160._fU0 = 0;
    g_U13391[uParam0]._fU160._fU4 = 0;
    g_U13391[uParam0]._fU160._fU8 = 0;
    StrCopy( ref g_U13391[uParam0]._fU160._fU12, "", 32 );
    StrCopy( ref g_U13391[uParam0]._fU160._fU44, "", 32 );
    g_U13391[uParam0]._fU160._fU76 = -1;
    g_U13391[uParam0]._fU160._fU80 = 0;
    g_U13391[uParam0]._fU160._fU84 = 0;
    g_U13391[uParam0]._fU160._fU88 = 0;
    g_U13391[uParam0]._fU160._fU92 = 0;
    g_U13391[uParam0]._fU160._fU96 = 0;
    g_U13391[uParam0]._fU160._fU100 = 0;
    g_U13391[uParam0]._fU160._fU104 = nil;
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    g_U13391[uParam0]._fU160._fU108._fU4 = 59;
    g_U13391[uParam0]._fU160._fU108._fU12 = 0;
    g_U13391[uParam0]._fU160._fU108._fU16 = 0;
    g_U13391[uParam0]._fU160._fU108._fU20 = 0;
    return;
}

void sub_8107(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU0._fU0 = 0;
        sub_3047( uParam0 );
        sub_5905( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_5767( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_5767( uParam0, iVar4 );
        break;
        case 6:
        sub_5767( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_6216( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_1404( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_8492()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_8552(int iParam0, string sParam1)
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
                    sub_8773();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_6493(), 1 );
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

void sub_8773()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_8882()
{
    if (IS_PLAYER_PLAYING( sub_6493() ))
    {
        SET_PLAYER_CONTROL( sub_6493(), 1 );
    }
    sub_8773();
    return;
}

void sub_8965(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_8984();
    return;
}

void sub_8984()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_9108(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_9192( "\n PED NUMBER ", uParam0 );
    sub_9232( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_9192(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9232(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9302(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_9474(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;
    char[16] cVar8;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar4, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar8, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar4, "PD_DMITIRI", 16 );
        StrCopy( ref cVar8, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar4, "PD_JACOB", 16 );
        StrCopy( ref cVar8, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar4, "PD_TEAFORE", 16 );
        StrCopy( ref cVar8, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar4, "PD_MANNY", 16 );
        StrCopy( ref cVar8, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar8, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "PD_BRUCIE", 16 );
        StrCopy( ref cVar8, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "PD_RAY", 16 );
        StrCopy( ref cVar8, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "PD_PHIL", 16 );
        StrCopy( ref cVar8, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "PD_VLAD", 16 );
        StrCopy( ref cVar8, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "PD_TREY", 16 );
        StrCopy( ref cVar8, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "PD_DWAYNE", 16 );
        StrCopy( ref cVar8, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "PD_PACKIE", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "PD_GERRY", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "PD_ED", 16 );
        StrCopy( ref cVar8, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "PD_CLARENCE", 16 );
        StrCopy( ref cVar8, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "PD_MARNIE", 16 );
        StrCopy( ref cVar8, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "PD_IVAN", 16 );
        StrCopy( ref cVar8, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "PD_GRACIE", 16 );
        StrCopy( ref cVar8, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "PD_TOM", 16 );
        StrCopy( ref cVar8, "PD_RIVAS", 16 );
        break;
    }
    if (bParam1)
    {
        sub_10378( ref cVar4, ref cVar8, 0 );
    }
    else
    {
        sub_10378( ref cVar4, ref cVar8, 1 );
    }
    return;
}

void sub_10378(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( I = 0; I <= 99; I++ )
        {
            if ((COMPARE_STRING( ref g_U2273[I]._fU16, uParam0 )) AND (COMPARE_STRING( ref g_U2273[I]._fU0, uParam1 )))
            {
                g_U2273[I]._fU208 = uParam2;
            }
        }
    }
    return;
}

void sub_10531()
{
    return;
}

void sub_10562()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        sub_10584();
    }
    return;
}

void sub_10584()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 56 );
    CLEAR_WANTED_LEVEL( sub_6493() );
    sub_10618( 3000 );
    sub_10787();
    sub_22076( 6, "E4_CPASS2", "E4AUD", 0 );
    sub_2450();
    return;
}

void sub_10618(unknown uParam0)
{
    ADD_SCORE( sub_6493(), uParam0 );
    sub_10643( uParam0 );
    return;
}

void sub_10643(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1404( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_10787()
{
    sub_10796();
    return;
}

void sub_10796()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_10814();
    sub_10873( iVar2, iVar3, iVar4 );
    return;
}

void sub_10814()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_10873(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 6;
    sub_10906( iVar5, uParam0, uParam1, uParam2, "Contact_7b" );
    return;
}

void sub_10906(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_11002( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_11002( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_11002( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_11002( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_11002( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_11002( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_3623( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_11818( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_11818( 0, 4 );
            }
        }
    }
    if (NOT (sub_11907( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6493(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_6493() );
    }
    sub_1548();
    bVar27 = true;
    uVar28 = sub_3623( iParam0, iVar7 );
    uVar29 = sub_1005( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_21119( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_21549();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_21634( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_21691( iParam0 );
                sub_21730( 0 );
                sub_1446( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_21838();
        }
    }
    if (bParam2)
    {
        sub_21549();
        sub_21926();
        sub_21730( 0 );
    }
    if (bParam3)
    {
        sub_21549();
        sub_21966();
        sub_21730( 0 );
        sub_1446( uVar29, 0 );
    }
    sub_892();
    return;
}

void sub_11002(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_11818(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_11907(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_12115( uParam1 );
        break;
        case 1:
        bVar8 = sub_14029( uParam1 );
        break;
        case 2:
        bVar8 = sub_14255( uParam1 );
        break;
        case 3:
        bVar8 = sub_14405( uParam1 );
        break;
        case 4:
        bVar8 = sub_14683( uParam1 );
        break;
        case 5:
        bVar8 = sub_14986( uParam1 );
        break;
        case 6:
        bVar8 = sub_15185( uParam1 );
        break;
        case 7:
        bVar8 = sub_15411( uParam1 );
        break;
        case 8:
        bVar8 = sub_15646( uParam1 );
        break;
        case 9:
        bVar8 = sub_16021( uParam1 );
        break;
        case 10:
        bVar8 = sub_16268( uParam1 );
        break;
        case 11:
        bVar8 = sub_16407( uParam1 );
        break;
        case 12:
        bVar8 = sub_16706( uParam1 );
        break;
        case 13:
        bVar8 = sub_16934( uParam1 );
        break;
        case 14:
        bVar8 = sub_17221( uParam1 );
        break;
        case 15:
        bVar8 = sub_17503( uParam1 );
        break;
        case 16:
        bVar8 = sub_17785( uParam1 );
        break;
        case 17:
        bVar8 = sub_17986( uParam1 );
        break;
        case 18:
        bVar8 = sub_18059( uParam1 );
        break;
        case 19:
        bVar8 = sub_18273( uParam1 );
        break;
        case 20:
        bVar8 = sub_18526( uParam1 );
        break;
        case 21:
        bVar8 = sub_18773( uParam1 );
        break;
        case 22:
        bVar8 = sub_18974( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_13634( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_3623( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_19297( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_12115(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_12394( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_12394( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_12394( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_12394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_12394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_12394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_12394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_12394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_12394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_12394( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_12394( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_12394( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_12394( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_12394( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_12394( iVar3, 0, sub_13512(), sub_13778(), 0, 0 );
        break;
        default:
        sub_13937( "Friend 1", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Friend 1", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_12394(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_10618( uParam1 );
    sub_12415( uParam0, 0, uParam2 );
    sub_12415( uParam0, 1, uParam3 );
    sub_12415( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_10814();
    return;
}

void sub_12415(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_12572( uParam0 );
    }
    return;
}

void sub_12572(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_13512()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_13634( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_13634(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_13778()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_13634( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_13937(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_14029(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12394( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_13937( "Contact 2", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 2", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14255(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_12394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_13937( "Girl 3", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Girl 3", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14405(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_12394( iVar3, 0, sub_13512(), sub_13778(), 0, 0 );
        break;
        default:
        sub_13937( "Friend 4", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Friend 4", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14683(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12394( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12394( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_12394( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_13937( "Contact 5", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 5", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14986(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_13937( "Contact 7", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 7", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15185(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12394( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_13937( "Contact 7b", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 7b", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15411(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_12394( iVar3, 0, sub_13512(), sub_13778(), 0, 0 );
        break;
        default:
        sub_13937( "Friend 8", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Friend 8", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15646(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_12394( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_12394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_12394( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_12394( iVar3, 0, sub_13512(), sub_13778(), 0, 0 );
        break;
        default:
        sub_13937( "Friend 9", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Friend 9", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16021(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_12394( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_12394( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_13937( "Contact 10", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_13937( "Contact 10", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16268(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_13937( "Girl 11", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Girl 11", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16407(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12394( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12394( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12394( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_12394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_12394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_13937( "Contact 12", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 12", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16706(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12394( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_13937( "Contact 13", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 13", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16934(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_12394( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_12394( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_12394( iVar3, 0, sub_13512(), sub_13778(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_13937( "Friend 15", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Friend 15", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17221(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12394( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12394( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12394( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_13937( "Contact 16", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 16", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17503(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12394( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_12394( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_12394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_13937( "Contact 18", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 18", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17785(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_13937( "Contact 19", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 19", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17986(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_13937( "Girl 20", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18059(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_13937( "Contact 21", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 21", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18273(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12394( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12394( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_13937( "Contact 22", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 22", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18526(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_12394( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12394( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12394( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_13937( "Contact 24", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 24", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18773(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12394( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12394( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_13937( "Contact 25", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13937( "Contact 25", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18974(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_12394( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_13937( "Girl 26", 1 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_13937( "Girl 26", 0 );
        sub_12394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_19297(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_19345( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_20076( iParam1 );
    }
    return;
}

int sub_19345(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_19485( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_19485(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_19667( 0 );
    return;
}

void sub_19667(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_19922();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_19922()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_20076(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_20409( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_20409( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_20409( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_20409( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_20409( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_20409( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_20409( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_20409( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_20409( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_20409( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_20409( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_20409( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_20409( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_20409( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_20409( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_20409( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_20409( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_20409( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_20409( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_20409(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_21119(unknown uParam0, unknown uParam1)
{
    sub_21138( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_21138(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_21549()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_21634(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_21691(unknown uParam0)
{
    sub_791();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_21730(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_21838()
{
    sub_21847();
    return;
}

void sub_21847()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_21926()
{
    sub_21847();
    return;
}

void sub_21966()
{
    sub_21847();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_22076(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_22120( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_22120(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_22923()
{
    int iVar2;

    iVar2 = 2006667053;
    REQUEST_MODEL( iVar2 );
    REQUEST_MODEL( l_U499 );
    REQUEST_MODEL( l_U504 );
    REQUEST_ANIMS( "MISSELIZABETA4" );
    LOAD_ALL_OBJECTS_NOW();
    while ((((NOT (HAS_MODEL_LOADED( iVar2 ))) || (NOT (HAS_MODEL_LOADED( l_U499 )))) || (NOT (HAS_MODEL_LOADED( l_U504 )))) || (NOT (HAVE_ANIMS_LOADED( "MISSELIZABETA4" ))))
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( iVar2 );
    sub_23125( l_U482, 386.06260000, 1537.35400000, 15.62750000, 293.71410000, 50.00000000 );
    CREATE_CAR( iVar2, l_U487._fU0, l_U487._fU4, l_U487._fU8, ref l_U486, 1 );
    SET_CAR_HEADING( l_U486, l_U490 );
    SET_CAR_COORDINATES( l_U486, l_U487._fU0, l_U487._fU4, l_U487._fU8 );
    SET_CAR_CAN_BE_VISIBLY_DAMAGED( l_U486, 0 );
    SET_VEH_HAS_STRONG_AXLES( l_U486, 1 );
    ADD_BLIP_FOR_CAR( l_U486, ref l_U491 );
    SET_BLIP_AS_FRIENDLY( l_U491, 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U486 );
    SET_ROUTE( l_U491, 1 );
    CHANGE_CAR_COLOUR( l_U486, 121, 124 );
    SET_EXTRA_CAR_COLOURS( l_U486, 4, 25 );
    CREATE_CHAR( 4, l_U499, l_U487._fU0, l_U487._fU4, l_U487._fU8, ref l_U500, 1 );
    ATTACH_PED_TO_CAR( l_U500, l_U486, 0, l_U501, 0.00000000, 0.00000000, 0, 0 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U500, 0 );
    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U500, "deadped_a", "MISSELIZABETA4", 4.00000000, 1, 0, 0, 0, 0 );
    SET_CHAR_HEALTH( l_U500, 4000 );
    FREEZE_CHAR_POSITION( l_U500, 1 );
    SET_CHAR_COLLISION( l_U500, 0 );
    SET_CHAR_VISIBLE( l_U500, 0 );
    SET_CHAR_NEVER_TARGETTED( l_U500, 1 );
    SET_CHAR_PROOFS( l_U500, 1, 1, 1, 1, 1 );
    STOP_PED_SPEAKING( l_U500, 1 );
    SET_CHAR_PROP_INDEX( l_U500, 1, 0 );
    CREATE_CHAR( 4, l_U504, l_U487._fU0, l_U487._fU4, l_U487._fU8, ref l_U505, 1 );
    ATTACH_PED_TO_CAR( l_U505, l_U486, 0, l_U506, 0.00000000, 0.00000000, 0, 0 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U505, 0 );
    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U505, "Arm_Bounce", "MISSELIZABETA4", 4.00000000, 0, 0, 0, 1, 0 );
    SET_CHAR_HEALTH( l_U505, 4000 );
    FREEZE_CHAR_POSITION( l_U505, 1 );
    SET_CHAR_COLLISION( l_U505, 0 );
    SET_CHAR_VISIBLE( l_U505, 0 );
    SET_CHAR_NEVER_TARGETTED( l_U505, 1 );
    SET_CHAR_PROOFS( l_U505, 1, 1, 1, 1, 1 );
    STOP_PED_SPEAKING( l_U505, 1 );
    SET_CHAR_PROP_INDEX( l_U505, 1, 0 );
    l_U526 = GET_ENGINE_HEALTH( l_U486 );
    l_U527 = GET_PETROL_TANK_HEALTH( l_U486 );
    GET_CAR_HEALTH( l_U486, ref l_U524 );
    return;
}

void sub_23125(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;

    uVar10 = uParam7;
    uVar11 = nil;
    uVar12 = nil;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar11 );
    if (NOT (IS_CAR_DEAD( uVar11 )))
    {
        GET_CAR_UPRIGHT_VALUE( uVar11, ref fVar13 );
        if ((IS_VEH_DRIVEABLE( uVar11 )) AND (fVar13 > 0.90000000))
        {
            if (LOCATE_CAR_3D( uVar11, uParam0._fU0, uParam0._fU4, uParam0._fU8, uVar10, uVar10, uVar10, 0 ))
            {
                GET_DRIVER_OF_CAR( uVar11, ref uVar12 );
                if (IS_CHAR_DEAD( uVar12 ))
                {
                    if (NOT (IS_CAR_A_MISSION_CAR( uVar11 )))
                    {
                        SET_CAR_AS_MISSION_CAR( uVar11 );
                    }
                    CLEAR_AREA( uParam3._fU0, uParam3._fU4, uParam3._fU8, 3.00000000, 0 );
                    SET_CAR_HEADING( uVar11, uParam6 );
                    SET_CAR_COORDINATES( uVar11, uParam3._fU0, uParam3._fU4, uParam3._fU8 );
                }
            }
        }
        else
        {
            DELETE_CAR( ref uVar11 );
        }
    }
    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, uVar10, 0 );
    if (NOT (IS_CAR_DEAD( uVar11 )))
    {
        if (IS_CAR_A_MISSION_CAR( uVar11 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar11 );
        }
    }
    return;
}

void sub_24203(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( l_U500 )))
    {
        SET_CHAR_VISIBLE( l_U500, uParam0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U505 )))
    {
        SET_CHAR_VISIBLE( l_U505, uParam0 );
    }
    return;
}

void sub_24290()
{
    if (NOT l_U523)
    {
        if (NOT (IS_CHAR_DEAD( l_U505 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U505, "MISSELIZABETA4", "deadped_b" ))
            {
                SET_CHAR_ANIM_CURRENT_TIME( l_U505, "MISSELIZABETA4", "deadped_b", 0.00000000 );
                l_U523 = 1;
            }
            else if (IS_CHAR_PLAYING_ANIM( l_U505, "MISSELIZABETA4", "Arm_Bounce" ))
            {
                SET_CHAR_ANIM_CURRENT_TIME( l_U505, "MISSELIZABETA4", "Arm_Bounce", 0.00000000 );
                l_U523 = 1;
            }
        }
    }
    return;
}

int sub_24931()
{
    if (IS_VEH_DRIVEABLE( l_U486 ))
    {
        if (IS_CHAR_IN_CAR( sub_6536(), l_U486 ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_6493(), 0 )))
            {
                if (LOCATE_CHAR_IN_CAR_3D( sub_6536(), l_U492._fU0, l_U492._fU4, l_U492._fU8, l_U509, l_U509, l_U509, 1 ))
                {
                    if (sub_25054( 1, 1 ))
                    {
                        return 1;
                    }
                }
                else if (DOES_BLIP_EXIST( l_U491 ))
                {
                    REMOVE_BLIP( l_U491 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U495 )))
                {
                    ADD_BLIP_FOR_COORD( l_U492._fU0, l_U492._fU4, l_U492._fU8, ref l_U495 );
                    SET_ROUTE( l_U495, 1 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "EB4X01", 7500, 1 );
                    l_U514 = 0;
                }
            }
            else if (l_U514 == 0)
            {
                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "EB4X06", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                {
                    PRINT_NOW( "EB4X05", 7500, 1 );
                }
                if (DOES_BLIP_EXIST( l_U495 ))
                {
                    REMOVE_BLIP( l_U495 );
                }
                if (DOES_BLIP_EXIST( l_U491 ))
                {
                    REMOVE_BLIP( l_U491 );
                }
                l_U514 = 1;
            }
        }
        else
        {
            sub_25616();
            if (NOT (DOES_BLIP_EXIST( l_U491 )))
            {
                ADD_BLIP_FOR_CAR( l_U486, ref l_U491 );
                SET_BLIP_AS_FRIENDLY( l_U491, 1 );
                CLEAR_PRINTS();
                PRINT_NOW( "EB4X02", 7500, 1 );
                l_U514 = 0;
            }
            if (DOES_BLIP_EXIST( l_U495 ))
            {
                REMOVE_BLIP( l_U495 );
            }
        }
        sub_29539();
    }
    else if (DOES_BLIP_EXIST( l_U495 ))
    {
        REMOVE_BLIP( l_U495 );
    }
    return 0;
}

int sub_25054(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_6536() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6536(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_6536() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6536(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_6536()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_6536() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_6536() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_6493() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_6493() )))
    {
        return 0;
    }
    return 1;
}

void sub_25616()
{
    unknown uVar2;
    vector vVar3;
    vector vVar6;
    string sVar9;

    vVar3 = {-0.25000000, -0.25000000, -1.00000000};
    vVar6 = {0.25000000, 0.25000000, 1.00000000};
    sVar9 = "EB4X08";
    if (l_U521)
    {
        if (IS_VEH_DRIVEABLE( l_U486 ))
        {
            if (NOT (IS_CAR_DOOR_DAMAGED( l_U486, 5 )))
            {
                GET_CAR_HEADING( l_U486, ref uVar2 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U486, 0.00000000, -sub_25750( 2006667053 ), 0.00000000, ref l_U511._fU0, ref l_U511._fU4, ref l_U511._fU8 );
                vVar3 = {l_U511 + vVar3};
                vVar6 = {l_U511 + vVar6};
                if (LOCATE_CHAR_ON_FOOT_3D( sub_6536(), l_U511._fU0, l_U511._fU4, l_U511._fU8, 0.50000000, 0.50000000, 1.00000000, 0 ))
                {
                    if (sub_25918( uVar2, 45.00000000 ))
                    {
                        if (NOT (IS_CAR_DOOR_DAMAGED( l_U486, 5 )))
                        {
                            if (sub_26135( l_U528, 0 ))
                            {
                                if (g_U2226 == 0)
                                {
                                    g_U2226 = 1;
                                }
                                if (sub_26445( l_U528, sVar9, 0 ))
                                {
                                    sub_8552( l_U528, sVar9 );
                                    SETTIMERA( 0 );
                                    if (sub_27092( "E4_CLOSE", ref l_U534, 6, 1 ))
                                    {
                                        ;
                                    }
                                    while (NOT sub_28063())
                                    {
                                        WAIT( 0 );
                                    }
                                    if (g_U2226 == 1)
                                    {
                                        g_U2226 = 0;
                                    }
                                }
                            }
                        }
                    }
                    else if (g_U2226 == 1)
                    {
                        g_U2226 = 0;
                    }
                    sub_8552( l_U528, sVar9 );;
                }
                else if (g_U2226 == 1)
                {
                    g_U2226 = 0;
                }
                sub_8552( l_U528, sVar9 );;
            }
        }
    }
    return;
}

void sub_25750(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float Result;

    GET_MODEL_DIMENSIONS( uParam0, ref uVar3, ref uVar6 );
    Result = uVar6._fU4;
    Result += 0.70000000;
    return Result;
}

int sub_25918(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( sub_6536() )))
    {
        GET_CHAR_HEADING( sub_6536(), ref fVar4 );
        fVar6 = uParam0 - uParam1;
        if (fVar6 < 0.00000000)
        {
            fVar6 += 360.00000000;
        }
        fVar5 = uParam0 + uParam1;
        if (fVar5 >= 360.00000000)
        {
            fVar5 -= 360.00000000;
        }
        if (fVar5 > fVar6)
        {
            if ((fVar4 < fVar5) AND (fVar4 > fVar6))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar4 < fVar5) || (fVar4 > fVar6))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_26135(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_6493() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_6493() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_6493() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_26231())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_6536() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_26316())
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

int sub_26231()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_26316()
{
    return sub_26327( 0, 0 );
}

int sub_26327(boolean bParam0, unknown uParam1)
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

int sub_26445(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
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
    if (sub_26135( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_6493(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_26720();
                l_U1 = 1;
                g_U9173 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_26720()
{
    return sub_26327( 1, 1 );
}

void sub_27092(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_27115( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_27115(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_27169( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_27169(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_27191( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_27883( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_27191(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_27268( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_27268( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_27268( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_27268(unknown uParam0)
{
    return;
}

void sub_27883(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_28063()
{
    float fVar2;
    float fVar3;

    if (NOT (IS_CAR_DEAD( l_U486 )))
    {
        GET_DOOR_ANGLE_RATIO( l_U486, 5, ref l_U522 );
    }
    if (l_U522 < 0.25000000)
    {
        l_U522 = 0.00000000;
    }
    if (l_U522 == 0.00000000)
    {
        sub_28149();
        return 1;
    }
    else
    {
        GET_SCRIPT_TASK_STATUS( sub_6536(), 29, ref l_U516 );
        if (l_U516 == 1)
        {
            if (IS_CHAR_PLAYING_ANIM( sub_6536(), "MISSELIZABETA4", "Close_Boot" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_6536(), "MISSELIZABETA4", "Close_Boot", ref fVar2 );
                if (NOT (IS_CAR_DEAD( l_U486 )))
                {
                    if (l_U522 < 0.25000000)
                    {
                        PLAY_AUDIO_EVENT_FROM_VEHICLE( "VEHICLES_EXTRAS_LUX_SUV_TRUNK_CLOSE", l_U486 );
                        l_U522 = 0.00000000;
                    }
                    if (fVar2 > 0.50000000)
                    {
                        l_U522 -= 0.30000000;
                    }
                    CONTROL_CAR_DOOR( l_U486, 5, 0, l_U522 );
                }
                if (NOT (IS_CHAR_INJURED( l_U505 )))
                {
                    if (fVar2 <= 1.00000000)
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U505, "MISSELIZABETA4", "Arm_Bounce" ))
                        {
                            fVar3 = 1.00000000 - fVar2;
                            if (fVar3 < 0.00000000)
                            {
                                fVar3 = 0.00000000;
                            }
                            SET_CHAR_ANIM_CURRENT_TIME( l_U505, "MISSELIZABETA4", "Arm_Bounce", fVar3 );
                        }
                        else if (IS_CHAR_PLAYING_ANIM( l_U505, "MISSELIZABETA4", "deadped_b" ))
                        {
                            fVar3 = 1.00000000 - fVar2;
                            if (fVar3 < 0.00000000)
                            {
                                fVar3 = 0.00000000;
                            }
                            SET_CHAR_ANIM_CURRENT_TIME( l_U505, "MISSELIZABETA4", "deadped_b", fVar3 );
                        }
                    }
                }
            }
            else if (TIMERA() > 8000)
            {
                CLEAR_CHAR_TASKS( sub_6536() );
                return 1;
            }
        }
        else if (l_U522 > 0.25000000)
        {
            sub_29038();
        }
        else
        {
            l_U522 = 0.00000000;
        }
    }
    return 0;
}

void sub_28149()
{
    if (NOT (IS_CAR_DEAD( l_U486 )))
    {
        if (NOT (IS_CAR_DOOR_DAMAGED( l_U486, 5 )))
        {
            l_U526 = GET_ENGINE_HEALTH( l_U486 );
            l_U527 = GET_PETROL_TANK_HEALTH( l_U486 );
            GET_CAR_HEALTH( l_U486, ref l_U524 );
            sub_24203( 0 );
            sub_28252( 0 );
            sub_24290();
            l_U521 = 0;
            SETTIMERA( 0 );
            CONTROL_CAR_DOOR( l_U486, 5, 0, 0.00000000 );
            SHUT_CAR_DOOR( l_U486, 5 );
        }
    }
    return;
}

void sub_28252(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U500 )))
    {
        SET_PED_GENERATES_DEAD_BODY_EVENTS( l_U500, iParam0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U505 )))
    {
        SET_PED_GENERATES_DEAD_BODY_EVENTS( l_U505, iParam0 );
        if (iParam0 == 1)
        {
            iParam0 = 0;
        }
        else
        {
            iParam0 = 1;
        }
        SET_CHAR_PROOFS( l_U505, iParam0, iParam0, iParam0, iParam0, iParam0 );
    }
    return;
}

void sub_29038()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_SCRIPT_TASK_STATUS( sub_6536(), 29, ref l_U516 );
    if (l_U516 == 7)
    {
        if (NOT (IS_CAR_DEAD( l_U486 )))
        {
            GET_CAR_HEADING( l_U486, ref uVar5 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U486, 0.00000000, -3.25000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        OPEN_SEQUENCE_TASK( ref l_U515 );
        TASK_CHAR_SLIDE_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5, 1.00000000 );
        TASK_ACHIEVE_HEADING( 0, uVar5 );
        TASK_PLAY_ANIM( 0, "Close_Boot", "MISSELIZABETA4", 4.00000000, 0, 1, 1, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U515 );
        TASK_PERFORM_SEQUENCE( sub_6536(), l_U515 );
        CLEAR_SEQUENCE_TASK( l_U515 );
    }
    return;
}

void sub_29539()
{
    int iVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    fVar5 = 5.00000000;
    if (l_U521 == 0)
    {
        if (NOT (IS_CAR_DEAD( l_U486 )))
        {
            if (TIMERA() > 1000)
            {
                GET_CAR_HEALTH( l_U486, ref iVar2 );
                if (iVar2 < (l_U524 - 25))
                {
                    sub_29629();
                }
                else
                {
                    GET_CAR_HEALTH( l_U486, ref l_U524 );
                }
                fVar3 = GET_ENGINE_HEALTH( l_U486 );
                if (fVar3 < (l_U526 - 25.00000000))
                {
                    sub_29629();
                }
                else
                {
                    l_U526 = GET_ENGINE_HEALTH( l_U486 );
                }
                fVar3 = GET_PETROL_TANK_HEALTH( l_U486 );
                if (fVar3 < (l_U527 - 25.00000000))
                {
                    sub_29629();
                }
                else
                {
                    l_U527 = GET_PETROL_TANK_HEALTH( l_U486 );
                }
            }
        }
    }
    else if (NOT (IS_CAR_DEAD( l_U486 )))
    {
        if (NOT l_U520)
        {
            GET_CAR_HEALTH( l_U486, ref iVar2 );
            if (iVar2 > l_U524)
            {
                sub_28149();
            }
            fVar3 = GET_ENGINE_HEALTH( l_U486 );
            if (fVar3 > l_U526)
            {
                sub_28149();
            }
            fVar3 = GET_PETROL_TANK_HEALTH( l_U486 );
            if (fVar3 > l_U527)
            {
                sub_28149();
            }
            GET_DOOR_ANGLE_RATIO( l_U486, 5, ref l_U522 );
            if (l_U522 < 0.25000000)
            {
                sub_28149();
            }
            GET_CAR_UPRIGHT_VALUE( l_U486, ref fVar4 );
            sub_30549( "\n GET_CAR_UPRIGHT_VALUE (mannyCar, fUpright) = ", fVar4 );
            GET_CAR_ROLL( l_U486, ref fVar6 );
            sub_30549( "\n GET_CAR_ROLL (mannyCar, fRoll) = ", fVar6 );
            if (fVar6 < 0.00000000)
            {
                if (fVar4 > 0.00000000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U505 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U505, "MISSELIZABETA4", "Arm_Bounce" ))
                        {
                            sub_27268( "\n IF IS_CHAR_PLAYING_ANIM" );
                            if (fVar4 > 96.00000000)
                            {
                                fVar5 = 25.00000000;
                            }
                            else if (fVar4 > 95.00000000)
                            {
                                fVar5 = 20.00000000;
                            }
                            else if (fVar4 > 90.00000000)
                            {
                                fVar5 = 10.00000000;
                            }
                            else
                            {
                                fVar5 = 5.00000000;
                            };;;
                            fVar8 = 1.00000000 - (fVar5 * (1.00000000 - fVar4));
                            if (fVar8 < 0.00000000)
                            {
                                fVar8 = 0.00000000;
                            }
                            SET_CHAR_ANIM_CURRENT_TIME( l_U505, "MISSELIZABETA4", "Arm_Bounce", fVar8 );
                            SETTIMERA( 0 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U505, "Arm_Bounce", "MISSELIZABETA4", 4.00000000, 0, 0, 0, 1, 0 );
                            SETTIMERA( 0 );
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U505 )))
            {
                GET_CAR_PITCH( l_U486, ref fVar7 );
                sub_30549( "\n GET_CAR_PITCH (mannyCar, fPitch) = ", fVar7 );
                if ((fVar7 > -7.00000000) AND (fVar7 < 7.00000000))
                {
                    ATTACH_PED_TO_CAR( l_U505, l_U486, 0, l_U506._fU0, l_U506._fU4, l_U506._fU8 - (fVar7 / 100.00000000), 0.00000000, 0.00000000, 0, 0 );
                }
            }
            if (fVar4 < 0.25000000)
            {
                if (TIMERB() > 1000)
                {
                    if (NOT (IS_CHAR_DEAD( l_U500 )))
                    {
                        CLEAR_CHAR_TASKS( l_U500 );
                        DETACH_PED( l_U500, 1 );
                        SET_CHAR_NEVER_TARGETTED( l_U500, 1 );
                        FREEZE_CHAR_POSITION( l_U500, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U505 )))
                    {
                        CLEAR_CHAR_TASKS( l_U505 );
                        DETACH_PED( l_U505, 1 );
                        SET_CHAR_NEVER_TARGETTED( l_U505, 1 );
                        FREEZE_CHAR_POSITION( l_U505, 0 );
                    }
                    while ((NOT sub_31318()) || (NOT sub_31503()))
                    {
                        WAIT( 0 );
                    }
                    l_U520 = 1;
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_6536(), l_U487._fU0, l_U487._fU4, l_U487._fU8, 200.00000000, 200.00000000, 50.00000000, 0 ))
                    {
                        PRINT_NOW( "EB4X07", 7500, 1 );
                        l_U533 = 1;
                        sub_31805();
                    }
                    else
                    {
                        sub_32044();
                    }
                }
            }
            else
            {
                SETTIMERB( 0 );
            }
        }
    }
    return;
}

void sub_29629()
{
    if (IS_VEH_DRIVEABLE( l_U486 ))
    {
        if (NOT (IS_CAR_DOOR_DAMAGED( l_U486, 5 )))
        {
            POP_CAR_BOOT( l_U486 );
            GET_DOOR_ANGLE_RATIO( l_U486, 5, ref l_U522 );
            while (l_U522 < 0.25000000)
            {
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( l_U486 )))
                {
                    GET_DOOR_ANGLE_RATIO( l_U486, 5, ref l_U522 );
                }
            }
            if (NOT l_U531)
            {
                PRINT_HELP( "E4HLP" );
                l_U531 = 1;
            }
        }
    }
    sub_29799();
    sub_24203( 1 );
    l_U521 = 1;
    sub_28252( 1 );
    return;
}

void sub_29799()
{
    if (l_U523)
    {
        if (NOT (IS_CHAR_DEAD( l_U505 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U505, "MISSELIZABETA4", "deadped_b" ))
            {
                SET_CHAR_ANIM_SPEED( l_U505, "MISSELIZABETA4", "deadped_b", 1.00000000 );
                l_U523 = 0;
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U505, "deadped_b", "MISSELIZABETA4", 4.00000000, 0, 0, 0, 1, 0 );
            }
            else if (IS_CHAR_PLAYING_ANIM( l_U505, "MISSELIZABETA4", "Arm_Bounce" ))
            {
                SET_CHAR_ANIM_SPEED( l_U505, "MISSELIZABETA4", "Arm_Bounce", 1.00000000 );
                l_U523 = 0;
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U505, "Arm_Bounce", "MISSELIZABETA4", 4.00000000, 0, 0, 0, 1, 0 );
            }
        }
    }
    return;
}

void sub_30549(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_31318()
{
    if (NOT (IS_CHAR_INJURED( l_U500 )))
    {
        CLEAR_CHAR_TASKS( l_U505 );
        GET_CHAR_COORDINATES( l_U500, ref l_U511._fU0, ref l_U511._fU4, ref l_U511._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( l_U511._fU0, l_U511._fU4, l_U511._fU8 + 1.00000000, ref l_U511._fU8 );
        SET_CHAR_COORDINATES( l_U500, l_U511._fU0, l_U511._fU4, l_U511._fU8 - 0.40000000 );
        SET_CHAR_HEALTH( l_U500, 0 );
        return 1;
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_31503()
{
    if (NOT (IS_CHAR_INJURED( l_U505 )))
    {
        CLEAR_CHAR_TASKS( l_U505 );
        GET_CHAR_COORDINATES( l_U505, ref l_U511._fU0, ref l_U511._fU4, ref l_U511._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( l_U511._fU0, l_U511._fU4 + 1.00000000, l_U511._fU8 + 1.00000000, ref l_U511._fU8 );
        SET_CHAR_COORDINATES( l_U505, l_U511._fU0, l_U511._fU4 + 1.00000000, l_U511._fU8 - 0.40000000 );
        SET_CHAR_HEALTH( l_U505, 0 );
        return 1;
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_31805()
{
    if (l_U533)
    {
        sub_22076( 6, "E4_CFAIL2", "E4AUD", 0 );
    }
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6493(), 150 );
        SAY_AMBIENT_SPEECH( sub_6536(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_31913();
    sub_2450();
    return;
}

void sub_31913()
{
    sub_31922();
    return;
}

void sub_31922()
{
    int iVar2;

    iVar2 = 6;
    sub_31936( iVar2 );
    sub_1539( iVar2 );
    return;
}

void sub_31936(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_6493(), 150 );
    CLEAR_HELP();
    sub_363( uParam0 );
    return;
}

void sub_32044()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 56 );
    CLEAR_PRINTS();
    sub_10787();
    sub_22076( 6, "E4_CFAIL", "E4AUD", 0 );
    sub_2450();
    return;
}

void sub_32183()
{
    if (IS_PLAYER_PLAYING( sub_6493() ))
    {
        SET_PLAYER_CONTROL( sub_6493(), 0 );
    }
    return;
}

int sub_32329()
{
    if (IS_VEH_DRIVEABLE( l_U486 ))
    {
        if ((((CHECK_STUCK_TIMER( l_U486, 3, 60000 )) || (CHECK_STUCK_TIMER( l_U486, 2, 30000 ))) || (CHECK_STUCK_TIMER( l_U486, 1, 40000 ))) || (CHECK_STUCK_TIMER( l_U486, 0, 5000 )))
        {
            return 1;
        }
        if (l_U521)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_6536(), l_U486, 250.00000000, 250.00000000, 100.00000000, 0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_32789()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int[7] iVar7;

    array(ref iVar7, 7);
    iVar7[0] = 2046537925;
    iVar7[1] = -1627000575;
    iVar7[2] = 148777611;
    iVar7[3] = 1127131465;
    iVar7[4] = -1900572838;
    iVar7[5] = 1911513875;
    iVar7[6] = -350085182;
    if (l_U521)
    {
        if (IS_VEH_DRIVEABLE( l_U486 ))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U486, 0.00000000, -5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            for ( l_U510 = 0; l_U510 < 7; l_U510++ )
            {
                GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000, iVar7[l_U510], 1, ref uVar5 );
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_6493(), 1 )))
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_6493(), 2 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_6493() );
                        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "EB4X05", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                        {
                            PRINT_NOW( "EB4X06", 7500, 1 );
                        }
                    }
                }
            }
            BEGIN_CHAR_SEARCH_CRITERIA();
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 27 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 29 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 31 );
            END_CHAR_SEARCH_CRITERIA();
            if (GET_CLOSEST_CHAR( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000, 1, 1, ref uVar6 ))
            {
                if (NOT (IS_CHAR_DEAD( uVar6 )))
                {
                    if (((IS_CHAR_MODEL( uVar6, -370395528 )) || (IS_CHAR_MODEL( uVar6, -183203150 ))) || (IS_CHAR_MODEL( uVar6, -1518937979 )))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_6493(), 1 )))
                        {
                            ALTER_WANTED_LEVEL_NO_DROP( sub_6493(), 2 );
                            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_6493() );
                            if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "EB4X05", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                            {
                                PRINT_NOW( "EB4X06", 7500, 1 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_33379()
{
    vector vVar2;
    vector vVar5;

    vVar2 = {643.17710000, 622.06960000, 19.59170000};
    vVar5 = {1335.10700000, 973.07510000, 12.59630000};
    if (NOT g_U64686)
    {
        if (sub_33437())
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_6493(), 0 )))
            {
                if ((LOCATE_CHAR_IN_CAR_3D( sub_6536(), vVar2.x, vVar2.y, vVar2.z, 20.00000000, 20.00000000, 20.00000000, 0 )) || (LOCATE_CHAR_IN_CAR_3D( sub_6536(), vVar5.x, vVar5.y, vVar5.z, 20.00000000, 20.00000000, 20.00000000, 0 )))
                {
                    if (sub_33686( 3 ))
                    {
                        sub_35037( 3, "E4_CALLJ", "E4AUD", 10000, 0 );
                        g_U64686 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_33437()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_6536() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_6536() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6536(), ref uVar2 );
            if ((IS_VEH_DRIVEABLE( uVar2 )) AND (NOT (IS_CAR_ON_FIRE( uVar2 ))))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == sub_6536())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_33686(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U22274[uParam0]._fU0)
    {
        return 0;
    }
    if (g_U22274[uParam0]._fU4)
    {
        return 0;
    }
    if (NOT g_U22274[uParam0]._fU8)
    {
        return 0;
    }
    uVar3 = sub_33765( uParam0 );
    if (sub_34138( uVar3 ))
    {
        if (g_U10981[uVar3]._fU144._fU84)
        {
            return 0;
        }
    }
    if (g_U10981[uVar3]._fU40[1] < g_U22274[uParam0]._fU160)
    {
        return 0;
    }
    if (sub_34263( uParam0 ))
    {
        return 0;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return 0;
    }
    return 1;
}

int sub_33765(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_1404( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

int sub_34138(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        case 8: return 1;
    }
    return 0;
}

int sub_34263(unknown uParam0)
{
    if (g_U22274[uParam0]._fU188._fU0._fU0 == -1)
    {
        return 0;
    }
    if (NOT (sub_34338( g_U22274[uParam0]._fU188._fU0, g_U22274[uParam0]._fU188._fU8 )))
    {
        return 0;
    }
    return 1;
}

int sub_34338(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;

    if ((uParam0._fU0 < 0) || (uParam0._fU0 >= 24))
    {
        sub_1404( "KM_Is_Now_Time_Between_Start_End_Times: Start Hours Error" );
        return 0;
    }
    if ((uParam0._fU4 < 0) || (uParam0._fU4 >= 60))
    {
        sub_1404( "KM_Is_Now_Time_Between_Start_End_Times: Start Minutes Error" );
        return 0;
    }
    if ((uParam2._fU0 < 0) || (uParam2._fU0 >= 24))
    {
        sub_1404( "KM_Is_Now_Time_Between_Start_End_Times: End Hours Error" );
        return 0;
    }
    if ((uParam2._fU4 < 0) || (uParam2._fU4 >= 60))
    {
        sub_1404( "KM_Is_Now_Time_Between_Start_End_Times: End Minutes Error" );
        return 0;
    }
    GET_TIME_OF_DAY( ref uVar6._fU0, ref uVar6._fU4 );
    bVar8 = sub_34718( uParam2, uParam0 );
    if (NOT bVar8)
    {
        if (sub_34718( uVar6, uParam0 ))
        {
            return 0;
        }
        if (sub_34718( uParam2, uVar6 ))
        {
            return 0;
        }
        return 1;
    }
    if (sub_34842( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_34718( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_34718( uVar6, uParam2 ))
    {
        return 1;
    }
    return 0;
}

boolean sub_34718(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (uParam0._fU0 > uParam2._fU0)
    {
        return 0;
    }
    if (uParam0._fU0 < uParam2._fU0)
    {
        return 1;
    }
    return uParam0._fU4 < uParam2._fU4;
}

boolean sub_34842(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (uParam0._fU0 == uParam2._fU0))
    {
        return 0;
    }
    return uParam0._fU4 == uParam2._fU4;
}

void sub_35037(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_35097( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_35097(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_27268( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_27268( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_6493() )))
    {
        sub_27268( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_6536() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_6536() ))))
    {
        sub_27268( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_27268( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_35612()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((g_U91._fU372) || (NOT bParam8))
            {
                sub_27268( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 5) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 4))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT sub_35612()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_36984( uParam0, ref g_U91._fU176 );
    sub_38365( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_9232( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

int sub_35612()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_35669())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_35669()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_6493() )))
    {
        sub_27268( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_27268( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_27268( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_27268( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_6493() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_6536() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_6536(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_27268( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_6536() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_27268( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_27268( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_6493() )))
    {
        sub_27268( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_36984(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_38365(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_39485()
{
    unknown uVar2;
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( l_U500 )))
    {
        uVar2 = START_CHAR_FIRE( l_U500 );
    }
    if (NOT (IS_CHAR_INJURED( l_U505 )))
    {
        uVar3 = START_CHAR_FIRE( l_U505 );
    }
    return;
}

int sub_40120()
{
    if (IS_CHAR_DEAD( l_U498 ))
    {
        REQUEST_MODEL( l_U497 );
        REQUEST_CAR_RECORDING( 624 );
        if ((HAS_MODEL_LOADED( l_U497 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 624 )))
        {
            if (NOT (IS_CAR_DEAD( l_U486 )))
            {
                CREATE_CHAR_INSIDE_CAR( l_U486, 4, l_U497, ref l_U498 );
                START_PLAYBACK_RECORDED_CAR( l_U486, 624 );
                BEGIN_CAM_COMMANDS( ref l_U496 );
                CREATE_CAM( 14, ref l_U532 );
                SET_CAM_POS( l_U532, 1213.72800000, 681.83770000, 37.79135000 );
                SET_CAM_ROT( l_U532, 0.49119400, -0.00000000, -54.73878000 );
                SET_CAM_FOV( l_U532, 45.00000000 );
                SET_CAM_ACTIVE( l_U532, 1 );
                SET_CAM_PROPAGATE( l_U532, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SETTIMERA( 0 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_40592()
{
    if (NOT sub_40601())
    {
        l_U517 = 1;
    }
    else if (l_U517 == 1)
    {
        l_U517 = 0;
        return 1;
    }
    return 0;
}

int sub_40601()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}