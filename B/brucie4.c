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
    l_U481 = 225;
    l_U482 = 0.92800000;
    l_U483 = 0.01400000;
    l_U484 = 0.93000000;
    l_U485 = -0.02500000;
    l_U486 = -0.11600000;
    l_U487 = 0.90100000;
    l_U488 = 0.39500000;
    l_U489 = 0.55000000;
    l_U490 = 0.86700000;
    l_U491 = 0.39500000;
    l_U492 = 0.55000000;
    l_U493 = 0.88400000;
    l_U494 = 0.88500000;
    l_U495 = 0.86900000;
    l_U496 = 0.87100000;
    l_U497 = 0.31510000;
    l_U498 = 0.47800000;
    l_U499 = 0.00200000;
    l_U500 = 0.01000000;
    l_U501 = 0.83250000;
    l_U502 = 0.79800000;
    l_U503 = 0.80000000;
    l_U504 = 1.23000000;
    l_U505 = 0.83900000;
    l_U506 = 0.80400000;
    l_U507 = 0.31500000;
    l_U508 = 0.47800000;
    l_U509 = 0.86800000;
    l_U510 = 0.83300000;
    l_U511 = 0.39500000;
    l_U512 = 0.55000000;
    l_U633 = {0.00000000, 0.00000000, 0.00000000};
    l_U636 = 2.50000000;
    l_U637 = 0;
    l_U638 = 0;
    l_U639 = 0;
    l_U640 = 0;
    l_U641 = 0;
    l_U642 = 0;
    l_U643 = 0;
    l_U644 = 0;
    l_U645 = 1063483177;
    l_U709 = 1000;
    l_U719 = 0;
    l_U753 = -1;
    l_U754 = 0;
    l_U757 = 0;
    l_U759 = 0;
    l_U763 = 0;
    l_U766 = 0;
    l_U767 = 0;
    l_U768 = 1;
    l_U769 = 0;
    l_U776 = {2.50000000, 2.50000000, 2.50000000};
    l_U779 = 0;
    l_U816 = 0;
    l_U817 = 1;
    l_U886 = 0;
    l_U887 = 1;
    l_U896 = 0;
    l_U915 = 0;
    l_U932 = 0;
    l_U941 = 0;
    l_U946 = 0;
    l_U949 = 0;
    l_U978 = 0;
    l_U1024 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_669();
        sub_2779();
    }
    l_U681 = 0;
    while (true)
    {
        WAIT( 0 );
        sub_4613( l_U681, "Mission_prog..." );
        if (DOES_BLIP_EXIST( l_U752 ))
        {
            ;
        }
        switch (l_U681)
        {
            case 0:
            sub_4787();
            l_U681 = 1;
            break;
            case 1:
            sub_6145();
            break;
            case 2:
            sub_8845();
            break;
            case 3:
            sub_23708();
            break;
            case 5: break;
            case 6:
            if (NOT l_U822)
            {
                if (l_U768)
                {
                    sub_29167();
                    sub_29995( ref l_U759 );
                    sub_30659();
                    sub_33145();
                    sub_33892();
                    GET_GAME_TIMER( ref l_U761 );
                    l_U761 -= l_U762;
                    sub_34131( l_U761, l_U759 + 1, 6, l_U763, ProtectedGet(l_U519), 0 );
                }
                else
                {
                    sub_2779();
                }
            }
            break;
            case 11:
            sub_38127();
            break;
            case 12:
            sub_40264();
            break;
            case 13:
            sub_43759( "BR4_HOME", 2, 1, 3 );
            break;
            case 7:
            if (sub_59770())
            {
                sub_59999();
            }
            break;
            case 8:
            if (sub_61928())
            {
                if ((NOT l_U720) AND (l_U885))
                {
                    sub_43759( "BR4_WRECK2", 1, 0, 2 );
                }
                else
                {
                    sub_43759( "BR4_DESTR2", 0, 0, 2 );
                }
            }
            break;
            case 9:
            if (sub_62427())
            {
                sub_62757( "BR4_H2LONG", 1, 4 );
            }
            break;
            case 10:
            if (sub_65837())
            {
                sub_62757( "BR4_KILLS2", 0, 5 );
            }
            break;
            case 14:
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1349725314 );
            CLEAR_ONSCREEN_COUNTER( ref g_U64726 );
            if (DOES_BLIP_EXIST( l_U710 ))
            {
                REMOVE_BLIP( l_U710 );
            }
            if (DOES_BLIP_EXIST( l_U707 ))
            {
                REMOVE_BLIP( l_U707 );
            }
            if (DOES_BLIP_EXIST( l_U711 ))
            {
                REMOVE_BLIP( l_U711 );
            }
            break;
            case 15: break;
            case 16:
            if (DOES_BLIP_EXIST( l_U773 ))
            {
                REMOVE_BLIP( l_U773 );
            }
            l_U681 = 7;
            break;
        }
        if (NOT l_U1024)
        {
            if (l_U953 > 0)
            {
                if (IS_CHAR_INJURED( l_U700 ))
                {
                    sub_66393( 8, l_U700, 8 );
                    sub_59431( 1 );
                }
            }
        }
        if (NOT l_U1024)
        {
            if (l_U681 != 8)
            {
                if (l_U719)
                {
                    if (NOT (IS_VEH_DRIVEABLE( l_U751 )))
                    {
                        if (sub_41466())
                        {
                            if (NOT l_U884)
                            {
                                l_U681 = 8;
                            }
                        }
                    }
                    else if (l_U769)
                    {
                        if ((CHECK_STUCK_TIMER( l_U751, 0, 5000 )) || (CHECK_STUCK_TIMER( l_U751, 1, 40000 )))
                        {
                            if (sub_41466())
                            {
                                if (NOT l_U884)
                                {
                                    l_U681 = 8;
                                }
                            }
                        }
                    }
                    else if (IS_CHAR_IN_CAR( sub_4962(), l_U751 ))
                    {
                        l_U769 = 1;
                    };;;
                }
            }
        }
    }
    return;
}

void sub_669()
{
    sub_678();
    return;
}

void sub_678()
{
    int iVar2;

    iVar2 = 8;
    sub_692( iVar2 );
    sub_1868( iVar2 );
    return;
}

void sub_692(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_736();
        sub_897();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1005();
            sub_1044();
        }
    }
    sub_1120();
    sub_1221();
    uVar5 = sub_1334( uParam0 );
    sub_1775( uVar5, 0 );
    return;
}

void sub_736()
{
    sub_750( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_850();
    }
    return;
}

void sub_750(int iParam0)
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

void sub_850()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_897()
{
    sub_906();
    return;
}

void sub_906()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1005()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1044()
{
    sub_1053();
    return;
}

void sub_1053()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1120()
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

void sub_1221()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1243();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1243()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1334(unknown uParam0)
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
    sub_1733( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1733(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1775(int iParam0, boolean bParam1)
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

void sub_1868(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1877();
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
        sub_2652();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1877()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1915( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1915( 1, g_U569[I] )) != 0)
            {
                sub_2201( I );
            }
        }
    }
    if (NOT sub_2367())
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

int sub_1915(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2201(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2286( g_U569 - 1 );
    return;
}

void sub_2286(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2367()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1915( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2652()
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

void sub_2779()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1349725314 );
    if (DOES_CHAR_EXIST( l_U700 ))
    {
        sub_2818( 8 );
    }
    sub_3522( 0 );
    ENABLE_CHASE_AUDIO( 0 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    g_U64984 = 0;
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1573.83300000, 657.61870000, 0.00000000, 1645.17600000, 669.56250000, 40.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1642.28800000, 620.76320000, 0.00000000, 1655.84800000, 724.97260000, 40.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1565.35100000, 546.19230000, 0.00000000, 1576.75500000, 740.08310000, 40.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1416.88700000, 766.25140000, 0.00000000, 1568.40500000, 782.36720000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1564.75700000, 780.12520000, 0.00000000, 1734.39900000, 851.25620000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1567.68100000, 741.60680000, 0.00000000, 1574.59900000, 780.25540000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1321.87300000, 919.21420000, 0.00000000, 1374.99700000, 970.19130000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1175.25100000, 512.49830000, 0.00000000, 1359.54100000, 512.53960000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1193.33900000, 503.00200000, 0.00000000, 1333.46600000, 516.04470000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1260.31100000, 509.80820000, 0.00000000, 1267.72600000, 582.59940000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1297.21100000, 390.87790000, 0.00000000, 1302.78900000, 504.11440000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1223.64200000, 390.66180000, 0.00000000, 1229.75900000, 505.13460000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U688._fU0 - 10.00000000, l_U688._fU4 - 10.00000000, l_U688._fU8 - 10.00000000, l_U688._fU0 + 10.00000000, l_U688._fU4 + 10.00000000, l_U688._fU8 + 10.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1091.87000000, -31.89750000, 0.00000000, 1100.39600000, 81.41570000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1101.23200000, 13.61170000, 0.00000000, 1187.49400000, 18.33670000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 977.41240000, -9.63920000, 0.00000000, 1094.03200000, -4.93070000, 100.00000000 );
    DISPLAY_AREA_NAME( 1 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    DONT_SUPPRESS_CAR_MODEL( 1063483177 );
    DONT_SUPPRESS_CAR_MODEL( -1896659641 );
    DONT_SUPPRESS_CAR_MODEL( 1821991593 );
    DONT_SUPPRESS_CAR_MODEL( 418536135 );
    sub_4404();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2818(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2829( uParam0 ) );
    return;
}

int sub_2829(unknown uParam0)
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
    sub_1733( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_3522(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_4404()
{
    if (l_U644)
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
    l_U642 = 0;
    l_U641 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_4613(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4787()
{
    unknown uVar2;
    unknown uVar3;

    LOAD_ADDITIONAL_TEXT( "BRKRCE", 0 );
    LOAD_ADDITIONAL_TEXT( "BR4BAUD", 6 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    sub_4848( "BR4AUD" );
    sub_5011( 0, sub_4962(), "NIKO", 0 );
    SET_CAM_BEHIND_PED( sub_4962() );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U718 );
    SUPPRESS_CAR_MODEL( 1063483177 );
    SUPPRESS_CAR_MODEL( -1896659641 );
    SUPPRESS_CAR_MODEL( 1821991593 );
    SUPPRESS_CAR_MODEL( 418536135 );
    LOAD_SCENE( 776.05900000, 127.53200000, 6.00580000 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4962(), 0 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (DOES_VEHICLE_EXIST( uVar2 ))
    {
        if (NOT (IS_CAR_DEAD( uVar2 )))
        {
            if (LOCATE_CAR_3D( uVar2, 860.11610000, -121.78940000, 4.90530000, 4.00000000, 4.00000000, 3.00000000, 0 ))
            {
                GET_CAR_MODEL( uVar2, ref uVar3 );
                SET_CAR_AS_MISSION_CAR( uVar2 );
                SET_CAR_COORDINATES( uVar2, 857.58130000, -111.17720000, 4.83970000 );
                SET_CAR_HEADING( uVar2, 2.34920000 );
                if (NOT (IS_THIS_MODEL_A_BOAT( uVar3 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                }
                APPLY_FORCE_TO_CAR( uVar2, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
            }
        }
    }
    l_U760 = 13;
    l_U745[0] = 35.00000000;
    l_U745[1] = 35.00000000;
    l_U745[2] = 35.00000000;
    l_U745[3] = 35.00000000;
    l_U745[4] = 35.00000000;
    l_U739[0] = -1;
    l_U739[1] = -1;
    l_U739[2] = -1;
    l_U739[3] = -1;
    l_U739[4] = -1;
    l_U691 = {774.58430000, 123.71430000, 5.88100000};
    SWITCH_ROADS_OFF( l_U629._fU0 - 10.00000000, l_U629._fU4 - 10.00000000, l_U629._fU8 - 10.00000000, l_U629._fU0 + 10.00000000, l_U629._fU4 + 10.00000000, l_U629._fU8 + 10.00000000 );
    SWITCH_ROADS_OFF( 1568.17300000, 425.51030000, 0.00000000, 1570.98800000, 667.56920000, 100.00000000 );
    SWITCH_ROADS_OFF( 1568.17300000, 425.51030000, 0.00000000, 1570.98800000, 667.56920000, 100.00000000 );
    SWITCH_ROADS_OFF( 1573.03100000, 660.57040000, 0.00000000, 1645.01400000, 666.41690000, 100.00000000 );
    SWITCH_ROADS_OFF( 1573.58300000, 461.76760000, 0.00000000, 1642.78300000, 470.05980000, 100.00000000 );
    SWITCH_ROADS_OFF( 1321.87300000, 919.21420000, 0.00000000, 1374.99700000, 970.19130000, 100.00000000 );
    CLEAR_AREA( 1321.87300000, 919.21420000, 12.62520000, 50.00000000, 1 );
    SWITCH_ROADS_OFF( 1175.25100000, 512.49830000, 0.00000000, 1359.54100000, 512.53960000, 100.00000000 );
    SWITCH_ROADS_OFF( 1193.33900000, 503.00200000, 0.00000000, 1333.46600000, 516.04470000, 100.00000000 );
    SWITCH_ROADS_OFF( 1260.31100000, 509.80820000, 0.00000000, 1267.72600000, 582.59940000, 100.00000000 );
    SWITCH_ROADS_OFF( 1297.21100000, 390.87790000, 0.00000000, 1302.78900000, 504.11440000, 100.00000000 );
    SWITCH_ROADS_OFF( 1223.64200000, 390.66180000, 0.00000000, 1229.75900000, 505.13460000, 100.00000000 );
    CLEAR_AREA( 1175.25100000, 512.53960000, 27.87720000, 50.00000000, 1 );
    return;
}

void sub_4848(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4867();
    return;
}

void sub_4867()
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

void sub_4962()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5011(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5095( "\n PED NUMBER ", uParam0 );
    sub_5135( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5095(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5135(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6145()
{
    if (NOT l_U1016)
    {
        if (IS_SCREEN_FADED_OUT())
        {
            if (DOES_OBJECT_EXIST( g_U9167 ))
            {
                SET_OBJECT_VISIBLE( g_U9167, 0 );
                l_U1016 = 1;
            }
        }
    }
    switch (l_U1015)
    {
        case 0:
        if (sub_6249())
        {
            if (g_U9893._fU24)
            {
                SET_PLAYER_CONTROL( sub_6345(), 0 );
                START_CUTSCENE_NOW( "BR_4" );
                l_U1015 = 1;
            }
            else
            {
                l_U1015 = 2;
            }
        }
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            CLEAR_AREA( 860.11610000, -121.78940000, 4.90620000, 15.00000000, 1 );
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            l_U1015 = 2;
            CLEAR_NAMED_CUTSCENE( "BR_4" );
        }
        break;
        case 2:
        REQUEST_MODEL( 418536135 );
        REQUEST_MODEL( 1821991593 );
        REQUEST_MODEL( -1896659641 );
        sub_6549( 8 );
        REQUEST_MODEL( l_U645 );
        REQUEST_ANIMS( "missbrucie4" );
        while (((((((NOT (HAS_MODEL_LOADED( -1896659641 ))) || (NOT (HAS_MODEL_LOADED( 1821991593 )))) || (NOT (HAS_MODEL_LOADED( 418536135 )))) || (NOT (HAS_MODEL_LOADED( l_U645 )))) || (NOT (sub_6669( 8 )))) || (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\RP10_EXOTIC_IMPORTS" )))) || (NOT (HAVE_ANIMS_LOADED( "missbrucie4" ))))
        {
            WAIT( 0 );
        }
        if (DOES_OBJECT_EXIST( g_U9167 ))
        {
            SET_OBJECT_VISIBLE( g_U9167, 1 );
        }
        FORCE_WEATHER( 1 );
        sub_6827();
        LOAD_SCENE( 860.11610000, -121.78940000, 4.90530000 );
        CLEAR_AREA_OF_CHARS( 860.11610000, -121.78940000, 4.90530000, 4.00000000 );
        SET_CHAR_COORDINATES( sub_4962(), 860.11610000, -121.78940000, 4.90530000 );
        SET_CHAR_HEADING( sub_4962(), 100.00000000 );
        SET_CAM_BEHIND_PED( sub_4962() );
        sub_6973( 0 );
        SET_GROUP_MEMBER( sub_8739(), l_U700 );
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( sub_6345(), 1 );
        l_U1015 = 3;
        l_U681 = 2;
        break;
    }
    return;
}

void sub_6249()
{
    return sub_6260( 1, 1 );
}

int sub_6260(boolean bParam0, unknown uParam1)
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

void sub_6345()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_6549(unknown uParam0)
{
    REQUEST_MODEL( sub_2829( uParam0 ) );
    return;
}

void sub_6669(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_2829( uParam0 ) );
}

void sub_6827()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_6973(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_7025( 8, ref l_U700, 860.10160000, -123.44040000, 4.87150000, 317.69790000 );
        SET_CHAR_DECISION_MAKER( l_U700, l_U718 );
        sub_5011( 1, l_U700, "BRUCIE", 0 );
        SET_PED_DIES_WHEN_INJURED( l_U700, 1 );
        break;
        default:
    }
    return;
}

void sub_7025(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_2829( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_7075( uParam0, (uParam1^) );
    return;
}

void sub_7075(unknown uParam0, unknown uParam1)
{
    sub_7087( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_7087(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_7181( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_7725( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_7181(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_7725(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_7181( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7181( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7181( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_7181( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_7181( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_7181( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7181( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7181( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_7181( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7181( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_7181( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7181( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_7181( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_8739()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_8845()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;

    if (NOT (IS_CHAR_DEAD( l_U700 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U700 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U700, 1 );
        }
    }
    switch (l_U953)
    {
        case 0:
        ADD_BLIP_FOR_COORD( 1746.10000000, 373.41030000, 21.83500000, ref l_U708 );
        SET_ROUTE( l_U708, 1 );
        CHANGE_BLIP_COLOUR( l_U708, 3 );
        sub_9000( "BR4_NOCAR", ref l_U780, 6, 1 );
        l_U953 = 1;
        break;
        case 1:
        if (NOT l_U652[17])
        {
            if (NOT (sub_9998( l_U780 )))
            {
                PRINT_NOW( "BRK_17", 7500, 1 );
                l_U652[17] = 1;
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U700 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4962(), l_U700, 30.00000000, 30.00000000, 20.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U700, sub_8739() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4962(), l_U700, 12.00000000, 12.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U701 ))
                        {
                            REMOVE_BLIP( l_U701 );
                        }
                        SET_GROUP_MEMBER( sub_8739(), l_U700 );
                        CLEAR_PRINTS();
                    }
                }
                else if (NOT l_U978)
                {
                    if (IS_PED_JACKING( sub_4962() ))
                    {
                        SAY_AMBIENT_SPEECH( l_U700, "NIKO_STEALS_VEHICLE", 1, 1, 0 );
                        l_U978 = 1;
                    }
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4962() ))
                {
                    if (l_U978)
                    {
                        l_U978 = 0;
                    }
                    GET_CAR_CHAR_IS_USING( sub_4962(), ref l_U687 );
                    if (l_U975)
                    {
                        l_U975 = 0;
                    }
                    if (l_U687 == l_U751)
                    {
                        OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
                        DONT_ABORT_CAR_CONVERSATIONS( 1, 1 );
                        SET_CAR_DENSITY_MULTIPLIER( 0.01000000 );
                        if (DOES_BLIP_EXIST( l_U708 ))
                        {
                            REMOVE_BLIP( l_U708 );
                        }
                        if (DOES_BLIP_EXIST( l_U707 ))
                        {
                            REMOVE_BLIP( l_U707 );
                        }
                        CLEAR_THIS_PRINT( "BRK_17" );
                        if (IS_CHAR_SITTING_IN_CAR( l_U700, l_U687 ))
                        {
                            l_U681 = 3;
                            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U700, 0 );
                            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U700, 1 );
                            if (IS_GROUP_MEMBER( l_U700, sub_8739() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U700 );
                            }
                            CLEAR_CHAR_TASKS( l_U700 );
                            sub_10725( ref l_U780, 0 );
                        }
                    }
                    else if (NOT l_U719)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U708 )))
                        {
                            ADD_BLIP_FOR_COORD( 1746.10000000, 373.41030000, 21.83500000, ref l_U708 );
                            SET_ROUTE( l_U708, 1 );
                            CHANGE_BLIP_COLOUR( l_U708, 3 );
                            CLEAR_PRINTS();
                            PRINT_NOW( "BRK_17", 7500, 1 );
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U707 )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U751 )))
                        {
                            ADD_BLIP_FOR_CAR( l_U751, ref l_U707 );
                            if (NOT l_U976)
                            {
                                SET_ROUTE( l_U707, 1 );
                            }
                            CHANGE_BLIP_COLOUR( l_U707, 3 );
                            CLEAR_PRINTS();
                            PRINT_NOW( "BRK_17", 7500, 1 );
                        }
                    }
                    if (IS_CHAR_SITTING_IN_CAR( l_U700, l_U687 ))
                    {
                        if (NOT l_U981)
                        {
                            GET_GAME_TIMER( ref l_U979 );
                            l_U981 = 1;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U980 );
                            if ((l_U980 - l_U979) > 2500)
                            {
                                if (NOT (sub_9998( l_U960 )))
                                {
                                    if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BRK_17", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                                    {
                                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                        {
                                            if (NOT (sub_9998( l_U954 )))
                                            {
                                                if (NOT l_U972)
                                                {
                                                    if (g_U64727 == 0)
                                                    {
                                                        sub_9000( "BR4_B1AV1", ref l_U954, 6, 1 );
                                                        l_U972 = 1;
                                                        g_U64727++;
                                                    }
                                                    else
                                                    {
                                                        sub_9023( "BR4_B1AV2", "BR4BAUD", ref l_U954, 6, 1 );
                                                        l_U972 = 1;
                                                    }
                                                }
                                                else if (sub_11375( l_U954 ))
                                                {
                                                    if (g_U64727 == 1)
                                                    {
                                                        sub_11433( "BR4_B1AV1", ref l_U954, 6, 1 );
                                                    }
                                                    else
                                                    {
                                                        sub_11456( "BR4_B1AV2", "BR4BAUD", ref l_U954, 6, 1 );
                                                    }
                                                }
                                                else if (NOT l_U973)
                                                {
                                                    if (g_U64728 == 0)
                                                    {
                                                        sub_9000( "BR4_CALL", ref l_U960, 6, 1 );
                                                        g_U64728++;
                                                        l_U973 = 1;
                                                    }
                                                    else if (g_U64728 >= 1)
                                                    {
                                                        sub_9023( "BR4_BIBV1", "BR4BAUD", ref l_U960, 6, 1 );
                                                        g_U64728++;
                                                        l_U973 = 1;
                                                    }
                                                }
                                                else if (sub_11375( l_U960 ))
                                                {
                                                    if (g_U64728 == 1)
                                                    {
                                                        if (l_U974)
                                                        {
                                                            TASK_USE_MOBILE_PHONE( l_U700, 1 );
                                                            sub_11813( "Getting out phone" );
                                                        }
                                                        sub_11433( "BR4_CALL", ref l_U960, 6, 1 );
                                                    }
                                                    else if (l_U974)
                                                    {
                                                        TASK_USE_MOBILE_PHONE( l_U700, 1 );
                                                        sub_11813( "Getting out phone" );
                                                    }
                                                    sub_11456( "BR4_BIBV1", "BR4BAUD", ref l_U960, 6, 1 );;
                                                };;;;
                                            }
                                        }
                                    }
                                }
                                else if (NOT l_U680)
                                {
                                    if (NOT l_U974)
                                    {
                                        TASK_USE_MOBILE_PHONE( l_U700, 1 );
                                        sub_11813( "Getting out phone" );
                                        l_U974 = 1;
                                    }
                                    else
                                    {
                                        iVar2 = sub_12022( l_U960 );
                                        sub_4613( iVar2, "Checkin iCurrentStevPhoneLine..." );
                                        if (iVar2 > sub_12136())
                                        {
                                            TASK_USE_MOBILE_PHONE( l_U700, 0 );
                                            l_U974 = 0;
                                            l_U680 = 1;
                                        }
                                    }
                                }
                            }
                        }
                        if (NOT l_U719)
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U708 )))
                            {
                                ADD_BLIP_FOR_COORD( 1746.10000000, 373.41030000, 21.83500000, ref l_U708 );
                                SET_ROUTE( l_U708, 1 );
                                CHANGE_BLIP_COLOUR( l_U708, 3 );
                                CLEAR_PRINTS();
                                PRINT_NOW( "BRK_17", 7500, 1 );
                            }
                        }
                        else if (NOT (DOES_BLIP_EXIST( l_U707 )))
                        {
                            if (NOT (IS_CAR_DEAD( l_U751 )))
                            {
                                ADD_BLIP_FOR_CAR( l_U751, ref l_U707 );
                                if (NOT l_U976)
                                {
                                    SET_ROUTE( l_U707, 1 );
                                }
                                CHANGE_BLIP_COLOUR( l_U707, 3 );
                                CLEAR_PRINTS();
                                PRINT_NOW( "BRK_17", 7500, 1 );
                            }
                        }
                        if (DOES_BLIP_EXIST( l_U701 ))
                        {
                            REMOVE_BLIP( l_U701 );
                        }
                    }
                    else if (sub_9998( l_U954 ))
                    {
                        sub_12496( ref l_U954 );
                    };;;
                }
                else if (sub_9998( l_U954 ))
                {
                    sub_12496( ref l_U954 );
                }
                if (sub_9998( l_U960 ))
                {
                    sub_11813( "Speech  playing" );
                    if (l_U974)
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4962(), l_U700, 10.00000000, 10.00000000, 10.00000000, 0 )))
                        {
                            sub_12496( ref l_U960 );
                        }
                    }
                    else
                    {
                        sub_12496( ref l_U960 );
                    }
                }
                else
                {
                    sub_11813( "Speech not playing" );
                }
                if (NOT l_U975)
                {
                    if (l_U974)
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4962(), l_U700, 10.00000000, 10.00000000, 10.00000000, 0 )))
                        {
                            sub_11813( "Trying to put away phone...." );
                            GET_SCRIPT_TASK_STATUS( l_U700, 53, ref iVar6 );
                            if (iVar6 == 1)
                            {
                                TASK_USE_MOBILE_PHONE( l_U700, 0 );
                                sub_11813( "Puting away phone" );
                                l_U975 = 1;
                            }
                            else
                            {
                                sub_11813( "phoneStatus != PERFORMING_TASK" );
                            }
                        }
                        else
                        {
                            iVar2 = sub_12022( l_U960 );
                            sub_4613( iVar2, "Checkin iCurrentStevPhoneLine..." );
                            if (iVar2 > sub_12136())
                            {
                                TASK_USE_MOBILE_PHONE( l_U700, 0 );
                                l_U974 = 0;
                                l_U680 = 1;
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U700 )))
                {
                    if (sub_9998( l_U960 ))
                    {
                        if (l_U974)
                        {
                            TASK_USE_MOBILE_PHONE( l_U700, 0 );
                        }
                        sub_13420( ref l_U960 );
                    }
                }
                else if (IS_CHAR_IN_ANY_CAR( sub_4962() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4962(), ref uVar7 );
                    GET_DRIVER_OF_CAR( uVar7, ref iVar8 );
                    if (iVar8 != sub_4962())
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4962(), 1731.27400000, 365.56720000, 22.11440000, 20.00000000, 20.00000000, 3.00000000, 0 ))
                        {
                            if (sub_9998( l_U960 ))
                            {
                                if (l_U974)
                                {
                                    TASK_USE_MOBILE_PHONE( l_U700, 0 );
                                }
                                sub_13420( ref l_U960 );
                            }
                        }
                    }
                }
                if (NOT l_U719)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U708 )))
                    {
                        ADD_BLIP_FOR_COORD( 1746.10000000, 373.41030000, 21.83500000, ref l_U708 );
                        SET_ROUTE( l_U708, 1 );
                        CHANGE_BLIP_COLOUR( l_U708, 3 );
                        CLEAR_PRINTS();
                        PRINT_NOW( "BRK_17", 7500, 1 );
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U707 )))
                {
                    if (NOT (IS_CAR_DEAD( l_U751 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U751, ref l_U707 );
                        if (NOT l_U976)
                        {
                            SET_ROUTE( l_U707, 1 );
                        }
                        CHANGE_BLIP_COLOUR( l_U707, 3 );
                        CLEAR_PRINTS();
                        PRINT_NOW( "BRK_17", 7500, 1 );
                    }
                }
                if (DOES_BLIP_EXIST( l_U701 ))
                {
                    REMOVE_BLIP( l_U701 );
                };;;
                if (NOT (DOES_BLIP_EXIST( l_U701 )))
                {
                    if (DOES_VEHICLE_EXIST( l_U751 ))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_4962(), 1746.10000000, 373.41030000, 21.83500000, 8.00000000, 8.00000000, 2.00000000, 0 ))
                        {
                            if (NOT (IS_CAR_DEAD( l_U751 )))
                            {
                                if (LOCATE_CAR_3D( l_U751, 1746.10000000, 373.41030000, 21.83500000, 8.00000000, 8.00000000, 2.00000000, 0 ))
                                {
                                    if (NOT l_U678)
                                    {
                                        sub_10725( ref l_U960, 0 );
                                        sub_9000( "BR4_ARR", ref l_U966, 7, 1 );
                                        l_U678 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( l_U700 );
                if (NOT l_U719)
                {
                    if (DOES_BLIP_EXIST( l_U708 ))
                    {
                        REMOVE_BLIP( l_U708 );
                    }
                }
                else if (DOES_BLIP_EXIST( l_U707 ))
                {
                    REMOVE_BLIP( l_U707 );
                }
                if (DOES_BLIP_EXIST( l_U701 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U700 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4962(), l_U700, 10.00000000, 10.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U701 );
                            SET_GROUP_MEMBER( sub_8739(), l_U700 );
                            CLEAR_PRINTS();
                        }
                    }
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        ;
                    }
                }
                else
                {
                    ADD_BLIP_FOR_CHAR( l_U700, ref l_U701 );
                    CHANGE_BLIP_COLOUR( l_U701, 3 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "BRK_21", 7500, 1 );
                }
            }
            if (IS_GROUP_MEMBER( l_U700, sub_8739() ))
            {
                ;
            }
        }
        break;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4962(), 1746.10000000, 373.41030000, 21.83500000, 2000.00000000, 2000.00000000, 2000.00000000, 0 ))
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U751 )))
        {
            CLEAR_AREA( 1746.10000000, 373.41030000, 21.83500000, 20.00000000, 1 );
            CREATE_CAR( l_U645, 1746.10000000, 373.41030000, 21.83500000, ref l_U751, 1 );
            if (NOT SECUROM_SPOT_CHECK2())
            {
                LOCK_CAR_DOORS( l_U751, 2 );
            }
            SET_VEH_HAS_STRONG_AXLES( l_U751, 1 );
            CHANGE_CAR_COLOUR( l_U751, 132, 132 );
            SET_EXTRA_CAR_COLOURS( l_U751, 127, 0 );
            SET_CAR_HEADING( l_U751, 91.07310000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U751 );
            ADD_UPSIDEDOWN_CAR_CHECK( l_U751 );
            if (DOES_BLIP_EXIST( l_U708 ))
            {
                REMOVE_BLIP( l_U708 );
                ADD_BLIP_FOR_CAR( l_U751, ref l_U707 );
                if (NOT l_U976)
                {
                    SET_ROUTE( l_U707, 1 );
                }
                CHANGE_BLIP_COLOUR( l_U707, 3 );
            }
            l_U719 = 1;
        }
        else if (NOT l_U976)
        {
            if (NOT (IS_CAR_DEAD( l_U751 )))
            {
                if (IS_CHAR_IN_CAR( sub_4962(), l_U751 ))
                {
                    l_U976 = 1;
                    if (l_U977)
                    {
                        FREEZE_CAR_POSITION( l_U751, 0 );
                    }
                }
                else
                {
                    GET_CAR_COORDINATES( l_U751, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    if (NOT l_U977)
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( sub_4962(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 50.00000000, 50.00000000, 50.00000000, 0 ))
                        {
                            FREEZE_CAR_POSITION( l_U751, 1 );
                            l_U977 = 1;
                        }
                    }
                    else if (LOCATE_CHAR_ON_FOOT_3D( sub_4962(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 50.00000000, 50.00000000, 50.00000000, 0 ))
                    {
                        FREEZE_CAR_POSITION( l_U751, 0 );
                        l_U977 = 0;
                    }
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_4962(), 1265.49800000, 504.48640000, 26.96780000, 150.00000000, 150.00000000, 150.00000000, 0 ))
        {
            if (sub_15384())
            {
                if ((sub_23409()) || (sub_23584()))
                {
                    sub_10725( ref l_U780, 0 );
                    l_U681 = 10;
                }
            }
        };;;
    }
    return;
}

