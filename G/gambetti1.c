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
    l_U481 = {0.00000000, 0.00000000, 10.00000000};
    l_U484 = 90.00000000;
    l_U485 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 1;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = {0.00000000, 0.00000000, 0.00000000};
    l_U501 = 0.25000000;
    l_U502 = 1;
    l_U503 = 12.00000000;
    l_U504 = 0.50000000;
    l_U505 = 2.00000000;
    l_U507 = 11.00000000;
    l_U508 = 1.40000000;
    l_U509 = 0.55000000;
    l_U510 = 0.00000000;
    l_U511 = -1.90000000;
    l_U512 = 0;
    l_U513 = 0;
    l_U514 = 1.00000000;
    l_U515 = 0.40000000;
    l_U516 = 1.40000000;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = {0.00000000, 0.00000000, 0.00000000};
    l_U522 = -1.00000000;
    l_U523 = 9.00000000;
    l_U524 = 0;
    l_U525 = 10.00000000;
    l_U526 = 0.00000000;
    l_U527 = 1.40000000;
    l_U528 = 1.30000000;
    l_U529 = 6.00000000;
    l_U530 = 15.00000000;
    l_U531 = 9.00000000;
    l_U532 = -0.25000000;
    l_U533 = 0.45000000;
    l_U534 = {0.00000000, 0.00000000, 0.00000000};
    l_U537 = 0;
    l_U538 = 0;
    l_U539 = 0.10000000;
    l_U540 = 0.10000000;
    l_U541 = 0.10000000;
    l_U542 = 12.00000000;
    l_U543 = 1.00000000;
    l_U544 = 0.55000000;
    l_U554 = 0;
    l_U555 = 0;
    l_U556 = 0;
    l_U557 = 0;
    l_U558 = 0;
    l_U559 = 0;
    l_U560 = 0;
    l_U561 = 0;
    l_U562 = 0;
    l_U563 = 1;
    l_U564 = 2;
    l_U565 = 1;
    l_U566 = 0;
    l_U567 = 0;
    l_U568 = 1;
    l_U569 = 0;
    l_U570 = 0;
    l_U571 = 0;
    l_U572 = 0;
    l_U573 = 0;
    l_U574 = 0;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U584 = 1;
    l_U585 = 0;
    l_U586 = 0;
    l_U587 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U590 = 0;
    l_U763 = 1.00000000;
    l_U764 = 5.00000000;
    l_U773 = 0;
    l_U774 = 0;
    l_U775 = 0;
    l_U825 = 0;
    l_U826 = 0;
    l_U833 = 0;
    l_U834 = 0;
    l_U835 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_859();
        sub_2969();
    }
    SET_MISSION_FLAG( 1 );
    WAIT( 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (l_U565)
    {
        WAIT( 0 );
        switch (l_U558)
        {
            case 0:
            sub_4948();
            break;
            case 1:
            sub_5928();
            break;
            case 2:
            sub_7354();
            break;
            case 3:
            sub_13538();
            break;
            case 4:
            sub_19032();
            break;
            case 5:
            sub_20265();
            break;
            case 6:
            sub_28313();
            break;
            case 7:
            sub_46544();
            break;
            case 8:
            sub_74002();
            break;
            case 9:
            sub_77450();
            break;
            default: break;
        }
        sub_78274();
    }
    sub_2969();
    return;
}

void sub_859()
{
    sub_868();
    return;
}

void sub_868()
{
    int iVar2;

    iVar2 = 21;
    sub_882( iVar2 );
    sub_2058( iVar2 );
    return;
}

void sub_882(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_926();
        sub_1087();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1195();
            sub_1234();
        }
    }
    sub_1310();
    sub_1411();
    uVar5 = sub_1524( uParam0 );
    sub_1965( uVar5, 0 );
    return;
}

void sub_926()
{
    sub_940( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1040();
    }
    return;
}

void sub_940(int iParam0)
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

void sub_1040()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1087()
{
    sub_1096();
    return;
}

void sub_1096()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1195()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1234()
{
    sub_1243();
    return;
}

void sub_1243()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1310()
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

void sub_1411()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1433();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1433()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1524(unknown uParam0)
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
    sub_1923( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1923(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1965(int iParam0, boolean bParam1)
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

void sub_2058(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2067();
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
        sub_2842();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2067()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2105( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2105( 1, g_U569[I] )) != 0)
            {
                sub_2391( I );
            }
        }
    }
    if (NOT sub_2557())
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

