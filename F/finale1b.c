void main()
{
    int iVar2;
    int iVar3;

    l_U117 = 0;
    l_U118 = 1;
    l_U119 = 3;
    l_U121 = 0;
    l_U138 = -1;
    l_U142 = 0;
    l_U143 = 1;
    l_U144 = 1;
    l_U152 = 150.00000000;
    l_U242 = 0;
    l_U243 = 150.00000000;
    l_U293 = 0;
    l_U596 = -2088164056;
    l_U597 = 1976502708;
    l_U631 = 0;
    l_U632 = 0;
    l_U633 = 0;
    l_U634 = 0;
    l_U635 = 0;
    l_U636 = 0;
    l_U637 = 0;
    l_U638 = 0;
    l_U639 = 0;
    l_U640 = 0;
    l_U641 = 0;
    l_U642 = 0;
    l_U643 = 0;
    l_U644 = 0;
    l_U645 = 0;
    l_U646 = 0;
    l_U647 = 0;
    l_U648 = 0;
    l_U649 = 0;
    l_U650 = 0;
    l_U651 = 0;
    l_U652 = 0;
    l_U653 = 0;
    l_U654 = 0;
    l_U655 = 0;
    l_U656 = 0;
    l_U657 = 0;
    l_U658 = 0;
    l_U659 = 0;
    l_U660 = 1;
    l_U661 = 0;
    l_U662 = 0;
    l_U663 = 0;
    l_U664 = 0;
    l_U665 = 0;
    l_U666 = 0;
    l_U667 = 0;
    l_U668 = 0;
    l_U669 = 0;
    l_U670 = 0;
    l_U686 = 0;
    l_U687 = 0;
    l_U688 = 0;
    l_U689 = 0;
    l_U690 = 0;
    l_U691 = 0;
    l_U692 = 0;
    l_U693 = 0;
    l_U694 = 0;
    l_U695 = 0;
    l_U696 = 0;
    l_U697 = 0;
    l_U698 = 0;
    l_U699 = 0;
    l_U700 = 0;
    l_U701 = 0;
    l_U702 = 0;
    l_U703 = 0;
    l_U704 = 0;
    l_U705 = {693.69300000, -307.07070000, 22.88710000};
    l_U708 = {689.97600000, -305.36400000, 22.88700000};
    l_U711 = {697.07290000, -305.23360000, 9.87040000};
    l_U714 = {687.28220000, -309.77110000, 15.00250000};
    l_U717 = {784.49780000, -199.51720000, 5.01550000};
    l_U720 = {693.48430000, -296.88200000, 2.25820000};
    l_U723 = {690.05300000, -305.16500000, 22.88690000};
    l_U922 = {-0.14800000, 0.21600000, 0.05200000};
    l_U925 = {-1.24800000, -1.32000000, -0.24800000};
    l_U928 = 113.92460000;
    l_U929 = 332.01860000;
    l_U930 = 0.00000000;
    l_U931 = 0.00000000;
    l_U932 = 0.00000000;
    l_U1002 = 0.00000000;
    l_U1003 = 2.00000000;
    l_U1004 = 0.00000000;
    l_U1005 = 4.00000000;
    l_U1010 = 0;
    l_U1011 = 0;
    l_U1012 = 0;
    l_U1013 = 0;
    l_U1014 = 0;
    l_U1015 = 0;
    l_U1016 = 0;
    l_U1017 = 0;
    l_U1018 = 400;
    l_U1024 = 0;
    l_U1025 = 0;
    l_U1026 = 0;
    l_U1027 = 0;
    l_U1028 = 0;
    l_U1029 = 0;
    l_U1030 = 0;
    iVar2 = 1;
    iVar3 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_869();
        sub_2979();
    }
    sub_3748();
    while (true)
    {
        WAIT( 0 );
        sub_12247();
        switch (l_U1025)
        {
            case 0:
            sub_12508();
            break;
            case 1:
            sub_20917();
            break;
            case 3:
            sub_32324();
            break;
            case 4:
            sub_36981();
            break;
            case 5:
            sub_42175();
            break;
            case 6:
            sub_46971();
            break;
            case 7:
            GET_CHAR_COORDINATES( sub_2988(), ref l_U1006, ref l_U1007, ref l_U1008 );
            GET_CHAR_HEADING( sub_2988(), ref l_U1009 );
            sub_49209( l_U1006, l_U1007, l_U1008, l_U1009 );
            break;
            case 8:
            GENERATE_RANDOM_INT_IN_RANGE( 1, 4, ref iVar2 );
            if ((iVar2 == 1) AND (SECUROM_SPOT_CHECK1()))
            {
                iVar3 = 1;
            }
            else if ((iVar2 == 2) AND (SECUROM_SPOT_CHECK2()))
            {
                iVar3 = 1;
            }
            else if ((iVar2 == 3) AND (SECUROM_SPOT_CHECK3()))
            {
                iVar3 = 1;
            }
            else if ((iVar2 == 4) AND (SECUROM_SPOT_CHECK4()))
            {
                iVar3 = 1;
            };;;;
            if (iVar3 == 1)
            {
                sub_51496();
            }
            break;
            case 9:
            sub_51943();
            break;
        }
    }
    return;
}

void sub_869()
{
    sub_878();
    return;
}

void sub_878()
{
    int iVar2;

    iVar2 = 0;
    sub_892( iVar2 );
    sub_2068( iVar2 );
    return;
}

void sub_892(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_936();
        sub_1097();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1205();
            sub_1244();
        }
    }
    sub_1320();
    sub_1421();
    uVar5 = sub_1534( uParam0 );
    sub_1975( uVar5, 0 );
    return;
}

void sub_936()
{
    sub_950( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1050();
    }
    return;
}

void sub_950(int iParam0)
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

void sub_1050()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1097()
{
    sub_1106();
    return;
}

void sub_1106()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1205()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1244()
{
    sub_1253();
    return;
}

void sub_1253()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1320()
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

void sub_1421()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1443();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1443()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1534(unknown uParam0)
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
    sub_1933( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1933(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1975(int iParam0, boolean bParam1)
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

void sub_2068(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2077();
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
        sub_2852();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2077()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2115( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2115( 1, g_U569[I] )) != 0)
            {
                sub_2401( I );
            }
        }
    }
    if (NOT sub_2567())
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

int sub_2115(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2401(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2486( g_U569 - 1 );
    return;
}

void sub_2486(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2567()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2115( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2852()
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

void sub_2979()
{
    if (NOT (IS_CHAR_DEAD( sub_2988() )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_2988(), 0 );
        BLOCK_CHAR_GESTURE_ANIMS( sub_2988(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CREATE_RANDOM_COPS( 1 );
    sub_3084();
    SWITCH_ROADS_BACK_TO_ORIGINAL( 641, 65195, -10, 808, 65358, 40.50000000 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    sub_3298( 4, "FIN1B_HLP1" );
    STOP_SOUND( l_U1020 );
    RELEASE_SOUND_ID( l_U1020 );
    STOP_SOUND( l_U1021 );
    RELEASE_SOUND_ID( l_U1021 );
    STOP_SOUND( l_U1022 );
    RELEASE_SOUND_ID( l_U1022 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2988()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3084()
{
    if (DOES_BLIP_EXIST( l_U591 ))
    {
        REMOVE_BLIP( l_U591 );
    }
    if (DOES_BLIP_EXIST( l_U592 ))
    {
        REMOVE_BLIP( l_U592 );
    }
    if (DOES_BLIP_EXIST( l_U593 ))
    {
        REMOVE_BLIP( l_U593 );
    }
    if (DOES_BLIP_EXIST( l_U594 ))
    {
        REMOVE_BLIP( l_U594 );
    }
    if (DOES_BLIP_EXIST( l_U595 ))
    {
        REMOVE_BLIP( l_U595 );
    }
    return;
}

void sub_3298(int iParam0, string sParam1)
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
                    sub_3519();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3568(), 1 );
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

void sub_3519()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3568()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3748()
{
    int I;

    SET_MISSION_FLAG( 1 );
    CLEAR_PRINTS();
    if (g_U9893._fU24)
    {
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    CLEAR_WANTED_LEVEL( sub_3568() );
    SET_WIDESCREEN_BORDERS( 1 );
    LOAD_ADDITIONAL_TEXT( "FIN1B", 0 );
    sub_3881();
    if (NOT (IS_CHAR_DEAD( sub_2988() )))
    {
        SET_PLAYER_CONTROL( sub_3568(), 0 );
        CLEAR_AREA( l_U717._fU0, l_U717._fU4, l_U717._fU8, 4.00000000, 1 );
        EXTINGUISH_FIRE_AT_POINT( l_U717._fU0, l_U717._fU4, l_U717._fU8, 500.00000000 );
        SET_CHAR_COORDINATES_NO_OFFSET( sub_2988(), l_U717._fU0, l_U717._fU4, l_U717._fU8 );
        SET_CHAR_HEADING( sub_2988(), l_U928 );
        if (IS_CHAR_IN_ANY_CAR( sub_2988() ))
        {
            GET_CAR_CHAR_IS_USING( sub_2988(), ref l_U570 );
            if (IS_VEH_DRIVEABLE( l_U570 ))
            {
                if ((((IS_CAR_MODEL( l_U570, -1660661558 )) || (IS_CAR_MODEL( l_U570, 837858166 ))) || (IS_CAR_MODEL( l_U570, 353883353 ))) || (IS_CAR_MODEL( l_U570, 2027357303 )))
                {
                    SET_CHAR_COORDINATES( sub_2988(), 787.54210000, -197.84740000, 5.91600000 );
                    SET_CHAR_HEADING( sub_2988(), 116.63840000 );
                }
                else if ((((((((IS_CAR_MODEL( l_U570, 400514754 )) || (IS_CAR_MODEL( l_U570, 861409633 ))) || (IS_CAR_MODEL( l_U570, 1033245328 ))) || (IS_CAR_MODEL( l_U570, 1064455782 ))) || (IS_CAR_MODEL( l_U570, 290013743 ))) || (IS_CAR_MODEL( l_U570, 1759673526 ))) || (IS_CAR_MODEL( l_U570, -1043459709 ))) || (IS_CAR_MODEL( l_U570, -488123221 )))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_2988(), l_U717._fU0, l_U717._fU4, l_U717._fU8 );
                    DELETE_CAR( ref l_U570 );
                }
                if (NOT (IS_CAR_DEAD( l_U570 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( l_U570 );
                }
            }
            else
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_2988(), l_U717._fU0, l_U717._fU4, l_U717._fU8 );
                DELETE_CAR( ref l_U570 );
            }
        }
    }
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_CREATE_RANDOM_COPS( 0 );
    REQUEST_MODEL( l_U596 );
    REQUEST_MODEL( l_U597 );
    REQUEST_MODEL( 237497537 );
    REQUEST_MODEL( 904750859 );
    REQUEST_MODEL( 1185749008 );
    REQUEST_MODEL( 1983427299 );
    REQUEST_MODEL( -459749237 );
    REQUEST_MODEL( -1341473171 );
    LOAD_ALL_OBJECTS_NOW();
    while ((((((((NOT (HAS_MODEL_LOADED( l_U596 ))) || (NOT (HAS_MODEL_LOADED( l_U596 )))) || (NOT (HAS_MODEL_LOADED( 904750859 )))) || (NOT (HAS_MODEL_LOADED( 1185749008 )))) || (NOT (HAS_MODEL_LOADED( 1983427299 )))) || (NOT (HAS_MODEL_LOADED( -459749237 )))) || (NOT (HAS_MODEL_LOADED( -1341473171 )))) || (NOT (HAS_MODEL_LOADED( 237497537 ))))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT( 1185749008, 718.02100000, -254.87400000, 10.55200000, ref l_U571, 1 );
    CREATE_OBJECT( 1185749008, 709.17100000, -250.72400000, 10.55200000, ref l_U572, 1 );
    SET_OBJECT_HEADING( l_U571, 155.00000000 );
    SET_OBJECT_HEADING( l_U572, 155.00000000 );
    FREEZE_OBJECT_POSITION( l_U571, 1 );
    FREEZE_OBJECT_POSITION( l_U572, 1 );
    CLEAR_AREA( 713.45180000, -252.95970000, 10.57200000, 200, 1 );
    CREATE_OBJECT_NO_OFFSET( 1983427299, 677.75500000, -314.24600000, 10.44500000, ref l_U573, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U573, "GtaMloRoom02" );
    SET_OBJECT_HEADING( l_U573, 335.27300000 );
    FREEZE_OBJECT_POSITION( l_U573, 1 );
    CREATE_OBJECT( -1341473171, l_U723._fU0, l_U723._fU4, l_U723._fU8, ref l_U582, 1 );
    SET_OBJECT_VISIBLE( l_U582, 0 );
    SET_OBJECT_COLLISION( l_U582, 0 );
    SET_OBJECT_HEADING( l_U582, 339.79030000 );
    ADD_SCENARIO_BLOCKING_AREA( 641, 65195, -10, 808, 65358, 40.50000000 );
    SWITCH_ROADS_OFF( 641, 65195, -10, 808, 65358, 40.50000000 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U603 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U604 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U606 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U605 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U607 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U608 );
    SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE( l_U606, 150 );
    SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE( l_U605, 150 );
    SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE( l_U607, 150 );
    SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE( l_U608, 150 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U606, 65 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U605, 65 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U607, 70 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U608, 60 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U606, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U605, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U607, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U608, 0 );
    SET_RELATIONSHIP( 5, 24, 0 );
    sub_5492( "FIN1BAU" );
    LOAD_ADDITIONAL_TEXT( "FIN1BAU", 6 );
    sub_5629( 0, sub_2988(), "NIKO", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\FIN1B_KILL_DIMITRI" )))
    {
        WAIT( 0 );
    }
    l_U1022 = GET_SOUND_ID();
    PLAY_SOUND_FROM_POSITION( l_U1022, "FIN1B_KILL_DIMITRI_ENGINE_ROOM", 679, 65213, 0 );
    l_U1020 = GET_SOUND_ID();
    l_U1021 = GET_SOUND_ID();
    REQUEST_ANIMS( "MISSFINALE1B" );
    REQUEST_ANIMS( "LIFT_BOX" );
    while ((NOT (HAVE_ANIMS_LOADED( "MISSFINALE1B" ))) || (NOT (HAVE_ANIMS_LOADED( "LIFT_BOX" ))))
    {
        WAIT( 0 );
    }
    sub_6036();
    sub_7578();
    for ( I = 0; I <= 4; I++ )
    {
        l_U674[I] = 0;
        l_U680[I] = 0;
    }
    CREATE_OBJECT( -459749237, 754.65800000, -217.91910000, 4.83930000, ref l_U574, 1 );
    CREATE_OBJECT( -459749237, 752.60080000, -217.50330000, 4.81880000, ref l_U575, 1 );
    CREATE_OBJECT( -459749237, 780.80820000, -183.89430000, 5.07900000, ref l_U576, 1 );
    CREATE_OBJECT( -459749237, 778.46570000, -185.11090000, 5.05140000, ref l_U577, 1 );
    CREATE_OBJECT( -459749237, 778.61020000, -187.41610000, 5.02510000, ref l_U578, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U576, "GtaMloRoom02" );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U577, "carholdrm" );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U578, "carholdrm" );
    CREATE_OBJECT( -459749237, 749.24160000, -215.26310000, 4.81880000, ref l_U579, 1 );
    CREATE_OBJECT( -459749237, 749.84120000, -214.02500000, 4.81880000, ref l_U580, 1 );
    CREATE_OBJECT( -459749237, 749.21580000, -214.24960000, 5.13450000, ref l_U581, 1 );
    SET_OBJECT_HEADING( l_U579, 72.00000000 );
    SET_OBJECT_HEADING( l_U580, 218.80000000 );
    SET_OBJECT_HEADING( l_U581, 123.00000000 );
    sub_8783();
    sub_9195();
    sub_10494();
    sub_11112();
    sub_11437( 1 );
    if (((((NOT (IS_CHAR_DEAD( l_U556[0] ))) AND (NOT (IS_CHAR_DEAD( l_U556[1] )))) AND (NOT (IS_CHAR_DEAD( l_U556[2] )))) AND (NOT (IS_CHAR_DEAD( l_U499[0] )))) AND (NOT (IS_CHAR_DEAD( l_U499[1] ))))
    {
        ATTACH_OBJECT_TO_PED( l_U574, l_U499[0], 1232, l_U922, l_U925, 0 );
        ATTACH_OBJECT_TO_PED( l_U575, l_U499[1], 1232, l_U922, l_U925, 0 );
        ATTACH_OBJECT_TO_PED( l_U576, l_U556[0], 1232, l_U922, l_U925, 0 );
        ATTACH_OBJECT_TO_PED( l_U577, l_U556[1], 1232, l_U922, l_U925, 0 );
        ATTACH_OBJECT_TO_PED( l_U578, l_U556[2], 1232, l_U922, l_U925, 0 );
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U499[0], "crry_prtial", "LIFT_BOX", 4.00000000, 1, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U499[1], "crry_prtial", "LIFT_BOX", 4.00000000, 1, 0, 0, 0, -1 );
    }
    SETTIMERA( 0 );
    return;
}

void sub_3881()
{
    if (g_U64542._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U64542._fU4 )))
    {
        return;
    }
    DELETE_CHAR( ref g_U64542._fU4 );
    g_U64542._fU0 = 57;
    g_U64542._fU4 = nil;
    g_U64542._fU8 = 28;
    return;
}

void sub_5492(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_5509();
    return;
}

void sub_5509()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_5629(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5709( "\n PED NUMBER ", uParam0 );
    sub_5749( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5709(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5749(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6036()
{
    l_U726[0] = {755.66720000, -216.50860000, 4.81880000};
    l_U726[1] = {753.58440000, -216.31650000, 4.81880000};
    l_U726[2] = {751.34940000, -211.26330000, 4.83380000};
    l_U736[0] = {734.09150000, -226.62870000, 8.88960000};
    l_U736[1] = {732.09190000, -238.85130000, 8.87790000};
    l_U736[2] = {721.34260000, -262.79720000, 8.87280000};
    l_U736[3] = {714.33610000, -278.34190000, 8.87610000};
    l_U736[4] = {705.93010000, -297.72710000, 8.87430000};
    l_U736[5] = {739.60880000, -215.54070000, 8.89110000};
    l_U736[6] = {728.29000000, -246.12200000, 8.83560000};
    l_U736[7] = {687.38710000, -282.95360000, 8.87320000};
    l_U736[8] = {707.47200000, -242.82430000, 8.87120000};
    l_U736[9] = {719.95720000, -268.60000000, 8.87340000};
    l_U736[10] = {699.34780000, -308.55670000, 14.00880000};
    l_U736[11] = {685.27100000, -330.03170000, 8.84710000};
    l_U736[12] = {680.96640000, -299.22890000, 8.87060000};
    l_U736[13] = {714.13230000, -231.81860000, 8.84150000};
    l_U736[14] = {710.03700000, -276.16870000, 8.84180000};
    l_U736[15] = {672.45640000, -324.08000000, 8.87240000};
    l_U736[16] = {730.66000000, -196.68000000, 8.85380000};
    l_U788[0] = {690.50850000, -305.89530000, 8.94000000};
    l_U788[1] = {692.92620000, -310.69600000, 8.94000000};
    l_U788[2] = {687.54500000, -312.02450000, 8.94000000};
    l_U788[3] = {680.84560000, -319.31040000, 11.51640000};
    l_U801[0] = {693.25420000, -306.02380000, 14.00320000};
    l_U801[1] = {684.93020000, -312.18110000, 14.03490000};
    l_U801[2] = {689.14840000, -309.04290000, 14.01610000};
    l_U811[0] = {676.38870000, -315.55370000, 14.00780000};
    l_U811[1] = {677.85700000, -325.02320000, 14.04460000};
    l_U811[2] = {684.58840000, -326.55180000, 14.04460000};
    l_U811[3] = {690.36870000, -321.98040000, 14.00780000};
    l_U811[4] = {679.81780000, -315.28880000, 17.24800000};
    l_U811[5] = {690.98650000, -317.61250000, 17.24780000};
    l_U811[6] = {696.80990000, -309.25970000, 21.88250000};
    l_U833[0] = {686.35490000, -303.93490000, 21.85230000};
    l_U837[0] = {679.77650000, -315.44600000, 17.21200000};
    l_U837[1] = {682.56090000, -301.04980000, 13.99910000};
    l_U837[2] = {698.38280000, -310.27810000, 14.00780000};
    l_U837[3] = {686.61710000, -317.40690000, 14.01000000};
    l_U837[4] = {698.44000000, -310.35000000, 14.01000000};
    l_U837[5] = {699.88000000, -308.72000000, 14.01000000};
    l_U856[0] = {690.60820000, -307.81410000, 8.94000000};
    l_U856[1] = {704.10630000, -299.67800000, 8.87420000};
    l_U856[2] = {712.70840000, -276.72920000, 8.87620000};
    l_U856[3] = {694.04210000, -271.47610000, 8.87610000};
    l_U856[4] = {695.04000000, -307.96000000, 8.90530000};
    l_U856[5] = {682.86860000, -314.54310000, 8.90530000};
    l_U875[0] = {713.01480000, -252.21060000, 15.25670000};
    l_U879[0] = {705.40580000, -267.60240000, 2.25820000};
    l_U879[1] = {715.40020000, -263.79540000, 2.25820000};
    l_U879[2] = {702.91270000, -264.67970000, 2.25820000};
    l_U879[3] = {703.71790000, -257.92650000, 2.25820000};
    l_U892[0] = {693.00980000, -307.44840000, 2.75060000};
    l_U892[1] = {693.16800000, -298.90430000, 2.22810000};
    l_U892[2] = {699.27550000, -293.14330000, 2.22810000};
    l_U892[3] = {702.09330000, -283.75620000, 3.22810000};
    l_U905[0] = {694.79140000, -301.91270000, 2.25820000};
    l_U905[1] = {695.91060000, -296.34270000, 2.22310000};
    l_U905[2] = {690.88880000, -298.62550000, 2.25850000};
    l_U915[0] = {689.30630000, -315.08730000, 3.09340000};
    l_U915[1] = {688.33750000, -317.66060000, 3.39290000};
    return;
}

void sub_7578()
{
    l_U933[0] = 86.93520000;
    l_U933[1] = 63.85500000;
    l_U933[2] = 261.37820000;
    l_U937[0] = 302.68380000;
    l_U937[1] = 345.08200000;
    l_U937[2] = 5.85900000;
    l_U937[3] = 323.71860000;
    l_U937[4] = 329.59160000;
    l_U937[5] = 246.56850000;
    l_U937[6] = 11.10540000;
    l_U937[7] = 355.69130000;
    l_U937[8] = 339.33660000;
    l_U937[9] = 259.25800000;
    l_U937[10] = 343.95230000;
    l_U937[15] = 41.74230000;
    l_U937[11] = 289.40630000;
    l_U937[12] = 0.00000000;
    l_U937[13] = 330.34470000;
    l_U937[14] = 353.52880000;
    l_U937[15] = 68.79530000;
    l_U937[16] = 157.48610000;
    l_U955[0] = 263.79850000;
    l_U955[1] = 316.50640000;
    l_U955[2] = 348.18080000;
    l_U955[3] = 332.01860000;
    l_U960[0] = 0.00000000;
    l_U960[1] = 162.57460000;
    l_U960[2] = 157.99390000;
    l_U964[0] = 78.25320000;
    l_U964[1] = 49.93610000;
    l_U964[2] = 313.53300000;
    l_U964[3] = 322.11580000;
    l_U964[4] = 132.94020000;
    l_U964[5] = 135.44550000;
    l_U964[6] = 157.50250000;
    l_U972[0] = -118.78780000;
    l_U974[0] = 161.33000000;
    l_U974[1] = 157.41000000;
    l_U974[2] = 154.52620000;
    l_U974[3] = 338.00390000;
    l_U974[4] = 154.52620000;
    l_U974[5] = 154.52620000;
    l_U981[0] = 140.21970000;
    l_U981[1] = 143.60910000;
    l_U981[2] = 174.31190000;
    l_U981[3] = 183.80710000;
    l_U981[4] = 156.31190000;
    l_U981[5] = 227.80710000;
    l_U988[0] = 153.76840000;
    l_U990[0] = 351.12590000;
    l_U990[1] = 356.17980000;
    l_U990[2] = 346.66300000;
    l_U990[3] = 339.41870000;
    l_U995[0] = 342.35580000;
    l_U995[1] = 322.79420000;
    l_U995[2] = 328.21710000;
    l_U999[0] = 17.98840000;
    l_U999[1] = 41.28120000;
    return;
}

void sub_8783()
{
    CREATE_PICKUP_ROTATE( 583488944, 22, 7, 745.66600000, -205.02000000, 9.34000000, 90.00000000, -106.00000000, -25.92000000, ref l_U583 );
    CREATE_PICKUP_ROTATE( 897930585, 22, 30, 678.53000000, -311.17300000, 14.50000000, 65446, -72.72000000, 65.44000000, ref l_U584 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U584, "cargo_cabsrm" );
    CREATE_PICKUP_ROTATE( 897930585, 22, 30, 744.20000000, -205.91500000, 9.34000000, 65446, 65462, 61.52000000, ref l_U585 );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 720.75000000, -251.38000000, 3.47000000, 0, 0, -24.34000000, ref l_U587 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U587, "carholdrm" );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 691.13000000, -314.01000000, 14.10000000, 90, 0, 28, ref l_U588 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U588, "cargo_cabsrm" );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 743.23000000, -197.61000000, 16.34000000, 90, 0, 290, ref l_U589 );
    CREATE_PICKUP_WITH_AMMO( 993473937, 22, 3, 743.87000000, -195.82000000, 15.89000000, ref l_U590 );
    return;
}

void sub_9195()
{
    int I;

    for ( I = 0; I <= 16; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U736[I]._fU0, l_U736[I]._fU4, l_U736[I]._fU8, ref l_U503[I], 1 );
        SET_CHAR_HEADING( l_U503[I], l_U937[I] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U503[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U503[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U503[I], l_U604 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U503[I], 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[I], 1 );
        SET_SENSE_RANGE( l_U503[I], 150 );
        SET_CHAR_KEEP_TASK( l_U503[I], 1 );
        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U503[I], 0 );
        TASK_SET_IGNORE_WEAPON_RANGE_FLAG( l_U503[I], 1 );
    }
    GIVE_WEAPON_TO_CHAR( l_U503[0], 10, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[1], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[2], 14, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[3], 14, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[4], 14, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[5], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[6], 10, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[7], 14, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[8], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[9], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[10], 14, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[11], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[12], 10, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[13], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[14], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[15], 9, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U503[16], 10, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U503[0], 10, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[1], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[2], 14, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[3], 14, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[4], 14, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[5], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[6], 10, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[7], 14, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[8], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[9], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[10], 14, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[11], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[12], 10, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[13], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[14], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[15], 9, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U503[16], 10, 1 );
    for ( I = 0; I <= 16; I++ )
    {
        if (HAS_CHAR_GOT_WEAPON( l_U503[I], 14 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U503[I], l_U607 );
        }
        else if ((HAS_CHAR_GOT_WEAPON( l_U503[I], 12 )) || (HAS_CHAR_GOT_WEAPON( l_U503[I], 10 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U503[I], l_U608 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U503[I], l_U605 );
        }
        if (NOT ((I == 6) || (I == 9)))
        {
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U503[I], l_U736[I], 6.50000000 );
        }
    }
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U503[10], l_U736[10], 0.20000000 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U503[14], l_U736[14], 0.20000000 );
    SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U503[16], 724.91000000, -219.46000000, 8.18000000, 714.97000000, -215.27000000, 12.24000000, 12 );
    return;
}

void sub_9217()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U1019 );
    if (l_U1019 == 0)
    {
        return l_U596;
        break;
    }
    if (l_U1019 == 1)
    {
        return l_U597;
        break;
    }
    return l_U596;
}

