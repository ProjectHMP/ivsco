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
    l_U481 = -1;
    l_U489 = {0.00000000, 0.00000000, 0.00000000};
    l_U492 = 2.50000000;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;
    l_U500 = 0;
    l_U501 = 1;
    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 1;
    l_U507 = 0;
    l_U508 = 0;
    l_U509 = 0;
    l_U510 = 0;
    l_U511 = 0;
    l_U512 = 0;
    l_U513 = 0;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 1;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U549 = 0;
    l_U552 = g_U10981[0]._fU40[1];
    l_U562 = 0;
    l_U573 = 5.00000000;
    l_U574 = 1.00000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_345();
        g_U10981[0]._fU40[1] = l_U552;
        sub_2477();
    }
    SET_MISSION_FLAG( 1 );
    WAIT( 0 );
    while (l_U501)
    {
        WAIT( 0 );
        switch (l_U497)
        {
            case 0:
            sub_5147();
            break;
            case 1:
            sub_5987();
            break;
            case 2:
            sub_7278();
            break;
            case 3:
            sub_15157();
            break;
            case 4:
            sub_21067();
            break;
            case 5:
            sub_23665();
            break;
            case 6:
            sub_27281();
            break;
            case 7:
            sub_44750();
            break;
            case 8:
            sub_50077();
            break;
            default: break;
        }
        sub_50144();
    }
    sub_2477();
    return;
}

void sub_345()
{
    sub_354();
    return;
}

void sub_354()
{
    int iVar2;

    iVar2 = 0;
    sub_368( iVar2 );
    sub_1544( iVar2 );
    return;
}

void sub_368(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_412();
        sub_573();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_681();
            sub_720();
        }
    }
    sub_796();
    sub_897();
    uVar5 = sub_1010( uParam0 );
    sub_1451( uVar5, 0 );
    return;
}

void sub_412()
{
    sub_426( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_526();
    }
    return;
}

void sub_426(int iParam0)
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

void sub_526()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_573()
{
    sub_582();
    return;
}

void sub_582()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_681()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_720()
{
    sub_729();
    return;
}

void sub_729()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_796()
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

void sub_897()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_919();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_919()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1010(unknown uParam0)
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
    sub_1409( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1409(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1451(int iParam0, boolean bParam1)
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

void sub_1544(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1553();
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
        sub_2328();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1553()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1591( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1591( 1, g_U569[I] )) != 0)
            {
                sub_1877( I );
            }
        }
    }
    if (NOT sub_2043())
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