int sub_2105(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2391(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2476( g_U569 - 1 );
    return;
}

void sub_2476(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2557()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2105( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2842()
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

void sub_2969()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U591 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U592 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U593 );
    g_U9163 = 0;
    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U594[l_U776] );
    }
    for ( l_U776 = 0; l_U776 < l_U773; l_U776++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U607[l_U776] );
        REMOVE_BLIP( l_U670[l_U776] );
    }
    for ( l_U776 = 0; l_U776 < l_U774; l_U776++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U618[l_U776] );
        REMOVE_BLIP( l_U681[l_U776] );
    }
    for ( l_U776 = 0; l_U776 < l_U775; l_U776++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U629[l_U776] );
        REMOVE_BLIP( l_U692[l_U776] );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[0] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[1] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U606 );
    for ( l_U776 = 0; l_U776 < 4; l_U776++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U640[l_U776] );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U645[l_U776] );
        REMOVE_BLIP( l_U708[l_U776] );
        REMOVE_BLIP( l_U703[l_U776] );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U650 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U658 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U659 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U660 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U661 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U667 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U662[0] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U662[1] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U662[2] );
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U651[0] );
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U651[1] );
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U651[2] );
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U651[3] );
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U651[4] );
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U657 );
    REMOVE_BLIP( l_U668 );
    REMOVE_BLIP( l_U669 );
    REMOVE_DECISION_MAKER( l_U756 );
    REMOVE_DECISION_MAKER( l_U757 );
    REMOVE_DECISION_MAKER( l_U758 );
    REMOVE_DECISION_MAKER( l_U759 );
    REMOVE_DECISION_MAKER( l_U760 );
    REMOVE_DECISION_MAKER( l_U761 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U787 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U788 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U789 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U790 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U791 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U792 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U793 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U794 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U795 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U796 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U797 );
    REMOVE_ANIMS( "missheli_tour" );
    REMOVE_ANIMS( "missgambetti1" );
    if (DOES_PICKUP_EXIST( l_U836 ))
    {
        REMOVE_PICKUP( l_U836 );
    }
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 67.62440000, -226.63990000, 13.38700000, 94.41690000, -160.27070000, 15.00000000 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 12.17070000, -47.38590000, 12.66360000, 30.75750000, -35.79560000, 15.00600000 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 110.31280000, -51.48730000, 12.80990000, 112.31280000, -49.48730000, 14.80990000 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( -31.79410000, -51.45760000, 12.80240000, -29.79410000, -49.45760000, 14.80240000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 92.00000000, -158.00000000, 13.90540000, 93.00000000, -156.00000000, 15.90540000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 77.90000000, -223.10000000, 13.80000000, 79.90000000, -221.10000000, 15.80000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 36.43250000, -158.82190000, 12.93320000, 38.43250000, -156.82190000, 14.93320000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 76.75100000, -166.52660000, 11.56280000, 80.75100000, -162.52660000, 15.56280000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 76.75850000, -214.73350000, 11.78510000, 80.75850000, -210.73350000, 15.78510000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 33.27020000, -166.91610000, 11.57950000, 37.27020000, -162.91610000, 15.57950000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 66.36220000, -166.67280000, 11.56590000, 70.36220000, -162.67280000, 15.56590000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 21.00000000, -141.00000000, 13.00000000, 24.00000000, -138.00000000, 16.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 21.00000000, -64.00000000, 13.00000000, 24.00000000, -61.00000000, 16.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    sub_4475();
    sub_4631( ref l_U813, 0 );
    sub_4631( ref l_U819, 0 );
    SET_CREATE_RANDOM_COPS( 1 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_4475()
{
    if (l_U557)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U555 = 0;
    l_U554 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_4631(int iParam0, unknown uParam1)
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

void sub_4948()
{
    LOAD_ADDITIONAL_TEXT( "GAMBET1", 0 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U756 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U757 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U757, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U757, 2 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U758 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U759 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U760 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U760, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U760, 2 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U761 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U761, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U761, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U761, 2 );
    l_U713 = {23.89000000, -40.69120000, 13.81190000};
    l_U753 = {-178.42630000, -363.22060000, 14.65860000};
    l_U716[0] = {14.85530000, -46.01390000, 13.69760000};
    l_U726[0] = 90.00000000;
    l_U716[1] = {21.05870000, -46.01590000, 13.71020000};
    l_U726[1] = 90.00000000;
    l_U716[2] = {26.89300000, -46.01390000, 13.69760000};
    l_U726[2] = 90.00000000;
    l_U730[0] = {-52.73530000, -102.47430000, 14.81220000};
    l_U730[1] = {52.56500000, -163.22590000, 14.53480000};
    l_U730[2] = {76.76800000, -206.52650000, 13.74190000};
    l_U771 = 3;
    l_U772 = 0;
    l_U770 = 6;
    l_U762 = 10.00000000;
    l_U787 = 1063816580;
    l_U788 = 897868981;
    l_U789 = 1976502708;
    l_U790 = -37030056;
    l_U791 = -322343873;
    l_U792 = -713569950;
    l_U793 = -1518596733;
    l_U794 = -714220780;
    l_U795 = -196312163;
    l_U798 = 7;
    l_U799 = 18;
    l_U800 = 12;
    l_U801 = 14;
    GET_WEAPONTYPE_MODEL( 18, ref l_U796 );
    l_U796 = 1516578222;
    l_U797 = 1443084780;
    sub_5555( "G1AUD" );
    LOAD_ADDITIONAL_TEXT( "G1AUD", 6 );
    sub_5734( 0, sub_5685(), "NIKO", 0 );
    sub_5734( 1, l_U591, "BOBBY", 0 );
    l_U558 = 1;
    l_U559 = 0;
    return;
}

void sub_5555(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_5574();
    return;
}

void sub_5574()
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

void sub_5685()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5734(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5818( "\n PED NUMBER ", uParam0 );
    sub_5858( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5818(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5858(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5928()
{
    switch (l_U559)
    {
        case 0:
        if (g_U9893._fU24)
        {
            ADD_SCENARIO_BLOCKING_AREA( 1230.00000000, 184.00000000, 30.00000000, 1253.00000000, 204.00000000, 40 );
            CLEAR_AREA( 1230.00000000, 184.00000000, 30.00000000, 10.00000000, 1 );
            EXTINGUISH_FIRE_AT_POINT( 1230.00000000, 184.00000000, 30.00000000, 20.00000000 );
            l_U559 = 12;
            START_CUTSCENE_NOW( "G_1" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "G_1" );
        }
        else
        {
            l_U559 = 13;
        }
        break;
        case 12:
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        l_U559 = 13;
        break;
        case 13:
        FLUSH_SCENARIO_BLOCKING_AREAS();
        CLEAR_CHAR_TASKS( sub_5685() );
        SET_CHAR_COORDINATES( sub_5685(), 1195.49200000, 196.25190000, 31.57350000 );
        SET_CHAR_HEADING( sub_5685(), 100.40000000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        ADD_BLIP_FOR_COORD( 20.70320000, -42.59620000, 13.81190000, ref l_U669 );
        SET_ROUTE( l_U669, 1 );
        SET_BLIP_AS_FRIENDLY( l_U669, 1 );
        sub_6366( ref l_U669, 52.51440000, -45.69540000, 13.64730000, 90.00000000 );
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5685(), 0 );
        CLEAR_PRINTS();
        sub_6450();
        LOAD_SCENE( 1195.49200000, 196.25190000, 31.57350000 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( sub_6907(), 1 );
        CLEAR_PRINTS();
        PRINT( "PVP_GO_VIP", 7500, 1 );
        l_U558 = 2;
        SWITCH_ROADS_OFF( 21.00000000, -141.00000000, 13.00000000, 24.00000000, -138.00000000, 16.00000000 );
        SWITCH_ROADS_OFF( 21.00000000, -64.00000000, 13.00000000, 24.00000000, -61.00000000, 16.00000000 );
        SWITCH_PED_PATHS_OFF( 12.17070000, -47.38590000, 12.66360000, 30.75750000, -35.79560000, 15.00600000 );
        SWITCH_ROADS_OFF( 110.31280000, -51.48730000, 12.80990000, 112.31280000, -49.48730000, 14.80990000 );
        SWITCH_ROADS_OFF( -31.79410000, -51.45760000, 12.80240000, -29.79410000, -49.45760000, 14.80240000 );
        SWITCH_ROADS_OFF( 76.75100000, -166.52660000, 11.56280000, 80.75100000, -162.52660000, 15.56280000 );
        SWITCH_ROADS_OFF( 76.75850000, -214.73350000, 11.78510000, 80.75850000, -210.73350000, 15.78510000 );
        SWITCH_ROADS_OFF( 33.27020000, -166.91610000, 11.57950000, 37.27020000, -162.91610000, 15.57950000 );
        SWITCH_ROADS_OFF( 66.36220000, -166.67280000, 11.56590000, 70.36220000, -162.67280000, 15.56590000 );
        break;
    }
    return;
}

void sub_6366(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_6450()
{
    REQUEST_MODEL( l_U787 );
    REQUEST_MODEL( l_U788 );
    while ((NOT (HAS_MODEL_LOADED( l_U787 ))) || (NOT (HAS_MODEL_LOADED( l_U788 ))))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( l_U790 );
    LOAD_ALL_OBJECTS_NOW();
    while (NOT (HAS_MODEL_LOADED( l_U790 )))
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( l_U790 );
    REQUEST_MODEL( l_U793 );
    REQUEST_MODEL( l_U794 );
    LOAD_ALL_OBJECTS_NOW();
    while ((NOT (HAS_MODEL_LOADED( l_U793 ))) || (NOT (HAS_MODEL_LOADED( l_U794 ))))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "missgambetti1" );
    REQUEST_ANIMS( "missheli_tour" );
    LOAD_ALL_OBJECTS_NOW();
    while ((NOT (HAVE_ANIMS_LOADED( "missgambetti1" ))) || (NOT (HAVE_ANIMS_LOADED( "missheli_tour" ))))
    {
        WAIT( 0 );
    }
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION/G1_ENTOURAGE" )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_6907()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_7354()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;

    if (NOT l_U566)
    {
        sub_7374();
        l_U566 = 1;
    }
    else if ((sub_9946()) AND (sub_10441()))
    {
        if (NOT l_U567)
        {
            if (NOT (IS_CHAR_INJURED( l_U594[0] )))
            {
                if ((LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_5685(), l_U594[0], 3.00000000, 3.00000000, 3.00000000, 0 )) AND (sub_10920( 1, 1 )))
                {
                    GET_CHAR_HEIGHT_ABOVE_GROUND( sub_5685(), ref uVar2._fU8 );
                    if (NOT (IS_CHAR_IN_AIR( sub_5685() )))
                    {
                        REMOVE_BLIP( l_U668 );
                        REMOVE_BLIP( l_U669 );
                        l_U558 = 3;
                        l_U559 = 0;
                        l_U568 = 1;
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), 21.05300000, -41.97700000, 16.19000000, 7.90000000, 3.75000000, 3.90000000, 0 ))
                {
                    if (NOT l_U587)
                    {
                        TASK_LOOK_AT_CHAR( l_U594[0], sub_5685(), 99999, 0 );
                        l_U587 = 1;
                    }
                }
                else if (l_U587)
                {
                    TASK_CLEAR_LOOK_AT( l_U594[0] );
                    l_U587 = 0;
                };;;
            }
        }
    }
    else
    {
        iVar5 = 0;
        iVar6 = 0;
        if (NOT (IS_CHAR_INJURED( l_U592 )))
        {
            SET_CHAR_RELATIONSHIP( l_U592, 5, 0 );
            OPEN_SEQUENCE_TASK( ref l_U802 );
            if (IS_CHAR_IN_ANY_CAR( l_U592 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_COMBAT( 0, sub_5685() );
            CLOSE_SEQUENCE_TASK( l_U802 );
            TASK_PERFORM_SEQUENCE( l_U592, l_U802 );
            CLEAR_SEQUENCE_TASK( l_U802 );
            SET_CHAR_KEEP_TASK( l_U592, 1 );
            SET_CHAR_NEVER_TARGETTED( l_U592, 0 );
            iVar5++;
        }
        if (NOT (IS_CHAR_INJURED( l_U593 )))
        {
            SET_CHAR_RELATIONSHIP( l_U593, 5, 0 );
            OPEN_SEQUENCE_TASK( ref l_U802 );
            if (IS_CHAR_IN_ANY_CAR( l_U593 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_COMBAT( 0, sub_5685() );
            CLOSE_SEQUENCE_TASK( l_U802 );
            TASK_PERFORM_SEQUENCE( l_U593, l_U802 );
            CLEAR_SEQUENCE_TASK( l_U802 );
            SET_CHAR_KEEP_TASK( l_U593, 1 );
            SET_CHAR_NEVER_TARGETTED( l_U593, 0 );
            iVar5++;
        }
        for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
            {
                SET_CHAR_RELATIONSHIP( l_U594[l_U776], 5, 0 );
                if (iVar6 < 2)
                {
                    if (iVar5 < 2)
                    {
                        iVar5++;
                    }
                    else
                    {
                        GIVE_WEAPON_TO_CHAR( l_U594[l_U776], 7, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U594[l_U776], 7, 0 );
                        iVar6++;
                    }
                    OPEN_SEQUENCE_TASK( ref l_U802 );
                    if (IS_CHAR_IN_ANY_CAR( l_U594[l_U776] ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_COMBAT( 0, sub_5685() );
                    CLOSE_SEQUENCE_TASK( l_U802 );
                    TASK_PERFORM_SEQUENCE( l_U594[l_U776], l_U802 );
                    CLEAR_SEQUENCE_TASK( l_U802 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref l_U802 );
                    if (IS_CHAR_IN_ANY_CAR( l_U594[l_U776] ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_SMART_FLEE_CHAR( 0, sub_5685(), 100.00000000, -1 );
                    CLOSE_SEQUENCE_TASK( l_U802 );
                    TASK_PERFORM_SEQUENCE( l_U594[l_U776], l_U802 );
                    CLEAR_SEQUENCE_TASK( l_U802 );
                }
                SET_CHAR_KEEP_TASK( l_U594[l_U776], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U594[l_U776], 0 );
            }
        }
        l_U564 = 2;
        sub_12168();
    }
    if (NOT (l_U558 == 8))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_6907(), 0 ))
        {
            if (NOT l_U567)
            {
                REMOVE_BLIP( l_U669 );
                REMOVE_BLIP( l_U668 );
                CLEAR_PRINTS();
                PRINT( "PVP_WANT", 7500, 1 );
                l_U567 = 1;
            }
        }
        else if (l_U567)
        {
            if (NOT l_U566)
            {
                REMOVE_BLIP( l_U669 );
                ADD_BLIP_FOR_COORD( 20.70320000, -42.59620000, 13.81190000, ref l_U669 );
                SET_ROUTE( l_U669, 1 );
                SET_BLIP_AS_FRIENDLY( l_U669, 1 );
                sub_6366( ref l_U669, 52.51440000, -45.69540000, 13.64730000, 90.00000000 );
            }
            else if (NOT (IS_CHAR_INJURED( l_U594[0] )))
            {
                REMOVE_BLIP( l_U668 );
                ADD_BLIP_FOR_CHAR( l_U594[0], ref l_U668 );
                SET_BLIP_AS_FRIENDLY( l_U668, 1 );
                SET_ROUTE( l_U668, 1 );
                sub_6366( ref l_U668, 52.51440000, -45.69540000, 13.64730000, 90.00000000 );
            }
            CLEAR_PRINTS();
            PRINT( "PVP_GO_VIP", 7500, 1 );
            l_U567 = 0;
        }
    }
    return;
}

void sub_7374()
{
    vector[10] vVar2;
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
    float[10] fVar33;

    array(ref vVar2, 10);
    array(ref fVar33, 10);
    vVar2[0] = {20.66950000, -44.29690000, 13.81190000};
    fVar33[0] = 0.21400000;
    vVar2[1] = {27.79290000, -44.22890000, 13.81190000};
    fVar33[1] = 180.00000000;
    vVar2[2] = {29.21210000, -39.93250000, 13.81240000};
    fVar33[2] = 144.87100000;
    vVar2[3] = {16.04710000, -39.74090000, 13.81190000};
    fVar33[3] = 197.00000000;
    CREATE_CAR( l_U790, l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8, ref l_U658, 1 );
    SET_CAR_HEADING( l_U658, l_U726[1] );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U658, 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U658 );
    SET_CAR_HEALTH( l_U658, 1600 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U658, 0 );
    CHANGE_CAR_COLOUR( l_U658, 0, 0 );
    SET_CAN_BURST_CAR_TYRES( l_U658, 0 );
    SET_VEH_HAS_STRONG_AXLES( l_U658, 1 );
    CREATE_CAR( l_U790, l_U716[0]._fU0, l_U716[0]._fU4, l_U716[0]._fU8, ref l_U659, 1 );
    SET_CAR_HEADING( l_U659, l_U726[0] );
    SET_CAR_ON_GROUND_PROPERLY( l_U659 );
    CHANGE_CAR_COLOUR( l_U659, 0, 0 );
    SET_CAR_HEALTH( l_U659, 1000 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U659, 1 );
    SET_CAN_BURST_CAR_TYRES( l_U659, 0 );
    CREATE_CAR( l_U790, l_U716[2]._fU0, l_U716[2]._fU4, l_U716[2]._fU8, ref l_U660, 1 );
    SET_CAR_HEADING( l_U660, l_U726[2] );
    SET_CAR_ON_GROUND_PROPERLY( l_U660 );
    CHANGE_CAR_COLOUR( l_U660, 0, 0 );
    SET_CAR_HEALTH( l_U660, 1000 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U660, 1 );
    SET_CAN_BURST_CAR_TYRES( l_U660, 0 );
    CREATE_CHAR( 26, l_U788, 24.94490000, -40.28760000, 13.81190000, ref l_U593, 1 );
    WARP_CHAR_INTO_CAR( l_U593, l_U660 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U593 );
    SET_CHAR_NEVER_TARGETTED( l_U593, 1 );
    SET_CHAR_DECISION_MAKER( l_U593, l_U756 );
    SET_COMBAT_DECISION_MAKER( l_U593, l_U757 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U593, 23 );
    SET_CHAR_RELATIONSHIP( l_U593, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U593, 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U593, 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U593, 5, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U593, 4, 0, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U593, 1 );
    SET_PED_DIES_WHEN_INJURED( l_U593, 1 );
    CREATE_CHAR( 26, l_U788, 22.35840000, -40.65120000, 13.81190000, ref l_U592, 1 );
    WARP_CHAR_INTO_CAR( l_U592, l_U659 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U592 );
    SET_CHAR_NEVER_TARGETTED( l_U592, 1 );
    SET_CHAR_DECISION_MAKER( l_U592, l_U756 );
    SET_COMBAT_DECISION_MAKER( l_U592, l_U757 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U592, 23 );
    SET_CHAR_RELATIONSHIP( l_U592, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U592, 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U592, 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U592, 5, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U592, 4, 0, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U592, 1 );
    SET_PED_DIES_WHEN_INJURED( l_U592, 1 );
    TASK_CAR_MISSION( l_U592, l_U659, 0, 5, 0.10000000, 0, -1, -1 );
    TASK_CAR_MISSION( l_U593, l_U660, 0, 5, 0.10000000, 0, -1, -1 );
    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
    {
        if (l_U776 < 4)
        {
            CREATE_CHAR( 26, l_U788, vVar2[l_U776]._fU0, vVar2[l_U776]._fU4, vVar2[l_U776]._fU8, ref l_U594[l_U776], 1 );
            SET_CHAR_HEADING( l_U594[l_U776], fVar33[l_U776] );
        }
        else if (l_U776 < 6)
        {
            CREATE_CHAR_AS_PASSENGER( l_U659, 26, l_U788, l_U776 - 3, ref l_U594[l_U776] );
        }
        else
        {
            CREATE_CHAR_AS_PASSENGER( l_U658, 26, l_U788, l_U776 - 6, ref l_U594[l_U776] );
        }
        SET_CHAR_NEVER_TARGETTED( l_U594[l_U776], 1 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U594[l_U776], 23 );
        SET_CHAR_RELATIONSHIP( l_U594[l_U776], 1, 0 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U594[l_U776], 1 );
        SET_CHAR_NEVER_TARGETTED( l_U594[l_U776], 1 );
        SET_CHAR_DECISION_MAKER( l_U594[l_U776], l_U756 );
        SET_COMBAT_DECISION_MAKER( l_U594[l_U776], l_U757 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U594[l_U776] );
        SET_CHAR_COMPONENT_VARIATION( l_U594[l_U776], 1, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U594[l_U776], 2, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U594[l_U776], 5, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U594[l_U776], 4, 0, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U594[l_U776], 1 );
        SET_PED_DIES_WHEN_INJURED( l_U594[l_U776], 1 );
        switch (l_U776)
        {
            case 0:
            SET_CHAR_NAME_DEBUG( l_U594[l_U776], "guard_0" );
            TASK_PLAY_ANIM( l_U594[l_U776], "idle_stvendor", "missgambetti1", 8.00000000, 1, 0, 0, 0, -1 );
            GET_GAME_TIMER( ref l_U828[0] );
            TASK_START_SCENARIO_IN_PLACE( l_U594[l_U776], "Scenario_Bouncer", -1082130432 );
            break;
            case 1:
            SET_CHAR_NAME_DEBUG( l_U594[l_U776], "guard_1" );
            SET_CHAR_HEADING( l_U594[l_U776], 270.00000000 );
            TASK_START_SCENARIO_IN_PLACE( l_U594[l_U776], "Scenario_SmokingOutsideOffice", -1082130432 );
            break;
            case 2:
            SET_CHAR_NAME_DEBUG( l_U594[l_U776], "guard_2" );
            TASK_START_SCENARIO_IN_PLACE( l_U594[l_U776], "Scenario_SecurityGuard", -1082130432 );
            GET_GAME_TIMER( ref l_U828[l_U776] );
            break;
            case 3:
            SET_CHAR_NAME_DEBUG( l_U594[l_U776], "guard_3" );
            TASK_START_SCENARIO_IN_PLACE( l_U594[l_U776], "Scenario_SmokingOutsideOffice", -1082130432 );
            GET_GAME_TIMER( ref l_U828[l_U776] );
            break;
            case 4:
            SET_CHAR_NAME_DEBUG( l_U594[l_U776], "guard_4" );
            break;
            case 5:
            SET_CHAR_NAME_DEBUG( l_U594[l_U776], "guard_5" );
            break;
            case 6:
            SET_CHAR_NAME_DEBUG( l_U594[l_U776], "guard_6" );
            break;
            case 7:
            SET_CHAR_NAME_DEBUG( l_U594[l_U776], "guard_7" );
            break;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U592 )))
    {
        SET_CHAR_NAME_DEBUG( l_U592, "front_d" );
    }
    if (NOT (IS_CHAR_INJURED( l_U593 )))
    {
        SET_CHAR_NAME_DEBUG( l_U593, "rear_d" );
    }
    ADD_SCENARIO_BLOCKING_AREA( 6.40000000, -45.88000000, 12.65000000, 36.10000000, -33.40000000, 17.21000000 );
    CLEAR_AREA( 20.66950000, -44.29690000, 13.81190000, 20.00000000, 1 );
    if (NOT l_U567)
    {
        REMOVE_BLIP( l_U669 );
        ADD_BLIP_FOR_CHAR( l_U594[0], ref l_U668 );
        SET_BLIP_AS_FRIENDLY( l_U668, 1 );
        SET_ROUTE( l_U668, 1 );
        sub_6366( ref l_U668, 52.51440000, -45.69540000, 13.64730000, 90.00000000 );
    }
    return;
}

int sub_9946()
{
    if (IS_VEH_DRIVEABLE( l_U659 ))
    {
        if ((NOT (CHECK_STUCK_TIMER( l_U659, 0, 5000 ))) AND (NOT (CHECK_STUCK_TIMER( l_U659, 1, 40000 ))))
        {
            if (NOT (IS_CHAR_INJURED( l_U592 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U592, l_U659 )))
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( l_U660 ))
    {
        if ((NOT (CHECK_STUCK_TIMER( l_U660, 0, 5000 ))) AND (NOT (CHECK_STUCK_TIMER( l_U660, 1, 40000 ))))
        {
            if (NOT (IS_CHAR_INJURED( l_U593 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U593, l_U660 )))
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( l_U658 ))
    {
        if ((CHECK_STUCK_TIMER( l_U658, 0, 5000 )) || (CHECK_STUCK_TIMER( l_U658, 1, 40000 )))
        {
            return 0;
        }
        else if (NOT (l_U558 == 4))
        {
            if (IS_CHAR_IN_CAR( sub_5685(), l_U658 ))
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U594[l_U776] )))
        {
            if (IS_CHAR_INJURED( l_U594[l_U776] ))
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_10441()
{
    unknown uVar2;

    if (IS_VEH_DRIVEABLE( l_U659 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U592 )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U592, sub_5685(), 0 ))
            {
                GET_CHAR_HEALTH( l_U592, ref uVar2 );
                if (uVar2 <= 150.00000000)
                {
                    return 0;
                }
                else
                {
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U592 );
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U660 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U593 )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U593, sub_5685(), 0 ))
            {
                GET_CHAR_HEALTH( l_U593, ref uVar2 );
                if (uVar2 <= 150.00000000)
                {
                    return 0;
                }
                else
                {
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U593 );
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U658 ))
    {
        ;
    }
    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U594[l_U776] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U594[l_U776], sub_5685(), 0 ))
            {
                GET_CHAR_HEALTH( l_U594[l_U776], ref uVar2 );
                if (uVar2 <= 150.00000000)
                {
                    return 0;
                }
                else
                {
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U594[l_U776] );
                }
            }
        }
    }
    return 1;
}

int sub_10920(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5685(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5685(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_5685()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5685() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_6907() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_6907() )))
    {
        return 0;
    }
    return 1;
}

void sub_12168()
{
    for ( l_U776 = 0; l_U776 < l_U773; l_U776++ )
    {
        if (DOES_BLIP_EXIST( l_U670[l_U776] ))
        {
            REMOVE_BLIP( l_U670[l_U776] );
        }
    }
    for ( l_U776 = 0; l_U776 < l_U774; l_U776++ )
    {
        if (DOES_BLIP_EXIST( l_U681[l_U776] ))
        {
            REMOVE_BLIP( l_U681[l_U776] );
        }
    }
    for ( l_U776 = 0; l_U776 < l_U775; l_U776++ )
    {
        if (DOES_BLIP_EXIST( l_U692[l_U776] ))
        {
            REMOVE_BLIP( l_U692[l_U776] );
        }
    }
    for ( l_U776 = 0; l_U776 < 4; l_U776++ )
    {
        if (DOES_BLIP_EXIST( l_U708[l_U776] ))
        {
            REMOVE_BLIP( l_U708[l_U776] );
        }
        if (DOES_BLIP_EXIST( l_U703[l_U776] ))
        {
            REMOVE_BLIP( l_U703[l_U776] );
        }
    }
    if (DOES_BLIP_EXIST( l_U668 ))
    {
        REMOVE_BLIP( l_U668 );
    }
    if (DOES_BLIP_EXIST( l_U669 ))
    {
        REMOVE_BLIP( l_U669 );
    }
    if (sub_12608( l_U813 ))
    {
        sub_4631( ref l_U813, 0 );
    }
    CLEAR_PRINTS();
    switch (l_U564)
    {
        case 1:
        PRINT( "PVP_FAIL2", 7500, 1 );
        break;
        case 3:
        PRINT( "PVP_FAIL1", 7500, 1 );
        break;
        case 2:
        PRINT( "PVP_FAIL3", 7500, 1 );
        break;
        case 4:
        PRINT( "PVP_FAIL7", 7500, 1 );
        break;
        case 5:
        PRINT( "PVP_FAIL5", 7500, 1 );
        break;
        case 6:
        PRINT( "PVP_FAIL6", 7500, 1 );
        break;
        case 7:
        PRINT( "PVP_FAIL4", 7500, 1 );
        break;
    }
    GET_GAME_TIMER( ref l_U779 );
    if ((((l_U564 == 5) || (l_U564 == 1)) || (l_U564 == 4)) || (l_U564 == 6))
    {
        CLEAR_HELP();
        l_U559 = 0;
    }
    else
    {
        l_U559 = 13;
    }
    l_U558 = 8;
    return;
}

int sub_12608(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_12720( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_12720( "\n speech is not playing" );
    }
    return 0;
}

void sub_12720(unknown uParam0)
{
    return;
}

void sub_13538()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    vector vVar5;
    vector vVar8;
    vector vVar11;
    vector[4] vVar14;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    float[4] fVar27;

    array(ref vVar14, 4);
    array(ref fVar27, 4);
    vVar14[0] = {20.66950000, -44.29690000, 13.81190000};
    fVar27[0] = 0.21400000;
    vVar14[1] = {27.79290000, -44.22890000, 13.81190000};
    fVar27[1] = 180.00000000;
    vVar14[2] = {27.80810000, -39.59700000, 13.78650000};
    fVar27[2] = 144.87100000;
    vVar14[3] = {16.04710000, -39.74090000, 13.81190000};
    fVar27[3] = 197.00000000;
    if (sub_13693())
    {
        if (NOT l_U568)
        {
            if (sub_12608( l_U813 ))
            {
                sub_4631( ref l_U813, 0 );
            }
            CLEAR_PRINTS();
            l_U559 = 13;
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING())
            {
                WAIT( 0 );
            }
        }
    }
    else
    {
        l_U568 = 0;
    }
    switch (l_U559)
    {
        case 0:
        if (sub_10920( 1, 1 ))
        {
            CLEAR_CHAR_TASKS( sub_5685() );
            SET_PLAYER_CONTROL( sub_6907(), 0 );
            REQUEST_ANIMS( "gestures@niko" );
            WAIT( 500 );
            if (sub_9946())
            {
                sub_5734( 2, l_U594[0], "BODYGUARD_M", 0 );
                CLEAR_CHAR_TASKS( l_U594[0] );
                CLEAR_AREA_OF_CARS( l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8, 50.00000000 );
                SET_CAR_COORDINATES( l_U658, l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8 );
                SET_CAR_HEADING( l_U658, l_U726[1] );
                SET_CAR_ON_GROUND_PROPERLY( l_U658 );
                SET_CAR_COORDINATES( l_U659, l_U716[0]._fU0, l_U716[0]._fU4, l_U716[0]._fU8 );
                SET_CAR_HEADING( l_U659, l_U726[0] );
                SET_CAR_ON_GROUND_PROPERLY( l_U659 );
                SET_CAR_COORDINATES( l_U660, l_U716[2]._fU0, l_U716[2]._fU4, l_U716[2]._fU8 );
                SET_CAR_HEADING( l_U660, l_U726[2] );
                SET_CAR_ON_GROUND_PROPERLY( l_U660 );
                for ( l_U776 = 0; l_U776 < 4; l_U776++ )
                {
                    if ((NOT (LOCATE_CHAR_ON_FOOT_3D( l_U594[l_U776], vVar14[l_U776]._fU0, vVar14[l_U776]._fU4, vVar14[l_U776]._fU8, 0.50000000, 0.50000000, 2.50000000, 0 ))) || (l_U776 == 0))
                    {
                        SET_CHAR_COORDINATES( l_U594[l_U776], vVar14[l_U776]._fU0, vVar14[l_U776]._fU4, vVar14[l_U776]._fU8 );
                        SET_CHAR_HEADING( l_U594[l_U776], fVar27[l_U776] );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_5685() )))
            {
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5685(), 1 );
                if (NOT (IS_CHAR_INJURED( sub_5685() )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5685() );
                    if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_5685(), 0.00000000, 0.00000000, 0.00000000 );
                    }
                    REMOVE_PED_HELMET( sub_5685(), 1 );
                    CLEAR_AREA_OF_CARS( 29.17860000, -47.14080000, 13.62020000, 50.00000000 );
                    SET_CHAR_VELOCITY( sub_5685(), 0.00000000, 0.00000000, 0.00000000 );
                    SET_CHAR_HEADING( sub_5685(), 195.00000000 );
                    SET_CHAR_COORDINATES( sub_5685(), 20.70320000, -42.59620000, 13.81300000 );
                }
                if (NOT (IS_CHAR_DEAD( l_U594[0] )))
                {
                    TASK_LOOK_AT_CHAR( l_U594[0], sub_5685(), -1, 0 );
                    TASK_LOOK_AT_CHAR( sub_5685(), l_U594[0], -1, 0 );
                }
            }
            BEGIN_CAM_COMMANDS( ref l_U804 );
            CREATE_CAM( 14, ref l_U805 );
            SET_CAM_POS( l_U805, 21.74252000, -41.57241000, 15.37568000 );
            SET_CAM_ROT( l_U805, -5.73358100, 0.00000000, 150.19080000 );
            SET_CAM_FOV( l_U805, 38.10002000 );
            SET_CAM_ACTIVE( l_U805, 1 );
            SET_CAM_PROPAGATE( l_U805, 1 );
            SET_USE_HIGHDOF( 1 );
            l_U764 = 8.20000000;
            SET_CAM_NEAR_DOF( l_U805, l_U763 );
            SET_CAM_FAR_DOF( l_U805, l_U764 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
            SET_WIDESCREEN_BORDERS( 1 );
            if (IS_VEH_DRIVEABLE( l_U658 ))
            {
                LOCK_CAR_DOORS( l_U658, 1 );
            }
            CLEAR_PRINTS();
            REQUEST_ANIMS( "gestures@niko" );
            while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
            {
                WAIT( 0 );
            }
            l_U559 = 1;
        }
        break;
        case 1:
        if (sub_15190( "G1_INTRO", ref l_U813, 6, 1 ))
        {
            l_U559 = 2;
        }
        break;
        case 2:
        GET_SCRIPT_TASK_STATUS( sub_5685(), 29, ref l_U803 );
        if (NOT (sub_12608( l_U813 )))
        {
            if (sub_15190( "G1_MEET", ref l_U813, 6, 1 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U594[0] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U802 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_5685() );
                    CLOSE_SEQUENCE_TASK( l_U802 );
                    TASK_PERFORM_SEQUENCE( l_U594[0], l_U802 );
                    CLEAR_SEQUENCE_TASK( l_U802 );
                    l_U559 = 3;
                }
            }
        }
        break;
        case 3:
        if (NOT (sub_12608( l_U813 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINTSTRING( "VIP GIVEN WALK TASK" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( l_U658 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U594[0] )))
                    {
                        TASK_CLEAR_LOOK_AT( l_U594[0] );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U658, 2.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        OPEN_SEQUENCE_TASK( ref l_U802 );
                        TASK_ACHIEVE_HEADING( 0, 265.19130000 );
                        CLOSE_SEQUENCE_TASK( l_U802 );
                        CLEAR_SEQUENCE_TASK( l_U802 );
                    }
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( 18.81770000, -43.83200000, 14.81190000 );
                    TASK_EXTEND_ROUTE( 18.47420000, -47.53670000, 14.74770000 );
                    TASK_CLEAR_LOOK_AT( sub_5685() );
                    OPEN_SEQUENCE_TASK( ref l_U802 );
                    GET_MODEL_DIMENSIONS( l_U790, ref vVar11, ref vVar8 );
                    vVar5 = {vVar8 - vVar11};
                    vVar5 = {vVar5 / 2.00000000};
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U658, -vVar5.x + 0.20000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, 7000, 1.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U802 );
                    TASK_PERFORM_SEQUENCE( sub_5685(), l_U802 );
                    CLEAR_SEQUENCE_TASK( l_U802 );
                }
                SET_CAM_POS( l_U805, 24.80386000, -47.54367000, 15.13130000 );
                SET_CAM_ROT( l_U805, -13.20880000, 0.00000100, 52.60483000 );
                SET_CAM_FOV( l_U805, 45.90000000 );
                l_U764 = 16.80000000;
                SET_CAM_NEAR_DOF( l_U805, l_U763 );
                SET_CAM_FAR_DOF( l_U805, l_U764 );
                l_U559 = 4;
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U594[0] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U594[0], 29, ref l_U803 );
            if (l_U803 == 7)
            {
                if (IS_VEH_DRIVEABLE( l_U658 ))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U594[0], 25.92880000, -44.28550000, 14.78200000, 2, 7000, 2.00000000 );
                    l_U559 = 12;
                }
            }
        }
        break;
        case 5:
        if (IS_VEH_DRIVEABLE( l_U660 ))
        {
            if (IS_VEH_DRIVEABLE( l_U658 ))
            {
                CLOSE_ALL_CAR_DOORS( l_U658 );
            }
            if (NOT (IS_CHAR_INJURED( l_U594[0] )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U594[0], 25.92880000, -44.28550000, 14.78200000, 2, 7000, 2.00000000 );
            }
            l_U559 = 12;
        }
        break;
        case 12:
        if (NOT (sub_12608( l_U813 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT (IS_CHAR_DEAD( l_U594[0] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U594[0], 27, ref l_U803 );
                    if (l_U803 == 7)
                    {
                        l_U559 = 13;
                        SET_GAME_CAM_HEADING( 0.00000000 );
                    }
                }
            }
        }
        break;
        case 13:
        REMOVE_ANIMS( "gestures@niko" );
        CLEAR_PRINTS();
        if (sub_12608( l_U813 ))
        {
            sub_4631( ref l_U813, 0 );
        }
        if (IS_VEH_DRIVEABLE( l_U658 ))
        {
            ADD_BLIP_FOR_CAR( l_U658, ref l_U668 );
            SET_BLIP_AS_FRIENDLY( l_U668, 1 );
            if (NOT (IS_CHAR_DEAD( l_U591 )))
            {
                SET_CHAR_COORDINATES( l_U591, 22.22280000, -43.42250000, 13.81280000 );
                SET_CHAR_HEADING( l_U591, 180.00000000 );
                SET_CHAR_NEVER_TARGETTED( l_U591, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U591, 1 );
            }
            else
            {
                CREATE_CHAR( 26, l_U787, 32.03760000, -41.34540000, 13.81260000, ref l_U591, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U591, 1, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U591, 0, 0, 1 );
                SET_CHAR_HEADING( l_U591, 90.00000000 );
                SET_CHAR_NAME_DEBUG( l_U591, "VIP" );
                SET_CHAR_HEALTH( l_U591, 300 );
                SET_CHAR_CAN_BE_SHOT_IN_VEHICLE( l_U591, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U591, 1 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U591, 0 );
                SET_CHAR_DECISION_MAKER( l_U591, l_U756 );
                SET_COMBAT_DECISION_MAKER( l_U591, l_U757 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U591, 23 );
                SET_CHAR_RELATIONSHIP( l_U591, 1, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U591, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U591, 1 );
                SET_CHAR_MAX_TIME_IN_WATER( l_U591, 10.00000000 );
                SET_CHAR_MAX_TIME_UNDERWATER( l_U591, 10.00000000 );
                OPEN_SEQUENCE_TASK( ref l_U802 );
                TASK_LOOK_AT_CHAR( 0, sub_5685(), 999999, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 22.22280000, -43.42250000, 13.81280000, 2, -1, 1.50000000 );
                TASK_ACHIEVE_HEADING( 0, 180.00000000 );
                CLOSE_SEQUENCE_TASK( l_U802 );
                TASK_PERFORM_SEQUENCE( l_U591, l_U802 );
                CLEAR_SEQUENCE_TASK( l_U802 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U591, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U591 )))
            {
                ;
            }
            if (NOT (IS_CHAR_IN_CAR( sub_5685(), l_U658 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5685() );
                SET_CHAR_COORDINATES( sub_5685(), 19.96780000, -47.61140000, 13.78590000 );
                SET_CHAR_HEADING( sub_5685(), 356.00000000 );
            }
            SET_CAR_ENGINE_ON( l_U658, 1, 1 );
            for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U594[l_U776] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U594[l_U776] );
                    if (l_U776 < 3)
                    {
                        if (l_U776 == 0)
                        {
                            TASK_CLEAR_LOOK_AT( l_U594[l_U776] );
                        }
                        if (IS_VEH_DRIVEABLE( l_U660 ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U594[l_U776], l_U660 )))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U594[l_U776], l_U660, l_U776 );
                            }
                        }
                    }
                    else if (l_U776 < 6)
                    {
                        if (IS_VEH_DRIVEABLE( l_U659 ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U594[l_U776], l_U659 )))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U594[l_U776], l_U659, l_U776 - 3 );
                            }
                        }
                    }
                    else if (IS_VEH_DRIVEABLE( l_U658 ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U594[l_U776], l_U658 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U594[l_U776], l_U658, l_U776 - 6 );
                        }
                    };;;
                }
            }
            if (IS_VEH_DRIVEABLE( l_U659 ))
            {
                CLOSE_ALL_CAR_DOORS( l_U659 );
                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U659 );
            }
            if (IS_VEH_DRIVEABLE( l_U660 ))
            {
                CLOSE_ALL_CAR_DOORS( l_U660 );
                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U660 );
            }
            CLOSE_ALL_CAR_DOORS( l_U658 );
            CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U658 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_USE_HIGHDOF( 0 );
        DESTROY_CAM( l_U805 );
        END_CAM_COMMANDS( ref l_U804 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_BEHIND_PED( sub_5685() );
        CLEAR_PRINTS();
        SET_WIDESCREEN_BORDERS( 0 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING())
            {
                WAIT( 0 );
            }
        }
        SET_PLAYER_CONTROL( sub_6907(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5685(), 0 );
        GET_GAME_TIMER( ref l_U781 );
        SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_ROADS_OFF( 77.90000000, -223.10000000, 13.80000000, 79.90000000, -221.10000000, 15.80000000 );
        SWITCH_ROADS_OFF( 76.75100000, -166.52660000, 11.56280000, 80.75100000, -162.52660000, 15.56280000 );
        SWITCH_ROADS_OFF( 76.75850000, -214.73350000, 11.78510000, 80.75850000, -210.73350000, 15.78510000 );
        SWITCH_ROADS_OFF( 33.27020000, -166.91610000, 11.57950000, 37.27020000, -162.91610000, 15.57950000 );
        SWITCH_ROADS_OFF( 66.36220000, -166.67280000, 11.56590000, 70.36220000, -162.67280000, 15.56590000 );
        TASK_CLEAR_LOOK_AT( sub_5685() );
        SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 12.17070000, -47.38590000, 12.66360000, 30.75750000, -35.79560000, 15.00600000 );
        sub_5734( 1, l_U591, "BOBBY", 0 );
        SET_AMBIENT_VOICE_NAME( l_U591, "BOBBY" );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_5685(), 0 );
        CLEAR_PRINTS();
        PRINT( "PVP_GETCAR", 7500, 1 );
        l_U560 = 3;
        l_U558 = 4;
        l_U566 = 0;
        l_U589 = 0;
        GET_GAME_TIMER( ref l_U780 );
        break;
    }
    return;
}

