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
    l_U549 = 0;
    l_U569 = 0;
    l_U570 = 0;
    l_U572 = 0;
    l_U574 = 2;
    l_U575 = 2021161215;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = 0;
    l_U580 = 0;
    l_U581 = 0;
    l_U582 = 0;
    l_U583 = 0;
    l_U584 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_187();
        sub_2297();
    }
    sub_4299();
    WAIT( 0 );
    while (true)
    {
        WAIT( 0 );
        switch (l_U571)
        {
            case 0:
            if (NOT l_U576)
            {
                if (NOT l_U580)
                {
                    if (sub_5519())
                    {
                        l_U580 = 1;
                        SETTIMERA( 0 );
                    }
                }
                else
                {
                    switch (l_U572)
                    {
                        case 0:
                        if ((NOT l_U577) || (TIMERA() > 3000))
                        {
                            if (sub_5781( 8, "BR3_COMP", "BR3AUD" ))
                            {
                                l_U577 = 1;
                                l_U573 = -1;
                                l_U572 = 1;
                            }
                        }
                        break;
                        case 1:
                        if (NOT (sub_9678( 0 )))
                        {
                            if (sub_9945() != -1)
                            {
                                l_U573 = sub_9945();
                            }
                        }
                        else if (l_U573 != -1)
                        {
                            if ((NOT sub_10003()) || (l_U573 >= l_U574))
                            {
                                l_U572 = 2;
                                l_U576 = 1;
                                break;
                            }
                        }
                        SETTIMERA( 0 );
                        l_U572 = 0;;
                        break;
                    }
                }
            }
            if ((((NOT l_U578) AND (l_U576)) AND (sub_9678( 0 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                PRINT_NOW( "DAN4_07", 7500, 1 );
                l_U578 = 1;
            }
            if (NOT (sub_10143() == 0))
            {
                CLEAR_THIS_PRINT( "DAN4_07" );
                l_U571 = 1;
            }
            break;
            case 1:
            if (sub_10143() == 0)
            {
                if (l_U579)
                {
                    CLEAR_PRINTS();
                    PRINT_HELP( "DAN4_20" );
                    WAIT( 8000 );
                    sub_10259();
                }
                else if (NOT l_U579)
                {
                    l_U584 = 0;
                    l_U582 = 0;
                    l_U583 = 0;
                }
                CLEAR_PRINTS();
                CLEAR_HELP();
                PRINT_NOW( "DAN4_19", 7500, 1 );
                l_U571 = 0;;
            }
            else
            {
                sub_21958();
                if ((sub_22419( 0 )) AND (NOT l_U579))
                {
                    l_U579 = 1;
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    PRINT_HELP( "DAN4_10" );
                    SETTIMERB( 0 );
                }
            }
            break;
        }
    }
    return;
}

void sub_187()
{
    sub_196();
    return;
}

void sub_196()
{
    int iVar2;

    iVar2 = 8;
    sub_210( iVar2 );
    sub_1386( iVar2 );
    return;
}

void sub_210(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_254();
        sub_415();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_523();
            sub_562();
        }
    }
    sub_638();
    sub_739();
    uVar5 = sub_852( uParam0 );
    sub_1293( uVar5, 0 );
    return;
}

void sub_254()
{
    sub_268( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_368();
    }
    return;
}

void sub_268(int iParam0)
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

void sub_368()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_415()
{
    sub_424();
    return;
}

void sub_424()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_523()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_562()
{
    sub_571();
    return;
}

void sub_571()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_638()
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

void sub_739()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_761();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_761()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_852(unknown uParam0)
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
    sub_1251( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1251(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1293(int iParam0, boolean bParam1)
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

void sub_1386(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1395();
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
        sub_2170();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1395()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1433( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1433( 1, g_U569[I] )) != 0)
            {
                sub_1719( I );
            }
        }
    }
    if (NOT sub_1885())
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