void sub_10494()
{
    int I;

    CREATE_CAR( 904750859, 752.81280000, -222.24850000, 6.04940000, ref l_U568, 1 );
    SET_CAR_HEADING( l_U568, 174.04830000 );
    SET_CAR_ENGINE_ON( l_U568, 1, 1 );
    CREATE_CAR( 904750859, 767.20060000, -195.57610000, 6.22060000, ref l_U569, 1 );
    SET_CAR_HEADING( l_U569, 156 );
    SET_CAR_ENGINE_ON( l_U569, 1, 1 );
    CREATE_CHAR_INSIDE_CAR( l_U569, 26, l_U596, ref l_U497 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U497 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U497, 24 );
    SET_CHAR_DECISION_MAKER( l_U497, l_U604 );
    SET_COMBAT_DECISION_MAKER( l_U497, l_U606 );
    GIVE_WEAPON_TO_CHAR( l_U497, 9, 30000, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U497, 1 );
    SET_CHAR_KEEP_TASK( l_U497, 1 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U497, 0 );
    STOP_CAR_BREAKING( l_U569, 1 );
    for ( I = 0; I <= 2; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U726[I]._fU0, l_U726[I]._fU4, l_U726[I]._fU8, ref l_U499[I], 1 );
        SET_CHAR_HEADING( l_U499[I], l_U933[I] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U499[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U499[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U499[I], l_U604 );
        SET_COMBAT_DECISION_MAKER( l_U499[I], l_U606 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U499[I], 1 );
        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U499[I], 0 );
        SET_CHAR_KEEP_TASK( l_U499[I], 1 );
    }
    sub_5629( 2, l_U499[2], "RUSSIAN_1_M", 0 );
    sub_5629( 4, l_U499[1], "RUSSIAN_2_M", 0 );
    GIVE_WEAPON_TO_CHAR( l_U499[2], 10, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U499[2], 10, 1 );
    return;
}

void sub_11112()
{
    int I;

    for ( I = 0; I <= 3; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U892[I]._fU0, l_U892[I]._fU4, l_U892[I]._fU8, ref l_U556[I], 1 );
        if (NOT (I == 0))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U556[I], "carholdrm" );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U556[I], 1 );
        }
        else
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U556[I], "gtamloroom02" );
        }
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U556[I] );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U556[I], 1 );
    }
    CREATE_CHAR( 26, sub_9217(), 698.16490000, -307.18680000, 21.88250000, ref l_U538[0], 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U538[0] );
    TASK_PLAY_ANIM( l_U538[0], "GBGE_SMOKE", "MISSFINALE1B", 4.00000000, 1, 0, 0, 0, -1 );
    return;
}

void sub_11437(boolean bParam0)
{
    CREATE_CHAR( 26, 237497537, l_U720._fU0, l_U720._fU4, l_U720._fU8, ref l_U496, 1 );
    SET_CHAR_PROP_INDEX( l_U496, 1, 0 );
    if (NOT (IS_CHAR_DEAD( l_U496 )))
    {
        SET_CHAR_HEADING( l_U496, l_U929 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U496, "carholdrm" );
        SET_CHAR_RELATIONSHIP_GROUP( l_U496, 24 );
        SET_COMBAT_DECISION_MAKER( l_U496, l_U605 );
        SET_CHAR_DECISION_MAKER( l_U496, l_U604 );
        if (NOT bParam0)
        {
            GIVE_WEAPON_TO_CHAR( l_U496, 13, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U496, 13, 1 );
        }
        SET_PED_DIES_WHEN_INJURED( l_U496, 1 );
        SET_CHAR_MAX_HEALTH( l_U496, 900 );
        SET_CHAR_HEALTH( l_U496, 900 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U496, 1 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U496, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U496, 0, 0, 0 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U496, 686.53000000, -295.71000000, 3.30000000, 4.00000000 );
        SET_CHAR_PROOFS( l_U496, 1, 1, 1, 1, 1 );
        UNLOCK_RAGDOLL( l_U496, 0 );
        SET_CHAR_KEEP_TASK( l_U496, 1 );
        sub_5629( 1, l_U496, "DIMITRI", 0 );
        if (NOT bParam0)
        {
            l_U663 = 1;
        }
    }
    return;
}