void sub_9000(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9023( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_9023(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9077( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_9077(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9099( iParam1 )))
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
    sub_9791( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_9099(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9176( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_9176( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_9176( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_9176(unknown uParam0)
{
    return;
}

void sub_9791(int iParam0, int iParam1)
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

int sub_9998(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_9176( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9176( "\n speech is not playing" );
    }
    return 0;
}

void sub_10725(int iParam0, unknown uParam1)
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

void sub_11375(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_11433(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_11456( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_11456(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_9077( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_11813(unknown uParam0)
{
    return;
}

void sub_12022(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_9998( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_12136()
{
    unknown Result;

    if (g_U64728 == 1)
    {
        return 9;
    }
    else
    {
        return 3;
    }
    return Result;
}

int sub_12496(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_9176( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_9176( "\n CONVERSATION PAUSED AT LINE " );
            sub_12636( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_9176( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_9176( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_9176( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_12636(unknown uParam0)
{
    return;
}

int sub_13420(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_9176( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_9176( "\n CONVERSATION PAUSED AT LINE " );
            sub_12636( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_9176( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_9176( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_9176( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_15384()
{
    unknown uVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT l_U915)
    {
        sub_15409( l_U760 );
        if (NOT l_U766)
        {
            l_U766 = 1;
        }
        else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
        {
            uVar2 = sub_22015( l_U629, l_U632 );
            CLEAR_AREA( 819.48600000, 1479.32800000, 13.39460000, 100.00000000, 1 );
            CLEAR_AREA( 1573.01400000, 700.86690000, 26.90450000, 200.00000000, 1 );
            SWITCH_ROADS_OFF( 1577.06000000, 731.78110000, 0.00000000, 1648.80300000, 743.34440000, 100.00000000 );
            SWITCH_ROADS_OFF( 1416.88700000, 766.25140000, 0.00000000, 1568.40500000, 782.36720000, 100.00000000 );
            SWITCH_ROADS_OFF( 1564.75700000, 780.12520000, 0.00000000, 1734.39900000, 851.25620000, 100.00000000 );
            SWITCH_ROADS_OFF( 1567.68100000, 741.60680000, 0.00000000, 1574.59900000, 780.25540000, 100.00000000 );
            l_U646[0] = l_U513[0];
            l_U646[1] = l_U513[1];
            l_U646[2] = l_U513[2];
            l_U646[3] = l_U513[3];
            l_U646[4] = 418536135;
            for ( I = 0; I < 5; I++ )
            {
                uVar4 = {sub_22444( I, uVar2, 0 )};
                CREATE_CAR( l_U646[I], uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U733[I], 1 );
                SET_CAR_HEADING( l_U733[I], l_U632 );
                SET_CAR_COORDINATES( l_U733[I], uVar4._fU0, uVar4._fU4, uVar4._fU8 );
                SET_CAR_ON_GROUND_PROPERLY( l_U733[I] );
                CREATE_RANDOM_CHAR_AS_DRIVER( l_U733[I], ref l_U721[I] );
                SET_CHAR_AS_MISSION_CHAR( l_U721[I] );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U721[I], 1 );
                SET_CHAR_DECISION_MAKER( l_U721[I], l_U718 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U721[I], 1 );
                SET_CHAR_DECISION_MAKER( l_U721[I], l_U718 );
                TASK_CAR_TEMP_ACTION( l_U721[I], l_U733[I], 1, 999999 );
                LOCK_CAR_DOORS( l_U733[I], 2 );
                SET_BLIP_THROTTLE_RANDOMLY( l_U733[I], 1 );
            }
            CHANGE_CAR_COLOUR( l_U733[0], 89, 0 );
            SET_CAR_COLOUR_COMBINATION( l_U733[1], 1 );
            CHANGE_CAR_COLOUR( l_U733[2], 63, 0 );
            SET_CAR_COLOUR_COMBINATION( l_U733[3], 1 );
            SET_CAR_COLOUR_COMBINATION( l_U733[4], 6 );
            l_U770 = {sub_22444( 5, uVar2, 0 )};
            SWITCH_ROADS_OFF( l_U629._fU0 - 10.00000000, l_U629._fU4 - 10.00000000, l_U629._fU8 - 10.00000000, l_U629._fU0 + 10.00000000, l_U629._fU4 + 10.00000000, l_U629._fU8 + 10.00000000 );
            DELETE_OBJECT( ref uVar2 );
            l_U915 = 1;
        }
        else
        {
            sub_11813( "Waiting to create Char" );
        }
    }
    return l_U915;
}

void sub_15409(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        l_U629 = {819.48600000, 1479.32800000, 13.39460000};
        l_U632 = 0.00000000;
        l_U520[0] = {769.82470000, 1557.60000000, 20.14630000};
        l_U520[1] = {706.01180000, 1661.45900000, 22.66080000};
        l_U520[2] = {804.78360000, 1750.77200000, 32.07240000};
        l_U520[3] = {840.74150000, 1848.28300000, 43.89900000};
        l_U520[4] = {685.09310000, 1971.84200000, 34.03350000};
        l_U520[5] = {502.67810000, 1972.51200000, 22.38580000};
        l_U520[6] = {349.73310000, 1941.03500000, 19.06760000};
        l_U520[7] = {338.00910000, 1755.63000000, 16.09750000};
        l_U520[8] = {384.75030000, 1584.24100000, 15.30070000};
        l_U520[9] = {471.66060000, 1418.31400000, 9.68810000};
        l_U520[10] = {657.66060000, 1359.75300000, 13.28940000};
        l_U520[11] = {807.82450000, 1374.82800000, 13.25580000};
        l_U520[12] = {819.48600000, 1479.32800000, 13.29460000};
        ProtectedSet(l_U518, 13);
        ProtectedSet(l_U519, 3);
        break;
        case 1:
        l_U629 = {446.76570000, 1459.62100000, 9.18706400};
        l_U632 = 29.72610000;
        l_U520[0] = {388.95110000, 1573.75400000, 15.47200000};
        l_U520[1] = {348.33200000, 1666.39500000, 15.16100000};
        l_U520[2] = {383.27840000, 1777.25200000, 19.40960000};
        l_U520[3] = {471.68590000, 1688.83200000, 16.43080000};
        l_U520[4] = {573.46940000, 1636.13900000, 28.47160000};
        l_U520[5] = {630.42720000, 1535.24400000, 19.54680000};
        l_U520[6] = {741.44070000, 1458.65300000, 13.39630000};
        l_U520[7] = {683.74060000, 1359.34300000, 13.42690000};
        l_U520[8] = {509.14200000, 1363.52000000, 11.12040000};
        l_U520[9] = {446.76560000, 1459.62100000, 9.28706000};
        ProtectedSet(l_U518, 10);
        ProtectedSet(l_U519, 2);
        break;
        case 2:
        l_U629 = {-44.69510000, -323.41980000, 13.82180000};
        l_U632 = 0.00000000;
        l_U520[0] = {-106.32710000, -124.08490000, 13.87190000};
        l_U520[1] = {-160.15020000, 81.36440000, 13.81570000};
        l_U520[2] = {-219.65490000, 320.47350000, 13.86680000};
        l_U520[3] = {-260.49720000, 489.86650000, 13.86570000};
        l_U520[4] = {-364.49110000, 634.13510000, 13.77180000};
        l_U520[5] = {-364.90720000, 847.38800000, 13.77090000};
        l_U520[6] = {-365.98020000, 1102.76200000, 13.77400000};
        l_U520[7] = {-511.01690000, 1167.66500000, 14.33440000};
        l_U520[8] = {-652.27900000, 1115.75600000, 14.71100000};
        l_U520[9] = {-658.26490000, 915.36740000, 5.71680000};
        l_U520[10] = {-584.44710000, 725.89300000, 5.71300000};
        l_U520[11] = {-559.80020000, 514.36840000, 5.61780000};
        l_U520[12] = {-547.57910000, 264.83880000, 5.71870000};
        l_U520[13] = {-520.46680000, 94.49330000, 6.80550000};
        l_U520[14] = {-520.99650000, -87.22980000, 6.93560000};
        l_U520[15] = {-493.69560000, -279.50840000, 6.99530000};
        l_U520[16] = {-334.82820000, -412.34960000, 3.96740000};
        l_U520[17] = {-236.00810000, -591.65910000, 3.98790000};
        l_U520[18] = {-237.31590000, -764.15630000, 3.81860000};
        l_U520[19] = {-50.46370000, -754.44310000, 5.20940000};
        l_U520[20] = {-50.83940000, -590.53800000, 13.82180000};
        l_U520[21] = {-50.74010000, -323.54160000, 13.82180000};
        ProtectedSet(l_U518, 22);
        ProtectedSet(l_U519, 3);
        break;
        case 3:
        l_U629 = {1042.79800000, 168.79220000, 31.10000000};
        l_U632 = 327.60940000;
        l_U520[0] = {1037.53400000, 364.98420000, 28.13020000};
        l_U520[1] = {844.30650000, 459.27910000, 12.64360000};
        l_U520[2] = {813.75400000, 224.67010000, 5.19830000};
        l_U520[3] = {802.10360000, -2.24190000, 5.04270000};
        l_U520[4] = {876.38030000, -222.27800000, 5.70380000};
        l_U520[5] = {772.19770000, -390.71460000, 5.45970000};
        l_U520[6] = {848.76920000, -569.55270000, 12.77700000};
        l_U520[7] = {1092.25900000, -561.32110000, 12.50360000};
        l_U520[8] = {1008.29200000, -342.39850000, 18.25250000};
        l_U520[9] = {966.67960000, -98.91030000, 23.14290000};
        l_U520[10] = {1034.82100000, 167.03170000, 31.05430000};
        ProtectedSet(l_U518, 11);
        ProtectedSet(l_U519, 2);
        break;
        case 4:
        l_U632 = 138.14790000;
        l_U629 = {1429.23200000, -25.44190000, 23.15300000};
        l_U520[0] = {1389.03400000, -121.81070000, 20.85890000};
        l_U520[1] = {1303.14400000, -142.11510000, 25.62870000};
        l_U520[2] = {1277.82100000, -276.47050000, 23.29610000};
        l_U520[3] = {1214.99000000, -303.98240000, 20.39000000};
        l_U520[4] = {1191.50900000, -440.22500000, 14.59240000};
        l_U520[5] = {1191.83700000, -536.52950000, 13.00090000};
        l_U520[6] = {1129.33800000, -568.33790000, 12.60900000};
        l_U520[7] = {1091.27500000, -445.96450000, 12.58690000};
        l_U520[8] = {1124.70400000, -337.56700000, 17.08060000};
        l_U520[9] = {1127.57400000, -194.99610000, 22.92120000};
        l_U520[10] = {1125.02900000, -86.12200000, 35.30460000};
        l_U520[11] = {1265.14200000, -54.20490000, 27.40560000};
        l_U520[12] = {1341.20100000, 67.01100000, 31.01500000};
        l_U520[13] = {1421.44000000, 93.50120000, 24.91400000};
        l_U520[14] = {1488.12200000, 62.69700000, 24.01050000};
        l_U520[15] = {1429.23200000, -25.44190000, 23.15300000};
        ProtectedSet(l_U518, 16);
        ProtectedSet(l_U519, 3);
        break;
        case 5:
        l_U632 = 210.00000000;
        l_U629 = {-597.19400000, -265.37170000, 5.92930000};
        l_U520[0] = {-486.64230000, -359.86350000, 4.69960000};
        l_U520[1] = {-394.26320000, -369.44460000, 3.97430000};
        l_U520[2] = {-310.60350000, -451.37570000, 3.99280000};
        l_U520[3] = {-238.80480000, -582.52450000, 3.97530000};
        l_U520[4] = {-228.06940000, -710.72090000, 3.79170000};
        l_U520[5] = {-199.54380000, -852.62080000, -3.82920000};
        l_U520[6] = {-55.62320000, -873.71160000, -7.32860000};
        l_U520[7] = {79.19600000, -813.10290000, -4.53060000};
        l_U520[8] = {206.21700000, -735.23550000, 3.89750000};
        l_U520[9] = {140.10240000, -694.83470000, 4.02050000};
        l_U520[10] = {9.41290000, -769.12960000, 4.11890000};
        l_U520[11] = {-139.14640000, -779.92330000, 4.26130000};
        l_U520[12] = {-211.92690000, -702.38290000, 3.81910000};
        l_U520[13] = {-230.84080000, -554.86110000, 3.99000000};
        l_U520[14] = {-304.27060000, -427.88330000, 3.99480000};
        l_U520[15] = {-402.47510000, -319.44300000, 4.06840000};
        l_U520[16] = {-499.12710000, -213.89300000, 6.96130000};
        l_U520[17] = {-566.97990000, -155.63940000, 5.56200000};
        l_U520[18] = {-597.19400000, -265.37170000, 5.92930000};
        ProtectedSet(l_U518, 19);
        ProtectedSet(l_U519, 3);
        break;
        case 6:
        l_U632 = 270.00000000;
        l_U629 = {-1068.42700000, 1384.52400000, 23.45440000};
        l_U520[0] = {-991.21450000, 1375.25600000, 23.85700000};
        l_U520[1] = {-926.55410000, 1477.84400000, 23.77340000};
        l_U520[2] = {-951.23140000, 1590.21500000, 22.88760000};
        l_U520[3] = {-974.29450000, 1728.56900000, 14.55020000};
        l_U520[4] = {-1077.88500000, 1808.43900000, 7.59710000};
        l_U520[5] = {-1226.26300000, 1806.80500000, 16.34260000};
        l_U520[6] = {-1369.67600000, 1784.97500000, 17.83070000};
        l_U520[7] = {-1394.46500000, 1641.76100000, 15.44180000};
        l_U520[8] = {-1458.15400000, 1508.12900000, 14.04420000};
        l_U520[9] = {-1405.06900000, 1405.64100000, 12.53340000};
        l_U520[10] = {-1312.55600000, 1385.20600000, 18.27630000};
        l_U520[11] = {-1190.47400000, 1384.87900000, 21.23920000};
        l_U520[12] = {-1068.42700000, 1384.52400000, 23.45440000};
        ProtectedSet(l_U518, 13);
        ProtectedSet(l_U519, 5);
        break;
        case 7:
        l_U629 = {-210.39040000, 281.86960000, 13.90780000};
        l_U632 = 190.00000000;
        l_U520[0] = {-172.96790000, 129.70700000, 13.81760000};
        l_U520[1] = {-151.89320000, 50.43810000, 13.83080000};
        l_U520[2] = {-174.20170000, 27.30920000, 13.79950000};
        l_U520[3] = {-203.27370000, -106.51850000, 13.64020000};
        l_U520[4] = {-323.31990000, -151.47990000, 13.62500000};
        l_U520[5] = {-425.34280000, -151.67590000, 10.01110000};
        l_U520[6] = {-455.55040000, -24.11710000, 8.91650000};
        l_U520[7] = {-454.49960000, 125.72830000, 8.88780000};
        l_U520[8] = {-453.23250000, 207.91370000, 8.86630000};
        l_U520[9] = {-402.51520000, 254.89110000, 12.61230000};
        l_U520[10] = {-357.96220000, 380.62010000, 13.81470000};
        l_U520[11] = {-357.93590000, 508.44180000, 13.83030000};
        l_U520[12] = {-313.62120000, 543.80150000, 13.81050000};
        l_U520[13] = {-210.39040000, 281.86960000, 13.90780000};
        ProtectedSet(l_U518, 14);
        ProtectedSet(l_U519, 5);
        break;
        case 8:
        l_U629 = {-351.61520000, 1349.39000000, 15.31000000};
        l_U632 = 0.00000000;
        l_U520[0] = {-351.45790000, 1498.90600000, 17.92020000};
        l_U520[1] = {-257.80260000, 1575.04000000, 19.46800000};
        l_U520[2] = {-109.68530000, 1587.51100000, 28.96480000};
        l_U520[3] = {23.91860000, 1653.77800000, 28.96280000};
        l_U520[4] = {155.60120000, 1725.92600000, 28.96270000};
        l_U520[5] = {293.19310000, 1775.40700000, 20.16720000};
        l_U520[6] = {349.67170000, 1660.14600000, 15.02980000};
        l_U520[7] = {409.13500000, 1522.77900000, 15.60900000};
        l_U520[8] = {484.50310000, 1393.75200000, 11.09240000};
        l_U520[9] = {543.55510000, 1260.34800000, 19.92850000};
        l_U520[10] = {543.29130000, 1110.54000000, 19.90870000};
        l_U520[11] = {447.06020000, 1024.27700000, 25.26520000};
        l_U520[12] = {296.99510000, 1017.78800000, 23.76610000};
        l_U520[13] = {206.11040000, 1017.45000000, 13.84370000};
        l_U520[14] = {159.93230000, 1141.99000000, 13.75530000};
        l_U520[15] = {29.65580000, 1173.12900000, 13.81780000};
        l_U520[16] = {-120.47430000, 1173.11400000, 13.82510000};
        l_U520[17] = {-270.65890000, 1173.07700000, 13.82590000};
        l_U520[18] = {-334.82640000, 1173.33700000, 13.82650000};
        l_U520[19] = {-351.54130000, 1266.42700000, 22.12670000};
        l_U520[20] = {-351.61520000, 1349.39000000, 15.30720000};
        ProtectedSet(l_U518, 21);
        ProtectedSet(l_U519, 3);
        break;
        case 9:
        l_U629 = {-1246.60200000, 828.64320000, 19.12080000};
        l_U632 = 180.00000000;
        l_U520[0] = {-1265.40700000, 680.51210000, 27.14220000};
        l_U520[1] = {-1288.50700000, 534.06770000, 48.61510000};
        l_U520[2] = {-1290.35300000, 384.20530000, 50.18640000};
        l_U520[3] = {-1352.43800000, 260.58880000, 50.18500000};
        l_U520[4] = {-1422.85200000, 109.40050000, 50.50630000};
        l_U520[5] = {-1425.48000000, -3.46050000, 26.20390000};
        l_U520[6] = {-1424.35200000, -71.86280000, 7.98720000};
        l_U520[7] = {-1485.10500000, -95.99470000, 6.19110000};
        l_U520[8] = {-1536.70100000, 23.85410000, 7.32450000};
        l_U520[9] = {-1502.97700000, 65.15740000, 7.63760000};
        l_U520[10] = {-1482.97600000, 209.73760000, 9.77240000};
        l_U520[11] = {-1478.63800000, 359.15240000, 18.32910000};
        l_U520[12] = {-1479.52600000, 509.19730000, 18.60940000};
        l_U520[13] = {-1437.91500000, 649.84100000, 18.61130000};
        l_U520[14] = {-1381.95600000, 757.04790000, 18.69140000};
        l_U520[15] = {-1404.59700000, 836.03550000, 18.61790000};
        l_U520[16] = {-1285.02100000, 862.73130000, 18.62450000};
        l_U520[17] = {-1246.60200000, 828.64320000, 18.61440000};
        ProtectedSet(l_U518, 18);
        ProtectedSet(l_U519, 3);
        break;
        case 10:
        l_U629 = {1830.22000000, 716.95620000, 24.84500000};
        l_U632 = 270.00000000;
        l_U520[0] = {1961.42700000, 718.17170000, 17.32540000};
        l_U520[1] = {2030.49300000, 613.45260000, 14.87670000};
        l_U520[2] = {2031.26900000, 537.63440000, 16.48400000};
        l_U520[3] = {2132.92600000, 508.90300000, 7.53450000};
        l_U520[4] = {2180.68200000, 394.91130000, 4.94140000};
        l_U520[5] = {2192.41800000, 246.50850000, 5.07120000};
        l_U520[6] = {2313.86100000, 229.92780000, 5.04520000};
        l_U520[7] = {2325.21300000, 378.07440000, 5.10970000};
        l_U520[8] = {2317.96200000, 527.51790000, 5.09940000};
        l_U520[9] = {2196.71600000, 603.20470000, 10.67020000};
        l_U520[10] = {2093.30400000, 709.93210000, 11.79190000};
        l_U520[11] = {1999.87400000, 826.58460000, 8.22650000};
        l_U520[12] = {1886.15000000, 921.77330000, 22.68650000};
        l_U520[13] = {1791.97900000, 956.30260000, 23.13930000};
        l_U520[14] = {1769.08700000, 1055.38900000, 12.97190000};
        l_U520[15] = {1749.07800000, 876.61440000, 15.63980000};
        l_U520[16] = {1727.19100000, 749.25330000, 24.54900000};
        l_U520[17] = {1830.22000000, 716.95620000, 24.84500000};
        ProtectedSet(l_U518, 18);
        ProtectedSet(l_U519, 3);
        break;
        case 11:
        l_U629 = {1352.64200000, 883.04790000, 13.41750000};
        l_U632 = 147.25570000;
        l_U520[0] = {1293.16700000, 767.47770000, 31.91150000};
        l_U520[1] = {1230.34800000, 632.05750000, 37.20380000};
        l_U520[2] = {1157.05000000, 502.36450000, 27.85620000};
        l_U520[3] = {1119.75300000, 421.75350000, 28.88540000};
        l_U520[4] = {1239.99900000, 385.09260000, 21.02020000};
        l_U520[5] = {1389.91700000, 385.12330000, 21.62810000};
        l_U520[6] = {1531.58300000, 379.69130000, 27.85640000};
        l_U520[7] = {1573.10000000, 444.82970000, 28.00450000};
        l_U520[8] = {1702.20000000, 491.07430000, 28.10500000};
        l_U520[9] = {1727.04000000, 520.54450000, 28.75360000};
        l_U520[10] = {1731.87100000, 780.70210000, 21.64520000};
        l_U520[11] = {1770.80300000, 923.99580000, 13.40710000};
        l_U520[12] = {1800.37500000, 1048.68600000, 13.04540000};
        l_U520[13] = {1668.17600000, 1017.51200000, 21.36740000};
        l_U520[14] = {1522.32600000, 1004.30000000, 22.44450000};
        l_U520[15] = {1419.30900000, 964.26820000, 13.76640000};
        l_U520[16] = {1352.64200000, 883.04790000, 13.41750000};
        ProtectedSet(l_U518, 17);
        ProtectedSet(l_U519, 3);
        break;
        case 12:
        l_U629 = {-1591.24000000, 168.88660000, 12.49100000};
        l_U632 = 180.00000000;
        l_U520[0] = {-1589.20900000, 79.14170000, 9.93570000};
        l_U520[1] = {-1708.83600000, 12.58150000, 9.03050000};
        l_U520[2] = {-1826.67100000, -51.71260000, 5.74650000};
        l_U520[3] = {-1885.94800000, 14.49860000, 6.44380000};
        l_U520[4] = {-1900.93000000, 131.27420000, 7.84240000};
        l_U520[5] = {-1862.39500000, 175.82930000, 13.27980000};
        l_U520[6] = {-1808.19500000, 292.30730000, 24.50680000};
        l_U520[7] = {-1733.46700000, 421.82910000, 24.46540000};
        l_U520[8] = {-1662.41300000, 553.75990000, 25.25700000};
        l_U520[9] = {-1671.89600000, 701.08120000, 28.88910000};
        l_U520[10] = {-1636.85700000, 765.45170000, 28.87910000};
        l_U520[11] = {-1594.30200000, 773.51790000, 24.81620000};
        l_U520[12] = {-1586.16500000, 645.29880000, 24.47540000};
        l_U520[13] = {-1587.33300000, 495.34910000, 24.44700000};
        l_U520[14] = {-1657.18800000, 363.40030000, 24.45900000};
        l_U520[15] = {-1713.19000000, 267.46570000, 20.61530000};
        l_U520[16] = {-1622.73000000, 227.02870000, 13.78940000};
        l_U520[17] = {-1591.24000000, 168.88660000, 12.49100000};
        ProtectedSet(l_U518, 18);
        ProtectedSet(l_U519, 3);
        break;
        case 13:
        l_U629 = {1290.52100000, 507.35510000, 26.52730000};
        l_U632 = 90.00000000;
        l_U520[0] = {1218.48700000, 507.02050000, 27.61600000};
        l_U520[1] = {1142.95200000, 540.59300000, 27.21190000};
        l_U520[2] = {1010.83200000, 551.96090000, 21.47090000};
        l_U520[3] = {916.69270000, 552.27620000, 21.32210000};
        l_U520[4] = {842.06090000, 731.03940000, 6.94190000};
        l_U520[5] = {855.24420000, 885.10420000, 13.38390000};
        l_U520[6] = {965.12590000, 940.56670000, 20.95770000};
        l_U520[7] = {1116.53100000, 982.19680000, 13.24610000};
        l_U520[8] = {1313.05500000, 979.60550000, 12.71200000};
        l_U520[9] = {1394.82000000, 893.38770000, 12.97560000};
        l_U520[10] = {1406.76100000, 754.81340000, 27.46460000};
        l_U520[11] = {1406.75900000, 579.01250000, 30.48190000};
        l_U520[12] = {1446.34200000, 478.00050000, 28.02680000};
        l_U520[13] = {1560.28700000, 396.87770000, 28.02430000};
        l_U520[14] = {1508.43600000, 387.10320000, 21.47400000};
        l_U520[15] = {1437.57200000, 387.34120000, 16.69910000};
        l_U520[16] = {1284.22300000, 387.24570000, 21.44680000};
        l_U520[17] = {1111.08400000, 381.12230000, 28.80140000};
        l_U520[18] = {1098.21400000, 206.31950000, 30.04130000};
        l_U520[19] = {1098.20500000, 9.73040000, 33.05710000};
        ProtectedSet(l_U518, 20);
        ProtectedSet(l_U519, 1);
        l_U513[0] = -1896659641;
        l_U513[1] = -1896659641;
        l_U513[2] = 1821991593;
        l_U513[3] = 1821991593;
        break;
    }
    return;
}

void sub_22015(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown Result;

    Result = sub_22035( 1420487033, uParam0, uParam3, 1 );
    SET_OBJECT_DYNAMIC( Result, 0 );
    SET_OBJECT_COLLISION( Result, 0 );
    FREEZE_OBJECT_POSITION( Result, 1 );
    SET_OBJECT_VISIBLE( Result, 0 );
    return Result;
}

void sub_22035(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;

    CREATE_OBJECT( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, uParam5 );
    SET_OBJECT_HEADING( Result, uParam4 );
    return Result;
}

void sub_22444(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    Result = {sub_22459( uParam0, uParam1, uParam2 )};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam1, Result._fU0, Result._fU4, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    return Result;
}

void sub_22459(int iParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
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
    int iVar20;

    GET_MODEL_DIMENSIONS( sub_22470( uParam1 ), ref uVar8, ref uVar11 );
    GET_MODEL_DIMENSIONS( sub_22510(), ref uVar14, ref uVar17 );
    if (bParam2)
    {
        uVar14._fU0 -= 2.00000000;
        uVar17._fU0 += 2.00000000;
        uVar17._fU4 += 2.00000000;
    }
    else
    {
        uVar17._fU0 += 1.00000000;
        uVar17._fU4 += 1.00000000;
    }
    iVar20 = iParam0 / 2;
    if ((iVar20 * 2) == iParam0)
    {
        Result._fU0 = (uVar17._fU0 - uVar14._fU0) * -1;
    }
    else
    {
        Result._fU0 = uVar17._fU0 - uVar14._fU0;
    }
    Result._fU4 = uVar8._fU4 + (uVar17._fU4 * -1);
    Result._fU4 += (TO_FLOAT( iVar20 * -1 )) * ((uVar17._fU4 - uVar14._fU4) + uVar17._fU4);
    return Result;
}

void sub_22470(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_MODEL( uParam0, ref Result );
    return Result;
}

int sub_22510()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (HAS_MODEL_LOADED( l_U513[I] ))
        {
            return l_U513[I];
        }
    }
    return 0;
}

int sub_23409()
{
    int I;
    int iVar3;

    iVar3 = 1000;
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (IS_CAR_DEAD( l_U733[I] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_4962(), l_U733[I], 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                if (NOT l_U885)
                {
                    GET_CAR_HEALTH( l_U733[I], ref iVar3 );
                }
            }
            if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U733[I], sub_4962() )) || (iVar3 < 750))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_23584()
{
    int I;

    for ( I = 0; I < 5; I++ )
    {
        if ((IS_CHAR_INJURED( l_U721[I] )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U721[I], sub_4962(), 0 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_23708()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_CHAR_DEAD( l_U700 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U700 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U700, 1 );
        }
    }
    switch (l_U949)
    {
        case 0:
        l_U949 = 1;
        break;
        case 1:
        if (sub_15384())
        {
            I = 0;
            for ( I = 0; I < 5; I++ )
            {
                if (NOT (IS_CAR_DEAD( l_U733[I] )))
                {
                    ADD_BLIP_FOR_CAR( l_U733[I], ref l_U727[I] );
                    CHANGE_BLIP_DISPLAY( l_U727[I], 1 );
                    FREEZE_CAR_POSITION( l_U733[I], 1 );
                }
            }
            SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
            ADD_BLIP_FOR_COORD( l_U770._fU0, l_U770._fU4, l_U770._fU8, ref l_U773 );
            SET_ROUTE( l_U773, 1 );
            CHANGE_BLIP_DISPLAY( l_U773, 2 );
            PRINT_NOW( "BRK_15", 7500, 1 );
            l_U949 = 2;
        }
        break;
        case 2:
        if (NOT (IS_CAR_DEAD( l_U751 )))
        {
            if (sub_23409())
            {
                sub_10725( ref l_U780, 0 );
                if ((IS_CHAR_SHOOTING( sub_4962() )) || (NOT (IS_CHAR_IN_CAR( sub_4962(), l_U751 ))))
                {
                    l_U681 = 10;
                }
                else
                {
                    l_U709 = 100;
                    SET_PLAYER_CONTROL( sub_6345(), 0 );
                    l_U949 = 3;
                }
            }
        }
        if (sub_23584())
        {
            sub_10725( ref l_U780, 0 );
            l_U949 = 5;
        }
        if (NOT l_U950)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4962(), l_U770._fU0, l_U770._fU4, l_U770._fU8, 75.00000000, 75.00000000, 75.00000000, 0 ))
            {
                CLEAR_AREA( 819.48600000, 1479.32800000, 13.39460000, 20.00000000, 1 );
                SWITCH_PED_PATHS_OFF( 1287.74900000, 502.02630000, 0.00000000, 1318.59300000, 513.19600000, 100.00000000 );
                for ( I = 0; I < 5; I++ )
                {
                    if (NOT (IS_CAR_DEAD( l_U733[I] )))
                    {
                        FREEZE_CAR_POSITION( l_U733[I], 0 );
                        GET_CAR_COORDINATES( l_U733[I], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        SET_CAR_COORDINATES( l_U733[I], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                    }
                }
                l_U950 = 1;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U751 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U700 )))
            {
                if (IS_CHAR_IN_CAR( l_U700, l_U751 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_4962(), l_U751 ))
                    {
                        BLOCK_CHAR_AMBIENT_ANIMS( l_U700, 1 );
                        if (l_U951)
                        {
                            l_U951 = 0;
                        }
                        if (DOES_BLIP_EXIST( l_U752 ))
                        {
                            REMOVE_BLIP( l_U752 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U773 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U770._fU0, l_U770._fU4, l_U770._fU8, ref l_U773 );
                            SET_ROUTE( l_U773, 1 );
                            CLEAR_PRINTS();
                            PRINT_NOW( "BRK_15", 7500, 1 );
                            sub_24670();
                        }
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U679)
                            {
                                if (g_U64729 == 0)
                                {
                                    sub_9023( "BR4_B2AV1", "BR4BAUD", ref l_U780, 6, 1 );
                                    l_U679 = 1;
                                    g_U64729++;
                                }
                                else if (g_U64729 == 1)
                                {
                                    sub_9023( "BR4_B2AV2", "BR4BAUD", ref l_U780, 6, 1 );
                                    l_U679 = 1;
                                    g_U64729++;
                                }
                                else
                                {
                                    SAY_AMBIENT_SPEECH( l_U700, "LISTEN_TO_RADIO", 1, 1, 0 );
                                    l_U679 = 1;
                                }
                            }
                            else if (sub_11375( l_U780 ))
                            {
                                if (g_U64729 == 1)
                                {
                                    sub_11456( "BR4_B2AV1", "BR4BAUD", ref l_U780, 6, 1 );
                                }
                                else if (g_U64729 == 2)
                                {
                                    sub_11456( "BR4_B2AV2", "BR4BAUD", ref l_U780, 6, 1 );
                                }
                            }
                        }
                        if (LOCATE_CHAR_IN_CAR_3D( sub_4962(), l_U770._fU0, l_U770._fU4, 29.21100000, l_U776._fU0, l_U776._fU4, l_U776._fU8, 1 ))
                        {
                            if (sub_25080())
                            {
                                if (DOES_BLIP_EXIST( l_U773 ))
                                {
                                    REMOVE_BLIP( l_U773 );
                                }
                                SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                                CLEAR_PRINTS();
                                sub_10725( ref l_U780, 0 );
                                sub_24670();
                                SET_PLAYER_CONTROL( sub_6345(), 0 );
                                l_U949 = 3;
                            }
                            else
                            {
                                sub_10725( ref l_U780, 0 );
                                PRINT_NOW( "BRK_27", 7500, 1 );
                            }
                        }
                        else
                        {
                            CLEAR_THIS_PRINT( "BRK_27" );
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U752 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U751, ref l_U752 );
                        CHANGE_BLIP_COLOUR( l_U752, 3 );
                        sub_13420( ref l_U780 );
                        CLEAR_CHAR_TASKS( l_U700 );
                        PRINT_NOW( "BRK_16", 7500, 1 );
                    }
                    if (NOT l_U951)
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4962() )))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U700 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U700, "GET_IN_CAR", 1, 1, 0 );
                                l_U951 = 1;
                            }
                        }
                    }
                    if (DOES_BLIP_EXIST( l_U773 ))
                    {
                        REMOVE_BLIP( l_U773 );
                    }
                }
            }
        }
        break;
        case 3:
        if ((sub_23409()) || (sub_25632()))
        {
            if (NOT l_U934)
            {
                ;
            }
            if (sub_26870())
            {
                l_U753 = 0;
                l_U949 = 4;
                l_U952 = 1;
                if (NOT (IS_CHAR_DEAD( l_U700 )))
                {
                    STOP_PED_SPEAKING( l_U700, 1 );
                }
                ENABLE_CHASE_AUDIO( 1 );
                SWITCH_PED_PATHS_ON( 1287.74900000, 502.02630000, 0.00000000, 1318.59300000, 513.19600000, 100.00000000 );
            }
        }
        break;
        case 4:
        if (sub_27763())
        {
            l_U914 = 1;
            l_U885 = 1;
            if (NOT (IS_CAR_DEAD( l_U751 )))
            {
                if (HAS_CAR_BEEN_RESPRAYED( l_U751 ))
                {
                    ;
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U700 )))
            {
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U700, 0 );
            }
            if (sub_23409())
            {
                if (NOT (sub_9998( l_U905 )))
                {
                    sub_9000( "BR4_HUSTLE", ref l_U804, 6, 1 );
                }
            }
            l_U926 = 1;
            l_U754++;
            ADD_BLIP_FOR_COORD( l_U520[l_U753]._fU0, l_U520[l_U753]._fU4, l_U520[l_U753]._fU8, ref l_U755 );
            CHANGE_BLIP_DISPLAY( l_U755, 2 );
            if (GET_GROUND_Z_FOR_3D_COORD( l_U520[l_U753]._fU0, l_U520[l_U753]._fU4, 100.00000000, ref uVar9 ))
            {
                ;
            }
            uVar6._fU0 = l_U520[l_U753]._fU0;
            uVar6._fU4 = l_U520[l_U753]._fU4;
            uVar6._fU8 = uVar9 + 2.00000000;
            l_U916 = CREATE_CHECKPOINT( 2, uVar6, l_U520[l_U753 + 1], 1.00000000 );
            if (l_U754 < ProtectedGet(l_U518))
            {
                ADD_BLIP_FOR_COORD( l_U520[l_U754]._fU0, l_U520[l_U754]._fU4, l_U520[l_U754]._fU8, ref l_U756 );
                CHANGE_BLIP_DISPLAY( l_U756, 2 );
                DIM_BLIP( l_U756, 1 );
                CHANGE_BLIP_SCALE( l_U756, 0.80000000 );
            }
            GET_GAME_TIMER( ref l_U762 );
            l_U681 = 6;
        }
        break;
        case 5:
        l_U681 = 10;
        break;
    }
    if (l_U952)
    {
        if (l_U753 >= 0)
        {
            sub_28733( l_U520[l_U753] );
        }
    }
    return;
}

void sub_24670()
{
    return;
}

int sub_25080()
{
    float fVar2;
    float fVar3;
    float fVar4;

    if (NOT (IS_CAR_DEAD( l_U751 )))
    {
        GET_CAR_HEADING( l_U751, ref fVar2 );
        fVar4 = l_U632 - 15.00000000;
        if (fVar4 < 0.00000000)
        {
            fVar4 += 360.00000000;
        }
        fVar3 = l_U632 + 15.00000000;
        if (fVar3 >= 360.00000000)
        {
            fVar3 -= 360.00000000;
        }
        if (fVar3 > fVar4)
        {
            if ((fVar2 < fVar3) AND (fVar2 > fVar4))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar2 < fVar3) || (fVar2 > fVar4))
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

int sub_25632()
{
    sub_4613( l_U946, "race_start_cut_prog..." );
    if (NOT l_U933)
    {
        if (NOT sub_25687())
        {
            l_U933 = 1;
        }
    }
    else if ((NOT l_U934) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_25687())
        {
            if ((l_U946 > 0) AND (l_U946 < 3))
            {
                CLEAR_PRINTS();
                sub_10725( ref l_U780, 0 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U934 = 1;
                l_U946 = 2;
            }
        }
    }
    switch (l_U946)
    {
        case 0:
        if (sub_23409())
        {
            return 1;
        }
        CREATE_CAM( 14, ref l_U714[0] );
        CREATE_CAM( 14, ref l_U714[1] );
        CREATE_CAM( 3, ref l_U714[2] );
        SET_CAM_POS( l_U714[0], 1290.40700000, 502.72470000, 26.61152000 );
        SET_CAM_ROT( l_U714[0], 8.14595900, -0.00000000, -34.17100000 );
        SET_CAM_FOV( l_U714[0], 37.20002000 );
        SET_CAM_ACTIVE( l_U714[0], 1 );
        SET_CAM_PROPAGATE( l_U714[0], 1 );
        SET_CAM_POS( l_U714[1], 1304.33000000, 502.72470000, 26.61152000 );
        SET_CAM_ROT( l_U714[1], 8.14595900, -0.00000000, -34.17100000 );
        SET_CAM_FOV( l_U714[1], 37.20002000 );
        SET_CAM_ACTIVE( l_U714[1], 1 );
        SET_CAM_PROPAGATE( l_U714[1], 0 );
        SET_CAM_ACTIVE( l_U714[2], 0 );
        SET_CAM_PROPAGATE( l_U714[2], 0 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U946 = 1;
        break;
        case 1:
        SET_CAM_ACTIVE( l_U714[0], 0 );
        SET_CAM_PROPAGATE( l_U714[0], 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U714[2], l_U714[0], l_U714[1], 13000, 0 );
        SET_CAM_ACTIVE( l_U714[2], 1 );
        SET_CAM_PROPAGATE( l_U714[2], 1 );
        if (NOT (IS_CAR_DEAD( l_U751 )))
        {
            SET_CAR_COORDINATES( l_U751, 1312.03600000, 509.85510000, 26.47310000 );
            SET_CAR_HEADING( l_U751, 89.82840000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U751 );
        }
        sub_9000( "BR4_ARR2", ref l_U780, 6, 1 );
        GET_GAME_TIMER( ref l_U947 );
        l_U946 = 2;
        break;
        case 2:
        sub_11813( "In START_CUT_FINISH" );
        GET_GAME_TIMER( ref l_U948 );
        if (((l_U948 - l_U947) > 13500) || (l_U934))
        {
            if (l_U934)
            {
                sub_11813( "bWasStartCutSkipped is TRUE" );
            }
            if ((l_U948 - l_U947) > 13500)
            {
                sub_11813( "cur_time - cutscene_time > 13500" );
            }
            SET_CAM_ACTIVE( l_U714[0], 0 );
            SET_CAM_PROPAGATE( l_U714[0], 0 );
            SET_CAM_ACTIVE( l_U714[1], 0 );
            SET_CAM_PROPAGATE( l_U714[1], 0 );
            SET_CAM_ACTIVE( l_U714[2], 0 );
            SET_CAM_PROPAGATE( l_U714[2], 0 );
            DESTROY_CAM( l_U714[0] );
            DESTROY_CAM( l_U714[1] );
            DESTROY_CAM( l_U714[2] );
            SET_GAME_CAM_HEADING( 0.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            l_U946 = 3;
        }
        break;
        case 3:
        return 1;
        break;
    }
    return 0;
}

int sub_25687()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_26870()
{
    sub_11813( "In raceCountdownGo" );
    sub_4613( l_U932, "raceCount...." );
    switch (l_U932)
    {
        case 0:
        if (sub_6249())
        {
            if (l_U775 < (l_U774 + l_U709))
            {
                if (DOES_BLIP_EXIST( l_U773 ))
                {
                    REMOVE_BLIP( l_U773 );
                }
                GET_GAME_TIMER( ref l_U775 );
                SET_PLAYER_CONTROL( sub_6345(), 0 );
                sub_10725( ref l_U780, 0 );
            }
            else
            {
                GET_GAME_TIMER( ref l_U774 );
                l_U932 = 1;
            }
        }
        break;
        case 1:
        if (l_U775 < (l_U774 + l_U709))
        {
            PRINT_WITH_NUMBER_BIG( "NUMBER", 3, 100, 1 );
            GET_GAME_TIMER( ref l_U775 );
            if (NOT l_U935[0])
            {
                PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_321" );
                l_U935[0] = 1;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U774 );
            l_U932 = 2;
        }
        break;
        case 2:
        if (l_U775 < (l_U774 + l_U709))
        {
            PRINT_WITH_NUMBER_BIG( "NUMBER", 2, 100, 1 );
            if (NOT l_U935[1])
            {
                PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_321" );
                l_U935[1] = 1;
            }
            GET_GAME_TIMER( ref l_U775 );
        }
        else
        {
            GET_GAME_TIMER( ref l_U774 );
            l_U932 = 3;
        }
        break;
        case 3:
        if (l_U775 < (l_U774 + l_U709))
        {
            PRINT_WITH_NUMBER_BIG( "NUMBER", 1, 100, 1 );
            if (NOT l_U935[2])
            {
                PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_321" );
                l_U935[2] = 1;
            }
            GET_GAME_TIMER( ref l_U775 );
        }
        else
        {
            GET_GAME_TIMER( ref l_U774 );
            l_U932 = 4;
        }
        break;
        case 4:
        l_U688 = {l_U629};
        SET_PLAYER_CONTROL( sub_6345(), 1 );
        sub_6827();
        PRINT_WITH_NUMBER_BIG( "GO", 3, 1100, 1 );
        PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_GO" );
        GET_GAME_TIMER( ref l_U764 );
        DISPLAY_AREA_NAME( 0 );
        return 1;
        break;
    }
    sub_11813( "Out raceCountdownGo" );
    return 0;
}

int sub_27763()
{
    sub_4613( l_U942, "iRacersStarted..." );
    sub_4613( l_U943, "iStartRacersProg..." );
    switch (l_U943)
    {
        case 0:
        SET_INSTANT_WIDESCREEN_BORDERS( 0 );
        l_U943++;
        break;
        case 1:
        if (l_U942 < 5)
        {
            if (NOT (IS_CAR_DEAD( l_U733[l_U942] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U721[l_U942] )))
                {
                    CLEAR_CHAR_TASKS( l_U721[l_U942] );
                    TASK_CAR_DRIVE_TO_COORD( l_U721[l_U942], l_U733[l_U942], l_U520[0]._fU0, l_U520[0]._fU4, l_U520[0]._fU8, l_U745[l_U942], 1, 0, 2, 10.00000000, 20 );
                    SET_CAR_PROOFS( l_U733[l_U942], 0, 0, 0, 1, 0 );
                    SET_BLIP_THROTTLE_RANDOMLY( l_U733[l_U942], 0 );
                    GET_GAME_TIMER( ref l_U944 );
                    l_U943++;
                }
            }
        }
        else
        {
            return 1;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U945 );
        if ((l_U945 - l_U944) >= 100)
        {
            l_U942++;
            l_U943 = 1;
        }
        break;
    }
    return 0;
}

void sub_28733(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    if ((l_U642) AND (IS_HINT_RUNNING()))
    {
        iVar5 = 0;
        GET_GAME_TIMER( ref iVar5 );
        if (iVar5 > (l_U643 + 500))
        {
            l_U642 = 0;
        }
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar6 );
    if ((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_4962() ))) AND (NOT sub_28826())) AND (iVar6 != 4))
    {
        if (NOT IS_HINT_RUNNING())
        {
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( uParam0._fU0, uParam0._fU4, uParam0._fU8, 0, 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U643 );
            l_U642 = 1;
            l_U641 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U641) AND (NOT l_U642))
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( uParam0._fU0, uParam0._fU4, uParam0._fU8, 0, 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U641 = 1;
        }
    }
    else if (l_U641)
    {
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U641 = 0;
    };;;
    return;
}

int sub_28826()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_29167()
{
    int I;

    I = 0;
    sub_11813( "Still doing run racers...." );
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U721[I] )))
        {
            if (NOT (IS_CAR_DEAD( l_U733[I] )))
            {
                if (IS_CHAR_IN_CAR( l_U721[I], l_U733[I] ))
                {
                    if ((sub_29317( l_U721[I], l_U739[I] )) || (l_U739[I] == -1))
                    {
                        l_U739[I]++;
                        l_U757 = l_U739[I];
                        if (ProtectedGet(l_U518) > l_U757)
                        {
                            l_U758 = l_U745[I];
                            if (NOT (IS_CHAR_INJURED( l_U721[I] )))
                            {
                                TASK_CAR_DRIVE_TO_COORD( l_U721[I], l_U733[I], l_U520[l_U757]._fU0, l_U520[l_U757]._fU4, l_U520[l_U757]._fU8, l_U758, 1, 0, 2, 10.00000000, 20 );
                            }
                        }
                        else if (l_U753 < (ProtectedGet(l_U518) - 3))
                        {
                            sub_10725( ref l_U780, 0 );
                            l_U914 = 0;
                            l_U681 = 7;
                        }
                        else if (NOT l_U918)
                        {
                            l_U914 = 0;
                            l_U918 = 1;
                        };;;
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U727[I] ))
            {
                REMOVE_BLIP( l_U727[I] );
            }
            l_U681 = 10;;
        }
    }
    if (l_U914)
    {
        if (sub_23584())
        {
            l_U681 = 10;
        }
    }
    return;
}

int sub_29317(int iParam0, int iParam1)
{
    if (iParam1 == -1)
    {
        return 1;
    }
    if (IS_CHAR_IN_ANY_HELI( iParam0 ))
    {
        if (sub_29370( iParam0, l_U520[iParam1], 30.00000000 ))
        {
            if (iParam0 == sub_4962())
            {
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
            }
            return 1;
        }
    }
    else if (sub_29370( iParam0, l_U520[iParam1], 18.00000000 ))
    {
        if (iParam0 == sub_4962())
        {
            PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
        }
        return 1;
    }
    return 0;
}

int sub_29370(unknown uParam0, vector vParam1, float fParam4)
{
    float fVar7;
    vector vVar8;

    fParam4 *= fParam4;
    GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
    vVar8 = {vVar8 - vParam1};
    fVar7 = ((vVar8.x * vVar8.x) + (vVar8.y * vVar8.y)) + (vVar8.z * vVar8.z);
    if (fVar7 < fParam4)
    {
        return 1;
    }
    return 0;
}

void sub_29995(unknown uParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;

    I = 0;
    (uParam0^) = 5;
    for ( I = 0; I < 5; I++ )
    {
        if (l_U753 == l_U739[I])
        {
            if (NOT (IS_CAR_DEAD( l_U733[I] )))
            {
                GET_CAR_COORDINATES( l_U733[I], ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                l_U757 = l_U753;
                fVar7 = VDIST( uVar4, l_U520[l_U753] );
            }
            if (NOT (IS_CAR_DEAD( l_U751 )))
            {
                GET_CAR_COORDINATES( l_U751, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                fVar8 = VDIST( uVar4, l_U520[l_U753] );
            }
            if (fVar8 < fVar7)
            {
                if ((uParam0^) > 0)
                {
                    (uParam0^)--;
                    sub_30245( l_U721[I], l_U733[I], ref l_U745[I] );
                }
            }
            else if ((uParam0^) > 0)
            {
                sub_30403( l_U721[I], l_U733[I], ref l_U745[I] );
            }
        }
        else if (l_U753 > l_U739[I])
        {
            if ((uParam0^) > 0)
            {
                (uParam0^)--;
                sub_30245( l_U721[I], l_U733[I], ref l_U745[I] );
            }
        }
        else if ((uParam0^) > 0)
        {
            sub_30403( l_U721[I], l_U733[I], ref l_U745[I] );
        };;;
    }
    return;
}

void sub_30245(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if ((NOT (IS_CHAR_DEAD( uParam0 ))) AND (NOT (IS_CAR_DEAD( uParam1 ))))
    {
        if ((uParam2^) < 42.00000000)
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                GET_SCRIPT_TASK_STATUS( uParam0, 15, ref iVar5 );
                if (iVar5 == 1)
                {
                    (uParam2^) += 0.10000000;
                    SET_DRIVE_TASK_CRUISE_SPEED( uParam0, (uParam2^) );
                }
            }
        }
    }
    return;
}

void sub_30403(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if ((NOT (IS_CHAR_DEAD( uParam0 ))) AND (NOT (IS_CAR_DEAD( uParam1 ))))
    {
        if ((uParam2^) > 30.00000000)
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                GET_SCRIPT_TASK_STATUS( uParam0, 15, ref iVar5 );
                if (iVar5 == 1)
                {
                    (uParam2^) -= 0.10000000;
                    SET_DRIVE_TASK_CRUISE_SPEED( uParam0, (uParam2^) );
                }
            }
        }
    }
    return;
}