int sub_1591(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1877(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1962( g_U569 - 1 );
    return;
}

void sub_1962(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2043()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1591( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2328()
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

void sub_2477()
{
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U522 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U523 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U524 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U525 );
    REMOVE_BLIP( l_U526 );
    REMOVE_BLIP( l_U527 );
    REMOVE_BLIP( l_U528 );
    REMOVE_BLIP( l_U529 );
    REMOVE_BLIP( l_U530 );
    REMOVE_BLIP( l_U531 );
    sub_2672( 6, 0 );
    if (DOES_BLIP_EXIST( g_U10324[6]._fU32 ))
    {
        SET_ROUTE( g_U10324[6]._fU32, 0 );
    }
    REMOVE_ANIMS( "missroman3" );
    CLEAR_SEQUENCE_TASK( l_U563 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U554 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U555 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U556 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U557 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 987.48960000, -558.01200000, 12.49300000, 991.48960000, -554.01200000, 16.49300000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 988.66020000, -469.63120000, 14.17140000, 992.66020000, -465.63120000, 18.17140000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 921.77580000, 142.72350000, 33.50930000, 925.77580000, 146.72350000, 37.50930000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 939.76010000, 243.48840000, 28.91280000, 943.76010000, 247.48840000, 24.91280000 );
    g_U8356 = 0;
    sub_4837( ref l_U565, 0 );
    sub_4961();
    FLUSH_SCENARIO_BLOCKING_AREAS();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2672(unknown uParam0, unknown uParam1)
{
    g_U10133._fU280[uParam0] = uParam1;
    sub_2696();
    return;
}

void sub_2696()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_2724( 13 );
        if ((sub_2769( 13, iVar3 )) AND (g_U9932[g_U9999[I]._fU0]._fU0))
        {
            sub_2870( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_3054( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_2724( 11 );
        if ((sub_2769( 11, iVar3 )) AND (g_U9932[g_U10090[I]._fU0]._fU0))
        {
            sub_2870( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_3054( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_3248( I );
        if ((sub_2769( g_U10324[I]._fU12, iVar3 )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            sub_2870( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_3556( I );
        }
        else
        {
            sub_3054( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_3785();
    return;
}

int sub_2724(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_2769(unknown uParam0, boolean bParam1)
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

void sub_2870(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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

void sub_3054(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_3248(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_3290( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_2724( g_U10324[uParam0]._fU12 ))
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

int sub_3290(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_3556(unknown uParam0)
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

void sub_3785()
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
    bVar3 = sub_2724( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_3830( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_2724( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_3830( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((sub_3248( I )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
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
        bVar3 = sub_3248( I );
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
        sub_3830( g_U10324[I]._fU32, bVar3 );
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
        sub_3830( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_4239() )))
        {
            GET_CHAR_COORDINATES( sub_4239(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_4357( uVar7, g_U9943[I]._fU8 );
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
                sub_3830( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_3830(unknown uParam0, boolean bParam1)
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

void sub_4239()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4357(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_4837(int iParam0, unknown uParam1)
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

void sub_4961()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_5147()
{
    PROCESS_MISSION_DELETION_LIST();
    g_U64723 = 0;
    l_U556 = -276900515;
    l_U554 = -1040287406;
    l_U555 = -1080659212;
    l_U557 = -1932515764;
    if (NOT l_U517)
    {
        l_U532 = {934.41860000, 164.70570000, 35.53200000};
    }
    else
    {
        l_U532 = {928.57100000, 175.60100000, 34.84100000};
    }
    l_U535 = {995.12800000, -544.03400000, 14.19900000};
    l_U538 = {893.67100000, -442.88300000, 16.76020000};
    l_U545 = {999.34740000, -540.53420000, 13.90460000};
    l_U548 = 186.63510000;
    l_U541 = {999.41850000, -541.68240000, 13.88500000};
    l_U544 = 1.29170000;
    SET_CURRENT_CHAR_WEAPON( sub_4239(), 0, 0 );
    LOAD_ADDITIONAL_TEXT( "PICKMAL", 0 );
    sub_5418( "roman3" );
    sub_5596( "R3AUD" );
    LOAD_ADDITIONAL_TEXT( "R3AUD", 6 );
    sub_5739( 0, sub_4239(), "NIKO", 0 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 1, 0.00000000 );
    l_U508 = 0;
    l_U497 = 1;
    l_U498 = 0;
    return;
}

void sub_5418(unknown uParam0)
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

void sub_5596(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_5615();
    return;
}

void sub_5615()
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

void sub_5739(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5823( "\n PED NUMBER ", uParam0 );
    sub_5863( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5823(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5863(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5987()
{
    boolean bVar2;

    switch (l_U498)
    {
        case 0:
        CLEAR_AREA( 818.99000000, -263.77000000, 15.43000000, 10.00000000, 1 );
        if (g_U9893._fU24)
        {
            l_U498 = 1;
            ENABLE_SCENE_STREAMING( 0 );
            START_CUTSCENE_NOW( "Rom3_a" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "Rom3_a" );
        }
        else
        {
            CLEAR_CHAR_TASKS( sub_4239() );
            SET_CHAR_COORDINATES( sub_4239(), 812.33600000, -260.37920000, 14.33780000 );
            SET_CHAR_HEADING( sub_4239(), 180.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U498 = 9;
        }
        break;
        case 1:
        bVar2 = false;
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            if (NOT bVar2)
            {
                CLEAR_CHAR_TASKS( sub_4239() );
                SET_CHAR_COORDINATES( sub_4239(), 812.33600000, -260.37920000, 14.33780000 );
                SET_CHAR_HEADING( sub_4239(), 180.00000000 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                bVar2 = true;
            }
            WAIT( 0 );
        }
        ENABLE_SCENE_STREAMING( 1 );
        l_U498 = 9;
        break;
        case 2: break;
        case 3: break;
        case 9:
        CLEAR_CHAR_TASKS( sub_4239() );
        SET_CHAR_COORDINATES( sub_4239(), 812.33600000, -260.37920000, 14.33780000 );
        SET_CHAR_HEADING( sub_4239(), 36.45850000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        CLEAR_AREA( 808.86000000, -265.03120000, 14.33780000, 10.00000000, 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4239(), 0 );
        CLEAR_PRINTS();
        sub_6536();
        CLEAR_AREA( 810.20500000, -258.57430000, 14.33780000, 15.00000000, 0 );
        CREATE_CAR( l_U557, 810.20500000, -258.57430000, 14.33780000, ref l_U524, 1 );
        CHANGE_CAR_COLOUR( l_U524, 0, 1 );
        SET_EXTRA_CAR_COLOURS( l_U524, 1, 0 );
        SET_VEH_HAS_STRONG_AXLES( l_U524, 1 );
        SET_CAR_HEADING( l_U524, 352.02370000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U524 );
        SET_VEHICLE_DIRT_LEVEL( l_U524, 15.90000000 );
        ADD_BLIP_FOR_CAR( l_U524, ref l_U526 );
        SET_BLIP_AS_FRIENDLY( l_U526, 1 );
        SUPPRESS_CAR_MODEL( l_U557 );
        ADD_CAR_TO_MISSION_DELETION_LIST( l_U524 );
        LOAD_SCENE( 812.33600000, -260.37920000, 14.33780000 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( sub_7098(), 1 );
        PRINT( "PKMAL_07", 7500, 3 );
        GET_GAME_TIMER( ref l_U561 );
        SWITCH_ROADS_OFF( 987.48960000, -558.01200000, 12.49300000, 991.48960000, -554.01200000, 16.49300000 );
        SWITCH_ROADS_OFF( 988.66020000, -469.63120000, 14.17140000, 992.66020000, -465.63120000, 18.17140000 );
        l_U502 = 0;
        l_U497 = 2;
        break;
    }
    return;
}

void sub_6536()
{
    REQUEST_MODEL( l_U554 );
    REQUEST_MODEL( l_U555 );
    REQUEST_MODEL( l_U557 );
    LOAD_ALL_OBJECTS_NOW();
    while (((NOT (HAS_MODEL_LOADED( l_U554 ))) || (NOT (HAS_MODEL_LOADED( l_U555 )))) || (NOT (HAS_MODEL_LOADED( l_U557 ))))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "missroman3" );
    REQUEST_ANIMS( "MISSPASS" );
    LOAD_ALL_OBJECTS_NOW();
    while ((NOT (HAVE_ANIMS_LOADED( "missroman3" ))) || (NOT (HAVE_ANIMS_LOADED( "MISSPASS" ))))
    {
        WAIT( 0 );
    }
    ADD_SCENARIO_BLOCKING_AREA( 1008.87800000, -565.63050000, 23.00620000, 1079.29100000, -533.44740000, 39.99040000 );
    ADD_SCENARIO_BLOCKING_AREA( 807.33600000, -265.37920000, 12.33790000, 817.33600000, -255.37920000, 16.33790000 );
    return;
}

void sub_7098()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_7278()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    boolean bVar7;

    if (IS_VEH_DRIVEABLE( l_U524 ))
    {
        if (NOT (CHECK_STUCK_TIMER( l_U524, 2, 30000 )))
        {
            if (NOT (CHECK_STUCK_TIMER( l_U524, 1, 40000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( l_U524, 0, 5000 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_4239(), l_U524 ))
                    {
                        if (NOT l_U502)
                        {
                            REMOVE_BLIP( l_U526 );
                            ADD_BLIP_FOR_COORD( l_U535._fU0, l_U535._fU4, l_U535._fU8, ref l_U530 );
                            SET_ROUTE( l_U530, 1 );
                            CLEAR_PRINTS();
                            PRINT( "PL_TASK1", 7500, 3 );
                            if (NOT l_U518)
                            {
                                l_U518 = 1;
                            }
                            l_U502 = 1;
                        }
                        else if (IS_CAR_UPRIGHT( l_U524 ))
                        {
                            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), l_U535._fU0, l_U535._fU4, 15.63200000, 2.50000000, 2.50000000, 2.00000000, 1 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), l_U535._fU0, l_U535._fU4, 15.63200000, 4.00000000, 4.00000000, 2.00000000, 0 )))
                            {
                                if (NOT l_U521)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), l_U535._fU0, l_U535._fU4, 15.63200000, 2.50000000, 2.50000000, 2.00000000, 0 ))
                                    {
                                        sub_7699();
                                        l_U521 = 1;
                                    }
                                }
                                if (NOT l_U511)
                                {
                                    if (IS_PLAYER_PRESSING_HORN( sub_7098() ))
                                    {
                                        l_U511 = 1;
                                        GET_GAME_TIMER( ref l_U560 );
                                    }
                                    else if (NOT l_U508)
                                    {
                                        CLEAR_HELP();
                                        PRINT_HELP_FOREVER( "PKMAL_18" );
                                        l_U508 = 1;
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref l_U559 );
                                    l_U558 = l_U559 - l_U560;
                                    if ((l_U558 >= 3000) || (NOT (IS_PLAYER_PRESSING_HORN( sub_7098() ))))
                                    {
                                        CLEAR_HELP();
                                        CLEAR_WANTED_LEVEL( sub_7098() );
                                        SET_ROUTE( l_U530, 0 );
                                        REMOVE_BLIP( l_U530 );
                                        if (IS_VEH_DRIVEABLE( l_U524 ))
                                        {
                                            SET_CAR_AS_MISSION_CAR( l_U524 );
                                        }
                                        if (NOT (IS_CHAR_INJURED( l_U523 )))
                                        {
                                            TASK_PLAY_ANIM( l_U523, "michelle_horn", "missroman3", 1000.00000000, 0, 0, 0, 0, -1 );
                                        }
                                        if (NOT (IS_CHAR_INJURED( l_U522 )))
                                        {
                                            TASK_PLAY_ANIM( l_U522, "MALLORY_HORN", "missroman3", 1000.00000000, 0, 0, 0, 0, -1 );
                                        }
                                        SET_PLAYER_CONTROL( sub_7098(), 0 );
                                        bVar7 = false;
                                        while (NOT bVar7)
                                        {
                                            if (NOT (IS_CHAR_INJURED( l_U523 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( l_U523, 80, ref l_U564 );
                                                if (l_U564 == 7)
                                                {
                                                    if (NOT (IS_CHAR_INJURED( l_U522 )))
                                                    {
                                                        GET_SCRIPT_TASK_STATUS( l_U522, 80, ref l_U564 );
                                                        if (l_U564 == 7)
                                                        {
                                                            bVar7 = true;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        bVar7 = true;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                bVar7 = true;
                                            }
                                            WAIT( 0 );
                                        }
                                        l_U506 = 1;
                                        l_U509 = 0;
                                        l_U498 = 0;
                                        l_U497 = 3;
                                    }
                                }
                            }
                            else if (l_U508)
                            {
                                l_U521 = 0;
                                l_U511 = 0;
                                l_U508 = 0;
                                CLEAR_HELP();
                            }
                            if (NOT l_U515)
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (IS_GAME_IN_CONTROL_OF_MUSIC())
                                    {
                                        sub_8576( "PKMAL_H", 1, 7500 );
                                        l_U515 = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (l_U508)
                    {
                        l_U508 = 0;
                        CLEAR_HELP();
                    }
                    if (l_U502)
                    {
                        SET_ROUTE( l_U530, 0 );
                        REMOVE_BLIP( l_U530 );
                        ADD_BLIP_FOR_CAR( l_U524, ref l_U526 );
                        SET_BLIP_AS_FRIENDLY( l_U526, 1 );
                        CLEAR_PRINTS();
                        PRINT( "PL_TASK2", 7500, 3 );
                        l_U502 = 0;
                    }
                }
                else
                {
                    l_U499 = 0;
                    fVar6 = GET_ENGINE_HEALTH( l_U524 );
                    if (fVar6 > 0.00000000)
                    {
                        SET_ENGINE_HEALTH( l_U524, 0.00000000 );
                    }
                    sub_9209();
                }
            }
            else
            {
                l_U499 = 0;
                fVar6 = GET_ENGINE_HEALTH( l_U524 );
                if (fVar6 > 0.00000000)
                {
                    SET_ENGINE_HEALTH( l_U524, 0.00000000 );
                }
                sub_9209();
            }
        }
        else
        {
            l_U499 = 0;
            fVar6 = GET_ENGINE_HEALTH( l_U524 );
            if (fVar6 > 0.00000000)
            {
                SET_ENGINE_HEALTH( l_U524, 0.00000000 );
            }
            sub_9209();
        }
        if (sub_10296( l_U524 ))
        {
            l_U499 = 1;
            sub_9209();
        }
    }
    else
    {
        l_U499 = 0;
        sub_9209();
    }
    if (NOT l_U507)
    {
        if (IS_PLAYER_PLAYING( sub_7098() ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), l_U541._fU0, l_U541._fU4, l_U541._fU8, 60.00000000, 60.00000000, 4.00000000, 0 ))
            {
                CLEAR_AREA_OF_CARS( l_U541._fU0, l_U541._fU4, l_U541._fU8, 5.00000000 );
                sub_10661( 26, ref l_U522, l_U541._fU0, l_U541._fU4, l_U541._fU8, l_U544 );
                ADD_PED_TO_MISSION_DELETION_LIST( l_U522, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U522, 0, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U522, 7, 0, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U522, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U522, 1 );
                ALLOW_REACTION_ANIMS( l_U522, 1 );
                CREATE_CHAR( 26, l_U555, l_U545._fU0, l_U545._fU4, l_U545._fU8, ref l_U523, 1 );
                ADD_PED_TO_MISSION_DELETION_LIST( l_U523, 0 );
                SET_CHAR_HEADING( l_U523, l_U548 );
                SET_CHAR_NEVER_TARGETTED( l_U523, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U523, 1 );
                ALLOW_REACTION_ANIMS( l_U523, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U523, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U522, 1 );
                SET_CHAR_MAX_TIME_IN_WATER( l_U523, 10.00000000 );
                SET_CHAR_MAX_TIME_UNDERWATER( l_U523, 10.00000000 );
                SET_CHAR_MAX_TIME_IN_WATER( l_U522, 10.00000000 );
                SET_CHAR_MAX_TIME_UNDERWATER( l_U522, 10.00000000 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U523, 23 );
                SET_CHAR_RELATIONSHIP( l_U523, 1, 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U522, 23 );
                SET_CHAR_RELATIONSHIP( l_U522, 1, 0 );
                GET_CHAR_HEALTH( l_U523, ref l_U550 );
                GET_CHAR_HEALTH( l_U522, ref l_U551 );
                SET_PED_DONT_DO_EVASIVE_DIVES( l_U523, 1 );
                SET_PED_DONT_DO_EVASIVE_DIVES( l_U522, 1 );
                sub_5739( 1, l_U522, "MALLORIE", 0 );
                sub_5739( 2, l_U523, "MICHELLE", 0 );
                STOP_PED_SPEAKING( l_U523, 1 );
                OPEN_SEQUENCE_TASK( ref l_U563 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U523 );
                TASK_PLAY_ANIM( 0, "mallory_chat", "missroman3", 12.00000000, 1, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U563 );
                TASK_PERFORM_SEQUENCE( l_U522, l_U563 );
                CLEAR_SEQUENCE_TASK( l_U563 );
                OPEN_SEQUENCE_TASK( ref l_U563 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U522 );
                TASK_PLAY_ANIM( 0, "michelle_chat", "missroman3", 12.00000000, 1, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U563 );
                TASK_PERFORM_SEQUENCE( l_U523, l_U563 );
                CLEAR_SEQUENCE_TASK( l_U563 );
                TASK_LOOK_AT_CHAR( sub_4239(), l_U523, 99999, 0 );
                l_U507 = 1;
            }
        }
    }
    else if (IS_PLAYER_PLAYING( sub_7098() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), l_U541._fU0, l_U541._fU4, l_U541._fU8, 62.00000000, 62.00000000, 4.00000000, 0 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U522 )))
            {
                DELETE_CHAR( ref l_U522 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U522 );
            if (NOT (IS_CHAR_DEAD( l_U523 )))
            {
                DELETE_CHAR( ref l_U523 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U523 );
            TASK_CLEAR_LOOK_AT( sub_4239() );
            l_U507 = 0;
        }
        else if (NOT (IS_CHAR_INJURED( l_U522 )))
        {
            if (IS_CHAR_INJURED( l_U523 ))
            {
                CLEAR_PRINTS();
                l_U499 = 4;
                sub_9209();
            }
            else
            {
                GET_CHAR_HEALTH( l_U523, ref iVar2 );
                iVar4 = l_U550 - iVar2;
                GET_CHAR_HEALTH( l_U522, ref iVar3 );
                iVar5 = l_U551 - iVar3;
                if (iVar4 >= 50)
                {
                    l_U499 = 6;
                    sub_9209();
                }
                if (iVar5 >= 50)
                {
                    l_U499 = 7;
                    sub_9209();
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U522, l_U541._fU0, l_U541._fU4, l_U541._fU8, 3.00000000, 3.00000000, 3.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U522, 29, ref l_U564 );
                    if (l_U564 == 7)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U563 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U541._fU0, l_U541._fU4, l_U541._fU8, 2, -1, 2.00000000 );
                        TASK_ACHIEVE_HEADING( 0, l_U544 );
                        CLOSE_SEQUENCE_TASK( l_U563 );
                        TASK_PERFORM_SEQUENCE( l_U522, l_U563 );
                        CLEAR_SEQUENCE_TASK( l_U563 );
                    }
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U523, l_U545._fU0, l_U545._fU4, l_U545._fU8, 3.00000000, 3.00000000, 3.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U523, 29, ref l_U564 );
                    if (l_U564 == 7)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U563 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U545._fU0, l_U545._fU4, l_U545._fU8, 2, -1, 2.00000000 );
                        TASK_ACHIEVE_HEADING( 0, l_U548 );
                        CLOSE_SEQUENCE_TASK( l_U563 );
                        TASK_PERFORM_SEQUENCE( l_U523, l_U563 );
                        CLEAR_SEQUENCE_TASK( l_U563 );
                    }
                }
                GET_SCRIPT_TASK_STATUS( l_U523, 29, ref l_U564 );
                if (NOT (l_U564 == 1))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U522, "missroman3", "mallory_chat" ))
                    {
                        CLEAR_CHAR_TASKS( l_U522 );
                        TASK_LOOK_AT_CHAR( l_U522, sub_4239(), 15000, 0 );
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U523, sub_4239(), 0 ))
                        {
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U523 );
                            SAY_AMBIENT_SPEECH( l_U522, "Vehicle_Attacked", 1, 0, 0 );
                            STOP_PED_SPEAKING( l_U523, 0 );
                            SAY_AMBIENT_SPEECH( l_U523, "Vehicle_Attacked", 1, 0, 0 );
                            STOP_PED_SPEAKING( l_U523, 1 );
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH( l_U522, "Generic_Fuck_off", 1, 0, 0 );
                            STOP_PED_SPEAKING( l_U523, 0 );
                            SAY_AMBIENT_SPEECH( l_U523, "Generic_Fuck_off", 1, 0, 0 );
                            STOP_PED_SPEAKING( l_U523, 1 );
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U522, 29, ref l_U564 );
                    if (NOT (l_U564 == 1))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U523, "missroman3", "michelle_chat" ))
                        {
                            CLEAR_CHAR_TASKS( l_U523 );
                            TASK_LOOK_AT_CHAR( l_U523, sub_4239(), 15000, 0 );
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U522, sub_4239(), 0 ))
                            {
                                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U522 );
                                SAY_AMBIENT_SPEECH( l_U522, "Vehicle_Attacked", 1, 0, 0 );
                                STOP_PED_SPEAKING( l_U523, 0 );
                                SAY_AMBIENT_SPEECH( l_U523, "Vehicle_Attacked", 1, 0, 0 );
                                STOP_PED_SPEAKING( l_U523, 1 );
                            }
                            else
                            {
                                SAY_AMBIENT_SPEECH( l_U522, "Generic_Fuck_off", 1, 0, 0 );
                                STOP_PED_SPEAKING( l_U523, 0 );
                                SAY_AMBIENT_SPEECH( l_U523, "Generic_Fuck_off", 1, 0, 0 );
                                STOP_PED_SPEAKING( l_U523, 1 );
                            }
                        }
                    }
                }
            }
        }
        else if ((NOT (IS_CHAR_DEAD( l_U523 ))) AND (NOT (IS_CHAR_INJURED( l_U523 ))))
        {
            CLEAR_PRINTS();
            l_U499 = 3;
            sub_9209();
        }
        else
        {
            CLEAR_PRINTS();
            l_U499 = 5;
            sub_9209();
        };;;
    }
    return;
}

void sub_7699()
{
    float fVar2;

    if ((IS_CHAR_IN_ANY_CAR( sub_4239() )) || (IS_CHAR_ON_ANY_BIKE( sub_4239() )))
    {
        SET_PLAYER_CONTROL( sub_7098(), 0 );
        GET_CAR_SPEED( l_U524, ref fVar2 );
        while (fVar2 > 0.20000000)
        {
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( l_U524 )))
            {
                GET_CAR_SPEED( l_U524, ref fVar2 );
            }
            LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), l_U535._fU0, l_U535._fU4, 15.63200000, 2.50000000, 2.50000000, 2.00000000, 1 );
            LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), l_U532._fU0, l_U532._fU4, l_U532._fU8, 2.50000000, 2.50000000, 2.50000000, 1 );
        }
        SET_PLAYER_CONTROL( sub_7098(), 1 );
    }
    return;
}

void sub_8576(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_8596( 1, "", -1, uParam0, uParam1, uParam2 );
    return;
}

void sub_8596(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_8638( I );
            sub_8755( uParam5, I );
            switch (I)
            {
                case 0:
                StrCopy( ref g_U9241._fU28[0], uParam1, 16 );
                g_U9241._fU100[0] = uParam2;
                break;
                case 1:
                StrCopy( ref g_U9241._fU28[1], uParam3, 16 );
                g_U9241._fU100[1] = uParam4;
                break;
            }
            g_U9241._fU112[I] = 0;
            if (iParam0 == 2)
            {
                g_U9241._fU148[I] = 3;
            }
            else
            {
                g_U9241._fU148[I] = 1;
            }
            g_U9241._fU136[I] = -1;
            g_U9241._fU124[I] = 0;
        }
    }
    return;
}

void sub_8638(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_8690( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_8690(unknown uParam0)
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

void sub_8755(int iParam0, unknown uParam1)
{
    if (iParam0 == -1)
    {
        g_U9241._fU16[uParam1] = 6000;
    }
    else
    {
        g_U9241._fU16[uParam1] = iParam0;
    }
    return;
}

void sub_9209()
{
    float fVar2;

    REMOVE_BLIP( l_U526 );
    REMOVE_BLIP( l_U527 );
    REMOVE_BLIP( l_U528 );
    REMOVE_BLIP( l_U529 );
    REMOVE_BLIP( l_U530 );
    GET_GAME_TIMER( ref l_U560 );
    TASK_CLEAR_LOOK_AT( sub_4239() );
    l_U497 = 7;
    if ((((l_U499 == 3) || (l_U499 == 4)) || (l_U499 == 6)) || (l_U499 == 7))
    {
        l_U498 = 0;
        l_U506 = 1;
    }
    else if ((l_U499 == 0) || (l_U499 == 1))
    {
        if (((DOES_CHAR_EXIST( l_U523 )) || (DOES_CHAR_EXIST( l_U522 ))) || (l_U499 == 1))
        {
            if (l_U507)
            {
                l_U498 = 0;
                l_U506 = 1;
            }
            else
            {
                l_U498 = 9;
            }
        }
        else
        {
            l_U498 = 9;
        }
        if (NOT (IS_CAR_DEAD( l_U524 )))
        {
            fVar2 = GET_ENGINE_HEALTH( l_U524 );
            if (fVar2 > 0.00000000)
            {
                SET_ENGINE_HEALTH( l_U524, 0.00000000 );
                SET_CAR_ENGINE_ON( l_U524, 0, 1 );
            }
        }
    }
    else if (l_U499 == 8)
    {
        l_U498 = 9;
    };;;
    if (NOT (IS_CHAR_INJURED( l_U523 )))
    {
        CLEAR_CHAR_TASKS( l_U523 );
    }
    if (NOT (IS_CHAR_INJURED( l_U522 )))
    {
        CLEAR_CHAR_TASKS( l_U522 );
    }
    if (sub_9627( l_U565 ))
    {
        sub_4837( ref l_U565, 0 );
    }
    CLEAR_PRINTS();
    CLEAR_HELP();
    switch (l_U499)
    {
        case 0:
        PRINT( "PL_FAIL3", 7500, 1 );
        break;
        case 1:
        PRINT( "PL_FAIL9", 7500, 1 );
        break;
        case 3:
        PRINT( "PL_FAIL1", 7500, 1 );
        break;
        case 4:
        PRINT( "PL_FAIL4", 7500, 1 );
        break;
        case 5:
        PRINT( "PL_FAIL5", 7500, 1 );
        break;
        case 6:
        PRINT( "PL_FAIL6", 7500, 1 );
        break;
        case 7:
        PRINT( "PL_FAIL7", 7500, 1 );
        break;
        case 8:
        PRINT( "PL_FAIL8", 7500, 1 );
        break;
    }
    if (l_U499 == 6)
    {
        l_U499 = 4;
    }
    else if (l_U499 == 7)
    {
        l_U499 = 3;
    }
    return;
}

int sub_9627(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_9739( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9739( "\n speech is not playing" );
    }
    return 0;
}

void sub_9739(unknown uParam0)
{
    return;
}

int sub_10296(unknown uParam0)
{
    int iVar3;

    if (g_U9079 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_4239(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_4239(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_4239(), uParam0, 50.00000000, 50.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref iVar3 );
                    if ((iVar3 - l_U7) >= 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U7 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U7 );
            }
        }
    }
    return 0;
}

void sub_10661(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_10673( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_11383( uParam0, (uParam1^) );
    return;
}

int sub_10673(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_1409( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_11383(unknown uParam0, unknown uParam1)
{
    sub_11395( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_11395(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_11489( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_12033( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_11489(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_12033(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_11489( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_11489( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_11489( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_11489( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_11489( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_11489( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_11489( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_11489( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_11489( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_11489( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_11489( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_11489( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_11489( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_15157()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    int iVar12;

    if (l_U498 > 0)
    {
        if (sub_15178())
        {
            if (NOT l_U506)
            {
                if (sub_9627( l_U565 ))
                {
                    sub_4837( ref l_U565, 0 );
                }
                CLEAR_PRINTS();
                l_U498 = 9;
                l_U509 = 1;
            }
        }
        else
        {
            l_U506 = 0;
        }
    }
    switch (l_U498)
    {
        case 0:
        if (sub_15417( 1, 1 ))
        {
            SET_PLAYER_CONTROL( sub_7098(), 0 );
            CLEAR_WANTED_LEVEL( sub_7098() );
            REQUEST_ANIMS( "MISSPASS" );
            SETTIMERA( 0 );
            CLEAR_AREA_OF_CARS( l_U541._fU0, l_U541._fU4, l_U541._fU8, 10.00000000 );
            GET_CHAR_COORDINATES( sub_4239(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            CLEAR_AREA_OF_CARS( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000 );
            CLEAR_AREA_OF_COPS( uVar2._fU0, uVar2._fU4, uVar2._fU8, 50.00000000 );
            if (NOT l_U507)
            {
                sub_10661( 26, ref l_U522, l_U541._fU0, l_U541._fU4, l_U541._fU8, l_U544 );
                ADD_PED_TO_MISSION_DELETION_LIST( l_U522, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U522, 0, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U522, 7, 0, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U522, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U522, 1 );
                ALLOW_REACTION_ANIMS( l_U522, 1 );
                CREATE_CHAR( 26, l_U555, l_U545._fU0, l_U545._fU4, l_U545._fU8, ref l_U523, 1 );
                ADD_PED_TO_MISSION_DELETION_LIST( l_U523, 0 );
                SET_CHAR_HEADING( l_U523, l_U548 );
                SET_CHAR_NEVER_TARGETTED( l_U523, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U523, 1 );
                ALLOW_REACTION_ANIMS( l_U523, 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U523, 23 );
                SET_CHAR_RELATIONSHIP( l_U523, 1, 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U522, 23 );
                SET_CHAR_RELATIONSHIP( l_U522, 1, 0 );
                SET_CHAR_MAX_TIME_IN_WATER( l_U523, 10.00000000 );
                SET_CHAR_MAX_TIME_UNDERWATER( l_U523, 10.00000000 );
                SET_CHAR_MAX_TIME_IN_WATER( l_U522, 10.00000000 );
                SET_CHAR_MAX_TIME_UNDERWATER( l_U522, 10.00000000 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U523, 0 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U522, 0 );
                SET_PED_DONT_DO_EVASIVE_DIVES( l_U523, 1 );
                SET_PED_DONT_DO_EVASIVE_DIVES( l_U522, 1 );
                sub_5739( 1, l_U522, "MALLORIE", 0 );
                sub_5739( 2, l_U523, "MICHELLE", 0 );
                l_U507 = 1;
            }
            else if (NOT (IS_CHAR_DEAD( l_U522 )))
            {
                CLEAR_CHAR_TASKS( l_U522 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U522, 0 );
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U522, 1003.46800000, -543.29000000, 14.38640000, 10.10000000, 12.40000000, 3.00000000, 0 )))
                {
                    l_U513 = 1;
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U523 )))
            {
                CLEAR_CHAR_TASKS( l_U523 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U523, 0 );
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U523, 1003.46800000, -543.29000000, 14.38640000, 10.10000000, 12.40000000, 3.00000000, 0 )))
                {
                    l_U513 = 1;
                }
            }
            SET_WIDESCREEN_BORDERS( 1 );
            if (l_U513)
            {
                DO_SCREEN_FADE_OUT( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U522 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U522 );
                SET_CHAR_COORDINATES( l_U522, l_U541._fU0, l_U541._fU4, l_U541._fU8 );
                SET_CHAR_HEADING( l_U522, 132.00000000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U523 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U523 );
                SET_CHAR_COORDINATES( l_U523, l_U545._fU0, l_U545._fU4, l_U545._fU8 );
                SET_CHAR_HEADING( l_U523, 132.00000000 );
                STOP_PED_SPEAKING( l_U523, 0 );
            }
            if (l_U513)
            {
                DO_SCREEN_FADE_IN( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
            BEGIN_CAM_COMMANDS( ref l_U572 );
            CREATE_CAM( 14, ref l_U571 );
            if (NOT (IS_CAR_DEAD( l_U524 )))
            {
                SET_CAR_COORDINATES( l_U524, 994.37460000, l_U535._fU4, l_U535._fU8 );
                GET_CAR_HEADING( l_U524, ref fVar11 );
                if ((fVar11 < 90.00000000) || (fVar11 > 270.00000000))
                {
                    SET_CAR_HEADING( l_U524, 0.00000000 );
                    SET_CAM_POS( l_U571, 993.65730000, -544.01180000, 14.91514000 );
                    SET_CAM_ROT( l_U571, 1.26448800, -0.00000000, -80.78612000 );
                    SET_CAM_FOV( l_U571, 45.00000000 );
                }
                else
                {
                    SET_CAR_HEADING( l_U524, 180.00000000 );
                    SET_CAM_POS( l_U571, 992.37770000, -545.87630000, 14.81762000 );
                    SET_CAM_ROT( l_U571, 2.88005300, -0.00000000, -74.54612000 );
                    SET_CAM_FOV( l_U571, 45.00000000 );
                }
                SET_CAR_ON_GROUND_PROPERLY( l_U524 );
            }
            SET_USE_HIGHDOF( 1 );
            SET_CAM_ACTIVE( l_U571, 1 );
            SET_CAM_PROPAGATE( l_U571, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            while (NOT (HAVE_ANIMS_LOADED( "MISSPASS" )))
            {
                REQUEST_ANIMS( "MISSPASS" );
                WAIT( 0 );
            }
            l_U498 = 4;
        }
        break;
        case 4:
        if (sub_17216())
        {
            if (IS_VEH_DRIVEABLE( l_U524 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U563 );
                TASK_LOOK_AT_CHAR( 0, sub_4239(), 99999, 0 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U524, -1.00000000, 0.00000000, 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U524, 1.00000000, 0.00000000, 0.00000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if ((VDIST( l_U541, uVar5 )) < (VDIST( l_U541, uVar8 )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U524, -1, 1 );
                }
                else
                {
                    TASK_STAND_STILL( 0, 500 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U524, -1, 2 );
                }
                CLOSE_SEQUENCE_TASK( l_U563 );
                TASK_PERFORM_SEQUENCE( l_U522, l_U563 );
                CLEAR_SEQUENCE_TASK( l_U563 );
                OPEN_SEQUENCE_TASK( ref l_U563 );
                TASK_LOOK_AT_CHAR( 0, sub_4239(), 99999, 4 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U524, -1, 0 );
                CLOSE_SEQUENCE_TASK( l_U563 );
                TASK_PERFORM_SEQUENCE( l_U523, l_U563 );
                CLEAR_SEQUENCE_TASK( l_U563 );
                CLEAR_PRINTS();
                l_U498 = 5;
            }
            else if (sub_9627( l_U565 ))
            {
                sub_4837( ref l_U565, 0 );
            }
            CLEAR_PRINTS();
            l_U498 = 9;;
        }
        else if (sub_9627( l_U565 ))
        {
            sub_4837( ref l_U565, 0 );
        }
        CLEAR_PRINTS();
        l_U498 = 9;;
        break;
        case 5:
        if (sub_17216())
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4239(), l_U522, 5.00000000, 5.00000000, 2.00000000, 0 ))
            {
                if (sub_18236( "R3_MEET", ref l_U565, 6, 1 ))
                {
                    l_U498 = 6;
                }
            }
        }
        else if (sub_9627( l_U565 ))
        {
            sub_4837( ref l_U565, 0 );
        }
        CLEAR_PRINTS();
        l_U498 = 9;;
        break;
        case 6:
        if (sub_9627( l_U565 ))
        {
            iVar12 = sub_19272( l_U565 );
            if (iVar12 >= 0)
            {
                if (HAVE_ANIMS_LOADED( "MISSPASS" ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U522 )))
                    {
                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U522, "Partial_Wave_Female", "MISSPASS", 8000, 0, 0, 0, 0, -1 );
                    }
                }
                l_U498 = 7;
            }
        }
        else if (HAVE_ANIMS_LOADED( "MISSPASS" ))
        {
            if (NOT (IS_CHAR_INJURED( l_U522 )))
            {
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U522, "Partial_Wave_Female", "MISSPASS", 8000, 0, 0, 0, 0, -1 );
            }
        }
        l_U498 = 7;;
        break;
        case 7:
        if (sub_17216())
        {
            GET_SCRIPT_TASK_STATUS( l_U523, 29, ref l_U564 );
            if (l_U564 == 7)
            {
                GET_SCRIPT_TASK_STATUS( l_U522, 11, ref l_U564 );
                if (l_U564 == 7)
                {
                    if (sub_19639( l_U565 ))
                    {
                        sub_19681( "R3_MEET", ref l_U565, 6, 1 );
                    }
                    l_U498 = 8;
                }
            }
            if (NOT (IS_CAR_DEAD( l_U524 )))
            {
                if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U522, l_U524, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U523, l_U524, 2.00000000, 2.00000000, 2.00000000, 0 )))
                {
                    GET_CAR_HEADING( l_U524, ref fVar11 );
                    if ((fVar11 < 90.00000000) || (fVar11 > 270.00000000))
                    {
                        TASK_CLEAR_LOOK_AT( sub_4239() );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U524, 5.00000000, 7.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        TASK_LOOK_AT_COORD( sub_4239(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 999999, 0 );
                        SET_CAM_POS( l_U571, 993.67500000, -542.52560000, 14.90650000 );
                        SET_CAM_ROT( l_U571, -2.16197800, -0.00000000, -148.23400000 );
                    }
                    else
                    {
                        SET_CAM_POS( l_U571, 996.21620000, -547.08670000, 14.70369000 );
                        SET_CAM_ROT( l_U571, -5.71432100, 0.00000000, 36.14386000 );
                    }
                }
            }
        }
        else if (sub_9627( l_U565 ))
        {
            sub_4837( ref l_U565, 0 );
        }
        CLEAR_PRINTS();
        l_U498 = 9;;
        iVar12 = sub_19272( l_U565 );
        if (iVar12 > 2)
        {
            if (sub_9627( l_U565 ))
            {
                ;
            }
        }
        break;
        case 8:
        l_U498 = 9;
        break;
        case 9:
        TASK_CLEAR_LOOK_AT( sub_4239() );
        if (IS_VEH_DRIVEABLE( l_U524 ))
        {
            FREEZE_CAR_POSITION( l_U524, 0 );
            if (NOT (IS_CHAR_INJURED( l_U522 )))
            {
                CLEAR_CHAR_TASKS( l_U522 );
                TASK_CLEAR_LOOK_AT( l_U522 );
                if (NOT (IS_CHAR_IN_CAR( l_U522, l_U524 )))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U522, l_U524, 2 );
                }
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U522, 1 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U522, 0 );
                GET_PLAYER_GROUP( sub_7098(), ref l_U553 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U522, 23 );
                SET_CHAR_RELATIONSHIP( l_U522, 1, 0 );
                sub_5739( 1, l_U522, "MALLORIE", 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U523 )))
            {
                CLEAR_CHAR_TASKS( l_U523 );
                TASK_CLEAR_LOOK_AT( l_U523 );
                if (NOT (IS_CHAR_IN_CAR( l_U523, l_U524 )))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U523, l_U524, 0 );
                }
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U523, 1 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U523, 0 );
                GET_PLAYER_GROUP( sub_7098(), ref l_U553 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U523, 23 );
                SET_CHAR_RELATIONSHIP( l_U523, 1, 0 );
                sub_5739( 2, l_U523, "MICHELLE", 0 );
            }
            CLOSE_ALL_CAR_DOORS( l_U524 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U571 );
        SET_USE_HIGHDOF( 0 );
        END_CAM_COMMANDS( ref l_U572 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        CLEAR_CHAR_TASKS( sub_4239() );
        if (l_U509)
        {
            ;
        }
        if (IS_PLAYER_PLAYING( sub_7098() ))
        {
            SET_PLAYER_CONTROL( sub_7098(), 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4239(), 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4239(), 0 );
        }
        ADD_BLIP_FOR_COORD( l_U532._fU0, l_U532._fU4, l_U532._fU8, ref l_U529 );
        SET_ROUTE( l_U529, 1 );
        l_U520 = 0;
        l_U519 = 0;
        SWITCH_ROADS_OFF( 921.77580000, 142.72350000, 33.50930000, 925.77580000, 146.72350000, 37.50930000 );
        SWITCH_ROADS_OFF( 939.76010000, 243.48840000, 28.91280000, 943.76010000, 247.48840000, 24.91280000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 987.48960000, -558.01200000, 12.49300000, 991.48960000, -554.01200000, 16.49300000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 988.66020000, -469.63120000, 14.17140000, 992.66020000, -465.63120000, 18.17140000 );
        l_U502 = 1;
        l_U503 = 0;
        l_U504 = 0;
        l_U505 = 1;
        l_U521 = 0;
        l_U497 = 4;
        FLUSH_SCENARIO_BLOCKING_AREAS();
        REMOVE_ANIMS( "MISSPASS" );
        break;
    }
    return;
}

int sub_15178()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_15417(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4239() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4239(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4239() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4239(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4239()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4239() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4239() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_7098() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_7098() )))
    {
        return 0;
    }
    return 1;
}

int sub_17216()
{
    float fVar2;

    if ((NOT (IS_CHAR_DEAD( l_U522 ))) AND (NOT (IS_CHAR_INJURED( l_U522 ))))
    {
        if ((NOT (IS_CHAR_DEAD( l_U523 ))) AND (NOT (IS_CHAR_INJURED( l_U523 ))))
        {
            if (IS_VEH_DRIVEABLE( l_U524 ))
            {
                if (sub_10296( l_U524 ))
                {
                    l_U499 = 1;
                    return 0;
                }
                if (NOT (CHECK_STUCK_TIMER( l_U524, 2, 30000 )))
                {
                    if (NOT (CHECK_STUCK_TIMER( l_U524, 1, 40000 )))
                    {
                        if (NOT (CHECK_STUCK_TIMER( l_U524, 0, 5000 )))
                        {
                            return 1;
                        }
                        else
                        {
                            CLEAR_PRINTS();
                            fVar2 = GET_ENGINE_HEALTH( l_U524 );
                            if (fVar2 > 0.00000000)
                            {
                                SET_ENGINE_HEALTH( l_U524, 0.00000000 );
                            }
                            l_U499 = 0;
                        }
                    }
                    else
                    {
                        CLEAR_PRINTS();
                        fVar2 = GET_ENGINE_HEALTH( l_U524 );
                        if (fVar2 > 0.00000000)
                        {
                            SET_ENGINE_HEALTH( l_U524, 0.00000000 );
                        }
                        l_U499 = 0;
                    }
                }
                else
                {
                    CLEAR_PRINTS();
                    fVar2 = GET_ENGINE_HEALTH( l_U524 );
                    if (fVar2 > 0.00000000)
                    {
                        SET_ENGINE_HEALTH( l_U524, 0.00000000 );
                    }
                    l_U499 = 0;
                }
            }
            else
            {
                CLEAR_PRINTS();
                l_U499 = 0;
            }
        }
        else
        {
            CLEAR_PRINTS();
            l_U499 = 4;
        }
    }
    else if ((NOT (IS_CHAR_DEAD( l_U523 ))) AND (NOT (IS_CHAR_INJURED( l_U523 ))))
    {
        CLEAR_PRINTS();
        l_U499 = 3;
    }
    else
    {
        CLEAR_PRINTS();
        l_U499 = 5;
    }
    return 0;
}

void sub_18236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_18259( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_18259(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_18313( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_18313(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_18335( iParam1 )))
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
    sub_19015( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_18335(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9739( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_9739( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_9739( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_19015(int iParam0, int iParam1)
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

void sub_19272(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_9627( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_19639(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_19681(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_19704( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_19704(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_18313( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_21067()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (sub_17216())
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_4239(), l_U524 ))
        {
            if (NOT l_U502)
            {
                REMOVE_BLIP( l_U526 );
                l_U502 = 1;
            }
            else if (IS_CHAR_IN_CAR( l_U522, l_U524 ))
            {
                if (l_U504)
                {
                    REMOVE_BLIP( l_U527 );
                    l_U504 = 0;
                    if (l_U503)
                    {
                        CLEAR_PRINTS();
                        PRINT( "PKMAL_04", 7500, 3 );
                    }
                }
            }
            else if (NOT l_U504)
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4239(), l_U522, 10.00000000, 10.00000000, 3.00000000, 0 )))
                {
                    if (l_U505)
                    {
                        REMOVE_BLIP( l_U529 );
                        l_U505 = 0;
                    }
                    ADD_BLIP_FOR_CHAR( l_U522, ref l_U527 );
                    SET_BLIP_AS_FRIENDLY( l_U527, 1 );
                    if (l_U503 == 1)
                    {
                        CLEAR_PRINTS();
                        PRINT( "PKMAL_05", 7500, 3 );
                    }
                    else
                    {
                        CLEAR_PRINTS();
                        PRINT( "PKMAL_03", 7500, 3 );
                    }
                    l_U504 = 1;
                }
            }
            if (NOT (IS_CAR_ON_FIRE( l_U524 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U522, l_U524 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U522, 11, ref l_U564 );
                    if (l_U564 == 7)
                    {
                        GET_CHAR_COORDINATES( l_U522, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U524, -1.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U524, 1.00000000, 0.00000000, 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                        if ((VDIST( uVar8, uVar2 )) < (VDIST( uVar8, uVar5 )))
                        {
                            TASK_ENTER_CAR_AS_PASSENGER( l_U522, l_U524, -1, 1 );
                        }
                        else
                        {
                            TASK_ENTER_CAR_AS_PASSENGER( l_U522, l_U524, -1, 2 );
                        }
                    }
                }
            }
            if (IS_CHAR_IN_CAR( l_U523, l_U524 ))
            {
                if (l_U503)
                {
                    REMOVE_BLIP( l_U528 );
                    l_U503 = 0;
                    if (l_U504)
                    {
                        CLEAR_PRINTS();
                        PRINT( "PKMAL_03", 7500, 3 );
                    }
                }
            }
            else if (NOT l_U503)
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4239(), l_U523, 10.00000000, 10.00000000, 3.00000000, 0 )))
                {
                    if (l_U505)
                    {
                        REMOVE_BLIP( l_U529 );
                        l_U505 = 0;
                    }
                    ADD_BLIP_FOR_CHAR( l_U523, ref l_U528 );
                    SET_BLIP_AS_FRIENDLY( l_U528, 1 );
                    if (l_U504 == 1)
                    {
                        CLEAR_PRINTS();
                        PRINT( "PKMAL_05", 7500, 3 );
                    }
                    else
                    {
                        CLEAR_PRINTS();
                        PRINT( "PKMAL_04", 7500, 3 );
                    }
                    l_U503 = 1;
                }
            }
            if (NOT (IS_CAR_ON_FIRE( l_U524 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U523, l_U524 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U523, 11, ref l_U564 );
                    if (l_U564 == 7)
                    {
                        TASK_ENTER_CAR_AS_PASSENGER( l_U523, l_U524, -1, 0 );
                    }
                }
            }
            if ((NOT l_U503) AND (NOT l_U504))
            {
                if (NOT l_U505)
                {
                    if ((IS_CHAR_IN_CAR( l_U523, l_U524 )) AND (IS_CHAR_IN_CAR( l_U522, l_U524 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U532._fU0, l_U532._fU4, l_U532._fU8, ref l_U529 );
                        SET_ROUTE( l_U529, 1 );
                        l_U505 = 1;
                        CLEAR_PRINTS();
                        PRINT( "PKMAL_01", 7500, 3 );
                        SETTIMERA( 0 );
                    }
                }
                else if (NOT (CHECK_STUCK_TIMER( l_U524, 0, 100 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), l_U532._fU0, l_U532._fU4, l_U532._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                    {
                        if (NOT l_U521)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), l_U532._fU0, l_U532._fU4, l_U532._fU8, 2.50000000, 2.50000000, 2.00000000, 0 ))
                            {
                                sub_7699();
                                l_U521 = 1;
                            }
                        }
                        if (sub_15417( 1, 1 ))
                        {
                            SET_ROUTE( l_U529, 0 );
                            REMOVE_BLIP( l_U529 );
                            l_U498 = 0;
                            l_U497 = 5;
                            l_U506 = 1;
                            l_U509 = 0;
                        }
                    }
                    else if (NOT l_U519)
                    {
                        if (NOT (sub_9627( l_U565 )))
                        {
                            if (NOT l_U520)
                            {
                                sub_18236( "R3_INTRO", ref l_U565, 6, 1 );
                                l_U520 = 1;
                            }
                            else
                            {
                                PRINT( "PKMAL_01", 7500, 3 );
                                SETTIMERA( 0 );
                                l_U519 = 1;
                                l_U516 = 1;
                            }
                        }
                    }
                    else if ((NOT IS_MESSAGE_BEING_DISPLAYED()) || (TIMERA() >= 3000))
                    {
                        if (NOT l_U516)
                        {
                            if (NOT (sub_9627( l_U565 )))
                            {
                                if (NOT l_U510)
                                {
                                    if (g_U64717 == 0)
                                    {
                                        if (sub_18236( "R3_BANT1", ref l_U565, 6, 1 ))
                                        {
                                            l_U510 = 1;
                                            g_U64717++;
                                        }
                                    }
                                    else if (g_U64717 == 1)
                                    {
                                        if (sub_18236( "R3_BANT2", ref l_U565, 6, 1 ))
                                        {
                                            l_U510 = 1;
                                            g_U64717++;
                                        }
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( l_U522, "LISTEN_TO_RADIO", 0, 0, 0 );
                                        l_U510 = 1;
                                        if (g_U64717 < 3)
                                        {
                                            g_U64717++;
                                        }
                                    }
                                    TASK_LOOK_AT_CHAR( l_U522, sub_4239(), -2, 0 );
                                    TASK_LOOK_AT_CHAR( l_U523, sub_4239(), -2, 0 );
                                }
                                else if (g_U64717 < 3)
                                {
                                    if (sub_19639( l_U565 ))
                                    {
                                        if (g_U64717 < 2)
                                        {
                                            sub_19681( "R3_BANT1", ref l_U565, 6, 1 );
                                        }
                                        else
                                        {
                                            sub_19681( "R3_BANT2", ref l_U565, 6, 1 );
                                        }
                                    }
                                }
                            }
                        }
                        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            l_U516 = 0;
                        }
                    };;;
                }
            }
        }
        else if (l_U502)
        {
            if (l_U505)
            {
                SET_ROUTE( l_U529, 0 );
                REMOVE_BLIP( l_U529 );
                l_U505 = 0;
            }
            if (l_U503)
            {
                REMOVE_BLIP( l_U528 );
                l_U503 = 0;
            }
            if (l_U504)
            {
                REMOVE_BLIP( l_U527 );
                l_U504 = 0;
            }
            ADD_BLIP_FOR_CAR( l_U524, ref l_U526 );
            SET_BLIP_AS_FRIENDLY( l_U526, 1 );
            CLEAR_PRINTS();
            PRINT( "PL_TASK2", 7500, 3 );
            if (NOT (IS_CHAR_INJURED( l_U522 )))
            {
                SAY_AMBIENT_SPEECH( l_U522, "GET_IN_CAR", 1, 1, 0 );
            }
            if (sub_9627( l_U565 ))
            {
                sub_23206( ref l_U565 );
            }
            l_U502 = 0;
        }
    }
    else
    {
        sub_9209();
    }
    return;
}

int sub_23206(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_9739( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_9739( "\n CONVERSATION PAUSED AT LINE " );
            sub_23362( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_9739( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_9739( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_9739( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_23362(unknown uParam0)
{
    return;
}

void sub_23665()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
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

    if (l_U498 > 0)
    {
        if (sub_15178())
        {
            if (NOT l_U506)
            {
                if (sub_9627( l_U565 ))
                {
                    sub_4837( ref l_U565, 0 );
                }
                CLEAR_PRINTS();
                DO_SCREEN_FADE_OUT( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U522 )))
                {
                    DELETE_CHAR( ref l_U522 );
                }
                if (NOT (IS_CHAR_DEAD( l_U523 )))
                {
                    DELETE_CHAR( ref l_U523 );
                }
                if (NOT (IS_CHAR_DEAD( l_U522 )))
                {
                    DELETE_CHAR( ref l_U522 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U522 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U554 );
                }
                if (NOT (IS_CHAR_DEAD( l_U523 )))
                {
                    DELETE_CHAR( ref l_U523 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U523 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U555 );
                }
                l_U509 = 1;
                l_U498 = 9;
            }
        }
        else
        {
            l_U506 = 0;
        }
    }
    switch (l_U498)
    {
        case 0:
        if (IS_SCRIPTED_CONVERSATION_ONGOING())
        {
            sub_4837( ref l_U565, 0 );
        }
        CLEAR_WANTED_LEVEL( sub_7098() );
        CLEAR_AREA_OF_CARS( 919.77670000, 189.29570000, 33.53680000, 10.00000000 );
        CLEAR_AREA_OF_COPS( 919.77670000, 189.29570000, 33.53680000, 50.00000000 );
        SET_PLAYER_CONTROL( sub_7098(), 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4239(), 1 );
        if (NOT (IS_CHAR_DEAD( l_U523 )))
        {
            TASK_CLEAR_LOOK_AT( l_U523 );
            if (IS_GROUP_MEMBER( l_U523, l_U553 ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U523 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U522 )))
        {
            TASK_CLEAR_LOOK_AT( l_U522 );
            if (IS_GROUP_MEMBER( l_U522, l_U553 ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U522 );
            }
        }
        if (NOT (IS_CAR_DEAD( l_U524 )))
        {
            if (NOT l_U517)
            {
                SET_CAR_COORDINATES( l_U524, 933.51860000, 164.70570000, 35.53200000 );
            }
            else
            {
                SET_CAR_COORDINATES( l_U524, 928.70640000, 174.20100000, 32.62510000 );
            }
            GET_CAR_HEADING( l_U524, ref fVar5 );
            if ((fVar5 < 67.00000000) || (fVar5 > 247.00000000))
            {
                SET_CAR_HEADING( l_U524, 327.40720000 );
            }
            else
            {
                SET_CAR_HEADING( l_U524, 150.43670000 );
            }
            if (NOT (IS_CHAR_IN_CAR( sub_4239(), l_U524 )))
            {
                WARP_CHAR_INTO_CAR( sub_4239(), l_U524 );
            }
            SET_CAR_ON_GROUND_PROPERLY( l_U524 );
        }
        CLEAR_PRINTS();
        BEGIN_CAM_COMMANDS( ref l_U572 );
        CREATE_CAM( 14, ref l_U571 );
        if (NOT l_U517)
        {
            SET_CAM_POS( l_U571, 922.10160000, 167.63810000, 35.71320000 );
            SET_CAM_ROT( l_U571, -0.33977600, -0.00000000, -102.01360000 );
            SET_CAM_FOV( l_U571, 35.00000000 );
        }
        else if ((fVar5 < 67.00000000) || (fVar5 > 247.00000000))
        {
            SET_CAM_POS( l_U571, 931.55550000, 175.00710000, 33.54630000 );
            SET_CAM_ROT( l_U571, 6.14086300, -0.00000000, 107.77120000 );
            SET_CAM_FOV( l_U571, 45.00000000 );
        }
        else
        {
            SET_CAM_POS( l_U571, 928.48140000, 169.20080000, 34.59530000 );
            SET_CAM_ROT( l_U571, -12.53757000, 0.00000000, 0.39888300 );
            SET_CAM_FOV( l_U571, 26.40005000 );
        }
        SET_USE_HIGHDOF( 1 );
        SET_CAM_NEAR_DOF( l_U571, 1.00000000 );
        SET_CAM_FAR_DOF( l_U571, 19.00000000 );
        SET_CAM_ACTIVE( l_U571, 1 );
        SET_CAM_PROPAGATE( l_U571, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U498 = 1;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U523 )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U523, 1 );
        }
        if (sub_18236( "R3_END", ref l_U565, 6, 1 ))
        {
            GET_CHAR_COORDINATES( sub_4239(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (NOT (IS_CHAR_DEAD( l_U522 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U522 )))
                {
                    GET_CHAR_HEADING( l_U522, ref fVar5 );
                    if (NOT (IS_CAR_DEAD( l_U524 )))
                    {
                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 1 ))
                        {
                            fVar5 += 90.00000000;
                        }
                        else
                        {
                            fVar5 -= 90.00000000;
                        }
                    }
                    OPEN_SEQUENCE_TASK( ref l_U563 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_ACHIEVE_HEADING( 0, fVar5 );
                    CLOSE_SEQUENCE_TASK( l_U563 );
                    TASK_PERFORM_SEQUENCE( l_U522, l_U563 );
                    CLEAR_SEQUENCE_TASK( l_U563 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U523 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U523 )))
                {
                    GET_CHAR_HEADING( l_U523, ref fVar5 );
                    fVar5 += 90.00000000;
                    OPEN_SEQUENCE_TASK( ref l_U563 );
                    TASK_PAUSE( 0, 250 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_ACHIEVE_HEADING( 0, fVar5 );
                    CLOSE_SEQUENCE_TASK( l_U563 );
                    TASK_PERFORM_SEQUENCE( l_U523, l_U563 );
                    CLEAR_SEQUENCE_TASK( l_U563 );
                    GET_CHAR_HEADING( sub_4239(), ref fVar5 );
                    if ((fVar5 < 67.00000000) || (fVar5 > 247.00000000))
                    {
                        TASK_CLEAR_LOOK_AT( sub_4239() );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U524, 5.00000000, 7.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        TASK_LOOK_AT_COORD( sub_4239(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 999999, 0 );
                    }
                    else
                    {
                        TASK_LOOK_AT_CHAR( sub_4239(), l_U523, 99999, 0 );
                    }
                }
            }
            l_U498 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U523 )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U523, 1 );
        }
        if ((NOT (IS_CHAR_INJURED( l_U522 ))) AND (NOT (IS_CHAR_INJURED( l_U523 ))))
        {
            GET_SCRIPT_TASK_STATUS( l_U522, 29, ref l_U564 );
            if (l_U564 == 7)
            {
                GET_SCRIPT_TASK_STATUS( l_U523, 29, ref l_U564 );
                if ((l_U564 == 7) AND (NOT (sub_9627( l_U565 ))))
                {
                    CLEAR_CHAR_TASKS( l_U522 );
                    OPEN_SEQUENCE_TASK( ref l_U563 );
                    TASK_PLAY_ANIM( 0, "Michelle_wave", "missroman3", 1000.00000000, 0, 1, 1, 0, -1 );
                    if (NOT (IS_CAR_DEAD( l_U524 )))
                    {
                        GET_CAR_HEADING( l_U524, ref fVar5 );
                        if ((fVar5 < 67.00000000) || (fVar5 > 247.00000000))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 927.01170000, 170.58250000, 33.04700000, 2, -1, -1 );
                        }
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 918.13450000, 174.83830000, 33.01930000, 2, -1, -1 );
                    CLOSE_SEQUENCE_TASK( l_U563 );
                    TASK_PERFORM_SEQUENCE( l_U523, l_U563 );
                    CLEAR_SEQUENCE_TASK( l_U563 );
                    CLEAR_CHAR_TASKS( l_U522 );
                    OPEN_SEQUENCE_TASK( ref l_U563 );
                    if (NOT (IS_CAR_DEAD( l_U524 )))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U524, -1.00000000, 0.00000000, 0.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U524, 1.00000000, 0.00000000, 0.00000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                        GET_CHAR_COORDINATES( l_U522, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                        if ((VDIST( uVar9, uVar15 )) < (VDIST( uVar9, uVar12 )))
                        {
                            GET_CAR_HEADING( l_U524, ref fVar5 );
                            if ((fVar5 < 67.00000000) || (fVar5 > 247.00000000))
                            {
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 927.01170000, 170.58250000, 33.04700000, 2, -1, -1 );
                            }
                        }
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 918.13450000, 174.83830000, 33.01930000, 2, -1, -1 );
                    CLOSE_SEQUENCE_TASK( l_U563 );
                    TASK_PERFORM_SEQUENCE( l_U522, l_U563 );
                    CLEAR_SEQUENCE_TASK( l_U563 );
                    OPEN_SEQUENCE_TASK( ref l_U563 );
                    TASK_STAND_STILL( 0, 1000 );
                    TASK_PLAY_ANIM( 0, "NIKO_WAVE", "missroman3", 1000.00000000, 0, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U563 );
                    TASK_PERFORM_SEQUENCE( sub_4239(), l_U563 );
                    CLEAR_SEQUENCE_TASK( l_U563 );
                    l_U498 = 8;
                    GET_GAME_TIMER( ref l_U560 );
                }
                else if (NOT (IS_CHAR_IN_ANY_CAR( l_U523 )))
                {
                    GET_CHAR_HEADING( sub_4239(), ref fVar5 );
                    if ((fVar5 < 67.00000000) || (fVar5 > 247.00000000))
                    {
                        SET_CAM_POS( l_U571, 929.30710000, 179.54940000, 33.57449000 );
                        SET_CAM_ROT( l_U571, -0.96380800, -0.00000000, 178.13040000 );
                        SET_CAM_FOV( l_U571, 23.40005000 );
                    }
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( l_U523 )))
            {
                GET_CHAR_HEADING( sub_4239(), ref fVar5 );
                if ((fVar5 < 67.00000000) || (fVar5 > 247.00000000))
                {
                    SET_CAM_POS( l_U571, 929.30710000, 179.54940000, 33.57449000 );
                    SET_CAM_ROT( l_U571, -0.96380800, -0.00000000, 178.13040000 );
                    SET_CAM_FOV( l_U571, 23.40005000 );
                }
            }
        }
        else
        {
            l_U498 = 8;
            GET_GAME_TIMER( ref l_U560 );
        }
        break;
        case 8:
        if (NOT (IS_CHAR_INJURED( l_U523 )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U523, 1 );
        }
        GET_GAME_TIMER( ref l_U559 );
        l_U558 = l_U559 - l_U560;
        if (l_U558 > 6000)
        {
            l_U498 = 9;
        }
        if (NOT (sub_9627( l_U565 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if ((NOT (IS_CHAR_INJURED( l_U523 ))) AND (NOT (IS_CHAR_INJURED( l_U522 ))))
                {
                    GET_GAME_TIMER( ref l_U559 );
                    l_U558 = l_U559 - l_U560;
                    if (l_U558 > 6000)
                    {
                        l_U498 = 9;
                    }
                    else if ((NOT (IS_CHAR_ON_SCREEN( l_U523 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U522 ))))
                    {
                        l_U498 = 9;
                    }
                }
                else
                {
                    l_U498 = 9;
                }
            }
        }
        break;
        case 9:
        TASK_CLEAR_LOOK_AT( sub_4239() );
        if (NOT (IS_CHAR_DEAD( l_U522 )))
        {
            SET_CHAR_KEEP_TASK( l_U522, 1 );
            DELETE_CHAR( ref l_U522 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U522 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U554 );
        }
        if (NOT (IS_CHAR_DEAD( l_U523 )))
        {
            SET_CHAR_KEEP_TASK( l_U523, 1 );
            DELETE_CHAR( ref l_U523 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U523 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U555 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U571 );
        SET_USE_HIGHDOF( 0 );
        END_CAM_COMMANDS( ref l_U572 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        CLEAR_CHAR_TASKS( sub_4239() );
        if (l_U509)
        {
            if (IS_VEH_DRIVEABLE( l_U524 ))
            {
                CLOSE_ALL_CAR_DOORS( l_U524 );
            }
            DO_SCREEN_FADE_IN( 2000 );
            while (IS_SCREEN_FADING())
            {
                WAIT( 0 );
            }
        }
        if (IS_VEH_DRIVEABLE( l_U524 ))
        {
            FREEZE_CAR_POSITION( l_U524, 0 );
        }
        SET_PLAYER_CONTROL( sub_7098(), 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4239(), 0 );
        GET_GAME_TIMER( ref l_U560 );
        REMOVE_ANIMS( "MISSPASS" );
        sub_2672( 6, 1 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U524 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U557 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 921.77580000, 142.72350000, 33.50930000, 925.77580000, 146.72350000, 37.50930000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 939.76010000, 243.48840000, 28.91280000, 943.76010000, 247.48840000, 24.91280000 );
        g_U10981[0]._fU40[1] += 2;
        SET_PHONE_HUD_ITEM( 8, "CONT_F1", -1 );
        l_U497 = 6;
        break;
    }
    return;
}

void sub_27281()
{
    int iVar2;
    int iVar3;
    int iVar4;

    switch (l_U500)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U522 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U522 )))
            {
                DELETE_CHAR( ref l_U522 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U522 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U554 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U523 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U523 )))
            {
                DELETE_CHAR( ref l_U523 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U523 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U555 );
            }
        }
        GET_GAME_TIMER( ref l_U559 );
        l_U558 = l_U559 - l_U560;
        if (l_U558 >= 2000)
        {
            if (g_U64717 > 1)
            {
                if (sub_27559( 0, "R3_CDRPOFF", "R3AUD" ))
                {
                    l_U500 = 1;
                }
            }
            else if (sub_27559( 0, "R3_NUMBER", "R3AUD" ))
            {
                l_U500 = 1;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U522 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U522 )))
            {
                DELETE_CHAR( ref l_U522 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U522 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U554 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U523 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U523 )))
            {
                DELETE_CHAR( ref l_U523 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U523 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U555 );
            }
        }
        if (sub_31601() == 6)
        {
            CLEAR_PRINTS();
            PRINT( "PKMAL_23", 7500, 1 );
            l_U500 = 2;
            g_U64723 = 1;
            l_U549 = 0;
        }
        else if (NOT l_U512)
        {
            iVar2 = sub_31734();
            PRINTNL();
            PRINTINT( iVar2 );
            PRINTNL();
            if (g_U64717 > 1)
            {
                iVar3 = 2;
            }
            else
            {
                iVar3 = 1;
            }
            if (iVar2 > iVar3)
            {
                PRINTNL();
                PRINTSTRING( "ATTEMPTING TO FLASH BLIP" );
                PRINTNL();
                if (DOES_BLIP_EXIST( g_U10324[6]._fU32 ))
                {
                    SET_ROUTE( g_U10324[6]._fU32, 1 );
                    CHANGE_BLIP_COLOUR( g_U10324[6]._fU32, 5 );
                    l_U512 = 1;
                    FLASH_BLIP( g_U10324[6]._fU32, 1 );
                    PRINTNL();
                    PRINTSTRING( "CALL TO FLASH BLIP" );
                    PRINTNL();
                }
            }
        }
        break;
        case 2:
        if (l_U549 == 0)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (DOES_BLIP_EXIST( g_U10324[6]._fU32 ))
                {
                    FLASH_BLIP( g_U10324[6]._fU32, 0 );
                }
                CLEAR_HELP();
                PRINT_HELP( "PKMAL_22" );
                l_U549++;
            }
        }
        else if (l_U549 == 1)
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PKMAL_22" )))
            {
                l_U549++;
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U522 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U522 )))
            {
                DELETE_CHAR( ref l_U522 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U522 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U554 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U523 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U523 )))
            {
                DELETE_CHAR( ref l_U523 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U523 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U555 );
            }
        }
        LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), l_U538._fU0, l_U538._fU4, 16.90000000, 1.60000000, 1.60000000, 2.00000000, 1 );
        if (LOCATE_CHAR_ON_FOOT_3D( sub_4239(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 2.00000000, 2.50000000, 2.00000000, 0 ))
        {
            l_U506 = 1;
            l_U498 = 0;
            l_U500 = 3;
            CLEAR_WANTED_LEVEL( sub_7098() );
            g_U8356 = 1;
            GET_GAME_TIMER( ref l_U560 );
        }
        else if (NOT (IS_CHAR_IN_ANY_CAR( sub_4239() )))
        {
            if (l_U512)
            {
                if (DOES_BLIP_EXIST( g_U10324[6]._fU32 ))
                {
                    SET_ROUTE( g_U10324[6]._fU32, 0 );
                }
                l_U512 = 0;
            }
        }
        else if (NOT l_U512)
        {
            if (DOES_BLIP_EXIST( g_U10324[6]._fU32 ))
            {
                SET_ROUTE( g_U10324[6]._fU32, 1 );
                CHANGE_BLIP_COLOUR( g_U10324[6]._fU32, 5 );
            }
            l_U512 = 1;
        };;;
        break;
        case 3:
        sub_32625();
        break;
        case 4:
        if (g_U8355)
        {
            if (NOT l_U508)
            {
                if (DOES_BLIP_EXIST( g_U10324[6]._fU32 ))
                {
                    SET_ROUTE( g_U10324[6]._fU32, 0 );
                }
                sub_2672( 6, 0 );
                PRINT( "PKMAL_25", 7500, 1 );
                l_U508 = 1;
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4239(), 893.47660000, -442.84200000, 15.80170000, 2.70000000, 2.80000000, 3.00000000, 0 ))
            {
                sub_32853();
            }
        }
        else if (g_U8357)
        {
            l_U499 = 8;
            sub_9209();
        }
        else
        {
            GET_INTERIOR_FROM_CHAR( sub_4239(), ref iVar4 );
            if (iVar4 == nil)
            {
                if (NOT l_U508)
                {
                    CLEAR_PRINTS();
                    PRINT( "PKMAL_24", 7500, 1 );
                    l_U508 = 1;
                }
            }
            else
            {
                l_U508 = 0;
            }
        }
        break;
    }
    return;
}