void sub_12247()
{
    if (l_U643)
    {
        if (NOT (IS_CHAR_IN_AREA_2D( sub_2988(), 662.34000000, 65181, 830.73000000, -151.11000000, 0 )))
        {
            ALLOW_EMERGENCY_SERVICES( 1 );
            SET_CREATE_RANDOM_COPS( 1 );
            SET_WANTED_MULTIPLIER( 1.00000000 );
            l_U643 = 0;
        }
    }
    else if (IS_CHAR_IN_AREA_2D( sub_2988(), 662.34000000, 65181, 830.73000000, -151.11000000, 0 ))
    {
        ALLOW_EMERGENCY_SERVICES( 0 );
        SET_CREATE_RANDOM_COPS( 0 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        l_U643 = 1;
    }
    return;
}

void sub_12508()
{
    unknown uVar2;
    unknown uVar3;

    if ((IS_SCREEN_FADED_IN()) || (l_U631))
    {
        if ((((((sub_12535()) || (l_U631)) AND (NOT (l_U1026 == 0))) AND (NOT (l_U1026 == 6))) AND ((TIMERA() >= 1000) || (l_U631))) AND (NOT IS_SCREEN_FADING()))
        {
            CLEAR_PRINTS();
            if (NOT l_U631)
            {
                if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
                {
                    DO_SCREEN_FADE_OUT( 500 );
                }
            }
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U646 = 1;
            WAIT( 0 );
            l_U1026 = 6;
        }
    }
    switch (l_U1026)
    {
        case 0:
        BEGIN_CAM_COMMANDS( ref l_U602 );
        SET_USE_HIGHDOF( 1 );
        CREATE_CAM( 14, ref l_U598 );
        CREATE_CAM( 14, ref l_U599 );
        CREATE_CAM( 14, ref l_U600 );
        CREATE_CAM( 3, ref l_U601 );
        SET_CAM_POS( l_U599, 758.78420000, -167.00820000, 5.95593200 );
        SET_CAM_ROT( l_U599, 18.55985000, 0.00000000, 130.47740000 );
        SET_CAM_POS( l_U600, 751.94150000, -210.10920000, 6.23417300 );
        SET_CAM_ROT( l_U600, 2.05866200, -0.00000000, -173.94560000 );
        SET_CAM_FOV( l_U599, 47.50000000 );
        SET_CAM_FOV( l_U600, 47.50000000 );
        SET_CAM_FAR_DOF( l_U599, 80 );
        SET_CAM_FAR_DOF( l_U600, 80 );
        SET_CAM_ACTIVE( l_U599, 1 );
        SET_CAM_PROPAGATE( l_U599, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        END_CAM_COMMANDS( ref l_U602 );
        LOAD_SCENE( 758, 65359, 9 );
        WAIT( 2000 );
        REQUEST_CAR_RECORDING( 330 );
        REQUEST_CAR_RECORDING( 331 );
        while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 330 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 331 ))))
        {
            WAIT( 0 );
        }
        CLEAR_AREA( l_U726[0]._fU0, l_U726[0]._fU4, l_U726[0]._fU8, 200.00000000, 1 );
        SET_WIDESCREEN_BORDERS( 1 );
        if (g_U9893._fU24)
        {
            DO_SCREEN_FADE_IN( 1000 );
        }
        else
        {
            l_U631 = 1;
        }
        l_U1026 = 1;
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        break;
        case 1:
        if ((TIMERB() >= 0) AND (NOT l_U632))
        {
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_ACTIVE( l_U600, 1 );
            SET_CAM_PROPAGATE( l_U600, 1 );
            SET_CAM_ACTIVE( l_U601, 1 );
            SET_CAM_PROPAGATE( l_U601, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U601, l_U599, l_U600, 11000, 0 );
            END_CAM_COMMANDS( ref l_U602 );
            l_U632 = 1;
        }
        if ((l_U1011 == 0) AND (TIMERB() >= 4000))
        {
            PRINT_NOW( "FIN1B_CUT1", 7500, 1 );
            l_U1011 = 1;
        }
        if (((NOT l_U633) AND (TIMERB() >= 2000)) AND (IS_VEH_DRIVEABLE( l_U568 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U568, 330 );
            l_U633 = 1;
        }
        if (((NOT l_U634) AND (TIMERB() >= 2000)) AND (IS_VEH_DRIVEABLE( l_U569 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U569, 331 );
            l_U634 = 1;
        }
        if ((((((NOT l_U635) AND (TIMERB() >= 1900)) AND (NOT (IS_CHAR_DEAD( l_U499[0] )))) AND (NOT (IS_CHAR_DEAD( l_U499[1] )))) AND (DOES_OBJECT_EXIST( l_U574 ))) AND (DOES_OBJECT_EXIST( l_U575 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U611 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 750.48380000, -216.35750000, 5.82380000, 2, -2, 0.40000000 );
            TASK_PAUSE( 0, 1400 );
            TASK_PLAY_ANIM( 0, "putdwn", "LIFT_BOX", 4.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U611 );
            TASK_PERFORM_SEQUENCE( l_U499[0], l_U611 );
            CLEAR_SEQUENCE_TASK( l_U611 );
            OPEN_SEQUENCE_TASK( ref l_U611 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 751.19560000, -214.92630000, 5.82380000, 2, -2, 0.40000000 );
            TASK_PAUSE( 0, 1300 );
            TASK_PLAY_ANIM( 0, "putdwn", "LIFT_BOX", 4.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U611 );
            TASK_PERFORM_SEQUENCE( l_U499[1], l_U611 );
            CLEAR_SEQUENCE_TASK( l_U611 );
            l_U635 = 1;
        }
        if (l_U635)
        {
            if (NOT l_U636)
            {
                sub_14017( ref l_U499[0], 0 );
            }
            if (NOT l_U637)
            {
                sub_14017( ref l_U499[1], 1 );
            }
        }
        if (TIMERB() >= 12000)
        {
            l_U1026 = 2;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U496 )))
            {
                SET_CHAR_COORDINATES_NO_OFFSET( l_U496, 695.00760000, -292.77120000, 3.25790000 );
                SET_CHAR_HEADING( l_U496, 147.11200000 );
            }
            if (DOES_VEHICLE_EXIST( l_U568 ))
            {
                DELETE_CAR( ref l_U568 );
            }
            if (NOT (IS_CHAR_DEAD( l_U496 )))
            {
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U496, 1 );
            }
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_ACTIVE( l_U600, 0 );
            SET_CAM_PROPAGATE( l_U600, 0 );
            SET_CAM_ACTIVE( l_U601, 0 );
            SET_CAM_PROPAGATE( l_U601, 0 );
            SET_CAM_POS( l_U599, 708.78000000, -252.77230000, 12.20000000 );
            WAIT( 100 );
            SET_CAM_POS( l_U599, 708.78000000, -252.77230000, 9.21000000 );
            WAIT( 100 );
            SET_CAM_POS( l_U599, 694.59000000, -303.08000000, 4.63000000 );
            SET_CAM_POS( l_U599, 694.34150000, -307.14890000, 4.11353000 );
            SET_CAM_ROT( l_U599, 1.60509200, 0.00000000, 11.58832000 );
            SET_CAM_FOV( l_U599, 39.00000000 );
            SET_CAM_NEAR_DOF( l_U599, 0.20000000 );
            SET_CAM_NEAR_DOF( l_U600, 0.20000000 );
            SET_CAM_FAR_DOF( l_U599, 15.00000000 );
            SET_CAM_FAR_DOF( l_U600, 15.00000000 );
            WAIT( 200 );
            END_CAM_COMMANDS( ref l_U602 );
            SET_CHAR_VISIBLE( sub_2988(), 0 );
            if (IS_CHAR_IN_ANY_CAR( sub_2988() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_2988(), 697, 65240, 14 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_2988(), 697, 65240, 14 );
            }
            GET_INTERIOR_AT_COORDS( 693, 65228, 5, ref uVar2 );
            ACTIVATE_INTERIOR( uVar2, 1 );
            LOAD_SCENE( 694.34150000, -307.14890000, 4.11353000 );
            WAIT( 2000 );
            if (NOT (IS_CHAR_DEAD( l_U556[1] )))
            {
                SET_CHAR_HEADING( l_U556[1], 14.91890000 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 693.16990000, -292.41830000, 3.22810000 );
                TASK_EXTEND_ROUTE( 697.41380000, -284.40370000, 3.22810000 );
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                TASK_PERFORM_SEQUENCE( l_U556[1], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
            }
            if (NOT (IS_CHAR_DEAD( l_U556[2] )))
            {
                SET_CHAR_COORDINATES( l_U556[2], 714, 65287, 3.17000000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U556[3] )))
            {
                SET_CHAR_HEADING( l_U556[3], 337.27410000 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 697.07790000, -294.57860000, 3.22810000 );
                TASK_EXTEND_ROUTE( 692.56240000, -300.36560000, 3.22810000 );
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_PAUSE( 0, 4000 );
                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                TASK_PERFORM_SEQUENCE( l_U556[3], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
            }
            if (NOT (IS_CHAR_DEAD( l_U556[0] )))
            {
                SET_CHAR_HEADING( l_U556[0], 337.27410000 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 695.41370000, -301.30980000, 2.29070000 );
                TASK_EXTEND_ROUTE( 691.90620000, -297.74430000, 2.26320000 );
                TASK_EXTEND_ROUTE( 696.11010000, -284.53360000, 2.26320000 );
                TASK_FOLLOW_POINT_ROUTE( l_U556[0], 2, 0 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U496 ))) AND (NOT (IS_CHAR_INJURED( l_U556[0] ))))
            {
                TASK_LOOK_AT_CHAR( l_U496, l_U556[0], -2, 8 );
            }
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U556[0], "crry_prtial", "LIFT_BOX", 4.00000000, 1, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U556[1], "crry_prtial", "LIFT_BOX", 4.00000000, 1, 0, 0, 0, -1 );
            WAIT( 1000 );
            DO_SCREEN_FADE_IN( 500 );
            SETTIMERB( 0 );
        }
        break;
        case 2:
        if ((l_U1011 == 1) AND (TIMERB() >= 600))
        {
            PRINT_NOW( "FIN1B_CUT2", 7500, 1 );
            l_U1011 = 2;
        }
        if ((TIMERB() >= 8000) AND (l_U1012 == 0))
        {
            sub_15889( "FIN1B_SHIP", 0, 1, ref l_U613, 7, 1 );
            SET_CAM_POS( l_U599, 693.66490000, -293.59940000, 3.43608500 );
            SET_CAM_ROT( l_U599, 15.47269000, 0.00000000, -65.43372000 );
            SET_CAM_FOV( l_U599, 28.50000000 );
            SET_CAM_FAR_DOF( l_U599, 4.00000000 );
            SET_CAM_ACTIVE( l_U600, 0 );
            SET_CAM_PROPAGATE( l_U600, 0 );
            SET_CAM_ACTIVE( l_U601, 0 );
            SET_CAM_PROPAGATE( l_U601, 0 );
            SET_CAM_NEAR_DOF( l_U599, 0.20000000 );
            SET_CAM_NEAR_DOF( l_U600, 0.20000000 );
            SET_CAM_FAR_DOF( l_U599, 4.00000000 );
            SET_CAM_FAR_DOF( l_U600, 4.00000000 );
            l_U1012 = 1;
            SETTIMERB( 0 );
        }
        if ((TIMERB() >= 4000) AND (l_U1012 == 1))
        {
            sub_17107( 0 );
            l_U1026 = 3;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_POS( l_U599, 708.08810000, -293.79620000, 10.27183000 );
            SET_CAM_ROT( l_U599, 7.42031100, 0.00000000, 137.58390000 );
            SET_CAM_POS( l_U600, 708.03470000, -293.84850000, 18.88340000 );
            SET_CAM_ROT( l_U600, 11.70112000, -0.00000000, 120.88670000 );
            SET_CAM_FOV( l_U599, 40.80001000 );
            SET_CAM_FOV( l_U600, 40.80001000 );
            SET_CAM_FAR_DOF( l_U599, 100.00000000 );
            SET_CAM_FAR_DOF( l_U600, 100.00000000 );
            SET_CAM_ACTIVE( l_U600, 1 );
            SET_CAM_PROPAGATE( l_U600, 1 );
            SET_CAM_ACTIVE( l_U601, 1 );
            SET_CAM_PROPAGATE( l_U601, 1 );
            END_CAM_COMMANDS( ref l_U602 );
            SETTIMERB( 0 );
            GET_GAME_VIEWPORT_ID( ref uVar3 );
            CLEAR_ROOM_FOR_VIEWPORT( uVar3 );
            LOAD_SCENE( 705.90090000, -307.87630000, 14.66784000 );
            WAIT( 2200 );
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_INTERP_STYLE_CORE( l_U601, l_U599, l_U600, 12000, 0 );
            END_CAM_COMMANDS( ref l_U602 );
            DO_SCREEN_FADE_IN( 500 );
        }
        break;
        case 3:
        if ((l_U1011 == 2) AND (TIMERB() >= 1000))
        {
            PRINT_NOW( "FIN1B_CUT3", 7500, 1 );
            l_U1011 = 3;
        }
        if (TIMERB() >= 16000)
        {
            sub_17107( 1 );
            l_U1026 = 5;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_POS( l_U599, 763.78940000, -190.33670000, 22.25013000 );
            SET_CAM_ROT( l_U599, -9.46902000, -0.00000000, 113.48380000 );
            SET_CAM_ACTIVE( l_U600, 0 );
            SET_CAM_PROPAGATE( l_U600, 0 );
            SET_CAM_ACTIVE( l_U601, 0 );
            SET_CAM_PROPAGATE( l_U601, 0 );
            SET_CAM_FOV( l_U599, 65.50000000 );
            END_CAM_COMMANDS( ref l_U602 );
            WAIT( 1000 );
            DO_SCREEN_FADE_IN( 500 );
            SETTIMERB( 0 );
        }
        break;
        case 5:
        if ((l_U1011 == 3) AND (TIMERB() >= 1000))
        {
            PRINT_NOW( "FIN1B_CUT4", 7500, 1 );
            l_U1011 = 4;
        }
        if (TIMERB() >= 8000)
        {
            l_U1026 = 6;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SETTIMERB( 0 );
        }
        break;
        case 6:
        if (l_U646)
        {
            if (IS_VEH_DRIVEABLE( l_U569 ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U569 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U569 );
                }
                SET_CAR_COORDINATES_NO_OFFSET( l_U569, 755.21000000, 65314, 6.04800000 );
                SET_CAR_HEADING( l_U569, 156.28000000 );
                if (IS_OBJECT_ATTACHED( l_U574 ))
                {
                    DETACH_OBJECT( l_U574, 0 );
                }
                if (IS_OBJECT_ATTACHED( l_U575 ))
                {
                    DETACH_OBJECT( l_U575, 0 );
                }
            }
        }
        else
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (DOES_VEHICLE_EXIST( l_U568 ))
        {
            DELETE_CAR( ref l_U568 );
        }
        if (NOT (IS_CAR_DEAD( l_U569 )))
        {
            STOP_CAR_BREAKING( l_U569, 0 );
        }
        if ((NOT (IS_CHAR_DEAD( l_U499[0] ))) AND (NOT (IS_CHAR_DEAD( l_U499[1] ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U499[0] );
            SET_CHAR_COORDINATES( l_U499[0], 756.35050000, -217.22150000, 4.78370000 );
            SET_CHAR_HEADING( l_U499[0], 253.33000000 );
            TASK_CHAT_WITH_CHAR( l_U499[0], l_U499[1], 1, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U574 ))
        {
            SET_OBJECT_COORDINATES( l_U574, 751.20030000, -214.25120000, 4.01880000 );
        }
        if ((NOT (IS_CHAR_DEAD( l_U499[1] ))) AND (NOT (IS_CHAR_DEAD( l_U499[0] ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U499[1] );
            SET_CHAR_COORDINATES( l_U499[1], 758.02100000, -218.14770000, 4.78370000 );
            SET_CHAR_HEADING( l_U499[1], 67.63000000 );
            TASK_CHAT_WITH_CHAR( l_U499[1], l_U499[0], 0, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U575 ))
        {
            SET_OBJECT_COORDINATES( l_U575, 750.77660000, -215.57700000, 4.01880000 );
        }
        if (DOES_CHAR_EXIST( l_U538[0] ))
        {
            DELETE_CHAR( ref l_U538[0] );
        }
        sub_18847();
        BEGIN_CAM_COMMANDS( ref l_U602 );
        SET_USE_HIGHDOF( 0 );
        SET_CAM_ACTIVE( l_U598, 0 );
        SET_CAM_PROPAGATE( l_U598, 0 );
        SET_CAM_ACTIVE( l_U599, 0 );
        SET_CAM_PROPAGATE( l_U599, 0 );
        SET_CAM_ACTIVE( l_U600, 0 );
        SET_CAM_PROPAGATE( l_U600, 0 );
        SET_CAM_ACTIVE( l_U601, 0 );
        SET_CAM_PROPAGATE( l_U601, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U602 );
        SET_WIDESCREEN_BORDERS( 0 );
        ADD_BLIP_FOR_COORD( l_U708._fU0, l_U708._fU4, l_U708._fU8, ref l_U592 );
        SET_ROUTE( l_U592, 1 );
        sub_19243();
        sub_19780();
        sub_20110();
        if ((NOT (IS_CHAR_DEAD( l_U499[0] ))) AND (NOT (IS_CHAR_DEAD( l_U499[1] ))))
        {
            GIVE_WEAPON_TO_CHAR( l_U499[0], 12, 30000, 0 );
            GIVE_WEAPON_TO_CHAR( l_U499[1], 9, 30000, 0 );
        }
        l_U1025 = 1;
        l_U646 = 0;
        if (NOT (IS_CHAR_DEAD( sub_2988() )))
        {
            SET_CHAR_VISIBLE( sub_2988(), 1 );
            if (NOT (IS_CAR_DEAD( l_U570 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2988() )))
                {
                    WARP_CHAR_INTO_CAR( sub_2988(), l_U570 );
                }
            }
            else
            {
                SET_CHAR_COORDINATES_NO_OFFSET( sub_2988(), l_U717._fU0, l_U717._fU4, l_U717._fU8 );
            }
            SET_CHAR_HEADING( sub_2988(), l_U928 );
            if (NOT (IS_CAR_DEAD( l_U570 )))
            {
                FREEZE_CAR_POSITION( l_U570, 0 );
                SET_CAR_VISIBLE( l_U570, 1 );
                SET_CAR_COLLISION( l_U570, 1 );
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( l_U570 )))
                {
                    SET_CAR_HEADING( l_U570, l_U928 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U570 );
                    APPLY_FORCE_TO_CAR( l_U570, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U570 );
                }
            }
        }
        LOAD_SCENE( l_U717._fU0, l_U717._fU4, l_U717._fU8 );
        WAIT( 2600 );
        REMOVE_ANIMS( "LIFT_BOX" );
        DO_SCREEN_FADE_IN( 500 );
        PRINT_NOW( "FIN1B_01a", 7500, 1 );
        if (NOT (IS_CHAR_INJURED( sub_2988() )))
        {
            SET_PLAYER_CONTROL( sub_3568(), 1 );
        }
        SETTIMERB( 0 );
        break;
    }
    return;
}

int sub_12535()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_14017(unknown uParam0, int iParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_CHAR_PLAYING_ANIM( (uParam0^), "LIFT_BOX", "putdwn" ))
        {
            SET_CHAR_ANIM_SPEED( (uParam0^), "LIFT_BOX", "putdwn", 0.70000000 );
            GET_CHAR_ANIM_CURRENT_TIME( (uParam0^), "LIFT_BOX", "putdwn", ref l_U1009 );
            if (l_U1009 >= 0.35000000)
            {
                if (iParam1 == 0)
                {
                    DETACH_OBJECT( l_U574, 1 );
                    CLEAR_CHAR_SECONDARY_TASK( (uParam0^) );
                    OPEN_SEQUENCE_TASK( ref l_U611 );
                    TASK_PAUSE( 0, 500 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, 756.34690000, -217.67050000, 5.81880000, 2, -2 );
                    CLOSE_SEQUENCE_TASK( l_U611 );
                    TASK_PERFORM_SEQUENCE( (uParam0^), l_U611 );
                    CLEAR_SEQUENCE_TASK( l_U611 );
                    l_U636 = 1;
                }
                else
                {
                    DETACH_OBJECT( l_U575, 1 );
                    CLEAR_CHAR_SECONDARY_TASK( (uParam0^) );
                    OPEN_SEQUENCE_TASK( ref l_U611 );
                    TASK_PAUSE( 0, 500 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, 758.02810000, -218.36530000, 5.81880000, 2, -2 );
                    CLOSE_SEQUENCE_TASK( l_U611 );
                    TASK_PERFORM_SEQUENCE( (uParam0^), l_U611 );
                    CLEAR_SEQUENCE_TASK( l_U611 );
                    l_U637 = 1;
                }
            }
        }
    }
    return;
}

