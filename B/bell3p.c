void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;
    int iVar10;
    int[9] iVar11;
    int[9] iVar21;
    int iVar31;
    int iVar32;
    unknown uVar33;
    int iVar34;
    int iVar35;

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
    l_U484 = 17;
    l_U485 = {-1365.63100000, 356.06950000, 13.62140000};
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = -1;
    l_U530 = 0;
    l_U534 = -1;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    array(ref uVar2._fU0._fU0, 3);
    ref uVar2._fU0;
    ref uVar2;
    iVar9 = 19;
    iVar10 = 19;
    array(ref iVar11, 9);
    iVar11[0] = 0;
    iVar11[1] = 1;
    iVar11[2] = 2;
    iVar11[3] = 3;
    iVar11[4] = 4;
    iVar11[5] = 5;
    iVar11[6] = 6;
    iVar11[7] = 7;
    iVar11[8] = 8;
    array(ref iVar21, 9);
    iVar21[0] = 0;
    iVar21[1] = 1;
    iVar21[2] = 2;
    iVar21[3] = 3;
    iVar21[4] = 4;
    iVar21[5] = 5;
    iVar21[6] = 6;
    iVar21[7] = 7;
    iVar21[8] = 8;
    iVar31 = 2;
    iVar32 = 2;
    if (sub_339( iVar9 ))
    {
        sub_590( iVar9, 0, 9, 0, 1, 1 );
        sub_590( iVar9, 1, 9, -1, -1, -1 );
        iVar31 = 2;
    }
    else if (sub_1388( iVar9, 9 ))
    {
        TERMINATE_THIS_SCRIPT();
    }
    else
    {
        iVar31 = 2;
    }
    iVar34 = 1;
    iVar35 = 1;
    while (true)
    {
        WAIT( 0 );
        if ((g_U10978) AND (iVar31 != 5))
        {
            iVar31 = 5;
        }
        switch (iVar31)
        {
            case 2:
            PRINTSTRING( "\n\n   ---> PROC_WAITING_FOR_PLAYER_TO_CALL \n\n" );
            if (l_U495 == 0)
            {
                if (NOT (DOES_BLIP_EXIST( l_U481 )))
                {
                    ADD_BLIP_FOR_CONTACT( l_U485._fU0, l_U485._fU4, l_U485._fU8, ref l_U481 );
                    CHANGE_BLIP_DISPLAY( l_U481, 2 );
                    CHANGE_BLIP_SPRITE( l_U481, 76 );
                    CHANGE_BLIP_PRIORITY( l_U481, 1 );
                }
                l_U495 = 1;
            }
            iVar31 = 0;
            iVar32 = 2;
            break;
            case 0:
            if (NOT (IS_CHAR_DEAD( sub_1856() )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U481 )))
                {
                    ADD_BLIP_FOR_CONTACT( l_U485._fU0, l_U485._fU4, l_U485._fU8, ref l_U481 );
                    CHANGE_BLIP_DISPLAY( l_U481, 2 );
                    CHANGE_BLIP_SPRITE( l_U481, 76 );
                    CHANGE_BLIP_PRIORITY( l_U481, 1 );
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1856(), l_U485._fU0, l_U485._fU4, l_U485._fU8, 15.00000000, 15.00000000, 15.00000000, 0 ))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_1856() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1856(), ref l_U482 );
                    }
                }
                if ((((LOCATE_CHAR_ANY_MEANS_3D( sub_1856(), l_U485._fU0, l_U485._fU4, l_U485._fU8, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (NOT g_U10978)) AND (l_U496 == 0)) AND (g_U9893._fU12 == 0))
                {
                    if (l_U530 == 0)
                    {
                        l_U531 = GET_SOUND_ID();
                        PLAY_SOUND_FROM_POSITION( l_U531, "B2P_HIGH_END_ASSASSIN_PHONE_RING", -1366.19000000, 356.07000000, 14.81000000 );
                        l_U530 = 1;
                    }
                }
                else if (l_U530 == 1)
                {
                    STOP_SOUND( l_U531 );
                    RELEASE_SOUND_ID( l_U531 );
                    l_U530 = 0;
                }
                if (g_U9893._fU12 == 0)
                {
                    if (((((LOCATE_CHAR_ANY_MEANS_3D( sub_1856(), l_U485._fU0, l_U485._fU4, l_U485._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (sub_2378( 1, 1 ))) AND (g_U813 == 0)) AND (sub_2698() == 1)) AND (NOT sub_2757()))
                    {
                        sub_2968();
                        CLEAR_WANTED_LEVEL( sub_2610() );
                        if (DOES_BLIP_EXIST( l_U481 ))
                        {
                            REMOVE_BLIP( l_U481 );
                        }
                        SET_PLAYER_CONTROL_ADVANCED( sub_2610(), 0, 1, 1 );
                        l_U520 = sub_3783( iVar9 );
                        PRINTSTRING( "\n\n *** Current mission is " );
                        PRINTINT( l_U520 );
                        l_U521 = sub_3940( iVar9, 0, l_U520 );
                        l_U522 = sub_3940( iVar9, 1, l_U520 );
                        PRINTSTRING( "\n\n *** P - Current Location is " );
                        PRINTINT( l_U521 );
                        PRINTSTRING( "\n\n *** P - Current Target is " );
                        PRINTINT( l_U522 );
                        PRINTNL();
                        PRINTNL();
                        SWITCH_PED_PATHS_OFF( -1368.00000000, 352.00000000, 12.00000000, -1363.00000000, 360, 16.00000000 );
                        sub_4166();
                        SWITCH_PED_PATHS_ON( -1368.00000000, 352.00000000, 12.00000000, -1363.00000000, 360, 16.00000000 );
                        sub_4197();
                        iVar31 = 4;
                        iVar32 = 2;
                    }
                }
            }
            break;
            case 4:
            PRINTSTRING( "\n\n   ---> PROC_LAUNCH_MISSION \n\n" );
            sub_12830();
            sub_13069();
            while (NOT (HAS_SCRIPT_LOADED( "Bell3m" )))
            {
                PRINTSTRING( "\n ---> Load Bell3m <--- \n" );
                WAIT( 0 );
                sub_4197();
                REQUEST_SCRIPT( "Bell3m" );
            }
            while (NOT (sub_15357( 0 )))
            {
                PRINTSTRING( "\n ---> Wait for any call to finish <--- \n" );
                WAIT( 0 );
                sub_4197();
                REQUEST_SCRIPT( "Bell3m" );
            }
            START_NEW_SCRIPT( "Bell3m", 8192 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "Bell3m" );
            iVar31 = 5;
            iVar32 = 0;
            break;
            case 3:
            while (NOT (sub_15357( 0 )))
            {
                PRINTSTRING( "\n ---> Wait for any call to finish <--- \n" );
                WAIT( 0 );
            }
            iVar31 = 2;
            break;
            case 5:
            if (NOT g_U10978)
            {
                if (sub_1388( iVar9, 9 ))
                {
                    AWARD_ACHIEVEMENT( 30 );
                    g_U15654[59] = 1;
                    sub_15890();
                    TERMINATE_THIS_SCRIPT();
                }
                iVar31 = iVar32;
            }
            if (g_U10978)
            {
                if (l_U530 == 1)
                {
                    STOP_SOUND( l_U531 );
                    RELEASE_SOUND_ID( l_U531 );
                    l_U530 = 0;
                }
            }
            break;
        }
    }
    return;
}