void sub_30659()
{
    unknown uVar2;
    int I;

    if (DOES_BLIP_EXIST( l_U707 ))
    {
        ;
    }
    if (NOT (IS_CAR_DEAD( l_U751 )))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_4962(), l_U751 ))
        {
            if (l_U917)
            {
                sub_30735();
                l_U917 = 0;
            }
            if (DOES_BLIP_EXIST( l_U752 ))
            {
                REMOVE_BLIP( l_U752 );
            }
            if (DOES_BLIP_EXIST( l_U707 ))
            {
                REMOVE_BLIP( l_U707 );
            }
            if (l_U926)
            {
                l_U927 = 1;
            }
            l_U925 = 0;
            l_U928 = 0;
            if (sub_9998( l_U919 ))
            {
                sub_10725( ref l_U919, 0 );
            }
            if (NOT l_U929)
            {
                if (l_U753 > 1)
                {
                    if (sub_31620())
                    {
                        if (USING_STANDARD_CONTROLS())
                        {
                            PRINT_HELP( "BRK_01" );
                        }
                        else
                        {
                            PRINT_HELP( "BRK_01" );
                        }
                        l_U929 = 1;
                    }
                }
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_4962(), l_U520[l_U753]._fU0, l_U520[l_U753]._fU4, l_U520[l_U753]._fU8, 13.00000000, 13.00000000, 13.00000000, 0 ))
            {
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                sub_4404();
                if (l_U753 < (ProtectedGet(l_U518) - 1))
                {
                    l_U753++;
                    if (l_U754 == (ProtectedGet(l_U518) - 1))
                    {
                        if (l_U763 < (ProtectedGet(l_U519) - 1))
                        {
                            l_U754 = 0;
                        }
                    }
                    else
                    {
                        l_U754++;
                    }
                    sub_30735();
                }
                else if (l_U763 < (ProtectedGet(l_U519) - 1))
                {
                    l_U753 = 0;
                    l_U754 = 1;
                    l_U763++;
                    sub_30735();
                }
                else if (DOES_BLIP_EXIST( l_U755 ))
                {
                    REMOVE_BLIP( l_U755 );
                    DELETE_CHECKPOINT( l_U916 );
                    l_U768 = 0;
                }
                for ( I = 0; I <= 4; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U727[I] ))
                    {
                        REMOVE_BLIP( l_U727[I] );
                    }
                }
                if (NOT l_U918)
                {
                    l_U681 = 11;
                    SET_PLAYER_CONTROL( sub_6345(), 0 );
                    GET_GAME_TIMER( ref l_U930 );
                    TASK_CAR_MISSION( sub_4962(), l_U751, 0, 5, 10.00000000, 2, -1, -1 );
                    l_U720 = 1;
                    DISPLAY_AREA_NAME( 1 );
                }
                else
                {
                    WAIT( 3000 );
                    l_U681 = 7;
                }
                sub_10725( ref l_U780, 0 );;;
            }
        }
        else if (DOES_BLIP_EXIST( l_U755 ))
        {
            REMOVE_BLIP( l_U755 );
            DELETE_CHECKPOINT( l_U916 );
        }
        if (DOES_BLIP_EXIST( l_U756 ))
        {
            REMOVE_BLIP( l_U756 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U707 )))
        {
            ADD_BLIP_FOR_CAR( l_U751, ref l_U707 );
            CHANGE_BLIP_COLOUR( l_U707, 3 );
        }
        if (sub_9998( l_U810 ))
        {
            sub_10725( ref l_U810, 0 );
        }
        l_U917 = 1;
        if (NOT (sub_9998( l_U919 )))
        {
            if ((NOT l_U925) AND (l_U927))
            {
                if (NOT l_U925)
                {
                    sub_9000( "BR4_OUT", ref l_U919, 6, 1 );
                    l_U925 = 1;
                }
            }
        }
        if (NOT (sub_9998( l_U804 )))
        {
            if (NOT (sub_9998( l_U919 )))
            {
                if (l_U925)
                {
                    if (NOT l_U928)
                    {
                        l_U765 = l_U761;
                        l_U928 = 1;
                    }
                }
                if (sub_32549( l_U751, l_U707, l_U761, ref l_U765, 15000 ))
                {
                    l_U681 = 9;
                }
            }
        }
        if (NOT (IS_CAR_DEAD( l_U751 )))
        {
            if (HAS_CAR_BEEN_RESPRAYED( l_U751 ))
            {
                l_U681 = 7;
            }
        }
    }
    sub_28733( l_U520[l_U753] );
    return;
}