void sub_15889(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_15914( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_15914(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_15972( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_15972(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_15994( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    sub_16682( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_15994(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_16071( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_16071( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_16071( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_16071(unknown uParam0)
{
    return;
}

void sub_16682(int iParam0, int iParam1)
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

void sub_17107(int iParam0)
{
    if (iParam0 == 0)
    {
        if (NOT (IS_CHAR_DEAD( l_U503[10] )))
        {
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( 692.40000000, -322.90000000, 14.10000000 );
            TASK_EXTEND_ROUTE( l_U736[10]._fU0, l_U736[10]._fU4, l_U736[10]._fU8 );
            TASK_FOLLOW_POINT_ROUTE( l_U503[10], 2, 1 );
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U503[3] )))
    {
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 717.55000000, -273.55000000, 8.87000000 );
        TASK_FOLLOW_POINT_ROUTE( l_U503[3], 2, 1 );
    }
    if (NOT (IS_CHAR_DEAD( l_U503[0] )))
    {
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 731.68000000, -236.05000000, 8.87000000 );
        TASK_FOLLOW_POINT_ROUTE( l_U503[0], 2, 1 );
    }
    return;
}

void sub_18847()
{
    int I;

    if (DOES_CHAR_EXIST( l_U496 ))
    {
        DELETE_CHAR( ref l_U496 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 237497537 );
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U556[I] ))
        {
            DELETE_CHAR( ref l_U556[I] );
        }
    }
    if (DOES_OBJECT_EXIST( l_U576 ))
    {
        DELETE_OBJECT( ref l_U576 );
    }
    if (DOES_OBJECT_EXIST( l_U577 ))
    {
        DELETE_OBJECT( ref l_U577 );
    }
    if (DOES_OBJECT_EXIST( l_U578 ))
    {
        DELETE_OBJECT( ref l_U578 );
    }
    return;
}

void sub_19243()
{
    int I;

    for ( I = 0; I <= 3; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U788[I]._fU0, l_U788[I]._fU4, l_U788[I]._fU8, ref l_U521[I], 1 );
        SET_CHAR_HEADING( l_U521[I], l_U955[I] );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U521[I], "GtaMloRoom02" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U521[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U521[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U521[I], l_U604 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U521[I], 0 );
        SET_CHAR_KEEP_TASK( l_U521[I], 1 );
    }
    GIVE_WEAPON_TO_CHAR( l_U521[0], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U521[1], 9, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U521[2], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U521[3], 12, 30000, 0 );
    for ( I = 0; I <= 3; I++ )
    {
        if (HAS_CHAR_GOT_WEAPON( l_U521[I], 14 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U521[I], l_U607 );
        }
        else if ((HAS_CHAR_GOT_WEAPON( l_U521[I], 12 )) || (HAS_CHAR_GOT_WEAPON( l_U521[I], 10 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U521[I], l_U608 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U521[I], l_U605 );
        }
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U521[I], l_U788[I], 3.00000000 );
    }
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U521[3], l_U788[3], 1.00000000 );
    return;
}

void sub_19780()
{
    int I;

    for ( I = 0; I <= 0; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U833[I]._fU0, l_U833[I]._fU4, l_U833[I]._fU8, ref l_U538[I], 1 );
        SET_CHAR_HEADING( l_U538[I], l_U972[I] );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U538[I], "cargbridgerm" );
        GIVE_WEAPON_TO_CHAR( l_U538[I], 12, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U538[I], 12, 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U538[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U538[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U538[I], l_U604 );
        SET_COMBAT_DECISION_MAKER( l_U538[I], l_U608 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U538[I], l_U833[I], 2.00000000 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U538[I], 0 );
        SET_CHAR_KEEP_TASK( l_U538[I], 1 );
    }
    return;
}

void sub_20110()
{
    if (NOT (IS_CHAR_DEAD( l_U503[10] )))
    {
        CLEAR_CHAR_TASKS( l_U503[10] );
        SET_CHAR_COORDINATES( l_U503[10], l_U736[10]._fU0, l_U736[10]._fU4, l_U736[10]._fU8 );
    }
    if (NOT (IS_CHAR_DEAD( l_U503[3] )))
    {
        CLEAR_CHAR_TASKS( l_U503[3] );
        SET_CHAR_COORDINATES( l_U503[3], l_U736[3]._fU0, l_U736[3]._fU4, l_U736[3]._fU8 );
    }
    if (NOT (IS_CHAR_DEAD( l_U503[0] )))
    {
        CLEAR_CHAR_TASKS( l_U503[0] );
        SET_CHAR_COORDINATES( l_U503[0], l_U736[0]._fU0, l_U736[0]._fU4, l_U736[0]._fU8 );
    }
    return;
}

void sub_20917()
{
    boolean bVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U1010++;
    if (l_U1010 == 100)
    {
        sub_20952();
        l_U1010 = 0;
    }
    sub_21624();
    if (NOT l_U647)
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_2988(), l_U711._fU0, l_U711._fU4, l_U711._fU8, 2.50000000, 2.50000000, 4, 0 ))
        {
            sub_22086();
            l_U647 = 1;
        }
    }
    if (NOT l_U641)
    {
        if (NOT l_U639)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2988(), l_U726[2]._fU0, l_U726[2]._fU4, l_U726[2]._fU8, 3.50000000, 3.50000000, 3.50000000, 0 ))
            {
                if ((NOT l_U639) AND (NOT (IS_CHAR_INJURED( l_U499[2] ))))
                {
                    sub_22711( "FIN1B_FOFF", ref l_U625, 7, 1 );
                    TASK_AIM_GUN_AT_CHAR( l_U499[2], sub_2988(), 15000 );
                    l_U639 = 1;
                    SETTIMERA( 0 );
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_2988(), l_U726[2]._fU0, l_U726[2]._fU4, l_U726[2]._fU8, 7.00000000, 7.00000000, 7.00000000, 0 ))
        {
            if ((TIMERA() >= 14000) || (l_U640))
            {
                if ((NOT (IS_CHAR_INJURED( l_U499[2] ))) AND (NOT (sub_22957( l_U625 ))))
                {
                    sub_22711( "FIN1B_SHIP2", ref l_U625, 7, 1 );
                }
                sub_23152();
            }
        }
        else if (NOT l_U640)
        {
            l_U640 = 1;
            if (NOT (IS_CHAR_INJURED( l_U499[2] )))
            {
                TASK_AIM_GUN_AT_CHAR( l_U499[2], sub_2988(), 1 );
            }
        };;;
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2988(), l_U726[2]._fU0, l_U726[2]._fU4, l_U726[2]._fU8, 20, 20, 20, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U499[2] )))
            {
                if (NOT (IS_PED_LOOKING_AT_PED( l_U499[2], sub_2988() )))
                {
                    TASK_LOOK_AT_CHAR( l_U499[2], sub_2988(), -2, 0 );
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U499[2] )))
        {
            if (IS_PED_LOOKING_AT_PED( l_U499[2], sub_2988() ))
            {
                TASK_CLEAR_LOOK_AT( l_U499[2] );
            }
        }
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2988(), 748.52000000, -211.59470000, 7.88690000, 1.50000000, 1.50000000, 1.50000000, 0 )) AND (NOT (sub_22957( l_U625 ))))
        {
            sub_22711( "FIN1B_SHIP2", ref l_U625, 7, 1 );
            sub_23152();
        }
    }
    if ((l_U641) AND (NOT l_U642))
    {
        if (TIMERB() >= 4000)
        {
            sub_23965();
            l_U642 = 1;
            SETTIMERB( 0 );
        }
    }
    if ((NOT l_U645) AND (l_U642))
    {
        if (TIMERB() >= 60000)
        {
            if (NOT (IS_CHAR_INJURED( l_U503[6] )))
            {
                SET_COMBAT_DECISION_MAKER( l_U503[6], l_U606 );
            }
            if (NOT (IS_CHAR_INJURED( l_U503[9] )))
            {
                SET_COMBAT_DECISION_MAKER( l_U503[9], l_U606 );
            }
            l_U645 = 1;
        }
    }
    if ((NOT l_U638) AND (NOT l_U641))
    {
        bVar2 = false;
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U499[I] )))
            {
                GET_CHAR_COORDINATES( l_U499[I], ref l_U1006, ref l_U1007, ref l_U1008 );
                if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U499[I], sub_2988(), 0 )) || (((((IS_PLAYER_TARGETTING_CHAR( sub_3568(), l_U499[I] )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3568(), l_U499[I] ))) AND (IS_CHAR_ARMED( sub_2988(), 7 ))) AND (LOCATE_CHAR_ANY_MEANS_2D( sub_2988(), l_U1006, l_U1007, 12, 12, 0 ))) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U499[I], sub_2988() )))) || (((IS_CHAR_ARMED( sub_2988(), 7 )) AND (LOCATE_CHAR_ANY_MEANS_2D( sub_2988(), l_U1006, l_U1007, 9, 9, 0 ))) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U499[I], sub_2988() ))))
                {
                    bVar2 = true;
                }
            }
            else
            {
                bVar2 = true;
            }
        }
        for ( I = 0; I <= 16; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U503[I] )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[I], sub_2988(), 0 ))
                {
                    bVar2 = true;
                }
            }
            else
            {
                bVar2 = true;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U497 )))
        {
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U497, sub_2988(), 0 )) || (NOT (IS_CHAR_IN_ANY_CAR( l_U497 ))))
            {
                bVar2 = true;
            }
        }
        else
        {
            bVar2 = true;
        }
        if (IS_VEH_DRIVEABLE( l_U569 ))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U569, sub_2988() ))
            {
                bVar2 = true;
            }
        }
        else
        {
            bVar2 = true;
        }
        if (IS_CHAR_SHOOTING_IN_AREA( sub_2988(), 720, 65265, 797, 65345, 0 ))
        {
            bVar2 = true;
        }
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 687.65000000, -342.95000000, 8.00000000, 763.06000000, -180.11000000, 35.51000000, 30, 0 ))
        {
            bVar2 = true;
        }
        if (bVar2)
        {
            sub_23152();
            if (NOT (IS_CHAR_INJURED( l_U499[2] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U499[2], sub_2988(), 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    SAY_AMBIENT_SPEECH( l_U499[2], "GANG_ATTACK_WARNING", 0, 0, 0 );
                }
            }
        }
    }
    sub_24896();
    sub_25032();
    sub_28056();
    if (NOT l_U644)
    {
        if ((IS_CHAR_DEAD( l_U499[0] )) AND (DOES_CHAR_EXIST( l_U499[0] )))
        {
            GET_DEAD_CHAR_PICKUP_COORDS( l_U499[0], ref l_U1006, ref l_U1007, ref l_U1008 );
            GET_SAFE_PICKUP_COORDS( l_U1006, l_U1007, l_U1008, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            CREATE_PICKUP_WITH_AMMO( 993473937, 3, 3, uVar4._fU0, uVar4._fU4, 4.39000000, ref l_U586 );
            l_U644 = 1;
        }
    }
    if (NOT l_U648)
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_2988(), l_U714._fU0, l_U714._fU4, l_U714._fU8, 3.00000000, 3.00000000, 4, 0 ))
        {
            sub_29837();
            l_U648 = 1;
        }
    }
    GET_CHAR_COORDINATES( sub_2988(), ref l_U1006, ref l_U1007, ref l_U1008 );
    if ((l_U1008 > 20.00000000) AND (NOT l_U651))
    {
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_2988(), l_U705._fU0, l_U705._fU4, l_U705._fU8, 1.20000000, 1.20000000, 1.80000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2988(), 683.72000000, -302.61000000, 22.97000000, 1.20000000, 1.20000000, 1.80000000, 0 )))
        {
            l_U651 = 1;
        }
    }
    if (l_U651)
    {
        if (NOT l_U652)
        {
            PRINT_NOW( "FIN1B_02", 7500, 1 );
            l_U652 = 1;
        }
        GET_CHAR_COORDINATES( sub_2988(), ref l_U1006, ref l_U1007, ref l_U1008 );
        if (l_U1008 > 20.00000000)
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_2988(), l_U708._fU0, l_U708._fU4, l_U708._fU8, 1.00000000, 1.00000000, 1.00000000, 1 ))
            {
                if (sub_30818( 4, 0 ))
                {
                    if (sub_31103( 1, 1 ))
                    {
                        if (sub_31408( 4, "FIN1B_HLP1", 0 ))
                        {
                            sub_3298( 4, "FIN1B_HLP1" );
                            REMOVE_BLIP( l_U592 );
                            sub_32048();
                            l_U1025 = 3;
                        }
                    }
                }
                else
                {
                    sub_3298( 4, "FIN1B_HLP1" );
                }
            }
            else
            {
                sub_3298( 4, "FIN1B_HLP1" );
            }
        }
    }
    return;
}

void sub_20952()
{
    int I;

    for ( I = 0; I <= 16; I++ )
    {
        if ((DOES_CHAR_EXIST( l_U503[I] )) AND (IS_CHAR_DEAD( l_U503[I] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U503[I] );
        }
    }
    for ( I = 0; I <= 6; I++ )
    {
        if ((DOES_CHAR_EXIST( l_U530[I] )) AND (IS_CHAR_DEAD( l_U530[I] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U530[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if ((DOES_CHAR_EXIST( l_U499[I] )) AND (IS_CHAR_DEAD( l_U499[I] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U499[I] );
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if ((DOES_CHAR_EXIST( l_U521[I] )) AND (IS_CHAR_DEAD( l_U521[I] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U521[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if ((DOES_CHAR_EXIST( l_U526[I] )) AND (IS_CHAR_DEAD( l_U526[I] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U526[I] );
        }
    }
    for ( I = 0; I <= 0; I++ )
    {
        if ((DOES_CHAR_EXIST( l_U538[I] )) AND (IS_CHAR_DEAD( l_U538[I] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U538[I] );
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if ((DOES_CHAR_EXIST( l_U540[I] )) AND (IS_CHAR_DEAD( l_U540[I] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U540[I] );
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if ((DOES_CHAR_EXIST( l_U547[I] )) AND (IS_CHAR_DEAD( l_U547[I] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U547[I] );
        }
    }
    if ((DOES_CHAR_EXIST( l_U497 )) AND (IS_CHAR_DEAD( l_U497 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U497 );
    }
    return;
}

void sub_21624()
{
    if (NOT l_U671)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2988(), 693.16770000, -306.34270000, 9.94520000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            PLAY_SOUND_FROM_POSITION( -1, "FIN1B_KILL_DIMITRI_FIN1B_MA_03_INSIDE", 690.86860000, -303.48600000, 11.47488000 );
            l_U671 = 1;
        }
    }
    if (NOT l_U672)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2988(), 685.40500000, -312.88900000, 15.03990000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            PLAY_SOUND_FROM_POSITION( -1, "FIN1B_KILL_DIMITRI_FIN1B_MA_01_INSIDE", 683.72030000, -316.69130000, 16.76225000 );
            l_U672 = 1;
        }
    }
    if (NOT l_U673)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2988(), 678.50340000, -315.01560000, 18.25200000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            PLAY_SOUND_FROM_POSITION( -1, "FIN1B_KILL_DIMITRI_FIN1B_MA_02", 681.32560000, -314.33120000, 20.83809000 );
            l_U673 = 1;
        }
    }
    return;
}

void sub_22086()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U801[I]._fU0, l_U801[I]._fU4, l_U801[I]._fU8, ref l_U526[I], 1 );
        SET_CHAR_HEADING( l_U526[I], l_U960[I] );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U526[I], "cargo_cabsrm" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U526[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U526[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U526[I], l_U604 );
        SET_CHAR_KEEP_TASK( l_U526[I], 1 );
    }
    GIVE_WEAPON_TO_CHAR( l_U526[0], 14, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U526[1], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U526[2], 12, 30000, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U526[0], 1 );
    for ( I = 0; I <= 2; I++ )
    {
        if (HAS_CHAR_GOT_WEAPON( l_U526[I], 14 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U526[I], l_U607 );
        }
        else if ((HAS_CHAR_GOT_WEAPON( l_U526[I], 12 )) || (HAS_CHAR_GOT_WEAPON( l_U526[I], 10 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U526[I], l_U608 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U526[I], l_U605 );
        }
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U526[I], l_U801[I], 2.50000000 );
    }
    return;
}

void sub_22711(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22732( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_22732(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_15972( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_22957(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_16071( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_16071( "\n speech is not playing" );
    }
    return 0;
}

void sub_23152()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U499[I] )))
        {
            sub_23195();
            TASK_PERFORM_SEQUENCE( l_U499[I], l_U611 );
        }
    }
    for ( I = 0; I <= 16; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U503[I] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[I], 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U497 )))
    {
        CLEAR_SEQUENCE_TASK( l_U611 );
        OPEN_SEQUENCE_TASK( ref l_U611 );
        TASK_PAUSE( 0, 1000 );
        TASK_LEAVE_ANY_CAR( 0 );
        TASK_COMBAT( 0, sub_2988() );
        CLOSE_SEQUENCE_TASK( l_U611 );
        TASK_PERFORM_SEQUENCE( l_U497, l_U611 );
    }
    if (NOT (IS_CHAR_DEAD( sub_2988() )))
    {
        SET_PED_IS_BLIND_RAGING( sub_2988(), 1 );
    }
    CLEAR_SEQUENCE_TASK( l_U611 );
    SETTIMERB( 0 );
    l_U641 = 1;
    return;
}

void sub_23195()
{
    CLEAR_SEQUENCE_TASK( l_U611 );
    OPEN_SEQUENCE_TASK( ref l_U611 );
    GENERATE_RANDOM_INT_IN_RANGE( 200, 700, ref l_U1023 );
    TASK_PAUSE( 0, l_U1023 );
    GENERATE_RANDOM_INT_IN_RANGE( 800, 1500, ref l_U1023 );
    TASK_AIM_GUN_AT_CHAR( 0, sub_2988(), l_U1023 );
    TASK_COMBAT( 0, sub_2988() );
    CLOSE_SEQUENCE_TASK( l_U611 );
    return;
}

void sub_23965()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U499[I] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U499[I], 0 );
        }
    }
    l_U642 = 1;
    return;
}

void sub_24896()
{
    if (NOT (IS_CHAR_INJURED( l_U521[3] )))
    {
        if (NOT l_U669)
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U521[3], sub_2988(), 1 ))
            {
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U521[3], 2200, 4000, 2, 0.40000000, 1.00000000, 0.00000000, 9.16000000, 0, 0, 0, 0, 0, 0 );
                l_U669 = 1;
            }
        }
    }
    return;
}

void sub_25032()
{
    if (NOT l_U674[0])
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 702.25000000, -308.93000000, 8.79000000, 710.31000000, -292.39000000, 13.59000000, 4.30000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U503[11] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 687.82560000, -331.41450000, 9.84740000 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 700.55050000, -307.67930000, 9.83930000, 3, 1.00000000, 2.00000000, sub_2988(), 0 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[11], 1 );
                TASK_PERFORM_SEQUENCE( l_U503[11], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
                l_U674[0] = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U503[11] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U503[11], sub_2988(), 10.00000000, 10.00000000, 10.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[11], sub_2988(), 0 )))
            {
                l_U674[0] = 1;
                l_U680[0] = 1;
            }
        }
    }
    if ((l_U674[0]) AND (NOT l_U680[0]))
    {
        if (NOT (IS_CHAR_INJURED( l_U503[11] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U503[11], 29, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[11], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U503[11], sub_2988(), 7.00000000, 7.00000000, 7.00000000, 0 )))
            {
                l_U680[0] = 1;
                GET_CHAR_COORDINATES( l_U503[11], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[11], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U503[11], l_U1006, l_U1007, l_U1008, 6.00000000 );
                TASK_COMBAT( l_U503[11], sub_2988() );
            }
        }
    }
    if (NOT l_U674[1])
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 702.50000000, -308.77000000, 8.79000000, 704.00000000, -305.82000000, 13.59000000, 12.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U503[12] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 681.80020000, -297.33090000, 8.87120000 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 690.61600000, -301.64870000, 9.83920000, 3, 1.00000000, 2.00000000, sub_2988(), 0 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[12], 1 );
                TASK_PERFORM_SEQUENCE( l_U503[12], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
                l_U674[1] = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U503[12] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U503[12], sub_2988(), 7.00000000, 7.00000000, 7.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[12], sub_2988(), 0 )))
            {
                l_U674[1] = 1;
                l_U680[1] = 1;
            }
        }
    }
    if ((l_U674[1]) AND (NOT l_U680[1]))
    {
        if (NOT (IS_CHAR_INJURED( l_U503[12] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U503[12], 29, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[12], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U503[12], sub_2988(), 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                l_U680[1] = 1;
                GET_CHAR_COORDINATES( l_U503[12], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[12], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U503[12], l_U1006, l_U1007, l_U1008, 6.00000000 );
                TASK_COMBAT( l_U503[12], sub_2988() );
            }
        }
    }
    if (NOT l_U674[2])
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 733.14000000, -243.45000000, 8.79000000, 743.00000000, -220.82000000, 13.59000000, 9.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U503[13] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 715.85250000, -232.69460000, 9.84640000, 2, -2 );
                TASK_ACHIEVE_HEADING( 0, 242.54000000 );
                TASK_CLIMB( 0, 1 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 725.96890000, -237.61190000, 10.93320000, 3, 1.00000000, 2.00000000, sub_2988(), 0 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[13], 1 );
                TASK_PERFORM_SEQUENCE( l_U503[13], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
                l_U674[2] = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U503[13] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U503[13], sub_2988(), 8.00000000, 8.00000000, 8.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[13], sub_2988(), 0 )))
            {
                l_U674[2] = 1;
                l_U680[2] = 1;
            }
        }
    }
    if ((l_U674[2]) AND (NOT l_U680[2]))
    {
        if (NOT (IS_CHAR_INJURED( l_U503[13] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U503[13], 29, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[13], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U503[13], sub_2988(), 4.00000000, 4.00000000, 4.00000000, 0 )))
            {
                l_U680[2] = 1;
                GET_CHAR_COORDINATES( l_U503[13], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[13], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U503[13], l_U1006, l_U1007, l_U1008, 6.00000000 );
                TASK_COMBAT( l_U503[13], sub_2988() );
            }
        }
    }
    if (NOT l_U674[3])
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 725.90000000, -258.64000000, 8.79000000, 734.45000000, -240.25000000, 13.59000000, 7.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U503[14] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 711.19590000, -275.04100000, 9.84570000, 2, -2 );
                TASK_ACHIEVE_HEADING( 0, 325.86900000 );
                TASK_CLIMB( 0, 1 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 719.85710000, -258.15340000, 11.99470000, 3, 1.00000000, 2.00000000, sub_2988(), 0 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[14], 1 );
                TASK_PERFORM_SEQUENCE( l_U503[14], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
                l_U674[3] = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U503[14] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U503[14], sub_2988(), 8.00000000, 8.00000000, 8.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[14], sub_2988(), 0 )))
            {
                l_U674[3] = 1;
                l_U680[3] = 1;
            }
        }
    }
    if ((l_U674[3]) AND (NOT l_U680[3]))
    {
        if (NOT (IS_CHAR_INJURED( l_U503[14] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U503[14], 29, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[14], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U503[14], sub_2988(), 4.00000000, 4.00000000, 4.00000000, 0 )))
            {
                l_U680[3] = 1;
                GET_CHAR_COORDINATES( l_U503[14], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[14], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U503[14], l_U1006, l_U1007, l_U1008, 6.00000000 );
                TASK_COMBAT( l_U503[14], sub_2988() );
            }
        }
    }
    if (NOT l_U674[4])
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 682.63000000, -299.00000000, 8.79000000, 691.58000000, -279.41000000, 13.59000000, 7.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U503[15] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 671.19000000, -322.53000000, 9.84640000, 3, -2, 1.20000000 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 681.54960000, -299.15310000, 8.83440000, 3, 1.00000000, 2.00000000, sub_2988(), 0 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[15], 1 );
                TASK_PERFORM_SEQUENCE( l_U503[15], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
                l_U674[4] = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U503[15] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U503[15], sub_2988(), 10.00000000, 10.00000000, 10.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[15], sub_2988(), 0 )))
            {
                l_U674[4] = 1;
                l_U680[4] = 1;
            }
        }
    }
    if ((l_U674[4]) AND (NOT l_U680[4]))
    {
        if (NOT (IS_CHAR_INJURED( l_U503[15] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U503[15], 29, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U503[15], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U503[15], sub_2988(), 4.00000000, 4.00000000, 4.00000000, 0 )))
            {
                l_U680[4] = 1;
                GET_CHAR_COORDINATES( l_U503[15], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[15], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U503[15], l_U1006, l_U1007, l_U1008, 6.00000000 );
                TASK_COMBAT( l_U503[15], sub_2988() );
            }
        }
    }
    return;
}