int sub_1433(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1719(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1804( g_U569 - 1 );
    return;
}

void sub_1804(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1885()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1433( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2170()
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

void sub_2297()
{
    if (DOES_BLIP_EXIST( g_U10324[5]._fU32 ))
    {
        CHANGE_BLIP_COLOUR( g_U10324[5]._fU32, l_U575 );
        SET_ROUTE( g_U10324[5]._fU32, 0 );
    }
    sub_2376( 0, 1 );
    sub_2406( 12, 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2376(unknown uParam0, unknown uParam1)
{
    g_U1413[uParam0] = uParam1;
    return;
}

void sub_2406(unknown uParam0, unknown uParam1)
{
    g_U10133._fU84[uParam0] = uParam1;
    sub_2430();
    return;
}

void sub_2430()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_2458( 13 );
        if ((sub_2503( 13, iVar3 )) AND (g_U9932[g_U9999[I]._fU0]._fU0))
        {
            sub_2604( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_2788( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_2458( 11 );
        if ((sub_2503( 11, iVar3 )) AND (g_U9932[g_U10090[I]._fU0]._fU0))
        {
            sub_2604( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_2788( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_2982( I );
        if ((sub_2503( g_U10324[I]._fU12, iVar3 )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            sub_2604( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_3290( I );
        }
        else
        {
            sub_2788( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_3519();
    return;
}

int sub_2458(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_2503(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_2604(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((((iParam4 == 2) || (iParam4 == 3)) || (iParam4 == 4)) || (iParam4 == 1))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U4 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

void sub_2788(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_2982(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_3024( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_2458( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_3024(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_3290(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_3519()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_2458( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_3564( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_2458( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_3564( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((sub_2982( I )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_2982( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_3564( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_3564( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_3973() )))
        {
            GET_CHAR_COORDINATES( sub_3973(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_4091( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_3564( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_3564(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_3973()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4091(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_4299()
{
    unknown uVar2;

    CLEAR_PRINTS();
    LOAD_ADDITIONAL_TEXT( "BR3AUD", 6 );
    if (g_U9893._fU24)
    {
        START_CUTSCENE_NOW( "BR_3" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "BR_3" );
    }
    LOAD_ADDITIONAL_TEXT( "BRUCIE3", 0 );
    sub_4451( "BR3AUD" );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U64951 = 0;
    PRINT_NOW( "DAN4_06", 7500, 1 );
    sub_4603( 1, 0 );
    sub_4603( 2, 1 );
    sub_2376( 2, 1 );
    sub_4603( 0, 1 );
    sub_4663( 0, 0 );
    g_U1413[0] = 0;
    if (NOT g_U64952)
    {
        sub_4713();
        g_U64952 = 1;
    }
    g_U15654[30] = 1;
    sub_4833( 12 );
    sub_2406( 12, 1 );
    WAIT( 0 );
    sub_4882();
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (IS_VEH_DRIVEABLE( uVar2 ))
    {
        SET_CAR_AS_MISSION_CAR( uVar2 );
        if (LOCATE_CAR_2D( uVar2, 778.01490000, 123.60520000, 3.00000000, 3.00000000, 0 ))
        {
            CLEAR_AREA( 774.19930000, 123.70080000, 5.71990000, 7.00000000, 1 );
            SET_CAR_COORDINATES( uVar2, 774.19930000, 123.70080000, 5.71990000 );
            SET_CAR_HEADING( uVar2, 15.35740000 );
            SET_CAR_ON_GROUND_PROPERLY( uVar2 );
            WAIT( 1000 );
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_3973() )))
    {
        LOAD_SCENE( 778.01490000, 123.60520000, 3.94060000 );
        CLEAR_AREA( 778.01490000, 123.60520000, 3.94060000, 3.00000000, 1 );
        SET_CHAR_COORDINATES( sub_3973(), 778.01490000, 123.60520000, 3.94060000 );
        SET_CHAR_HEADING( sub_3973(), 113 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        WAIT( 1000 );
    }
    if (IS_VEH_DRIVEABLE( uVar2 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar2 );
    }
    DO_SCREEN_FADE_IN( 500 );
    if (NOT (IS_CHAR_DEAD( sub_3973() )))
    {
        SET_PLAYER_CONTROL( sub_5400(), 1 );
    }
    return;
}

void sub_4451(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4470();
    return;
}

void sub_4470()
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

void sub_4603(int iParam0, unknown uParam1)
{
    if (iParam0 <= 2)
    {
        g_U1430[iParam0] = uParam1;
    }
    return;
}

void sub_4663(unknown uParam0, unknown uParam1)
{
    g_U1513[uParam0] = uParam1;
    return;
}

void sub_4713()
{
    int I;
    int J;

    for ( I = 0; I < 12; I++ )
    {
        sub_4737( I, 0 );
    }
    for ( J = 0; J < 12; J++ )
    {
        sub_2376( J, 0 );
    }
    return;
}

void sub_4737(unknown uParam0, unknown uParam1)
{
    g_U1400[uParam0] = uParam1;
    return;
}

void sub_4833(unknown uParam0)
{
    g_U10133._fU0[uParam0] = 1;
    sub_2430();
    return;
}

void sub_4882()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;

    if (DOES_BLIP_EXIST( g_U10324[5]._fU32 ))
    {
        GET_BLIP_COLOUR( g_U10324[5]._fU32, ref uVar2 );
        GET_HUD_COLOUR( uVar2, ref iVar3, ref iVar4, ref iVar5, ref uVar6 );
        l_U575 = (((iVar3 * 16777216) + (iVar4 * 65536)) + (iVar5 * 256)) + 255;
        CHANGE_BLIP_COLOUR( g_U10324[5]._fU32, 5 );
        SET_ROUTE( g_U10324[5]._fU32, 1 );
        sub_5032( ref g_U10324[5]._fU32 );
    }
    return;
}

void sub_5032(unknown uParam0)
{
    g_U2221 = (uParam0^);
    return;
}

void sub_5400()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_5519()
{
    if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3973(), 972.65480000, -170.45200000, 24.19370000, 19.00000000, 19.00000000, 19.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3973(), -337.16420000, 1392.44200000, 12.91310000, 19.00000000, 19.00000000, 19.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3973(), -1581.15000000, 464.32500000, 26.30900000, 19.00000000, 19.00000000, 19.00000000, 0 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_5781(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_5839( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_5839(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_5909( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_5909( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_5400() )))
    {
        sub_5909( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3973() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3973() ))))
    {
        sub_5909( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_5909( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_6366()) AND (NOT bParam11))
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
                sub_5909( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_6366()) AND (NOT bParam11))
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
    sub_7738( uParam0, ref g_U91._fU176 );
    sub_9119( ref g_U91._fU160 );
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
        sub_9359( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_5909(unknown uParam0)
{
    return;
}

int sub_6366()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_6423())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_6423()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_5400() )))
    {
        sub_5909( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_5909( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_5909( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_5909( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_5400() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3973() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3973(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_5909( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3973() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_5909( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_5909( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5400() )))
    {
        sub_5909( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_7738(int iParam0, unknown uParam1)
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

void sub_9119(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_9359(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_9678(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_3973(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_5909( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_9945()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

void sub_10003()
{
    return g_U91._fU504;
}

void sub_10143()
{
    return g_U857._fU0;
}

void sub_10259()
{
    sub_10268();
    TRIGGER_MISSION_COMPLETE_AUDIO( 34 );
    sub_2297();
    return;
}

void sub_10268()
{
    sub_10277();
    return;
}

void sub_10277()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_10295();
    sub_10354( iVar2, iVar3, iVar4 );
    return;
}

void sub_10295()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_10354(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 8;
    sub_10385( iVar5, uParam0, uParam1, uParam2, "Friend_9" );
    return;
}

void sub_10385(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_10481( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_10481( ref cVar9 );
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
            sub_10481( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_10481( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_10481( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_10481( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_11058( iParam0, iVar7 );;;
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
                sub_11455( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_11455( 0, 4 );
            }
        }
    }
    if (NOT (sub_11544( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5400(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_5400() );
    }
    sub_1395();
    bVar27 = true;
    uVar28 = sub_11058( iParam0, iVar7 );
    uVar29 = sub_852( iParam0 );
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
                sub_20920( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_21350();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_21435( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_21492( iParam0 );
                sub_21531( 0 );
                sub_1293( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_21639();
        }
    }
    if (bParam2)
    {
        sub_21350();
        sub_21727();
        sub_21531( 0 );
    }
    if (bParam3)
    {
        sub_21350();
        sub_21767();
        sub_21531( 0 );
        sub_1293( uVar29, 0 );
    }
    sub_739();
    return;
}

void sub_10481(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_11058(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1251( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_11455(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_11544(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_11752( uParam1 );
        break;
        case 1:
        bVar8 = sub_13830( uParam1 );
        break;
        case 2:
        bVar8 = sub_14056( uParam1 );
        break;
        case 3:
        bVar8 = sub_14206( uParam1 );
        break;
        case 4:
        bVar8 = sub_14484( uParam1 );
        break;
        case 5:
        bVar8 = sub_14787( uParam1 );
        break;
        case 6:
        bVar8 = sub_14986( uParam1 );
        break;
        case 7:
        bVar8 = sub_15212( uParam1 );
        break;
        case 8:
        bVar8 = sub_15447( uParam1 );
        break;
        case 9:
        bVar8 = sub_15822( uParam1 );
        break;
        case 10:
        bVar8 = sub_16069( uParam1 );
        break;
        case 11:
        bVar8 = sub_16208( uParam1 );
        break;
        case 12:
        bVar8 = sub_16507( uParam1 );
        break;
        case 13:
        bVar8 = sub_16735( uParam1 );
        break;
        case 14:
        bVar8 = sub_17022( uParam1 );
        break;
        case 15:
        bVar8 = sub_17304( uParam1 );
        break;
        case 16:
        bVar8 = sub_17586( uParam1 );
        break;
        case 17:
        bVar8 = sub_17787( uParam1 );
        break;
        case 18:
        bVar8 = sub_17860( uParam1 );
        break;
        case 19:
        bVar8 = sub_18074( uParam1 );
        break;
        case 20:
        bVar8 = sub_18327( uParam1 );
        break;
        case 21:
        bVar8 = sub_18574( uParam1 );
        break;
        case 22:
        bVar8 = sub_18775( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_13435( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_11058( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_19098( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_11752(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_12031( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_12031( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_12031( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_12031( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_12031( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_12031( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_12031( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_12031( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_12031( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_12031( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_12031( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_12031( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_12031( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_12031( iVar3, 0, 3, 1, 0, 0 );
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
        sub_12031( iVar3, 0, sub_13313(), sub_13579(), 0, 0 );
        break;
        default:
        sub_13738( "Friend 1", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Friend 1", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_12031(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_12042( uParam1 );
    sub_12216( uParam0, 0, uParam2 );
    sub_12216( uParam0, 1, uParam3 );
    sub_12216( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_10295();
    return;
}

void sub_12042(unknown uParam0)
{
    ADD_SCORE( sub_5400(), uParam0 );
    sub_12067( uParam0 );
    return;
}

void sub_12067(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1251( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_12216(unknown uParam0, int iParam1, int iParam2)
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
        sub_12373( uParam0 );
    }
    return;
}

void sub_12373(unknown uParam0)
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

int sub_13313()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_13435( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_13435(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_13579()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_13435( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_13738(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_13830(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12031( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_13738( "Contact 2", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 2", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14056(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_12031( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_13738( "Girl 3", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Girl 3", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14206(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_12031( iVar3, 0, sub_13313(), sub_13579(), 0, 0 );
        break;
        default:
        sub_13738( "Friend 4", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Friend 4", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14484(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12031( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12031( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12031( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_12031( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_13738( "Contact 5", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 5", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14787(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_13738( "Contact 7", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 7", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14986(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12031( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_13738( "Contact 7b", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 7b", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15212(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_12031( iVar3, 0, sub_13313(), sub_13579(), 0, 0 );
        break;
        default:
        sub_13738( "Friend 8", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Friend 8", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15447(unknown uParam0)
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
        sub_12031( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_12031( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_12031( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_12031( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_12031( iVar3, 0, sub_13313(), sub_13579(), 0, 0 );
        break;
        default:
        sub_13738( "Friend 9", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Friend 9", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15822(unknown uParam0)
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
        sub_12031( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_12031( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_12031( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_13738( "Contact 10", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_13738( "Contact 10", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16069(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_13738( "Girl 11", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Girl 11", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16208(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12031( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12031( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12031( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_12031( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_12031( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_13738( "Contact 12", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 12", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16507(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12031( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_13738( "Contact 13", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 13", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16735(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_12031( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_12031( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_12031( iVar3, 0, sub_13313(), sub_13579(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_13738( "Friend 15", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Friend 15", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17022(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12031( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12031( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12031( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_13738( "Contact 16", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 16", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17304(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12031( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_12031( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_12031( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_13738( "Contact 18", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 18", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17586(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_13738( "Contact 19", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 19", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17787(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_13738( "Girl 20", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17860(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_13738( "Contact 21", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 21", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18074(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12031( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12031( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_13738( "Contact 22", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 22", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18327(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_12031( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12031( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12031( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_13738( "Contact 24", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 24", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18574(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12031( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12031( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12031( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_13738( "Contact 25", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13738( "Contact 25", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18775(unknown uParam0)
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
        sub_12031( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_13738( "Girl 26", 1 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_13738( "Girl 26", 0 );
        sub_12031( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_19098(int iParam0, int iParam1)
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
    if (sub_19146( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_19877( iParam1 );
    }
    return;
}

int sub_19146(int iParam0, int iParam1)
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
            sub_19286( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_19286(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_19468( 0 );
    return;
}

void sub_19468(boolean bParam0)
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
        sub_19723();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_19723()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_19877(int iParam0)
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
        sub_20210( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_20210( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_20210( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_20210( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_20210( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_20210( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_20210( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_20210( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_20210( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_20210( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_20210( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_20210( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_20210( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_20210( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_20210( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_20210( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_20210( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_20210( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_20210( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_20210(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_20920(unknown uParam0, unknown uParam1)
{
    sub_20939( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_20939(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_21350()
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

int sub_21435(int iParam0, int iParam1)
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

void sub_21492(unknown uParam0)
{
    sub_638();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_21531(unknown uParam0)
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

void sub_21639()
{
    sub_21648();
    return;
}

void sub_21648()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_21727()
{
    sub_21648();
    return;
}

void sub_21767()
{
    sub_21648();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_21958()
{
    int iVar2;

    iVar2 = sub_10143();
    if (((iVar2 == 4) || (iVar2 == 3)) || (iVar2 == 5))
    {
        if (sub_22028( "www.love-meet.net/profile.html", 1, 0 ))
        {
            if (NOT l_U584)
            {
                PRINT_HELP( "DAN4_16" );
                l_U584 = 1;
            }
        }
        else if (sub_22052( "www.love-meet.net/maleProfiles.html" ))
        {
            if (NOT l_U582)
            {
                if (NOT l_U584)
                {
                    PRINT_HELP( "DAN4_15" );
                    l_U582 = 1;
                    SETTIMERB( 0 );
                }
            }
            else if (NOT l_U583)
            {
                if (TIMERB() >= 8000)
                {
                    if (IS_USING_CONTROLLER())
                    {
                        PRINT_HELP( "DAN4_15b" );
                    }
                    else
                    {
                        PRINT_HELP( "DAN4_15bPC" );
                    }
                    l_U583 = 1;
                }
            }
        }
    }
    return;
}

int sub_22028(unknown uParam0, unknown uParam1, int iParam2)
{
    if (sub_22041( uParam0, uParam1 ))
    {
        if (g_U857._fU232._fU64[1] == iParam2)
        {
            return 1;
        }
    }
    return 0;
}

int sub_22041(unknown uParam0, int iParam1)
{
    if (sub_22052( uParam0 ))
    {
        if (g_U857._fU232._fU64[0] == iParam1)
        {
            return 1;
        }
    }
    return 0;
}

void sub_22052(unknown uParam0)
{
    return COMPARE_STRING( uParam0, ref g_U857._fU232._fU0 );
}

void sub_22419(unknown uParam0)
{
    return g_U1413[uParam0];
}