void sub_30735()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_BLIP_EXIST( l_U755 ))
    {
        REMOVE_BLIP( l_U755 );
        DELETE_CHECKPOINT( l_U916 );
    }
    if (DOES_BLIP_EXIST( l_U756 ))
    {
        REMOVE_BLIP( l_U756 );
    }
    if (l_U753 == (ProtectedGet(l_U518) - 1))
    {
        if (NOT (DOES_BLIP_EXIST( l_U755 )))
        {
            ADD_BLIP_FOR_COORD( l_U520[l_U753]._fU0, l_U520[l_U753]._fU4, l_U520[l_U753]._fU8, ref l_U755 );
            CHANGE_BLIP_DISPLAY( l_U755, 2 );
            CHANGE_BLIP_SPRITE( l_U755, 65 );
            if (GET_GROUND_Z_FOR_3D_COORD( l_U520[l_U753]._fU0, l_U520[l_U753]._fU4, l_U520[l_U753]._fU8, ref uVar2 ))
            {
                ;
            }
            uVar3._fU0 = l_U520[l_U753]._fU0;
            uVar3._fU4 = l_U520[l_U753]._fU4;
            uVar3._fU8 = l_U520[l_U753]._fU8 + 2.50000000;
            l_U916 = CREATE_CHECKPOINT( 3, uVar3, l_U520[l_U753], 1.00000000 );
        }
    }
    else if (NOT (DOES_BLIP_EXIST( l_U755 )))
    {
        ADD_BLIP_FOR_COORD( l_U520[l_U753]._fU0, l_U520[l_U753]._fU4, l_U520[l_U753]._fU8, ref l_U755 );
        CHANGE_BLIP_DISPLAY( l_U755, 2 );
        if (GET_GROUND_Z_FOR_3D_COORD( l_U520[l_U753]._fU0, l_U520[l_U753]._fU4, l_U520[l_U753]._fU8 + 2.00000000, ref uVar2 ))
        {
            ;
        }
        uVar3._fU0 = l_U520[l_U753]._fU0;
        uVar3._fU4 = l_U520[l_U753]._fU4;
        uVar3._fU8 = uVar2 + 2.00000000;
        l_U916 = CREATE_CHECKPOINT( 2, uVar3, l_U520[l_U753 + 1], 1.00000000 );
    }
    if ((NOT (DOES_BLIP_EXIST( l_U756 ))) AND (l_U753 < (ProtectedGet(l_U518) - 1)))
    {
        ADD_BLIP_FOR_COORD( l_U520[l_U754]._fU0, l_U520[l_U754]._fU4, l_U520[l_U754]._fU8, ref l_U756 );
        CHANGE_BLIP_DISPLAY( l_U756, 2 );
        DIM_BLIP( l_U756, 1 );
        CHANGE_BLIP_SCALE( l_U756, 0.80000000 );
    }
    if (DOES_BLIP_EXIST( l_U707 ))
    {
        REMOVE_BLIP( l_U707 );
    }
    return;
}