int sub_13693()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_15190(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_15213( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_15213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_15267( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_15267(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_15289( iParam1 )))
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
    sub_15969( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_15289(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_12720( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_12720( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_12720( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_15969(int iParam0, int iParam1)
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

void sub_19032()
{
    float fVar2;

    if ((sub_9946()) AND (sub_10441()))
    {
        if (NOT (IS_CHAR_INJURED( l_U591 )))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_5685(), l_U658 ))
            {
                if (NOT l_U589)
                {
                    REMOVE_BLIP( l_U668 );
                    l_U589 = 1;
                }
                if (IS_CHAR_SITTING_IN_CAR( l_U591, l_U658 ))
                {
                    REMOVE_BLIP( l_U668 );
                    CLEAR_PRINTS();
                    TASK_USE_MOBILE_PHONE( l_U591, 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U591, 0 );
                    TASK_CLEAR_LOOK_AT( l_U591 );
                    l_U560 = 3;
                    l_U558 = 5;
                    l_U566 = 0;
                }
                else if (NOT l_U588)
                {
                    REMOVE_BLIP( l_U668 );
                    ADD_BLIP_FOR_CHAR( l_U591, ref l_U668 );
                    SET_BLIP_AS_FRIENDLY( l_U668, 1 );
                    CLEAR_PRINTS();
                    PRINT( "PVP_WAITVIP", 7500, 1 );
                    l_U588 = 1;
                }
                if (((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5685(), l_U591, 6.00000000, 6.00000000, 5.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), 21.94100000, -43.54180000, 14.81190000, 10.00000000, 10.00000000, 4.00000000, 0 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U591, 21.94100000, -43.54180000, 14.81190000, 10.00000000, 10.00000000, 4.00000000, 0 )))
                {
                    fVar2 = 0.00000000;
                    GET_CAR_SPEED( l_U658, ref fVar2 );
                    if (fVar2 < 0.50000000)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U591, 11, ref l_U803 );
                        if (l_U803 == 7)
                        {
                            CLEAR_CHAR_TASKS( l_U591 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_ENTER_CAR_AS_PASSENGER( l_U591, l_U658, -2, 2 );
                        }
                    }
                }
                else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U591, 21.94100000, -43.54180000, 14.81190000, 10.00000000, 10.00000000, 4.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U591, 11, ref l_U803 );
                    if (l_U803 == 1)
                    {
                        CLEAR_CHAR_TASKS( l_U591 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U591, 21.94100000, -43.54180000, 14.81190000, 2, -1, 2.00000000 );
                    }
                };;;
            }
            else if (l_U589)
            {
                REMOVE_BLIP( l_U668 );
                ADD_BLIP_FOR_CAR( l_U658, ref l_U668 );
                SET_BLIP_AS_FRIENDLY( l_U668, 1 );
                CLEAR_PRINTS();
                PRINT( "PVP_GBICAR", 7500, 1 );
                l_U589 = 0;
            }
            l_U588 = 0;;
            if (sub_19782( l_U658 ))
            {
                l_U564 = 6;
                sub_12168();
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5685(), l_U591, 250.00000000, 250.00000000, 30.00000000, 0 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U591 )))
                {
                    l_U564 = 7;
                    sub_12168();
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U591, 21.94100000, -43.54180000, 14.81190000, 10.00000000, 10.00000000, 4.00000000, 0 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U591, 11, ref l_U803 );
                if (NOT (l_U803 == 1))
                {
                    GET_SCRIPT_TASK_STATUS( l_U591, 27, ref l_U803 );
                    if (NOT (l_U803 == 1))
                    {
                        CLEAR_CHAR_TASKS( l_U591 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U591, 21.94100000, -43.54180000, 14.81190000, 2, -1, 2.00000000 );
                    }
                }
            };;;
        }
        else
        {
            l_U564 = 3;
            sub_12168();
        }
    }
    else
    {
        l_U564 = 4;
        sub_12168();
    }
    return;
}

int sub_19782(unknown uParam0)
{
    int iVar3;

    if (g_U9079 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_5685(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_5685(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_5685(), uParam0, 50.00000000, 50.00000000, 0 )))
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

void sub_20265()
{
    if (NOT l_U566)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), l_U730[l_U772]._fU0, l_U730[l_U772]._fU4, l_U730[l_U772]._fU8, 40.00000000, 40.00000000, 10.00000000, 0 ))
        {
            sub_20360();
            l_U566 = 1;
        }
    }
    if (sub_20944())
    {
        sub_21693( ref l_U592 );
        switch (l_U560)
        {
            case 0:
            if (l_U772 < l_U771)
            {
                if (l_U772 == (l_U771 - 1))
                {
                    TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC( l_U592, l_U659, l_U730[l_U772]._fU0, l_U730[l_U772]._fU4, l_U730[l_U772]._fU8, l_U762, 0, 0, 2, 2.00000000, -1 );
                }
                else
                {
                    TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC( l_U592, l_U659, l_U730[l_U772]._fU0, l_U730[l_U772]._fU4, l_U730[l_U772]._fU8, l_U762, 0, 0, 2, 10.00000000, -1 );
                }
            }
            TASK_CAR_MISSION( l_U593, l_U660, l_U658, 7, l_U762, 2, -1, -1 );
            l_U560 = 1;
            l_U762 = 10.00000000;
            GET_GAME_TIMER( ref l_U782 );
            break;
            case 1:
            if (IS_CHAR_SITTING_IN_CAR( sub_5685(), l_U658 ))
            {
                if (sub_22693())
                {
                    if (l_U772 < l_U771)
                    {
                        if (LOCATE_CAR_3D( l_U659, l_U730[l_U772]._fU0, l_U730[l_U772]._fU4, l_U730[l_U772]._fU8, 10.00000000, 10.00000000, 4.00000000, 0 ))
                        {
                            l_U772++;
                            if (l_U772 >= l_U771)
                            {
                                l_U560 = 4;
                            }
                            else if (l_U772 == (l_U771 - 1))
                            {
                                TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC( l_U592, l_U659, l_U730[l_U772]._fU0, l_U730[l_U772]._fU4, l_U730[l_U772]._fU8, l_U762, 0, 0, 0, 2.00000000, -1 );
                            }
                            else
                            {
                                TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC( l_U592, l_U659, l_U730[l_U772]._fU0, l_U730[l_U772]._fU4, l_U730[l_U772]._fU8, l_U762, 0, 0, 0, 10.00000000, -1 );
                            }
                        }
                    }
                    else
                    {
                        l_U560 = 4;
                    }
                }
                else
                {
                    sub_23317();
                    l_U560 = 2;
                    if (sub_12608( l_U813 ))
                    {
                        sub_23384( ref l_U813 );
                    }
                    if (sub_12608( l_U819 ))
                    {
                        sub_4631( ref l_U819, 0 );
                    }
                    sub_15190( "G1_CONV", ref l_U819, 6, 1 );
                    l_U827 = 1;
                }
            }
            else
            {
                sub_23317();
                REMOVE_BLIP( l_U669 );
                ADD_BLIP_FOR_CAR( l_U658, ref l_U668 );
                SET_BLIP_AS_FRIENDLY( l_U668, 1 );
                l_U560 = 3;
                if (sub_12608( l_U813 ))
                {
                    sub_23384( ref l_U813 );
                }
                if (sub_12608( l_U819 ))
                {
                    sub_4631( ref l_U819, 0 );
                }
                sub_15190( "G1_OUT", ref l_U819, 6, 1 );
                l_U827 = 1;
            }
            break;
            case 2:
            if (IS_CHAR_SITTING_IN_CAR( sub_5685(), l_U658 ))
            {
                if (sub_22693())
                {
                    l_U560 = 0;
                }
            }
            else
            {
                REMOVE_BLIP( l_U669 );
                ADD_BLIP_FOR_CAR( l_U658, ref l_U668 );
                SET_BLIP_AS_FRIENDLY( l_U668, 1 );
                l_U560 = 3;
                if (sub_12608( l_U813 ))
                {
                    sub_23384( ref l_U813 );
                }
                if (sub_12608( l_U819 ))
                {
                    sub_4631( ref l_U819, 0 );
                }
                sub_15190( "G1_OUT", ref l_U819, 6, 1 );
                l_U827 = 1;
            }
            break;
            case 3:
            if (IS_CHAR_SITTING_IN_CAR( sub_5685(), l_U658 ))
            {
                REMOVE_BLIP( l_U668 );
                ADD_BLIP_FOR_CAR( l_U659, ref l_U669 );
                SET_BLIP_AS_FRIENDLY( l_U669, 1 );
                if (sub_22693())
                {
                    l_U560 = 0;
                }
                else
                {
                    l_U560 = 2;
                    if (sub_12608( l_U813 ))
                    {
                        sub_23384( ref l_U813 );
                    }
                    if (sub_12608( l_U819 ))
                    {
                        sub_4631( ref l_U819, 0 );
                    }
                    sub_15190( "G1_CONV", ref l_U819, 6, 1 );
                    l_U827 = 1;
                }
            }
            break;
            case 4:
            if (IS_CHAR_SITTING_IN_CAR( sub_5685(), l_U658 ))
            {
                if (sub_22693())
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), 78.94170000, -198.75480000, 14.78500000, 9.40000000, 21.90000000, 5.00000000, 0 ))
                    {
                        l_U568 = 1;
                        l_U572 = 0;
                        l_U559 = 0;
                        l_U558 = 6;
                        sub_4475();
                        REMOVE_BLIP( l_U669 );
                    }
                }
                else
                {
                    sub_23317();
                    l_U560 = 2;
                    if (sub_12608( l_U813 ))
                    {
                        sub_23384( ref l_U813 );
                    }
                    if (sub_12608( l_U819 ))
                    {
                        sub_4631( ref l_U819, 0 );
                    }
                    sub_15190( "G1_CONV", ref l_U819, 6, 1 );
                    l_U827 = 1;
                }
            }
            break;
        }
        if (l_U560 == 1)
        {
            if (NOT l_U826)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), 79.29990000, -165.86700000, 16.52790000, 9.30000000, 7.30000000, 5.00000000, 0 ))
                {
                    if (sub_12608( l_U813 ))
                    {
                        sub_4631( ref l_U813, 0 );
                    }
                    if (sub_12608( l_U819 ))
                    {
                        sub_4631( ref l_U819, 0 );
                    }
                    CLEAR_PRINTS();
                    if (sub_15190( "G1_RDBLK", ref l_U813, 6, 1 ))
                    {
                        l_U826 = 1;
                    }
                }
                if (NOT l_U826)
                {
                    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) || (TIMERA() >= 3000))
                    {
                        if (NOT (sub_12608( l_U813 )))
                        {
                            if (NOT l_U825)
                            {
                                if (g_U64720 == 0)
                                {
                                    if (sub_15190( "G1_B1V1", ref l_U813, 6, 1 ))
                                    {
                                        l_U825 = 1;
                                        g_U64720++;
                                    }
                                }
                                else if (g_U64720 == 1)
                                {
                                    if (sub_15190( "G1_B1V2", ref l_U813, 6, 1 ))
                                    {
                                        l_U825 = 1;
                                        g_U64720++;
                                    }
                                }
                                else
                                {
                                    SAY_AMBIENT_SPEECH( l_U591, "LISTEN_TO_RADIO", 1, 1, 0 );
                                    g_U64720 = 3;
                                    l_U825 = 1;
                                }
                            }
                            else if (NOT (sub_12608( l_U819 )))
                            {
                                if (g_U64720 == 1)
                                {
                                    if (sub_25032( l_U813 ))
                                    {
                                        sub_25074( "G1_B1V1", ref l_U813, 6, 1 );
                                    }
                                }
                                else if (g_U64720 == 2)
                                {
                                    if (sub_25032( l_U813 ))
                                    {
                                        sub_25074( "G1_B1V2", ref l_U813, 6, 1 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            sub_25244();
        }
        else if (NOT (sub_25032( l_U813 )))
        {
            if (sub_12608( l_U813 ))
            {
                if (NOT (l_U560 == 4))
                {
                    sub_23384( ref l_U813 );
                }
            }
        }
        if (l_U560 == 0)
        {
            if (sub_12608( l_U819 ))
            {
                sub_4631( ref l_U819, 0 );
            }
            CLEAR_PRINTS();
            PRINT( "PVP_INST_1", 7500, 1 );
            SETTIMERA( 0 );
        }
        else if (NOT l_U827)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5685(), l_U591, 250.00000000, 250.00000000, 30.00000000, 0 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U591 )))
                {
                    l_U564 = 7;
                    sub_12168();
                }
            }
            else if ((NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5685(), l_U659, 250.00000000, 250.00000000, 30.00000000, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5685(), l_U660, 250.00000000, 250.00000000, 30.00000000, 0 ))))
            {
                if ((NOT (IS_CAR_ON_SCREEN( l_U659 ))) AND (NOT (IS_CAR_ON_SCREEN( l_U660 ))))
                {
                    l_U564 = 5;
                    sub_12168();
                }
            }
        }
        if (l_U560 == 3)
        {
            if (l_U827)
            {
                if (NOT (sub_12608( l_U819 )))
                {
                    CLEAR_PRINTS();
                    PRINT( "PVP_GBICAR", 7500, 1 );
                    l_U827 = 0;
                }
            }
        }
        if (l_U560 == 2)
        {
            if (l_U827)
            {
                if (NOT (sub_12608( l_U819 )))
                {
                    CLEAR_PRINTS();
                    PRINT( "PVP_CC_1", 7500, 1 );
                    l_U827 = 0;
                }
            }
        }
        if (NOT l_U827)
        {
            if (((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U658, sub_5685() )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U659, sub_5685() ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U660, sub_5685() )))
            {
                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U658 );
                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U659 );
                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U660 );
                GET_GAME_TIMER( ref l_U778 );
                l_U783 = l_U778;
                if ((l_U778 - l_U780) >= 25000)
                {
                    GET_GAME_TIMER( ref l_U780 );
                    if (sub_12608( l_U813 ))
                    {
                        sub_23384( ref l_U813 );
                    }
                    if (sub_12608( l_U819 ))
                    {
                        sub_4631( ref l_U819, 0 );
                    }
                    if (sub_15190( "G1_HIT", ref l_U819, 6, 1 ))
                    {
                        l_U827 = 1;
                    }
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U778 );
                if ((l_U778 - l_U783) >= 5000)
                {
                    l_U780 = 0;
                }
            }
        }
        else if (NOT (sub_12608( l_U819 )))
        {
            if (((NOT (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U658, sub_5685() ))) AND (NOT (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U659, sub_5685() )))) AND (NOT (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U660, sub_5685() ))))
            {
                GET_GAME_TIMER( ref l_U778 );
                if ((l_U778 - l_U783) >= 5000)
                {
                    l_U780 = 0;
                }
                l_U827 = 0;
            }
            else
            {
                GET_GAME_TIMER( ref l_U783 );
            }
            CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U658 );
            CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U659 );
            CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U660 );
        }
        if (sub_19782( l_U658 ))
        {
            l_U564 = 6;
            sub_12168();
        }
        if (NOT (sub_12608( l_U813 )))
        {
            if (NOT (sub_25032( l_U813 )))
            {
                if (l_U825)
                {
                    GET_SCRIPT_TASK_STATUS( l_U591, 53, ref l_U803 );
                    if (NOT (l_U803 == 7))
                    {
                        TASK_USE_MOBILE_PHONE( l_U591, 0 );
                    }
                }
            }
        }
    }
    else
    {
        sub_12168();
    }
    return;
}

void sub_20360()
{
    vector[5] vVar2;
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
    float[5] fVar18;

    array(ref vVar2, 5);
    array(ref fVar18, 5);
    vVar2[0] = {89.85910000, -166.65070000, 13.43070000};
    fVar18[0] = 90.52760000;
    vVar2[1] = {89.79390000, -162.89650000, 13.42760000};
    fVar18[1] = 90.34760000;
    vVar2[2] = {80.98570000, -222.57000000, 13.67570000};
    fVar18[2] = 0.09130000;
    vVar2[3] = {78.68950000, -222.84830000, 13.71190000};
    fVar18[3] = 0.09130000;
    vVar2[4] = {75.72120000, -222.14940000, 13.61970000};
    fVar18[4] = 0.09130000;
    for ( l_U776 = 0; l_U776 < 5; l_U776++ )
    {
        CREATE_OBJECT( l_U793, vVar2[l_U776]._fU0, vVar2[l_U776]._fU4, vVar2[l_U776]._fU8, ref l_U651[l_U776], 1 );
        SET_OBJECT_HEADING( l_U651[l_U776], fVar18[l_U776] );
        SET_OBJECT_PROOFS( l_U651[l_U776], 1, 1, 1, 1, 1 );
    }
    CREATE_CHAR( 26, l_U794, 87.88290000, -164.79630000, 13.56800000, ref l_U603[0], 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U603[0], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U603[0], 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U603[0], 0, 1, 0 );
    SET_CHAR_PROP_INDEX( l_U603[0], 0, 1 );
    SET_CHAR_HEADING( l_U603[0], 82.42980000 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U603[0], 1 );
    TASK_PLAY_ANIM( l_U603[0], "indicate_left_a", "missheli_tour", 12.00000000, 1, 0, 0, 0, -1 );
    SWITCH_PED_PATHS_OFF( 67.62440000, -226.63990000, 13.38700000, 94.41690000, -160.27070000, 15.00000000 );
    return;
}

int sub_20944()
{
    if (IS_VEH_DRIVEABLE( l_U659 ))
    {
        if ((((NOT (CHECK_STUCK_TIMER( l_U659, 0, 5000 ))) AND (NOT (CHECK_STUCK_TIMER( l_U659, 1, 40000 )))) AND (NOT (CHECK_STUCK_TIMER( l_U659, 3, 60000 )))) AND (NOT (CHECK_STUCK_TIMER( l_U659, 2, 30000 ))))
        {
            if (NOT (IS_CHAR_DEAD( l_U592 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U592, l_U659 )))
                {
                    l_U564 = 4;
                    return 0;
                }
            }
            else
            {
                l_U564 = 4;
                return 0;
            }
        }
        else
        {
            l_U564 = 4;
            return 0;
        }
    }
    else
    {
        l_U564 = 4;
        return 0;
    }
    if (IS_VEH_DRIVEABLE( l_U660 ))
    {
        if ((NOT (CHECK_STUCK_TIMER( l_U660, 0, 5000 ))) AND (NOT (CHECK_STUCK_TIMER( l_U660, 1, 40000 ))))
        {
            if (NOT (IS_CHAR_DEAD( l_U593 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U593, l_U660 )))
                {
                    l_U564 = 4;
                    return 0;
                }
            }
            else
            {
                l_U564 = 4;
                return 0;
            }
        }
        else
        {
            l_U564 = 4;
            return 0;
        }
    }
    else
    {
        l_U564 = 4;
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( l_U591 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U591 ))
        {
            if (IS_VEH_DRIVEABLE( l_U658 ))
            {
                if (IS_CHAR_IN_CAR( l_U591, l_U658 ))
                {
                    if ((CHECK_STUCK_TIMER( l_U658, 0, 5000 )) || (CHECK_STUCK_TIMER( l_U658, 1, 40000 )))
                    {
                        l_U564 = 1;
                        return 0;
                    }
                }
                else
                {
                    l_U564 = 4;
                    return 0;
                }
            }
            else if (NOT (IS_CAR_DEAD( l_U658 )))
            {
                l_U564 = 1;
                return 0;
            }
            else
            {
                SET_CHAR_HEALTH( l_U591, 10 );
                l_U564 = 3;
                return 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U591 )))
        {
            TASK_USE_MOBILE_PHONE( l_U591, 0 );
        }
        l_U564 = 4;
        return 0;;
    }
    else
    {
        l_U564 = 3;
        return 0;
    }
    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U594[l_U776] )))
        {
            if (IS_CHAR_INJURED( l_U594[l_U776] ))
            {
                l_U564 = 4;
                return 0;
            }
        }
        else
        {
            l_U564 = 4;
            return 0;
        }
    }
    return 1;
}

void sub_21693(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U557)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U555) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U556 + 500))
        {
            l_U555 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_5685() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_21861())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U557)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U556 );
            l_U555 = 1;
            l_U554 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U554) AND (NOT l_U555))
        {
            if (l_U557)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U554 = 1;
        }
    }
    else if (l_U554)
    {
        if (l_U557)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U554 = 0;
    };;;
    return;
}

int sub_21861()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_22693()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int Result;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    float fVar16;
    float fVar17;

    Result = 0;
    if (l_U560 == 1)
    {
        fVar16 = 25.00000000;
        fVar17 = 30.00000000;
    }
    else
    {
        fVar16 = 18.00000000;
        fVar17 = 22.00000000;
    }
    GET_CAR_COORDINATES( l_U658, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    GET_CAR_COORDINATES( l_U659, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    fVar8 = VDIST( uVar5, uVar2 );
    if (fVar8 > 999999.00000000)
    {
        Result = 0;
    }
    else
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U659, fVar16 * 0.50000000, 0.00000000, 10.00000000, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U659, fVar16 * 0.50000000, -fVar17, -10.00000000, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_5685(), uVar10._fU0, uVar10._fU4, uVar10._fU8, uVar13._fU0, uVar13._fU4, uVar13._fU8, fVar16, 0 ))
        {
            Result = 1;
        }
        else
        {
            Result = 0;
        }
    }
    return Result;
}

void sub_23317()
{
    CLEAR_CHAR_TASKS( l_U592 );
    CLEAR_CHAR_TASKS( l_U593 );
    return;
}

int sub_23384(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_12720( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_12720( "\n CONVERSATION PAUSED AT LINE " );
            sub_23540( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_12720( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_12720( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_12720( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_23540(unknown uParam0)
{
    return;
}

void sub_25032(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_25074(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_25097( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_25097(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_15267( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_25244()
{
    vector vVar2;
    float fVar5;
    unknown uVar6;
    vector vVar7;
    vector vVar10;

    fVar5 = 20.00000000;
    if (sub_25280( ref l_U660, fVar5, fVar5 / 2.00000000, l_U762, 5 ))
    {
        GET_CAR_COORDINATES( l_U660, ref vVar2.x, ref vVar2.y, ref vVar2.z );
        GET_CAR_HEADING( l_U660, ref uVar6 );
        vVar7 = {0.00000000, 3.00000000, 0.00000000};
        vVar10 = {0.00000000, 0.00000000, uVar6 - 90.00000000};
        sub_26855( ref vVar7, vVar10 );
        vVar2 = {vVar2 + vVar7};
        SET_CAR_COORDINATES( l_U660, vVar2.x, vVar2.y, vVar2.z );
        CLEAR_CHAR_TASKS( l_U593 );
        TASK_CAR_MISSION( l_U593, l_U660, l_U658, 7, l_U762, 2, -1, -1 );
    }
    return;
}

int sub_25280(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5685(), (uParam0^), uParam1, uParam1, uParam1, 0 )))
        {
            if (NOT (IS_CAR_ON_SCREEN( (uParam0^) )))
            {
                if (iParam4 == 8)
                {
                    uVar8 = {sub_25362( uParam0, uParam2 )};
                }
                else
                {
                    uVar8 = {sub_25477( iParam4, uParam2, 0 )};
                }
                return sub_26408( uParam0, uVar8, uParam3 );
            }
        }
    }
    return 0;
}

void sub_25362(unknown uParam0, unknown uParam1)
{
    vector Result;
    vector vVar7;

    GET_CAR_COORDINATES( (uParam0^), ref Result.x, ref Result.y, ref Result.z );
    GET_CHAR_COORDINATES( sub_5685(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
    Result = {Result - vVar7};
    Result = {Result * (uParam1 / (VMAG( Result )))};
    Result = {Result + vVar7};
    return Result;
}

void sub_25477(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    switch (uParam0)
    {
        case 0:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), (uParam1 * 0.80000000) * -1.00000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), uParam1 * -1.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 1:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 2:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 3:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), uParam1 * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), uParam1, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 4:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), uParam1 * 0.65000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), uParam1 * 0.80000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 5:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), 0.00000000, (uParam1 * -1.00000000) * 0.65000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), 0.00000000, uParam1 * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 6:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), (uParam1 * 0.65000000) * -1.00000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), (uParam1 * 0.80000000) * -1.00000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 7:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), (uParam1 * -1.00000000) * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5685(), uParam1 * -1.00000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
    }
    return Result;
}