void sub_28056()
{
    if (NOT l_U686)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2988(), 683.73200000, -317.61000000, 16.41400000, 3.80000000, 3.80000000, 3.80000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U526[0] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U526[0], 1 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( l_U526[0], 689.43000000, -304.19000000, 15.02000000, 3, 1.00000000, 2.00000000, sub_2988(), 0 );
                l_U686 = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U526[0] )))
        {
            if (((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U526[0], sub_2988(), 3.00000000, 3.00000000, 3.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U526[0], sub_2988(), 0 ))) || (l_U690))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U526[0], 0 );
                TASK_COMBAT( l_U526[0], sub_2988() );
                l_U688 = 1;
                l_U689 = 1;
            }
        }
    }
    if ((l_U686) AND (NOT l_U687))
    {
        if (NOT (IS_CHAR_INJURED( l_U526[0] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U526[0], 33, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U526[0], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U526[0], sub_2988(), 3.00000000, 3.00000000, 3.00000000, 0 )))
            {
                l_U687 = 1;
                GET_CHAR_COORDINATES( l_U526[0], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U526[0], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U526[0], l_U1006, l_U1007, l_U1008, 4.00000000 );
                TASK_COMBAT( l_U526[0], sub_2988() );
            }
        }
    }
    if (NOT l_U688)
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 680.61000000, -304.23000000, 14.00000000, 683.04000000, -298.87000000, 20.18000000, 4.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U530[0] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 674.67780000, -314.90930000, 14.00780000 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 677.32920000, -308.22250000, 14.00780000, 3, 1.00000000, 2.00000000, sub_2988(), 0 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U530[0], 1 );
                TASK_PERFORM_SEQUENCE( l_U530[0], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
                l_U688 = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U530[0] )))
        {
            if (((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U530[0], sub_2988(), 8.00000000, 8.00000000, 8.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U530[0], sub_2988(), 0 ))) || (l_U690))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U530[0], 0 );
                TASK_COMBAT( l_U530[0], sub_2988() );
                l_U688 = 1;
                l_U689 = 1;
            }
        }
    }
    if ((l_U688) AND (NOT l_U689))
    {
        if (NOT (IS_CHAR_INJURED( l_U530[0] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U530[0], 29, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U530[0], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U530[0], sub_2988(), 4.00000000, 4.00000000, 4.00000000, 0 )))
            {
                l_U689 = 1;
                GET_CHAR_COORDINATES( l_U530[0], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U530[0], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U530[0], l_U1006, l_U1007, l_U1008, 6.00000000 );
                TASK_COMBAT( l_U530[0], sub_2988() );
            }
        }
    }
    if (NOT l_U690)
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 695.20000000, -312.80000000, 14.00000000, 698.38000000, -306.14000000, 20.18000000, -4.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U530[3] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_COMBAT_ROLL( 0, 1 );
                TASK_SHOOT_AT_CHAR( 0, sub_2988(), 2000, 3 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                TASK_PERFORM_SEQUENCE( l_U530[3], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
                l_U690 = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U530[3] )))
        {
            if (((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U530[3], sub_2988(), 8.00000000, 8.00000000, 8.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U530[3], sub_2988(), 0 ))) || (l_U688))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U530[3], 0 );
                TASK_COMBAT( l_U530[3], sub_2988() );
                l_U690 = 1;
                l_U691 = 1;
            }
        }
    }
    if ((l_U690) AND (NOT l_U691))
    {
        if (NOT (IS_CHAR_INJURED( l_U530[3] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U530[3], 29, ref l_U612 );
            if (l_U612 == 7)
            {
                l_U691 = 1;
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U530[3], 0 );
            }
        }
    }
    return;
}

void sub_29837()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U811[I]._fU0, l_U811[I]._fU4, l_U811[I]._fU8, ref l_U530[I], 1 );
        SET_CHAR_HEADING( l_U530[I], l_U964[I] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U530[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U530[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U530[I], l_U604 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U530[I], 0 );
        SET_CHAR_KEEP_TASK( l_U530[I], 1 );
        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U530[I], 0 );
    }
    GIVE_WEAPON_TO_CHAR( l_U530[0], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U530[1], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U530[2], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U530[3], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U530[4], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U530[5], 9, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U530[6], 14, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U530[0], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U530[3], 12, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U530[0], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U530[3], 1 );
    for ( I = 0; I <= 6; I++ )
    {
        if (HAS_CHAR_GOT_WEAPON( l_U530[I], 14 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U530[I], l_U607 );
        }
        else if ((HAS_CHAR_GOT_WEAPON( l_U530[I], 12 )) || (HAS_CHAR_GOT_WEAPON( l_U530[I], 10 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U530[I], l_U608 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U530[I], l_U605 );
        }
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U530[I], l_U811[I], 6.50000000 );
    }
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U530[5], l_U811[5], 3.00000000 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U530[6], l_U811[6], 2.00000000 );
    return;
}

int sub_30818(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_3568() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_3568() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3568() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_30914())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2988() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_30999())
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

int sub_30914()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_30999()
{
    return sub_31010( 0, 0 );
}

int sub_31010(boolean bParam0, unknown uParam1)
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

int sub_31103(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2988() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2988(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2988() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2988(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2988()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2988() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2988() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3568() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3568() )))
    {
        return 0;
    }
    return 1;
}