int sub_31620()
{
    int iVar2;

    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
    if (((iVar2 != 4) AND (iVar2 != 5)) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_4962() )))
    {
        return 1;
    }
    return 0;
}

int sub_32549(unknown uParam0, int iParam1, int iParam2, unknown uParam3, int iParam4)
{
    int iVar7;
    int iVar8;
    int iVar9;

    if (sub_32560( uParam0 ))
    {
        (uParam3^) = iParam2;
    }
    else
    {
        iVar7 = iParam2 - (uParam3^);
        iVar8 = iParam4 - iVar7;
        iVar9 = iVar8 / 1000;
        if (iVar9 > 0)
        {
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
            iVar9 = iVar8 / 1000;
            if (iParam1 == nil)
            {
                if (iVar9 == 1)
                {
                    PRINT_WITH_NUMBER_NOW( "RACEOUTCAR", iVar9, 250, 1 );
                }
                else
                {
                    PRINT_WITH_NUMBER_NOW( "RACEOUTCARs", iVar9, 250, 1 );
                }
            }
            else if (iVar9 == 1)
            {
                PRINT_WITH_NUMBER_NOW( "RACEOUTCARBLIP", iVar8 / 1000, 250, 1 );
            }
            else
            {
                PRINT_WITH_NUMBER_NOW( "RACEOUTCARBLIPS", iVar8 / 1000, 250, 1 );
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_32560(unknown uParam0)
{
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_4962(), uParam0 ))
        {
            if ((((((((((((IS_CAR_MODEL( uParam0, 1171614426 )) || (IS_CAR_MODEL( uParam0, 1127131465 ))) || (IS_CAR_MODEL( uParam0, 1938952078 ))) || (IS_CAR_MODEL( uParam0, 148777611 ))) || (IS_CAR_MODEL( uParam0, 1911513875 ))) || (IS_CAR_MODEL( uParam0, 2046537925 ))) || (IS_CAR_MODEL( uParam0, -1627000575 ))) || (IS_CAR_MODEL( uParam0, -350085182 ))) || (IS_CAR_MODEL( uParam0, -1900572838 ))) || (IS_CAR_MODEL( uParam0, -1660661558 ))) || (IS_CAR_MODEL( uParam0, 353883353 ))) || (IS_CAR_MODEL( uParam0, 837858166 )))
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_33145()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT l_U779)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (IS_CAR_DEAD( l_U733[I] )))
            {
                ADD_STUCK_CAR_CHECK_WITH_WARP( l_U733[I], 2.00000000, 2000, 1, 1, 1, 1 );
            }
        }
        l_U779 = 1;
    }
    else
    {
        for ( I = 0; I < 5; I++ )
        {
            if (l_U753 > l_U739[I])
            {
                iVar3 = l_U753 - l_U739[I];
                if (iVar3 > 1)
                {
                    l_U757 = l_U739[I];
                    GET_GROUND_Z_FOR_3D_COORD( l_U520[l_U757]._fU0, l_U520[l_U757]._fU4, l_U520[l_U757]._fU8 + 3.00000000, ref uVar4 );
                    GET_GAME_VIEWPORT_ID( ref uVar5 );
                    if (NOT (CAM_IS_SPHERE_VISIBLE( uVar5, l_U520[l_U757]._fU0, l_U520[l_U757]._fU4, uVar4, 10.00000000 )))
                    {
                        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( l_U520[l_U757]._fU0, l_U520[l_U757]._fU4, l_U520[l_U757]._fU8, 3.00000000, 3.00000000, 3.00000000 )))
                        {
                            if (((NOT (IS_CAR_DEAD( l_U733[I] ))) AND (NOT (IS_CHAR_DEAD( l_U721[I] )))) AND (NOT (IS_CHAR_INJURED( l_U721[I] ))))
                            {
                                if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_4962(), l_U520[l_U757]._fU0, l_U520[l_U757]._fU4, l_U520[l_U757]._fU8, 10.00000000, 10.00000000, 10.00000000, 0 )))
                                {
                                    if (NOT (IS_CAR_ON_SCREEN( l_U733[I] )))
                                    {
                                        SET_CAR_COORDINATES( l_U733[I], l_U520[l_U757]._fU0, l_U520[l_U757]._fU4, uVar4 );
                                        l_U757++;
                                        l_U739[I] = l_U757;
                                        TURN_CAR_TO_FACE_COORD( l_U733[I], l_U520[l_U757]._fU0, l_U520[l_U757]._fU4 );
                                        l_U758 = l_U745[I];
                                        TASK_CAR_DRIVE_TO_COORD( l_U721[I], l_U733[I], l_U520[l_U757]._fU0, l_U520[l_U757]._fU4, l_U520[l_U757]._fU8, l_U758, 1, 0, 2, 10.00000000, 20 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_33892()
{
    int iVar2;

    if (NOT (sub_9998( l_U810 )))
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (IS_CAR_DEAD( l_U751 )))
            {
                if (IS_CHAR_IN_CAR( sub_4962(), l_U751 ))
                {
                    GET_GAME_TIMER( ref iVar2 );
                    if ((iVar2 - l_U764) > 20000)
                    {
                        if (l_U759 > 0)
                        {
                            sub_9000( "BR4_RACEN", ref l_U810, 6, 1 );
                        }
                        else
                        {
                            sub_9000( "BR4_RACEW", ref l_U810, 6, 1 );
                        }
                        GET_GAME_TIMER( ref l_U764 );
                    }
                }
            }
        }
    }
    return;
}

void sub_34131(unknown uParam0, int iParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    float fVar18;
    float fVar19;

    if (NOT sub_28826())
    {
        if (IS_HUD_PREFERENCE_SWITCHED_ON())
        {
            if (GET_IS_HIDEF())
            {
                uVar14 = l_U482;
                uVar15 = l_U483;
                uVar16 = l_U499;
                uVar17 = l_U493;
                fVar18 = 0.00000000;
            }
            else
            {
                uVar14 = l_U484;
                uVar15 = l_U485;
                uVar16 = l_U499;
                uVar17 = l_U494;
                fVar18 = 0.00000000;
            }
            fVar19 = sub_34260();
            if ((fVar19 > 1.24000000) AND (fVar19 < 1.26000000))
            {
                uVar16 = l_U500;
                uVar17 = l_U495;
                fVar18 = l_U486;
            }
            SET_WIDESCREEN_FORMAT( 3 );
            DISPLAY_AREA_NAME( 0 );
            if (iParam1 == 1)
            {
                GET_HUD_COLOUR( 10, ref uVar8, ref uVar9, ref uVar10, ref uVar11 );
            }
            else
            {
                GET_HUD_COLOUR( 7, ref uVar8, ref uVar9, ref uVar10, ref uVar11 );
            }
            if (IS_NETWORK_SESSION())
            {
                GET_HUD_COLOUR( sub_34411( uParam5 ), ref uVar8, ref uVar9, ref uVar10, ref uVar11 );
            }
            if (iParam4 > 1)
            {
                sub_34727( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar12 = sub_34949( "OUTOF_NUM", uVar14, l_U510 + uVar15, l_U511, l_U512, uVar8, uVar9, uVar10, uVar11, 3, uParam2 );
                sub_34727( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar13 = sub_35292( iParam1, uVar14, l_U506 + uVar15, l_U507, l_U508, uVar8, uVar9, uVar10, uVar11, 3 );
                if (fVar12 < fVar13)
                {
                    fVar12 = fVar13;
                }
                sub_34727( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_35895( (uVar14 - fVar12) - uVar16, l_U502 + uVar15, l_U503, l_U504, uVar8, uVar9, uVar10, uVar11, 3, iParam1 );
                sub_34727( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_36077( "NUM_OUTOF_NUM", uVar14, l_U490 + uVar15, l_U491, l_U492, 255, 255, 255, 255, 3, iParam3 + 1, iParam4 );
                sub_34727( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_36077( "LAP", uVar17, l_U496 + uVar15, l_U497, l_U498, 255, 255, 255, 255, 3, iParam3 + 1, iParam4 );
            }
            else
            {
                sub_34727( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar12 = sub_34949( "OUTOF_NUM", uVar14, l_U509 + uVar15, l_U511, l_U512, uVar8, uVar9, uVar10, uVar11, 3, uParam2 );
                sub_34727( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar13 = sub_35292( iParam1, uVar14, l_U505 + uVar15, l_U507, l_U508, uVar8, uVar9, uVar10, uVar11, 3 );
                if (fVar12 < fVar13)
                {
                    fVar12 = fVar13;
                }
                sub_34727( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_35895( (uVar14 - fVar12) - uVar16, l_U501 + uVar15, l_U503, l_U504, uVar8, uVar9, uVar10, uVar11, 3, iParam1 );
            }
            sub_34727( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
            sub_36613( uVar14 + fVar18, l_U487 + uVar15, l_U488, l_U489, 255, 255, 255, 255, 3, uParam0, 1065353216 );
            SET_WIDESCREEN_FORMAT( 0 );
        }
    }
    return;
}

void sub_34260()
{
    return GET_ASPECT_RATIO();
}

void sub_34411(unknown uParam0)
{
    int[32] iVar3;

    array(ref iVar3, 32);
    iVar3[0] = 26;
    iVar3[1] = 27;
    iVar3[2] = 28;
    iVar3[3] = 29;
    iVar3[4] = 30;
    iVar3[5] = 31;
    iVar3[6] = 32;
    iVar3[7] = 33;
    iVar3[8] = 34;
    iVar3[9] = 35;
    iVar3[10] = 36;
    iVar3[11] = 37;
    iVar3[12] = 38;
    iVar3[13] = 39;
    iVar3[14] = 40;
    iVar3[15] = 41;
    iVar3[16] = 42;
    iVar3[17] = 43;
    iVar3[18] = 44;
    iVar3[19] = 45;
    iVar3[20] = 46;
    iVar3[21] = 47;
    iVar3[22] = 48;
    iVar3[23] = 49;
    iVar3[24] = 50;
    iVar3[25] = 51;
    iVar3[26] = 52;
    iVar3[27] = 53;
    iVar3[28] = 54;
    iVar3[29] = 55;
    iVar3[30] = 56;
    iVar3[31] = 57;
    return iVar3[uParam0];
}

void sub_34727(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    SET_TEXT_FONT( uParam0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
    SET_TEXT_EDGE( 0, 0, 0, 0, 255 );
    switch (uParam3)
    {
        case 1:
        SET_TEXT_BACKGROUND( 1 );
        break;
        case 2:
        SET_TEXT_DROPSHADOW( uParam4, uParam5, uParam6, uParam7, uParam8 );
        break;
        case 3:
        SET_TEXT_EDGE( uParam4, uParam5, uParam6, uParam7, uParam8 );
        break;
    }
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( uParam1, uParam2 );
    return;
}

void sub_34949(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_34989( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_NUMBER( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_34989(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 1:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 1 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 2:
        SET_TEXT_JUSTIFY( 1 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 3:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 1 );
        SET_TEXT_WRAP( 0.00000000, (uParam1^) );
        (uParam1^) = 0.00000000;
        break;
    }
    return;
}

void sub_35292(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if ((((((iParam0 == 1) || (iParam0 == 21)) || (iParam0 == 31)) || (iParam0 == 41)) || (iParam0 == 51)) || (iParam0 == 61))
    {
        return sub_35367( "ST", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
    }
    if ((((((iParam0 == 2) || (iParam0 == 22)) || (iParam0 == 32)) || (iParam0 == 42)) || (iParam0 == 52)) || (iParam0 == 62))
    {
        return sub_35367( "ND", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
    }
    if ((((((iParam0 == 3) || (iParam0 == 23)) || (iParam0 == 33)) || (iParam0 == 43)) || (iParam0 == 53)) || (iParam0 == 63))
    {
        return sub_35367( "RD", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
    }
    return sub_35367( "TH", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
}

void sub_35367(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    float Result;

    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_34989( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH( uParam0 );
    if (((uParam10) AND (Result >= 0.25000000)) AND ((NOT GET_IS_WIDESCREEN()) AND (NOT GET_IS_HIDEF())))
    {
        while (NOT (sub_35458( uParam0, uParam1, uParam3, uParam4, uParam9, ref Result, 0 )))
        {
            ;
        }
    }
    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    DISPLAY_TEXT( uParam1, uParam2, uParam0 );
    return Result;
}

boolean sub_35458(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6)
{
    SET_TEXT_SCALE( uParam2 * 0.80000000, uParam3 * 0.80000000 );
    sub_34989( uParam4, ref uParam1 );
    if (bParam6)
    {
        (uParam5^) = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam0 );
    }
    else
    {
        (uParam5^) = GET_STRING_WIDTH( uParam0 );
    }
    return (uParam5^) < 0.25000000;
}

void sub_35895(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_34989( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam9 );
    DISPLAY_TEXT_WITH_NUMBER( uParam0, uParam1, "NUMBER", uParam9 );
    return Result;
}

void sub_36077(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    float Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_34989( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    Result += GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam11 );
    Result -= GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", 11 );
    DISPLAY_TEXT_WITH_2_NUMBERS( uParam1, uParam2, uParam0, uParam10, uParam11 );
    return Result;
}

float sub_36613(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, int iParam9, unknown uParam10)
{
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;

    if (iParam9 < 0)
    {
        iParam9 = 0;
    }
    else if (iParam9 > 5999990)
    {
        iParam9 = 5999990;
    }
    iVar13 = iParam9 / 10;
    iVar14 = iParam9 / 1000;
    iVar15 = iVar14 / 60;
    iVar13 -= iVar14 * 100;
    iVar14 -= iVar15 * 60;
    iVar16 = iVar13 / 10;
    iVar17 = iVar13 mod 10;
    iVar18 = iVar14 / 10;
    iVar19 = iVar14 mod 10;
    iVar20 = iVar15 / 10;
    iVar21 = iVar15 mod 10;
    SET_TEXT_SCALE( uParam2, uParam3 );
    fVar22 = (GET_STRING_WIDTH_WITH_STRING( "STRING", "0" )) * uParam10;
    fVar23 = (GET_STRING_WIDTH( "COLON" )) * uParam10;
    fVar24 = fVar22 * 0.50000000;
    fVar25 = fVar23 * 0.50000000;
    if (iParam8 == 2)
    {
        fVar26 = uParam0 + (fVar22 / 2);
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35367( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35367( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
    }
    else if (iParam8 == 3)
    {
        fVar26 = uParam0 - (fVar22 / 2);
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35367( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35367( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    else
    {
        fVar26 = uParam0 + fVar24;
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35367( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 = uParam0 - fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35367( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35895( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    return (6 * fVar22) + (2 * fVar23);
}

void sub_38127()
{
    int iVar2;

    if (NOT l_U1012)
    {
        if (NOT sub_25687())
        {
            l_U1012 = 1;
        }
    }
    else if ((l_U1011 > 0) AND (NOT l_U1013))
    {
        if (sub_25687())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_10725( ref l_U786, 0 );
            l_U1013 = 1;
            l_U1011 = 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U700 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U700 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U700, 1 );
        }
    }
    switch (l_U1011)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U751 )))
        {
            GET_GAME_TIMER( ref l_U931 );
            if ((IS_CAR_STOPPED( l_U751 )) || ((l_U931 - l_U930) > 7000))
            {
                if (sub_6249())
                {
                    SET_PLAYER_CONTROL( sub_6345(), 0 );
                    sub_38436();
                    sub_4404();
                    SWITCH_ROADS_OFF( 1091.87000000, -31.89750000, 0.00000000, 1100.39600000, 81.41570000, 100.00000000 );
                    SWITCH_ROADS_OFF( 1101.23200000, 13.61170000, 0.00000000, 1187.49400000, 18.33670000, 100.00000000 );
                    SWITCH_ROADS_OFF( 977.41240000, -9.63920000, 0.00000000, 1094.03200000, -4.93070000, 100.00000000 );
                    if (DOES_BLIP_EXIST( l_U755 ))
                    {
                        REMOVE_BLIP( l_U755 );
                    }
                    if (DOES_BLIP_EXIST( l_U756 ))
                    {
                        REMOVE_BLIP( l_U756 );
                    }
                    if (DOES_BLIP_EXIST( l_U752 ))
                    {
                        REMOVE_BLIP( l_U752 );
                    }
                    if (l_U817)
                    {
                        sub_38830();
                    }
                    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                    BEGIN_CAM_COMMANDS( ref l_U713 );
                    DISPLAY_RADAR( 0 );
                    SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                    CREATE_CAM( 14, ref l_U714[0] );
                    CREATE_CAM( 14, ref l_U714[1] );
                    CREATE_CAM( 3, ref l_U714[2] );
                    SET_CAM_POS( l_U714[0], 1093.87200000, -4.75640800, 33.59526000 );
                    SET_CAM_ROT( l_U714[0], 9.92269800, -0.00000000, -33.34053000 );
                    SET_CAM_FOV( l_U714[0], 35.40002000 );
                    SET_CAM_POS( l_U714[1], 1093.83300000, -4.81514800, 33.89901000 );
                    SET_CAM_ROT( l_U714[1], 6.84315700, -0.00000000, -33.34053000 );
                    SET_CAM_FOV( l_U714[1], 35.40002000 );
                    SET_CAM_ACTIVE( l_U714[1], 1 );
                    SET_CAM_PROPAGATE( l_U714[1], 0 );
                    SET_CAM_ACTIVE( l_U714[2], 0 );
                    SET_CAM_PROPAGATE( l_U714[2], 0 );
                    CLEAR_AREA( 1098.47000000, 0.42790000, 33.05900000, 100.00000000, 1 );
                    SWITCH_ROADS_OFF( 1547.38500000, 861.09170000, 0.00000000, 1549.60900000, 923.23080000, 100.00000000 );
                    if (NOT (DOES_VEHICLE_EXIST( l_U751 )))
                    {
                        CREATE_CAR( l_U645, 1098.47000000, 0.42790000, 33.05900000, ref l_U751, 1 );
                        CHANGE_CAR_COLOUR( l_U751, 86, 86 );
                        SET_EXTRA_CAR_COLOURS( l_U751, 27, 0 );
                        SET_CAR_HEADING( l_U751, 180.01540000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U751 );
                    }
                    else if (NOT (IS_CAR_DEAD( l_U751 )))
                    {
                        SET_CAR_COORDINATES( l_U751, 1098.47000000, 0.42790000, 33.05900000 );
                        SET_CAR_HEADING( l_U751, 180.01540000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U751 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U751 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_4962(), l_U751 )))
                        {
                            WARP_CHAR_INTO_CAR( sub_4962(), l_U751 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U700 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U700, l_U751, 0 );
                            sub_24670();
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( l_U700 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_4962(), l_U700, -2, 0 );
                    }
                    SET_CAM_ACTIVE( l_U714[0], 1 );
                    SET_CAM_PROPAGATE( l_U714[0], 1 );
                    SET_CAM_ACTIVE( l_U714[0], 0 );
                    SET_CAM_PROPAGATE( l_U714[0], 0 );
                    SET_CAM_INTERP_STYLE_CORE( l_U714[2], l_U714[0], l_U714[1], 10000, 0 );
                    SET_CAM_ACTIVE( l_U714[2], 1 );
                    SET_CAM_PROPAGATE( l_U714[2], 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    sub_9000( "BR4_WIN", ref l_U786, 6, 1 );
                    l_U1011 = 1;
                }
            }
        }
        break;
        case 1:
        iVar2 = sub_12022( l_U786 );
        if ((iVar2 > 2) || (l_U1013))
        {
            TASK_CLEAR_LOOK_AT( sub_4962() );
            SET_CAM_ACTIVE( l_U714[0], 0 );
            SET_CAM_PROPAGATE( l_U714[0], 0 );
            SET_CAM_ACTIVE( l_U714[1], 0 );
            SET_CAM_PROPAGATE( l_U714[1], 0 );
            SET_CAM_ACTIVE( l_U714[2], 0 );
            SET_CAM_PROPAGATE( l_U714[2], 0 );
            DESTROY_CAM( l_U714[2] );
            DESTROY_CAM( l_U714[1] );
            DESTROY_CAM( l_U714[0] );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_6827();
            DISPLAY_RADAR( 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            if (NOT (IS_CHAR_DEAD( l_U700 )))
            {
                SET_GROUP_MEMBER( sub_8739(), l_U700 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U700, 1 );
            }
            if (l_U1013)
            {
                DO_SCREEN_FADE_IN( 500 );
            }
            else
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            END_CAM_COMMANDS( ref l_U713 );
            CLEAR_CHAR_TASKS( sub_4962() );
            if (NOT (IS_CHAR_DEAD( l_U700 )))
            {
                STOP_PED_SPEAKING( l_U700, 0 );
            }
            SET_PLAYER_CONTROL( sub_6345(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
            REQUEST_ANIMS( "MISSPASS" );
            l_U1011 = 2;
            l_U681 = 12;
        }
        break;
    }
    return;
}

void sub_38436()
{
    int I;

    l_U914 = 0;
    if (NOT l_U913)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (DOES_VEHICLE_EXIST( l_U733[I] ))
            {
                if (NOT (IS_CAR_DEAD( l_U733[I] )))
                {
                    SET_CAR_PROOFS( l_U733[I], 0, 0, 0, 0, 0 );
                }
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U733[I] );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 418536135 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1821991593 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1896659641 );
        l_U913 = 1;
    }
    return;
}

void sub_38830()
{
    int I;

    for ( I = 0; I < 5; I++ )
    {
        if (DOES_CHAR_EXIST( l_U721[I] ))
        {
            DELETE_CHAR( ref l_U721[I] );
        }
        if (DOES_VEHICLE_EXIST( l_U733[I] ))
        {
            DELETE_CAR( ref l_U733[I] );
        }
    }
    return;
}

void sub_40264()
{
    int iVar2;

    if (NOT l_U912)
    {
        l_U912 = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U700 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U700 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U700, 1 );
        }
    }
    switch (l_U939)
    {
        case 0:
        if (DOES_BLIP_EXIST( l_U755 ))
        {
            REMOVE_BLIP( l_U755 );
        }
        if (DOES_BLIP_EXIST( l_U756 ))
        {
            REMOVE_BLIP( l_U756 );
        }
        if (NOT (IS_CHAR_DEAD( l_U700 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4962(), l_U700, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U700, sub_8739() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4962(), l_U700, 12.00000000, 12.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U701 ))
                        {
                            REMOVE_BLIP( l_U701 );
                        }
                        SET_GROUP_MEMBER( sub_8739(), l_U700 );
                        CLEAR_PRINTS();
                    }
                }
                else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4962() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4962(), ref iVar2 );
                    if (IS_CHAR_IN_CAR( l_U700, iVar2 ))
                    {
                        if (iVar2 == l_U751)
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U694 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U691._fU0, l_U691._fU4, l_U691._fU8, ref l_U694 );
                                SET_ROUTE( l_U694, 1 );
                            }
                            if (NOT (sub_9998( l_U786 )))
                            {
                                if (NOT (sub_11375( l_U786 )))
                                {
                                    l_U939 = 2;
                                }
                                else
                                {
                                    sub_11433( "BR4_WIN", ref l_U786, 6, 1 );
                                }
                            }
                        }
                        else if (DOES_BLIP_EXIST( l_U694 ))
                        {
                            REMOVE_BLIP( l_U694 );
                        }
                        if (NOT (IS_CAR_DEAD( l_U751 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U752 )))
                            {
                                ADD_BLIP_FOR_CAR( l_U751, ref l_U752 );
                                CHANGE_BLIP_COLOUR( l_U752, 3 );
                                CLEAR_PRINTS();
                                PRINT_NOW( "BRK_16", 7500, 1 );
                            }
                        }
                    }
                }
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( l_U700 );
                sub_11813( "Not close enough" );
                if (DOES_BLIP_EXIST( l_U752 ))
                {
                    REMOVE_BLIP( l_U752 );
                }
                if (DOES_BLIP_EXIST( l_U694 ))
                {
                    REMOVE_BLIP( l_U694 );
                }
                if (sub_9998( l_U786 ))
                {
                    sub_13420( ref l_U786 );
                }
                if (DOES_BLIP_EXIST( l_U701 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U700 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4962(), l_U700, 10.00000000, 10.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U701 );
                            SET_GROUP_MEMBER( sub_8739(), l_U700 );
                            CLEAR_PRINTS();
                        }
                    }
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        ;
                    }
                }
                else
                {
                    ADD_BLIP_FOR_CHAR( l_U700, ref l_U701 );
                    CHANGE_BLIP_COLOUR( l_U701, 3 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "BRK_21", 7500, 1 );
                }
            }
            if (IS_GROUP_MEMBER( l_U700, sub_8739() ))
            {
                sub_11813( "In group" );
            }
            else
            {
                sub_11813( "Not in group" );
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U700 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4962(), l_U700, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U700, sub_8739() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4962(), l_U700, 12.00000000, 12.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U701 ))
                        {
                            REMOVE_BLIP( l_U701 );
                        }
                        SET_GROUP_MEMBER( sub_8739(), l_U700 );
                        CLEAR_PRINTS();
                    }
                }
                else if (l_U652[22])
                {
                    if (NOT sub_41466())
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U694 )))
                        {
                            PRINT_NOW( "BRK_22", 7500, 1 );
                            ADD_BLIP_FOR_COORD( l_U691._fU0, l_U691._fU4, l_U691._fU8, ref l_U694 );
                            SET_ROUTE( l_U694, 1 );
                        }
                    }
                    else if (NOT (IS_CAR_DEAD( l_U751 )))
                    {
                        if (IS_CHAR_IN_CAR( sub_4962(), l_U751 ))
                        {
                            if (DOES_BLIP_EXIST( l_U752 ))
                            {
                                REMOVE_BLIP( l_U752 );
                            }
                            if (NOT (DOES_BLIP_EXIST( l_U694 )))
                            {
                                PRINT_NOW( "BRK_22", 7500, 1 );
                                ADD_BLIP_FOR_COORD( l_U691._fU0, l_U691._fU4, l_U691._fU8, ref l_U694 );
                                SET_ROUTE( l_U694, 1 );
                            }
                        }
                    }
                }
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_4962(), l_U691._fU0, l_U691._fU4, l_U691._fU8 + (2.50000000 / 2.00000000), 2.50000000, 2.50000000, 2.50000000, 1 )) AND (NOT sub_41466()))
                {
                    if (DOES_BLIP_EXIST( l_U694 ))
                    {
                        REMOVE_BLIP( l_U694 );
                    }
                    CLEAR_THIS_PRINT( "BRK_21" );
                    sub_10725( ref l_U792, 0 );
                    CLEAR_CHAR_TASKS( l_U700 );
                    REMOVE_CHAR_FROM_GROUP( l_U700 );
                    l_U681 = 13;
                }
                else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4962() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4962(), ref iVar2 );
                    if (IS_CHAR_IN_CAR( l_U700, iVar2 ))
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( sub_4962(), l_U691._fU0, l_U691._fU4, l_U691._fU8 + (2.50000000 / 2.00000000), 2.50000000, 2.50000000, 2.50000000, 1 ))
                        {
                            if (DOES_BLIP_EXIST( l_U694 ))
                            {
                                REMOVE_BLIP( l_U694 );
                            }
                            CLEAR_THIS_PRINT( "BRK_21" );
                            sub_10725( ref l_U792, 0 );
                            CLEAR_CHAR_TASKS( l_U700 );
                            REMOVE_CHAR_FROM_GROUP( l_U700 );
                            l_U681 = 13;
                        }
                        else if (sub_9998( l_U792 ))
                        {
                            l_U886 = sub_12022( l_U792 );
                        }
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U652[22])
                            {
                                PRINT_NOW( "BRK_22", 7500, 1 );
                                if (NOT (DOES_BLIP_EXIST( l_U694 )))
                                {
                                    ADD_BLIP_FOR_COORD( l_U691._fU0, l_U691._fU4, l_U691._fU8, ref l_U694 );
                                    SET_ROUTE( l_U694, 1 );
                                }
                                l_U652[22] = 1;
                            }
                            else if ((iVar2 == l_U751) || (NOT sub_41466()))
                            {
                                if (NOT (sub_9998( l_U792 )))
                                {
                                    if (NOT l_U940)
                                    {
                                        if (g_U64730 == 0)
                                        {
                                            sub_9023( "BR4_B3AV1", "BR4BAUD", ref l_U792, 6, 1 );
                                            l_U940 = 1;
                                            g_U64730++;
                                        }
                                        else if (g_U64730 == 1)
                                        {
                                            sub_9023( "BR4_B3V1", "BR4BAUD", ref l_U792, 6, 1 );
                                            l_U940 = 1;
                                            g_U64730++;
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U700, "LISTEN_TO_RADIO", 1, 1, 0 );
                                            l_U940 = 1;
                                            g_U64730++;
                                        }
                                    }
                                    else if (sub_11375( l_U792 ))
                                    {
                                        if (g_U64730 == 1)
                                        {
                                            sub_11456( "BR4_B3AV1", "BR4BAUD", ref l_U792, 6, 1 );
                                        }
                                        else if (g_U64730 == 2)
                                        {
                                            sub_11456( "BR4_B3V1", "BR4BAUD", ref l_U792, 6, 1 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else if (sub_41466())
                {
                    if (DOES_BLIP_EXIST( l_U694 ))
                    {
                        REMOVE_BLIP( l_U694 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U751 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U752 )))
                        {
                            ADD_BLIP_FOR_CAR( l_U751, ref l_U752 );
                            CHANGE_BLIP_COLOUR( l_U752, 3 );
                            CLEAR_PRINTS();
                            PRINT_NOW( "BRK_16", 7500, 1 );
                        }
                    }
                }
                if (sub_9998( l_U792 ))
                {
                    if (sub_41466())
                    {
                        sub_13420( ref l_U792 );
                    }
                    else
                    {
                        sub_12496( ref l_U792 );
                    }
                };;;;
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( l_U700 );
                sub_11813( "Not close enough" );
                if (DOES_BLIP_EXIST( l_U694 ))
                {
                    REMOVE_BLIP( l_U694 );
                }
                if (DOES_BLIP_EXIST( l_U752 ))
                {
                    REMOVE_BLIP( l_U752 );
                }
                if (sub_9998( l_U792 ))
                {
                    sub_13420( ref l_U792 );
                }
                if (DOES_BLIP_EXIST( l_U701 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U700 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4962(), l_U700, 10.00000000, 10.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U701 );
                            SET_GROUP_MEMBER( sub_8739(), l_U700 );
                            CLEAR_PRINTS();
                        }
                    }
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        ;
                    }
                }
                else
                {
                    ADD_BLIP_FOR_CHAR( l_U700, ref l_U701 );
                    CHANGE_BLIP_COLOUR( l_U701, 3 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "BRK_21", 7500, 1 );
                }
            }
            if (IS_GROUP_MEMBER( l_U700, sub_8739() ))
            {
                sub_11813( "In group" );
            }
            else
            {
                sub_11813( "Not in group" );
            }
        }
        break;
    }
    if (NOT l_U817)
    {
        if (sub_23584())
        {
            l_U681 = 10;
        }
    }
    return;
}