int sub_26408(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_5685(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_NTH_CLOSEST_CAR_NODE_FAVOUR_DIRECTION( uParam1, uVar7, 1, ref uVar10, ref uVar13 );
        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar10._fU0, uVar10._fU4, uVar10._fU8, 10.00000000, 10.00000000, 10.00000000 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar14 );
            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar14, uVar10._fU0, uVar10._fU4, uVar10._fU8, 8.00000000 )))
            {
                CLEAR_AREA( uVar10._fU0, uVar10._fU4, uVar10._fU8, 6.00000000, 0 );
                SET_CAR_COORDINATES( (uParam0^), uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                uVar16 = {-SIN( uVar13 ), COS( uVar13 ), 0.00000000};
                GET_ANGLE_BETWEEN_2D_VECTORS( uVar16._fU0, uVar16._fU4, uVar7._fU0 - uVar10._fU0, uVar7._fU4 - uVar10._fU4, ref fVar15 );
                if (fVar15 > 90.00000000)
                {
                    SET_CAR_HEADING( (uParam0^), uVar13 + 180.00000000 );
                }
                else
                {
                    SET_CAR_HEADING( (uParam0^), uVar13 );
                }
                SET_CAR_FORWARD_SPEED( (uParam0^), uParam4 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_26855(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar6 = COS( uParam1._fU0 );
    uVar7 = SIN( uParam1._fU0 );
    uVar8._fU0 = iParam0->_fU0;
    uVar8._fU4 = (uVar6 * iParam0->_fU4) - (uVar7 * iParam0->_fU8);
    uVar8._fU8 = (uVar7 * iParam0->_fU4) + (uVar6 * iParam0->_fU8);
    (iParam0^) = {uVar8};
    uVar6 = COS( uParam1._fU4 );
    uVar7 = SIN( uParam1._fU4 );
    uVar8._fU0 = (uVar6 * iParam0->_fU0) + (uVar7 * iParam0->_fU8);
    uVar8._fU4 = iParam0->_fU4;
    uVar8._fU8 = (uVar6 * iParam0->_fU8) - (uVar7 * iParam0->_fU0);
    (iParam0^) = {uVar8};
    uVar6 = COS( uParam1._fU8 );
    uVar7 = SIN( uParam1._fU8 );
    uVar8._fU0 = (uVar6 * iParam0->_fU0) - (uVar7 * iParam0->_fU4);
    uVar8._fU4 = (uVar7 * iParam0->_fU0) + (uVar6 * iParam0->_fU4);
    uVar8._fU8 = iParam0->_fU8;
    (iParam0^) = {uVar8};
    return;
}

void sub_28313()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_INJURED( l_U591 )))
    {
        switch (l_U561)
        {
            case 0:
            sub_28384();
            break;
            case 1:
            switch (l_U562)
            {
                case 0:
                sub_36078();
                break;
                case 1:
                sub_38153();
                break;
            }
            break;
            case 2:
            switch (l_U562)
            {
                case 0:
                sub_39796();
                break;
                case 1:
                sub_41646();
                break;
            }
            break;
            case 3:
            switch (l_U562)
            {
                case 0:
                sub_42805();
                break;
                case 1:
                sub_44300();
                break;
            }
            break;
        }
        sub_45898();
        if (l_U561 > 0)
        {
            if (NOT (IS_CHAR_DEAD( l_U591 )))
            {
                GET_CHAR_COORDINATES( sub_5685(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                GET_CHAR_COORDINATES( l_U591, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                if ((VDIST( uVar2, uVar5 )) > 100.00000000)
                {
                    EXPLODE_CHAR_HEAD( l_U591 );
                    l_U564 = 3;
                    sub_12168();
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U591, 58.50590000, -197.57980000, 13.72800000, 3.00000000, 3.00000000, 3.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U591, 29, ref l_U803 );
                    if (l_U803 == 7)
                    {
                        CLEAR_CHAR_TASKS( l_U591 );
                        OPEN_SEQUENCE_TASK( ref l_U802 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 58.50590000, -197.57980000, 13.72800000, 3, -1, 2.00000000 );
                        TASK_SEEK_COVER_FROM_POS( 0, 65.00110000, -200.17110000, 13.72740000, 0 );
                        CLOSE_SEQUENCE_TASK( l_U802 );
                        TASK_PERFORM_SEQUENCE( l_U591, l_U802 );
                        CLEAR_SEQUENCE_TASK( l_U802 );
                    }
                }
            }
        }
    }
    else
    {
        l_U564 = 3;
        sub_12168();
    }
    return;
}

void sub_28384()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;

    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    if (l_U559 > 6)
    {
        if (sub_13693())
        {
            if (NOT l_U568)
            {
                if (sub_12608( l_U813 ))
                {
                    sub_4631( ref l_U813, 0 );
                }
                l_U559 = 13;
            }
        }
        else
        {
            l_U568 = 0;
        }
    }
    switch (l_U559)
    {
        case 0:
        if (sub_10920( 1, 1 ))
        {
            g_U9163 = 1;
            if (NOT l_U826)
            {
                if (sub_12608( l_U813 ))
                {
                    sub_4631( ref l_U813, 0 );
                }
            }
            if (sub_12608( l_U819 ))
            {
                sub_4631( ref l_U819, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U591 )))
            {
                TASK_USE_MOBILE_PHONE( l_U591, 0 );
            }
            l_U785 = GET_SOUND_ID();
            l_U786 = GET_SOUND_ID();
            SET_PLAYER_CONTROL( sub_6907(), 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5685(), 1 );
            SET_WANTED_MULTIPLIER( 0.00000000 );
            if (NOT (IS_CHAR_INJURED( sub_5685() )))
            {
                REMOVE_BLIP( l_U669 );
                REMOVE_BLIP( l_U668 );
                CLEAR_PRINTS();
                if (NOT (IS_CHAR_INJURED( l_U592 )))
                {
                    if (IS_VEH_DRIVEABLE( l_U659 ))
                    {
                        SET_CAR_HEADING( l_U659, 180.00000000 );
                        SET_CAR_COORDINATES( l_U659, 76.75040000, -202.17560000, 13.71580000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U659 );
                        SET_PED_DONT_DO_EVASIVE_DIVES( l_U592, 1 );
                        TASK_CAR_DRIVE_TO_COORD( l_U592, l_U659, 76.76800000, -206.52650000, 13.74190000, 5.00000000, 0, 0, 3, 1.00000000, -1 );
                    }
                    sub_5734( 2, l_U592, "BODYGUARD_M", 0 );
                }
                if (IS_VEH_DRIVEABLE( l_U660 ))
                {
                    SET_CAR_HEADING( l_U660, 180.00000000 );
                    SET_CAR_COORDINATES( l_U660, 76.31980000, -187.39810000, 13.62530000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U660 );
                }
                if (IS_VEH_DRIVEABLE( l_U658 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_5685(), l_U658 )))
                    {
                        WARP_CHAR_INTO_CAR( sub_5685(), l_U658 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U591 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U591 );
                        if (NOT (IS_CHAR_IN_CAR( l_U591, l_U658 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U591, l_U658, 2 );
                        }
                    }
                    SET_CAR_HEADING( l_U658, 180.95060000 );
                    SET_CAR_COORDINATES( l_U658, 76.42120000, -196.21020000, 13.64410000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U658 );
                    SET_CAR_ENGINE_ON( l_U658, 0, 1 );
                }
                CLEAR_AREA( 76.75040000, -202.17560000, 13.71580000, 100.00000000, 1 );
                CLEAR_AREA_OF_COPS( 76.75040000, -202.17560000, 13.71580000, 100.00000000 );
                SET_CREATE_RANDOM_COPS( 0 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[1] );
                CREATE_CHAR( 26, l_U794, 82.75050000, -221.68610000, 13.68310000, ref l_U603[1], 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U603[1], 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U603[1], 3, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U603[1], 0, 1, 0 );
                SET_CHAR_PROP_INDEX( l_U603[1], 0, 1 );
                SET_CHAR_HEADING( l_U603[1], 84.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U603[1], 1 );
                OPEN_SEQUENCE_TASK( ref l_U802 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 78.17920000, -216.68420000, 13.79490000, 2, -1, 1.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 78.30000000, -213.43000000, 13.79490000, 2, -1, 1.00000000 );
                TASK_ACHIEVE_HEADING( 0, 10.50000000 );
                CLOSE_SEQUENCE_TASK( l_U802 );
                TASK_PERFORM_SEQUENCE( l_U603[1], l_U802 );
                CLEAR_SEQUENCE_TASK( l_U802 );
                CLEAR_AREA( 76.75040000, -202.17560000, 13.71580000, 40.00000000, 1 );
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                BEGIN_CAM_COMMANDS( ref l_U804 );
                CREATE_CAM( 14, ref l_U805 );
                CREATE_CAM( 14, ref l_U806 );
                CREATE_CAM( 3, ref l_U807 );
                SET_CAM_FOV( l_U805, 45.00000000 );
                SET_CAM_FOV( l_U806, 45.00000000 );
                SET_CAM_POS( l_U805, 79.13000000, -203.14000000, 14.46000000 );
                SET_CAM_ROT( l_U805, 9.42000000, 0.00000000, 162.68000000 );
                SET_CAM_POS( l_U807, 79.26314000, -205.09400000, 15.54887000 );
                SET_CAM_ROT( l_U807, -8.00160300, -0.00000000, 144.57700000 );
                SET_CAM_POS( l_U806, 79.04508000, -214.95020000, 15.34537000 );
                SET_CAM_ROT( l_U806, -5.82994700, -0.00000000, 12.51409000 );
                l_U764 = 21.70000000;
                SET_CAM_NEAR_DOF( l_U806, l_U763 );
                SET_CAM_FAR_DOF( l_U806, l_U764 );
                SET_CAM_ACTIVE( l_U805, 1 );
                SET_CAM_ACTIVE( l_U806, 1 );
                SET_CAM_ACTIVE( l_U807, 1 );
                SET_CAM_PROPAGATE( l_U805, 1 );
                SET_CAM_PROPAGATE( l_U806, 0 );
                SET_CAM_PROPAGATE( l_U807, 0 );
                SET_USE_HIGHDOF( 1 );
                l_U764 = 21.70000000;
                SET_CAM_NEAR_DOF( l_U805, l_U763 );
                SET_CAM_FAR_DOF( l_U805, l_U764 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            }
            REQUEST_MODEL( l_U789 );
            REQUEST_MODEL( l_U792 );
            while ((NOT (HAS_MODEL_LOADED( l_U789 ))) || (NOT (HAS_MODEL_LOADED( l_U792 ))))
            {
                WAIT( 0 );
            }
            if (l_U826)
            {
                while (sub_12608( l_U813 ))
                {
                    WAIT( 0 );
                }
            }
            CREATE_CAR( l_U792, 38.72270000, -167.43520000, 13.51970000, ref l_U661, 1 );
            SET_CAR_HEADING( l_U661, 270.17950000 );
            SET_CAR_PROOFS( l_U661, 1, 1, 1, 1, 1 );
            CREATE_CHAR_INSIDE_CAR( l_U661, 26, l_U789, ref l_U650 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U650 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U650, 24 );
            ALLOW_EMERGENCY_SERVICES( 0 );
            sub_15190( "G1_MOVE", ref l_U813, 6, 1 );
            l_U559 = 6;
            l_U566 = 0;
        }
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U592 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U592, 15, ref l_U803 );
            if (l_U803 == 7)
            {
                if (NOT (IS_CHAR_INJURED( l_U592 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U802 );
                    TASK_STAND_STILL( 0, 2000 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 78.45000000, -212.04000000, 13.78000000, 2, -1, 2.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U802 );
                    TASK_PERFORM_SEQUENCE( l_U592, l_U802 );
                    CLEAR_SEQUENCE_TASK( l_U802 );
                }
                l_U559 = 7;
            }
        }
        else
        {
            l_U559 = 7;
        }
        break;
        case 7:
        if (NOT l_U572)
        {
            if (NOT (IS_CHAR_INJURED( l_U592 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
                {
                    l_U572 = 1;
                }
            }
            else
            {
                l_U572 = 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U592 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U603[1] )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U603[1], 1 );
                GET_SCRIPT_TASK_STATUS( l_U603[1], 29, ref l_U803 );
                if (l_U803 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( l_U592, 29, ref l_U803 );
                    if (l_U803 == 7)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            GIVE_WEAPON_TO_CHAR( l_U603[1], l_U798, 30000, 0 );
                            SET_CURRENT_CHAR_WEAPON( l_U603[1], l_U798, 0 );
                            OPEN_SEQUENCE_TASK( ref l_U802 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U592 );
                            TASK_AIM_GUN_AT_CHAR( 0, l_U592, 50000 );
                            CLOSE_SEQUENCE_TASK( l_U802 );
                            TASK_PERFORM_SEQUENCE( l_U603[1], l_U802 );
                            CLEAR_SEQUENCE_TASK( l_U802 );
                            OPEN_SEQUENCE_TASK( ref l_U802 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U603[1] );
                            TASK_STAND_STILL( 0, 1000 );
                            TASK_PLAY_ANIM( 0, "handsup", "missgambetti1", 8.00000000, 1, 0, 0, 0, 8000 );
                            CLOSE_SEQUENCE_TASK( l_U802 );
                            TASK_PERFORM_SEQUENCE( l_U592, l_U802 );
                            CLEAR_SEQUENCE_TASK( l_U802 );
                            SET_CHAR_PROOFS( l_U592, 1, 1, 1, 1, 1 );
                            GET_GAME_TIMER( ref l_U779 );
                            l_U559 = 8;
                            SET_CAM_PROPAGATE( l_U806, 1 );
                            SET_CAM_PROPAGATE( l_U805, 0 );
                            if (NOT (IS_CHAR_INJURED( l_U650 )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U661 ))
                                {
                                    if (IS_CHAR_IN_CAR( l_U650, l_U661 ))
                                    {
                                        TASK_CAR_DRIVE_TO_COORD( l_U650, l_U661, 78.84020000, -168.35200000, 14.46070000, 15.00000000, 0, 0, 3, 4.00000000, -1 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U592, 29, ref l_U803 );
                if (l_U803 == 7)
                {
                    GET_GAME_TIMER( ref l_U779 );
                    SET_CAM_PROPAGATE( l_U806, 1 );
                    SET_CAM_PROPAGATE( l_U805, 0 );
                    l_U559 = 8;
                }
            }
        }
        else
        {
            SET_CAM_PROPAGATE( l_U806, 1 );
            SET_CAM_PROPAGATE( l_U805, 0 );
            l_U559 = 8;
        }
        break;
        case 8:
        if (NOT (IS_CHAR_INJURED( l_U603[1] )))
        {
            BLOCK_CHAR_GESTURE_ANIMS( l_U603[1], 1 );
        }
        GET_GAME_TIMER( ref l_U778 );
        l_U777 = l_U778 - l_U779;
        if (l_U777 > 2500)
        {
            PRINTSTRING( "TELLING THE GUY TO SHOOT" );
            PRINTNL();
            if (NOT (IS_CHAR_INJURED( l_U603[1] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U802 );
                if (NOT (IS_CHAR_INJURED( l_U592 )))
                {
                    TASK_SHOOT_AT_CHAR( 0, l_U592, 300, 4 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 77.84710000, -227.60430000, 14.81190000, 3, -1, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U802 );
                TASK_PERFORM_SEQUENCE( l_U603[1], l_U802 );
                CLEAR_SEQUENCE_TASK( l_U802 );
                SET_CHAR_PROOFS( l_U603[1], 1, 1, 1, 1, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U592 )))
            {
                CLEAR_CHAR_TASKS( l_U592 );
                TASK_PLAY_ANIM( l_U592, "player_die", "missgambetti1", 8.00000000, 0, 0, 0, 1, -1 );
            }
            CREATE_CHAR( 26, l_U789, 85.25000000, -219.92000000, 17.81000000, ref l_U606, 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U606 );
            SET_CHAR_HEADING( l_U606, 0.42980000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U606, 1 );
            SET_CHAR_DECISION_MAKER( l_U606, l_U759 );
            GIVE_WEAPON_TO_CHAR( l_U606, l_U799, 10, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U606, l_U799, 1 );
            SET_PED_DONT_DO_EVASIVE_DIVES( l_U606, 1 );
            for ( l_U776 = 3; l_U776 < l_U770; l_U776++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
                {
                    UNLOCK_RAGDOLL( l_U594[l_U776], 1 );
                    GIVE_WEAPON_TO_CHAR( l_U594[l_U776], l_U798, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U594[l_U776], l_U798, 1 );
                    OPEN_SEQUENCE_TASK( ref l_U802 );
                    if (l_U776 == 4)
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_ACHIEVE_HEADING( 0, 180.00000000 );
                    }
                    else if (l_U776 == 3)
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 72.46350000, -206.29180000, 13.73310000, 3, -1, 1.00000000 );
                        TASK_ACHIEVE_HEADING( 0, 180.00000000 );
                    }
                    else
                    {
                        TASK_STAND_STILL( 0, 1000 );
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U603[1] )))
                    {
                        TASK_SHOOT_AT_CHAR( 0, l_U603[1], 5000, 3 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U802 );
                    TASK_PERFORM_SEQUENCE( l_U594[l_U776], l_U802 );
                    CLEAR_SEQUENCE_TASK( l_U802 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U591 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U802 );
                if (IS_CHAR_IN_ANY_CAR( l_U591 ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 70.95880000, -199.88830000, 14.75410000, 4, -1, 2.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 61.37820000, -199.57790000, 14.72750000, 4, -1, 2.00000000 );
                TASK_TOGGLE_DUCK( 0, 1 );
                CLOSE_SEQUENCE_TASK( l_U802 );
                TASK_PERFORM_SEQUENCE( l_U591, l_U802 );
                CLEAR_SEQUENCE_TASK( l_U802 );
            }
            OPEN_SEQUENCE_TASK( ref l_U802 );
            if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 65.00110000, -200.17110000, 13.72740000, 4, -1, 2.00000000 );
            TASK_ACHIEVE_HEADING( 0, 270.00000000 );
            CLOSE_SEQUENCE_TASK( l_U802 );
            TASK_PERFORM_SEQUENCE( sub_5685(), l_U802 );
            CLEAR_SEQUENCE_TASK( l_U802 );
            sub_15190( "G1_MOVEIT", ref l_U813, 6, 1 );
            SET_CAM_POS( l_U805, 85.62893000, -218.07910000, 19.11058000 );
            SET_CAM_ROT( l_U805, -25.18894000, 0.00000100, 45.83838000 );
            l_U764 = 40.00000000;
            SET_CAM_NEAR_DOF( l_U805, l_U763 );
            SET_CAM_FAR_DOF( l_U805, l_U764 );
            SET_CAM_INTERP_STYLE_CORE( l_U807, l_U806, l_U805, 5000, 0 );
            SET_CAM_ACTIVE( l_U807, 1 );
            SET_CAM_PROPAGATE( l_U806, 0 );
            SET_CAM_PROPAGATE( l_U807, 1 );
            l_U559 = 9;
        }
        break;
        case 9:
        if (DOES_CAM_EXIST( l_U807 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U606 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U802 );
                TASK_STAND_STILL( 0, 2500 );
                TASK_TOGGLE_DUCK( 0, 1 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 84.86000000, -217.78000000, 17.81000000, 3, -1 );
                TASK_ACHIEVE_HEADING( 0, 45.00000000 );
                TASK_AIM_GUN_AT_COORD( 0, l_U810._fU0, l_U810._fU4, l_U810._fU8, 1000 );
                CLOSE_SEQUENCE_TASK( l_U802 );
                TASK_PERFORM_SEQUENCE( l_U606, l_U802 );
                CLEAR_SEQUENCE_TASK( l_U802 );
            }
            l_U559 = 10;
        }
        break;
        case 10:
        if (NOT (IS_CHAR_INJURED( l_U606 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U606, 29, ref l_U803 );
            if (l_U803 == 1)
            {
                if (NOT l_U573)
                {
                    SET_CAM_POS( l_U805, 85.51237000, -219.38230000, 19.20195000 );
                    SET_CAM_ROT( l_U805, -18.34662000, -0.00000100, 31.46624000 );
                    SET_CAM_FOV( l_U805, 34.30000000 );
                    l_U573 = 1;
                }
                if (IS_CHAR_PLAYING_ANIM( l_U606, "missgambetti1", "reload_crouch" ))
                {
                    if (HAS_CHAR_ANIM_FINISHED( l_U606, "missgambetti1", "reload_crouch" ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U659 ))
                        {
                            GET_CAR_COORDINATES( l_U659, ref l_U810._fU0, ref l_U810._fU4, ref l_U810._fU8 );
                            GET_CAR_HEADING( l_U659, ref uVar11 );
                        }
                        FREEZE_CHAR_POSITION( l_U606, 1 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U606, 1 );
                        TASK_SHOOT_AT_COORD( l_U606, l_U810._fU0, l_U810._fU4, l_U810._fU8, 5000, 2 );
                        GET_GAME_TIMER( ref l_U782 );
                        SAY_AMBIENT_SPEECH( l_U606, "TARGET", 1, 1, 0 );
                        l_U559 = 11;
                    }
                }
            }
            else if (l_U803 == 7)
            {
                if (IS_VEH_DRIVEABLE( l_U659 ))
                {
                    GET_CAR_COORDINATES( l_U659, ref l_U810._fU0, ref l_U810._fU4, ref l_U810._fU8 );
                    GET_CAR_HEADING( l_U659, ref uVar11 );
                }
                FREEZE_CHAR_POSITION( l_U606, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U606, 1 );
                TASK_SHOOT_AT_COORD( l_U606, l_U810._fU0, l_U810._fU4, l_U810._fU8, 5000, 2 );
                GET_GAME_TIMER( ref l_U782 );
                SAY_AMBIENT_SPEECH( l_U606, "TARGET", 1, 1, 0 );
                l_U559 = 11;
            }
        }
        break;
        case 11:
        if (NOT (IS_PROJECTILE_IN_AREA( l_U810._fU0 - 30.00000000, l_U810._fU4 - 30.00000000, l_U810._fU8 - 30.00000000, l_U810._fU0 + 30.00000000, l_U810._fU4 + 30.00000000, l_U810._fU8 + 30.00000000 )))
        {
            if (l_U585)
            {
                l_U559 = 13;
            }
        }
        else
        {
            l_U585 = 1;
        }
        break;
        case 13:
        CLEAR_PRINTS();
        STOP_SOUND( l_U786 );
        RELEASE_SOUND_ID( l_U785 );
        RELEASE_SOUND_ID( l_U786 );
        DELETE_OBJECT( ref l_U657 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U657 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U796 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U797 );
        if (IS_VEH_DRIVEABLE( l_U661 ))
        {
            SET_CAR_COORDINATES( l_U661, 78.84020000, -168.35200000, 13.51480000 );
            SET_CAR_HEADING( l_U661, 270.00000000 );
        }
        if (NOT (IS_CHAR_DEAD( l_U650 )))
        {
            DELETE_CHAR( ref l_U650 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U650 );
        if (IS_VEH_DRIVEABLE( l_U659 ))
        {
            TRIGGER_PTFX_ON_VEH( "exp_fireball", l_U659, vVar2, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            vVar5 = {0.00000000, 0.00000000, -1.00000000};
            vVar8 = {0.00000000, 0.00000000, 0.00000000};
            APPLY_FORCE_TO_CAR( l_U659, 1, vVar5, vVar8, 0, 1, 1, 1 );
            EXPLODE_CAR( l_U659, 1, 0 );
        }
        SET_TIME_SCALE( 1.00000000 );
        if (NOT (IS_CHAR_DEAD( l_U603[0] )))
        {
            DELETE_CHAR( ref l_U603[0] );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[0] );
        if (NOT (IS_CHAR_DEAD( l_U603[1] )))
        {
            DELETE_CHAR( ref l_U603[1] );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[1] );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U794 );
        if (NOT (IS_CHAR_DEAD( l_U606 )))
        {
            FREEZE_CHAR_POSITION( l_U606, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U606, 0 );
            TASK_TOGGLE_DUCK( l_U606, -1 );
            CLEAR_CHAR_TASKS( l_U606 );
            REMOVE_ALL_CHAR_WEAPONS( l_U606 );
            GIVE_WEAPON_TO_CHAR( l_U606, l_U798, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U606, l_U798, 0 );
            SET_CHAR_DECISION_MAKER( l_U606, l_U758 );
            SET_PED_DONT_DO_EVASIVE_DIVES( l_U606, 0 );
        }
        else
        {
            CREATE_CHAR( 26, l_U789, 85.06230000, -216.20700000, 18.80710000, ref l_U606, 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U606 );
            SET_CHAR_HEADING( l_U606, 0.42980000 );
            GIVE_WEAPON_TO_CHAR( l_U606, l_U798, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U606, l_U798, 0 );
        }
        if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_5685(), 165.00110000, -200.17110000, 13.72740000 );
            SET_CHAR_HEADING( sub_5685(), 270.00000000 );
            SET_CAM_BEHIND_PED( sub_5685() );
            WAIT( 0 );
        }
        if (IS_PLAYER_PLAYING( sub_6907() ))
        {
            SET_CHAR_COORDINATES( sub_5685(), 65.00110000, -200.17110000, 13.72740000 );
            SET_CHAR_HEADING( sub_5685(), 270.00000000 );
        }
        for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U594[l_U776], 0 );
                GET_CHAR_COORDINATES( l_U594[l_U776], ref l_U749._fU0, ref l_U749._fU4, ref l_U749._fU8 );
                GET_CHAR_HEADING( l_U594[l_U776], ref l_U752 );
                if (l_U776 < 3)
                {
                    if (l_U776 == 0)
                    {
                        l_U749 = {85.73360000, -192.33770000, 14.75560000};
                    }
                    else if (l_U776 == 1)
                    {
                        l_U749 = {85.84090000, -179.47510000, 14.48930000};
                    }
                    else
                    {
                        l_U749 = {77.14510000, -179.70860000, 14.49960000};
                    }
                }
                else if (l_U776 < 6)
                {
                    EXPLODE_CHAR_HEAD( l_U594[l_U776] );
                }
                if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U802 );
                    if (IS_CHAR_IN_ANY_CAR( l_U594[l_U776] ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, l_U749, l_U752, 20.00000000, -2, l_U749, 20.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U802 );
                    TASK_PERFORM_SEQUENCE( l_U594[l_U776], l_U802 );
                    CLEAR_SEQUENCE_TASK( l_U802 );
                }
                GIVE_WEAPON_TO_CHAR( l_U594[l_U776], l_U798, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U594[l_U776], l_U798, 0 );
                SET_CHAR_ACCURACY( l_U594[l_U776], 50 );
            }
        }
        l_U749 = {62.42400000, -201.39220000, 14.72700000};
        if (NOT (IS_CHAR_INJURED( l_U591 )))
        {
            CLEAR_CHAR_TASKS( l_U591 );
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U591 )))
            {
                SET_CHAR_COORDINATES( l_U591, 58.50590000, -197.57980000, 13.72800000 );
            }
            else
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U591, 58.50590000, -197.57980000, 13.72800000 );
            }
            GET_CHAR_HEADING( l_U591, ref l_U752 );
            TASK_SEEK_COVER_FROM_POS( l_U591, 65.00110000, -200.17110000, 13.72740000, 0 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U591, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U591, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U593 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U593, 0 );
            OPEN_SEQUENCE_TASK( ref l_U802 );
            if (IS_CHAR_IN_ANY_CAR( l_U593 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 70.95880000, -199.88830000, 14.75410000, 3, -1, 1.00000000 );
            TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, l_U749, l_U752, 5.00000000, -2, l_U749, 10.00000000 );
            CLOSE_SEQUENCE_TASK( l_U802 );
            TASK_PERFORM_SEQUENCE( l_U593, l_U802 );
            CLEAR_SEQUENCE_TASK( l_U802 );
            GIVE_WEAPON_TO_CHAR( l_U593, l_U798, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U593, l_U798, 0 );
            SET_CHAR_ACCURACY( l_U593, 50 );
        }
        if (NOT (IS_CHAR_INJURED( l_U592 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U592, 1 );
            CLEAR_CHAR_TASKS( l_U592 );
            GIVE_WEAPON_TO_CHAR( l_U592, l_U798, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U592, l_U798, 0 );
            if (IS_CHAR_IN_ANY_CAR( l_U592 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U592, 78.30000000, -213.43000000, 13.79000000 );
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U592, "missgambetti1", "player_die" )))
                {
                    TASK_PLAY_ANIM( l_U592, "player_die", "missgambetti1", 8.00000000, 0, 0, 0, 1, -1 );
                }
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( l_U592, "missgambetti1", "player_die" )))
            {
                TASK_PLAY_ANIM( l_U592, "player_die", "missgambetti1", 8.00000000, 0, 0, 0, 1, -1 );
            }
            EXPLODE_CHAR_HEAD( l_U592 );
            SET_CHAR_HEALTH( l_U592, 0 );
        }
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U660 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U659 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U658 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U790 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (DOES_CAM_EXIST( l_U807 ))
        {
            SET_CAM_ACTIVE( l_U807, 0 );
            SET_CAM_PROPAGATE( l_U807, 0 );
            DESTROY_CAM( l_U807 );
        }
        DESTROY_CAM( l_U805 );
        DESTROY_CAM( l_U806 );
        SET_USE_HIGHDOF( 0 );
        END_CAM_COMMANDS( ref l_U804 );
        if (IS_PLAYER_PLAYING( sub_6907() ))
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CAM_BEHIND_PED( sub_5685() );
            SET_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_6907(), 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5685(), 0 );
        }
        if (sub_12608( l_U813 ))
        {
            sub_4631( ref l_U813, 0 );
        }
        sub_15190( "G1_AMB", ref l_U813, 6, 1 );
        l_U827 = 1;
        SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
        CREATE_PICKUP_ROTATE( 1069950328, 24, 200, 62.49400000, -200.86600000, 13.82200000, 90, 0, 137.52000000, ref l_U836 );
        l_U561 = 1;
        l_U566 = 0;
        break;
    }
    return;
}