int sub_31408(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_30818( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3568(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_31683();
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

void sub_31683()
{
    return sub_31010( 1, 1 );
}

void sub_32048()
{
    if (DOES_VEHICLE_EXIST( l_U569 ))
    {
        DELETE_CAR( ref l_U569 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 904750859 );
    if (DOES_OBJECT_EXIST( l_U574 ))
    {
        DELETE_OBJECT( ref l_U574 );
    }
    if (DOES_OBJECT_EXIST( l_U575 ))
    {
        DELETE_OBJECT( ref l_U575 );
    }
    if (DOES_OBJECT_EXIST( l_U579 ))
    {
        DELETE_OBJECT( ref l_U579 );
    }
    if (DOES_OBJECT_EXIST( l_U580 ))
    {
        DELETE_OBJECT( ref l_U580 );
    }
    if (DOES_OBJECT_EXIST( l_U581 ))
    {
        DELETE_OBJECT( ref l_U581 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -459749237 );
    return;
}

void sub_32324()
{
    if ((((((sub_12535()) AND (NOT (l_U1027 == 0))) AND (NOT (l_U1027 == 3))) AND (NOT l_U646)) AND (IS_SCREEN_FADED_IN())) AND (TIMERA() >= 1000))
    {
        DO_SCREEN_FADE_OUT( 500 );
        l_U646 = 1;
    }
    if (l_U653)
    {
        if (l_U930 < 89.00000000)
        {
            l_U930 += 8.00000000 * TIMESTEP();
            SET_OBJECT_ROTATION( l_U571, l_U930, 0, 155.00000000 );
        }
        else
        {
            STOP_SOUND( l_U1020 );
        }
    }
    if (l_U654)
    {
        if (l_U931 < 89.00000000)
        {
            l_U931 += 8.00000000 * TIMESTEP();
            SET_OBJECT_ROTATION( l_U572, l_U931, 0, 155.00000000 );
        }
        else
        {
            STOP_SOUND( l_U1021 );
        }
    }
    if ((l_U646) AND (NOT (l_U1027 == 3)))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            l_U1027 = 3;
        }
    }
    else
    {
        switch (l_U1027)
        {
            case 0:
            SET_PLAYER_CONTROL( sub_3568(), 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            CLEAR_PRINTS();
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2988(), 1 );
            sub_32713();
            EXTINGUISH_FIRE_AT_POINT( l_U708._fU0, l_U708._fU4, l_U708._fU8, 5.00000000 );
            if (DOES_OBJECT_EXIST( l_U582 ))
            {
                ATTACH_PED_TO_OBJECT( sub_2988(), l_U582, 0, 0, 0, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM( sub_2988(), "PULL_LEVER", "MISSFINALE1B", 4.00000000, 0, 0, 0, 1, -1 );
            }
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_POS( l_U598, 690.12870000, -303.45000000, 23.38242000 );
            SET_CAM_ROT( l_U598, -2.82558400, -0.00000000, -165.78700000 );
            SET_CAM_ACTIVE( l_U598, 1 );
            SET_CAM_PROPAGATE( l_U598, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            END_CAM_COMMANDS( ref l_U602 );
            if (DOES_CHAR_EXIST( l_U538[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U538[0] )))
                {
                    DELETE_CHAR( ref l_U538[0] );
                }
            }
            l_U1027 = 1;
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            break;
            case 1:
            if (NOT l_U650)
            {
                if (IS_CHAR_PLAYING_ANIM( sub_2988(), "MISSFINALE1B", "PULL_LEVER" ))
                {
                    SET_CHAR_ANIM_SPEED( sub_2988(), "MISSFINALE1B", "PULL_LEVER", 0.60000000 );
                    l_U650 = 1;
                }
            }
            if (NOT l_U655)
            {
                if (TIMERB() >= 1080)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    l_U655 = 1;
                }
            }
            if ((TIMERB() >= 1800) AND (IS_SCREEN_FADED_OUT()))
            {
                BEGIN_CAM_COMMANDS( ref l_U602 );
                SET_CAM_POS( l_U598, 723.31260000, -268.77260000, 17.94835000 );
                SET_CAM_ROT( l_U598, -24.23902000, 0.00000100, 38.06986000 );
                END_CAM_COMMANDS( ref l_U602 );
                LOAD_SCENE( 723.31260000, -268.77260000, 17.94835000 );
                WAIT( 1750 );
                DO_SCREEN_FADE_IN( 500 );
                l_U1027 = 2;
                SETTIMERB( 0 );
            }
            break;
            case 2:
            if ((NOT l_U653) AND (TIMERB() >= 3600))
            {
                PLAY_SOUND_FROM_POSITION( l_U1020, "FIN1B_KILL_DIMITRI_CARGO_OPEN", 723.70000000, 65267, 18.40000000 );
                l_U653 = 1;
            }
            if ((NOT l_U654) AND (TIMERB() >= 1700))
            {
                PLAY_SOUND_FROM_POSITION( l_U1021, "FIN1B_KILL_DIMITRI_CARGO_OPEN", 722, 65268, 18 );
                l_U654 = 1;
            }
            if (TIMERB() >= 16100)
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                l_U1027 = 3;
            }
            break;
            case 3:
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_ACTIVE( l_U598, 0 );
            SET_CAM_PROPAGATE( l_U598, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U602 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            ADD_BLIP_FOR_COORD( l_U720._fU0, l_U720._fU4, l_U720._fU8, ref l_U594 );
            CHANGE_BLIP_COLOUR( l_U594, 1 );
            SET_ROUTE( l_U594, 1 );
            PRINT_NOW( "FIN1B_04", 7500, 1 );
            sub_34320();
            sub_35105();
            sub_35830();
            sub_36132();
            if (NOT (IS_CHAR_DEAD( l_U496 )))
            {
                SET_CHAR_HEADING( l_U496, l_U929 + 180 );
            }
            SET_OBJECT_ROTATION( l_U571, 89.00000000, 0, 155.00000000 );
            SET_OBJECT_ROTATION( l_U572, 89.00000000, 0, 155.00000000 );
            STOP_SOUND( l_U1020 );
            STOP_SOUND( l_U1021 );
            if (NOT l_U646)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            l_U646 = 0;
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2988() );
            DETACH_PED( sub_2988(), 1 );
            SET_CHAR_HEADING( sub_2988(), 339.79030000 );
            if (DOES_OBJECT_EXIST( l_U582 ))
            {
                DELETE_OBJECT( ref l_U582 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1341473171 );
            }
            REQUEST_MODEL( 237497537 );
            while (NOT (HAS_MODEL_LOADED( 237497537 )))
            {
                WAIT( 0 );
            }
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2988(), 0 );
            WAIT( 1000 );
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            SET_PLAYER_CONTROL( sub_3568(), 1 );
            l_U1025 = 4;
            break;
        }
    }
    return;
}

void sub_32713()
{
    int I;

    for ( I = 0; I <= 16; I++ )
    {
        if (DOES_CHAR_EXIST( l_U503[I] ))
        {
            DELETE_CHAR( ref l_U503[I] );
        }
    }
    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_CHAR_EXIST( l_U530[I] ))
        {
            DELETE_CHAR( ref l_U530[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U499[I] ))
        {
            DELETE_CHAR( ref l_U499[I] );
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U521[I] ))
        {
            DELETE_CHAR( ref l_U521[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U526[I] ))
        {
            DELETE_CHAR( ref l_U526[I] );
        }
    }
    for ( I = 0; I <= 0; I++ )
    {
        if (DOES_CHAR_EXIST( l_U538[I] ))
        {
            DELETE_CHAR( ref l_U538[I] );
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if (DOES_CHAR_EXIST( l_U540[I] ))
        {
            DELETE_CHAR( ref l_U540[I] );
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if (DOES_CHAR_EXIST( l_U547[I] ))
        {
            DELETE_CHAR( ref l_U547[I] );
        }
    }
    for ( I = 0; I <= 0; I++ )
    {
        if (DOES_CHAR_EXIST( l_U554[I] ))
        {
            DELETE_CHAR( ref l_U554[I] );
        }
    }
    if (DOES_CHAR_EXIST( l_U497 ))
    {
        DELETE_CHAR( ref l_U497 );
    }
    return;
}

void sub_34320()
{
    int I;

    for ( I = 0; I <= 5; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U837[I]._fU0, l_U837[I]._fU4, l_U837[I]._fU8, ref l_U540[I], 1 );
        SET_CHAR_HEADING( l_U540[I], l_U974[I] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U540[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U540[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U540[I], l_U604 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U540[I], 0 );
        SET_CHAR_KEEP_TASK( l_U540[I], 1 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U540[1], "cargo_cabsrm" );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U540[3], "cargo_cabsrm" );
    GIVE_WEAPON_TO_CHAR( l_U540[0], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U540[1], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U540[2], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U540[3], 10, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U540[4], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U540[5], 9, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U540[0], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U540[1], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U540[2], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U540[3], 10, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U540[4], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U540[5], 9, 1 );
    for ( I = 0; I <= 5; I++ )
    {
        if (HAS_CHAR_GOT_WEAPON( l_U540[I], 14 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U540[I], l_U607 );
        }
        else if ((HAS_CHAR_GOT_WEAPON( l_U540[I], 12 )) || (HAS_CHAR_GOT_WEAPON( l_U540[I], 10 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U540[I], l_U608 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U540[I], l_U605 );
        }
        if (NOT (I == 0))
        {
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U540[I], l_U837[I], 6.50000000 );
        }
    }
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[0], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[1], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[2], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[3], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[4], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[5], 1 );
    return;
}

void sub_35105()
{
    int I;

    for ( I = 0; I <= 5; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U856[I]._fU0, l_U856[I]._fU4, l_U856[I]._fU8, ref l_U547[I], 1 );
        SET_CHAR_HEADING( l_U547[I], l_U981[I] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U547[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U547[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U547[I], l_U604 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U547[I], 0 );
        SET_CHAR_KEEP_TASK( l_U547[I], 1 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U547[0], "GtaMloRoom02" );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U547[4], "GtaMloRoom02" );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U547[5], "GtaMloRoom02" );
    GIVE_WEAPON_TO_CHAR( l_U547[0], 9, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U547[1], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U547[2], 9, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U547[3], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U547[4], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U547[5], 12, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U547[0], 9, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U547[1], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U547[2], 9, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U547[3], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U547[4], 12, 1 );
    SET_CURRENT_CHAR_WEAPON( l_U547[5], 12, 1 );
    for ( I = 0; I <= 5; I++ )
    {
        if (HAS_CHAR_GOT_WEAPON( l_U547[I], 14 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U547[I], l_U607 );
        }
        else if ((HAS_CHAR_GOT_WEAPON( l_U547[I], 12 )) || (HAS_CHAR_GOT_WEAPON( l_U547[I], 10 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U547[I], l_U608 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U547[I], l_U605 );
        }
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U547[I], l_U856[I], 6.50000000 );
    }
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U547[5], 1 );
    return;
}

void sub_35830()
{
    int I;

    for ( I = 0; I <= 0; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U875[I]._fU0, l_U875[I]._fU4, l_U875[I]._fU8, ref l_U554[I], 1 );
        SET_CHAR_HEADING( l_U554[I], l_U988[I] );
        GIVE_WEAPON_TO_CHAR( l_U554[I], 14, 30000, 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U554[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U554[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U554[I], l_U604 );
        SET_COMBAT_DECISION_MAKER( l_U554[I], l_U607 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U554[I], l_U875[I], 6.50000000 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U554[I], 0 );
        TASK_COMBAT( l_U554[I], sub_2988() );
        SET_CHAR_KEEP_TASK( l_U554[I], 1 );
    }
    return;
}

void sub_36132()
{
    int I;

    for ( I = 0; I <= 3; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U879[I]._fU0, l_U879[I]._fU4, l_U879[I]._fU8, ref l_U556[I], 1 );
        SET_CHAR_HEADING( l_U556[I], l_U990[I] );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U556[I], "carholdrm" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U556[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U556[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U556[I], l_U604 );
        SET_CHAR_KEEP_TASK( l_U556[I], 1 );
    }
    GIVE_WEAPON_TO_CHAR( l_U556[0], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U556[1], 9, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U556[2], 12, 30000, 0 );
    GIVE_WEAPON_TO_CHAR( l_U556[3], 12, 30000, 0 );
    for ( I = 0; I <= 3; I++ )
    {
        if (HAS_CHAR_GOT_WEAPON( l_U556[I], 14 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U556[I], l_U607 );
        }
        else if ((HAS_CHAR_GOT_WEAPON( l_U556[I], 12 )) || (HAS_CHAR_GOT_WEAPON( l_U556[I], 10 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U556[I], l_U608 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U556[I], l_U605 );
        }
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U556[I], l_U879[I], 3.50000000 );
    }
    return;
}

void sub_36981()
{
    unknown uVar2;

    l_U1010++;
    if (l_U1010 == 100)
    {
        sub_20952();
        l_U1010 = 0;
    }
    if (NOT l_U698)
    {
        if ((IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 694.19000000, -309.14000000, 21.88000000, 695.79000000, -307.01000000, 24.52000000, -2, 0 )) || (LOCATE_CHAR_ANY_MEANS_2D( sub_2988(), 682.33000000, -302.38000000, 2.00000000, 2.00000000, 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U540[0] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 678.18730000, -319.58650000, 17.21290000 );
                TASK_EXTEND_ROUTE( 686.41950000, -323.61730000, 17.21290000 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 690.64380000, -316.44000000, 17.21210000, 3, 1.00000000, 2.00000000, sub_2988(), 0 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                TASK_PERFORM_SEQUENCE( l_U540[0], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
            }
            if (NOT (IS_CHAR_INJURED( l_U540[2] )))
            {
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 692.61150000, -321.79430000, 14.00780000 );
                TASK_EXTEND_ROUTE( 684.45500000, -324.78160000, 14.00780000 );
                TASK_EXTEND_ROUTE( 677.62340000, -321.25940000, 14.00780000 );
                TASK_FOLLOW_POINT_ROUTE( l_U540[2], 3, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U540[4] )))
            {
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 691.39360000, -322.78850000, 14.00780000 );
                TASK_EXTEND_ROUTE( 685.06990000, -323.69410000, 14.00780000 );
                TASK_FOLLOW_POINT_ROUTE( l_U540[4], 3, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U540[5] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_PAUSE( 0, 900 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 692.70850000, -323.38350000, 14.00780000 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                TASK_PERFORM_SEQUENCE( l_U540[5], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
            }
            l_U698 = 1;
        }
    }
    if ((l_U698) AND (NOT l_U699))
    {
        if (NOT (IS_CHAR_INJURED( l_U540[0] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U540[0], 29, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U540[0], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U540[0], sub_2988(), 3.00000000, 3.00000000, 3.00000000, 0 )))
            {
                l_U699 = 1;
                GET_CHAR_COORDINATES( l_U540[0], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U540[0], l_U1006, l_U1007, l_U1008, 4.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[0], 0 );
                TASK_COMBAT( l_U540[0], sub_2988() );
            }
        }
    }
    if ((l_U698) AND (NOT l_U700))
    {
        if (NOT (IS_CHAR_INJURED( l_U540[2] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U540[2], 20, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U540[2], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U540[2], sub_2988(), 3.00000000, 3.00000000, 3.00000000, 0 )))
            {
                l_U700 = 1;
                GET_CHAR_COORDINATES( l_U540[2], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U540[2], l_U1006, l_U1007, l_U1008, 4.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[2], 0 );
                TASK_ACHIEVE_HEADING( l_U540[2], 50.00000000 );
            }
        }
    }
    if ((l_U698) AND (NOT l_U701))
    {
        if (NOT (IS_CHAR_INJURED( l_U540[4] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U540[4], 20, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U540[4], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U540[4], sub_2988(), 3.00000000, 3.00000000, 3.00000000, 0 )))
            {
                l_U701 = 1;
                GET_CHAR_COORDINATES( l_U540[4], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U540[4], l_U1006, l_U1007, l_U1008, 4.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[4], 0 );
                TASK_ACHIEVE_HEADING( l_U540[4], 68.00000000 );
            }
        }
    }
    if ((l_U698) AND (NOT l_U702))
    {
        if (NOT (IS_CHAR_INJURED( l_U540[5] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U540[5], 29, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U540[5], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U540[5], sub_2988(), 3.00000000, 3.00000000, 3.00000000, 0 )))
            {
                l_U702 = 1;
                GET_CHAR_COORDINATES( l_U540[5], ref l_U1006, ref l_U1007, ref l_U1008 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U540[5], l_U1006, l_U1007, l_U1008, 4.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[5], 0 );
                TASK_COMBAT( l_U540[5], sub_2988() );
            }
        }
    }
    if (NOT l_U696)
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 674.49000000, -310.68000000, 14.04000000, 677.02000000, -311.74000000, 16.48000000, 12, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U540[1] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U611 );
                TASK_COMBAT_ROLL( 0, 1 );
                TASK_SHOOT_AT_CHAR( 0, sub_2988(), 2000, 3 );
                CLOSE_SEQUENCE_TASK( l_U611 );
                TASK_PERFORM_SEQUENCE( l_U540[1], l_U611 );
                CLEAR_SEQUENCE_TASK( l_U611 );
                l_U696 = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U540[1] )))
        {
            if ((IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 694.51000000, -314.29000000, 14.04000000, 697.57000000, -315.83000000, 16.31000000, 9, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U540[1], sub_2988(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[1], 0 );
                TASK_COMBAT( l_U540[1], sub_2988() );
                l_U696 = 1;
                l_U697 = 1;
            }
        }
    }
    if ((l_U696) AND (NOT l_U697))
    {
        if (NOT (IS_CHAR_INJURED( l_U540[1] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U540[1], 29, ref l_U612 );
            if (l_U612 == 7)
            {
                l_U697 = 1;
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[1], 0 );
            }
        }
    }
    if (NOT l_U694)
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_2988(), 688.44000000, -307.38000000, 14.96890000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U540[3] )))
            {
                TASK_GO_TO_COORD_WHILE_SHOOTING( l_U540[3], 681.98360000, -314.88200000, 15.01510000, 2, 1.00000000, 1.00000000, sub_2988(), 0 );
                l_U694 = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U540[3] )))
        {
            if (((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U540[3], sub_2988(), 3.00000000, 3.00000000, 3.00000000, 0 )) || (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U540[3], sub_2988() ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U540[3], sub_2988(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[3], 0 );
                TASK_COMBAT( l_U540[3], sub_2988() );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U540[3], 681.98360000, -314.88200000, 15.01510000, 4.00000000 );
                l_U694 = 1;
                l_U695 = 1;
            }
        }
    }
    if ((l_U694) AND (NOT l_U695))
    {
        if (NOT (IS_CHAR_INJURED( l_U540[3] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U540[3], 33, ref l_U612 );
            if ((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U540[3], sub_2988(), 0 )))
            {
                l_U695 = 1;
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U540[3], 0 );
                TASK_COMBAT( l_U540[3], sub_2988() );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U540[3], 681.98360000, -314.88200000, 15.01510000, 3.00000000 );
            }
        }
    }
    if (NOT l_U692)
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_2988(), 687.70800000, -308.99100000, 14.96890000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U547[5] )))
            {
                GET_INTERIOR_AT_COORDS( 687.09000000, -314.71000000, 11.00000000, ref uVar2 );
                ACTIVATE_INTERIOR( uVar2, 1 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 680.48210000, -319.29790000, 11.51640000 );
                TASK_EXTEND_ROUTE( 684.43840000, -320.90590000, 14.01380000 );
                TASK_FOLLOW_POINT_ROUTE( l_U547[5], 3, 0 );
                l_U692 = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U547[5] )))
        {
            if ((((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U547[5], sub_2988(), 4.00000000, 4.00000000, 4.00000000, 0 )) || (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U547[5], sub_2988() ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U547[5], sub_2988(), 0 ))) || (LOCATE_CHAR_ON_FOOT_3D( sub_2988(), 696.99000000, -304.79100000, 9.88000000, 1.20000000, 1.20000000, 1.20000000, 0 )))
            {
                l_U692 = 1;
                l_U693 = 1;
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U547[5], 0 );
                TASK_COMBAT( l_U547[5], sub_2988() );
            }
        }
    }
    if ((l_U692) AND (NOT l_U693))
    {
        if (NOT (IS_CHAR_INJURED( l_U547[5] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U547[5], 20, ref l_U612 );
            if (((l_U612 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U547[5], sub_2988(), 0 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U547[5], sub_2988(), 3.00000000, 3.00000000, 3.00000000, 0 )))
            {
                l_U693 = 1;
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U547[5], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U547[5], 683.85100000, -318.59790000, 14.01380000, 6.00000000 );
                TASK_COMBAT( l_U547[5], sub_2988() );
            }
        }
    }
    if (l_U657)
    {
        if (NOT l_U703)
        {
            if (NOT (IS_CHAR_INJURED( l_U565[0] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U565[0], 29, ref l_U612 );
                if (l_U612 == 7)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U565[0], 0 );
                    TASK_COMBAT( l_U565[0], sub_2988() );
                    l_U703 = 1;
                }
            }
        }
        if (NOT l_U704)
        {
            if (NOT (IS_CHAR_INJURED( l_U565[1] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U565[1], 20, ref l_U612 );
                if (l_U612 == 7)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U565[1], 0 );
                    TASK_COMBAT( l_U565[1], sub_2988() );
                    l_U704 = 1;
                }
            }
        }
    }
    if (NOT l_U649)
    {
        if ((IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 708.67000000, -286.67000000, 2.31000000, 713.31000000, -276.54000000, 5.74000000, 20, 0 )) AND (sub_31103( 1, 1 )))
        {
            l_U1025 = 5;
            l_U649 = 1;
        }
    }
    if (NOT l_U658)
    {
        if (NOT (IS_CHAR_INJURED( l_U496 )))
        {
            sub_40422();
            if (sub_40567())
            {
                l_U1025 = 6;
                FORCE_CHAR_TO_DROP_WEAPON( l_U496 );
                l_U658 = 1;
            }
        }
    }
    else if (NOT (IS_CHAR_INJURED( l_U496 )))
    {
        if (NOT l_U659)
        {
            if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U496, sub_2988() ))
            {
                sub_40954( l_U496, "plead", "MISSFINALE1B" );
            }
            else
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U496, sub_2988() );
                l_U659 = 1;
            }
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( l_U496, 34, ref l_U612 );
            if (l_U612 == 7)
            {
                l_U659 = 0;
            }
        }
        if (((sub_41341( l_U496 )) AND (NOT l_U661)) AND (l_U660))
        {
            l_U1025 = 7;
            l_U661 = 1;
        }
        sub_41576();
    }
    if (l_U660)
    {
        if ((NOT (IS_CHAR_DEAD( l_U496 ))) AND (NOT l_U661))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U496, sub_2988(), 0 ))
            {
                l_U660 = 0;
            }
        }
    }
    if ((IS_CHAR_INJURED( l_U496 )) AND (l_U663))
    {
        if (IS_MESSAGE_BEING_DISPLAYED())
        {
            CLEAR_PRINTS();
        }
        REMOVE_BLIP( l_U591 );
        sub_41838();
        if (DOES_OBJECT_EXIST( l_U573 ))
        {
            FREEZE_OBJECT_POSITION( l_U573, 0 );
            SET_OBJECT_HEADING( l_U573, 60 );
            WAIT( 0 );
            FREEZE_OBJECT_POSITION( l_U573, 1 );
        }
        WAIT( 1200 );
        sub_22711( "FIN1D_DEAD", ref l_U625, 7, 1 );
        while (sub_22957( l_U625 ))
        {
            WAIT( 0 );
        }
        WAIT( 500 );
        PRINT_NOW( "FIN1B_EXIT", 7500, 1 );
        ADD_BLIP_FOR_COORD( 678.75000000, -313.52000000, 9.95000000, ref l_U595 );
        l_U1025 = 8;
    }
    return;
}

void sub_40422()
{
    if ((NOT (sub_22957( l_U619 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        if (l_U1004 >= l_U1005)
        {
            sub_22711( "FIN1B_KILLU", ref l_U619, 6, 1 );
            l_U1004 = 0.00000000;
            GENERATE_RANDOM_FLOAT_IN_RANGE( 8.00000000, 11.00000000, ref l_U1005 );
        }
        else
        {
            l_U1004 += 1.00000000 * TIMESTEP();
        }
    }
    return;
}

int sub_40567()
{
    GET_CHAR_HEALTH( l_U496, ref l_U1019 );
    if (NOT l_U664)
    {
        if (sub_40603() <= 1)
        {
            l_U1018 = l_U1019 - 80;
            if (l_U1018 < 400)
            {
                l_U1018 = 400;
            }
            if (l_U1018 > l_U1019)
            {
                l_U1018 = l_U1019 - 1;
            }
            l_U664 = 1;
        }
    }
    if (l_U1019 < l_U1018)
    {
        return 1;
    }
    return 0;
}

void sub_40603()
{
    int Result;
    int I;

    Result = 0;
    for ( I = 0; I < l_U561; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U561[I] )))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U565; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U565[I] )))
        {
            Result++;
        }
    }
    return Result;
}