void sub_27559(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_27617( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_27617(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_9739( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_9739( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_7098() )))
    {
        sub_9739( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_4239() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4239() ))))
    {
        sub_9739( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_9739( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_28132()) AND (NOT bParam11))
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
                sub_9739( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_28132()) AND (NOT bParam11))
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
    sub_29504( uParam0, ref g_U91._fU176 );
    sub_30885( ref g_U91._fU160 );
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
        sub_5863( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_28132()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_28189())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_28189()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_7098() )))
    {
        sub_9739( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_9739( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_9739( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_9739( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_7098() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4239() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_4239(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_9739( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_4239() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_9739( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_9739( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_7098() )))
    {
        sub_9739( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_29504(int iParam0, unknown uParam1)
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

void sub_30885(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_31601()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_31734()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

void sub_32625()
{
    if (g_U8353)
    {
        g_U8355 = 0;
        l_U500 = 4;
        l_U508 = 0;
        CLEAR_PRINTS();
        PRINT( "PKMAL_24", 5000, 1 );
    }
    return;
}

void sub_32853()
{
    CLEAR_WANTED_LEVEL( sub_7098() );
    sub_32874();
    sub_44462( 2 );
    GET_GAME_TIMER( ref l_U560 );
    l_U497 = 8;
    return;
}

void sub_32874()
{
    sub_32883();
    return;
}

void sub_32883()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_32901();
    sub_32960( iVar2, iVar3, iVar4 );
    return;
}

void sub_32901()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_32960(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_32991( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_32991(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_33087( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_33087( ref cVar9 );
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
            sub_33087( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_33087( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_33087( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_33087( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_33664( iParam0, iVar7 );;;
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
                sub_34061( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_34061( 0, 4 );
            }
        }
    }
    if (NOT (sub_34150( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_7098(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_7098() );
    }
    sub_1553();
    bVar27 = true;
    uVar28 = sub_33664( iParam0, iVar7 );
    uVar29 = sub_1010( iParam0 );
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
                sub_43526( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_43956();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_44041( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_44098( iParam0 );
                sub_44137( 0 );
                sub_1451( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_44245();
        }
    }
    if (bParam2)
    {
        sub_43956();
        sub_44333();
        sub_44137( 0 );
    }
    if (bParam3)
    {
        sub_43956();
        sub_44373();
        sub_44137( 0 );
        sub_1451( uVar29, 0 );
    }
    sub_897();
    return;
}

void sub_33087(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_33664(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1409( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_34061(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_34150(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_34358( uParam1 );
        break;
        case 1:
        bVar8 = sub_36436( uParam1 );
        break;
        case 2:
        bVar8 = sub_36662( uParam1 );
        break;
        case 3:
        bVar8 = sub_36812( uParam1 );
        break;
        case 4:
        bVar8 = sub_37090( uParam1 );
        break;
        case 5:
        bVar8 = sub_37393( uParam1 );
        break;
        case 6:
        bVar8 = sub_37592( uParam1 );
        break;
        case 7:
        bVar8 = sub_37818( uParam1 );
        break;
        case 8:
        bVar8 = sub_38053( uParam1 );
        break;
        case 9:
        bVar8 = sub_38428( uParam1 );
        break;
        case 10:
        bVar8 = sub_38675( uParam1 );
        break;
        case 11:
        bVar8 = sub_38814( uParam1 );
        break;
        case 12:
        bVar8 = sub_39113( uParam1 );
        break;
        case 13:
        bVar8 = sub_39341( uParam1 );
        break;
        case 14:
        bVar8 = sub_39628( uParam1 );
        break;
        case 15:
        bVar8 = sub_39910( uParam1 );
        break;
        case 16:
        bVar8 = sub_40192( uParam1 );
        break;
        case 17:
        bVar8 = sub_40393( uParam1 );
        break;
        case 18:
        bVar8 = sub_40466( uParam1 );
        break;
        case 19:
        bVar8 = sub_40680( uParam1 );
        break;
        case 20:
        bVar8 = sub_40933( uParam1 );
        break;
        case 21:
        bVar8 = sub_41180( uParam1 );
        break;
        case 22:
        bVar8 = sub_41381( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_36041( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_33664( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_41704( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_34358(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_34637( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_34637( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_34637( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_34637( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_34637( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_34637( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_34637( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_34637( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_34637( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_34637( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_34637( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_34637( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_34637( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_34637( iVar3, 0, 3, 1, 0, 0 );
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
        sub_34637( iVar3, 0, sub_35919(), sub_36185(), 0, 0 );
        break;
        default:
        sub_36344( "Friend 1", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Friend 1", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_34637(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_34648( uParam1 );
    sub_34822( uParam0, 0, uParam2 );
    sub_34822( uParam0, 1, uParam3 );
    sub_34822( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_32901();
    return;
}

void sub_34648(unknown uParam0)
{
    ADD_SCORE( sub_7098(), uParam0 );
    sub_34673( uParam0 );
    return;
}

void sub_34673(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1409( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_34822(unknown uParam0, int iParam1, int iParam2)
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
        sub_34979( uParam0 );
    }
    return;
}

void sub_34979(unknown uParam0)
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

int sub_35919()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_36041( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_36041(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_36185()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_36041( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_36344(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_36436(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34637( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_36344( "Contact 2", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 2", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36662(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_34637( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_36344( "Girl 3", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Girl 3", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36812(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_34637( iVar3, 0, sub_35919(), sub_36185(), 0, 0 );
        break;
        default:
        sub_36344( "Friend 4", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Friend 4", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37090(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34637( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_34637( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_34637( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_34637( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_36344( "Contact 5", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 5", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37393(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_36344( "Contact 7", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 7", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37592(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34637( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_36344( "Contact 7b", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 7b", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37818(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_34637( iVar3, 0, sub_35919(), sub_36185(), 0, 0 );
        break;
        default:
        sub_36344( "Friend 8", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Friend 8", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38053(unknown uParam0)
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
        sub_34637( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_34637( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_34637( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_34637( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_34637( iVar3, 0, sub_35919(), sub_36185(), 0, 0 );
        break;
        default:
        sub_36344( "Friend 9", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Friend 9", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38428(unknown uParam0)
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
        sub_34637( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_34637( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_34637( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_36344( "Contact 10", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_36344( "Contact 10", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38675(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_36344( "Girl 11", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Girl 11", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38814(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34637( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_34637( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_34637( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_34637( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_34637( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_36344( "Contact 12", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 12", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39113(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34637( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_36344( "Contact 13", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 13", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39341(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_34637( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_34637( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_34637( iVar3, 0, sub_35919(), sub_36185(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_36344( "Friend 15", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Friend 15", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39628(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34637( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_34637( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_34637( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_36344( "Contact 16", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 16", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39910(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_34637( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_34637( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_34637( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_36344( "Contact 18", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 18", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40192(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_36344( "Contact 19", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 19", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40393(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_36344( "Girl 20", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40466(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_36344( "Contact 21", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 21", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40680(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34637( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_34637( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_36344( "Contact 22", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 22", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40933(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_34637( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34637( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_34637( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_36344( "Contact 24", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 24", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41180(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34637( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34637( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34637( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_36344( "Contact 25", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36344( "Contact 25", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41381(unknown uParam0)
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
        sub_34637( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_36344( "Girl 26", 1 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_36344( "Girl 26", 0 );
        sub_34637( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_41704(int iParam0, int iParam1)
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
    if (sub_41752( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_42483( iParam1 );
    }
    return;
}

int sub_41752(int iParam0, int iParam1)
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
            sub_41892( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_41892(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_42074( 0 );
    return;
}

void sub_42074(boolean bParam0)
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
        sub_42329();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_42329()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_42483(int iParam0)
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
        sub_42816( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_42816( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_42816( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_42816( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_42816( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_42816( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_42816( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_42816( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_42816( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_42816( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_42816( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_42816( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_42816( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_42816( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_42816( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_42816( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_42816( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_42816( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_42816( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_42816(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_43526(unknown uParam0, unknown uParam1)
{
    sub_43545( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_43545(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_43956()
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

int sub_44041(int iParam0, int iParam1)
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

void sub_44098(unknown uParam0)
{
    sub_796();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_44137(unknown uParam0)
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

void sub_44245()
{
    sub_44254();
    return;
}

void sub_44254()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_44333()
{
    sub_44254();
    return;
}

void sub_44373()
{
    sub_44254();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_44462(unknown uParam0)
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

void sub_44750()
{
    if (l_U498 > 1)
    {
        if (sub_15178())
        {
            if (NOT l_U506)
            {
                if (sub_9627( l_U565 ))
                {
                    sub_4837( ref l_U565, 0 );
                }
                sub_44819( 0 );
                sub_45002();
                l_U509 = 1;
                l_U498 = 9;
            }
        }
        else
        {
            l_U506 = 0;
        }
    }
    switch (l_U498)
    {
        case 0:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if ((sub_15417( 1, 1 )) AND (IS_SCREEN_FADED_IN()))
            {
                if (l_U499 == 3)
                {
                    if (NOT (IS_CHAR_INJURED( l_U523 )))
                    {
                        l_U498 = 1;
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            DO_SCREEN_FADE_OUT( 4000 );
                        }
                    }
                    else
                    {
                        l_U498 = 9;
                        l_U499 = 5;
                    }
                }
                else if (l_U499 == 4)
                {
                    if (NOT (IS_CHAR_INJURED( l_U522 )))
                    {
                        l_U498 = 1;
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            DO_SCREEN_FADE_OUT( 4000 );
                        }
                    }
                    else
                    {
                        l_U498 = 9;
                        l_U499 = 5;
                    }
                }
                else if (((NOT (IS_CHAR_INJURED( l_U522 ))) || (NOT (IS_CHAR_INJURED( l_U523 )))) || (l_U499 == 1))
                {
                    if (NOT (l_U499 == 1))
                    {
                        if (IS_CHAR_INJURED( l_U522 ))
                        {
                            l_U499 = 3;
                        }
                        else if (IS_CHAR_INJURED( l_U523 ))
                        {
                            l_U499 = 4;
                        }
                    }
                    l_U498 = 1;
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 4000 );
                    }
                }
                else
                {
                    l_U498 = 9;
                    l_U499 = 5;
                };;;
            }
        }
        break;
        case 1:
        if (NOT IS_SCREEN_FADING())
        {
            SET_PLAYER_CONTROL( sub_7098(), 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref l_U572 );
            CREATE_CAM( 14, ref l_U571 );
            SET_CAM_POS( l_U571, 831.51430000, -306.88340000, 16.64163000 );
            SET_CAM_ROT( l_U571, -10.55330000, -0.00000000, 48.85262000 );
            SET_CAM_ACTIVE( l_U571, 1 );
            SET_CAM_PROPAGATE( l_U571, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            if ((IS_CHAR_INJURED( l_U523 )) || (IS_CHAR_DEAD( l_U523 )))
            {
                DELETE_CHAR( ref l_U523 );
            }
            if ((IS_CHAR_INJURED( l_U522 )) || (IS_CHAR_DEAD( l_U522 )))
            {
                DELETE_CHAR( ref l_U522 );
            }
            if (l_U499 == 3)
            {
                sub_45929( ref l_U523, ref l_U523, 1 );
            }
            else if (l_U499 == 4)
            {
                sub_45929( ref l_U522, ref l_U522, 1 );
            }
            else if ((NOT (l_U499 == 0)) AND (NOT (l_U499 == 1)))
            {
                sub_45929( ref l_U522, ref l_U523, 2 );
            }
            else if (NOT (IS_CHAR_DEAD( l_U523 )))
            {
                DELETE_CHAR( ref l_U523 );
            }
            if (NOT (IS_CHAR_DEAD( l_U522 )))
            {
                DELETE_CHAR( ref l_U522 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4239() );
            if (IS_CHAR_IN_ANY_CAR( sub_4239() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_4239(), 825.94620000, -303.50940000, 14.90720000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_4239(), 825.94620000, -303.50940000, 14.90720000 );
            }
            SET_CHAR_HEADING( sub_4239(), 257.34840000 );
            LOAD_SCENE( 825.94620000, -303.50940000, 14.90720000 );
            SET_CAM_POS( l_U571, 827.55210000, -304.99340000, 16.39884000 );
            SET_CAM_ROT( l_U571, -1.09301600, 0.00000000, 43.38659000 );
            SET_CAM_FOV( l_U571, 34.90005000 );;;;
            SET_PLAYER_CONTROL( sub_7098(), 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4239(), 1 );
            GET_PLAYER_GROUP( sub_7098(), ref l_U553 );
            if (NOT (IS_CHAR_DEAD( l_U523 )))
            {
                if (IS_GROUP_MEMBER( l_U523, l_U553 ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U523 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U522 )))
            {
                if (IS_GROUP_MEMBER( l_U522, l_U553 ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U522 );
                }
            }
            CLEAR_PRINTS();
            CLEAR_HELP();
            if (NOT (IS_CHAR_INJURED( l_U523 )))
            {
                TASK_LOOK_AT_CHAR( l_U523, sub_4239(), 99999, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U522 )))
            {
                TASK_LOOK_AT_CHAR( l_U522, sub_4239(), 99999, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U522 )))
            {
                TASK_LOOK_AT_CHAR( sub_4239(), l_U522, 99999, 0 );
            }
            else if (NOT (IS_CHAR_INJURED( l_U523 )))
            {
                TASK_LOOK_AT_CHAR( sub_4239(), l_U523, 99999, 0 );
            }
            WAIT( 0 );
            DO_SCREEN_FADE_IN( 2000 );
            l_U498 = 3;
        }
        break;
        case 3:
        SET_PLAYER_CONTROL( sub_7098(), 0 );
        if (NOT IS_SCREEN_FADING())
        {
            if (l_U499 == 3)
            {
                if (sub_18236( "R3_FAIL2", ref l_U565, 6, 1 ))
                {
                    l_U498 = 4;
                }
            }
            else if (l_U499 == 4)
            {
                if (sub_18236( "R3_FAIL1", ref l_U565, 6, 1 ))
                {
                    l_U498 = 4;
                }
            }
            else if (sub_48244( 0, "R3_FCKED", "R3AUD", 0 ))
            {
                l_U514 = 1;
                l_U498 = 4;
            };;;
        }
        break;
        case 4:
        if (NOT (sub_9627( l_U565 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U563 );
            TASK_LEAVE_ANY_CAR( 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 825.30290000, -294.51590000, 15.72570000, 2, -1, -1 );
            CLOSE_SEQUENCE_TASK( l_U563 );
            if (l_U499 == 3)
            {
                if (NOT (IS_CHAR_INJURED( l_U523 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U523, l_U563 );
                    CLEAR_SEQUENCE_TASK( l_U563 );
                }
            }
            else if (l_U499 == 4)
            {
                if (NOT (IS_CHAR_INJURED( l_U522 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U522, l_U563 );
                    CLEAR_SEQUENCE_TASK( l_U563 );
                }
            }
            l_U498 = 8;
            GET_GAME_TIMER( ref l_U560 );
        }
        break;
        case 7: break;
        case 8:
        GET_GAME_TIMER( ref l_U559 );
        l_U558 = l_U559 - l_U560;
        if (l_U499 == 3)
        {
            if (NOT (IS_CHAR_INJURED( l_U523 )))
            {
                if ((l_U558 > 6000) || (NOT (IS_CHAR_ON_SCREEN( l_U523 ))))
                {
                    sub_45002();
                    l_U498 = 9;
                }
            }
            else
            {
                sub_45002();
                l_U498 = 9;
            }
        }
        else if (l_U499 == 4)
        {
            if (NOT (IS_CHAR_INJURED( l_U522 )))
            {
                if ((l_U558 > 6000) || (NOT (IS_CHAR_ON_SCREEN( l_U522 ))))
                {
                    sub_45002();
                    l_U498 = 9;
                }
            }
            else
            {
                sub_45002();
                l_U498 = 9;
            }
        }
        else if (NOT (l_U499 == 4))
        {
            if (NOT (IS_CHAR_INJURED( l_U523 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U522 )))
                {
                    if (l_U558 > 8000)
                    {
                        sub_45002();
                        l_U498 = 9;
                    }
                    else if ((NOT (IS_CHAR_ON_SCREEN( l_U522 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U523 ))))
                    {
                        sub_45002();
                        l_U498 = 9;
                    }
                }
                else
                {
                    sub_45002();
                    l_U498 = 9;
                }
            }
            else if ((l_U499 == 0) || (l_U499 == 1))
            {
                if (l_U558 > 4000)
                {
                    if (sub_31601() == 6)
                    {
                        sub_45002();
                        l_U498 = 9;
                    }
                }
            }
            else
            {
                sub_45002();
                l_U498 = 9;
            }
        };;;
        break;
        case 9:
        switch (l_U499)
        {
            case 0:
            if (NOT l_U514)
            {
                sub_49084( 0, "R3_FCKED", "R3AUD", 0 );
            }
            break;
            case 1:
            if (NOT l_U514)
            {
                sub_49084( 0, "R3_FCKED", "R3AUD", 0 );
            }
            break;
            case 3:
            sub_49084( 0, "R3_HURT", "R3AUD", 0 );
            break;
            case 4:
            sub_49084( 0, "R3_HURT1", "R3AUD", 0 );
            break;
            case 5:
            sub_49084( 0, "R3_HURT2", "R3AUD", 0 );
            break;
            case 8:
            sub_49084( 0, "R3_SHOP", "R3AUD", 0 );
            break;
        }
        if (g_U9930 > 1)
        {
            if (IS_PLAYER_PLAYING( sub_7098() ))
            {
                SET_PLAYER_MOOD_PISSED_OFF( sub_7098(), 150 );
                SAY_AMBIENT_SPEECH( sub_4239(), "MISSION_FAIL_RAGE", 1, 1, 0 );
            }
        }
        g_U10981[0]._fU40[1] = l_U552;
        sub_49940();
        l_U501 = 0;
        break;
    }
    return;
}

void sub_44819(int iParam0)
{
    if (g_U91._fU60 == iParam0)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U91._fU0 != 1000) AND (g_U91._fU0 != 1001))
            {
                g_U91._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_45002()
{
    TASK_CLEAR_LOOK_AT( sub_4239() );
    if (NOT (IS_CHAR_DEAD( l_U523 )))
    {
        DELETE_CHAR( ref l_U523 );
    }
    if (NOT (IS_CHAR_DEAD( l_U522 )))
    {
        DELETE_CHAR( ref l_U522 );
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4239() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4239(), ref l_U524 );
        CLOSE_ALL_CAR_DOORS( l_U524 );
    }
    CLEAR_CHAR_TASKS( sub_4239() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    DESTROY_CAM( l_U571 );
    END_CAM_COMMANDS( ref l_U572 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_CAM_BEHIND_PED( sub_4239() );
    SET_PLAYER_CONTROL( sub_7098(), 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4239(), 0 );
    return;
}

void sub_45929(unknown uParam0, unknown uParam1, int iParam2)
{
    boolean bVar5;
    int iVar6;

    bVar5 = false;
    if ((l_U499 == 0) || (NOT (IS_VEH_DRIVEABLE( l_U524 ))))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U524 );
        if (IS_CHAR_IN_ANY_CAR( sub_4239() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4239(), ref l_U524 );
            if (IS_VEH_DRIVEABLE( l_U524 ))
            {
                GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U524, ref iVar6 );
                if (iVar6 >= iParam2)
                {
                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( (uParam0^), l_U524 )))
                        {
                            if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 0 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), l_U524, 0 );
                            }
                            else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 1 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), l_U524, 1 );
                            }
                            else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 2 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), l_U524, 2 );
                            };;;
                        }
                    }
                    if (iParam2 > 1)
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam1^) )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( (uParam1^), l_U524 )))
                            {
                                if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 0 ))
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam1^), l_U524, 0 );
                                }
                                else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 1 ))
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam1^), l_U524, 1 );
                                }
                                else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 2 ))
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam1^), l_U524, 2 );
                                };;;
                            }
                        }
                    }
                }
                else
                {
                    bVar5 = true;
                }
            }
            else
            {
                bVar5 = true;
            }
        }
        else
        {
            bVar5 = true;
        }
    }
    else if (IS_VEH_DRIVEABLE( l_U524 ))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_4239(), l_U524 )))
        {
            WARP_CHAR_INTO_CAR( sub_4239(), l_U524 );
        }
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (NOT (IS_CHAR_IN_CAR( (uParam0^), l_U524 )))
            {
                if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 0 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), l_U524, 0 );
                }
                else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 1 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), l_U524, 1 );
                }
                else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 2 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), l_U524, 2 );
                };;;
            }
        }
        if (iParam2 > 1)
        {
            if (NOT (IS_CHAR_INJURED( (uParam1^) )))
            {
                if (NOT (IS_CHAR_IN_CAR( (uParam1^), l_U524 )))
                {
                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 0 ))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam1^), l_U524, 0 );
                    }
                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 1 ))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam1^), l_U524, 1 );
                    }
                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 2 ))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam1^), l_U524, 2 );
                    };;;
                }
            }
        }
    }
    else
    {
        bVar5 = true;
    }
    if (bVar5)
    {
        REQUEST_MODEL( l_U556 );
        LOAD_ALL_OBJECTS_NOW();
        while (NOT (HAS_MODEL_LOADED( l_U556 )))
        {
            WAIT( 0 );
        }
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U524 );
        CLEAR_AREA_OF_CARS( 829.04110000, -304.01900000, 15.56650000, 20.00000000 );
        CREATE_CAR( l_U556, 829.04110000, -304.01900000, 14.82140000, ref l_U524, 1 );
        ADD_CAR_TO_MISSION_DELETION_LIST( l_U524 );
        SET_CAR_HEADING( l_U524, 180.00000000 );
        SET_NEEDS_TO_BE_HOTWIRED( l_U524, 0 );
        SET_CAR_ON_GROUND_PROPERLY( l_U524 );
        WARP_CHAR_INTO_CAR( sub_4239(), l_U524 );
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (NOT (IS_CHAR_IN_CAR( (uParam0^), l_U524 )))
            {
                if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 0 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), l_U524, 0 );
                }
                else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 1 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), l_U524, 1 );
                }
                else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 2 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), l_U524, 2 );
                };;;
            }
        }
        if (iParam2 > 1)
        {
            if (NOT (IS_CHAR_INJURED( (uParam1^) )))
            {
                if (NOT (IS_CHAR_IN_CAR( (uParam1^), l_U524 )))
                {
                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 0 ))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam1^), l_U524, 0 );
                    }
                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 1 ))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam1^), l_U524, 1 );
                    }
                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U524, 2 ))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam1^), l_U524, 2 );
                    };;;
                }
            }
        }
    }
    else
    {
        CLEAR_AREA_OF_CARS( 829.04110000, -304.01900000, 15.56650000, 20.00000000 );
        SET_CAR_COORDINATES( l_U524, 829.04110000, -304.01900000, 14.82140000 );
        SET_CAR_HEADING( l_U524, 180.00000000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U524 );
        CLOSE_ALL_CAR_DOORS( l_U524 );
    }
    LOAD_SCENE( 829.04110000, -304.01900000, 15.56650000 );
    return;
}

void sub_48244(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown[2] uVar15;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    array(ref uVar15, 2);
    return sub_27617( uParam0, ref cVar6, uParam2, 0, ref uVar15, ref uVar15, "", 0, 1, 2, uParam3, 1, 0, 0 );
}

void sub_49084(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_49128( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_49128(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_49940()
{
    sub_49949();
    return;
}

void sub_49949()
{
    int iVar2;

    iVar2 = 0;
    sub_49963( iVar2 );
    sub_1544( iVar2 );
    return;
}

void sub_49963(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_7098(), 150 );
    CLEAR_HELP();
    sub_368( uParam0 );
    return;
}

void sub_50077()
{
    sub_49084( 0, "R3_THREADS", "R3AUD", 0 );
    g_U21 = 50;
    l_U501 = 0;
    return;
}

void sub_50144()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        sub_32853();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 33 ))
    {
        l_U499 = 0;
        sub_9209();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 36 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            WAIT( 0 );
        }
        switch (l_U497)
        {
            case 2:
            if (IS_VEH_DRIVEABLE( l_U524 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_4239(), l_U524 )))
                {
                    WARP_CHAR_INTO_CAR( sub_4239(), l_U524 );
                }
            }
            SET_CHAR_COORDINATES( sub_4239(), 988.77690000, -564.84500000, 13.22460000 );
            SET_CHAR_HEADING( sub_4239(), 0.00000000 );
            break;
            case 4:
            SET_CHAR_COORDINATES( sub_4239(), 928.01260000, 144.96580000, 35.10460000 );
            SET_CHAR_HEADING( sub_4239(), 0.00000000 );
            break;
            case 6:
            if (IS_CHAR_IN_ANY_CAR( sub_4239() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_4239(), 900.34330000, -443.44190000, 15.80170000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_4239(), 900.34330000, -443.44190000, 15.80170000 );
            }
            SET_CHAR_HEADING( sub_4239(), 90.00000000 );
            break;
        }
    }
    return;
}