void sub_36078()
{
    vector[10] vVar2;
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
    float[10] fVar33;
    vector[10] vVar44;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    int iVar75;
    int iVar76;
    int iVar77;

    array(ref vVar2, 10);
    array(ref fVar33, 10);
    array(ref vVar44, 10);
    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U594[l_U776] )))
        {
            SET_CHAR_RELATIONSHIP( l_U594[l_U776], 5, 24 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U592 )))
    {
        SET_CHAR_RELATIONSHIP( l_U592, 5, 24 );
    }
    if (NOT (IS_CHAR_DEAD( l_U593 )))
    {
        SET_CHAR_RELATIONSHIP( l_U593, 5, 24 );
    }
    vVar2[2] = {91.66970000, -212.18180000, 13.89170000};
    fVar33[2] = 90.00000000;
    vVar2[3] = {95.88410000, -199.03030000, 14.88560000};
    fVar33[3] = 93.78080000;
    vVar2[4] = {97.44220000, -170.37650000, 14.54200000};
    fVar33[4] = 108.52810000;
    vVar2[5] = {66.84290000, -226.43880000, 14.80740000};
    fVar33[5] = 336.19450000;
    vVar44[2] = {82.34820000, -211.15390000, 13.89170000};
    vVar44[3] = {86.50210000, -200.43500000, 14.79820000};
    vVar44[4] = {84.90080000, -174.41560000, 14.45240000};
    vVar44[5] = {71.85220000, -222.22010000, 14.81610000};
    l_U773 = 6;
    l_U607[0] = l_U606;
    if (NOT (IS_CHAR_DEAD( l_U607[0] )))
    {
        GET_CHAR_COORDINATES( l_U607[0], ref vVar2[0]._fU0, ref vVar2[0]._fU4, ref vVar2[0]._fU8 );
        GET_CHAR_COORDINATES( l_U607[0], ref vVar44[0]._fU0, ref vVar44[0]._fU4, ref vVar44[0]._fU8 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U607[0], 0 );
        vVar44[0] = {vVar2[0]};
    }
    l_U607[1] = l_U603[1];
    if (NOT (IS_CHAR_DEAD( l_U607[1] )))
    {
        GET_CHAR_COORDINATES( l_U607[1], ref vVar2[1]._fU0, ref vVar2[1]._fU4, ref vVar2[1]._fU8 );
        GET_CHAR_COORDINATES( l_U607[1], ref vVar44[1]._fU0, ref vVar44[1]._fU4, ref vVar44[1]._fU8 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U607[1], 0 );
        vVar44[1] = {vVar2[1]};
    }
    iVar76 = 0;
    for ( l_U776 = 0; l_U776 < l_U773; l_U776++ )
    {
        if (l_U776 > 1)
        {
            CREATE_CHAR( 26, l_U789, vVar2[l_U776]._fU0, vVar2[l_U776]._fU4, vVar2[l_U776]._fU8, ref l_U607[l_U776], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U607[l_U776] );
            SET_CHAR_HEADING( l_U607[l_U776], fVar33[l_U776] );
            SET_CHAR_RELATIONSHIP_GROUP( l_U607[l_U776], 24 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U607[l_U776], 1 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar75 );
            if (iVar75 == 0)
            {
                SET_CHAR_PROP_INDEX( l_U607[l_U776], 0, iVar75 );
            }
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar75 );
            if (iVar75 == 0)
            {
                SET_CHAR_PROP_INDEX( l_U607[l_U776], 1, iVar75 );
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U607[l_U776] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U607[l_U776], 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U607[l_U776] )))
        {
            SET_CHAR_DECISION_MAKER( l_U607[l_U776], l_U758 );
            if (l_U776 == 0)
            {
                SET_COMBAT_DECISION_MAKER( l_U607[l_U776], l_U761 );
            }
            else
            {
                SET_COMBAT_DECISION_MAKER( l_U607[l_U776], l_U760 );
            }
            SET_CHAR_RELATIONSHIP( l_U607[l_U776], 5, 0 );
            SET_CHAR_RELATIONSHIP( l_U607[l_U776], 5, 23 );
            SET_CHAR_RELATIONSHIP( l_U607[l_U776], 1, 24 );
            if ((((l_U776 == 1) || (l_U776 == 3)) || (l_U776 == 5)) || (l_U776 == 4))
            {
                GIVE_WEAPON_TO_CHAR( l_U607[l_U776], l_U800, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U607[l_U776], l_U800, 0 );
                SET_CHAR_ACCURACY( l_U607[l_U776], 40 );
            }
            else
            {
                GIVE_WEAPON_TO_CHAR( l_U607[l_U776], l_U798, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U607[l_U776], l_U798, 0 );
            }
            ADD_BLIP_FOR_CHAR( l_U607[l_U776], ref l_U670[l_U776] );
            CHANGE_BLIP_DISPLAY( l_U670[l_U776], 2 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U607[l_U776], vVar44[l_U776]._fU0, vVar44[l_U776]._fU4, vVar44[l_U776]._fU8, 3, -1, 1.00000000 );
            switch (l_U776)
            {
                case 0:
                SET_CHAR_NAME_DEBUG( l_U607[l_U776], "1_wave_0" );
                break;
                case 1:
                SET_CHAR_NAME_DEBUG( l_U607[l_U776], "1_wave_1" );
                break;
                case 2:
                SET_CHAR_NAME_DEBUG( l_U607[l_U776], "1_wave_2" );
                break;
                case 3:
                SET_CHAR_NAME_DEBUG( l_U607[l_U776], "1_wave_3" );
                break;
                case 4:
                SET_CHAR_NAME_DEBUG( l_U607[l_U776], "1_wave_4" );
                break;
                case 5:
                SET_CHAR_NAME_DEBUG( l_U607[l_U776], "1_wave_5" );
                break;
                case 6:
                SET_CHAR_NAME_DEBUG( l_U607[l_U776], "1_wave_6" );
                break;
                case 7:
                SET_CHAR_NAME_DEBUG( l_U607[l_U776], "1_wave_7" );
                break;
            }
            SET_CHAR_IS_TARGET_PRIORITY( l_U607[l_U776], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U607[l_U776], 1 );
        }
    }
    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U594[l_U776] )))
        {
            GET_CHAR_HEALTH( l_U594[l_U776], ref iVar77 );
            if (iVar77 > 165)
            {
                SET_CHAR_HEALTH( l_U594[l_U776], 165 );
            }
        }
    }
    SET_PED_IS_BLIND_RAGING( sub_5685(), 1 );
    l_U562 = 1;
    return;
}

void sub_38153()
{
    vector vVar2;
    boolean bVar5;
    int iVar6;

    bVar5 = true;
    iVar6 = 0;
    for ( l_U776 = 0; l_U776 < l_U773; l_U776++ )
    {
        if (IS_CHAR_INJURED( l_U607[l_U776] ))
        {
            iVar6++;
        }
        else if (l_U776 == 0)
        {
            if (NOT l_U833)
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U607[l_U776], sub_5685(), 1 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U607[l_U776] );
                    vVar2 = {-1.00000000, 0.00000000, 0.00000000};
                    SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U607[l_U776], 0, 60000, 4, vVar2, 13.75040000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                    l_U833 = 1;
                }
            }
        }
    }
    if ((l_U773 - iVar6) <= 3)
    {
        bVar5 = true;
    }
    else
    {
        bVar5 = false;
    }
    if (bVar5)
    {
        if (sub_12608( l_U813 ))
        {
            sub_4631( ref l_U813, 0 );
        }
        CLEAR_PRINTS();
        if (sub_38470())
        {
            sub_15190( "G1_ROOF", ref l_U813, 6, 1 );
        }
        l_U561 = 2;
        l_U562 = 0;
    }
    else if (l_U827)
    {
        if (NOT (sub_12608( l_U813 )))
        {
            l_U827 = 0;
            CLEAR_PRINTS();
            PRINT( "PVP_CS2_6", 7500, 1 );
        }
    }
    for ( l_U776 = 2; l_U776 < l_U773; l_U776++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U607[l_U776] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U607[l_U776], 27, ref l_U803 );
            if (l_U803 == 7)
            {
                GET_SCRIPT_TASK_STATUS( l_U607[l_U776], 91, ref l_U803 );
                if (l_U803 == 7)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U607[l_U776], 0 );
                    sub_39183( ref l_U607[l_U776] );
                }
            }
        }
    }
    return;
}

void sub_38470()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    float fVar10;
    int I;
    int Result;

    iVar2 = nil;
    fVar9 = 99999.00000000;
    I = 0;
    Result = 0;
    if (NOT (IS_CHAR_INJURED( sub_5685() )))
    {
        GET_CHAR_COORDINATES( sub_5685(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    for ( I = 0; I < l_U770; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U594[I] )))
        {
            GET_CHAR_COORDINATES( l_U594[I], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar10 );
            if (fVar10 < fVar9)
            {
                fVar9 = fVar10;
                iVar2 = l_U594[I];
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U592 )))
    {
        GET_CHAR_COORDINATES( l_U592, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar10 );
        if (fVar10 < fVar9)
        {
            fVar9 = fVar10;
            iVar2 = l_U592;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U593 )))
    {
        GET_CHAR_COORDINATES( l_U593, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar10 );
        if (fVar10 < fVar9)
        {
            fVar9 = fVar10;
            iVar2 = l_U593;
        }
    }
    if (NOT (iVar2 == nil))
    {
        sub_5734( 2, iVar2, "BODYGUARD_M", 0 );
        Result = 1;
    }
    return Result;
}

void sub_39183(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int I;

    iVar3 = nil;
    fVar10 = 99999.00000000;
    I = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( (uParam0^), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    for ( I = 0; I < l_U770; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U594[I] )))
        {
            GET_CHAR_COORDINATES( l_U594[I], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref fVar11 );
            if (fVar11 < fVar10)
            {
                fVar10 = fVar11;
                iVar3 = l_U594[I];
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U592 )))
    {
        GET_CHAR_COORDINATES( l_U592, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref fVar11 );
        if (fVar11 < fVar10)
        {
            fVar10 = fVar11;
            iVar3 = l_U592;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U593 )))
    {
        GET_CHAR_COORDINATES( l_U593, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref fVar11 );
        if (fVar11 < fVar10)
        {
            fVar10 = fVar11;
            iVar3 = l_U593;
        }
    }
    CLEAR_CHAR_TASKS( (uParam0^) );
    if (NOT (iVar3 == nil))
    {
        GET_CHAR_COORDINATES( sub_5685(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref fVar11 );
        if (fVar11 < fVar10)
        {
            fVar10 = fVar11;
            TASK_COMBAT( (uParam0^), sub_5685() );
        }
        else
        {
            TASK_COMBAT( (uParam0^), iVar3 );
        }
    }
    else
    {
        TASK_COMBAT( (uParam0^), sub_5685() );
    }
    return;
}

void sub_39796()
{
    vector[10] vVar2;
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
    float[10] fVar33;
    vector[10] vVar44;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    int iVar75;
    unknown uVar76;
    int iVar77;

    array(ref vVar2, 10);
    array(ref fVar33, 10);
    array(ref vVar44, 10);
    GET_GAME_VIEWPORT_ID( ref uVar76 );
    vVar2[0] = {62.44670000, -192.75270000, 17.77110000};
    fVar33[0] = 100.63950000;
    vVar44[0] = {69.55140000, -188.97950000, 18.77120000};
    if ((CAM_IS_SPHERE_VISIBLE( uVar76, vVar2[0]._fU0, vVar2[0]._fU4, vVar2[0]._fU8, 2.00000000 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), 57.39900000, -186.90600000, 20.17200000, 13.22500000, 11.72500000, 2.50000000, 0 )))
    {
        vVar2[0] = {64.45710000, -172.94720000, 13.51960000};
        fVar33[0] = 100.00000000;
        vVar44[0] = {73.85450000, -179.71940000, 13.51960000};
    }
    vVar2[1] = {59.12400000, -183.58110000, 17.77110000};
    fVar33[1] = 249.04470000;
    vVar44[1] = {69.70300000, -183.64400000, 18.77120000};
    if ((CAM_IS_SPHERE_VISIBLE( uVar76, vVar2[1]._fU0, vVar2[1]._fU4, vVar2[1]._fU8, 2.00000000 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), 57.39900000, -186.90600000, 20.17200000, 13.22500000, 11.72500000, 2.50000000, 0 )))
    {
        vVar2[1] = {71.18310000, -213.49420000, 13.79980000};
        fVar33[1] = 27.90750000;
        vVar44[1] = {72.55250000, -209.83250000, 13.77830000};
    }
    vVar2[2] = {106.00350000, -196.14440000, 13.78900000};
    fVar33[2] = 97.93210000;
    vVar44[2] = {81.46290000, -199.46320000, 13.70100000};
    vVar2[3] = {103.73330000, -176.20520000, 13.54730000};
    fVar33[3] = 24.95200000;
    vVar44[3] = {78.69260000, -179.91730000, 13.51530000};
    l_U774 = 4;
    for ( l_U776 = 0; l_U776 < l_U774; l_U776++ )
    {
        CREATE_CHAR( 26, l_U789, vVar2[l_U776]._fU0, vVar2[l_U776]._fU4, vVar2[l_U776]._fU8, ref l_U618[l_U776], 1 );
        SET_PED_DIES_WHEN_INJURED( l_U618[l_U776], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U618[l_U776] );
        SET_CHAR_HEADING( l_U618[l_U776], fVar33[l_U776] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U618[l_U776], 24 );
        SET_CHAR_DECISION_MAKER( l_U618[l_U776], l_U758 );
        SET_COMBAT_DECISION_MAKER( l_U618[l_U776], l_U761 );
        SET_CHAR_RELATIONSHIP( l_U618[l_U776], 5, 0 );
        SET_CHAR_RELATIONSHIP( l_U618[l_U776], 1, 24 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar75 );
        if (iVar75 == 0)
        {
            SET_CHAR_PROP_INDEX( l_U618[l_U776], 0, iVar75 );
        }
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar75 );
        if (iVar75 == 0)
        {
            SET_CHAR_PROP_INDEX( l_U618[l_U776], 1, iVar75 );
        }
        if (l_U776 < 2)
        {
            GIVE_WEAPON_TO_CHAR( l_U618[l_U776], l_U801, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U618[l_U776], l_U801, 0 );
            SET_CHAR_ACCURACY( l_U618[l_U776], 40 );
        }
        else if (l_U776 < 3)
        {
            GIVE_WEAPON_TO_CHAR( l_U618[l_U776], l_U800, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U618[l_U776], l_U800, 0 );
            SET_CHAR_ACCURACY( l_U618[l_U776], 40 );
        }
        else
        {
            GIVE_WEAPON_TO_CHAR( l_U618[l_U776], l_U798, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U618[l_U776], l_U798, 0 );
        }
        ADD_BLIP_FOR_CHAR( l_U618[l_U776], ref l_U681[l_U776] );
        CHANGE_BLIP_DISPLAY( l_U681[l_U776], 2 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U618[l_U776], 1 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U618[l_U776], vVar44[l_U776]._fU0, vVar44[l_U776]._fU4, vVar44[l_U776]._fU8, 3, -1, 1.00000000 );
        switch (l_U776)
        {
            case 0:
            SET_CHAR_NAME_DEBUG( l_U618[l_U776], "2_wave_0" );
            break;
            case 1:
            SET_CHAR_NAME_DEBUG( l_U618[l_U776], "2_wave_1" );
            break;
            case 2:
            SET_CHAR_NAME_DEBUG( l_U618[l_U776], "2_wave_2" );
            break;
            case 3:
            SET_CHAR_NAME_DEBUG( l_U618[l_U776], "2_wave_3" );
            break;
            case 4:
            SET_CHAR_NAME_DEBUG( l_U618[l_U776], "2_wave_4" );
            break;
            case 5:
            SET_CHAR_NAME_DEBUG( l_U618[l_U776], "2_wave_5" );
            break;
            case 6:
            SET_CHAR_NAME_DEBUG( l_U618[l_U776], "2_wave_6" );
            break;
            case 7:
            SET_CHAR_NAME_DEBUG( l_U618[l_U776], "2_wave_7" );
            break;
        }
        SET_CHAR_IS_TARGET_PRIORITY( l_U618[l_U776], 1 );
    }
    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U594[l_U776] )))
        {
            GET_CHAR_HEALTH( l_U594[l_U776], ref iVar77 );
            if (iVar77 > 135)
            {
                SET_CHAR_HEALTH( l_U594[l_U776], 135 );
            }
        }
    }
    l_U562 = 1;
    return;
}

void sub_41646()
{
    vector vVar2;
    boolean bVar5;
    int iVar6;

    bVar5 = true;
    iVar6 = 0;
    for ( l_U776 = 0; l_U776 < l_U774; l_U776++ )
    {
        if (IS_CHAR_INJURED( l_U618[l_U776] ))
        {
            iVar6++;
        }
        else if (l_U776 == 0)
        {
            if (NOT l_U834)
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U618[l_U776], sub_5685(), 1 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U618[l_U776] );
                    vVar2 = {1.00000000, 0.00000000, 0.00000000};
                    SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U618[l_U776], 0, 60000, 5, vVar2, 13.75040000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                    l_U834 = 1;
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U618[l_U776], 27, ref l_U803 );
                    if (l_U803 == 7)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U618[l_U776], 91, ref l_U803 );
                        if (l_U803 == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U618[l_U776], 0 );
                            sub_39183( ref l_U618[l_U776] );
                        }
                    }
                }
            }
        }
        else if (l_U776 == 1)
        {
            if (NOT l_U835)
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U618[l_U776], sub_5685(), 1 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U618[l_U776] );
                    vVar2 = {1.00000000, 0.00000000, 0.00000000};
                    SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U618[l_U776], 0, 60000, 5, vVar2, 13.75040000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                    l_U835 = 1;
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U618[l_U776], 27, ref l_U803 );
                    if (l_U803 == 7)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U618[l_U776], 91, ref l_U803 );
                        if (l_U803 == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U618[l_U776], 0 );
                            sub_39183( ref l_U618[l_U776] );
                        }
                    }
                }
            }
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( l_U618[l_U776], 27, ref l_U803 );
            if (l_U803 == 7)
            {
                GET_SCRIPT_TASK_STATUS( l_U618[l_U776], 91, ref l_U803 );
                if (l_U803 == 7)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U618[l_U776], 0 );
                    sub_39183( ref l_U618[l_U776] );
                }
            }
        };;;
    }
    for ( l_U776 = 0; l_U776 < l_U773; l_U776++ )
    {
        if (IS_CHAR_INJURED( l_U607[l_U776] ))
        {
            iVar6++;
        }
        else if (l_U776 == 0)
        {
            if (NOT l_U833)
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U607[l_U776], sub_5685(), 1 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U607[l_U776] );
                    vVar2 = {-1.00000000, 0.00000000, 0.00000000};
                    SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U607[l_U776], 0, 60000, 4, vVar2, 13.75040000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                    l_U833 = 1;
                }
            }
        }
    }
    if (((l_U773 + l_U774) - iVar6) <= 2)
    {
        bVar5 = true;
    }
    else
    {
        bVar5 = false;
    }
    if (bVar5)
    {
        if (sub_12608( l_U813 ))
        {
            sub_4631( ref l_U813, 0 );
        }
        CLEAR_PRINTS();
        if (sub_38470())
        {
            sub_15190( "G1_STRT", ref l_U813, 6, 1 );
        }
        l_U561 = 3;
        l_U562 = 0;
    }
    return;
}