int sub_40954(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_2988() )))
                {
                    GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
                    if (NOT (IS_CHAR_PLAYING_ANIM( uParam0, uParam2, uParam1 )))
                    {
                        if (NOT (iVar5 == 1))
                        {
                            if (NOT (IS_PED_RAGDOLL( uParam0 )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar6 );
                                TASK_LOOK_AT_CHAR( 0, sub_2988(), -2, 0 );
                                TASK_PLAY_ANIM( 0, uParam1, uParam2, 2.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar6 );
                                TASK_PERFORM_SEQUENCE( uParam0, uVar6 );
                                CLEAR_SEQUENCE_TASK( uVar6 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( uParam0 )))
                        {
                            if (GET_CHAR_READY_TO_BE_EXECUTED( uParam0 ))
                            {
                                SET_CHAR_READY_TO_BE_EXECUTED( uParam0, 0 );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( uParam0 )))
                    {
                        if (NOT (GET_CHAR_READY_TO_BE_EXECUTED( uParam0 )))
                        {
                            SET_CHAR_READY_TO_BE_EXECUTED( uParam0, 1 );
                        }
                    }
                }
            }
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

int sub_41341(unknown uParam0)
{
    int iVar3;

    GET_CURRENT_CHAR_WEAPON( sub_2988(), ref iVar3 );
    if ((iVar3 != 9) AND (iVar3 != 7))
    {
        return 0;
    }
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_2988() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if ((GET_CHAR_MELEE_ACTION_FLAG0( uParam0 )) || (((NOT IS_USING_CONTROLLER()) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3568(), uParam0 ))) AND (IS_CONTROL_JUST_PRESSED( 0, 4 ))))
                {
                    if ((NOT (IS_CHAR_INJURED( sub_2988() ))) AND (NOT (IS_CHAR_INJURED( uParam0 ))))
                    {
                        SET_CHAR_READY_TO_BE_EXECUTED( uParam0, 0 );
                        SET_CHAR_MELEE_ACTION_FLAG0( uParam0, 0 );
                        CLEAR_HELP();
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_41576()
{
    if ((NOT (sub_22957( l_U613 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        if (l_U1002 >= l_U1003)
        {
            sub_22711( "FIN1B_BEGS", ref l_U625, 6, 1 );
            l_U1002 = 0.00000000;
            GENERATE_RANDOM_FLOAT_IN_RANGE( 3.00000000, 4.00000000, ref l_U1003 );
        }
        else
        {
            l_U1002 += 1.00000000 * TIMESTEP();
        }
    }
    return;
}

void sub_41838()
{
    CREATE_CHAR( 26, sub_9217(), 684, 65223, 10, ref l_U498, 1 );
    SET_CHAR_KEEP_TASK( l_U498, 1 );
    SET_CHAR_HEALTH( l_U498, 80 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U498, 24 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U498, "GtaMloRoom02" );
    STOP_PED_SPEAKING( l_U498, 1 );
    return;
}

void sub_42175()
{
    if ((((((sub_12535()) AND (NOT (l_U1029 == 0))) AND (NOT (l_U1029 == 2))) AND (NOT l_U646)) AND (IS_SCREEN_FADED_IN())) AND (TIMERA() >= 1000))
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        l_U1029 = 2;
        l_U646 = 1;
    }
    BLOCK_CHAR_AMBIENT_ANIMS( sub_2988(), 1 );
    BLOCK_CHAR_GESTURE_ANIMS( sub_2988(), 1 );
    if (NOT (IS_CHAR_DEAD( l_U496 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( l_U496, 1 );
        BLOCK_CHAR_GESTURE_ANIMS( l_U496, 1 );
    }
    switch (l_U1029)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_3568(), 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        sub_32713();
        sub_42419();
        CLEAR_AREA( 698.08090000, -294.29720000, 3.26320000, 10.00000000, 1 );
        EXTINGUISH_FIRE_AT_POINT( 698.08090000, -294.29720000, 3.26320000, 10.00000000 );
        sub_11437( 0 );
        if (DOES_BLIP_EXIST( l_U594 ))
        {
            REMOVE_BLIP( l_U594 );
        }
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U496, 1 );
        SET_CHAR_COORDINATES( l_U496, 698.08090000, -294.29720000, 3.26320000 );
        ADD_COVER_POINT( 696.28530000, -290.57320000, 3.26320000, 2, 340, 3, 0, ref l_U609 );
        CLEAR_AREA( 696.28530000, -290.57320000, 3.26320000, 10.00000000, 1 );
        EXTINGUISH_FIRE_AT_POINT( 696.28530000, -290.57320000, 3.26320000, 10.00000000 );
        OPEN_SEQUENCE_TASK( ref l_U611 );
        TASK_GO_STRAIGHT_TO_COORD( 0, 696.28530000, -290.57320000, 3.26320000, 2, -1 );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, 696.28530000, -290.57320000, 3.26320000, -2 );
        CLOSE_SEQUENCE_TASK( l_U611 );
        TASK_PERFORM_SEQUENCE( l_U496, l_U611 );
        CLEAR_SEQUENCE_TASK( l_U611 );
        ADD_BLIP_FOR_CHAR( l_U496, ref l_U591 );
        BEGIN_CAM_COMMANDS( ref l_U602 );
        SET_USE_HIGHDOF( 1 );
        SET_CAM_POS( l_U598, 697.53290000, -267.31360000, 3.25347900 );
        SET_CAM_ROT( l_U598, 0.85788300, -0.00000000, -164.07360000 );
        SET_CAM_FOV( l_U598, 24.10000000 );
        SET_CAM_NEAR_DOF( l_U598, 0.20000000 );
        SET_CAM_FAR_DOF( l_U598, 9 );
        SET_CAM_ACTIVE( l_U598, 1 );
        SET_CAM_PROPAGATE( l_U598, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        END_CAM_COMMANDS( ref l_U602 );
        ADD_COVER_POINT( 702.08740000, -278.02730000, 3.26320000, 0, 133.00000000, 2, 0, ref l_U610 );
        TASK_GO_STRAIGHT_TO_COORD( sub_2988(), 702.08740000, -278.02730000, 3.26320000, 3, -1 );
        SET_PED_IS_BLIND_RAGING( sub_2988(), 0 );
        l_U1029 = 1;
        SETTIMERA( 0 );
        break;
        case 1:
        if ((((LOCATE_CHAR_ANY_MEANS_2D( sub_2988(), 702.08740000, -278.02730000, 0.50000000, 0.50000000, 0 )) || (TIMERA() >= 4000)) AND (l_U1014 == 0)) AND (l_U1016 == 0))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2988() );
            SET_CHAR_COORDINATES_NO_OFFSET( sub_2988(), 701.84700000, -278.12500000, 3.29570000 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( sub_2988(), 701.84700000, -278.12500000, 3.29570000, -2 );
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_POS( l_U598, 699.79000000, -279.33000000, 3.00159400 );
            SET_CAM_ROT( l_U598, -0.47043100, 0.00000000, -62.86390000 );
            SET_CAM_FOV( l_U598, 22.50000000 );
            SET_CAM_FAR_DOF( l_U598, 8 );
            END_CAM_COMMANDS( ref l_U602 );
            SETTIMERA( 0 );
            l_U1016 = 1;
        }
        if (((l_U1016 == 1) AND (TIMERA() >= 600)) AND (l_U1014 == 0))
        {
            sub_15889( "FIN1B_SHIP", 1, 0, ref l_U613, 7, 1 );
            l_U1014 = 1;
        }
        if (((sub_43440( l_U613 )) == 3) AND (l_U1014 == 1))
        {
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_POS( l_U598, 693.73260000, -291.53330000, 3.38804300 );
            SET_CAM_ROT( l_U598, 2.63847600, 0.00000000, -52.15583000 );
            SET_CAM_FOV( l_U598, 36.30002000 );
            SET_CAM_FAR_DOF( l_U598, 14 );
            END_CAM_COMMANDS( ref l_U602 );
            l_U1014 = 2;
        }
        if (((sub_43440( l_U613 )) == 4) AND (l_U1014 == 2))
        {
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_POS( l_U598, 702.20150000, -275.32670000, 3.06821400 );
            SET_CAM_ROT( l_U598, -2.17437300, -0.00000000, 169.76140000 );
            SET_CAM_FOV( l_U598, 22.50000000 );
            SET_CAM_FAR_DOF( l_U598, 8 );
            END_CAM_COMMANDS( ref l_U602 );
            l_U1014 = 3;
        }
        if ((((sub_43440( l_U613 )) == 5) AND (l_U1014 == 3)) AND (l_U1016 == 1))
        {
            l_U1016 = 2;
            SETTIMERA( 0 );
        }
        if ((l_U1016 == 2) AND (TIMERA() >= 3000))
        {
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_POS( l_U598, 691.16660000, -291.15740000, 2.62528200 );
            SET_CAM_ROT( l_U598, 9.51510700, 0.00000000, -61.89611000 );
            SET_CAM_FOV( l_U598, 39.00002000 );
            SET_CAM_FAR_DOF( l_U598, 18 );
            END_CAM_COMMANDS( ref l_U602 );
            l_U1014 = 4;
        }
        if ((((sub_43440( l_U613 )) == 7) AND (l_U1014 == 4)) AND (l_U1016 == 2))
        {
            l_U1016 = 3;
            SETTIMERA( 0 );
            sub_44015();
            sub_44503();
            l_U656 = 1;
        }
        if ((l_U1016 == 3) AND (TIMERA() >= 2300))
        {
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_USE_HIGHDOF( 0 );
            SET_CAM_POS( l_U598, 702.77950000, -272.23970000, 4.47124600 );
            SET_CAM_ROT( l_U598, -9.66208500, 0.00000000, 156.84970000 );
            SET_CAM_FOV( l_U598, 33.10000000 );
            END_CAM_COMMANDS( ref l_U602 );
            l_U1014 = 5;
        }
        if ((l_U1014 == 5) AND (TIMERA() >= 3600))
        {
            l_U1029 = 2;
        }
        break;
        case 2:
        if (l_U646)
        {
            sub_45007( ref l_U613, 0 );
            if (NOT l_U656)
            {
                sub_44015();
            }
        }
        else
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U496 )))
        {
            CLEAR_CHAR_TASKS( l_U496 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U496, 0 );
            SET_CHAR_PROOFS( l_U496, 0, 1, 0, 0, 0 );
            OPEN_SEQUENCE_TASK( ref l_U611 );
            TASK_SEEK_COVER_FROM_PED( 0, sub_2988(), 2000 );
            TASK_COMBAT( 0, sub_2988() );
            CLOSE_SEQUENCE_TASK( l_U611 );
            TASK_PERFORM_SEQUENCE( l_U496, l_U611 );
            CLEAR_SEQUENCE_TASK( l_U611 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U496, 685.64000000, -299.74750000, 3.26320000, 5.00000000 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U496, 696.20570000, -291.64090000, 3.26320000 );
            BLOCK_CHAR_AMBIENT_ANIMS( l_U496, 0 );
            BLOCK_CHAR_GESTURE_ANIMS( l_U496, 0 );
            SET_CHAR_HEADING( l_U496, 91 );
        }
        if (l_U646)
        {
            if (NOT (IS_CHAR_DEAD( sub_2988() )))
            {
                if (NOT (IS_PED_IN_COVER( sub_2988() )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2988() );
                    SET_CHAR_COORDINATES_NO_OFFSET( sub_2988(), 701.84700000, -278.12500000, 3.29570000 );
                    SET_CHAR_HEADING( sub_2988(), 157 );
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( sub_2988(), 701.84700000, -278.12500000, 3.29570000, -2 );
                }
            }
            sub_45539( 1 );
        }
        else
        {
            sub_45539( 0 );
        }
        sub_45955();
        sub_46430();
        l_U657 = 1;
        SET_PLAYER_CONTROL( sub_3568(), 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        BLOCK_CHAR_AMBIENT_ANIMS( sub_2988(), 0 );
        BLOCK_CHAR_GESTURE_ANIMS( sub_2988(), 0 );
        REMOVE_COVER_POINT( l_U609 );
        BEGIN_CAM_COMMANDS( ref l_U602 );
        SET_USE_HIGHDOF( 0 );
        SET_CAM_ACTIVE( l_U598, 0 );
        SET_CAM_PROPAGATE( l_U598, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U602 );
        CLEAR_PRINTS();
        if (l_U646)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U646 = 0;
        l_U1025 = 4;
        break;
    }
    return;
}

void sub_42419()
{
    int I;

    for ( I = 0; I < l_U556; I++ )
    {
        if (DOES_CHAR_EXIST( l_U556[I] ))
        {
            DELETE_CHAR( ref l_U556[I] );
        }
    }
    return;
}

void sub_43440(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_22957( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_44015()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U905[I]._fU0, l_U905[I]._fU4, l_U905[I]._fU8, ref l_U561[I], 1 );
        SET_CHAR_HEADING( l_U561[I], l_U995[I] );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U561[I], "carholdrm" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U561[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U561[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U561[I], l_U604 );
        SET_CHAR_KEEP_TASK( l_U561[I], 1 );
    }
    GIVE_WEAPON_TO_CHAR( l_U561[0], 10, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U561[0], 10, 1 );
    GIVE_WEAPON_TO_CHAR( l_U561[1], 10, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U561[1], 10, 1 );
    GIVE_WEAPON_TO_CHAR( l_U561[2], 12, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U561[2], 12, 1 );
    for ( I = 0; I <= 2; I++ )
    {
        if (HAS_CHAR_GOT_WEAPON( l_U561[I], 14 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U561[I], l_U607 );
        }
        else if ((HAS_CHAR_GOT_WEAPON( l_U561[I], 12 )) || (HAS_CHAR_GOT_WEAPON( l_U561[I], 10 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U561[I], l_U608 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U561[I], l_U605 );
        }
    }
    return;
}

void sub_44503()
{
    if (NOT (IS_CHAR_INJURED( l_U561[0] )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U561[0], 1 );
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 692.73490000, -294.29680000, 3.26320000 );
        TASK_EXTEND_ROUTE( 698.03620000, -282.89360000, 3.26320000 );
        TASK_FOLLOW_POINT_ROUTE( l_U561[0], 3, 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U561[1] )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U561[1], 1 );
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 701.11720000, -288.17350000, 3.22810000 );
        TASK_EXTEND_ROUTE( 701.90110000, -282.52080000, 3.22810000 );
        TASK_FOLLOW_POINT_ROUTE( l_U561[1], 3, 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U561[2] )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U561[2], 1 );
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 700.58780000, -276.65010000, 3.25850000 );
        TASK_FOLLOW_POINT_ROUTE( l_U561[2], 3, 0 );
    }
    return;
}

void sub_45007(int iParam0, unknown uParam1)
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

void sub_45539(boolean bParam0)
{
    if ((NOT (IS_CHAR_INJURED( l_U561[0] ))) AND (NOT (IS_CHAR_DEAD( sub_2988() ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U561[0], 0 );
        TASK_COMBAT( l_U561[0], sub_2988() );
        if (bParam0)
        {
            SET_CHAR_COORDINATES_NO_OFFSET( l_U561[0], 694.66460000, -289.48990000, 3.22804600 );
            SET_CHAR_HEADING( l_U561[0], 332.92790000 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U561[1] ))) AND (NOT (IS_CHAR_DEAD( sub_2988() ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U561[1], 0 );
        TASK_COMBAT( l_U561[1], sub_2988() );
        if (bParam0)
        {
            SET_CHAR_COORDINATES_NO_OFFSET( l_U561[1], 701.71220000, -284.87540000, 3.22806900 );
            SET_CHAR_HEADING( l_U561[1], 355.40770000 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U561[2] ))) AND (NOT (IS_CHAR_DEAD( sub_2988() ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U561[2], 0 );
        TASK_COMBAT( l_U561[2], sub_2988() );
        if (bParam0)
        {
            SET_CHAR_COORDINATES_NO_OFFSET( l_U561[2], 698.71220000, -282.87540000, 3.22806900 );
            SET_CHAR_HEADING( l_U561[2], -37.05000000 );
        }
    }
    return;
}

void sub_45955()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        CREATE_CHAR( 26, sub_9217(), l_U915[I]._fU0, l_U915[I]._fU4, l_U915[I]._fU8, ref l_U565[I], 1 );
        SET_CHAR_HEADING( l_U565[I], l_U999[I] );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U565[I], "GtaMloRoom02" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U565[I] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U565[I], 24 );
        SET_CHAR_DECISION_MAKER( l_U565[I], l_U604 );
        SET_COMBAT_DECISION_MAKER( l_U565[I], l_U605 );
        SET_CHAR_KEEP_TASK( l_U565[I], 1 );
    }
    GIVE_WEAPON_TO_CHAR( l_U565[0], 14, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U565[0], 14, 1 );
    GIVE_WEAPON_TO_CHAR( l_U565[1], 12, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U565[1], 12, 1 );
    for ( I = 0; I <= 1; I++ )
    {
        if (HAS_CHAR_GOT_WEAPON( l_U565[I], 14 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U565[I], l_U607 );
        }
        else if ((HAS_CHAR_GOT_WEAPON( l_U565[I], 12 )) || (HAS_CHAR_GOT_WEAPON( l_U565[I], 10 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U565[I], l_U608 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U565[I], l_U605 );
        }
    }
    return;
}

void sub_46430()
{
    unknown uVar2;

    GET_INTERIOR_AT_COORDS( 689.30630000, -315.08730000, 4.09340000, ref uVar2 );
    ACTIVATE_INTERIOR( uVar2, 1 );
    if (NOT (IS_CHAR_INJURED( l_U565[0] )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U565[0], 1 );
        OPEN_SEQUENCE_TASK( ref l_U611 );
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 695.56600000, -301.46920000, 3.25850000 );
        TASK_EXTEND_ROUTE( 693.00310000, -300.14900000, 3.26350000 );
        TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 695.73340000, -291.29730000, 3.26350000, 3, 1.00000000, 2.00000000, sub_2988(), 0 );
        CLOSE_SEQUENCE_TASK( l_U611 );
        TASK_PERFORM_SEQUENCE( l_U565[0], l_U611 );
        CLEAR_SEQUENCE_TASK( l_U611 );
    }
    if (NOT (IS_CHAR_INJURED( l_U565[1] )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U565[1], 1 );
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 695.16790000, -302.01150000, 3.26350000 );
        TASK_EXTEND_ROUTE( 691.98540000, -295.80470000, 3.26350000 );
        TASK_FOLLOW_POINT_ROUTE( l_U565[1], 3, 0 );
    }
    return;
}

void sub_46971()
{
    unknown uVar2;

    if ((((((sub_12535()) AND (NOT (l_U1028 == 0))) AND (NOT (l_U1028 == 2))) AND (NOT l_U646)) AND (IS_SCREEN_FADED_IN())) AND (TIMERA() >= 1000))
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        l_U1028 = 2;
        l_U646 = 1;
    }
    if (NOT (IS_CHAR_DEAD( sub_2988() )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( sub_2988(), 1 );
    }
    switch (l_U1028)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_3568(), 0 );
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        sub_45007( ref l_U619, 0 );
        REQUEST_ANIMS( "gestures@niko" );
        while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
        {
            WAIT( 0 );
        }
        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
        sub_47282();
        sub_47362();
        if (NOT (IS_CHAR_INJURED( l_U496 )))
        {
            SWITCH_PED_TO_ANIMATED( l_U496, 1 );
            UNLOCK_RAGDOLL( l_U496, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U496, 0, 0, 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U496 );
            CLEAR_AREA( l_U720._fU0, l_U720._fU4, l_U720._fU8, 3.00000000, 1 );
            EXTINGUISH_FIRE_AT_POINT( l_U720._fU0, l_U720._fU4, l_U720._fU8, 5.00000000 );
            SET_CHAR_COORDINATES( l_U496, l_U720._fU0, l_U720._fU4, l_U720._fU8 );
            SET_CHAR_HEADING( l_U496, l_U929 );
            SET_CHAR_DECISION_MAKER( l_U496, l_U603 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U496, 1 );
            TASK_PLAY_ANIM( l_U496, "plead", "MISSFINALE1B", 4.00000000, 1, 0, 0, 0, -1 );
            SET_CHAR_READY_TO_BE_EXECUTED( l_U496, 1 );
        }
        if ((NOT (IS_CHAR_DEAD( sub_2988() ))) AND (NOT (IS_CHAR_DEAD( l_U496 ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2988() );
            CLEAR_AREA( 694.05130000, -292.91240000, 3.25820000, 15.00000000, 1 );
            EXTINGUISH_FIRE_AT_POINT( 695.55130000, -292.91240000, 3.25820000, 5.00000000 );
            SET_CHAR_COORDINATES_NO_OFFSET( sub_2988(), 695.55130000, -292.91240000, 3.25820000 );
            SET_CHAR_HEADING( sub_2988(), 153.30220000 );
            OPEN_SEQUENCE_TASK( ref l_U611 );
            TASK_PAUSE( 0, 6000 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 694.45890000, -294.85190000, 3.25820000, 2, -1 );
            TASK_PAUSE( 0, 1000 );
            TASK_LOOK_AT_CHAR( 0, l_U496, 30000, 0 );
            CLOSE_SEQUENCE_TASK( l_U611 );
            TASK_PERFORM_SEQUENCE( sub_2988(), l_U611 );
            CLEAR_SEQUENCE_TASK( l_U611 );
        }
        WAIT( 50 );
        BEGIN_CAM_COMMANDS( ref l_U602 );
        SET_USE_HIGHDOF( 1 );
        SET_CAM_POS( l_U598, 691.50150000, -297.66780000, 3.82808500 );
        SET_CAM_ROT( l_U598, -4.47306300, -0.00000000, -51.97127000 );
        SET_CAM_FOV( l_U598, 33.30003000 );
        SET_CAM_FAR_DOF( l_U598, 8 );
        SET_CAM_ACTIVE( l_U598, 1 );
        SET_CAM_PROPAGATE( l_U598, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        END_CAM_COMMANDS( ref l_U602 );
        DO_SCREEN_FADE_IN( 500 );
        sub_22711( "FIN1B_INJURE", ref l_U613, 7, 1 );
        l_U1028 = 1;
        SETTIMERB( 0 );
        break;
        case 1:
        if (((NOT l_U662) AND ((sub_43440( l_U613 )) == 2)) AND (TIMERB() > 200))
        {
            if (NOT (IS_CHAR_DEAD( l_U496 )))
            {
                TASK_AIM_GUN_AT_COORD( sub_2988(), 693.46530000, -296.77410000, 3.76132300, 60000 );
                SETTIMERB( 0 );
                l_U662 = 1;
            }
        }
        if (((l_U662) AND (l_U1015 == 0)) AND (TIMERB() > 300))
        {
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_POS( l_U598, 694.12790000, -293.52260000, 3.79122200 );
            SET_CAM_ROT( l_U598, -2.75418300, -0.00000000, 179.57130000 );
            SET_CAM_FOV( l_U598, 34.80003000 );
            END_CAM_COMMANDS( ref l_U602 );
            l_U1015 = 1;
        }
        if (((sub_43440( l_U613 )) == 5) AND (l_U1015 == 1))
        {
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_POS( l_U598, 693.37770000, -295.90070000, 3.65996000 );
            SET_CAM_ROT( l_U598, 4.70225100, 0.00000000, -51.22703000 );
            SET_CAM_FOV( l_U598, 26.10006000 );
            SET_CAM_FAR_DOF( l_U598, 3 );
            END_CAM_COMMANDS( ref l_U602 );
            l_U1015 = 2;
            SETTIMERA( 0 );
        }
        if ((l_U1015 == 2) AND (TIMERA() >= 4000))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U1028 = 2;
        }
        break;
        case 2:
        if (l_U646)
        {
            if (NOT (IS_CHAR_DEAD( sub_2988() )))
            {
                SET_CHAR_COORDINATES_NO_OFFSET( sub_2988(), 694.45890000, -294.85190000, 3.25820000 );
                SET_CHAR_HEADING( sub_2988(), 153.33000000 );
            }
        }
        else
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U496 )))
        {
            SET_CHAR_HEALTH( l_U496, 110 );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U496 );
            UNLOCK_RAGDOLL( l_U496, 1 );
            SET_CHAR_PROOFS( l_U496, 0, 0, 0, 0, 0 );
        }
        sub_45007( ref l_U613, 0 );
        SET_INSTANT_WIDESCREEN_BORDERS( 0 );
        BEGIN_CAM_COMMANDS( ref l_U602 );
        SET_USE_HIGHDOF( 0 );
        SET_CAM_ACTIVE( l_U598, 0 );
        SET_CAM_PROPAGATE( l_U598, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U602 );
        REMOVE_ANIMS( "gestures@niko" );
        SET_GAME_CAM_HEADING( 0.00000000 );
        PRINT_NOW( "FIN1B_04a", 7500, 1 );
        CLEAR_CHAR_TASKS( sub_2988() );
        if ((NOT (HAS_CHAR_GOT_WEAPON( sub_2988(), 7 ))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_2988(), 9 ))))
        {
            GET_CURRENT_CHAR_WEAPON( sub_2988(), ref uVar2 );
            GIVE_WEAPON_TO_CHAR( sub_2988(), 7, 17, 0 );
            SET_CURRENT_CHAR_WEAPON( sub_2988(), uVar2, 1 );
            WAIT( 1000 );
        }
        WAIT( 1000 );
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( sub_3568(), 1 );
        l_U646 = 0;
        l_U1025 = 4;
        break;
    }
    return;
}