int sub_339(unknown uParam0)
{
    if (g_U15946[uParam0]._fU168._fU4)
    {
        sub_372( uParam0 );
        g_U15946[uParam0]._fU168._fU4 = 0;
        return 1;
    }
    return 0;
}

void sub_372(unknown uParam0)
{
    int I;
    int J;

    for ( I = 0; I <= 14; I++ )
    {
        g_U15946[uParam0]._fU168._fU12[I] = 0;
    }
    for ( I = 0; I <= 2; I++ )
    {
        for ( J = 0; J <= 14; J++ )
        {
            g_U15946[uParam0]._fU168._fU76[I]._fU0[J] = -1;
        }
    }
    g_U15946[uParam0]._fU168._fU0 = 1;
    g_U15946[uParam0]._fU168._fU8 = 0;
    return;
}

void sub_590(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
    int I;
    int J;
    unknown uVar10;
    unknown uVar11;

    if (g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[0] == -1)
    {
        for ( I = 0; I <= (iParam2 - 1); I++ )
        {
            g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] = I;
        }
        for ( I = iParam2 - 1; I >= 1; I += -1 )
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar11 );
            uVar10 = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I];
            g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uVar11];
            g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uVar11] = uVar10;
        }
        if (iParam5 != -1)
        {
            for ( I = 0; I <= (iParam2 - 2); I++ )
            {
                if ((g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] == iParam3) || (g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] == iParam4))
                {
                    for ( J = I + 1; J <= (I + iParam5); J++ )
                    {
                        if (J < iParam2)
                        {
                            if ((g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J] == iParam3) || (g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J] == iParam4))
                            {
                                uVar10 = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[0];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[0] = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] = uVar10;
                                uVar10 = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[iParam2 - 1];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[iParam2 - 1] = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J] = uVar10;
                                return;
                            }
                        }
                    }
                    return;
                }
            }
        }
    }
    return;
}

int sub_1388(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15946[uParam0]._fU168._fU12[I] != 1)
        {
            sub_1477( "\n Player has NOT passed mission ", I );
            return 0;
        }
        else
        {
            sub_1477( "\n Player has passed mission ", I );
        }
    }
    return 1;
}

void sub_1477(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1856()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2378(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1856() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1856(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1856() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1856(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1856()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1856() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1856() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2610() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2610() )))
    {
        return 0;
    }
    return 1;
}

void sub_2610()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_2698()
{
    if (NOT (IS_PLAYER_PLAYING( sub_2610() )))
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if (g_U10980)
    {
        return 0;
    }
    if ((sub_2757()) || (sub_2807()))
    {
        return 0;
    }
    if (NOT g_U26755)
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2610() )))
    {
        return 0;
    }
    if (NOT sub_2888())
    {
        return 0;
    }
    return 1;
}