void sub_41466()
{
    int iVar2;

    iVar2 = g_U64730 - 1;
    if (l_U887)
    {
        if (l_U720)
        {
            if (iVar2 == 0)
            {
                if (l_U886 > 7)
                {
                    sub_4613( l_U886, "Returning False (1) because iTakeBrucieHomeSPeechLineCount is ..." );
                    l_U887 = 0;
                }
            }
            else if (iVar2 == 1)
            {
                if (l_U886 > 10)
                {
                    sub_4613( l_U886, "Returning False (2) because iTakeBrucieHomeSPeechLineCount is ..." );
                    l_U887 = 0;
                }
            }
            else if (iVar2 > 1)
            {
                sub_4613( g_U64730, "Returning False (3) because iTakeBrucieHomeCount is ..." );
                sub_4613( iVar2, "and iTempCount is ..." );
                l_U887 = 0;
            };;;
        }
    }
    if (l_U720)
    {
        sub_11813( "bPlayerWonRace is TRUE" );
    }
    else
    {
        sub_11813( "bPlayerWonRace is FALSE" );
    }
    sub_4613( l_U886, "Returning TRUE because iTakeBrucieHomeSPeechLineCount is ..." );
    return l_U887;
}

void sub_43759(unknown uParam0, int iParam1, boolean bParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;

    if (NOT l_U984)
    {
        if (NOT sub_25687())
        {
            l_U984 = 1;
        }
    }
    else if (((l_U992 > 0) AND (NOT l_U985)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_25687())
        {
            CLEAR_PRINTS();
            DISABLE_PAUSE_MENU( 1 );
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            DISABLE_PAUSE_MENU( 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U985 = 1;
            l_U992 = 3;
        }
    }
    switch (l_U992)
    {
        case 0:
        if (sub_43959( 1, 0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U700 )))
            {
                if (NOT l_U983)
                {
                    if (NOT l_U982)
                    {
                        sub_4404();
                        ENABLE_CHASE_AUDIO( 0 );
                        if (IS_CHAR_IN_ANY_CAR( l_U700 ))
                        {
                            GET_CAR_CHAR_IS_USING( l_U700, ref iVar6 );
                            SET_CAR_CAN_BE_DAMAGED( iVar6, 0 );
                        }
                        if (sub_6249())
                        {
                            sub_44352();
                            BEGIN_CAM_COMMANDS( ref l_U713 );
                            SET_PLAYER_CONTROL( sub_6345(), 0 );
                            if (NOT bParam2)
                            {
                                DISABLE_PAUSE_MENU( 1 );
                                DO_SCREEN_FADE_OUT( 500 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                DISABLE_PAUSE_MENU( 0 );
                            }
                            else if ((NOT (IS_CHAR_IN_ANY_CAR( sub_4962() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U700 ))))
                            {
                                DISABLE_PAUSE_MENU( 1 );
                                DO_SCREEN_FADE_OUT( 500 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                DISABLE_PAUSE_MENU( 0 );
                            }
                            SET_USE_HIGHDOF( 1 );
                            sub_44782();
                            SWITCH_ROADS_OFF( 758.64160000, 106.82660000, 0.00000000, 776.90300000, 161.44880000, 100.00000000 );
                            sub_38436();
                            REQUEST_ANIMS( "MISSPASS" );
                            while (NOT (HAVE_ANIMS_LOADED( "MISSPASS" )))
                            {
                                WAIT( 0 );
                            }
                            if (NOT (IS_CHAR_DEAD( l_U700 )))
                            {
                                if (IS_GROUP_MEMBER( l_U700, sub_8739() ))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U700 );
                                }
                            }
                            sub_3522( 0 );
                            DISPLAY_RADAR( 0 );
                            SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                            CREATE_CAM( 14, ref l_U714[0] );
                            SET_CAM_POS( l_U714[0], 765.92030000, 129.52090000, 8.38073500 );
                            SET_CAM_ROT( l_U714[0], -4.84471900, 0.00000000, -123.43210000 );
                            SET_CAM_FOV( l_U714[0], 31.50003000 );
                            SET_CAM_ACTIVE( l_U714[0], 1 );
                            SET_CAM_PROPAGATE( l_U714[0], 1 );
                            SET_CAM_NEAR_DOF( l_U714[0], 3.00000000 );
                            SET_CAM_FAR_DOF( l_U714[0], 30.00000000 );
                            CREATE_CAM( 14, ref l_U714[1] );
                            SET_CAM_POS( l_U714[1], 765.92030000, 129.52090000, 7.38073500 );
                            SET_CAM_ROT( l_U714[1], -4.84471900, 0.00000000, -123.43210000 );
                            SET_CAM_FOV( l_U714[1], 31.50003000 );
                            SET_CAM_ACTIVE( l_U714[1], 1 );
                            SET_CAM_PROPAGATE( l_U714[1], 0 );
                            SET_CAM_NEAR_DOF( l_U714[1], 3.00000000 );
                            SET_CAM_FAR_DOF( l_U714[1], 30.00000000 );
                            CREATE_CAM( 3, ref l_U714[2] );
                            SET_CAM_ACTIVE( l_U714[2], 0 );
                            SET_CAM_PROPAGATE( l_U714[2], 0 );
                            if (NOT bParam2)
                            {
                                CLEAR_AREA( 774.65390000, 123.16340000, 4.95750000, 50.00000000, 1 );
                                if (NOT (IS_CHAR_DEAD( l_U700 )))
                                {
                                    if ((IS_CHAR_IN_ANY_CAR( sub_4962() )) AND (NOT (sub_45453( sub_4962() ))))
                                    {
                                        GET_CAR_CHAR_IS_USING( sub_4962(), ref iVar6 );
                                        if (iVar6 != l_U751)
                                        {
                                            if (NOT (IS_CHAR_IN_CAR( l_U700, iVar6 )))
                                            {
                                                if (IS_CAR_PASSENGER_SEAT_FREE( iVar6, 0 ))
                                                {
                                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U700, iVar6, 0 );
                                                }
                                                else
                                                {
                                                    iVar6 = sub_45825( -344943009, 774.65390000, 123.16340000, 4.95750000, 14.20610000 );
                                                }
                                            }
                                            SET_CAR_COORDINATES( iVar6, 774.65390000, 123.16340000, 4.95750000 );
                                            SET_CAR_HEADING( iVar6, 14.20610000 );
                                        }
                                        else if (NOT bParam2)
                                        {
                                            iVar6 = sub_45825( -344943009, 774.65390000, 123.16340000, 4.95750000, 14.20610000 );
                                        }
                                        else if (NOT (IS_CAR_DEAD( l_U751 )))
                                        {
                                            SET_CAR_COORDINATES( l_U751, 774.65390000, 123.16340000, 4.95750000 );
                                            SET_CAR_HEADING( l_U751, 14.20610000 );
                                            SET_CAR_ON_GROUND_PROPERLY( l_U751 );
                                        };;;
                                    }
                                    else if (bParam2)
                                    {
                                        SET_CHAR_COORDINATES( l_U700, 1480.12300000, 54.03360000, 24.42310000 );
                                        SET_CHAR_HEADING( l_U700, 268.24010000 );
                                        SET_CHAR_COORDINATES( sub_4962(), 1480.25600000, 52.51360000, 24.41440000 );
                                        SET_CHAR_HEADING( sub_4962(), 32.27760000 );
                                    }
                                    else
                                    {
                                        iVar6 = sub_45825( -344943009, 774.65390000, 123.16340000, 4.95750000, 14.20610000 );
                                    }
                                }
                            }
                            else
                            {
                                CLEAR_AREA( 774.65390000, 123.16340000, 4.95750000, 50.00000000, 1 );
                                if ((NOT (IS_CHAR_IN_ANY_CAR( sub_4962() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U700 ))))
                                {
                                    SET_CHAR_COORDINATES( l_U700, 776.79250000, 122.53150000, 4.86990000 );
                                    SET_CHAR_HEADING( l_U700, 45.41750000 );
                                    SET_CHAR_COORDINATES( sub_4962(), 776.36650000, 124.35800000, 4.87430000 );
                                    SET_CHAR_HEADING( sub_4962(), 197.63250000 );
                                }
                            }
                            if (NOT bParam2)
                            {
                                LOAD_SCENE( 770.17630000, 126.77630000, 7.19407500 );
                            }
                            SET_CAM_ACTIVE( l_U714[0], 0 );
                            SET_CAM_PROPAGATE( l_U714[0], 0 );
                            SET_CAM_INTERP_STYLE_CORE( l_U714[2], l_U714[0], l_U714[1], 12000 + (iParam1 * 5000), 0 );
                            SET_CAM_ACTIVE( l_U714[2], 1 );
                            SET_CAM_PROPAGATE( l_U714[2], 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            if (NOT bParam2)
                            {
                                DO_SCREEN_FADE_IN( 500 );
                            }
                            else if ((NOT (IS_CHAR_IN_ANY_CAR( sub_4962() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U700 ))))
                            {
                                DO_SCREEN_FADE_IN( 500 );
                            }
                            l_U992 = 2;
                        }
                    }
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U700 )))
        {
            if (NOT l_U983)
            {
                if (NOT l_U982)
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U700 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U703[0] );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4962() );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "bye", "MISSPASS", 1.00000000, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U703[0] );
                        TASK_PERFORM_SEQUENCE( l_U700, l_U703[0] );
                        CLEAR_SEQUENCE_TASK( l_U703[0] );
                    }
                    else
                    {
                        TASK_LOOK_AT_CHAR( l_U700, sub_4962(), -1, 0 );
                    }
                    TASK_LOOK_AT_CHAR( sub_4962(), l_U700, -1, 0 );
                    l_U982 = 1;
                    sub_9000( uParam0, ref l_U986, 6, 1 );
                    l_U983 = 1;
                    l_U982 = 0;
                }
            }
            else if (NOT l_U982)
            {
                if (NOT (sub_9998( l_U986 )))
                {
                    if (sub_46979( l_U700, 1, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U703[0] );
                        TASK_CLEAR_LOOK_AT( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 792.28660000, 126.91900000, 6.03550000, 2, -1, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( l_U703[0] );
                        TASK_PERFORM_SEQUENCE( l_U700, l_U703[0] );
                        CLEAR_SEQUENCE_TASK( l_U703[0] );
                        GET_GAME_TIMER( ref l_U947 );
                        l_U982 = 1;
                    }
                }
                else if (NOT (IS_CHAR_DEAD( l_U700 )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U700 ))
                    {
                        iVar7 = sub_12022( l_U986 );
                        if (iVar7 >= iParam1)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U703[0] );
                            TASK_LEAVE_ANY_CAR( 0 );
                            CLOSE_SEQUENCE_TASK( l_U703[0] );
                            if (NOT (IS_CHAR_INJURED( l_U700 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U700, l_U703[0] );
                            }
                            CLEAR_SEQUENCE_TASK( l_U703[0] );
                        }
                    }
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U948 );
                if ((sub_46979( l_U700, 1, 0 )) || ((l_U948 - l_U947) > 4000))
                {
                    l_U992 = 3;
                }
            }
        }
        break;
        case 3:
        DELETE_CHAR( ref l_U700 );
        if (NOT l_U985)
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        }
        else
        {
            sub_10725( ref l_U986, 0 );
            if (IS_CHAR_IN_ANY_CAR( sub_4962() ))
            {
                GET_CAR_CHAR_IS_USING( sub_4962(), ref iVar6 );
                CLOSE_ALL_CAR_DOORS( iVar6 );
            }
        }
        SWITCH_ROADS_BACK_TO_ORIGINAL( 758.64160000, 106.82660000, 0.00000000, 776.90300000, 161.44880000, 100.00000000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_ACTIVE( l_U714[0], 0 );
        SET_CAM_PROPAGATE( l_U714[0], 0 );
        SET_CAM_ACTIVE( l_U714[1], 0 );
        SET_CAM_PROPAGATE( l_U714[1], 0 );
        SET_CAM_ACTIVE( l_U714[2], 0 );
        SET_CAM_PROPAGATE( l_U714[2], 0 );
        DESTROY_CAM( l_U714[0] );
        DESTROY_CAM( l_U714[1] );
        DESTROY_CAM( l_U714[2] );
        SET_USE_HIGHDOF( 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_6827();
        DISPLAY_RADAR( 1 );
        SET_INSTANT_WIDESCREEN_BORDERS( 0 );
        if (l_U985)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        END_CAM_COMMANDS( ref l_U713 );
        SET_PLAYER_CONTROL( sub_6345(), 1 );
        if (bParam2)
        {
            sub_47793();
        }
        else
        {
            sub_59431( uParam3 );
        }
        break;
    }
    return;
}