void sub_47282()
{
    int I;

    for ( I = 0; I < l_U561; I++ )
    {
        if (DOES_CHAR_EXIST( l_U561[I] ))
        {
            DELETE_CHAR( ref l_U561[I] );
        }
    }
    return;
}

void sub_47362()
{
    int I;

    for ( I = 0; I < l_U565; I++ )
    {
        if (DOES_CHAR_EXIST( l_U565[I] ))
        {
            DELETE_CHAR( ref l_U565[I] );
        }
    }
    return;
}

void sub_49209(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (l_U1030)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_3568(), 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 20.00000000, 1 );
        EXTINGUISH_FIRE_AT_POINT( uParam0._fU0, uParam0._fU4, uParam0._fU8, 5.00000000 );
        SET_CHAR_COORDINATES_NO_OFFSET( sub_2988(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
        SET_CHAR_HEADING( sub_2988(), uParam3 );
        if (sub_22957( l_U625 ))
        {
            sub_45007( ref l_U625, 0 );
        }
        CLEAR_PRINTS();
        if (DOES_BLIP_EXIST( l_U591 ))
        {
            REMOVE_BLIP( l_U591 );
        }
        if (NOT (IS_CHAR_DEAD( l_U496 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2988(), 0.00000000, 1.50000000, 0, ref l_U1036._fU0, ref l_U1036._fU4, ref l_U1036._fU8 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U496, l_U1036._fU0, l_U1036._fU4, l_U1036._fU8 );
            GET_CHAR_HEADING( sub_2988(), ref l_U1032 );
            SET_CHAR_HEADING( l_U496, l_U1032 + 170.78820000 );
            SET_CHAR_PROOFS( l_U496, 1, 0, 0, 0, 0 );
            SWITCH_PED_TO_ANIMATED( l_U496, 1 );
            UNLOCK_RAGDOLL( l_U496, 0 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U496, "victim", "missfinale1b", 4.00000000, 0, 0, 0, 1, 0 );
        }
        TASK_PLAY_ANIM_SECONDARY( sub_2988(), "player_execute", "missfinale1b", 1000.00000000, 0, 0, 0, 1, 0 );
        BEGIN_CAM_COMMANDS( ref l_U602 );
        SET_USE_HIGHDOF( 1 );
        CREATE_CAM( 14, ref l_U1039 );
        ATTACH_CAM_TO_PED( l_U1039, sub_2988() );
        SET_CAM_ATTACH_OFFSET( l_U1039, 1.76000000, 2.80000000, -0.70000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1039, 1 );
        POINT_CAM_AT_PED( l_U1039, sub_2988() );
        SET_CAM_POINT_OFFSET( l_U1039, -0.84000000, 0.14400000, 0.35200000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U1039, 1 );
        SET_CAM_FOV( l_U1039, 32.12000000 );
        SET_CAM_ACTIVE( l_U1039, 1 );
        SET_CAM_PROPAGATE( l_U1039, 1 );
        SET_CAM_NEAR_DOF( l_U1039, 0.20000000 );
        SET_CAM_FAR_DOF( l_U1039, 5.00000000 );
        CREATE_CAM( 14, ref l_U1040 );
        ATTACH_CAM_TO_PED( l_U1040, sub_2988() );
        SET_CAM_ATTACH_OFFSET( l_U1040, -1.38000000, 3.34000000, -0.75000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1040, 1 );
        POINT_CAM_AT_PED( l_U1040, sub_2988() );
        SET_CAM_POINT_OFFSET( l_U1040, -0.66800000, 0.14400000, 0.12800000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U1040, 1 );
        SET_CAM_FOV( l_U1040, 29.92000000 );
        SET_CAM_ACTIVE( l_U1040, 0 );
        SET_CAM_PROPAGATE( l_U1040, 0 );
        SET_CAM_NEAR_DOF( l_U1040, 0.20000000 );
        SET_CAM_FAR_DOF( l_U1040, 5.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        END_CAM_COMMANDS( ref l_U602 );
        SETTIMERB( 0 );
        l_U1030 = 1;
        break;
        case 1:
        if (TIMERB() >= 2300)
        {
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_CAM_ACTIVE( l_U1040, 1 );
            SET_CAM_PROPAGATE( l_U1040, 1 );
            SET_CAM_ACTIVE( l_U1039, 0 );
            SET_CAM_PROPAGATE( l_U1039, 0 );
            END_CAM_COMMANDS( ref l_U602 );
            l_U1030 = 3;
        }
        break;
        case 3:
        if (TIMERB() >= 4500)
        {
            BEGIN_CAM_COMMANDS( ref l_U602 );
            SET_USE_HIGHDOF( 0 );
            SET_CAM_ACTIVE( l_U1039, 0 );
            SET_CAM_PROPAGATE( l_U1039, 0 );
            SET_CAM_ACTIVE( l_U1040, 0 );
            SET_CAM_PROPAGATE( l_U1040, 0 );
            DESTROY_CAM( l_U1039 );
            DESTROY_CAM( l_U1040 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U602 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            DISPLAY_RADAR( 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            if (NOT (IS_CHAR_DEAD( l_U496 )))
            {
                CLEAR_CHAR_TASKS( l_U496 );
                UNLOCK_RAGDOLL( l_U496, 1 );
                SWITCH_PED_TO_RAGDOLL( l_U496, 2000, 3000, 0, 1, 1, 1 );
                STOP_PED_SPEAKING( l_U496, 1 );
                WAIT( 0 );
                if (NOT (IS_CHAR_DEAD( l_U496 )))
                {
                    DAMAGE_CHAR( l_U496, 2000, 0 );
                }
                if (DOES_CHAR_EXIST( l_U496 ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U496 );
                }
            }
            if (NOT (IS_CHAR_DEAD( sub_2988() )))
            {
                CLEAR_CHAR_TASKS( sub_2988() );
            }
            if (IS_PLAYER_PLAYING( sub_3568() ))
            {
                SET_PLAYER_CONTROL( sub_3568(), 1 );
            }
            l_U1030 = 4;
        }
        break;
        case 4:
        l_U1025 = 4;
        break;
    }
    if ((IS_CHAR_PLAYING_ANIM( sub_2988(), "missfinale1b", "player_execute" )) AND (NOT (IS_CHAR_DEAD( l_U496 ))))
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_2988(), "missfinale1b", "player_execute", ref l_U1031 );
        switch (l_U1017)
        {
            case 0:
            if (l_U1031 >= 0.13100000)
            {
                GET_PED_BONE_POSITION( l_U496, 14512, 0.00000000, 0.00000000, 0.00000000, ref l_U1033 );
                FIRE_PED_WEAPON( sub_2988(), l_U1033 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    TRIGGER_PTFX_ON_PED_BONE( "CS_execution_kneecaps", l_U496, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 14512, 1 );
                }
                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U496, "ON_FIRE", "PAIN_VOICE", 1, 0, 0 );
                l_U1017++;
            }
            break;
            case 1:
            if (l_U1031 >= 0.32900000)
            {
                GET_PED_BONE_POSITION( l_U496, 14768, 0.00000000, 0.00000000, 0.00000000, ref l_U1033 );
                FIRE_PED_WEAPON( sub_2988(), l_U1033 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    TRIGGER_PTFX_ON_PED_BONE( "CS_execution_kneecaps", l_U496, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 14768, 1 );
                }
                l_U1017++;
            }
            break;
            case 2:
            if (l_U1031 >= 0.70000000)
            {
                GET_PED_BONE_POSITION( l_U496, 1205, 0.00000000, 0.00000000, 0.00000000, ref l_U1033 );
                FIRE_PED_WEAPON( sub_2988(), l_U1033 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    TRIGGER_PTFX_ON_PED_BONE( "CS_execution_dimitri", l_U496, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1205, 1 );
                }
                l_U1017++;
            }
            break;
        }
    }
    return;
}

void sub_51496()
{
    if (NOT l_U665)
    {
        if (NOT (IS_CHAR_DEAD( l_U498 )))
        {
            if (NOT (IS_CHAR_DEAD( sub_2988() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2988(), l_U498, 6.00000000, 6.00000000, 6.00000000, 0 ))
                {
                    STOP_PED_SPEAKING( l_U498, 0 );
                    l_U665 = 1;
                }
            }
        }
    }
    if (NOT l_U667)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2988(), 678.75000000, -313.52000000, 9.95000000, 1.40000000, 1.40000000, 1.40000000, 0 ))
        {
            PRINT_NOW( "FIN1B_05", 7500, 1 );
            if (DOES_BLIP_EXIST( l_U595 ))
            {
                REMOVE_BLIP( l_U595 );
            }
            l_U667 = 1;
        }
    }
    if (NOT l_U666)
    {
        if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_2988(), 687.65000000, -342.95000000, 0.00000000, 763.06000000, -180.11000000, 35.51000000, 30, 0 )))
        {
            if (l_U932 >= 2.50000000)
            {
                if (IS_CHAR_IN_WATER( sub_2988() ))
                {
                    PRINT_NOW( "FIN1B_06", 7500, 1 );
                    l_U666 = 1;
                    l_U932 = 0.00000000;
                }
                else
                {
                    l_U1025 = 9;
                }
            }
            else
            {
                l_U932 += 1.00000000 * TIMESTEP();
            }
        }
    }
    else if (NOT (IS_CHAR_IN_WATER( sub_2988() )))
    {
        l_U666 = 0;
    }
    return;
}

void sub_51943()
{
    sub_51952();
    TRIGGER_MISSION_COMPLETE_AUDIO( 65 );
    CLEAR_WANTED_LEVEL( sub_3568() );
    sub_63565( 3039, 3 );
    sub_63650( "PD_DIMITRI", "PD_RASCALOV" );
    g_U15654[12] = 0;
    sub_63847();
    sub_63992( 0, "FIN1B_PDEAD", "FIN1BAU", 0 );
    sub_2979();
    return;
}

void sub_51952()
{
    sub_51961();
    return;
}

void sub_51961()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_51979();
    sub_52038( iVar2, iVar3, iVar4 );
    return;
}

void sub_51979()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U490[I] = 4;
    }
    return;
}

void sub_52038(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_52069( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_52069(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_52165( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_52165( ref cVar9 );
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
            sub_52165( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_52165( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_52165( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_52165( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_52742( iParam0, iVar7 );;;
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
                sub_53139( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_53139( 0, 4 );
            }
        }
    }
    if (NOT (sub_53228( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3568(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3568() );
    }
    sub_2077();
    bVar27 = true;
    uVar28 = sub_52742( iParam0, iVar7 );
    uVar29 = sub_1534( iParam0 );
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
                sub_62604( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_63034();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_63119( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_63176( iParam0 );
                sub_63215( 0 );
                sub_1975( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_63323();
        }
    }
    if (bParam2)
    {
        sub_63034();
        sub_63411();
        sub_63215( 0 );
    }
    if (bParam3)
    {
        sub_63034();
        sub_63451();
        sub_63215( 0 );
        sub_1975( uVar29, 0 );
    }
    sub_1421();
    return;
}

void sub_52165(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_52742(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1933( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_53139(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_53228(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_53436( uParam1 );
        break;
        case 1:
        bVar8 = sub_55514( uParam1 );
        break;
        case 2:
        bVar8 = sub_55740( uParam1 );
        break;
        case 3:
        bVar8 = sub_55890( uParam1 );
        break;
        case 4:
        bVar8 = sub_56168( uParam1 );
        break;
        case 5:
        bVar8 = sub_56471( uParam1 );
        break;
        case 6:
        bVar8 = sub_56670( uParam1 );
        break;
        case 7:
        bVar8 = sub_56896( uParam1 );
        break;
        case 8:
        bVar8 = sub_57131( uParam1 );
        break;
        case 9:
        bVar8 = sub_57506( uParam1 );
        break;
        case 10:
        bVar8 = sub_57753( uParam1 );
        break;
        case 11:
        bVar8 = sub_57892( uParam1 );
        break;
        case 12:
        bVar8 = sub_58191( uParam1 );
        break;
        case 13:
        bVar8 = sub_58419( uParam1 );
        break;
        case 14:
        bVar8 = sub_58706( uParam1 );
        break;
        case 15:
        bVar8 = sub_58988( uParam1 );
        break;
        case 16:
        bVar8 = sub_59270( uParam1 );
        break;
        case 17:
        bVar8 = sub_59471( uParam1 );
        break;
        case 18:
        bVar8 = sub_59544( uParam1 );
        break;
        case 19:
        bVar8 = sub_59758( uParam1 );
        break;
        case 20:
        bVar8 = sub_60011( uParam1 );
        break;
        case 21:
        bVar8 = sub_60258( uParam1 );
        break;
        case 22:
        bVar8 = sub_60459( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_55119( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_52742( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_60782( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_53436(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_53715( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_53715( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_53715( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_53715( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_53715( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_53715( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_53715( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_53715( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_53715( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_53715( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_53715( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_53715( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_53715( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_53715( iVar3, 0, 3, 1, 0, 0 );
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
        sub_53715( iVar3, 0, sub_54997(), sub_55263(), 0, 0 );
        break;
        default:
        sub_55422( "Friend 1", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Friend 1", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_53715(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_53726( uParam1 );
    sub_53900( uParam0, 0, uParam2 );
    sub_53900( uParam0, 1, uParam3 );
    sub_53900( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_51979();
    return;
}

void sub_53726(unknown uParam0)
{
    ADD_SCORE( sub_3568(), uParam0 );
    sub_53751( uParam0 );
    return;
}

void sub_53751(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1933( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_53900(unknown uParam0, int iParam1, int iParam2)
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
        sub_54057( uParam0 );
    }
    return;
}

void sub_54057(unknown uParam0)
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

int sub_54997()
{
    switch (l_U490[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_55119( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_55119(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_55263()
{
    switch (l_U490[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_55119( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_55422(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_55514(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53715( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_55422( "Contact 2", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 2", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55740(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_53715( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_55422( "Girl 3", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Girl 3", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55890(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_53715( iVar3, 0, sub_54997(), sub_55263(), 0, 0 );
        break;
        default:
        sub_55422( "Friend 4", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Friend 4", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56168(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53715( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_53715( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_53715( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_53715( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_55422( "Contact 5", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 5", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56471(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_55422( "Contact 7", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 7", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56670(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53715( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_55422( "Contact 7b", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 7b", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56896(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_53715( iVar3, 0, sub_54997(), sub_55263(), 0, 0 );
        break;
        default:
        sub_55422( "Friend 8", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Friend 8", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57131(unknown uParam0)
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
        sub_53715( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_53715( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_53715( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_53715( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_53715( iVar3, 0, sub_54997(), sub_55263(), 0, 0 );
        break;
        default:
        sub_55422( "Friend 9", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Friend 9", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57506(unknown uParam0)
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
        sub_53715( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_53715( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_53715( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_55422( "Contact 10", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_55422( "Contact 10", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57753(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_55422( "Girl 11", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Girl 11", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57892(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53715( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_53715( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_53715( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_53715( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_53715( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_55422( "Contact 12", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 12", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58191(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53715( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_55422( "Contact 13", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 13", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58419(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_53715( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_53715( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_53715( iVar3, 0, sub_54997(), sub_55263(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_55422( "Friend 15", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Friend 15", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58706(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53715( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_53715( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_53715( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_55422( "Contact 16", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 16", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58988(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_53715( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_53715( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_53715( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_55422( "Contact 18", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 18", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59270(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_55422( "Contact 19", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 19", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59471(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_55422( "Girl 20", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59544(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_55422( "Contact 21", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 21", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59758(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53715( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_53715( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_55422( "Contact 22", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 22", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60011(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_53715( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53715( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_53715( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_55422( "Contact 24", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 24", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60258(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53715( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53715( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53715( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_55422( "Contact 25", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55422( "Contact 25", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60459(unknown uParam0)
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
        sub_53715( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_55422( "Girl 26", 1 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_55422( "Girl 26", 0 );
        sub_53715( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_60782(int iParam0, int iParam1)
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
    if (sub_60830( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_61561( iParam1 );
    }
    return;
}

int sub_60830(int iParam0, int iParam1)
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
            sub_60970( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_60970(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_61152( 0 );
    return;
}

void sub_61152(boolean bParam0)
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
        sub_61407();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_61407()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_61561(int iParam0)
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
        sub_61894( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_61894( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_61894( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_61894( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_61894( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_61894( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_61894( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_61894( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_61894( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_61894( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_61894( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_61894( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_61894( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_61894( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_61894( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_61894( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_61894( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_61894( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_61894( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_61894(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_62604(unknown uParam0, unknown uParam1)
{
    sub_62623( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_62623(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_63034()
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

int sub_63119(int iParam0, int iParam1)
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

void sub_63176(unknown uParam0)
{
    sub_1320();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_63215(unknown uParam0)
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

void sub_63323()
{
    sub_63332();
    return;
}

void sub_63332()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_63411()
{
    sub_63332();
    return;
}

void sub_63451()
{
    sub_63332();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_63565(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_63650(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_63663( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2273[iVar4]._fU180 = 1;
        g_U2273[iVar4]._fU212 = 1;
    }
    return;
}

int sub_63663(unknown uParam0, unknown uParam1)
{
    int Result;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( Result = 0; Result <= 99; Result++ )
        {
            if (COMPARE_STRING( ref g_U2273[Result]._fU16, uParam0 ))
            {
                if (COMPARE_STRING( ref g_U2273[Result]._fU0, uParam1 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

void sub_63847()
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

void sub_63992(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_64036( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_64036(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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