int sub_2757()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_2807()
{
    if (g_U555 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_2888()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_2968()
{
    sub_2977();
    sub_3080( ref g_U9893._fU68 );
    sub_3129();
    return;
}

void sub_2977()
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

void sub_3080(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_3129()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_3167( 1, g_U569[I] )) == 0)
        {
            sub_3418( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_3596())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_3167(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_3418(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_3503( g_U569 - 1 );
    return;
}

void sub_3503(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_3596()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_3167( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3783(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 14; Result++ )
    {
        switch (g_U15946[uParam0]._fU168._fU12[Result])
        {
            case 2:
            case 0:
            return Result;
            break;
        }
    }
    return -1;
}

void sub_3940(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uParam2];
}

void sub_4166()
{
    unknown uVar2;
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;

    l_U498 = -1;
    LOAD_ADDITIONAL_TEXT( "BELL3", 0 );
    sub_4197();
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_OUT( 750 );
    SET_TEXT_DRAW_BEFORE_FADE( 1 );
    sub_4359();
    while (NOT IS_SCREEN_FADED_OUT())
    {
        SET_TEXT_DRAW_BEFORE_FADE( 1 );
        sub_4197();
        WAIT( 0 );
    }
    SET_TEXT_DRAW_BEFORE_FADE( 1 );
    if (l_U530 == 1)
    {
        STOP_SOUND( l_U531 );
        RELEASE_SOUND_ID( l_U531 );
        l_U530 = 0;
    }
    SET_PLAYER_MOOD_NORMAL( sub_2610() );
    REQUEST_ANIMS( "amb@payphone" );
    while (NOT (HAVE_ANIMS_LOADED( "amb@payphone" )))
    {
        sub_4197();
        if (NOT (HAVE_ANIMS_LOADED( "amb@payphone" )))
        {
            REQUEST_ANIMS( "amb@payphone" );
        }
        WAIT( 0 );
    }
    REQUEST_ANIMS( "GESTURES@NIKO" );
    while (NOT (HAVE_ANIMS_LOADED( "GESTURES@NIKO" )))
    {
        sub_4197();
        if (NOT (HAVE_ANIMS_LOADED( "GESTURES@NIKO" )))
        {
            REQUEST_ANIMS( "GESTURES@NIKO" );
        }
        WAIT( 0 );
    }
    sub_5101( "B3AUD" );
    sub_5228( 0, sub_1856(), "Niko", 0 );
    sub_5228( 1, 0, "FIXER", 0 );
    if (NOT (IS_CHAR_DEAD( sub_1856() )))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1856(), 1 );
        SET_PLAYER_CONTROL_ADVANCED( sub_2610(), 0, 1, 1 );
    }
    if (NOT (IS_CAR_DEAD( l_U482 )))
    {
        if (LOCATE_CAR_3D( l_U482, l_U485._fU0, l_U485._fU4, l_U485._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
        {
            if (NOT (IS_CAR_A_MISSION_CAR( l_U482 )))
            {
                SET_CAR_AS_MISSION_CAR( l_U482 );
                l_U497 = 1;
            }
            CLEAR_AREA( -1360.73600000, 344.20370000, 13.47390000, 3.00000000, 1 );
            SET_CAR_HEADING( l_U482, 179.76630000 );
            SET_CAR_COORDINATES( l_U482, -1360.73600000, 344.20370000, 13.47390000 );
            GET_CAR_MODEL( l_U482, ref l_U483 );
            if ((IS_THIS_MODEL_A_BIKE( l_U483 )) || (IS_THIS_MODEL_A_CAR( l_U483 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U482 );
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_1856() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1856() ))
        {
            CLEAR_AREA( l_U485._fU0, l_U485._fU4, l_U485._fU8, 2.00000000, 1 );
            WARP_CHAR_FROM_CAR_TO_COORD( sub_1856(), l_U485._fU0, l_U485._fU4, l_U485._fU8 );
            SET_CHAR_HEADING( sub_1856(), 98.86650000 );
        }
    }
    CLEAR_AREA_OF_CHARS( l_U485._fU0, l_U485._fU4, l_U485._fU8, 15.00000000 );
    if ((l_U497 == 1) AND (NOT (IS_CAR_DEAD( l_U482 ))))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U482 );
        l_U497 = 0;
    }
    CREATE_CAM( 3, ref l_U519 );
    SET_WIDESCREEN_BORDERS( 1 );
    if (NOT (IS_CHAR_DEAD( sub_1856() )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1856() );
        SET_CHAR_COORDINATES( sub_1856(), l_U485._fU0, l_U485._fU4, l_U485._fU8 );
        SET_CHAR_HEADING( sub_1856(), 98.86650000 );
    }
    if (l_U496 == 1)
    {
        OPEN_SEQUENCE_TASK( ref uVar6 );
        TASK_SWAP_WEAPON( 0, 0 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "m_enternumbers", "amb@payphone", 4.00000000, 0, 0, 0, 1, 0 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "pick_up_phone", "amb@payphone", 4.00000000, 0, 0, 0, 1, 0 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "cellphone_talk", "amb@payphone", 4.00000000, 1, 0, 0, 1, 0 );
        CLOSE_SEQUENCE_TASK( uVar6 );
    }
    else
    {
        sub_6160( l_U484 );
        g_U15946[l_U484]._fU8[0]._fU0[3] = 0;
        OPEN_SEQUENCE_TASK( ref uVar6 );
        TASK_SWAP_WEAPON( 0, 0 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "pick_up_phone", "amb@payphone", 4.00000000, 0, 0, 0, 1, 0 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "cellphone_talk", "amb@payphone", 4.00000000, 1, 0, 0, 1, 0 );
        CLOSE_SEQUENCE_TASK( uVar6 );
    }
    BEGIN_CAM_COMMANDS( ref uVar2 );
    sub_6452();
    PRINTSTRING( "\n\n   ---> CREATE PAYPHONE CAMERAS \n\n" );
    SET_CAM_PROPAGATE( l_U516[0], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    REQUEST_MODEL( 1361081624 );
    while (NOT (HAS_MODEL_LOADED( 1361081624 )))
    {
        if (NOT (HAS_MODEL_LOADED( 1361081624 )))
        {
            REQUEST_MODEL( 1361081624 );
        }
        WAIT( 0 );
    }
    CREATE_OBJECT( 1361081624, l_U485._fU0, l_U485._fU4, l_U485._fU8, ref uVar7, 1 );
    if (NOT (IS_CHAR_DEAD( sub_1856() )))
    {
        ATTACH_OBJECT_TO_PED( uVar7, sub_1856(), 1232, 0.07000000, 0.05200000, 0, 3.30000000, 0.30000000, -0.45000000, 0 );
    }
    SET_CAM_PROPAGATE( l_U516[0], 0 );
    SET_CAM_INTERP_STYLE_CORE( l_U519, l_U516[0], l_U516[1], 13000, 0 );
    SET_CAM_ACTIVE( l_U519, 1 );
    SET_CAM_PROPAGATE( l_U519, 1 );
    WAIT( 2000 );
    if ((NOT (IS_CHAR_DEAD( sub_1856() ))) AND (l_U496 == 1))
    {
        l_U532 = GET_SOUND_ID();
        PLAY_SOUND_FROM_PED( l_U532, "B2P_HIGH_END_ASSASSIN_DIAL", sub_1856() );
        WAIT( 750 );
        if (NOT (IS_CHAR_DEAD( sub_1856() )))
        {
            TASK_PERFORM_SEQUENCE( sub_1856(), uVar6 );
            CLEAR_SEQUENCE_TASK( uVar6 );
        }
        DO_SCREEN_FADE_IN( 750 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    else if (NOT (IS_CHAR_DEAD( sub_1856() )))
    {
        TASK_PERFORM_SEQUENCE( sub_1856(), uVar6 );
        CLEAR_SEQUENCE_TASK( uVar6 );
    }
    DO_SCREEN_FADE_IN( 750 );
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    if (l_U496 == 1)
    {
        iVar4 = -1;
    }
    I = 1;
    bVar8 = false;
    SETTIMERB( 0 );
    SETTIMERA( 0 );
    while ((NOT bVar8) AND (NOT sub_8947()))
    {
        WAIT( 0 );
        if ((iVar4 == -1) AND (l_U496 == 1))
        {
            if (HAS_SOUND_FINISHED( l_U532 ))
            {
                RELEASE_SOUND_ID( l_U532 );
                iVar4 = 0;
            }
        }
        if (((iVar4 == 0) AND (l_U496 == 0)) AND (NOT (sub_9126( l_U524 ))))
        {
            iVar4 = 2;
            sub_9326( "B3_CFIX", ref l_U524, 8, 0 );
            l_U496 = 1;
        }
        if ((iVar4 == 0) AND (NOT (sub_9126( l_U524 ))))
        {
            iVar4 = 1;
            sub_9326( "B3_CWORK", ref l_U524, 8, 0 );
        }
        if ((iVar4 == 1) AND (NOT (sub_9126( l_U524 ))))
        {
            iVar4 = 2;
            if (g_U64980 == 1)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U498 );
                if (l_U498 == 0)
                {
                    sub_9326( "B3_PPASS1", ref l_U524, 8, 0 );
                }
                else if (sub_9326( "B3_PPASS2", ref l_U524, 8, 0 ))
                {
                    ;
                }
                else if (sub_9326( "B3_PPASS3", ref l_U524, 8, 0 ))
                {
                    ;
                }
                else
                {
                    sub_9326( "B3_PPASS4", ref l_U524, 8, 0 );
                };;;
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U498 );
                if (l_U498 == 0)
                {
                    sub_9326( "B3_PFAIL1", ref l_U524, 8, 0 );
                }
                else if (sub_9326( "B3_PFAIL2", ref l_U524, 8, 0 ))
                {
                    ;
                }
                else if (sub_9326( "B3_PFAIL3", ref l_U524, 8, 0 ))
                {
                    ;
                }
                else
                {
                    sub_9326( "B3_PFAIL4", ref l_U524, 8, 0 );
                };;;
            }
        }
        if ((iVar4 == 2) AND (NOT (sub_9126( l_U524 ))))
        {
            iVar4 = 3;
            SETTIMERA( 0 );
        }
        if (((iVar4 == 3) AND (TIMERA() > 0)) AND (NOT (sub_9126( l_U524 ))))
        {
            iVar4 = 4;
            sub_10735();
            SETTIMERA( 0 );
        }
        if ((iVar4 == 4) AND (NOT (sub_9126( l_U524 ))))
        {
            iVar4 = 5;
            SETTIMERA( 0 );
        }
        if (((I == 0) AND (iVar4 > -1)) AND (TIMERB() > 0))
        {
            I = 1;
        }
        if ((((I == 1) AND (TIMERB() > 10000)) AND (iVar4 == 5)) AND (NOT (sub_9126( l_U524 ))))
        {
            WAIT( 500 );
            if (NOT (IS_CHAR_DEAD( sub_1856() )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_1856(), "put_down_phone", "amb@payphone", 4.00000000, 0, 0, 0, 0, 0 );
            }
            bVar8 = true;
        }
        if (((TIMERB() > 12000) AND (iVar5 == 0)) AND (iVar4 > -1))
        {
            iVar5 = 1;
            sub_6452();
            SET_CAM_PROPAGATE( l_U519, 0 );
            SET_CAM_ACTIVE( l_U519, 0 );
            SET_CAM_ACTIVE( l_U516[0], 1 );
            SET_CAM_PROPAGATE( l_U516[0], 1 );
            SET_CAM_PROPAGATE( l_U516[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U519, l_U516[0], l_U516[1], 13000, 0 );
            SET_CAM_ACTIVE( l_U519, 1 );
            SET_CAM_PROPAGATE( l_U519, 1 );
        }
        if ((TIMERB() > 24000) AND (iVar5 == 1))
        {
            iVar5 = 2;
            sub_6452();
            SET_CAM_PROPAGATE( l_U519, 0 );
            SET_CAM_ACTIVE( l_U519, 0 );
            SET_CAM_ACTIVE( l_U516[0], 1 );
            SET_CAM_PROPAGATE( l_U516[0], 1 );
            SET_CAM_PROPAGATE( l_U516[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U519, l_U516[0], l_U516[1], 13000, 0 );
            SET_CAM_ACTIVE( l_U519, 1 );
            SET_CAM_PROPAGATE( l_U519, 1 );
        }
        if ((TIMERB() > 36000) AND (iVar5 == 2))
        {
            iVar5 = 3;
            sub_6452();
            SET_CAM_PROPAGATE( l_U519, 0 );
            SET_CAM_ACTIVE( l_U519, 0 );
            SET_CAM_ACTIVE( l_U516[0], 1 );
            SET_CAM_PROPAGATE( l_U516[0], 1 );
            SET_CAM_PROPAGATE( l_U516[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U519, l_U516[0], l_U516[1], 13000, 0 );
            SET_CAM_ACTIVE( l_U519, 1 );
            SET_CAM_PROPAGATE( l_U519, 1 );
        }
        if ((TIMERB() > 48000) AND (iVar5 == 3))
        {
            iVar5 = 4;
            sub_6452();
            SET_CAM_PROPAGATE( l_U519, 0 );
            SET_CAM_ACTIVE( l_U519, 0 );
            SET_CAM_ACTIVE( l_U516[0], 1 );
            SET_CAM_PROPAGATE( l_U516[0], 1 );
            SET_CAM_PROPAGATE( l_U516[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U519, l_U516[0], l_U516[1], 13000, 0 );
            SET_CAM_ACTIVE( l_U519, 1 );
            SET_CAM_PROPAGATE( l_U519, 1 );
        }
    }
    if ((iVar4 == -1) AND (l_U496 == 1))
    {
        STOP_SOUND( l_U532 );
    }
    if (bVar8 == 1)
    {
        WAIT( 250 );
        if (NOT (IS_CHAR_DEAD( sub_1856() )))
        {
            l_U533 = GET_SOUND_ID();
            PLAY_SOUND_FROM_PED( l_U533, "B2P_HIGH_END_ASSASSIN_PHONE_HANG_UP", sub_1856() );
        }
        WAIT( 750 );
    }
    DO_SCREEN_FADE_OUT( 750 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        sub_4197();
        WAIT( 0 );
    }
    sub_12183( ref l_U524, 0 );
    if (bVar8 == 1)
    {
        RELEASE_SOUND_ID( l_U533 );
    }
    for ( I = 0; I < l_U499; I++ )
    {
        SET_CAM_PROPAGATE( l_U516[I], 0 );
        SET_CAM_ACTIVE( l_U516[I], 0 );
        DESTROY_CAM( l_U516[I] );
    }
    DESTROY_CAM( l_U519 );
    DESTROY_ALL_CAMS();
    if (DOES_OBJECT_EXIST( uVar7 ))
    {
        DELETE_OBJECT( ref uVar7 );
    }
    REMOVE_ANIMS( "amb@payphone" );
    REMOVE_ANIMS( "GESTURES@NIKO" );
    DELETE_OBJECT( ref uVar7 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1361081624 );
    PRINTSTRING( "\n\n   ---> DESTROY PAYPHONE CAMERAS \n\n" );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 500 );
    SET_WIDESCREEN_BORDERS( 0 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (NOT (IS_CHAR_DEAD( sub_1856() )))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1856(), 0 );
        SET_PLAYER_CONTROL_ADVANCED( sub_2610(), 1, 1, 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1856() );
    }
    WAIT( 0 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    END_CAM_COMMANDS( ref uVar2 );
    sub_12685();
    return;
}

void sub_4197()
{
    if ((g_U555 == 1) || (g_U8394 == 4))
    {
        if (g_U91._fU60 != -1)
        {
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U91._fU376 = 0;
        g_U91._fU100 = 1;
    }
    return;
}

void sub_4359()
{
    switch (l_U521)
    {
        case 0:
        PRINT_BIG( "PB_MISSION_1", 5000, 2 );
        break;
        case 1:
        PRINT_BIG( "PB_MISSION_2", 5000, 2 );
        break;
        case 2:
        PRINT_BIG( "PB_MISSION_3", 5000, 2 );
        break;
        case 3:
        PRINT_BIG( "PB_MISSION_4", 5000, 2 );
        break;
        case 4:
        PRINT_BIG( "PB_MISSION_5", 5000, 2 );
        break;
        case 5:
        PRINT_BIG( "PB_MISSION_6", 5000, 2 );
        break;
        case 6:
        PRINT_BIG( "PB_MISSION_7", 5000, 2 );
        break;
        case 7:
        PRINT_BIG( "PB_MISSION_8", 5000, 2 );
        break;
        case 8:
        PRINT_BIG( "PB_MISSION_9", 5000, 2 );
        break;
        case 9: break;
    }
    return;
}

void sub_5101(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_5120();
    return;
}

void sub_5120()
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

void sub_5228(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_1477( "\n PED NUMBER ", uParam0 );
    sub_5340( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5340(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6160(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15946[uParam0]._fU132._fU0)
    {
        if (g_U91._fU0 == 1012)
        {
            g_U91._fU92 = 1;
        }
        g_U15946[uParam0]._fU132._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15946[uParam0]._fU132._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U91._fU520 = 0;
    }
    return;
}

void sub_6452()
{
    int iVar2;
    int I;

    if (l_U498 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref l_U498 );
        PRINTSTRING( "\n ----> Random Number A = " );
        PRINTINT( l_U498 );
        PRINTNL();
        PRINTNL();
    }
    else
    {
        iVar2 = l_U498;
        GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref l_U498 );
        PRINTSTRING( "\n ----> Random Number A = " );
        PRINTINT( l_U498 );
        PRINTNL();
        PRINTNL();
        if (iVar2 == l_U498)
        {
            if (l_U498 == 7)
            {
                l_U498 = 6;
            }
            else
            {
                l_U498 = 7;
            }
        }
    }
    PRINTSTRING( "\n ----> Random Number B = " );
    PRINTINT( l_U498 );
    PRINTNL();
    PRINTNL();
    if (l_U498 == 0)
    {
        l_U499[0] = {-1366.85000000, 355.76320000, 15.25992000};
        l_U506[0] = {-1.83744500, -0.00000000, -68.56735000};
        l_U513[0] = 45;
        l_U499[1] = {-1366.85000000, 356.38510000, 15.23266000};
        l_U506[1] = {0.33978900, 0.00000000, -111.30990000};
        l_U513[1] = 45;
        PRINTSTRING( "\n ----> CAMERA 0 <---- \n\n" );
    }
    else if (l_U498 == 1)
    {
        l_U499[0] = {-1366.85000000, 356.38510000, 15.23266000};
        l_U506[0] = {0.33978900, 0.00000000, -111.30990000};
        l_U513[0] = 45;
        l_U499[1] = {-1366.85000000, 355.76320000, 15.25992000};
        l_U506[1] = {-1.83744500, -0.00000000, -68.56735000};
        l_U513[1] = 45;
        PRINTSTRING( "\n ----> CAMERA 1 <---- \n\n" );
    }
    else if (l_U498 == 2)
    {
        l_U499[0] = {-1368.08800000, 357.55570000, 15.28576000};
        l_U506[0] = {-3.09794100, -0.00000000, -123.11290000};
        l_U513[0] = 30;
        l_U499[1] = {-1367.86800000, 356.76830000, 15.31537000};
        l_U506[1] = {-3.78549200, -0.00000000, -110.50790000};
        l_U513[1] = 30;
        PRINTSTRING( "\n ----> CAMERA 2 <---- \n\n" );
    }
    else if (l_U498 == 3)
    {
        l_U499[0] = {-1359.13200000, 352.82770000, 16.37323000};
        l_U506[0] = {-9.98206300, 2.37003600, 57.70725000};
        l_U513[0] = 50;
        l_U499[1] = {-1359.13200000, 352.82770000, 16.37323000};
        l_U506[1] = {-9.98206300, 0.00000000, 57.70725000};
        l_U513[1] = 42;
        PRINTSTRING( "\n ----> CAMERA 3 <---- \n\n" );
    }
    else if (l_U498 == 4)
    {
        l_U499[0] = {-1359.11500000, 353.91640000, 16.23561000};
        l_U506[0] = {-5.51524000, -0.00000000, 81.61536000};
        l_U513[0] = 45;
        l_U499[1] = {-1361.16300000, 356.97000000, 14.70685000};
        l_U506[1] = {-0.58780600, -0.00000000, 103.96070000};
        l_U513[1] = 45;
        PRINTSTRING( "\n ----> CAMERA 4 <---- \n\n" );
    }
    else if (l_U498 == 5)
    {
        l_U499[0] = {-1362.45700000, 354.30280000, 14.73607000};
        l_U506[0] = {1.47484400, -0.00000000, 48.26923000};
        l_U513[0] = 51;
        l_U499[1] = {-1361.70500000, 356.96200000, 14.62345000};
        l_U506[1] = {2.62075900, 0.00000000, 122.29550000};
        l_U513[1] = 51;
        PRINTSTRING( "\n ----> CAMERA 5 <---- \n\n" );
    }
    else if (l_U498 == 6)
    {
        l_U499[0] = {-1355.18400000, 358.41160000, 20.16641000};
        l_U506[0] = {-23.84989000, 0.00000000, 126.76450000};
        l_U513[0] = 45;
        l_U499[1] = {-1362.67200000, 356.45260000, 14.86644000};
        l_U506[1] = {-6.42115900, -0.00000000, 98.23111000};
        l_U513[1] = 45;
        PRINTSTRING( "\n ----> CAMERA 6 <---- \n\n" );
    }
    else
    {
        l_U499[0] = {-1360.28600000, 355.95560000, 15.37419000};
        l_U506[0] = {-8.87914800, 0.00000000, 89.10028000};
        l_U513[0] = 51;
        l_U499[1] = {-1360.28600000, 355.95560000, 15.37419000};
        l_U506[1] = {-8.87914800, 0.00000000, 89.10028000};
        l_U513[1] = 30;
        PRINTSTRING( "\n ----> CAMERA 7 <---- \n\n" );
    };;;;;;;
    for ( I = 0; I < l_U499; I++ )
    {
        CREATE_CAM( 14, ref l_U516[I] );
        SET_CAM_POS( l_U516[I], l_U499[I]._fU0, l_U499[I]._fU4, l_U499[I]._fU8 );
        SET_CAM_ROT( l_U516[I], l_U506[I]._fU0, l_U506[I]._fU4, l_U506[I]._fU8 );
        SET_CAM_FOV( l_U516[I], l_U513[I] );
        SET_CAM_ACTIVE( l_U516[I], 1 );
    }
    return;
}

int sub_8947()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_9126(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_9238( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9238( "\n speech is not playing" );
    }
    return 0;
}

void sub_9238(unknown uParam0)
{
    return;
}

void sub_9326(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9349( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_9349(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9403( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_9403(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9425( iParam1 )))
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
    sub_10105( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_9425(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9238( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_9238( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_9238( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_10105(int iParam0, int iParam1)
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

void sub_10735()
{
    switch (l_U521)
    {
        case 0:
        sub_9326( "B3_TARGET", ref l_U524, 8, 0 );
        break;
        case 1:
        sub_9326( "B3_TARGET2", ref l_U524, 8, 0 );
        break;
        case 2:
        sub_9326( "B3_TARGET3", ref l_U524, 8, 0 );
        break;
        case 3:
        sub_9326( "B3_TARGET4", ref l_U524, 8, 0 );
        break;
        case 4:
        sub_9326( "B3_TARGET5", ref l_U524, 8, 0 );
        break;
        case 5:
        sub_9326( "B3_TARGET6", ref l_U524, 8, 0 );
        break;
        case 6:
        sub_9326( "B3_TARGET7", ref l_U524, 8, 0 );
        break;
        case 7:
        sub_9326( "B3_TARGET9", ref l_U524, 8, 0 );
        break;
        case 8:
        sub_9326( "B3_TARGET8", ref l_U524, 8, 0 );
        break;
        case 9:
        sub_9326( "B3_TARGET", ref l_U524, 8, 0 );
        break;
    }
    return;
}

void sub_12183(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_12685()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_12830()
{
    switch (l_U521)
    {
        case 0:
        g_U64982 = 1;
        break;
        case 1:
        g_U64982 = 2;
        break;
        case 2:
        g_U64982 = 3;
        break;
        case 3:
        g_U64982 = 4;
        break;
        case 4:
        g_U64982 = 5;
        break;
        case 5:
        g_U64982 = 6;
        break;
        case 6:
        g_U64982 = 7;
        break;
        case 7:
        g_U64982 = 8;
        break;
        case 8:
        g_U64982 = 9;
        break;
        case 9:
        g_U64982 = 10;
        break;
    }
    return;
}

void sub_13069()
{
    sub_13078();
    return;
}

void sub_13078()
{
    int iVar2;

    iVar2 = 19;
    sub_13092( iVar2 );
    return;
}

void sub_13092(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Start_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_13244( "Flow_Start_Proc_Subpart: Proc Mission not loaded" );
    }
    sub_2968();
    g_U13391[uParam0]._fU160._fU96 = 1;
    g_U10978 = 1;
    g_U10981[uParam0]._fU28 = 1;
    sub_13426( uParam0 );
    uVar3 = sub_14899( uParam0, g_U13391[uParam0]._fU160._fU76 );
    sub_15087( uVar3 );
    sub_15208();
    return;
}

void sub_13244(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_13426(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    StrCopy( ref uVar3, 4, g_U13391[uParam0]._fU160._fU44, 8);
    uVar7 = {sub_13462( ref uVar3, uParam0 )};
    sub_14727( uVar7 );
    return;
}

void sub_13462(unknown uParam0, unknown uParam1)
{
    char[16] Result;

    StrCopy( ref Result, uParam0, 16 );
    switch (uParam1)
    {
        case 3:
        switch (g_U64770)
        {
            case 0:
            ConcatString(ref Result, "_A", 16);
            break;
            case 1:
            ConcatString(ref Result, "_B", 16);
            break;
            case 2:
            ConcatString(ref Result, "_C", 16);
            break;
            case 3:
            ConcatString(ref Result, "_D", 16);
            break;
            case 4:
            ConcatString(ref Result, "_E", 16);
            break;
            case 5:
            ConcatString(ref Result, "_F", 16);
            break;
            case 6:
            ConcatString(ref Result, "_G", 16);
            break;
            case 7:
            ConcatString(ref Result, "_H", 16);
            break;
            case 8:
            ConcatString(ref Result, "_I", 16);
            break;
            case 9:
            ConcatString(ref Result, "_J", 16);
            break;
            default:
            PRINTSTRING( "----------------> GLOBAL_DRUG_DEAL value = " );
            PRINTINT( g_U64770 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS Drug_Dealing subpart identifier error" );
        }
        break;
        case 19:
        switch (g_U64982)
        {
            case 1:
            ConcatString(ref Result, "_A", 16);
            break;
            case 2:
            ConcatString(ref Result, "_B", 16);
            break;
            case 3:
            ConcatString(ref Result, "_C", 16);
            break;
            case 4:
            ConcatString(ref Result, "_D", 16);
            break;
            case 5:
            ConcatString(ref Result, "_E", 16);
            break;
            case 6:
            ConcatString(ref Result, "_F", 16);
            break;
            case 7:
            ConcatString(ref Result, "_G", 16);
            break;
            case 8:
            ConcatString(ref Result, "_H", 16);
            break;
            case 9:
            ConcatString(ref Result, "_I", 16);
            break;
            default:
            PRINTSTRING( "----------------> g_iBell2MissionNumber value = " );
            PRINTINT( g_U64982 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS High-End Assassin subpart identifier error" );
        }
        break;
        case 22:
        switch (g_U64547)
        {
            case 0:
            ConcatString(ref Result, "_A", 16);
            break;
            case 1:
            ConcatString(ref Result, "_B", 16);
            break;
            case 2:
            ConcatString(ref Result, "_C", 16);
            break;
            case 3:
            ConcatString(ref Result, "_D", 16);
            break;
            case 4:
            ConcatString(ref Result, "_E", 16);
            break;
            case 5:
            ConcatString(ref Result, "_F", 16);
            break;
            case 6:
            ConcatString(ref Result, "_G", 16);
            break;
            case 7:
            ConcatString(ref Result, "_H", 16);
            break;
            case 8:
            ConcatString(ref Result, "_I", 16);
            break;
            case 9:
            ConcatString(ref Result, "_J", 16);
            break;
            default:
            PRINTSTRING( "----------------> current_roman10p_scenarios value (as an INT) = " );
            PRINTINT( g_U64547 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS High-End Assassin subpart identifier error" );
        }
        break;
    }
    return Result;
}

void sub_14727(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

int sub_14899(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_14973( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_14973(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_15087(unknown uParam0)
{
    g_U9925 = g_U26758[uParam0]._fU8;
    if (g_U9925 >= 50000)
    {
        g_U9925 = sub_15133( g_U9925 );
    }
    return;
}

void sub_15133(int Result)
{
    if (Result == 50094)
    {
        if (g_U15654[12])
        {
            return 95;
        }
        else
        {
            return 94;
        }
    }
    return Result;
}

void sub_15208()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

int sub_15357(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_1856(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_9238( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_15890()
{
    sub_15899();
    return;
}

void sub_15899()
{
    int iVar2;
    int iVar3;

    iVar2 = 19;
    iVar3 = 19;
    sub_15931( iVar2, iVar3, "Contact_22" );
    return;
}

void sub_15931(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    sub_15946( uParam0, uParam1, uParam2 );
    uVar5 = g_U13391[uParam0]._fU160._fU76;
    g_U10981[uParam0]._fU24 = uVar5;
    if (g_U13391[uParam0]._fU160._fU8)
    {
        g_U15946[uParam1]._fU8[0]._fU0[3] = 0;
    }
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    return;
}

void sub_15946(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[64] cVar5;
    int iVar21;
    int iVar22;
    int iVar23;

    StrCopy( ref cVar5, "", 64 );
    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc not setup", 64);
        sub_16090( ref cVar5 );
        return;
    }
    if (g_U13391[uParam0]._fU160._fU76 == -1)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc ID not setup", 64);
        sub_16090( ref cVar5 );
        return;
    }
    sub_16375( uParam0 );
    iVar21 = -1;
    iVar22 = -1;
    iVar23 = -1;
    if (sub_17110( uParam0, ref iVar21, ref iVar22, ref iVar23 ))
    {
        sub_17245( iVar21, uParam1, iVar22, iVar23 );
    }
    return;
}

void sub_16090(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_16375(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 5;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        iVar3 = 0;
        break;
        case 22:
        iVar3 = 1;
        break;
        case 19:
        iVar3 = 2;
        break;
        case 8:
        iVar3 = 3;
        break;
        case -1:
        iVar3 = 4;
        break;
        default: return;
    }
    iVar4 = 0;
    if (NOT g_U64792[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64792[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_16550( 1, iVar4 );
            g_U64792[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_16550(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_16732( 0 );
    return;
}

void sub_16732(boolean bParam0)
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
        sub_16987();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_16987()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

int sub_17110(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 39;
        (uParam2^) = 55;
        (uParam3^) = 360000;
        return 1;
        case 3:
        (uParam1^) = 40;
        (uParam2^) = 15;
        (uParam3^) = 360000;
        return 1;
        case 8:
        (uParam1^) = 41;
        (uParam2^) = 21;
        (uParam3^) = 360000;
        return 1;
    }
    return 0;
}

void sub_17245(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_17267( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_17267(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_17379( uParam1, uParam2 );
        return;
    }
    if (g_U63988._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar8 = 0;
    GET_GAME_TIMER( ref iVar8 );
    g_U63988._fU12[iParam0]._fU0 = 1;
    g_U63988._fU12[iParam0]._fU4 = 0;
    g_U63988._fU12[iParam0]._fU8 = 0;
    g_U63988._fU12[iParam0]._fU12 = uParam1;
    g_U63988._fU12[iParam0]._fU16 = uParam2;
    g_U63988._fU12[iParam0]._fU20 = iVar8 + iParam3;
    g_U63988._fU12[iParam0]._fU28 = uParam4;
    sub_19313( iParam0, iParam3 );
    return;
}

void sub_17379(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_17402( uParam0 );
    sub_17893( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_18237( ref uVar4, 1 );
    sub_18265( ref uVar4, 0 );
    sub_18293( ref uVar4, 2 );
    sub_18323( ref uVar4 );
    return;
}

int sub_17402(unknown uParam0)
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
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_14973( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_17893(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_17915( uParam0, 0, iParam4 + 0 );
    sub_17915( uParam1, 1, iParam4 + 0 );
    sub_17915( uParam2, 2, iParam4 + 0 );
    sub_17915( uParam3, 3, iParam4 + 0 );
    sub_17915( 0, 4, iParam4 + 0 );
    sub_17915( 1, 5, iParam4 + 0 );
    sub_17915( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_17915(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_18237(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_18265(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_18293(int iParam0, unknown uParam1)
{
    sub_17915( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_18323(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_18393())
        {
            sub_3418( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_18520( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_3418( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_3167( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_3167( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_18393()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_3167( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_3418( I );
            return 1;
        }
    }
    return 0;
}

int sub_18520(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_18585( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_18585(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_3167( 0, uParam0 );
        if (iVar14 == (sub_3167( 0, uParam6 )))
        {
            iVar15 = sub_3167( 3, uParam0 );
            if (iVar15 == (sub_3167( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_19313(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_19352( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_19352(int iParam0)
{
    int iVar3;

    iVar3 = sub_19361();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_19416();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_19361()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_19416()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}