void sub_42805()
{
    vector[10] vVar2;
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
    float[10] fVar33;
    vector[10] vVar44;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    int iVar75;
    int iVar76;
    int iVar77;

    array(ref vVar2, 10);
    array(ref fVar33, 10);
    array(ref vVar44, 10);
    vVar2[0] = {99.58990000, -213.12720000, 14.91980000};
    fVar33[0] = 83.14590000;
    vVar2[1] = {105.18700000, -196.87670000, 13.88830000};
    fVar33[1] = 215.26760000;
    vVar2[2] = {90.98020000, -228.93130000, 13.68310000};
    fVar33[2] = 107.00000000;
    vVar2[3] = {65.82580000, -225.68720000, 14.80100000};
    fVar33[3] = 306.15030000;
    vVar44[0] = {84.21000000, -212.19380000, 14.79790000};
    vVar44[1] = {88.12270000, -202.89600000, 15.26670000};
    vVar44[2] = {80.14570000, -219.58690000, 13.68310000};
    vVar44[3] = {71.83820000, -222.19850000, 14.81610000};
    l_U775 = 4;
    iVar76 = 0;
    for ( l_U776 = 0; l_U776 < l_U775; l_U776++ )
    {
        CREATE_CHAR( 26, l_U789, vVar2[l_U776]._fU0, vVar2[l_U776]._fU4, vVar2[l_U776]._fU8, ref l_U629[l_U776], 1 );
        SET_PED_DIES_WHEN_INJURED( l_U629[l_U776], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U629[l_U776] );
        SET_CHAR_HEADING( l_U629[l_U776], fVar33[l_U776] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U629[l_U776], 24 );
        SET_CHAR_DECISION_MAKER( l_U629[l_U776], l_U758 );
        SET_COMBAT_DECISION_MAKER( l_U629[l_U776], l_U760 );
        SET_CHAR_RELATIONSHIP( l_U629[l_U776], 5, 0 );
        SET_CHAR_RELATIONSHIP( l_U629[l_U776], 1, 24 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar75 );
        if (iVar75 == 0)
        {
            SET_CHAR_PROP_INDEX( l_U629[l_U776], 0, iVar75 );
        }
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar75 );
        if (iVar75 == 0)
        {
            SET_CHAR_PROP_INDEX( l_U629[l_U776], 1, iVar75 );
        }
        if (((l_U776 == 0) || (l_U776 == 2)) || (l_U776 == 3))
        {
            GIVE_WEAPON_TO_CHAR( l_U629[l_U776], l_U800, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U629[l_U776], l_U800, 0 );
            SET_CHAR_ACCURACY( l_U629[l_U776], 40 );
        }
        else
        {
            GIVE_WEAPON_TO_CHAR( l_U629[l_U776], l_U801, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U629[l_U776], l_U801, 0 );
            SET_CHAR_ACCURACY( l_U629[l_U776], 40 );
        }
        ADD_BLIP_FOR_CHAR( l_U629[l_U776], ref l_U692[l_U776] );
        CHANGE_BLIP_DISPLAY( l_U692[l_U776], 2 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U629[l_U776], 1 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U629[l_U776], vVar44[l_U776]._fU0, vVar44[l_U776]._fU4, vVar44[l_U776]._fU8, 3, -1, 1.00000000 );
        switch (l_U776)
        {
            case 0:
            SET_CHAR_NAME_DEBUG( l_U629[l_U776], "3_wave_0" );
            break;
            case 1:
            SET_CHAR_NAME_DEBUG( l_U629[l_U776], "3_wave_1" );
            break;
            case 2:
            SET_CHAR_NAME_DEBUG( l_U629[l_U776], "3_wave_2" );
            break;
            case 3:
            SET_CHAR_NAME_DEBUG( l_U629[l_U776], "3_wave_3" );
            break;
            case 4:
            SET_CHAR_NAME_DEBUG( l_U629[l_U776], "3_wave_4" );
            break;
            case 5:
            SET_CHAR_NAME_DEBUG( l_U629[l_U776], "3_wave_5" );
            break;
            case 6:
            SET_CHAR_NAME_DEBUG( l_U629[l_U776], "3_wave_6" );
            break;
            case 7:
            SET_CHAR_NAME_DEBUG( l_U629[l_U776], "3_wave_7" );
            break;
        }
        SET_CHAR_IS_TARGET_PRIORITY( l_U629[l_U776], 1 );
    }
    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U594[l_U776] )))
        {
            GET_CHAR_HEALTH( l_U594[l_U776], ref iVar77 );
            if (iVar77 > 120)
            {
                SET_CHAR_HEALTH( l_U594[l_U776], 120 );
            }
        }
    }
    l_U562 = 1;
    return;
}

void sub_44300()
{
    vector vVar2;
    boolean bVar5;
    int iVar6;

    bVar5 = true;
    iVar6 = 0;
    for ( l_U776 = 0; l_U776 < l_U775; l_U776++ )
    {
        if (IS_CHAR_INJURED( l_U629[l_U776] ))
        {
            iVar6++;
        }
    }
    for ( l_U776 = 0; l_U776 < l_U774; l_U776++ )
    {
        if (IS_CHAR_INJURED( l_U618[l_U776] ))
        {
            iVar6++;
        }
        else if (l_U776 == 0)
        {
            if (NOT l_U834)
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U618[l_U776], sub_5685(), 1 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U618[l_U776] );
                    vVar2 = {1.00000000, 0.00000000, 0.00000000};
                    SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U618[l_U776], 0, 60000, 5, vVar2, 13.75040000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                    l_U834 = 1;
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U618[l_U776], 27, ref l_U803 );
                    if (l_U803 == 7)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U618[l_U776], 91, ref l_U803 );
                        if (l_U803 == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U618[l_U776], 0 );
                            sub_39183( ref l_U618[l_U776] );
                        }
                    }
                }
            }
        }
        if (l_U776 == 1)
        {
            if (NOT l_U835)
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U618[l_U776], sub_5685(), 1 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U618[l_U776] );
                    vVar2 = {1.00000000, 0.00000000, 0.00000000};
                    SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U618[l_U776], 0, 60000, 5, vVar2, 13.75040000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                    l_U835 = 1;
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U618[l_U776], 27, ref l_U803 );
                    if (l_U803 == 7)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U618[l_U776], 91, ref l_U803 );
                        if (l_U803 == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U618[l_U776], 0 );
                            sub_39183( ref l_U618[l_U776] );
                        }
                    }
                }
            }
        }
    }
    for ( l_U776 = 0; l_U776 < l_U773; l_U776++ )
    {
        if (IS_CHAR_INJURED( l_U607[l_U776] ))
        {
            iVar6++;
        }
        else if (l_U776 == 0)
        {
            if (NOT l_U833)
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U607[l_U776], sub_5685(), 1 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U607[l_U776] );
                    vVar2 = {-1.00000000, 0.00000000, 0.00000000};
                    SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U607[l_U776], 0, 60000, 4, vVar2, 13.75040000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                    l_U833 = 1;
                }
            }
        }
    }
    if (iVar6 >= ((l_U773 + l_U774) + l_U775))
    {
        bVar5 = true;
    }
    else
    {
        bVar5 = false;
    }
    if (bVar5)
    {
        CLEAR_PRINTS();
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 21.00000000, -141.00000000, 13.00000000, 24.00000000, -138.00000000, 16.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 21.00000000, -64.00000000, 13.00000000, 24.00000000, -61.00000000, 16.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 110.31280000, -51.48730000, 12.80990000, 112.31280000, -49.48730000, 14.80990000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -31.79410000, -51.45760000, 12.80240000, -29.79410000, -49.45760000, 14.80240000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 76.75100000, -166.52660000, 11.56280000, 80.75100000, -162.52660000, 15.56280000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 33.27020000, -166.91610000, 11.57950000, 37.27020000, -162.91610000, 15.57950000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 66.36220000, -166.67280000, 11.56590000, 70.36220000, -162.67280000, 15.56590000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 50.72990000, -232.80530000, 10.76340000, 100.72990000, -100.80530000, 18.76340000 );
        l_U563 = 0;
        l_U558 = 7;
        SET_PED_IS_BLIND_RAGING( sub_5685(), 0 );
        STOP_PED_SPEAKING( sub_5685(), 0 );
        SAY_AMBIENT_SPEECH( sub_5685(), "KILLED_ALL", 1, 1, 0 );
        STOP_PED_SPEAKING( sub_5685(), 1 );
    }
    else
    {
        for ( l_U776 = 0; l_U776 < l_U775; l_U776++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U629[l_U776] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U629[l_U776], 27, ref l_U803 );
                if (l_U803 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( l_U629[l_U776], 91, ref l_U803 );
                    if (l_U803 == 7)
                    {
                        sub_39183( ref l_U629[l_U776] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U629[l_U776], 0 );
                    }
                }
            }
        }
    }
    return;
}

void sub_45898()
{
    if (l_U561 > 0)
    {
        for ( l_U776 = 0; l_U776 < l_U773; l_U776++ )
        {
            if (IS_CHAR_INJURED( l_U607[l_U776] ))
            {
                REMOVE_BLIP( l_U670[l_U776] );
            }
        }
    }
    if (l_U561 > 1)
    {
        for ( l_U776 = 0; l_U776 < l_U774; l_U776++ )
        {
            if (IS_CHAR_INJURED( l_U618[l_U776] ))
            {
                REMOVE_BLIP( l_U681[l_U776] );
            }
        }
    }
    if (l_U561 > 2)
    {
        for ( l_U776 = 0; l_U776 < l_U775; l_U776++ )
        {
            if (IS_CHAR_INJURED( l_U629[l_U776] ))
            {
                REMOVE_BLIP( l_U692[l_U776] );
            }
        }
    }
    return;
}

void sub_46544()
{
    if (NOT (IS_CHAR_INJURED( l_U591 )))
    {
        switch (l_U563)
        {
            case 0:
            sub_46615();
            break;
            case 1:
            sub_47664();
            break;
            case 2:
            sub_47800();
            break;
            case 3:
            sub_55688();
            break;
        }
    }
    else
    {
        l_U564 = 3;
        sub_12168();
    }
    return;
}

void sub_46615()
{
    for ( l_U776 = 0; l_U776 < l_U773; l_U776++ )
    {
        REMOVE_BLIP( l_U670[l_U776] );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U607[l_U776] );
    }
    for ( l_U776 = 0; l_U776 < l_U774; l_U776++ )
    {
        REMOVE_BLIP( l_U681[l_U776] );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U618[l_U776] );
    }
    for ( l_U776 = 0; l_U776 < l_U775; l_U776++ )
    {
        REMOVE_BLIP( l_U692[l_U776] );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U629[l_U776] );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U788 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U793 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U794 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U661 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U792 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    if (NOT (IS_CHAR_INJURED( l_U591 )))
    {
        CLEAR_CHAR_TASKS( l_U591 );
        TASK_TOGGLE_DUCK( l_U591, 0 );
        SET_CHAR_CAN_BE_SHOT_IN_VEHICLE( l_U591, 0 );
        GET_PLAYER_GROUP( sub_6907(), ref l_U808 );
        if (NOT (IS_GROUP_MEMBER( l_U591, l_U808 )))
        {
            SET_GROUP_MEMBER( l_U808, l_U591 );
        }
        sub_47032( 1 );
        l_U577 = 0;
    }
    l_U575 = 0;
    l_U576 = 0;
    l_U563 = 1;
    return;
}

void sub_47032(boolean bParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U593 )))
    {
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( l_U593 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U593, 1 );
            GET_PLAYER_GROUP( sub_6907(), ref l_U808 );
            if (NOT (IS_GROUP_MEMBER( l_U593, l_U808 )))
            {
                SET_GROUP_MEMBER( l_U808, l_U593 );
            }
        }
        else if (IS_GROUP_MEMBER( l_U593, l_U808 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U593 );
        }
    }
    else
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U593 );
    }
    if (NOT (IS_CHAR_INJURED( l_U592 )))
    {
        CLEAR_CHAR_TASKS( l_U592 );
        SET_CHAR_WILL_DO_DRIVEBYS( l_U592, 1 );
        if (bParam0)
        {
            GET_PLAYER_GROUP( sub_6907(), ref l_U808 );
            if (NOT (IS_GROUP_MEMBER( l_U592, l_U808 )))
            {
                SET_GROUP_MEMBER( l_U808, l_U592 );
            }
        }
        else if (IS_GROUP_MEMBER( l_U592, l_U808 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U592 );
        }
    }
    else
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U592 );
    }
    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
        {
            CLEAR_CHAR_TASKS( l_U594[l_U776] );
            if (bParam0)
            {
                SET_CHAR_WILL_DO_DRIVEBYS( l_U594[l_U776], 1 );
                GET_PLAYER_GROUP( sub_6907(), ref l_U808 );
                if (NOT (IS_GROUP_MEMBER( l_U594[l_U776], l_U808 )))
                {
                    SET_GROUP_MEMBER( l_U808, l_U594[l_U776] );
                }
            }
            else if (IS_GROUP_MEMBER( l_U594[l_U776], l_U808 ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U594[l_U776] );
            }
        }
        else
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U594[l_U776] );
        }
    }
    return;
}

void sub_47664()
{
    if (NOT (IS_CHAR_INJURED( l_U591 )))
    {
        REMOVE_BLIP( l_U669 );
        ADD_BLIP_FOR_COORD( l_U753._fU0, l_U753._fU4, l_U753._fU8, ref l_U669 );
        SET_ROUTE( l_U669, 1 );
        GET_GAME_TIMER( ref l_U779 );
        l_U563 = 2;
        l_U577 = 0;
    }
    else
    {
        l_U564 = 3;
        sub_12168();
    }
    return;
}

void sub_47800()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    boolean bVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    float fVar14;
    float fVar15;

    bVar9 = false;
    fVar14 = 60.00000000;
    fVar15 = 150.00000000;
    sub_47829();
    if (NOT (IS_CHAR_INJURED( l_U591 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U667 );
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5685(), ref l_U667 );
        }
        else
        {
            l_U667 = nil;
        }
        if (NOT (IS_GROUP_MEMBER( l_U591, l_U808 )))
        {
            if (l_U577)
            {
                GET_CHAR_COORDINATES( l_U591, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                GET_CHAR_COORDINATES( sub_5685(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref fVar8 );
                if (fVar8 <= 12.00000000)
                {
                    GET_PLAYER_GROUP( sub_6907(), ref l_U808 );
                    if (NOT (IS_GROUP_MEMBER( l_U591, l_U808 )))
                    {
                        sub_47032( 0 );
                        SET_GROUP_MEMBER( l_U808, l_U591 );
                        sub_47032( 1 );
                    }
                    REMOVE_BLIP( l_U668 );
                    REMOVE_BLIP( l_U669 );
                    CLEAR_PRINTS();
                    if (NOT l_U578)
                    {
                        ADD_BLIP_FOR_COORD( l_U753._fU0, l_U753._fU4, l_U753._fU8, ref l_U669 );
                        SET_ROUTE( l_U669, 1 );
                        PRINT( "PVP_ESC1", 7500, 1 );
                        GET_GAME_TIMER( ref l_U780 );
                        l_U569 = 0;
                    }
                    else
                    {
                        PRINT( "PVP_TMP_4", 7500, 1 );
                        l_U590 = 1;
                    }
                    l_U577 = 0;
                    l_U575 = 1;
                }
            }
            else
            {
                REMOVE_BLIP( l_U669 );
                REMOVE_BLIP( l_U668 );
                ADD_BLIP_FOR_CHAR( l_U591, ref l_U668 );
                SET_BLIP_AS_FRIENDLY( l_U668, 1 );
                CLEAR_PRINTS();
                PRINT( "PVP_LEFTVIP", 7500, 1 );
                if (IS_GROUP_MEMBER( l_U591, l_U808 ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U591 );
                }
                sub_47032( 0 );
                if (sub_12608( l_U813 ))
                {
                    sub_23384( ref l_U813 );
                }
                l_U577 = 1;
            }
        }
        else if (NOT l_U590)
        {
            if (l_U578)
            {
                if (NOT (sub_12608( l_U819 )))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        CLEAR_PRINTS();
                        PRINT( "PVP_TMP_4", 7500, 1 );
                        l_U590 = 1;
                    }
                }
            }
        }
        if (NOT l_U571)
        {
            if (l_U570)
            {
                GET_CHAR_COORDINATES( sub_5685(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                for ( l_U776 = 0; l_U776 < 4; l_U776++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U640[l_U776] )))
                    {
                        GET_CHAR_COORDINATES( l_U640[l_U776], ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                        GET_DISTANCE_BETWEEN_COORDS_3D( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar10._fU0, uVar10._fU4, uVar10._fU8, ref fVar13 );
                        if (NOT l_U578)
                        {
                            if (fVar13 < fVar14)
                            {
                                bVar9 = true;
                            }
                        }
                        else if (fVar13 < fVar15)
                        {
                            bVar9 = true;
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U703[l_U776] ))
                    {
                        REMOVE_BLIP( l_U703[l_U776] );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U645[l_U776] )))
                    {
                        GET_CHAR_COORDINATES( l_U645[l_U776], ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                        GET_DISTANCE_BETWEEN_COORDS_3D( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar10._fU0, uVar10._fU4, uVar10._fU8, ref fVar13 );
                        if (NOT l_U578)
                        {
                            if (fVar13 < fVar14)
                            {
                                bVar9 = true;
                            }
                        }
                        else if (fVar13 < fVar15)
                        {
                            bVar9 = true;
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U708[l_U776] ))
                    {
                        REMOVE_BLIP( l_U708[l_U776] );
                    }
                }
                if (bVar9)
                {
                    if (NOT l_U578)
                    {
                        if (DOES_BLIP_EXIST( l_U669 ))
                        {
                            REMOVE_BLIP( l_U669 );
                        }
                        for ( l_U776 = 0; l_U776 < 4; l_U776++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U640[l_U776] )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U640[l_U776], ref l_U703[l_U776] );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U645[l_U776] )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U645[l_U776], ref l_U708[l_U776] );
                            }
                        }
                        l_U578 = 1;
                        CLEAR_PRINTS();
                        PRINT( "PVP_TMP_4", 7500, 1 );
                        l_U590 = 1;
                    }
                }
                else if (l_U578)
                {
                    for ( l_U776 = 0; l_U776 < 4; l_U776++ )
                    {
                        REMOVE_BLIP( l_U703[l_U776] );
                        REMOVE_BLIP( l_U708[l_U776] );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U640[l_U776] );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U645[l_U776] );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U662[l_U776] );
                    }
                    if (NOT l_U577)
                    {
                        ADD_BLIP_FOR_COORD( l_U753._fU0, l_U753._fU4, l_U753._fU8, ref l_U669 );
                        SET_ROUTE( l_U669, 1 );
                        CLEAR_PRINTS();
                        PRINT( "PVP_ESC1", 7500, 1 );
                        GET_GAME_TIMER( ref l_U780 );
                        l_U569 = 0;
                        l_U577 = 0;
                        l_U575 = 1;
                    }
                    l_U578 = 0;
                }
                else
                {
                    for ( l_U776 = 0; l_U776 < 4; l_U776++ )
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U640[l_U776] );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U645[l_U776] );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U662[l_U776] );
                    }
                }
                l_U571 = 1;;
            }
        }
        if (NOT l_U577)
        {
            if (NOT l_U578)
            {
                if (NOT l_U575)
                {
                    if (NOT l_U576)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U591, sub_5685(), 5.00000000, 5.00000000, 3.00000000, 0 ))
                        {
                            if (sub_15190( "G1_CITYH", ref l_U813, 6, 1 ))
                            {
                                l_U576 = 1;
                            }
                        }
                    }
                    else if (NOT (sub_12608( l_U813 )))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            CLEAR_PRINTS();
                            PRINT( "PVP_ESC1", 7500, 1 );
                            GET_GAME_TIMER( ref l_U780 );
                            l_U569 = 0;
                            l_U575 = 1;
                            l_U825 = 0;
                        }
                    }
                }
                else if (l_U569)
                {
                    GET_GAME_TIMER( ref l_U778 );
                    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) || ((l_U778 - l_U780) >= 3000))
                    {
                        if (NOT (sub_12608( l_U813 )))
                        {
                            if (NOT l_U825)
                            {
                                if (g_U64721 == 0)
                                {
                                    if (sub_15190( "G1_BANT2V1", ref l_U813, 6, 1 ))
                                    {
                                        l_U825 = 1;
                                        g_U64721++;
                                    }
                                }
                                else if (g_U64721 == 1)
                                {
                                    if (sub_15190( "G1_BANT2V2", ref l_U813, 6, 1 ))
                                    {
                                        l_U825 = 1;
                                        g_U64721++;
                                    }
                                }
                                else
                                {
                                    g_U64721 = 3;
                                    SAY_AMBIENT_SPEECH( l_U591, "LISTEN_TO_RADIO", 1, 1, 0 );
                                }
                            }
                            else if (g_U64721 == 1)
                            {
                                if (sub_25032( l_U813 ))
                                {
                                    sub_25074( "G1_BANT2V1", ref l_U813, 6, 1 );
                                }
                            }
                            else if (g_U64721 == 2)
                            {
                                if (sub_25032( l_U813 ))
                                {
                                    sub_25074( "G1_BANT2V2", ref l_U813, 6, 1 );
                                }
                            };;;
                        }
                    }
                }
                else if (IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_GAME_TIMER( ref l_U780 );
                    l_U569 = 1;
                };;;
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), l_U753._fU0, l_U753._fU4, 15.40000000, 2.50000000, 2.50000000, 2.00000000, 1 ))
                {
                    if (NOT l_U586)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), l_U753._fU0, l_U753._fU4, 15.40000000, 2.50000000, 2.50000000, 2.00000000, 0 ))
                        {
                            sub_54958();
                            l_U586 = 1;
                        }
                    }
                    REMOVE_BLIP( l_U669 );
                    CLEAR_PRINTS();
                    l_U568 = 1;
                    l_U559 = 0;
                    l_U563 = 3;
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), l_U753._fU0, l_U753._fU4, 15.40000000, 15.00000000, 15.00000000, 3.00000000, 0 ))
                {
                    if (l_U584)
                    {
                        UNLOCK_RAGDOLL( l_U591, 0 );
                        if (NOT (IS_CHAR_INJURED( l_U593 )))
                        {
                            UNLOCK_RAGDOLL( l_U593, 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U592 )))
                        {
                            UNLOCK_RAGDOLL( l_U592, 0 );
                        }
                        for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
                            {
                                UNLOCK_RAGDOLL( l_U594[l_U776], 0 );
                            }
                        }
                        l_U584 = 0;
                    }
                }
                else if (NOT l_U584)
                {
                    UNLOCK_RAGDOLL( l_U591, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U593 )))
                    {
                        UNLOCK_RAGDOLL( l_U593, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U592 )))
                    {
                        UNLOCK_RAGDOLL( l_U592, 1 );
                    }
                    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
                        {
                            UNLOCK_RAGDOLL( l_U594[l_U776], 1 );
                        }
                    }
                    l_U584 = 1;
                };;;
            }
        }
    }
    else
    {
        l_U564 = 3;
        sub_12168();
    }
    return;
}