int sub_43959(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4962() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4962(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4962() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4962(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4962()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4962() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4962() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_6345() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_6345() )))
    {
        return 0;
    }
    return 1;
}

void sub_44352()
{
    if (DOES_BLIP_EXIST( l_U710 ))
    {
        REMOVE_BLIP( l_U710 );
    }
    if (DOES_BLIP_EXIST( l_U707 ))
    {
        REMOVE_BLIP( l_U707 );
    }
    if (DOES_BLIP_EXIST( l_U711 ))
    {
        REMOVE_BLIP( l_U711 );
    }
    if (DOES_BLIP_EXIST( l_U702 ))
    {
        REMOVE_BLIP( l_U702 );
    }
    if (DOES_BLIP_EXIST( l_U712 ))
    {
        REMOVE_BLIP( l_U712 );
    }
    if (DOES_BLIP_EXIST( l_U755 ))
    {
        REMOVE_BLIP( l_U755 );
    }
    if (DOES_BLIP_EXIST( l_U756 ))
    {
        REMOVE_BLIP( l_U756 );
    }
    if (DOES_BLIP_EXIST( l_U752 ))
    {
        REMOVE_BLIP( l_U752 );
    }
    return;
}

void sub_44782()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) > 0)
    {
        g_U2229 = 1;
    }
    return;
}