void sub_47829()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    vector[4] vVar9;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    float[4] fVar22;
    int iVar27;

    array(ref vVar9, 4);
    array(ref fVar22, 4);
    vVar9[0] = {127.79070000, -229.60150000, 13.66270000};
    fVar22[0] = 88.00330000;
    vVar9[1] = {-61.81320000, -236.48040000, 13.74600000};
    fVar22[1] = 270.00000000;
    vVar9[2] = {-41.49950000, -353.82200000, 13.77730000};
    fVar22[2] = 2.59070000;
    vVar9[3] = {18.70370000, -132.24480000, 13.54150000};
    fVar22[3] = 180.00000000;
    l_U765[0] = 30.00000000;
    l_U765[1] = 40.00000000;
    l_U765[2] = 30.00000000;
    l_U765[3] = 40.00000000;
    if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5685(), ref l_U667 );
    }
    else
    {
        l_U667 = nil;
    }
    if (NOT l_U570)
    {
        if (NOT (HAS_MODEL_LOADED( l_U791 )))
        {
            REQUEST_MODEL( l_U791 );
        }
        GET_GAME_TIMER( ref l_U778 );
        l_U777 = l_U778 - l_U779;
        if (l_U777 >= 9000)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), 73.47300000, -199.97050000, 14.98670000, 28.20000000, 27.50010000, 3.60000000, 0 )))
            {
                if (HAS_MODEL_LOADED( l_U791 ))
                {
                    for ( l_U776 = 0; l_U776 < 4; l_U776++ )
                    {
                        CREATE_CAR( l_U791, vVar9[l_U776]._fU0, vVar9[l_U776]._fU4, vVar9[l_U776]._fU8, ref l_U662[l_U776], 1 );
                        SET_CAR_HEADING( l_U662[l_U776], fVar22[l_U776] );
                        SET_CAR_ON_GROUND_PROPERLY( l_U662[l_U776] );
                    }
                    if (DOES_BLIP_EXIST( l_U669 ))
                    {
                        REMOVE_BLIP( l_U669 );
                    }
                    for ( l_U776 = 0; l_U776 < 4; l_U776++ )
                    {
                        if (IS_VEH_DRIVEABLE( l_U662[l_U776] ))
                        {
                            SET_CAR_ENGINE_ON( l_U662[l_U776], 1, 1 );
                            if (IS_VEH_DRIVEABLE( l_U667 ))
                            {
                                GET_CAR_COORDINATES( l_U667, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            }
                            else
                            {
                                GET_CHAR_COORDINATES( sub_5685(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            }
                            GET_CAR_COORDINATES( l_U662[l_U776], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                            if (IS_VEH_DRIVEABLE( l_U662[l_U776] ))
                            {
                                CREATE_CHAR_INSIDE_CAR( l_U662[l_U776], 26, l_U789, ref l_U640[l_U776] );
                                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U640[l_U776] );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U640[l_U776], 1 );
                                SET_CHAR_RELATIONSHIP( l_U640[l_U776], 5, 0 );
                                SET_CHAR_RELATIONSHIP( l_U640[l_U776], 5, 0 );
                                SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U640[l_U776], 1 );
                                if (IS_VEH_DRIVEABLE( l_U667 ))
                                {
                                    TASK_CAR_MISSION( l_U640[l_U776], l_U662[l_U776], l_U667, 7, l_U765[l_U776], 2, -1, -1 );
                                }
                                else
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U640[l_U776], l_U662[l_U776], uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U765[l_U776], 0, 0, 3, 10.00000000, -1 );
                                }
                                CREATE_CHAR_AS_PASSENGER( l_U662[l_U776], 26, l_U789, 0, ref l_U645[l_U776] );
                                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U645[l_U776] );
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar27 );
                                if (iVar27 == 0)
                                {
                                    SET_CHAR_PROP_INDEX( l_U640[l_U776], 0, iVar27 );
                                }
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar27 );
                                if (iVar27 == 0)
                                {
                                    SET_CHAR_PROP_INDEX( l_U640[l_U776], 1, iVar27 );
                                }
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar27 );
                                if (iVar27 == 0)
                                {
                                    SET_CHAR_PROP_INDEX( l_U645[l_U776], 0, iVar27 );
                                }
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar27 );
                                if (iVar27 == 0)
                                {
                                    SET_CHAR_PROP_INDEX( l_U645[l_U776], 1, iVar27 );
                                }
                                GIVE_WEAPON_TO_CHAR( l_U645[l_U776], l_U798, 30000, 0 );
                                GIVE_WEAPON_TO_CHAR( l_U640[l_U776], l_U798, 30000, 0 );
                                SET_CURRENT_CHAR_WEAPON( l_U645[l_U776], l_U798, 0 );
                                SET_CURRENT_CHAR_WEAPON( l_U640[l_U776], l_U798, 0 );
                                TASK_DRIVE_BY( l_U645[l_U776], sub_5685(), 0, 0.00000000, 2.00000000, 0.00000000, 25.00000000, 4, 1, 5 );
                                GET_GAME_VIEWPORT_ID( ref l_U809 );
                                if (l_U776 == 0)
                                {
                                    SET_CHAR_NAME_DEBUG( l_U640[l_U776], "driver_0" );
                                    SET_CHAR_NAME_DEBUG( l_U645[l_U776], "pass_0" );
                                }
                                else if (l_U776 == 1)
                                {
                                    SET_CHAR_NAME_DEBUG( l_U640[l_U776], "driver_1" );
                                    SET_CHAR_NAME_DEBUG( l_U645[l_U776], "pass_1" );
                                }
                                else if (l_U776 == 2)
                                {
                                    SET_CHAR_NAME_DEBUG( l_U640[l_U776], "driver_2" );
                                    SET_CHAR_NAME_DEBUG( l_U645[l_U776], "pass_2" );
                                };;;
                                ADD_BLIP_FOR_CHAR( l_U645[l_U776], ref l_U708[l_U776] );
                                ADD_BLIP_FOR_CHAR( l_U640[l_U776], ref l_U703[l_U776] );
                                SET_CHAR_IS_TARGET_PRIORITY( l_U640[l_U776], 1 );
                                SET_CHAR_IS_TARGET_PRIORITY( l_U645[l_U776], 1 );
                                SET_CHAR_RELATIONSHIP_GROUP( l_U640[l_U776], 24 );
                                SET_CHAR_RELATIONSHIP_GROUP( l_U645[l_U776], 24 );
                                SET_CHAR_RELATIONSHIP( l_U640[l_U776], 5, 0 );
                                SET_CHAR_RELATIONSHIP( l_U640[l_U776], 5, 23 );
                                SET_CHAR_RELATIONSHIP( l_U640[l_U776], 1, 24 );
                                SET_CHAR_RELATIONSHIP( l_U645[l_U776], 5, 0 );
                                SET_CHAR_RELATIONSHIP( l_U645[l_U776], 5, 23 );
                                SET_CHAR_RELATIONSHIP( l_U645[l_U776], 1, 24 );
                            }
                        }
                        l_U579[l_U776] = 1;
                    }
                    if (sub_12608( l_U813 ))
                    {
                        sub_23384( ref l_U813 );
                    }
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U651[0] );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U651[1] );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U651[2] );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U651[3] );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U651[4] );
                    CLEAR_PRINTS();
                    sub_15190( "G1_CARS", ref l_U819, 6, 1 );
                    l_U578 = 1;
                    l_U570 = 1;
                }
                else
                {
                    REQUEST_MODEL( l_U791 );
                }
            }
        }
    }
    else if (NOT l_U571)
    {
        for ( l_U776 = 0; l_U776 < 4; l_U776++ )
        {
            if ((IS_VEH_DRIVEABLE( l_U662[l_U776] )) AND (NOT (IS_CHAR_DEAD( l_U640[l_U776] ))))
            {
                if (l_U579[l_U776])
                {
                    if (IS_CHAR_IN_CAR( l_U640[l_U776], l_U662[l_U776] ))
                    {
                        if (NOT (LOCATE_CHAR_ON_FOOT_CAR_3D( sub_5685(), l_U662[l_U776], 10.00000000, 10.00000000, 5.00000000, 0 )))
                        {
                            GET_CAR_COORDINATES( l_U662[l_U776], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                            if (l_U578)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U645[l_U776] )))
                                {
                                    if (IS_CHAR_IN_CAR( l_U645[l_U776], l_U662[l_U776] ))
                                    {
                                        if ((IS_VEH_DRIVEABLE( l_U667 )) AND (NOT (l_U667 == nil)))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U640[l_U776], 49, ref l_U803 );
                                            if (l_U803 == 7)
                                            {
                                                GET_CAR_COORDINATES( l_U667, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                                TASK_CAR_MISSION( l_U640[l_U776], l_U662[l_U776], l_U667, 7, l_U765[l_U776], 2, -1, -1 );
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U640[l_U776], 15, ref l_U803 );
                                            if (l_U803 == 7)
                                            {
                                                GET_CHAR_COORDINATES( sub_5685(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                                TASK_CAR_DRIVE_TO_COORD( l_U640[l_U776], l_U662[l_U776], uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U765[l_U776], 0, 0, 2, 10.00000000, -1 );
                                            }
                                        }
                                    }
                                }
                                else if ((IS_VEH_DRIVEABLE( l_U667 )) AND (NOT (l_U667 == nil)))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U640[l_U776], 49, ref l_U803 );
                                    if (l_U803 == 7)
                                    {
                                        GET_CAR_COORDINATES( l_U667, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                        TASK_CAR_MISSION( l_U640[l_U776], l_U662[l_U776], l_U667, 7, l_U765[l_U776], 2, -1, -1 );
                                    }
                                }
                                else
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U640[l_U776], 15, ref l_U803 );
                                    if (l_U803 == 7)
                                    {
                                        GET_CHAR_COORDINATES( sub_5685(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                        TASK_CAR_DRIVE_TO_COORD( l_U640[l_U776], l_U662[l_U776], uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U765[l_U776], 0, 0, 2, 10.00000000, -1 );
                                    }
                                }
                                if (NOT (IS_CHAR_INJURED( l_U645[l_U776] )))
                                {
                                    if (IS_CHAR_IN_CAR( l_U645[l_U776], l_U662[l_U776] ))
                                    {
                                        GET_SCRIPT_TASK_STATUS( l_U645[l_U776], 52, ref l_U803 );
                                        if (l_U803 == 7)
                                        {
                                            CLEAR_CHAR_TASKS( l_U645[l_U776] );
                                            TASK_DRIVE_BY( l_U645[l_U776], sub_5685(), 0, 0.00000000, 2.00000000, 0.00000000, 25.00000000, 4, 1, 5 );
                                        }
                                    }
                                }
                            }
                            else if (sub_25280( ref l_U662[l_U776], 75.00000000, 50.00000000, 20.00000000, 5 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U667 ))
                                {
                                    GET_CAR_COORDINATES( l_U667, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                    GET_CAR_HEADING( l_U667, ref uVar5 );
                                    TASK_CAR_MISSION( l_U640[l_U776], l_U662[l_U776], l_U667, 7, l_U765[l_U776], 2, -1, -1 );
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_5685(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                    TASK_CAR_DRIVE_TO_COORD( l_U640[l_U776], l_U662[l_U776], uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U765[l_U776], 0, 0, 2, 10.00000000, -1 );
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U640[l_U776], 49, ref l_U803 );
                                if (l_U803 == 7)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U645[l_U776] )))
                                    {
                                        if (IS_CHAR_IN_CAR( l_U645[l_U776], l_U662[l_U776] ))
                                        {
                                            CLEAR_CHAR_TASKS( l_U640[l_U776] );
                                            if (IS_VEH_DRIVEABLE( l_U667 ))
                                            {
                                                GET_CAR_COORDINATES( l_U667, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                                TASK_CAR_MISSION( l_U640[l_U776], l_U662[l_U776], l_U667, 7, l_U765[l_U776], 2, -1, -1 );
                                            }
                                            else
                                            {
                                                GET_CHAR_COORDINATES( sub_5685(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                                TASK_CAR_DRIVE_TO_COORD( l_U640[l_U776], l_U662[l_U776], uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U765[l_U776], 0, 0, 2, 10.00000000, -1 );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( l_U640[l_U776] );
                                        if (IS_VEH_DRIVEABLE( l_U667 ))
                                        {
                                            GET_CAR_COORDINATES( l_U667, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                            TASK_CAR_MISSION( l_U640[l_U776], l_U662[l_U776], l_U667, 7, l_U765[l_U776], 2, -1, -1 );
                                        }
                                        else
                                        {
                                            GET_CHAR_COORDINATES( sub_5685(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                            TASK_CAR_DRIVE_TO_COORD( l_U640[l_U776], l_U662[l_U776], uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U765[l_U776], 0, 0, 2, 10.00000000, -1 );
                                        }
                                    }
                                }
                                if (NOT (IS_CHAR_INJURED( l_U645[l_U776] )))
                                {
                                    if (IS_CHAR_IN_CAR( l_U645[l_U776], l_U662[l_U776] ))
                                    {
                                        GET_SCRIPT_TASK_STATUS( l_U645[l_U776], 52, ref l_U803 );
                                        if (l_U803 == 7)
                                        {
                                            CLEAR_CHAR_TASKS( l_U645[l_U776] );
                                            TASK_DRIVE_BY( l_U645[l_U776], sub_5685(), 0, 0.00000000, 2.00000000, 0.00000000, 25.00000000, 4, 1, 5 );
                                        }
                                    }
                                }
                            }
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U640[l_U776] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U802 );
                            if (IS_CHAR_IN_ANY_CAR( l_U640[l_U776] ))
                            {
                                TASK_LEAVE_ANY_CAR( 0 );
                            }
                            TASK_COMBAT( 0, sub_5685() );
                            CLOSE_SEQUENCE_TASK( l_U802 );
                            TASK_PERFORM_SEQUENCE( l_U640[l_U776], l_U802 );
                            CLEAR_SEQUENCE_TASK( l_U802 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U645[l_U776] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U802 );
                            if (IS_CHAR_IN_ANY_CAR( l_U645[l_U776] ))
                            {
                                TASK_LEAVE_ANY_CAR( 0 );
                            }
                            TASK_COMBAT( 0, sub_5685() );
                            CLOSE_SEQUENCE_TASK( l_U802 );
                            TASK_PERFORM_SEQUENCE( l_U645[l_U776], l_U802 );
                            CLEAR_SEQUENCE_TASK( l_U802 );
                        }
                        l_U579[l_U776] = 0;;
                    }
                }
                else if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U640[l_U776], sub_5685(), 20.00000000, 20.00000000, 5.00000000, 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U640[l_U776] )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U640[l_U776], l_U662[l_U776] )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U802 );
                                TASK_ENTER_CAR_AS_DRIVER( 0, l_U662[l_U776], -1 );
                                CLOSE_SEQUENCE_TASK( l_U802 );
                                TASK_PERFORM_SEQUENCE( l_U640[l_U776], l_U802 );
                                CLEAR_SEQUENCE_TASK( l_U802 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U645[l_U776] )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U645[l_U776], l_U662[l_U776] )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U802 );
                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U662[l_U776], -1, 0 );
                                CLOSE_SEQUENCE_TASK( l_U802 );
                                TASK_PERFORM_SEQUENCE( l_U645[l_U776], l_U802 );
                                CLEAR_SEQUENCE_TASK( l_U802 );
                            }
                        }
                        l_U579[l_U776] = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_54958()
{
    float fVar2;
    unknown uVar3;

    if ((IS_CHAR_IN_ANY_CAR( sub_5685() )) || (IS_CHAR_ON_ANY_BIKE( sub_5685() )))
    {
        SET_PLAYER_CONTROL( sub_6907(), 0 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5685(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar2 );
        while (fVar2 > 0.20000000)
        {
            WAIT( 0 );
            fVar2 = 0.00000000;
            if ((IS_CHAR_IN_ANY_CAR( sub_5685() )) || (IS_CHAR_ON_ANY_BIKE( sub_5685() )))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5685(), ref uVar3 );
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    GET_CAR_SPEED( uVar3, ref fVar2 );
                }
            }
            LOCATE_CHAR_ANY_MEANS_3D( sub_5685(), l_U753._fU0, l_U753._fU4, 15.40000000, 2.50000000, 2.50000000, 2.00000000, 0 );
        }
        SET_PLAYER_CONTROL( sub_6907(), 1 );
    }
    return;
}

void sub_55688()
{
    unknown uVar2;
    boolean bVar3;
    vector[6] vVar4;
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
    float[6] fVar23;
    int iVar30;
    int iVar31;

    array(ref vVar4, 6);
    array(ref fVar23, 6);
    iVar30 = 0;
    iVar31 = 0;
    if (sub_13693())
    {
        if (NOT l_U568)
        {
            if (NOT (IS_CHAR_DEAD( l_U591 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U591 );
                if (IS_CHAR_IN_ANY_CAR( l_U591 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U591, -65.75000000, -582.37160000, 13.75140000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U591, -65.75000000, -582.37160000, 13.75140000 );
                }
            }
            if (sub_12608( l_U813 ))
            {
                sub_4631( ref l_U813, 0 );
            }
            CLEAR_PRINTS();
            l_U559 = 13;
        }
    }
    else
    {
        l_U568 = 0;
    }
    switch (l_U559)
    {
        case 0:
        if (sub_12608( l_U813 ))
        {
            sub_4631( ref l_U813, 0 );
        }
        CLEAR_PRINTS();
        if (sub_10920( 1, 1 ))
        {
            CLEAR_CHAR_TASKS( sub_5685() );
            REQUEST_ANIMS( "MISSPASS" );
            BEGIN_CAM_COMMANDS( ref l_U804 );
            if (NOT (IS_CHAR_DEAD( l_U591 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U591 );
                if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5685(), ref l_U667 );
                    if (NOT (IS_CHAR_IN_CAR( l_U591, l_U667 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U591, l_U667, 0 );
                    }
                    SET_CAR_COORDINATES( l_U667, l_U753._fU0, l_U753._fU4, l_U753._fU8 );
                }
                else
                {
                    iVar31 = 1;
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING())
                    {
                        WAIT( 0 );
                    }
                    if (IS_PLAYER_PLAYING( sub_6907() ))
                    {
                        SET_CHAR_COORDINATES( sub_5685(), -178.34170000, -363.08510000, 13.66090000 );
                        SET_CHAR_HEADING( sub_5685(), 303.69690000 );
                        SET_CHAR_VELOCITY( sub_5685(), 0.00000000, 0.00000000, 0.00000000 );
                        if (NOT (IS_CHAR_INJURED( l_U591 )))
                        {
                            SET_CHAR_VELOCITY( l_U591, 0.00000000, 0.00000000, 0.00000000 );
                            if (IS_CHAR_IN_ANY_CAR( l_U591 ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( l_U591, -176.21650000, -362.02260000, 13.68640000 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( l_U591, -176.21650000, -362.02260000, 13.68640000 );
                            }
                            SET_CHAR_HEADING( l_U591, 123.69690000 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U591, sub_5685() );
                            TASK_TURN_CHAR_TO_FACE_CHAR( sub_5685(), l_U591 );
                            vVar4[0] = {-176.39120000, -364.65170000, 13.66840000};
                            fVar23[0] = 12.65820000;
                            vVar4[1] = {-178.65080000, -360.98550000, 13.67080000};
                            fVar23[1] = 249.51760000;
                            vVar4[2] = {-174.05240000, -362.74340000, 13.70070000};
                            fVar23[2] = 90.00000000;
                            vVar4[3] = {-177.50100000, -360.66830000, 13.67890000};
                            fVar23[3] = 245.30890000;
                            vVar4[4] = {-181.40420000, -360.85250000, 13.62430000};
                            fVar23[4] = 262.12820000;
                            vVar4[5] = {-182.50720000, -366.40370000, 13.56080000};
                            fVar23[5] = 303.41040000;
                            for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
                            {
                                if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U594[l_U776] );
                                    if (iVar30 < 6)
                                    {
                                        SET_CHAR_COORDINATES( l_U594[l_U776], vVar4[iVar30]._fU0, vVar4[iVar30]._fU4, vVar4[iVar30]._fU8 );
                                        SET_CHAR_HEADING( l_U594[l_U776], fVar23[iVar30] );
                                        iVar30++;
                                    }
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( l_U593 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U593 );
                                if (iVar30 < 6)
                                {
                                    SET_CHAR_COORDINATES( l_U593, vVar4[iVar30]._fU0, vVar4[iVar30]._fU4, vVar4[iVar30]._fU8 );
                                    SET_CHAR_HEADING( l_U593, fVar23[iVar30] );
                                    iVar30++;
                                }
                                TASK_TURN_CHAR_TO_FACE_CHAR( l_U593, l_U591 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U592 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U592 );
                                if (iVar30 < 6)
                                {
                                    SET_CHAR_COORDINATES( l_U592, vVar4[iVar30]._fU0, vVar4[iVar30]._fU4, vVar4[iVar30]._fU8 );
                                    SET_CHAR_HEADING( l_U592, fVar23[iVar30] );
                                    iVar30++;
                                }
                                TASK_TURN_CHAR_TO_FACE_CHAR( l_U592, l_U591 );
                            }
                        }
                    }
                }
            }
            CREATE_CAM( 14, ref l_U805 );
            SET_CAM_POS( l_U805, -171.39090000, -358.11460000, 15.88652000 );
            SET_CAM_ROT( l_U805, -9.97345100, -0.00000000, 122.21550000 );
            SET_CAM_FOV( l_U805, 31.90006000 );
            l_U764 = 18.60000000;
            SET_CAM_NEAR_DOF( l_U805, l_U763 );
            SET_CAM_FAR_DOF( l_U805, l_U764 );
            if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5685(), ref l_U667 );
                GET_CAR_HEADING( l_U667, ref l_U752 );
                if (l_U752 <= 180.00000000)
                {
                    SET_CAM_POS( l_U805, -184.94340000, -359.98990000, 15.54825000 );
                    SET_CAM_ROT( l_U805, -11.72204000, 0.00000000, -118.58540000 );
                    SET_CAM_FOV( l_U805, 33.60003000 );
                }
            }
            SET_CAM_ACTIVE( l_U805, 1 );
            SET_CAM_PROPAGATE( l_U805, 1 );
            SET_USE_HIGHDOF( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            if (IS_PLAYER_PLAYING( sub_6907() ))
            {
                SET_PLAYER_CONTROL( sub_6907(), 0 );
                SET_WIDESCREEN_BORDERS( 1 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5685(), 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U591 )))
            {
                if (IS_GROUP_MEMBER( l_U591, l_U808 ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U591 );
                    sub_47032( 0 );
                }
            }
            CLEAR_PRINTS();
            while (NOT (HAVE_ANIMS_LOADED( "MISSPASS" )))
            {
                WAIT( 0 );
                REQUEST_ANIMS( "MISSPASS" );
            }
            if (iVar31 == 1)
            {
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
            while (NOT (sub_15190( "G1_ARR", ref l_U813, 6, 1 )))
            {
                WAIT( 0 );
            }
            l_U559 = 1;
        }
        break;
        case 1:
        if (NOT (sub_12608( l_U813 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U591 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U802 );
                if (IS_CHAR_IN_ANY_CAR( l_U591 ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                else
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -175.32360000, -361.23820000, 14.69830000, 2, -1, 2.00000000 );
                }
                if (HAVE_ANIMS_LOADED( "MISSPASS" ))
                {
                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "partial_bye_r", "MISSPASS", 8000, 0, 0, 0, 0, -1 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -178.68100000, -347.94910000, 17.84130000, 2, -1, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U802 );
                TASK_PERFORM_SEQUENCE( l_U591, l_U802 );
                CLEAR_SEQUENCE_TASK( l_U802 );
            }
            if (NOT (IS_CHAR_INJURED( l_U593 )))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 4000, ref uVar2 );
                OPEN_SEQUENCE_TASK( ref l_U802 );
                if (IS_CHAR_IN_ANY_CAR( l_U593 ))
                {
                    TASK_STAND_STILL( 0, uVar2 );
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -178.68100000, -347.94910000, 17.84130000, 2, -1, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U802 );
                TASK_PERFORM_SEQUENCE( l_U593, l_U802 );
                CLEAR_SEQUENCE_TASK( l_U802 );
            }
            if (NOT (IS_CHAR_INJURED( l_U592 )))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 4000, ref uVar2 );
                OPEN_SEQUENCE_TASK( ref l_U802 );
                if (IS_CHAR_IN_ANY_CAR( l_U592 ))
                {
                    TASK_STAND_STILL( 0, uVar2 );
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -178.68100000, -347.94910000, 17.84130000, 2, -1, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U802 );
                TASK_PERFORM_SEQUENCE( l_U592, l_U802 );
                CLEAR_SEQUENCE_TASK( l_U802 );
            }
            for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 4000, ref uVar2 );
                    OPEN_SEQUENCE_TASK( ref l_U802 );
                    if (IS_CHAR_IN_ANY_CAR( l_U594[l_U776] ))
                    {
                        TASK_STAND_STILL( 0, uVar2 );
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -178.68100000, -347.94910000, 17.84130000, 2, -1, 2.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U802 );
                    TASK_PERFORM_SEQUENCE( l_U594[l_U776], l_U802 );
                    CLEAR_SEQUENCE_TASK( l_U802 );
                }
            }
            GET_GAME_TIMER( ref l_U779 );
            l_U559 = 12;
        }
        break;
        case 4: break;
        case 12:
        if (NOT (sub_12608( l_U813 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U591 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U591, 29, ref l_U803 );
                bVar3 = false;
                if (IS_CHAR_ON_SCREEN( l_U591 ))
                {
                    bVar3 = true;
                }
                if (NOT bVar3)
                {
                    if (NOT (IS_CHAR_INJURED( l_U593 )))
                    {
                        if (IS_CHAR_ON_SCREEN( l_U591 ))
                        {
                            bVar3 = true;
                        }
                    }
                }
                if (NOT bVar3)
                {
                    if (NOT (IS_CHAR_INJURED( l_U592 )))
                    {
                        if (IS_CHAR_ON_SCREEN( l_U591 ))
                        {
                            bVar3 = true;
                        }
                    }
                }
                if (NOT bVar3)
                {
                    for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
                        {
                            if (IS_CHAR_ON_SCREEN( l_U594[l_U776] ))
                            {
                                bVar3 = true;
                                l_U776 = l_U770;
                            }
                        }
                    }
                }
                GET_GAME_TIMER( ref l_U778 );
                l_U777 = l_U778 - l_U779;
                if (((l_U803 == 7) || (l_U777 > 15000)) || (NOT bVar3))
                {
                    l_U559 = 13;
                }
            }
            else
            {
                l_U559 = 13;
            }
        }
        break;
        case 13:
        CLEAR_PRINTS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U805 );
        SET_USE_HIGHDOF( 0 );
        END_CAM_COMMANDS( ref l_U804 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL( sub_6907(), 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5685(), 0 );
        DELETE_CHAR( ref l_U591 );
        if (NOT (IS_CHAR_INJURED( l_U593 )))
        {
            DELETE_CHAR( ref l_U593 );
        }
        if (NOT (IS_CHAR_INJURED( l_U592 )))
        {
            DELETE_CHAR( ref l_U592 );
        }
        for ( l_U776 = 0; l_U776 < l_U770; l_U776++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U594[l_U776] )))
            {
                DELETE_CHAR( ref l_U594[l_U776] );
            }
        }
        REMOVE_ANIMS( "MISSPASS" );
        sub_59081();
        break;
    }
    return;
}

void sub_59081()
{
    REMOVE_BLIP( l_U668 );
    REMOVE_BLIP( l_U669 );
    CLEAR_WANTED_LEVEL( sub_6907() );
    CLEAR_WANTED_LEVEL( sub_6907() );
    sub_59138();
    sub_70730( 42 );
    UNLOCK_MISSION_NEWS_STORY( 42 );
    GET_GAME_TIMER( ref l_U779 );
    l_U558 = 9;
    return;
}

void sub_59138()
{
    sub_59147();
    return;
}

void sub_59147()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_59165();
    sub_59224( iVar2, iVar3, iVar4 );
    return;
}

void sub_59165()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_59224(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 21;
    sub_59257( iVar5, uParam0, uParam1, uParam2, "Contact_25" );
    return;
}

void sub_59257(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_59353( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_59353( ref cVar9 );
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
            sub_59353( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_59353( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_59353( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_59353( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_59930( iParam0, iVar7 );;;
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
                sub_60327( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_60327( 0, 4 );
            }
        }
    }
    if (NOT (sub_60416( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6907(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_6907() );
    }
    sub_2067();
    bVar27 = true;
    uVar28 = sub_59930( iParam0, iVar7 );
    uVar29 = sub_1524( iParam0 );
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
                sub_69792( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_70222();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_70307( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_70364( iParam0 );
                sub_70403( 0 );
                sub_1965( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_70511();
        }
    }
    if (bParam2)
    {
        sub_70222();
        sub_70599();
        sub_70403( 0 );
    }
    if (bParam3)
    {
        sub_70222();
        sub_70639();
        sub_70403( 0 );
        sub_1965( uVar29, 0 );
    }
    sub_1411();
    return;
}

void sub_59353(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_59930(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1923( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_60327(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_60416(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_60624( uParam1 );
        break;
        case 1:
        bVar8 = sub_62702( uParam1 );
        break;
        case 2:
        bVar8 = sub_62928( uParam1 );
        break;
        case 3:
        bVar8 = sub_63078( uParam1 );
        break;
        case 4:
        bVar8 = sub_63356( uParam1 );
        break;
        case 5:
        bVar8 = sub_63659( uParam1 );
        break;
        case 6:
        bVar8 = sub_63858( uParam1 );
        break;
        case 7:
        bVar8 = sub_64084( uParam1 );
        break;
        case 8:
        bVar8 = sub_64319( uParam1 );
        break;
        case 9:
        bVar8 = sub_64694( uParam1 );
        break;
        case 10:
        bVar8 = sub_64941( uParam1 );
        break;
        case 11:
        bVar8 = sub_65080( uParam1 );
        break;
        case 12:
        bVar8 = sub_65379( uParam1 );
        break;
        case 13:
        bVar8 = sub_65607( uParam1 );
        break;
        case 14:
        bVar8 = sub_65894( uParam1 );
        break;
        case 15:
        bVar8 = sub_66176( uParam1 );
        break;
        case 16:
        bVar8 = sub_66458( uParam1 );
        break;
        case 17:
        bVar8 = sub_66659( uParam1 );
        break;
        case 18:
        bVar8 = sub_66732( uParam1 );
        break;
        case 19:
        bVar8 = sub_66946( uParam1 );
        break;
        case 20:
        bVar8 = sub_67199( uParam1 );
        break;
        case 21:
        bVar8 = sub_67446( uParam1 );
        break;
        case 22:
        bVar8 = sub_67647( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_62307( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_59930( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_67970( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_60624(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_60903( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_60903( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_60903( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_60903( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_60903( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_60903( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_60903( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_60903( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_60903( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_60903( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_60903( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_60903( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_60903( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_60903( iVar3, 0, 3, 1, 0, 0 );
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
        sub_60903( iVar3, 0, sub_62185(), sub_62451(), 0, 0 );
        break;
        default:
        sub_62610( "Friend 1", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Friend 1", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_60903(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_60914( uParam1 );
    sub_61088( uParam0, 0, uParam2 );
    sub_61088( uParam0, 1, uParam3 );
    sub_61088( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_59165();
    return;
}

void sub_60914(unknown uParam0)
{
    ADD_SCORE( sub_6907(), uParam0 );
    sub_60939( uParam0 );
    return;
}

void sub_60939(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1923( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_61088(unknown uParam0, int iParam1, int iParam2)
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
        sub_61245( uParam0 );
    }
    return;
}

void sub_61245(unknown uParam0)
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

int sub_62185()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_62307( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_62307(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_62451()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_62307( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_62610(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_62702(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_60903( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_62610( "Contact 2", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 2", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62928(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_60903( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_62610( "Girl 3", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Girl 3", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63078(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_60903( iVar3, 0, sub_62185(), sub_62451(), 0, 0 );
        break;
        default:
        sub_62610( "Friend 4", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Friend 4", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63356(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_60903( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_60903( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_60903( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_60903( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_62610( "Contact 5", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 5", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63659(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_62610( "Contact 7", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 7", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63858(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_60903( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_62610( "Contact 7b", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 7b", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64084(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_60903( iVar3, 0, sub_62185(), sub_62451(), 0, 0 );
        break;
        default:
        sub_62610( "Friend 8", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Friend 8", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64319(unknown uParam0)
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
        sub_60903( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_60903( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_60903( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_60903( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_60903( iVar3, 0, sub_62185(), sub_62451(), 0, 0 );
        break;
        default:
        sub_62610( "Friend 9", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Friend 9", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64694(unknown uParam0)
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
        sub_60903( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_60903( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_60903( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_62610( "Contact 10", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_62610( "Contact 10", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64941(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_62610( "Girl 11", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Girl 11", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65080(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_60903( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_60903( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_60903( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_60903( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_60903( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_62610( "Contact 12", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 12", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65379(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_60903( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_62610( "Contact 13", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 13", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65607(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_60903( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_60903( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_60903( iVar3, 0, sub_62185(), sub_62451(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_62610( "Friend 15", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Friend 15", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65894(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_60903( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_60903( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_60903( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_62610( "Contact 16", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 16", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66176(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_60903( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_60903( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_60903( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_62610( "Contact 18", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 18", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66458(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_62610( "Contact 19", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 19", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66659(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_62610( "Girl 20", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66732(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_62610( "Contact 21", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 21", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66946(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_60903( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_60903( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_62610( "Contact 22", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 22", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_67199(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_60903( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_60903( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_60903( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_62610( "Contact 24", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 24", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_67446(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_60903( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_60903( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_60903( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_62610( "Contact 25", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_62610( "Contact 25", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_67647(unknown uParam0)
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
        sub_60903( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_62610( "Girl 26", 1 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_62610( "Girl 26", 0 );
        sub_60903( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_67970(int iParam0, int iParam1)
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
    if (sub_68018( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_68749( iParam1 );
    }
    return;
}

int sub_68018(int iParam0, int iParam1)
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
            sub_68158( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_68158(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_68340( 0 );
    return;
}

void sub_68340(boolean bParam0)
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
        sub_68595();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_68595()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_68749(int iParam0)
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
        sub_69082( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_69082( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_69082( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_69082( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_69082( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_69082( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_69082( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_69082( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_69082( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_69082( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_69082( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_69082( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_69082( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_69082( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_69082( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_69082( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_69082( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_69082( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_69082( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_69082(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_69792(unknown uParam0, unknown uParam1)
{
    sub_69811( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_69811(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_70222()
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

int sub_70307(int iParam0, int iParam1)
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

void sub_70364(unknown uParam0)
{
    sub_1310();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_70403(unknown uParam0)
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

void sub_70511()
{
    sub_70520();
    return;
}

void sub_70520()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_70599()
{
    sub_70520();
    return;
}

void sub_70639()
{
    sub_70520();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_70730(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_70817( iParam0 ))
    {
        sub_71867( iParam0 );
    }
    return;
}

int sub_70817(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_70874( ref uVar3, 1, 0, 0 );
    sub_71486( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_12720( "\n ----------------------------------------------------------------" );
    sub_5818( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_12720( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_70874(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_70927( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_71059( iParam0 + 0 );
    }
    return;
}

void sub_70927(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_71059( iParam0 + 0 );
    }
    return;
}

void sub_71059(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_71090( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_71090(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_71486(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_71867(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_72078( 20, 6, 16383, 16383, ref uVar4 );
        sub_72754( ref uVar4, 7 );
        sub_72785( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_72078( 20, 7, 9, 16383, ref uVar4 );
        sub_72754( ref uVar4, 7 );
        sub_72785( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_72078(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_72102( uParam0, 0, iParam4 + 0 );
    sub_72102( uParam1, 1, iParam4 + 0 );
    sub_72102( uParam2, 2, iParam4 + 0 );
    sub_72102( uParam3, 3, iParam4 + 0 );
    sub_72102( 0, 4, iParam4 + 0 );
    sub_72102( 1, 5, iParam4 + 0 );
    sub_72102( 65535, 6, iParam4 + 0 );
    sub_72102( 0, 12, iParam4 + 0 );
    sub_72102( 0, 11, iParam4 + 0 );
    sub_72102( 0, 14, iParam4 + 0 );
    sub_72102( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_72102( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_72102( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_72102(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_72754(int iParam0, unknown uParam1)
{
    sub_72102( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_72785(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_72825())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_73512( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_73311( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_72825()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_72859( 5, g_U968[I] )) == 7)
        {
            sub_73311( I );
            return 1;
        }
    }
    return 0;
}

int sub_72859(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_73311(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_73384( 39 );
    return;
}

void sub_73384(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_73512(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_73573( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_73573(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_74002()
{
    switch (l_U559)
    {
        case 0:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if ((sub_10920( 1, 1 )) AND (IS_SCREEN_FADED_IN()))
            {
                if ((NOT (IS_CHAR_INJURED( l_U591 ))) AND (IS_VEH_DRIVEABLE( l_U658 )))
                {
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 4000 );
                    }
                    l_U559 = 1;
                }
                else
                {
                    l_U559 = 13;
                    l_U564 = 3;
                }
            }
        }
        break;
        case 1:
        if (NOT IS_SCREEN_FADING())
        {
            SET_PLAYER_CONTROL( sub_6907(), 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref l_U804 );
            CREATE_CAM( 14, ref l_U805 );
            SET_CAM_POS( l_U805, 16.81343000, -48.58525000, 15.12972000 );
            SET_CAM_ROT( l_U805, -9.06006500, 0.00000000, -54.66693000 );
            SET_CAM_FOV( l_U805, 34.20003000 );
            SET_CAM_ACTIVE( l_U805, 1 );
            SET_CAM_PROPAGATE( l_U805, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            sub_74360();
            if (IS_PLAYER_PLAYING( sub_6907() ))
            {
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5685(), 1 );
                GET_PLAYER_GROUP( sub_6907(), ref l_U808 );
            }
            CLEAR_PRINTS();
            if (NOT (IS_CHAR_INJURED( l_U594[6] )))
            {
                TASK_LOOK_AT_CHAR( sub_5685(), l_U594[6], 99999, 0 );
                TASK_LOOK_AT_CHAR( l_U594[6], sub_5685(), 99999, 0 );
            }
            CLEAR_HELP();
            DO_SCREEN_FADE_IN( 2000 );
            l_U559 = 2;
        }
        break;
        case 2:
        if (NOT IS_SCREEN_FADING())
        {
            sub_15190( "G1_CARF", ref l_U813, 6, 1 );
            l_U559 = 4;
        }
        break;
        case 4:
        if (NOT (sub_12608( l_U813 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U802 );
            TASK_LEAVE_ANY_CAR( 0 );
            if (NOT (IS_CHAR_DEAD( l_U594[6] )))
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U594[6] );
                TASK_LOOK_AT_CHAR( 0, l_U594[6], 9999, 0 );
            }
            CLOSE_SEQUENCE_TASK( l_U802 );
            TASK_PERFORM_SEQUENCE( sub_5685(), l_U802 );
            CLEAR_SEQUENCE_TASK( l_U802 );
            l_U559 = 5;
        }
        break;
        case 5:
        GET_SCRIPT_TASK_STATUS( sub_5685(), 29, ref l_U803 );
        if (l_U803 == 7)
        {
            if (IS_VEH_DRIVEABLE( l_U658 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U594[6] )))
                {
                    TASK_CAR_DRIVE_WANDER( l_U594[6], l_U658, 20.00000000, 3 );
                    l_U559 = 12;
                    GET_GAME_TIMER( ref l_U779 );
                }
            }
        }
        break;
        case 12:
        GET_GAME_TIMER( ref l_U778 );
        l_U777 = l_U778 - l_U779;
        if (IS_VEH_DRIVEABLE( l_U658 ))
        {
            if ((l_U777 > 6000) || (NOT (IS_CAR_ON_SCREEN( l_U658 ))))
            {
                sub_76194();
                l_U559 = 13;
            }
        }
        else
        {
            sub_76194();
            l_U559 = 13;
        }
        break;
        case 13:
        switch (l_U564)
        {
            case 3:
            sub_76457( 20, "G1_CALLF", "G1AUD", 0 );
            break;
            case 2:
            sub_76457( 20, "G1_CFAIL", "G1AUD", 0 );
            break;
            case 5:
            sub_76457( 20, "G1_CFAIL", "G1AUD", 0 );
            break;
            case 6:
            sub_76457( 20, "G1_CFAIL", "G1AUD", 0 );
            break;
            case 7:
            sub_76457( 20, "G1_CFAIL", "G1AUD", 0 );
            break;
            case 1:
            sub_76457( 20, "G1_CFAIL", "G1AUD", 0 );
            break;
            case 4:
            sub_76457( 20, "G1_CFAIL", "G1AUD", 0 );
            break;
        }
        if (g_U9930 > 1)
        {
            if (IS_PLAYER_PLAYING( sub_6907() ))
            {
                SET_PLAYER_MOOD_PISSED_OFF( sub_6907(), 150 );
                SAY_AMBIENT_SPEECH( sub_5685(), "MISSION_FAIL_RAGE", 1, 1, 0 );
            }
        }
        sub_77313();
        l_U565 = 0;
        break;
    }
    return;
}

void sub_74360()
{
    WAIT( 0 );
    if (IS_PLAYER_PLAYING( sub_6907() ))
    {
        CLEAR_AREA( l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8, 20.00000000, 1 );
        if (IS_CHAR_IN_ANY_CAR( sub_5685() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_5685(), l_U713._fU0, l_U713._fU4, l_U713._fU8 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_5685(), l_U713._fU0, l_U713._fU4, l_U713._fU8 );
        }
        if (IS_VEH_DRIVEABLE( l_U659 ))
        {
            DELETE_CAR( ref l_U659 );
        }
        if (IS_VEH_DRIVEABLE( l_U660 ))
        {
            DELETE_CAR( ref l_U660 );
        }
        if (IS_CHAR_INJURED( l_U591 ))
        {
            DELETE_CHAR( ref l_U591 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U591 );
        }
        else
        {
            TASK_USE_MOBILE_PHONE( l_U591, 0 );
        }
        if (IS_VEH_DRIVEABLE( l_U658 ))
        {
            if ((NOT (CHECK_STUCK_TIMER( l_U658, 0, 5000 ))) AND (NOT (CHECK_STUCK_TIMER( l_U658, 1, 40000 ))))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_5685(), l_U658, 0 );
                if (NOT (IS_CHAR_DEAD( l_U594[6] )))
                {
                    WARP_CHAR_INTO_CAR( l_U594[6], l_U658 );
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U594[6] );
                    CREATE_CHAR_INSIDE_CAR( l_U658, 26, l_U788, ref l_U594[6] );
                    SET_CHAR_NAME_DEBUG( l_U594[6], "NGRD6" );
                }
                if (NOT (IS_CHAR_INJURED( l_U591 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U591, l_U658 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U591, l_U658, 2 );
                    }
                }
                SET_CAR_HEADING( l_U658, l_U726[1] );
                SET_CAR_COORDINATES( l_U658, l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8 );
            }
            else
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U658 );
                CLEAR_AREA( l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8, 20.00000000, 1 );
                CREATE_CAR( l_U790, l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8, ref l_U658, 1 );
                CHANGE_CAR_COLOUR( l_U658, 0, 0 );
                SET_CAR_HEADING( l_U658, l_U726[1] );
                SET_CAR_ON_GROUND_PROPERLY( l_U658 );
                if (NOT (IS_CHAR_INJURED( l_U591 )))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U591, l_U658, 2 );
                }
                WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_5685(), l_U658, 0 );
                if (NOT (IS_CHAR_DEAD( l_U594[6] )))
                {
                    WARP_CHAR_INTO_CAR( l_U594[6], l_U658 );
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U594[6] );
                    CREATE_CHAR_INSIDE_CAR( l_U658, 26, l_U788, ref l_U594[6] );
                    SET_CHAR_NAME_DEBUG( l_U594[6], "NGRD6" );
                }
            }
        }
        else
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U658 );
            CLEAR_AREA( l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8, 20.00000000, 1 );
            CREATE_CAR( l_U790, l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8, ref l_U658, 1 );
            CHANGE_CAR_COLOUR( l_U658, 0, 0 );
            SET_CAR_HEADING( l_U658, l_U726[1] );
            SET_CAR_ON_GROUND_PROPERLY( l_U658 );
            if (NOT (IS_CHAR_INJURED( l_U591 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U591, l_U658, 2 );
            }
            WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_5685(), l_U658, 0 );
            if (NOT (IS_CHAR_DEAD( l_U594[6] )))
            {
                WARP_CHAR_INTO_CAR( l_U594[6], l_U658 );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U594[6] );
                CREATE_CHAR_INSIDE_CAR( l_U658, 26, l_U788, ref l_U594[6] );
                SET_CHAR_NAME_DEBUG( l_U594[6], "NGRD6" );
            }
        }
        CLEAR_AREA( l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8, 20.00000000, 1 );
        LOAD_SCENE( l_U716[1]._fU0, l_U716[1]._fU4, l_U716[1]._fU8 );
    }
    return;
}

void sub_76194()
{
    TASK_CLEAR_LOOK_AT( sub_5685() );
    if (IS_VEH_DRIVEABLE( l_U658 ))
    {
        DELETE_CAR( ref l_U658 );
    }
    CLEAR_CHAR_TASKS( sub_5685() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    DESTROY_CAM( l_U805 );
    END_CAM_COMMANDS( ref l_U804 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_PLAYER_CONTROL( sub_6907(), 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5685(), 0 );
    return;
}

void sub_76457(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_76501( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_76501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_77313()
{
    sub_77322();
    return;
}

void sub_77322()
{
    int iVar2;

    iVar2 = 21;
    sub_77336( iVar2 );
    sub_2058( iVar2 );
    return;
}

void sub_77336(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_6907(), 150 );
    CLEAR_HELP();
    sub_882( uParam0 );
    return;
}

void sub_77450()
{
    sub_77460( 30 );
    sub_76457( 20, "G1_CPASS", "G1AUD", 0 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
    l_U565 = 0;
    return;
}

void sub_77460(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        if (g_U1965[0] == 0)
        {
            sub_70874( ref g_U1967[0], 4, 0, 0 );
            g_U1965[0] = 1;
        }
        break;
        case 22:
        if (g_U1984[0] == 0)
        {
            sub_70874( ref g_U1986[0], 4, 0, 0 );
            g_U1984[0] = 1;
        }
        break;
        case 23:
        if (g_U2003[0] == 0)
        {
            sub_70874( ref g_U2005[0], 4, 0, 0 );
            g_U2003[0] = 1;
        }
        break;
        case 24:
        if (g_U2022[0] == 0)
        {
            sub_70874( ref g_U2024[0], 4, 0, 0 );
            g_U2022[0] = 1;
        }
        break;
        case 25:
        if (g_U2041[0] == 0)
        {
            sub_70874( ref g_U2043[0], 4, 0, 0 );
            g_U2041[0] = 1;
        }
        break;
        case 26:
        if (g_U2060[0] == 0)
        {
            sub_70874( ref g_U2062[0], 4, 0, 0 );
            g_U2060[0] = 1;
        }
        break;
        case 27:
        if (g_U2079[0] == 0)
        {
            sub_70874( ref g_U2081[0], 4, 0, 0 );
            g_U2079[0] = 1;
        }
        break;
        case 28:
        if (g_U2098[0] == 0)
        {
            sub_70874( ref g_U2100[0], 4, 0, 0 );
            g_U2098[0] = 1;
        }
        break;
        case 29:
        if (g_U2117[0] == 0)
        {
            sub_70874( ref g_U2119[0], 4, 0, 0 );
            g_U2117[0] = 1;
        }
        break;
        case 30:
        if (g_U2136[0] == 0)
        {
            sub_70874( ref g_U2138[0], 4, 0, 0 );
            g_U2136[0] = 1;
        }
        break;
        case 31:
        if (g_U2155[0] == 0)
        {
            sub_70874( ref g_U2157[0], 4, 0, 0 );
            g_U2155[0] = 1;
        }
        break;
        case 32:
        if (g_U2174[0] == 0)
        {
            sub_70874( ref g_U2176[0], 4, 0, 0 );
            g_U2174[0] = 1;
        }
        break;
        case 33:
        if (g_U2193[0] == 0)
        {
            sub_70874( ref g_U2195[0], 4, 0, 0 );
            g_U2193[0] = 1;
        }
        break;
        case 34:
        if (g_U2212[0] == 0)
        {
            sub_70874( ref g_U2214[0], 4, 0, 0 );
            g_U2212[0] = 1;
        }
        break;
    }
    return;
}

void sub_78274()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        sub_59081();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 33 ))
    {
        l_U564 = 3;
        sub_12168();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 36 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            WAIT( 0 );
        }
        switch (l_U558)
        {
            case 2:
            SET_CHAR_COORDINATES( sub_5685(), 36.82750000, -42.57720000, 13.80490000 );
            SET_CHAR_HEADING( sub_5685(), 67.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            break;
            case 5:
            l_U568 = 1;
            l_U559 = 0;
            l_U558 = 6;
            LOAD_SCENE( 86.09730000, -190.79840000, 19.88720000 );
            REMOVE_BLIP( l_U669 );
            break;
            case 6:
            for ( l_U776 = 0; l_U776 < l_U773; l_U776++ )
            {
                REMOVE_BLIP( l_U670[l_U776] );
                if (NOT (IS_CHAR_DEAD( l_U607[l_U776] )))
                {
                    DELETE_CHAR( ref l_U607[l_U776] );
                }
            }
            for ( l_U776 = 0; l_U776 < l_U774; l_U776++ )
            {
                REMOVE_BLIP( l_U681[l_U776] );
                if (NOT (IS_CHAR_DEAD( l_U618[l_U776] )))
                {
                    DELETE_CHAR( ref l_U618[l_U776] );
                }
            }
            for ( l_U776 = 0; l_U776 < l_U775; l_U776++ )
            {
                REMOVE_BLIP( l_U692[l_U776] );
                if (NOT (IS_CHAR_DEAD( l_U629[l_U776] )))
                {
                    DELETE_CHAR( ref l_U629[l_U776] );
                }
            }
            break;
            case 7:
            switch (l_U563)
            {
                case 2:
                if (IS_VEH_DRIVEABLE( l_U667 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_5685(), l_U667 )))
                    {
                        WARP_CHAR_INTO_CAR( sub_5685(), l_U667 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U591 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U591, l_U667 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U591, l_U667, 0 );
                        }
                    }
                    SET_CAR_COORDINATES( l_U667, -189.53420000, -365.03890000, 13.39740000 );
                    SET_CAR_HEADING( l_U667, 270.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U667 );
                }
                else
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U667 );
                    CREATE_CAR( l_U790, -189.53420000, -365.03890000, 13.39740000, ref l_U667, 1 );
                    SET_CAR_HEADING( l_U667, 270 );
                    if (NOT (IS_CHAR_IN_CAR( sub_5685(), l_U667 )))
                    {
                        WARP_CHAR_INTO_CAR( sub_5685(), l_U667 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U591 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U591, l_U667 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U591, l_U667, 0 );
                        }
                    }
                }
                break;
                case 3: break;
            }
            break;
        }
    }
    return;
}