int sub_45453(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_45517( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_45517(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_45825(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    REQUEST_MODEL( uParam0 );
    while (NOT (HAS_MODEL_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    CREATE_CAR( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( Result );
    if (IS_CHAR_IN_ANY_CAR( sub_4962() ))
    {
        WARP_CHAR_FROM_CAR_TO_CAR( sub_4962(), Result, -1 );
    }
    else
    {
        WARP_CHAR_INTO_CAR( sub_4962(), Result );
    }
    if (NOT (IS_CHAR_DEAD( l_U700 )))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U700, Result, 0 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( uParam0 );
    return Result;
}

int sub_46979(unknown uParam0, boolean bParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
        if (bParam1)
        {
            if (iVar5 == 7)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (iVar5 == 1)
        {
            GET_SEQUENCE_PROGRESS( uParam0, ref iVar6 );
            if (iVar6 > iParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_47793()
{
    sub_47802();
    CLEAR_WANTED_LEVEL( sub_6345() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_2779();
    return;
}

void sub_47802()
{
    sub_47811();
    return;
}

void sub_47811()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_47829();
    sub_47888( iVar2, iVar3, iVar4 );
    return;
}

void sub_47829()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_47888(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 8;
    sub_47919( iVar5, uParam0, uParam1, uParam2, "Friend_9" );
    return;
}

void sub_47919(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_48015( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_48015( ref cVar9 );
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
            sub_48015( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_48015( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_48015( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_48015( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_48592( iParam0, iVar7 );;;
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
                sub_48989( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_48989( 0, 4 );
            }
        }
    }
    if (NOT (sub_49078( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6345(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_6345() );
    }
    sub_1877();
    bVar27 = true;
    uVar28 = sub_48592( iParam0, iVar7 );
    uVar29 = sub_1334( iParam0 );
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
                sub_58454( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_58884();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_58969( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_59026( iParam0 );
                sub_59065( 0 );
                sub_1775( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_59173();
        }
    }
    if (bParam2)
    {
        sub_58884();
        sub_59261();
        sub_59065( 0 );
    }
    if (bParam3)
    {
        sub_58884();
        sub_59301();
        sub_59065( 0 );
        sub_1775( uVar29, 0 );
    }
    sub_1221();
    return;
}

void sub_48015(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_48592(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1733( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_48989(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_49078(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_49286( uParam1 );
        break;
        case 1:
        bVar8 = sub_51364( uParam1 );
        break;
        case 2:
        bVar8 = sub_51590( uParam1 );
        break;
        case 3:
        bVar8 = sub_51740( uParam1 );
        break;
        case 4:
        bVar8 = sub_52018( uParam1 );
        break;
        case 5:
        bVar8 = sub_52321( uParam1 );
        break;
        case 6:
        bVar8 = sub_52520( uParam1 );
        break;
        case 7:
        bVar8 = sub_52746( uParam1 );
        break;
        case 8:
        bVar8 = sub_52981( uParam1 );
        break;
        case 9:
        bVar8 = sub_53356( uParam1 );
        break;
        case 10:
        bVar8 = sub_53603( uParam1 );
        break;
        case 11:
        bVar8 = sub_53742( uParam1 );
        break;
        case 12:
        bVar8 = sub_54041( uParam1 );
        break;
        case 13:
        bVar8 = sub_54269( uParam1 );
        break;
        case 14:
        bVar8 = sub_54556( uParam1 );
        break;
        case 15:
        bVar8 = sub_54838( uParam1 );
        break;
        case 16:
        bVar8 = sub_55120( uParam1 );
        break;
        case 17:
        bVar8 = sub_55321( uParam1 );
        break;
        case 18:
        bVar8 = sub_55394( uParam1 );
        break;
        case 19:
        bVar8 = sub_55608( uParam1 );
        break;
        case 20:
        bVar8 = sub_55861( uParam1 );
        break;
        case 21:
        bVar8 = sub_56108( uParam1 );
        break;
        case 22:
        bVar8 = sub_56309( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_50969( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_48592( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_56632( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_49286(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_49565( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_49565( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_49565( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_49565( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_49565( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_49565( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_49565( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_49565( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_49565( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_49565( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_49565( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_49565( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_49565( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_49565( iVar3, 0, 3, 1, 0, 0 );
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
        sub_49565( iVar3, 0, sub_50847(), sub_51113(), 0, 0 );
        break;
        default:
        sub_51272( "Friend 1", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Friend 1", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_49565(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_49576( uParam1 );
    sub_49750( uParam0, 0, uParam2 );
    sub_49750( uParam0, 1, uParam3 );
    sub_49750( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_47829();
    return;
}

void sub_49576(unknown uParam0)
{
    ADD_SCORE( sub_6345(), uParam0 );
    sub_49601( uParam0 );
    return;
}

void sub_49601(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1733( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_49750(unknown uParam0, int iParam1, int iParam2)
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
        sub_49907( uParam0 );
    }
    return;
}

void sub_49907(unknown uParam0)
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

int sub_50847()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_50969( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_50969(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_51113()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_50969( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_51272(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_51364(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_49565( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_51272( "Contact 2", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 2", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51590(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_49565( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_51272( "Girl 3", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Girl 3", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51740(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_49565( iVar3, 0, sub_50847(), sub_51113(), 0, 0 );
        break;
        default:
        sub_51272( "Friend 4", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Friend 4", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52018(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_49565( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_49565( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_49565( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_49565( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_51272( "Contact 5", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 5", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52321(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_51272( "Contact 7", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 7", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52520(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_49565( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_51272( "Contact 7b", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 7b", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52746(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_49565( iVar3, 0, sub_50847(), sub_51113(), 0, 0 );
        break;
        default:
        sub_51272( "Friend 8", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Friend 8", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52981(unknown uParam0)
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
        sub_49565( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_49565( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_49565( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_49565( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_49565( iVar3, 0, sub_50847(), sub_51113(), 0, 0 );
        break;
        default:
        sub_51272( "Friend 9", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Friend 9", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53356(unknown uParam0)
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
        sub_49565( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_49565( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_49565( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_51272( "Contact 10", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_51272( "Contact 10", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53603(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_51272( "Girl 11", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Girl 11", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53742(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_49565( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_49565( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_49565( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_49565( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_49565( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_51272( "Contact 12", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 12", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54041(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_49565( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_51272( "Contact 13", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 13", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54269(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_49565( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_49565( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_49565( iVar3, 0, sub_50847(), sub_51113(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_51272( "Friend 15", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Friend 15", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54556(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_49565( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_49565( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_49565( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_51272( "Contact 16", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 16", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54838(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_49565( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_49565( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_49565( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_51272( "Contact 18", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 18", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55120(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_51272( "Contact 19", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 19", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55321(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_51272( "Girl 20", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55394(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_51272( "Contact 21", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 21", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55608(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_49565( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_49565( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_51272( "Contact 22", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 22", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55861(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_49565( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_49565( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_49565( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_51272( "Contact 24", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 24", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56108(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49565( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_49565( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_49565( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_51272( "Contact 25", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_51272( "Contact 25", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56309(unknown uParam0)
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
        sub_49565( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_51272( "Girl 26", 1 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_51272( "Girl 26", 0 );
        sub_49565( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_56632(int iParam0, int iParam1)
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
    if (sub_56680( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_57411( iParam1 );
    }
    return;
}

int sub_56680(int iParam0, int iParam1)
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
            sub_56820( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_56820(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_57002( 0 );
    return;
}

void sub_57002(boolean bParam0)
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
        sub_57257();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_57257()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_57411(int iParam0)
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
        sub_57744( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_57744( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_57744( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_57744( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_57744( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_57744( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_57744( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_57744( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_57744( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_57744( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_57744( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_57744( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_57744( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_57744( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_57744( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_57744( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_57744( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_57744( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_57744( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_57744(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_58454(unknown uParam0, unknown uParam1)
{
    sub_58473( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_58473(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_58884()
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

int sub_58969(int iParam0, int iParam1)
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

void sub_59026(unknown uParam0)
{
    sub_1120();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_59065(unknown uParam0)
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

void sub_59173()
{
    sub_59182();
    return;
}

void sub_59182()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_59261()
{
    sub_59182();
    return;
}

void sub_59301()
{
    sub_59182();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_59431(unknown uParam0)
{
    sub_3522( 0 );
    sub_59446();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6345(), 150 );
        SAY_AMBIENT_SPEECH( sub_4962(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    switch (uParam0)
    {
        case 0: break;
        case 1:
        if (NOT l_U884)
        {
            PRINT_NOW( "BRK_24", 7000, 1 );
        }
        break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
    }
    sub_2779();
    return;
}

void sub_59446()
{
    sub_59455();
    return;
}

void sub_59455()
{
    int iVar2;

    iVar2 = 8;
    sub_59469( iVar2 );
    sub_1868( iVar2 );
    return;
}

void sub_59469(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_6345(), 150 );
    CLEAR_HELP();
    sub_692( uParam0 );
    return;
}

void sub_59770()
{
    if (NOT l_U884)
    {
        l_U884 = 1;
    }
    if (NOT l_U896)
    {
        if (NOT (IS_CAR_DEAD( l_U751 )))
        {
            if (DOES_BLIP_EXIST( l_U752 ))
            {
                REMOVE_BLIP( l_U752 );
            }
            switch (l_U895)
            {
                case 0:
                sub_3522( 0 );
                CLEAR_PRINTS();
                PRINT_NOW( "BRK_07", 7000, 1 );
                l_U895++;
                break;
                case 1:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    l_U895++;
                }
                break;
                case 2:
                l_U896 = 1;
                break;
            }
        }
    }
    return l_U896;
}

void sub_59999()
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
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    int iVar16;

    switch (l_U1017)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U751 )))
        {
            if (sub_43959( 1, 1 ))
            {
                if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4962(), l_U751 )))
                {
                    SET_PLAYER_CONTROL( sub_6345(), 0 );
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U751 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_4962(), l_U751 )))
                        {
                            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4962(), l_U751 )))
                            {
                                GET_DRIVER_OF_CAR( l_U751, ref iVar16 );
                                if (iVar16 == nil)
                                {
                                    WARP_CHAR_INTO_CAR( sub_4962(), l_U751 );
                                }
                            }
                        }
                    }
                    DO_SCREEN_FADE_IN( 500 );
                }
                GET_CAR_COORDINATES( l_U751, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8, ref uVar15 );
                l_U1024 = 1;
                sub_3522( 0 );
                SET_PLAYER_CONTROL( sub_6345(), 0 );
                DISPLAY_RADAR( 0 );
                SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                GET_CAR_COORDINATES( l_U751, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                CLEAR_AREA_OF_CARS( uVar6._fU0, uVar6._fU4, uVar6._fU8, 100.00000000 );
                SET_CAR_COORDINATES( l_U751, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
                SET_CAR_HEADING( l_U751, uVar15 );
                SET_CAR_ON_GROUND_PROPERLY( l_U751 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U751, 2.34700000, 5.47670000, 1.09550000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U751, 2.09890000, 4.95400000, 1.00450000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
                CREATE_CAM( 14, ref l_U714[0] );
                SET_CAM_POS( l_U714[0], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                POINT_CAM_AT_COORD( l_U714[0], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
                SET_CAM_FOV( l_U714[0], 30.00000000 );
                SET_CAM_ACTIVE( l_U714[0], 1 );
                SET_CAM_PROPAGATE( l_U714[0], 1 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U751, -2.05920000, 5.73090000, 1.11190000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U751, -1.95040000, 5.33070000, 1.04710000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
                CREATE_CAM( 14, ref l_U714[1] );
                SET_CAM_POS( l_U714[1], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                POINT_CAM_AT_COORD( l_U714[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
                SET_CAM_FOV( l_U714[1], 30.00000000 );
                SET_CAM_ACTIVE( l_U714[1], 1 );
                SET_CAM_PROPAGATE( l_U714[1], 0 );
                CREATE_CAM( 3, ref l_U714[2] );
                SET_CAM_ACTIVE( l_U714[2], 0 );
                SET_CAM_PROPAGATE( l_U714[2], 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (NOT (IS_CHAR_DEAD( l_U700 )))
                {
                    ;
                }
                TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_4962(), "niko_incar_partial", "missbrucie4", 1.00000000, 1, 0, 0, 0, 0 );
                sub_9000( "BR4_NOWIN", ref l_U1018, 6, 1 );
                l_U1017 = 1;
            }
        }
        break;
        case 1:
        SET_CAM_ACTIVE( l_U714[0], 0 );
        SET_CAM_PROPAGATE( l_U714[0], 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U714[2], l_U714[0], l_U714[1], 15000, 0 );
        SET_CAM_ACTIVE( l_U714[2], 1 );
        SET_CAM_PROPAGATE( l_U714[2], 1 );
        l_U1017 = 2;
        break;
        case 2:
        if (NOT (sub_9998( l_U1018 )))
        {
            if (NOT (IS_CAR_DEAD( l_U751 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U751, -2.27900000, -3.64170000, -0.45530000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar9._fU0, uVar9._fU4, uVar9._fU8, 2, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( sub_4962(), uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U1017 = 3;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4962() )))
        {
            if (NOT (IS_CHAR_DEAD( l_U700 )))
            {
                if (NOT (IS_CAR_DEAD( l_U751 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_SHUFFLE_TO_NEXT_CAR_SEAT( 0, l_U751 );
                    TASK_CAR_DRIVE_WANDER( 0, l_U751, 10.00000000, 2 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U700, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    GET_GAME_TIMER( ref l_U947 );
                    l_U1017 = 4;
                }
            }
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U948 );
        if (DOES_VEHICLE_EXIST( l_U751 ))
        {
            if (NOT (IS_CAR_DEAD( l_U751 )))
            {
                if ((NOT (IS_CAR_ON_SCREEN( l_U751 ))) || ((l_U948 - l_U947) > 20000))
                {
                    if (DOES_CHAR_EXIST( l_U700 ))
                    {
                        DELETE_CHAR( ref l_U700 );
                    }
                    DELETE_CAR( ref l_U751 );
                }
            }
        }
        else if ((sub_46979( sub_4962(), 1, 0 )) || ((l_U948 - l_U947) > 5000))
        {
            SET_CAM_ACTIVE( l_U714[0], 0 );
            SET_CAM_PROPAGATE( l_U714[0], 0 );
            SET_CAM_ACTIVE( l_U714[1], 0 );
            SET_CAM_PROPAGATE( l_U714[1], 0 );
            SET_CAM_ACTIVE( l_U714[2], 0 );
            SET_CAM_PROPAGATE( l_U714[2], 0 );
            DESTROY_CAM( l_U714[0] );
            DESTROY_CAM( l_U714[1] );
            DESTROY_CAM( l_U714[2] );
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            TASK_CLEAR_LOOK_AT( sub_4962() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DISPLAY_RADAR( 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_6345(), 1 );
            sub_59431( 3 );
            l_U1017 = 5;
        }
        break;
        case 5: break;
    }
    if (NOT (IS_CHAR_DEAD( l_U700 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( l_U700, 1 );
    }
    return;
}

int sub_61928()
{
    sub_4613( l_U894, "iWreckedCarProg...." );
    if (NOT l_U884)
    {
        l_U884 = 1;
    }
    switch (l_U894)
    {
        case 0:
        if (sub_62038())
        {
            sub_3522( 0 );
            if ((NOT l_U720) AND (l_U885))
            {
                sub_9000( "BR4_WRECK", ref l_U888, 6, 1 );
                l_U894++;
            }
            else
            {
                sub_9000( "BR4_DESTR", ref l_U888, 6, 1 );
                l_U894++;
            }
        }
        else
        {
            l_U894 = 10;
        }
        break;
        case 1:
        if (NOT (sub_9998( l_U888 )))
        {
            l_U894 = 10;
        }
        break;
        case 10:
        CLEAR_PRINTS();
        PRINT_NOW( "BRK_25", 7000, 1 );
        l_U894++;
        break;
        case 11:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            l_U894 = 99;
        }
        break;
        case 99:
        return 1;
        break;
    }
    return 0;
}

int sub_62038()
{
    if (NOT (IS_CHAR_DEAD( l_U700 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4962(), l_U700, 30.00000000, 30.00000000, 30.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_62427()
{
    if (NOT l_U884)
    {
        l_U884 = 1;
    }
    switch (l_U903)
    {
        case 0:
        if (sub_62038())
        {
            sub_9000( "BR4_F2LONG", ref l_U897, 6, 1 );
            l_U903++;
        }
        else
        {
            l_U903 = 10;
        }
        break;
        case 1:
        if (NOT (sub_9998( l_U897 )))
        {
            l_U903 = 10;
        }
        break;
        case 10:
        if (NOT l_U904)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "BRK_14", 7000, 1 );
            l_U904 = 1;
        }
        else if (IS_THIS_PRINT_BEING_DISPLAYED( "BRK_14", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
        {
            l_U903++;
        }
        break;
        case 11:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            l_U903 = 99;
        }
        break;
        case 99:
        return 1;
        break;
    }
    return 0;
}

void sub_62757(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    if (NOT l_U997)
    {
        if (NOT sub_25687())
        {
            l_U997 = 1;
        }
    }
    else if (((l_U993 > 0) AND (NOT l_U998)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_25687())
        {
            CLEAR_PRINTS();
            DISABLE_PAUSE_MENU( 1 );
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            DISABLE_PAUSE_MENU( 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U998 = 1;
            l_U993 = 3;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U751 )))
    {
        SET_CAR_PROOFS( l_U751, 1, 1, 1, 1, 1 );
    }
    if (NOT (IS_CHAR_DEAD( l_U700 )))
    {
        SET_CHAR_PROOFS( l_U700, 1, 1, 1, 1, 1 );
    }
    switch (l_U993)
    {
        case 0:
        if (sub_43959( 1, 1 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U700 )))
            {
                if (NOT (IS_CAR_DEAD( l_U751 )))
                {
                    if (sub_6249())
                    {
                        if (NOT IS_MINIGAME_IN_PROGRESS())
                        {
                            if (NOT (IS_CHAR_DEAD( l_U700 )))
                            {
                                sub_44352();
                                BEGIN_CAM_COMMANDS( ref l_U713 );
                                DISABLE_PAUSE_MENU( 1 );
                                if (IS_SCREEN_FADING_IN())
                                {
                                    while (IS_SCREEN_FADING_IN())
                                    {
                                        WAIT( 0 );
                                    }
                                }
                                DO_SCREEN_FADE_OUT( 500 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                SET_PLAYER_CONTROL( sub_6345(), 0 );
                                if (NOT (IS_CAR_DEAD( l_U751 )))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( sub_4962(), l_U751 )))
                                    {
                                        GET_DRIVER_OF_CAR( l_U751, ref iVar6 );
                                        SETTIMERA( 0 );
                                        while ((iVar6 != nil) AND (TIMERA() < 10000))
                                        {
                                            WAIT( 0 );
                                            GET_DRIVER_OF_CAR( l_U751, ref iVar6 );
                                        }
                                        GET_DRIVER_OF_CAR( l_U751, ref iVar6 );
                                        if (iVar6 == nil)
                                        {
                                            CLEAR_CHAR_TASKS( sub_4962() );
                                            if (NOT (IS_CHAR_DEAD( sub_4962() )))
                                            {
                                                if (NOT (IS_CAR_DEAD( l_U751 )))
                                                {
                                                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_4962() )))
                                                    {
                                                        WARP_CHAR_INTO_CAR( sub_4962(), l_U751 );
                                                    }
                                                    else
                                                    {
                                                        WARP_CHAR_FROM_CAR_TO_CAR( sub_4962(), l_U751, -1 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                DISABLE_PAUSE_MENU( 0 );
                                sub_4404();
                                ENABLE_CHASE_AUDIO( 0 );
                                sub_44782();
                                SWITCH_ROADS_OFF( 758.64160000, 106.82660000, 0.00000000, 776.90300000, 161.44880000, 100.00000000 );
                                REQUEST_ANIMS( "MISSPASS" );
                                SET_USE_HIGHDOF( 1 );
                                while (NOT (HAVE_ANIMS_LOADED( "MISSPASS" )))
                                {
                                    WAIT( 0 );
                                }
                                LOAD_SCENE( 774.65390000, 123.16340000, 5.45752000 );
                                if (NOT (IS_CHAR_DEAD( l_U700 )))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U751 )))
                                    {
                                        if (IS_GROUP_MEMBER( l_U700, sub_8739() ))
                                        {
                                            REMOVE_CHAR_FROM_GROUP( l_U700 );
                                        }
                                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4962() )))
                                        {
                                            SET_CHAR_COORDINATES( sub_4962(), 859.94760000, -121.45500000, 4.90120000 );
                                        }
                                        else
                                        {
                                            WARP_CHAR_FROM_CAR_TO_COORD( sub_4962(), 859.94760000, -121.45500000, 4.90120000 );
                                        }
                                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U700 )))
                                        {
                                            SET_CHAR_COORDINATES( l_U700, 860.24480000, -119.35100000, 4.90820000 );
                                        }
                                        else
                                        {
                                            WARP_CHAR_FROM_CAR_TO_COORD( l_U700, 860.24480000, -119.35100000, 4.90820000 );
                                        }
                                        CLEAR_AREA( 774.65390000, 123.16340000, 4.95750000, 100.00000000, 1 );
                                        SET_CAR_COORDINATES( l_U751, 774.65390000, 123.16340000, 4.97310000 );
                                        SET_CAR_HEADING( l_U751, 14.20600000 );
                                        SET_CAR_ON_GROUND_PROPERLY( l_U751 );
                                        WARP_CHAR_INTO_CAR( l_U700, l_U751 );
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_4962(), l_U751, 0 );
                                        APPLY_FORCE_TO_CAR( l_U751, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                                        sub_3522( 0 );
                                        DISPLAY_RADAR( 0 );
                                        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                                        CREATE_CAM( 14, ref l_U714[0] );
                                        SET_CAM_POS( l_U714[0], 765.92030000, 129.52090000, 8.38073500 );
                                        SET_CAM_ROT( l_U714[0], -4.84471900, 0.00000000, -123.43210000 );
                                        SET_CAM_FOV( l_U714[0], 31.50003000 );
                                        SET_CAM_ACTIVE( l_U714[0], 1 );
                                        SET_CAM_PROPAGATE( l_U714[0], 1 );
                                        SET_CAM_NEAR_DOF( l_U714[0], 3.00000000 );
                                        SET_CAM_FAR_DOF( l_U714[0], 30.00000000 );
                                        CREATE_CAM( 14, ref l_U714[1] );
                                        SET_CAM_POS( l_U714[1], 765.92030000, 129.52090000, 7.38073500 );
                                        SET_CAM_ROT( l_U714[1], -4.84471900, 0.00000000, -123.43210000 );
                                        SET_CAM_FOV( l_U714[1], 31.50003000 );
                                        SET_CAM_ACTIVE( l_U714[1], 1 );
                                        SET_CAM_PROPAGATE( l_U714[1], 0 );
                                        SET_CAM_NEAR_DOF( l_U714[1], 3.00000000 );
                                        SET_CAM_FAR_DOF( l_U714[1], 30.00000000 );
                                        CREATE_CAM( 3, ref l_U714[2] );
                                        SET_CAM_ACTIVE( l_U714[2], 0 );
                                        SET_CAM_PROPAGATE( l_U714[2], 0 );
                                        SET_CAM_ACTIVE( l_U714[0], 0 );
                                        SET_CAM_PROPAGATE( l_U714[0], 0 );
                                        SET_CAM_INTERP_STYLE_CORE( l_U714[2], l_U714[0], l_U714[1], 12000 + (iParam1 * 5000), 0 );
                                        SET_CAM_ACTIVE( l_U714[2], 1 );
                                        SET_CAM_PROPAGATE( l_U714[2], 1 );
                                        CLEAR_PRINTS();
                                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                        DO_SCREEN_FADE_IN( 500 );
                                        l_U993 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U700 )))
        {
            if (NOT l_U995)
            {
                TASK_LOOK_AT_CHAR( l_U700, sub_4962(), -1, 0 );
                TASK_LOOK_AT_CHAR( sub_4962(), l_U700, -1, 0 );
                sub_9000( uParam0, ref l_U1000, 6, 1 );
                l_U995 = 1;
            }
            else if (NOT l_U994)
            {
                if (NOT (sub_9998( l_U1000 )))
                {
                    if (l_U996)
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_4962(), "MISSPASS", "wave_in_car" )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U999 );
                            TASK_LOOK_AT_CHAR( 0, l_U700, -2, 0 );
                            CLOSE_SEQUENCE_TASK( l_U999 );
                            TASK_PERFORM_SEQUENCE( sub_4962(), l_U999 );
                            CLEAR_SEQUENCE_TASK( l_U999 );
                            OPEN_SEQUENCE_TASK( ref l_U703[0] );
                            TASK_CLEAR_LOOK_AT( 0 );
                            if (NOT (IS_CAR_DEAD( l_U751 )))
                            {
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U751, 768.02800000, 143.75290000, 5.04280000, 10.00000000, 0, 0, 2, 4.00000000, -1 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U703[0] );
                            if (NOT (IS_CHAR_INJURED( l_U700 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U700, l_U703[0] );
                            }
                            CLEAR_SEQUENCE_TASK( l_U703[0] );
                            GET_GAME_TIMER( ref l_U947 );
                            l_U994 = 1;
                        }
                    }
                }
                else
                {
                    sub_11813( "Speech still playing" );
                    if (NOT (IS_CHAR_DEAD( l_U700 )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4962() ))
                        {
                            iVar5 = sub_12022( l_U1000 );
                            if (iVar5 >= iParam1)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U999 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U700 );
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "wave_in_car", "MISSPASS", 1.00000000, 0, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( l_U999 );
                                if (NOT (IS_CHAR_INJURED( sub_4962() )))
                                {
                                    TASK_PERFORM_SEQUENCE( sub_4962(), l_U999 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U999 );
                            }
                        }
                    }
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U948 );
                if (((sub_46979( sub_4962(), 1, 0 )) AND (sub_46979( l_U700, 1, 0 ))) || ((l_U948 - l_U947) > 6000))
                {
                    TASK_CLEAR_LOOK_AT( sub_4962() );
                    l_U993 = 3;
                }
            }
        }
        break;
        case 3:
        if (DOES_CHAR_EXIST( l_U700 ))
        {
            DELETE_CHAR( ref l_U700 );
        }
        SWITCH_ROADS_BACK_TO_ORIGINAL( 758.64160000, 106.82660000, 0.00000000, 776.90300000, 161.44880000, 100.00000000 );
        if (NOT l_U998)
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
        else
        {
            TASK_CLEAR_LOOK_AT( sub_4962() );
            if (IS_CHAR_IN_ANY_CAR( sub_4962() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_4962(), 777.63650000, 122.75700000, 4.89370000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_4962(), 777.63650000, 122.75700000, 4.89370000 );
            }
            SET_CHAR_HEADING( sub_4962(), 90.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
        if (DOES_VEHICLE_EXIST( l_U751 ))
        {
            DELETE_CAR( ref l_U751 );
        }
        SET_CAM_ACTIVE( l_U714[0], 0 );
        SET_CAM_PROPAGATE( l_U714[0], 0 );
        SET_CAM_ACTIVE( l_U714[1], 0 );
        SET_CAM_PROPAGATE( l_U714[1], 0 );
        SET_CAM_ACTIVE( l_U714[2], 0 );
        SET_CAM_PROPAGATE( l_U714[2], 0 );
        DESTROY_CAM( l_U714[0] );
        DESTROY_CAM( l_U714[1] );
        DESTROY_CAM( l_U714[2] );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_6827();
        DISPLAY_RADAR( 1 );
        SET_USE_HIGHDOF( 0 );
        SET_INSTANT_WIDESCREEN_BORDERS( 0 );
        END_CAM_COMMANDS( ref l_U713 );
        SET_PLAYER_CONTROL( sub_6345(), 1 );
        if (l_U998)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        sub_59431( uParam2 );
        l_U993 = 4;
        break;
    }
    if (l_U993 > 0)
    {
        if (NOT l_U996)
        {
            if (IS_CHAR_PLAYING_ANIM( sub_4962(), "MISSPASS", "wave_in_car" ))
            {
                l_U996 = 1;
            }
        }
    }
    return;
}

int sub_65837()
{
    if (NOT l_U884)
    {
        l_U884 = 1;
    }
    switch (l_U911)
    {
        case 0:
        if (sub_9998( l_U804 ))
        {
            sub_10725( ref l_U804, 0 );
        }
        if ((sub_62038()) AND (NOT l_U912))
        {
            sub_9000( "BR4_KILLS", ref l_U905, 7, 1 );
            l_U911++;
        }
        else
        {
            l_U911 = 10;
        }
        break;
        case 1:
        if (NOT (sub_9998( l_U905 )))
        {
            l_U911 = 10;
        }
        else
        {
            sub_11813( "Speech playing!" );
        }
        break;
        case 10:
        CLEAR_PRINTS();
        PRINT_NOW( "BRK_26", 7000, 1 );
        l_U911++;
        break;
        case 11:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            l_U911 = 99;
        }
        break;
        case 99:
        return 1;
        break;
    }
    return 0;
}

void sub_66393(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}
