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
    l_U571 = 0;
    l_U575 = 0.00000000;
    l_U577 = 0;
    l_U578 = 0;
    l_U580 = 0;
    l_U581 = 0;
    l_U582 = 0;
    l_U583 = 0;
    l_U584 = 0;
    l_U585 = 0;
    l_U586 = 1;
    l_U587 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U590 = 0;
    l_U591 = 0;
    l_U592 = 1;
    l_U593 = 0;
    l_U594 = 0;
    l_U595 = 0;
    l_U628 = 0;
    l_U629 = -1;
    l_U630 = 1;
    l_U634 = 0;
    l_U635 = "NONE";
    l_U662 = 0;
    l_U663 = 0;
    l_U673 = 0;
    l_U674 = 1;
    l_U675 = 2;
    l_U682 = 0;
    l_U683 = 999999.90000000;
    l_U684 = 0.00000000;
    l_U685 = 0.26000000;
    l_U686 = 0.65000000;
    l_U688 = 5000.00000000;
    l_U689 = 5000.00000000;
    l_U691 = 0.00000000;
    l_U693 = 0;
    l_U704 = "amb@smoking_spliff";
    l_U705 = "create_spliff";
    l_U706 = "partial_smoke";
    l_U707 = "partial_smoke_car";
    l_U708 = {0.13700000, 0.03100000, 0.03500000};
    l_U711 = {2.21400000, -0.12100000, 0.00000000};
    l_U714 = {0.00000000, 0.00000000, 0.13600000};
    l_U717 = {0.00000000, 0.00000000, 0.00000000};
    l_U720 = {-0.48300000, -0.28500000, 0.62000000};
    l_U723 = {-0.48300000, -1.30000000, 0.62000000};
    l_U726 = {0.00000000, 0.00000000, 90.00000000};
    l_U729 = {0.00000000, -0.28500000, 0.50000000};
    l_U732 = {0.00000000, 0.00000000, 0.00000000};
    l_U754 = 0;
    l_U755 = 1;
    l_U756 = 2;
    l_U757 = "missrandom_idle";
    l_U758 = "female_ilde";
    l_U759 = "female_ilde2";
    l_U760 = 1;
    l_U761 = 0;
    l_U762 = 0;
    l_U792 = 54;
    l_U793 = 0;
    l_U794 = 0;
    l_U795 = 0;
    l_U796 = 0;
    l_U797 = 0;
    l_U798 = 12;
    l_U799 = 0;
    l_U804 = 0;
    l_U806 = -1;
    l_U807 = 4;
    l_U839 = 0;
    l_U840 = 0;
    l_U845 = 0;
    l_U846 = "";
    l_U847 = 0;
    l_U860 = 0;
    l_U864 = 0;
    l_U865 = 1;
    l_U866 = 0;
    l_U867 = 0;
    l_U868 = 0;
    l_U869 = 0;
    l_U934 = 0;
    l_U953 = 0.00000000;
    l_U954 = 0;
    l_U955 = 0;
    l_U956 = nil;
    l_U957 = 0;
    l_U958 = 4;
    l_U959 = 0;
    l_U960 = 8;
    l_U961 = 0;
    l_U962 = 0;
    l_U1005 = 1;
    l_U1006 = 0;
    l_U1007 = 0;
    l_U1008 = 0;
    l_U1009 = 0;
    l_U1010 = 0;
    l_U1011 = 0;
    l_U1012 = 0;
    l_U1014 = 0;
    l_U1017 = -1;
    l_U1031 = {1198.89200000, -679.75880000, 17.90980000};
    l_U1034 = {2.50000000, 1.50000000, 2.50000000};
    l_U1040 = "MOVE_M@BNESS_A";
    l_U1059 = 0;
    l_U1104 = 0;
    l_U1156 = 0;
    l_U1168 = 0;
    l_U1169 = 0;
    l_U1170 = -1;
    l_U1171 = -1;
    l_U1172 = 0;
    l_U1173 = 0;
    l_U1174 = 0;
    l_U1175 = 0;
    l_U1182 = -498054846;
    l_U1204 = 0;
    l_U1205 = 1;
    l_U1206 = 0;
    l_U1207 = 1;
    l_U1208 = -1;
    l_U1209 = 1;
    l_U1210 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1225();
        sub_3335();
    }
    sub_4330();
    while (l_U1005)
    {
        WAIT( 0 );
        switch (l_U959)
        {
            case 0:
            sub_5075();
            sub_14603();
            sub_16061();
            LOAD_SCENE( l_U975._fU12._fU0, l_U975._fU12._fU4, l_U975._fU12._fU8 );
            CLEAR_AREA( l_U975._fU12._fU0, l_U975._fU12._fU4, l_U975._fU12._fU8, 15.00000000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U963._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U963._fU0, 930.05310000, 179.40710000, 32.23560000 );
                SET_CHAR_HEADING( l_U963._fU0, 149.91400000 );
            }
            SET_CHAR_COORDINATES( sub_3830(), 932.26380000, 178.13430000, 32.18890000 );
            SET_CHAR_HEADING( sub_3830(), 149.93710000 );
            SET_PLAYER_CONTROL( sub_3879(), 0 );
            CREATE_CAM( 14, ref l_U1045 );
            SET_CAM_POS( l_U1045, 934.97320000, 184.33450000, 34.00460000 );
            SET_CAM_ROT( l_U1045, -3.92581700, 0.00000000, 149.92230000 );
            SET_CAM_FOV( l_U1045, 45.00000000 );
            sub_6341( 1 );
            sub_6470( ref l_U1045, 1 );
            l_U959 = 1;
            break;
            case 1:
            if ((NOT (IS_CAR_DEAD( l_U975._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U963._fU0 ))))
            {
                if ((NOT (IS_CHAR_SITTING_IN_CAR( sub_3830(), l_U975._fU0 ))) AND (NOT l_U1210))
                {
                    if ((NOT (IS_CAR_DEAD( l_U975._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U963._fU0 ))))
                    {
                        TASK_ENTER_CAR_AS_PASSENGER( l_U963._fU0, l_U975._fU0, -1, 0 );
                    }
                    WAIT( 750 );
                    if ((NOT (IS_CAR_DEAD( l_U975._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U963._fU0 ))))
                    {
                        TASK_ENTER_CAR_AS_DRIVER( sub_3830(), l_U975._fU0, -1 );
                    }
                    WAIT( 250 );
                    l_U1210 = 1;
                    DO_SCREEN_FADE_IN( 125 );
                }
                else if (IS_CHAR_SITTING_IN_CAR( sub_3830(), l_U975._fU0 ))
                {
                    sub_6470( ref l_U1045, 0 );
                    SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 1000 );
                    sub_6341( 0 );
                    SET_CAM_BEHIND_PED( sub_3830() );
                    SET_PLAYER_CONTROL( sub_3879(), 1 );
                    l_U959 = 2;
                }
            }
            break;
            case 2:
            if (NOT g_U65003)
            {
                if (sub_19409( l_U1025, "M1_TAKE_DATE", ref l_U1019, ref l_U1046, l_U1052 ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3830(), l_U1025._fU0, l_U1025._fU4, l_U1025._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )))
                    {
                        sub_26343();
                    }
                    else
                    {
                        CLEAR_WANTED_LEVEL( sub_3879() );
                        if (DOES_BLIP_EXIST( l_U1019 ))
                        {
                            CLEAR_THIS_PRINT( "M1_TAKE_DATE" );
                            REMOVE_BLIP( l_U1019 );
                        }
                        if (IS_CHAR_IN_CAR( sub_3830(), l_U975._fU0 ))
                        {
                            SET_PLAYER_CONTROL( sub_3879(), 0 );
                        }
                        ADD_BLIP_FOR_COORD( l_U1028._fU0, l_U1028._fU4, l_U1028._fU8, ref l_U1019 );
                        l_U1206 = 0;
                        l_U1014 = 10;
                        l_U959 = 3;
                    }
                }
                if (sub_27169())
                {
                    CLEAR_WANTED_LEVEL( sub_3879() );
                    STOP_PED_SPEAKING( sub_3830(), 0 );
                    l_U959 = 4;
                }
                if (g_U9372)
                {
                    if (DOES_BLIP_EXIST( l_U975._fU8 ))
                    {
                        SET_ROUTE( l_U975._fU8, 0 );
                        REMOVE_BLIP( l_U975._fU8 );
                        CLEAR_THIS_PRINT( "M1_GETCAR" );
                    }
                    l_U959 = 3;
                }
            }
            else if (sub_20328( 1, 1 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U963._fU0 )))
                {
                    SAY_AMBIENT_SPEECH( l_U963._fU0, "GUNSHOT_IN_VEHICLE", 0, 0, 0 );
                    SET_CHAR_PROOFS( l_U963._fU0, 1, 1, 1, 1, 1 );
                    if (NOT (IS_CHAR_ON_FIRE( l_U963._fU0 )))
                    {
                        sub_20224( l_U963._fU0 );
                    }
                }
                l_U959 = 9;
            }
            break;
            case 3:
            if (NOT g_U65003)
            {
                if ((NOT g_U9371) AND (NOT l_U1007))
                {
                    if (sub_27576( l_U1028, "M1_GO_BOWLING", ref l_U1019, l_U1072, l_U1078, 1 ))
                    {
                        if (NOT (IS_PLAYER_CONTROL_ON( sub_3879() )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( sub_3830() ))
                            {
                                TASK_LEAVE_CAR( sub_3830(), l_U975._fU0 );
                                TASK_LEAVE_CAR( l_U963._fU0, l_U975._fU0 );
                                SET_CAR_ENGINE_ON( l_U975._fU0, 0, 0 );
                            }
                            else if (NOT l_U1009)
                            {
                                SET_PLAYER_CONTROL( sub_3879(), 1 );
                                l_U1009 = 1;
                            }
                        }
                        else
                        {
                            sub_28542();
                        }
                    }
                }
                else
                {
                    l_U1007 = 1;
                    if (sub_27576( l_U1028, "M1_GO_BOWLING", ref l_U1019, l_U1072, l_U1078, 0 ))
                    {
                        if (NOT sub_30623())
                        {
                            sub_28542();
                        }
                        else
                        {
                            CLEAR_WANTED_LEVEL( sub_3879() );
                            l_U1014 = 20;
                            STOP_PED_SPEAKING( sub_3830(), 0 );
                            l_U959 = 4;
                        }
                    }
                }
            }
            else if (sub_20328( 1, 1 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U963._fU0 )))
                {
                    SAY_AMBIENT_SPEECH( l_U963._fU0, "GUNSHOT_IN_VEHICLE", 0, 0, 0 );
                    SET_CHAR_PROOFS( l_U963._fU0, 1, 1, 1, 1, 1 );
                    if (NOT (IS_CHAR_ON_FIRE( l_U963._fU0 )))
                    {
                        sub_20224( l_U963._fU0 );
                    }
                }
                l_U959 = 9;
            }
            break;
            case 4:
            if (sub_30835())
            {
                l_U1014 = 20;
                l_U960 = g_U32898._fU16;
                switch (g_U32898._fU16)
                {
                    case 8: break;
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    if (g_U32898._fU16 == 0)
                    {
                        sub_15382( "bowling with michelle - MGR_PLAYER_WON" );
                    }
                    else if (g_U32898._fU16 == 1)
                    {
                        sub_15382( "bowling with michelle - MGR_PLAYER_LOST" );
                    }
                    else if (g_U32898._fU16 == 2)
                    {
                        sub_15382( "bowling with michelle - MGR_DRAW" );
                    }
                    else if (g_U32898._fU16 == 3)
                    {
                        sub_15382( "bowling with michelle - MGR_GAME_ABANDONED" );
                    };;;;
                    if ((NOT (DOES_BLIP_EXIST( l_U975._fU8 ))) AND (NOT (IS_CAR_DEAD( l_U975._fU0 ))))
                    {
                        ADD_BLIP_FOR_CAR( l_U975._fU0, ref l_U975._fU8 );
                        SET_BLIP_AS_FRIENDLY( l_U975._fU8, 1 );
                        SET_ROUTE( l_U975._fU8, 1 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U963._fU0 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( sub_3830(), l_U963._fU0 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U963._fU0, sub_3830() );
                    }
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -817693451, 1197.40000000, -678.30000000, 16.70000000, 0, 0.00000000 );
                    l_U1014 = 20;
                    l_U959 = 5;
                    break;
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    l_U959 = 13;
                    break;
                }
            }
            break;
            case 5:
            if ((NOT (IS_CHAR_DEAD( l_U963._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U975._fU0 ))))
            {
                if (IS_GROUP_MEMBER( l_U963._fU0, sub_13624() ))
                {
                    sub_31512();
                }
            }
            if (sub_19409( l_U1037, "M1_TAKE_HOME", ref l_U1020, ref l_U1085, l_U1091 ))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3830(), l_U1037._fU0, l_U1037._fU4, l_U1037._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )))
                {
                    ;
                }
                else if (sub_20328( 1, 1 ))
                {
                    if (DOES_BLIP_EXIST( l_U1020 ))
                    {
                        CLEAR_THIS_PRINT( "M1_TAKE_HOME" );
                        REMOVE_BLIP( l_U1020 );
                    }
                    SET_PLAYER_CONTROL( sub_3879(), 0 );
                    WAIT( 1000 );
                    CLEAR_WANTED_LEVEL( sub_3879() );
                    l_U959 = 6;
                }
            }
            break;
            case 6:
            sub_33622();
            break;
            case 7:
            g_U9377 = 1;
            if (sub_37341())
            {
                l_U959 = 13;
            }
            break;
            case 8:
            g_U9377 = 1;
            sub_39403( 2, "MI1_ALONE", "MI1AUD", 0 );
            l_U959 = 13;
            break;
            case 9:
            g_U9377 = 1;
            if (sub_40029( "MI1_HIT", "M1_F_SCARE" ))
            {
                l_U959 = 13;
            }
            break;
            case 10:
            g_U9377 = 1;
            if (sub_40029( "MI1_DESTR", "M1_F_DEST" ))
            {
                l_U959 = 13;
            }
            break;
            case 11:
            g_U9377 = 1;
            if (sub_40029( "MI1_ALONE", "M1_F_LEFT" ))
            {
                l_U959 = 13;
            }
            break;
            case 12:
            sub_43027();
            break;
            case 13:
            sub_56549();
            break;
        }
    }
    sub_3335();
    return;
}

void sub_1225()
{
    sub_1234();
    return;
}

void sub_1234()
{
    int iVar2;

    iVar2 = 2;
    sub_1248( iVar2 );
    sub_2424( iVar2 );
    return;
}

void sub_1248(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1292();
        sub_1453();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1561();
            sub_1600();
        }
    }
    sub_1676();
    sub_1777();
    uVar5 = sub_1890( uParam0 );
    sub_2331( uVar5, 0 );
    return;
}

void sub_1292()
{
    sub_1306( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1406();
    }
    return;
}

void sub_1306(int iParam0)
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

void sub_1406()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1453()
{
    sub_1462();
    return;
}

void sub_1462()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1561()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1600()
{
    sub_1609();
    return;
}

void sub_1609()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1676()
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

void sub_1777()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1799();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1799()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1890(unknown uParam0)
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
    sub_2289( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2289(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2331(int iParam0, boolean bParam1)
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

void sub_2424(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2433();
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
        sub_3208();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2433()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2471( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2471( 1, g_U569[I] )) != 0)
            {
                sub_2757( I );
            }
        }
    }
    if (NOT sub_2923())
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

int sub_2471(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2757(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2842( g_U569 - 1 );
    return;
}

void sub_2842(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2923()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2471( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3208()
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

void sub_3335()
{
    if (DOES_CHAR_EXIST( l_U963._fU0 ))
    {
        sub_3372( 2, l_U963._fU0, 2 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U963._fU0 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U975._fU0 );
    DONT_SUPPRESS_CAR_MODEL( l_U975._fU4 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U990._fU0 );
    REMOVE_DECISION_MAKER( l_U1041 );
    REMOVE_DECISION_MAKER( l_U1042 );
    REMOVE_DECISION_MAKER( l_U1043 );
    REMOVE_DECISION_MAKER( l_U1044 );
    REMOVE_ANIMS( l_U1040 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_MAX_WANTED_LEVEL( l_U958 );
    g_U9938 = 1;
    sub_3566( 0 );
    sub_3566( 1 );
    sub_3784();
    if ((NOT (IS_CHAR_DEAD( sub_3830() ))) AND (IS_PLAYER_PLAYING( sub_3879() )))
    {
        SET_ANIM_GROUP_FOR_CHAR( sub_3830(), "move_player" );
    }
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U975._fU12._fU0 - 50.00000000, l_U975._fU12._fU4 - 50.00000000, l_U975._fU12._fU8 - 50.00000000, l_U975._fU12._fU0 + 50.00000000, l_U975._fU12._fU4 + 50.00000000, l_U975._fU12._fU8 + 50.00000000 );
    if (sub_4047( 16 ))
    {
        SET_NO_RESPRAYS( 0 );
    }
    g_U9378 = 0;
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -817693451, 1197.40000000, -678.30000000, 16.70000000, 0, 0.00000000 );
    g_U9374 = 0;
    g_U64576 = 0;
    g_U65003 = 0;
    sub_4150();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3372(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_3566(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_3604( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

void sub_3604(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_3656( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_3656(unknown uParam0)
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

void sub_3784()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_3830()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3879()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4047(unknown uParam0)
{
    return g_U10133._fU0[uParam0];
}

void sub_4150()
{
    int I;

    g_U32898._fU0 = 54;
    g_U32898._fU4 = 9;
    g_U32898._fU8 = 9;
    g_U32898._fU12 = 9;
    g_U32898._fU16 = 8;
    g_U32898._fU20 = 8;
    g_U32898._fU24 = 0;
    g_U32898._fU28 = 0;
    g_U32898._fU32 = 0;
    g_U32898._fU72 = 0;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U32898._fU36[I] = 0;
    }
    return;
}

void sub_4330()
{
    l_U1021 = {919.29770000, 181.66220000, 32.76860000};
    l_U1024 = 254.11990000;
    l_U1025 = {1082.94200000, -644.10880000, 14.80980000};
    l_U1028 = {1199.84200000, -675.10880000, 16.40980000};
    l_U1037 = {930.77010000, 178.47920000, 34.32450000};
    l_U963._fU4 = 2;
    l_U963._fU12 = {919.50710000, 182.25620000, 32.75250000};
    l_U963._fU24 = 255.75650000;
    l_U975._fU4 = -1260881538;
    l_U975._fU12 = {930.99010000, 178.37980000, 32.80130000};
    l_U975._fU24 = 150.00000000;
    l_U975._fU44 = 2;
    l_U975._fU48 = 0;
    l_U990._fU12 = {935.92970000, 186.88010000, 31.80180000};
    l_U990._fU24 = 150.00000000;
    sub_4150();
    sub_4593( l_U963._fU4, 7 );
    g_U9377 = 0;
    g_U9372 = 0;
    g_U9371 = 0;
    LOAD_ADDITIONAL_TEXT( "MICHEL1", 0 );
    return;
}

void sub_4593(unknown uParam0, unknown uParam1)
{
    sub_4604( uParam0 );
    sub_4800( uParam1 );
    return;
}

void sub_4604(unknown uParam0)
{
    if (NOT (g_U32898._fU0 == 54))
    {
        return;
    }
    if (NOT (sub_4637( uParam0 )))
    {
        return;
    }
    g_U32898._fU0 = uParam0;
    g_U32898._fU8 = 9;
    g_U32898._fU12 = 9;
    return;
}

int sub_4637(int iParam0)
{
    if (iParam0 < 23)
    {
        return 1;
    }
    if (sub_4661( iParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_4661(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        case 10:
        case 28:
        case 29:
        case 30: return 1;
    }
    return 0;
}

void sub_4800(int iParam0)
{
    if (NOT (g_U32898._fU4 == 9))
    {
        return;
    }
    if (iParam0 == 9)
    {
        return;
    }
    if (g_U32898._fU0 == 54)
    {
        return;
    }
    g_U32898._fU4 = iParam0;
    return;
}

void sub_5075()
{
    if (g_U9893._fU24)
    {
        while (NOT sub_5096())
        {
            sub_14420();
            WAIT( 0 );
        }
        LOAD_ADDITIONAL_TEXT( "MI1AUD", 6 );
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "mich_a" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "mich_a" );
        ENABLE_SCENE_STREAMING( 1 );
        l_U959 = 1;
    }
    return;
}

int sub_5096()
{
    if (sub_5114( ref l_U1006, l_U1156 ))
    {
        l_U1156 = 6;
    }
    switch (l_U1156)
    {
        case 0:
        sub_5362();
        break;
        case 1:
        sub_5547();
        DISABLE_PAUSE_MENU( 1 );
        break;
        case 2:
        sub_6761();
        DISABLE_PAUSE_MENU( 1 );
        break;
        case 3:
        sub_7717();
        DISABLE_PAUSE_MENU( 1 );
        break;
        case 4:
        sub_8648();
        DISABLE_PAUSE_MENU( 1 );
        break;
        case 5:
        if (sub_11457())
        {
            return 1;
        }
        DISABLE_PAUSE_MENU( 1 );
        break;
        case 6:
        if (sub_13294())
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_5114(unknown uParam0, int iParam1)
{
    if ((uParam0^))
    {
        if (((sub_5131()) AND (IS_SCREEN_FADED_IN())) AND (iParam1 > 0))
        {
            return 1;
        }
        else
        {
            (uParam0^) = 0;
        }
    }
    if (NOT sub_5131())
    {
        (uParam0^) = 1;
    }
    return 0;
}

int sub_5131()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_5362()
{
    if (NOT (DOES_CAM_EXIST( l_U1126 )))
    {
        CREATE_CAM( 14, ref l_U1126 );
    }
    if (NOT (DOES_CAM_EXIST( l_U1127 )))
    {
        CREATE_CAM( 14, ref l_U1127 );
    }
    if (NOT (DOES_CAM_EXIST( l_U1128 )))
    {
        CREATE_CAM( 3, ref l_U1128 );
    }
    if (NOT (DOES_CAM_EXIST( l_U1129 )))
    {
        CREATE_CAM( 14, ref l_U1129 );
    }
    GET_MAX_WANTED_LEVEL( ref l_U958 );
    g_U9938 = 0;
    SET_MAX_WANTED_LEVEL( 0 );
    SET_WANTED_MULTIPLIER( 0.00000000 );
    l_U1156 = 1;
    return;
}

void sub_5547()
{
    vector vVar2;
    float fVar5;
    vector vVar6;
    float fVar9;
    vector vVar10;
    vector vVar13;
    vector vVar16;
    float fVar19;

    vVar2 = {1655.36700000, 221.02130000, 23.98260000};
    fVar5 = 318.96000000;
    vVar6 = {1646.30400000, 217.18880000, 23.11320000};
    fVar9 = 38.42960000;
    vVar10 = {1658.12700000, 218.70380000, 29.64215000};
    vVar13 = {1656.51800000, 220.32750000, 25.43096000};
    vVar16 = {-2.35484600, -0.00000000, 44.49167000};
    fVar19 = 45.00000000;
    if (l_U1157[l_U1156] == 0)
    {
        CLEAR_HELP();
        sub_5700();
        REQUEST_SCRIPT( "michelle1_queue" );
        REQUEST_ANIMS( "amb@burgercart" );
        REQUEST_MODEL( 1487004273 );
        REQUEST_MODEL( 2086092453 );
        REQUEST_INTERIOR_MODELS( -388629308, "BurgerShot_MloRoom" );
        LOAD_ALL_OBJECTS_NOW();
        while (((NOT (HAS_MODEL_LOADED( 1487004273 ))) || (NOT (HAVE_ANIMS_LOADED( "amb@burgercart" )))) || (NOT (HAS_MODEL_LOADED( 2086092453 ))))
        {
            WAIT( 0 );
        }
        LOAD_SCENE( vVar2.x, vVar2.y, vVar2.z );
        SET_CHAR_COORDINATES( sub_3830(), vVar6.x, vVar6.y, vVar6.z );
        SET_CHAR_HEADING( sub_3830(), fVar9 );
        CREATE_CHAR( 26, 1487004273, vVar2.x, vVar2.y, vVar2.z, ref l_U1153, 1 );
        SET_CHAR_HEADING( l_U1153, fVar5 );
        SET_CHAR_PROP_INDEX( l_U1153, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1153, 1, 1, 0 );
        CREATE_OBJECT( 2086092453, vVar2.x, vVar2.y, vVar2.z, ref l_U1151, 1 );
        if (NOT (IS_OBJECT_ATTACHED( l_U1151 )))
        {
            ATTACH_OBJECT_TO_PED( l_U1151, l_U1153, 1232, 0, 0, 0, 0, 0, 0, 0 );
        }
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U1153, "EAT_BURGER_PLYR", "amb@burgercart", 8.00000000, 1, 0, 0, 0, -1 );
        SET_CAM_POS( l_U1126, vVar10.x, vVar10.y, vVar10.z );
        SET_CAM_ROT( l_U1126, vVar16.x, vVar16.y, vVar16.z );
        SET_CAM_FOV( l_U1126, fVar19 );
        SET_CAM_POS( l_U1127, vVar13.x, vVar13.y, vVar13.z );
        SET_CAM_ROT( l_U1127, vVar16.x, vVar16.y, vVar16.z );
        SET_CAM_FOV( l_U1127, fVar19 );
        sub_6341( 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U1128, l_U1126, l_U1127, 7500, 0 );
        sub_6470( ref l_U1128, 1 );
        DO_SCREEN_FADE_IN( 250 );
        SETTIMERA( 0 );
        l_U1157[l_U1156] = 1;
    }
    if ((IS_SCREEN_FADED_IN()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
    {
        PRINT_HELP_FOREVER( "ACFOOD" );
    }
    if ((TIMERA() > 8000) || (IS_KEYBOARD_KEY_PRESSED( 11 )))
    {
        DO_SCREEN_FADE_OUT( 250 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1487004273 );
        REMOVE_ANIMS( "amb@burgercart" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2086092453 );
        DELETE_CHAR( ref l_U1153 );
        DELETE_OBJECT( ref l_U1151 );
        sub_6470( ref l_U1128, 0 );
        l_U1156 = 2;
    }
    return;
}

void sub_5700()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        l_U1130[I] = 0;
    }
    return;
}

void sub_6341(boolean bParam0)
{
    if (bParam0)
    {
        BEGIN_CAM_COMMANDS( ref l_U1013 );
    }
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    SET_PLAYER_CONTROL( sub_3879(), NOT bParam0 );
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    if (NOT bParam0)
    {
        END_CAM_COMMANDS( ref l_U1013 );
    }
    return;
}

void sub_6470(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_6761()
{
    vector vVar2;

    vVar2 = {945.22700000, -296.70800000, 18.73680000};
    if (l_U1157[l_U1156] == 0)
    {
        CLEAR_HELP();
        sub_5700();
        REQUEST_MODEL( -573788283 );
        REQUEST_MODEL( -132862690 );
        REQUEST_MODEL( 1113677074 );
        REQUEST_MODEL( 1353709999 );
        LOAD_ALL_OBJECTS_NOW();
        while ((NOT (HAS_MODEL_LOADED( -573788283 ))) || (NOT (HAS_SCRIPT_LOADED( "michelle1_queue" ))))
        {
            REQUEST_MODEL( -573788283 );
            REQUEST_SCRIPT( "michelle1_queue" );
            WAIT( 0 );
        }
        LOAD_SCENE( vVar2.x, vVar2.y, vVar2.z );
        START_NEW_SCRIPT( "michelle1_queue", 1536 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "michelle1_queue" );
        SET_CHAR_COORDINATES( sub_3830(), vVar2.x, vVar2.y, vVar2.z );
        SET_CHAR_HEADING( sub_3830(), 236.97470000 );
        SET_CAM_POS( l_U1126, 948.71710000, -309.84070000, 30.49535000 );
        SET_CAM_ROT( l_U1126, -26.47466000, 0.00000000, -28.25759000 );
        SET_CAM_FOV( l_U1126, 34.20003000 );
        SET_CAM_POS( l_U1127, 947.62630000, -311.87010000, 26.29441000 );
        SET_CAM_ROT( l_U1127, -10.77562000, -0.00000000, -28.25759000 );
        SET_CAM_FOV( l_U1127, 33.60003000 );
        CREATE_CHAR( 26, -573788283, 957.57750000, -289.61250000, 18.84770000, ref l_U1166, 1 );
        SET_CHAR_HEADING( l_U1166, 201.13940000 );
        SET_CHAR_PROP_INDEX( l_U1166, 0, 0 );
        REQUEST_INTERIOR_MODELS( -507637856, "GtaMloRoom02" );
        sub_6470( ref l_U1128, 1 );
        g_U9212 = 0;
        g_U9347 = 0;
        l_U1157[l_U1156] = 1;
    }
    if (g_U9378)
    {
        if (NOT l_U1130[0])
        {
            WAIT( 500 );
            if (NOT (IS_CHAR_INJURED( l_U1166 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U1018 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 948.42700000, -296.80800000, 18.73680000, 2, -1, 0.50000000 );
                CLOSE_SEQUENCE_TASK( l_U1018 );
                TASK_PERFORM_SEQUENCE( l_U1166, l_U1018 );
                CLEAR_SEQUENCE_TASK( l_U1018 );
            }
            SET_CAM_INTERP_STYLE_CORE( l_U1128, l_U1126, l_U1127, 10000, 0 );
            DO_SCREEN_FADE_IN( 250 );
            SETTIMERA( 0 );
            l_U1130[0] = 1;
        }
        if ((IS_SCREEN_FADED_IN()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
        {
            PRINT_HELP_FOREVER( "ACCAB" );
        }
        if ((TIMERA() > 10500) || (IS_KEYBOARD_KEY_PRESSED( 11 )))
        {
            DO_SCREEN_FADE_OUT( 250 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1166 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -573788283 );
            FLUSH_SCENARIO_BLOCKING_AREAS();
            sub_6470( ref l_U1128, 0 );
            g_U9378 = 0;
            l_U1156 = 3;
        }
    }
    return;
}

void sub_7717()
{
    if (l_U1157[l_U1156] == 0)
    {
        CLEAR_HELP();
        sub_5700();
        LOAD_SCENE( 1175.64800000, 1688.60800000, 15.72200000 );
        SET_CHAR_COORDINATES( sub_3830(), 1168.60400000, 1676.02400000, 15.70460000 );
        SET_CHAR_HEADING( sub_3830(), 105.06700000 );
        SET_PED_NON_REMOVAL_AREA( (vector( 15.72200000, 1688.60800000, 1175.64800000)) - (vector( 20.00000000, 20.00000000, 20.00000000)), (vector( 15.72200000, 1688.60800000, 1175.64800000)) - (vector( 20.00000000, 20.00000000, 20.00000000)) );
        SET_CAM_POS( l_U1126, 1177.81800000, 1680.98700000, 17.89244000 );
        SET_CAM_ROT( l_U1126, -1.25655000, 0.00000000, 47.70649000 );
        SET_CAM_FOV( l_U1126, 40.00000000 );
        SET_CAM_POS( l_U1127, 1177.81800000, 1680.98700000, 17.89244000 );
        SET_CAM_ROT( l_U1127, -1.25655000, 0.00000000, 47.70649000 );
        SET_CAM_FOV( l_U1127, 45.00000000 );
        sub_6470( ref l_U1126, 1 );
        GET_GAME_VIEWPORT_ID( ref l_U1165 );
        WAIT( 0 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U1165, "clamMainRoom" );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_3830(), "clamMainRoom" );
        WAIT( 5000 );
        REQUEST_INTERIOR_MODELS( 349397652, "clamMainRoom" );
        GET_GAME_VIEWPORT_ID( ref l_U1165 );
        WAIT( 0 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U1165, "clamMainRoom" );
        SET_CAM_INTERP_STYLE_CORE( l_U1128, l_U1126, l_U1127, 10000, 0 );
        sub_6470( ref l_U1126, 0 );
        sub_6470( ref l_U1128, 1 );
        DO_SCREEN_FADE_IN( 250 );
        SETTIMERA( 0 );
        l_U1157[l_U1156] = 1;
    }
    if ((IS_SCREEN_FADED_IN()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
    {
        PRINT_HELP_FOREVER( "ACSTRIP" );
    }
    if ((TIMERA() > 7000) AND (l_U1130[0] == 0))
    {
        SET_CAM_POS( l_U1126, 1177.49000000, 1679.73500000, 17.19347000 );
        SET_CAM_ROT( l_U1126, 19.15416000, 0.00000000, 10.49568000 );
        SET_CAM_FOV( l_U1126, 35.70002000 );
        SET_CAM_POS( l_U1127, 1176.55700000, 1680.29300000, 18.54615000 );
        SET_CAM_ROT( l_U1127, -11.21260000, -0.00000000, -6.12010700 );
        SET_CAM_FOV( l_U1127, 35.70002000 );
        SET_CAM_INTERP_STYLE_CORE( l_U1128, l_U1126, l_U1127, 10000, 0 );
        sub_6470( ref l_U1128, 1 );
        sub_6470( ref l_U1129, 0 );
        l_U1130[0] = 1;
    }
    if ((TIMERA() > 15500) || (IS_KEYBOARD_KEY_PRESSED( 11 )))
    {
        DO_SCREEN_FADE_OUT( 250 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_PED_NON_REMOVAL_AREA();
        sub_6470( ref l_U1128, 0 );
        l_U1156 = 4;
    }
    return;
}

void sub_8648()
{
    vector vVar2;
    vector vVar5;
    float fVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    vVar2 = {-0.71150000, -3.14340000, -0.23310000};
    if (l_U1157[l_U1156] == 0)
    {
        CLEAR_HELP();
        REQUEST_MODEL( 466399299 );
        REQUEST_MODEL( -1188894977 );
        REQUEST_MODEL( 443141696 );
        REQUEST_MODEL( 1015062504 );
        REQUEST_MODEL( 1350491501 );
        REQUEST_MODEL( -97968031 );
        REQUEST_MODEL( 1941123364 );
        REQUEST_MODEL( -1658159368 );
        REQUEST_MODEL( 1343754678 );
        REQUEST_MODEL( -2049396802 );
        REQUEST_MODEL( 61597377 );
        REQUEST_MODEL( -2139514995 );
        REQUEST_MODEL( -1758615024 );
        REQUEST_MODEL( 1487004273 );
        REQUEST_MODEL( l_U1182 );
        LOAD_ALL_OBJECTS_NOW();
        while (((((((((((((((NOT (HAS_MODEL_LOADED( 466399299 ))) || (NOT (HAS_MODEL_LOADED( -1188894977 )))) || (NOT (HAS_MODEL_LOADED( 443141696 )))) || (NOT (HAS_MODEL_LOADED( 1015062504 )))) || (NOT (HAS_MODEL_LOADED( 1350491501 )))) || (NOT (HAS_MODEL_LOADED( -97968031 )))) || (NOT (HAS_MODEL_LOADED( 1941123364 )))) || (NOT (HAS_MODEL_LOADED( -1658159368 )))) || (NOT (HAS_MODEL_LOADED( 1343754678 )))) || (NOT (HAS_MODEL_LOADED( -2049396802 )))) || (NOT (HAS_MODEL_LOADED( 61597377 )))) || (NOT (HAS_MODEL_LOADED( -2139514995 )))) || (NOT (HAS_MODEL_LOADED( -1758615024 )))) || (NOT (HAS_MODEL_LOADED( 1487004273 )))) || (NOT (HAS_MODEL_LOADED( l_U1182 ))))
        {
            WAIT( 0 );
        }
        LOAD_SCENE( 1140.64400000, 1688.49900000, 9.35320000 );
        SET_CHAR_COORDINATES( sub_3830(), 1140.64400000, 1680.49900000, 9.35320000 );
        SET_CHAR_HEADING( sub_3830(), 165.75820000 );
        SET_CAM_POS( l_U1126, 1142.32800000, 1691.52600000, 10.89277000 );
        SET_CAM_ROT( l_U1126, -13.01668000, -0.00000000, -105.01790000 );
        SET_CAM_FOV( l_U1126, 45.00000000 );
        SET_CAM_POS( l_U1127, 1143.50200000, 1690.57900000, 10.54330000 );
        SET_CAM_ROT( l_U1127, -28.12323000, 0.00000000, -76.70667000 );
        SET_CAM_FOV( l_U1127, 45.00000000 );
        vVar5 = {1146.62700000, 1690.89600000, 9.29310000};
        fVar8 = 270.23640000;
        while (NOT (sub_9361( ref l_U1135 )))
        {
            WAIT( 0 );
        }
        SET_CAR_COORDINATES( l_U1135, vVar5.x, vVar5.y, vVar5.z );
        SET_CAR_HEADING( l_U1135, fVar8 );
        SET_CHAR_COORDINATES( sub_3830(), 1140.69000000, 1691.26700000, 9.33260000 );
        SET_CHAR_HEADING( sub_3830(), 300.49660000 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1135, vVar2.x, vVar2.y, vVar2.z, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
        CREATE_CHAR( 26, 1487004273, uVar9._fU0, uVar9._fU4, uVar9._fU8, ref l_U1153, 1 );
        SET_CHAR_HEADING( l_U1153, 164.98210000 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1135, 0.00000000, -2.50000000, 0.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
        OPEN_SEQUENCE_TASK( ref l_U1018 );
        TASK_PAUSE( 0, 1500 );
        TASK_LOOK_AT_COORD( 0, uVar12._fU0, uVar12._fU4, uVar12._fU8, 8500, 0 );
        TASK_PAUSE( 0, 500 );
        TASK_ACHIEVE_HEADING( 0, 164.98210000 + 30.00000000 );
        CLOSE_SEQUENCE_TASK( l_U1018 );
        TASK_PERFORM_SEQUENCE( l_U1153, l_U1018 );
        CLEAR_SEQUENCE_TASK( l_U1018 );
        CREATE_OBJECT( 466399299, vVar5.x, vVar5.y, vVar5.z, ref l_U1137, 1 );
        ATTACH_OBJECT_TO_CAR( l_U1137, l_U1135, 19, 0.09300000, 0.00000000, -0.07500000, 0.00000000, 0.00000000, 0.00000000 );
        CREATE_OBJECT( -1188894977, vVar5.x, vVar5.y, vVar5.z, ref l_U1138, 1 );
        ATTACH_OBJECT_TO_CAR( l_U1138, l_U1135, 0, 0.06100000, -2.00800000, 0.24600000, 0.00000000, 0.00000000, 0.00000000 );
        CREATE_OBJECT( 443141696, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[0], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[0], l_U1138, 0, 0.39300000, -0.01270000, 0.14230000, -1.48400000, 0.00000000, 0.00000000 );
        CREATE_OBJECT( 1015062504, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[1], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[1], l_U1138, 0, -0.28500000, 0.21000000, 0.20350000, 0.53150000, 0.07870000, -3.21600000 );
        CREATE_OBJECT( 1350491501, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[2], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[2], l_U1138, 0, -0.74070000, -0.13750000, 0.16950000, -1.55270000, 0.00000000, 0.12310000 );
        CREATE_OBJECT( -97968031, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[3], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[3], l_U1138, 0, -0.60380000, -0.32160000, 0.12700000, -1.58800000, 0.00000000, 0.00000000 );
        CREATE_OBJECT( 1941123364, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[4], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[4], l_U1138, 0, 0.08670000, -0.30550000, 0.05880000, -1.60000000, 0.00000000, 0.00000000 );
        CREATE_OBJECT( -1658159368, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[5], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[5], l_U1138, 0, 0.56300000, -0.24370000, 0.09720000, -1.59980000, 0.00000000, 1.54730000 );
        CREATE_OBJECT( 1343754678, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[6], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[6], l_U1138, 0, -0.16450000, 0.03580000, 0.05880000, -1.54080000, 0.00000000, 1.51150000 );
        CREATE_OBJECT( -2049396802, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[7], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[7], l_U1138, 0, 0.67040000, 0.12600000, 0.21880000, -0.48570000, 0.14470000, 0.00000000 );
        CREATE_OBJECT( 61597377, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[8], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[8], l_U1137, 0, 0.13200000, -0.23000000, -0.04420000, 1.74730000, 0.00000000, 0.00000000 );
        CREATE_OBJECT( -2139514995, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[9], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[9], l_U1137, 0, 0.10700000, -0.49880000, -0.06130000, 1.41730000, 3.12550000, 0.00000000 );
        CREATE_OBJECT( -1758615024, vVar5.x, vVar5.y, vVar5.z, ref l_U1139[10], 1 );
        ATTACH_OBJECT_TO_OBJECT( l_U1139[10], l_U1137, 0, -0.58380000, -0.07500000, -0.06850000, 1.58350000, 0.00000000, 0.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U1128, l_U1126, l_U1127, 10000, 0 );
        sub_6470( ref l_U1128, 1 );
        DO_SCREEN_FADE_IN( 250 );
        SETTIMERA( 0 );
        l_U1157[l_U1156] = 1;
    }
    if (NOT (IS_CAR_DEAD( l_U1135 )))
    {
        CONTROL_CAR_DOOR( l_U1135, 5, 1, 1.00000000 );
        l_U1130[0] = 1;
    }
    if ((l_U1130[0] == 1) AND (TIMERA() > 4250))
    {
        PRINT_HELP_FOREVER( "ACGUN" );
    }
    if ((TIMERA() > 8500) || (IS_KEYBOARD_KEY_PRESSED( 11 )))
    {
        DO_SCREEN_FADE_OUT( 250 );
        while (IS_SCREEN_FADING_OUT())
        {
            if (NOT (IS_CAR_DEAD( l_U1135 )))
            {
                CONTROL_CAR_DOOR( l_U1135, 5, 1, 1.00000000 );
            }
            WAIT( 0 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1487004273 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 466399299 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1188894977 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 443141696 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1015062504 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1350491501 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -97968031 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1941123364 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1658159368 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1343754678 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2049396802 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 61597377 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2139514995 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1758615024 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1182 );
        DELETE_CHAR( ref l_U1153 );
        sub_6470( ref l_U1128, 0 );
        l_U1156 = 5;
    }
    return;
}

int sub_9361(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;

    iVar3 = -498054846;
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar4 = {1311.40700000, 94.34690000, 33.77160000};
    fVar7 = 0.00000000;
    CLEAR_AREA( vVar4.x, vVar4.y, vVar4.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar4.x, vVar4.y, vVar4.z, uParam0, 1 );
    CHANGE_CAR_COLOUR( (uParam0^), 40, 0 );
    SET_CAR_HEADING( (uParam0^), fVar7 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    return 1;
}

int sub_11457()
{
    vector vVar2;
    float fVar5;
    vector vVar6;
    float fVar9;
    vector vVar10;
    float fVar13;
    vector vVar14;
    float fVar17;
    vector vVar18;
    vector vVar21;
    float fVar24;
    vector vVar25;
    vector vVar28;
    float fVar31;
    vector vVar32;
    vector vVar35;
    float fVar38;

    vVar2 = {1141.33200000, 1500.78300000, 15.83820000};
    fVar5 = 67.14810000;
    vVar6 = {1170.48700000, 1481.48800000, 15.73570000};
    fVar9 = 76.41370000;
    vVar10 = {1165.28300000, 1481.40400000, 16.48490000};
    fVar13 = 201.13940000;
    vVar14 = {1153.50300000, 1490.50200000, 15.46340000};
    fVar17 = 234.17900000;
    vVar18 = {1164.57400000, 1484.22200000, 16.02212000};
    vVar21 = {2.83029600, 0.00000000, 165.07870000};
    fVar24 = 45.00000000;
    vVar25 = {1164.84600000, 1487.98200000, 16.47921000};
    vVar28 = {8.34401900, -0.00000000, -168.46740000};
    fVar31 = 39.90001000;
    vVar32 = {1152.81200000, 1491.84400000, 16.84331000};
    vVar35 = {-2.06168700, -0.00000000, -143.53410000};
    fVar38 = 39.00002000;
    if (l_U1157[l_U1156] == 0)
    {
        sub_5700();
        CLEAR_HELP();
        REQUEST_MODEL( 486987393 );
        REQUEST_MODEL( -1352125276 );
        REQUEST_MODEL( 1690783035 );
        REQUEST_MODEL( -302362397 );
        REQUEST_ANIMS( "amb@dating" );
        LOAD_ALL_OBJECTS_NOW();
        while (((((NOT (HAS_MODEL_LOADED( 486987393 ))) || (NOT (HAS_MODEL_LOADED( -1352125276 )))) || (NOT (HAS_MODEL_LOADED( 1690783035 )))) || (NOT (HAS_MODEL_LOADED( -302362397 )))) || (NOT (HAVE_ANIMS_LOADED( "amb@dating" ))))
        {
            WAIT( 0 );
        }
        LOAD_SCENE( vVar25.x, vVar25.y, vVar25.z );
        SET_CHAR_COORDINATES( sub_3830(), vVar2.x, vVar2.y, vVar2.z );
        SET_CHAR_HEADING( sub_3830(), fVar5 );
        CREATE_CHAR( 26, -302362397, vVar6.x, vVar6.y, vVar6.z, ref l_U1155, 1 );
        SET_CHAR_HEADING( l_U1155, fVar9 );
        SET_CAM_POS( l_U1126, vVar18.x, vVar18.y, vVar18.z );
        SET_CAM_ROT( l_U1126, vVar21.x, vVar21.y, vVar21.z );
        SET_CAM_FOV( l_U1126, fVar24 );
        SET_CAM_POS( l_U1127, vVar25.x, vVar25.y, vVar25.z );
        SET_CAM_ROT( l_U1127, vVar28.x, vVar28.y, vVar28.z );
        SET_CAM_FOV( l_U1127, fVar31 );
        CREATE_CAR( 486987393, vVar10.x, vVar10.y, vVar10.z, ref l_U1136, 1 );
        SET_CAR_HEADING( l_U1136, fVar13 );
        CREATE_CHAR( 26, 1690783035, vVar14.x, vVar14.y, vVar14.z, ref l_U1154, 1 );
        SET_CHAR_HEADING( l_U1154, fVar17 );
        SET_CHAR_DEFAULT_COMPONENT_VARIATION( l_U1154 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U1154, 1 );
        CREATE_OBJECT( -1352125276, vVar10.x, vVar10.y, vVar10.z, ref l_U1152, 1 );
        ATTACH_OBJECT_TO_CAR( l_U1152, l_U1136, 0, 0.13500000, -2.23000000, -0.21750000, 0.00000000, 3.14000000, 0.00000000 );
        DO_SCREEN_FADE_IN( 250 );
        SETTIMERA( 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U1128, l_U1126, l_U1127, 10000, 0 );
        sub_6470( ref l_U1128, 1 );
        SET_TIME_SCALE( 0.75000000 );
        l_U1157[l_U1156] = 1;
    }
    if ((IS_SCREEN_FADED_IN()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
    {
        PRINT_HELP_FOREVER( "ACBOMB" );
    }
    if ((TIMERA() > 4000) AND (NOT l_U1130[0]))
    {
        if ((NOT (IS_CHAR_DEAD( l_U1155 ))) AND (NOT (IS_CAR_DEAD( l_U1136 ))))
        {
            TASK_ENTER_CAR_AS_DRIVER( l_U1155, l_U1136, 10000 );
        }
        l_U1130[0] = 1;
    }
    if ((TIMERA() > 8000) AND (l_U1130[1] == 0))
    {
        SET_TIME_SCALE( 0.90000000 );
        SET_CAM_POS( l_U1129, vVar32.x, vVar32.y, vVar32.z );
        SET_CAM_ROT( l_U1129, vVar35.x, vVar35.y, vVar35.z );
        SET_CAM_FOV( l_U1129, fVar38 );
        sub_6470( ref l_U1128, 0 );
        sub_6470( ref l_U1129, 1 );
        if (NOT (IS_CHAR_DEAD( l_U1154 )))
        {
            TASK_USE_MOBILE_PHONE_TIMED( l_U1154, 1750 );
        }
        l_U1130[1] = 1;
    }
    if ((TIMERA() > 10500) AND (l_U1130[2] == 0))
    {
        if (NOT (IS_CAR_DEAD( l_U1136 )))
        {
            APPLY_FORCE_TO_CAR( l_U1136, 1, 0.00000000, 0.00000000, 7.50000000, 0.13500000, -2.23000000, -0.21750000, 0, 1, 1, 1 );
            EXPLODE_CAR( l_U1136, 1, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1154 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U1018 );
            TASK_PAUSE( 0, 100 );
            TASK_PLAY_ANIM( 0, "flinch", "amb@dating", 8.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U1018 );
            TASK_PERFORM_SEQUENCE( l_U1154, l_U1018 );
            CLEAR_SEQUENCE_TASK( l_U1018 );
        }
        l_U1130[2] = 1;
    }
    if ((TIMERA() > 12000) || (IS_KEYBOARD_KEY_PRESSED( 11 )))
    {
        DO_SCREEN_FADE_OUT( 250 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        DELETE_CHAR( ref l_U1154 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1690783035 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 486987393 );
        DELETE_CAR( ref l_U1136 );
        DELETE_OBJECT( ref l_U1152 );
        SET_TIME_SCALE( 1.00000000 );
        sub_6470( ref l_U1128, 0 );
        sub_6470( ref l_U1129, 0 );
        sub_6470( ref l_U1127, 0 );
        sub_6470( ref l_U1126, 0 );
        sub_6341( 0 );
        g_U9212 = 1;
        g_U9347 = 1;
        CLEAR_WANTED_LEVEL( sub_3879() );
        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3879() );
        REMOVE_ANIMS( "missRoman2" );
        g_U9938 = 1;
        SET_MAX_WANTED_LEVEL( l_U958 );
        SET_WANTED_MULTIPLIER( 1.00000000 );
        CLEAR_HELP();
        return 1;
    }
    return 0;
}

int sub_13294()
{
    if (l_U1157[l_U1156] == 0)
    {
        CLEAR_HELP();
        DO_SCREEN_FADE_OUT( 250 );
        while (IS_SCREEN_FADING_OUT())
        {
            if (NOT (IS_CAR_DEAD( l_U1135 )))
            {
                CONTROL_CAR_DOOR( l_U1135, 5, 1, 1.00000000 );
            }
            WAIT( 0 );
        }
        LOAD_SCENE( l_U975._fU12._fU0, l_U975._fU12._fU4, l_U975._fU12._fU8 );
        if (((NOT (IS_CHAR_DEAD( l_U963._fU0 ))) AND (IS_VEH_DRIVEABLE( l_U975._fU0 ))) AND (IS_PLAYER_PLAYING( sub_3879() )))
        {
            CLEAR_CHAR_TASKS( sub_3830() );
            CLEAR_CHAR_TASKS( l_U963._fU0 );
            UNLOCK_RAGDOLL( l_U963._fU0, 1 );
            if (NOT (IS_CHAR_IN_CAR( sub_3830(), l_U975._fU0 )))
            {
                WARP_CHAR_INTO_CAR( sub_3830(), l_U975._fU0 );
            }
            if (NOT (IS_CHAR_IN_CAR( l_U963._fU0, l_U975._fU0 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U963._fU0, l_U975._fU0, 0 );
            }
            if (NOT (IS_GROUP_MEMBER( l_U963._fU0, sub_13624() )))
            {
                SET_GROUP_MEMBER( sub_13624(), l_U963._fU0 );
            }
        }
        REMOVE_ANIMS( "clothing" );
        REMOVE_ANIMS( "amb@burgercart" );
        REMOVE_ANIMS( "missRoman2" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1487004273 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2086092453 );
        DELETE_CHAR( ref l_U1153 );
        DELETE_OBJECT( ref l_U1151 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -132862690 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1113677074 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1353709999 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1166 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -573788283 );
        FLUSH_SCENARIO_BLOCKING_AREAS();
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1487004273 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 466399299 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1188894977 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 443141696 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1015062504 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1350491501 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -97968031 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1941123364 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1658159368 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1343754678 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2049396802 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 61597377 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2139514995 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1758615024 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1182 );
        DELETE_CHAR( ref l_U1153 );
        DELETE_CHAR( ref l_U1154 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1690783035 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 486987393 );
        DELETE_CAR( ref l_U1136 );
        DELETE_OBJECT( ref l_U1152 );
        SET_TIME_SCALE( 1.00000000 );
        SETTIMERA( 0 );
        l_U1157[l_U1156] = 1;
    }
    else
    {
        sub_6470( ref l_U1128, 0 );
        sub_6470( ref l_U1129, 0 );
        sub_6341( 0 );
        SET_CAM_BEHIND_PED( sub_3830() );
        g_U9212 = 1;
        g_U9347 = 1;
        CLEAR_WANTED_LEVEL( sub_3879() );
        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3879() );
        g_U9938 = 1;
        SET_MAX_WANTED_LEVEL( l_U958 );
        SET_WANTED_MULTIPLIER( 1.00000000 );
        CLEAR_HELP();
        CLEAR_PED_NON_REMOVAL_AREA();
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U975._fU12._fU0 - 50.00000000, l_U975._fU12._fU4 - 50.00000000, l_U975._fU12._fU8 - 50.00000000, l_U975._fU12._fU0 + 50.00000000, l_U975._fU12._fU4 + 50.00000000, l_U975._fU12._fU8 + 50.00000000 );
        g_U9378 = 0;
        return 1;
    }
    return 0;
}

void sub_13624()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_14420()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U26757 = iVar2 + 2000;
    return;
}

void sub_14603()
{
    sub_14619( l_U963._fU4 );
    sub_15329( l_U975._fU4 );
    REQUEST_ANIMS( l_U1040 );
    REQUEST_ANIMS( "amb@dating" );
    sub_15581( "Michelle1" );
    sub_15760( "MI1AUD" );
    sub_15887( 0, sub_3830(), "NIKO", 0 );
    LOAD_ADDITIONAL_TEXT( "MI1AUD", 6 );
    return;
}

void sub_14619(unknown uParam0)
{
    REQUEST_MODEL( sub_14630( uParam0 ) );
    return;
}

int sub_14630(unknown uParam0)
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
    sub_2289( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_15329(unknown uParam0)
{
    char[64] cVar3;

    if (IS_THIS_MODEL_A_VEHICLE( uParam0 ))
    {
        sub_15354( uParam0 );
    }
    else
    {
        StrCopy( ref cVar3, "model ", 64 );
        ConcatString(ref cVar3, GET_MODEL_NAME_FOR_DEBUG( uParam0 ), 64);
        ConcatString(ref cVar3, " not a vehicle model", 64);
        SCRIPT_ASSERT( ref cVar3 );
    }
    return;
}

void sub_15354(unknown uParam0)
{
    sub_15382( "REQUEST_A_MODEL(" );
    sub_15382( GET_MODEL_NAME_FOR_DEBUG( uParam0 ) );
    sub_15382( ")\n" );
    REQUEST_MODEL( uParam0 );
    l_U481[l_U514] = uParam0;
    l_U514++;
    return;
}

void sub_15382(unknown uParam0)
{
    return;
}

void sub_15581(unknown uParam0)
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

void sub_15760(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_15779();
    return;
}

void sub_15779()
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

void sub_15887(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_15971( "\n PED NUMBER ", uParam0 );
    sub_16011( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_15971(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16011(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16061()
{
    boolean bVar2;

    while ((((((NOT (sub_16077( l_U963._fU4 ))) || (NOT sub_16109())) || (NOT (HAVE_ANIMS_LOADED( l_U1040 )))) || (NOT (HAVE_ANIMS_LOADED( "amb@dating" )))) || (NOT (HAS_ADDITIONAL_TEXT_LOADED( 0 )))) || (NOT (HAS_ADDITIONAL_TEXT_LOADED( 6 ))))
    {
        WAIT( 0 );
    }
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U1042 );
    COPY_GROUP_CHAR_DECISION_MAKER( 65537, ref l_U1041 );
    SET_CHAR_COORDINATES( sub_3830(), l_U1021._fU0, l_U1021._fU4, l_U1021._fU8 );
    SET_CHAR_HEADING( sub_3830(), l_U1024 );
    CREATE_CAR( l_U975._fU4, l_U975._fU12._fU0, l_U975._fU12._fU4, l_U975._fU12._fU8, ref l_U975._fU0, 1 );
    SET_CAR_HEADING( l_U975._fU0, l_U975._fU24 );
    CHANGE_CAR_COLOUR( l_U975._fU0, l_U975._fU44, l_U975._fU48 );
    SET_VEHICLE_DIRT_LEVEL( l_U975._fU0, 0.00000000 );
    SUPPRESS_CAR_MODEL( l_U975._fU4 );
    SET_CAR_AS_MISSION_CAR( l_U975._fU0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U975._fU0 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U990._fU0 );
    if (NOT (IS_CAR_DEAD( l_U990._fU0 )))
    {
        if (LOCATE_CAR_2D( l_U990._fU0, l_U990._fU12._fU0, l_U990._fU12._fU4, 40.00000000, 40.00000000, 0 ))
        {
            SET_CAR_HEADING( l_U990._fU0, l_U990._fU24 );
            SET_CAR_COORDINATES( l_U990._fU0, l_U990._fU12._fU0, l_U990._fU12._fU4, l_U990._fU12._fU8 );
            SET_CAR_AS_MISSION_CAR( l_U990._fU0 );
            bVar2 = false;
            while (NOT bVar2)
            {
                if (NOT (IS_CAR_DEAD( l_U990._fU0 )))
                {
                    if (SET_CAR_ON_GROUND_PROPERLY( l_U990._fU0 ))
                    {
                        bVar2 = true;
                    }
                }
                WAIT( 0 );
            }
        }
    }
    sub_16880( l_U963._fU4, ref l_U963._fU0, l_U963._fU12._fU0, l_U963._fU12._fU4, l_U963._fU12._fU8, l_U963._fU24 );
    sub_15887( 1, l_U963._fU0, "MICHELLE", 0 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U963._fU0, 0 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3830(), 0 );
    SET_GROUP_CHAR_DECISION_MAKER( l_U963._fU0, l_U1041 );
    SET_COMBAT_DECISION_MAKER( l_U963._fU0, l_U1042 );
    SET_CHAR_RELATIONSHIP( l_U963._fU0, 1, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U963._fU0, 0 );
    SET_NO_RESPRAYS( 1 );
    CLEAR_AREA_OF_CHARS( l_U963._fU12._fU0, l_U963._fU12._fU4, l_U963._fU12._fU8, 25.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -817693451, 1197.40000000, -678.30000000, 16.70000000, 1, 0.00000000 );
    return;
}

void sub_16077(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_14630( uParam0 ) );
}

int sub_16109()
{
    int I;

    if (l_U514 != 0)
    {
        for ( I = 0; I <= (l_U514 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U481[I] )))
            {
                REQUEST_MODEL( l_U481[I] );
                sub_15382( "REQUEST_MODEL(" );
                sub_15382( GET_MODEL_NAME_FOR_DEBUG( l_U481[I] ) );
                sub_15382( ") [" );
                sub_16242( I );
                sub_15382( "]\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_16242(unknown uParam0)
{
    return;
}

void sub_16880(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_14630( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_16930( uParam0, (uParam1^) );
    return;
}

void sub_16930(unknown uParam0, unknown uParam1)
{
    sub_16942( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_16942(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_17036( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_17580( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_17036(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_17580(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_17036( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_17036( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_17036( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_17036( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_17036( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_17036( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_17036( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_17036( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_17036( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_17036( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_17036( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_17036( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_17036( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

int sub_19409(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    if ((NOT sub_19418()) AND (NOT (sub_20962( l_U975._fU0, l_U1206 ))))
    {
        if (NOT (IS_GROUP_MEMBER( l_U963._fU0, sub_13624() )))
        {
            g_U64576 = 0;
            if (DOES_BLIP_EXIST( (uParam4^) ))
            {
                SET_ROUTE( (uParam4^), 0 );
                REMOVE_BLIP( (uParam4^) );
                CLEAR_THIS_PRINT( uParam3 );
            }
            if (DOES_BLIP_EXIST( l_U975._fU8 ))
            {
                REMOVE_BLIP( l_U975._fU8 );
                CLEAR_THIS_PRINT( "M1_GETCAR" );
            }
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3830(), l_U963._fU0, 12.00000000, 12.00000000, 0 ))
            {
                SET_GROUP_MEMBER( sub_13624(), l_U963._fU0 );
                if (DOES_BLIP_EXIST( l_U963._fU8 ))
                {
                    SET_ROUTE( l_U963._fU8, 0 );
                    l_U1012 = 0;
                }
            }
            else if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( l_U963._fU0 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U963._fU8 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U963._fU0, ref l_U963._fU8 );
                    SET_BLIP_AS_FRIENDLY( l_U963._fU8, 1 );
                    PRINT( "M1_GETBACK_FOOT", 7500, 1 );
                }
                else
                {
                    l_U1205 = 0;
                    GET_CHAR_COORDINATES( sub_3830(), ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                    GET_CHAR_COORDINATES( l_U963._fU0, ref l_U963._fU28._fU0, ref l_U963._fU28._fU4, ref l_U963._fU28._fU8 );
                    if ((VDIST( uVar9, l_U963._fU28 )) <= 150.00000000)
                    {
                        if (NOT l_U1012)
                        {
                            if ((VDIST( uVar9, l_U963._fU28 )) > 60.00000000)
                            {
                                PRINT_NOW( "M1_F_LEAVING", 7500, 1 );
                                SET_ROUTE( l_U963._fU8, 1 );
                                l_U1012 = 1;
                            }
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U1015 );
                        if ((NOT (IS_CHAR_ON_SCREEN( l_U963._fU0 ))) || ((sub_24095()) AND (l_U1015 >= (l_U1017 + 2500))))
                        {
                            if (sub_20328( 1, 1 ))
                            {
                                l_U959 = 8;
                            }
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U1017 );
                        }
                    }
                }
            }
        }
        else
        {
            g_U64576 = 1;
            if (IS_CHAR_IN_MELEE_COMBAT( sub_3830() ))
            {
                if (NOT (sub_24383( (uParam5^) )))
                {
                    PRINTSTRING( "  ** PAUSE_SPEECH_AFTER_LINE(speech)    //melee - MICHELLE_WITH_PLAYER_IN_HER_CAR() **\n" );
                    sub_24509( uParam5 );
                }
            }
            if (NOT l_U1205)
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_22155( "MI1_BACK", ref l_U1092, 6, 1 );
                    l_U1205 = 1;
                }
            }
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3830(), l_U975._fU0 )))
            {
                if (DOES_BLIP_EXIST( (uParam4^) ))
                {
                    SET_ROUTE( (uParam4^), 0 );
                    REMOVE_BLIP( (uParam4^) );
                    CLEAR_THIS_PRINT( uParam3 );
                }
                if (DOES_BLIP_EXIST( l_U963._fU8 ))
                {
                    REMOVE_BLIP( l_U963._fU8 );
                    CLEAR_THIS_PRINT( "M1_GETBACK_FOOT" );
                }
                if (IS_CHAR_IN_ANY_CAR( l_U963._fU0 ))
                {
                    if (NOT (sub_24383( (uParam5^) )))
                    {
                        PRINTSTRING( "  ** PAUSE_SPEECH_AFTER_LINE(speech)    //player not in car, michelle is **\n" );
                        sub_24509( uParam5 );
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U975._fU8 )))
                {
                    ADD_BLIP_FOR_CAR( l_U975._fU0, ref l_U975._fU8 );
                    SET_BLIP_AS_FRIENDLY( l_U975._fU8, 1 );
                    SET_ROUTE( l_U975._fU8, 1 );
                    PRINT( "M1_GETCAR", 7500, 1 );
                }
                else if (NOT l_U1207)
                {
                    if (l_U1208 < 0)
                    {
                        GET_GAME_TIMER( ref l_U1208 );
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U1015 );
                        switch (l_U1104)
                        {
                            case 0:
                            if (l_U1015 >= (l_U1208 + (sub_25401( 5.00000000 - 1.00000000 ))))
                            {
                                if (sub_22155( "MI1_LARK", ref l_U1098, 6, 1 ))
                                {
                                    l_U1104++;
                                }
                            }
                            break;
                            case 1:
                            if (sub_23251( l_U1098 ))
                            {
                                l_U1104++;
                            }
                            break;
                            case 2:
                            if (NOT (sub_23251( l_U1098 )))
                            {
                                PRINT_NOW( "M1_DICK", 7500, 1 );
                                l_U1104++;
                            }
                            break;
                            case 3:
                            if (l_U1015 >= (l_U1208 + (sub_25401( 5.00000000 ))))
                            {
                                PRINTSTRING( "  * michelle1 failed = player dicking around (bug #178194) *\n" );
                                if (sub_20328( 1, 1 ))
                                {
                                    l_U959 = 11;
                                }
                            }
                            break;
                        }
                    }
                }
            }
            else
            {
                l_U1207 = 1;
                if (DOES_BLIP_EXIST( l_U975._fU8 ))
                {
                    REMOVE_BLIP( l_U975._fU8 );
                    CLEAR_THIS_PRINT( "M1_GETCAR" );
                    l_U1206 = 1;
                }
                if (NOT (IS_CHAR_SITTING_IN_CAR( l_U963._fU0, l_U975._fU0 )))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U963._fU8 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U963._fU0, ref l_U963._fU8 );
                        SET_BLIP_AS_FRIENDLY( l_U963._fU8, 1 );
                        if (NOT (sub_24383( (uParam5^) )))
                        {
                            PRINTSTRING( "  ** PAUSE_SPEECH_AFTER_LINE(speech)    //player in car, michelle not **\n" );
                            sub_24509( uParam5 );
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U963._fU8 ))
                {
                    REMOVE_BLIP( l_U963._fU8 );
                    CLEAR_THIS_PRINT( "M1_GETBACK_FOOT" );
                }
                else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (sub_24383( (uParam5^) ))
                    {
                        sub_26057( uParam6, uParam5, 6, 1 );
                    }
                }
                if (NOT (DOES_BLIP_EXIST( (uParam4^) )))
                {
                    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam4 );
                    SET_ROUTE( (uParam4^), 1 );
                    if (l_U1209)
                    {
                        PRINT( uParam3, 3000, 1 );
                    }
                    else
                    {
                        PRINT( uParam3, 7500, 1 );
                        l_U1209 = 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_19418()
{
    if ((NOT (IS_CHAR_INJURED( l_U963._fU0 ))) || (l_U1172))
    {
        if ((((((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U963._fU0, sub_3830(), 0 )) || (sub_19480( l_U963._fU0 ))) || (sub_19571( l_U963._fU0 ))) || (IS_PED_JACKING( sub_3830() ))) || (l_U1173)) || (l_U1172))
        {
            if (IS_PED_JACKING( sub_3830() ))
            {
                if (IS_GROUP_MEMBER( l_U963._fU0, sub_13624() ))
                {
                    l_U1173 = 1;
                }
            }
            if (l_U1171 < 0)
            {
                GET_GAME_TIMER( ref l_U1171 );
                SAY_AMBIENT_SPEECH( l_U963._fU0, "GUNSHOT_IN_VEHICLE", 0, 0, 0 );
                SET_CHAR_PROOFS( l_U963._fU0, 1, 1, 1, 1, 1 );
                if (NOT (IS_CHAR_ON_FIRE( l_U963._fU0 )))
                {
                    sub_20224( l_U963._fU0 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U1015 );
                if ((l_U1015 >= (l_U1171 + 1500)) || (l_U959 == 3))
                {
                    if (sub_20328( 1, 1 ))
                    {
                        if (DOES_BLIP_EXIST( l_U963._fU8 ))
                        {
                            SET_ROUTE( l_U963._fU8, 0 );
                            REMOVE_BLIP( l_U963._fU8 );
                        }
                        if (NOT l_U1172)
                        {
                            CLEAR_HELP();
                            if (NOT (IS_CHAR_ON_FIRE( l_U963._fU0 )))
                            {
                                sub_20224( l_U963._fU0 );
                            }
                            SET_CHAR_PROOFS( l_U963._fU0, 1, 1, 1, 1, 1 );
                            SETTIMERA( 0 );
                        }
                        l_U959 = 9;
                        return 1;
                    }
                }
            }
        }
        if (IS_CHAR_IN_WATER( l_U963._fU0 ))
        {
            GET_CHAR_HEALTH( l_U963._fU0, ref l_U963._fU44 );
            PRINTSTRING( "  * michelle water health: " );
            PRINTINT( l_U963._fU44 );
            PRINTNL();
        }
        return 0;
        break;
    }
    if (DOES_BLIP_EXIST( l_U963._fU8 ))
    {
        SET_ROUTE( l_U963._fU8, 0 );
        REMOVE_BLIP( l_U963._fU8 );
    }
    PRINT_NOW( "M1_F_DEAD", 7500, 1 );
    l_U959 = 13;
    return 1;
}

void sub_19480(unknown uParam0)
{
    if (IS_CHAR_SHOOTING( sub_3830() ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (IS_GROUP_MEMBER( uParam0, sub_13624() ))
            {
                l_U1168 = 1;
                return 1;
            }
        }
    }
    return l_U1168;
}

void sub_19571(unknown uParam0)
{
    if (IS_CHAR_IN_MELEE_COMBAT( sub_3830() ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (IS_GROUP_MEMBER( uParam0, sub_13624() ))
            {
                if (l_U1170 < 0)
                {
                    GET_GAME_TIMER( ref l_U1170 );
                }
                else
                {
                    GET_GAME_TIMER( ref l_U1015 );
                    if (l_U1015 > (l_U1170 + 5000))
                    {
                        l_U1169 = 1;
                        return l_U1169;
                    }
                    sub_15382( "  * is_player_fought_near_ped:" );
                    sub_19757( (l_U1170 + 5000) - l_U1015 );
                    sub_19978();
                }
                return l_U1169;
            }
        }
    }
    l_U1170 = -1;
    return l_U1169;
}

void sub_19757(unknown uParam0)
{
    if (g_U9231)
    {
        sub_19778( uParam0 );
    }
    return;
}

void sub_19778(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = (iParam0 / 1000) / 60;
    iVar4 = (iParam0 - ((iVar3 * 60) * 1000)) / 1000;
    iVar5 = iParam0 - ((iVar4 + (iVar3 * 60)) * 1000);
    if (iVar3 > 0)
    {
        PRINTINT( iVar3 );
        PRINTSTRING( ":" );
        if (iVar4 < 10)
        {
            PRINTSTRING( "0" );
        }
    }
    PRINTINT( iVar4 );
    PRINTSTRING( "." );
    PRINTINT( iVar5 );
    if (iVar5 < 10)
    {
        PRINTSTRING( "00" );
    }
    else if (iVar5 < 100)
    {
        PRINTSTRING( "0" );
    }
    return;
}

void sub_19978()
{
    if (g_U9231)
    {
        PRINTNL();
    }
    return;
}

void sub_20224(unknown uParam0)
{
    SET_CHAR_RELATIONSHIP( uParam0, 5, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( uParam0, 2 );
    TASK_SMART_FLEE_CHAR( uParam0, sub_3830(), 100.00000000, -1 );
    return;
}

int sub_20328(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3830() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3830(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3830() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3830(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3830()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3830() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3830() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3879() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3879() )))
    {
        return 0;
    }
    return 1;
}

int sub_20962(unknown uParam0, boolean bParam1)
{
    int iVar4;
    float fVar5;
    float fVar6;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
        {
            if (sub_20328( 1, 1 ))
            {
                sub_15382( "michelle1.is_veh_fucked(JAMMED_TIME)\n" );
                l_U959 = 10;
                return 1;
            }
        }
        if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
        {
            if (sub_20328( 1, 1 ))
            {
                sub_15382( "michelle1.is_veh_fucked(ROOF_TIME)\n" );
                l_U959 = 10;
                return 1;
            }
        }
        if (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))
        {
            if (sub_20328( 1, 1 ))
            {
                sub_15382( "michelle1.is_veh_fucked(SIDE_TIME)\n" );
                l_U959 = 10;
                return 1;
            }
        }
        if (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))
        {
            if (sub_20328( 1, 1 ))
            {
                sub_15382( "michelle1.is_veh_fucked(HUNG_UP_TIME)\n" );
                l_U959 = 10;
                return 1;
            }
        }
        if (IS_WANTED_LEVEL_GREATER( sub_3879(), 0 ))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_WEAPON( uParam0, 7 ))
            {
                if (sub_20328( 1, 1 ))
                {
                    sub_15382( "michelle1.is_veh_fucked(FAILED_HIT)\n" );
                    if (NOT (IS_CHAR_INJURED( l_U963._fU0 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U963._fU0, "GUNSHOT_IN_VEHICLE", 0, 0, 0 );
                        SET_CHAR_PROOFS( l_U963._fU0, 1, 1, 1, 1, 1 );
                        if (NOT (IS_CHAR_ON_FIRE( l_U963._fU0 )))
                        {
                            if (l_U959 < 6)
                            {
                                sub_20224( l_U963._fU0 );
                            }
                        }
                    }
                    l_U959 = 9;
                    return 0;
                }
            }
        }
        if (IS_WANTED_LEVEL_GREATER( sub_3879(), 2 ))
        {
            if (sub_20328( 1, 1 ))
            {
                sub_15382( "michelle1.is_veh_fucked(FAILED_HIT)\n" );
                if (NOT (IS_CHAR_INJURED( l_U963._fU0 )))
                {
                    SAY_AMBIENT_SPEECH( l_U963._fU0, "GUNSHOT_IN_VEHICLE", 0, 0, 0 );
                    SET_CHAR_PROOFS( l_U963._fU0, 1, 1, 1, 1, 1 );
                    if (NOT (IS_CHAR_ON_FIRE( l_U963._fU0 )))
                    {
                        if (l_U959 < 6)
                        {
                            sub_20224( l_U963._fU0 );
                        }
                    }
                }
                l_U959 = 9;
                return 0;
            }
        }
        if (bParam1)
        {
            if (sub_21760( uParam0 ))
            {
                if (sub_20328( 1, 1 ))
                {
                    sub_15382( "michelle1.is_veh_fucked(STUCK_FAIL_TIME)\n" );
                    l_U959 = 10;
                    return 1;
                }
            }
        }
        if (NOT l_U1174)
        {
            if (NOT l_U1175)
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_3830(), uParam0 ))
                {
                    GET_CAR_HEALTH( uParam0, ref iVar4 );
                    fVar5 = GET_ENGINE_HEALTH( uParam0 );
                    fVar6 = GET_PETROL_TANK_HEALTH( uParam0 );
                    if (((iVar4 < 400) || (fVar5 < 400.00000000)) || (fVar6 < 400.00000000))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (sub_22155( "MI1_GOSH", ref l_U1176, 4, 1 ))
                            {
                                sub_15382( "  * iCar_health: " );
                                sub_16242( iVar4 );
                                sub_15382( ", fEngine_health: " );
                                sub_23174( fVar5 );
                                sub_15382( ", fPetrol_tank_health: " );
                                sub_23174( fVar6 );
                                sub_19978();
                                l_U1175 = 1;
                            }
                        }
                    }
                }
            }
            else if (NOT (sub_23251( l_U1176 )))
            {
                PRINT( "M1_DAMCAR", 7500, 1 );
                l_U1174 = 1;
            }
        }
        return 0;
        break;
    }
    if (sub_20328( 1, 1 ))
    {
        sub_15382( "michelle1.is_veh_fucked(undriveable)\n" );
        l_U959 = 10;
        return 1;
    }
    return 0;
}

int sub_21760(unknown uParam0)
{
    int iVar3;

    if (g_U9079 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3830(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3830(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3830(), uParam0, 50.00000000, 50.00000000, 0 )))
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

void sub_22155(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22178( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_22178(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_22232( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_22232(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_22254( iParam1 )))
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
    sub_22934( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_22254(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_15382( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_15382( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_15382( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_22934(int iParam0, int iParam1)
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

void sub_23174(unknown uParam0)
{
    return;
}

int sub_23251(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_15382( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_15382( "\n speech is not playing" );
    }
    return 0;
}

int sub_24095()
{
    if (sub_24127( sub_3830(), "Bowl_GtaMloRoom" ))
    {
        if (sub_24127( l_U963._fU0, "Bowl_GtaMloRoom" ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    if (NOT (sub_24127( l_U963._fU0, "Bowl_GtaMloRoom" )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_24127(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    if (iVar4 == (GET_HASH_KEY( uParam1 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_24383(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

int sub_24509(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_15382( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_15382( "\n CONVERSATION PAUSED AT LINE " );
            sub_16242( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_15382( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_15382( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_15382( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_25401(unknown uParam0)
{
    return ROUND( (uParam0 * 60.00000000) * 1000.00000000 );
}

void sub_26057(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_26080( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_26080(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_22232( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_26343()
{
    switch (l_U1014)
    {
        case 0:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            GET_GAME_TIMER( ref l_U1016 );
            l_U1014++;
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U1015 );
        if (l_U1015 >= (l_U1016 + 1500))
        {
            switch (g_U64564)
            {
                case 0:
                if ((g_U15654[1]) AND (g_U15654[5]))
                {
                    sub_22155( "MI1_FAIR", ref l_U1046, 6, 1 );
                    l_U1052 = "MI1_FAIR";
                }
                else
                {
                    sub_22155( "MI1_B1V1", ref l_U1046, 6, 1 );
                    l_U1052 = "MI1_B1V1";
                }
                break;
                case 1:
                sub_22155( "MI1_B1V2", ref l_U1046, 6, 1 );
                l_U1052 = "MI1_B1V2";
                break;
                default:
                if (NOT (IS_CHAR_DEAD( l_U963._fU0 )))
                {
                    SAY_AMBIENT_SPEECH( l_U963._fU0, "LISTEN_TO_RADIO", 0, 0, 0 );
                }
                l_U1052 = "null";
            }
            l_U1016 = -1;
            g_U64564++;
            l_U1014++;
        }
        break;
        case 2:
        if (sub_24383( l_U1046 ))
        {
            if (IS_CHAR_IN_MELEE_COMBAT( sub_3830() ))
            {
                l_U1016 = -1;
            }
            else if (l_U1016 < 0)
            {
                if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
                {
                    GET_GAME_TIMER( ref l_U1016 );
                }
            }
            else if (l_U1015 >= (l_U1016 + 1500))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_26057( l_U1052, ref l_U1046, 6, 1 );
                    l_U1016 = -1;
                }
            };;;
        }
        if (NOT l_U1059)
        {
            if (LOCATE_CHAR_IN_CAR_3D( sub_3830(), l_U1025._fU0 + 2.50000000, l_U1025._fU4 + 7.50000000, l_U1025._fU8, 7.50000000, 12.50000000, 2.50000000, 0 ))
            {
                if (sub_22155( "MI1_ARRC", ref l_U1053, 6, 1 ))
                {
                    l_U1059 = 1;
                }
            }
        }
        break;
    }
    return;
}

int sub_27169()
{
    boolean bVar2;

    bVar2 = g_U32898._fU24;
    if (NOT bVar2)
    {
        return 0;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        if (NOT (sub_4661( g_U32898._fU0 )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_27576(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, boolean bParam12)
{
    if ((NOT sub_19418()) AND (NOT (sub_20962( l_U975._fU0, 0 ))))
    {
        if (DOES_BLIP_EXIST( l_U975._fU8 ))
        {
            REMOVE_BLIP( l_U975._fU8 );
            CLEAR_THIS_PRINT( "M1_GETCAR" );
        }
        if (NOT (IS_GROUP_MEMBER( l_U963._fU0, sub_13624() )))
        {
            g_U64576 = 0;
            if (DOES_BLIP_EXIST( (uParam4^) ))
            {
                SET_ROUTE( (uParam4^), 0 );
                REMOVE_BLIP( (uParam4^) );
                CLEAR_THIS_PRINT( uParam3 );
            }
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3830(), l_U963._fU0, 12.00000000, 12.00000000, 0 ))
            {
                SET_GROUP_MEMBER( sub_13624(), l_U963._fU0 );
            }
            else if (NOT (DOES_BLIP_EXIST( l_U963._fU8 )))
            {
                ADD_BLIP_FOR_CHAR( l_U963._fU0, ref l_U963._fU8 );
                SET_BLIP_AS_FRIENDLY( l_U963._fU8, 1 );
                sub_24509( ref uParam5 );
                PRINT( "M1_GETBACK_FOOT", 7500, 1 );
            }
        }
        else
        {
            g_U64576 = 1;
            if (DOES_BLIP_EXIST( l_U963._fU8 ))
            {
                REMOVE_BLIP( l_U963._fU8 );
                CLEAR_THIS_PRINT( "M1_GETBACK_FOOT" );
            }
            else if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if ((sub_24383( uParam5 )) AND ((l_U1014 != 14) AND (l_U1014 != 15)))
                {
                    sub_26057( uParam11, ref uParam5, 6, 1 );
                }
            }
            if (IS_CHAR_IN_MELEE_COMBAT( sub_3830() ))
            {
                if (NOT (sub_24383( uParam5 )))
                {
                    PRINTSTRING( "  ** PAUSE_SPEECH_AFTER_LINE(speech)    //melee - MICHELLE_WITH_PLAYER_ON_FOOT **\n" );
                    sub_24509( ref uParam5 );
                }
            }
            if (bParam12)
            {
                if (NOT (DOES_BLIP_EXIST( (uParam4^) )))
                {
                    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam4 );
                    SET_ROUTE( (uParam4^), 1 );
                    PRINT( uParam3, 3000, 1 );
                }
                else
                {
                    return 1;
                }
            }
            else if (NOT (sub_24127( sub_3830(), "Bowl_GtaMloRoom" )))
            {
                if (NOT (DOES_BLIP_EXIST( (uParam4^) )))
                {
                    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam4 );
                    SET_ROUTE( (uParam4^), 1 );
                    PRINT( uParam3, 3000, 1 );
                }
                else
                {
                    return 1;
                }
            }
            else if (DOES_BLIP_EXIST( (uParam4^) ))
            {
                SET_ROUTE( (uParam4^), 0 );
                REMOVE_BLIP( (uParam4^) );
                CLEAR_THIS_PRINT( uParam3 );
            }
            else
            {
                return 1;
            };;;
        }
    }
    return 0;
}

void sub_28542()
{
    switch (l_U1014)
    {
        case 10:
        GET_GAME_TIMER( ref l_U1015 );
        if (sub_23251( l_U1053 ))
        {
            GET_GAME_TIMER( ref l_U1016 );
        }
        else if (l_U1015 >= (l_U1016 + 500))
        {
            StrCopy( ref l_U1117[0], "MI1_ARRFF", 16 );
            StrCopy( ref l_U1117[1], "MI1_BOWL", 16 );
            sub_28733( ref l_U1117, ref l_U1117[0], ref l_U1117[1] );
            sub_29080( ref l_U1117, ref l_U1060, 6, 1 );
            l_U1014++;
        }
        break;
        case 11:
        if (sub_23251( l_U1060 ))
        {
            sub_29188( 2500 );
        }
        else
        {
            PRINT( "M1_GO_BOWLING", 7500, 1 );
            l_U1014++;
        }
        break;
        case 12:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            GET_GAME_TIMER( ref l_U1016 );
            l_U1014++;
        }
        break;
        case 13:
        GET_GAME_TIMER( ref l_U1015 );
        if (l_U1015 >= (l_U1016 + 250))
        {
            switch (g_U64565)
            {
                case 0:
                sub_22155( "MI1_B2V1", ref l_U1072, 6, 1 );
                l_U1078 = "MI1_B2V1";
                break;
                case 1:
                sub_22155( "MI1_B2V2", ref l_U1072, 6, 1 );
                l_U1078 = "MI1_B2V2";
                break;
                default: l_U1078 = "null";
            }
            g_U64565++;
            l_U1014++;
        }
        break;
        case 14:
        if (((NOT l_U1011) AND (NOT g_U9371)) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3830(), l_U1031._fU0, l_U1031._fU4, l_U1031._fU8, l_U1034._fU0, l_U1034._fU4, l_U1034._fU8, 0 ))))
        {
            if (sub_23251( l_U1072 ))
            {
                sub_29188( 2500 );
            }
            if (sub_24383( l_U1072 ))
            {
                if (IS_CHAR_IN_MELEE_COMBAT( sub_3830() ))
                {
                    l_U1016 = -1;
                }
                else if (l_U1016 < 0)
                {
                    if ((NOT IS_SCRIPTED_CONVERSATION_ONGOING()) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                    {
                        GET_GAME_TIMER( ref l_U1016 );
                    }
                }
                else if (l_U1015 >= (l_U1016 + 1500))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (sub_26057( l_U1078, ref l_U1072, 6, 1 ))
                        {
                            l_U1016 = -1;
                        }
                    }
                };;;
            }
        }
        else
        {
            l_U1011 = 1;
            if (NOT (sub_23251( l_U1066 )))
            {
                if (NOT (sub_24383( l_U1072 )))
                {
                    sub_30016( ref l_U1072 );
                }
                else if (sub_22155( "MI1_ARRB", ref l_U1066, 2, 1 ))
                {
                    ;
                }
            }
            else
            {
                l_U1014++;
            }
        }
        break;
        case 15:
        if (NOT (sub_23251( l_U1066 )))
        {
            if (sub_24383( l_U1072 ))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_26057( l_U1078, ref l_U1072, 6, 1 );
                }
            }
        }
        break;
    }
    return;
}

void sub_28733(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_28784( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_28784(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_29080(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_29103( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_29103(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_22232( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_29188(unknown uParam0)
{
    if ((NOT (IS_CHAR_IN_ANY_CAR( sub_3830() ))) AND (NOT (IS_CHAR_INJURED( l_U963._fU0 ))))
    {
        if (IS_SCRIPTED_SPEECH_PLAYING( sub_3830() ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( sub_3830(), l_U963._fU0 )))
            {
                PRINTSTRING( "  + player looks at michelle\n" );
                TASK_LOOK_AT_CHAR( sub_3830(), l_U963._fU0, uParam0, 0 );
            }
        }
        else if (IS_PED_LOOKING_AT_PED( sub_3830(), l_U963._fU0 ))
        {
            PRINTSTRING( "  + player STOPS looking at michelle\n" );
            TASK_CLEAR_LOOK_AT( sub_3830() );
        }
    }
    return;
}

int sub_30016(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_15382( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_15382( "\n CONVERSATION PAUSED AT LINE " );
            sub_16242( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_15382( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_15382( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_15382( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_30623()
{
    return g_U10979;
}

void sub_30835()
{
    return g_U32898._fU28;
}

void sub_31512()
{
    switch (l_U1014)
    {
        case 20:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            GET_GAME_TIMER( ref l_U1016 );
            l_U1014++;
        }
        break;
        case 21:
        GET_GAME_TIMER( ref l_U1015 );
        if ((l_U1015 >= (l_U1016 + 0)) AND (sub_24095()))
        {
            switch (l_U960)
            {
                case 0:
                StrCopy( ref l_U1117[0], "MI1_LVBL", 16 );
                break;
                case 1:
                StrCopy( ref l_U1117[0], "MI1_LVBW", 16 );
                break;
                case 2:
                StrCopy( ref l_U1117[0], "MI1_LVBD", 16 );
                break;
                case 3:
                StrCopy( ref l_U1117[0], "MI1_LVBA", 16 );
                break;
                default: StrCopy( ref l_U1117[0], "blank", 16 );
            }
            StrCopy( ref l_U1117[1], "MI1_TKHM", 16 );
            sub_15382( "  21 PLAY_MULTIPLE_SPEECH(''" );
            sub_15382( ref l_U1117[0] );
            sub_15382( "'', ''" );
            sub_15382( ref l_U1117[1] );
            sub_15382( "'')\n" );
            sub_28733( ref l_U1117, ref l_U1117[0], ref l_U1117[1] );
            sub_29080( ref l_U1117, ref l_U1079, 6, 1 );
            l_U1014++;
        }
        break;
        case 22:
        if ((NOT (sub_23251( l_U1079 ))) AND (DOES_BLIP_EXIST( l_U975._fU8 )))
        {
            PRINT( "M1_GETCAR", 7500, 1 );
            GET_GAME_TIMER( ref l_U1016 );
            l_U1014++;
            l_U1209 = 0;
        }
        break;
        case 23:
        GET_GAME_TIMER( ref l_U1015 );
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            GET_GAME_TIMER( ref l_U1016 );
            l_U1014++;
        }
        break;
        case 24:
        GET_GAME_TIMER( ref l_U1015 );
        if (l_U1015 >= (l_U1016 + 2500))
        {
            switch (g_U64566)
            {
                case 0:
                sub_15382( "  24.0 PLAY_SINGLE_SPEECH(''MI1_B3V1'')\n" );
                sub_22155( "MI1_B3V1", ref l_U1085, 6, 1 );
                l_U1091 = "MI1_B3V1";
                break;
                case 1:
                sub_15382( "  24.1 PLAY_SINGLE_SPEECH(''MI1_B3V1'')\n" );
                sub_22155( "MI1_B3V2", ref l_U1085, 6, 1 );
                l_U1091 = "MI1_B3V2";
                break;
                default: l_U1091 = "null";
            }
            l_U1016 = -1;
            g_U64566++;
            l_U1014++;
        }
        break;
        case 25:
        if (sub_23251( l_U1085 ))
        {
            sub_29188( 2500 );
            if (sub_24383( l_U1085 ))
            {
                if ((IS_CHAR_IN_MELEE_COMBAT( sub_3830() )) || (NOT sub_24095()))
                {
                    l_U1016 = -1;
                }
                else if (l_U1016 < 0)
                {
                    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
                    {
                        GET_GAME_TIMER( ref l_U1016 );
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U1015 );
                    sub_19778( (l_U1016 + 1500) - l_U1015 );
                    PRINTNL();
                    if (l_U1015 >= (l_U1016 + 1500))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_15382( "  25 UNPAUSE_SINGLE_SPEECH(''" );
                            PRINTSTRING( l_U1091 );
                            PRINTSTRING( "'')\n" );
                            sub_26057( l_U1091, ref l_U1085, 6, 1 );
                            l_U1016 = -1;
                        }
                    }
                }
            }
        }
        else
        {
            l_U1207 = 0;
            l_U1014++;
        }
        break;
        case 26:
        if ((IS_CHAR_SITTING_IN_CAR( sub_3830(), l_U975._fU0 )) AND (IS_CHAR_SITTING_IN_CAR( l_U963._fU0, l_U975._fU0 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                GET_GAME_TIMER( ref l_U1016 );
                l_U1014++;
            }
        }
        break;
        case 27:
        GET_GAME_TIMER( ref l_U1015 );
        if (l_U1015 >= (l_U1016 + 2500))
        {
            switch (g_U64566)
            {
                case 1:
                sub_15382( "  27 PLAY_SINGLE_SPEECH(''MI1_B3V2'')\n" );
                sub_22155( "MI1_B3V2", ref l_U1085, 6, 1 );
                l_U1091 = "MI1_B3V2";
                break;
                default:
                if (NOT (IS_CHAR_DEAD( l_U963._fU0 )))
                {
                    SAY_AMBIENT_SPEECH( l_U963._fU0, "LISTEN_TO_RADIO", 0, 0, 0 );
                }
                l_U1091 = "null";
            }
            l_U1016 = -1;
            g_U64566++;
            l_U1014++;
        }
        break;
        case 28:
        if (sub_23251( l_U1085 ))
        {
            if (sub_24383( l_U1085 ))
            {
                if (IS_CHAR_IN_MELEE_COMBAT( sub_3830() ))
                {
                    l_U1016 = -1;
                }
                else if (l_U1016 < 0)
                {
                    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
                    {
                        GET_GAME_TIMER( ref l_U1016 );
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U1015 );
                    sub_15382( "  28 UNPAUSE_SINGLE_SPEECH in " );
                    sub_19757( (l_U1016 + 1500) - l_U1015 );
                    sub_19978();
                    if (l_U1015 >= (l_U1016 + 1500))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_15382( "  28 UNPAUSE_SINGLE_SPEECH(''" );
                            sub_15382( l_U1091 );
                            sub_15382( "'')\n" );
                            sub_26057( l_U1091, ref l_U1085, 6, 1 );
                            l_U1016 = -1;
                        }
                    }
                }
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U1016 );
            l_U1014++;
        }
        break;
    }
    return;
}

void sub_33622()
{
    unknown uVar2;
    vector vVar3;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    int I;

    if (sub_5114( ref l_U1006, l_U961 ))
    {
        l_U961 = 5;
    }
    if ((NOT (IS_CHAR_DEAD( l_U963._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U975._fU0 ))))
    {
        switch (l_U961)
        {
            case 0:
            CLEAR_PRINTS();
            CLEAR_HELP();
            if (DOES_BLIP_EXIST( l_U1020 ))
            {
                REMOVE_BLIP( l_U1020 );
            }
            sub_33796( 0 );
            sub_33937( 1 );
            CLEAR_AREA( l_U1037._fU0, l_U1037._fU4, l_U1037._fU8, 10.00000000, 1 );
            if (NOT (IS_CHAR_IN_CAR( sub_3830(), l_U975._fU0 )))
            {
                WARP_CHAR_INTO_CAR( sub_3830(), l_U975._fU0 );
            }
            if (NOT (IS_CHAR_IN_CAR( l_U963._fU0, l_U975._fU0 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U963._fU0, l_U975._fU0, 0 );
            }
            GET_CAR_MODEL( l_U975._fU0, ref uVar2 );
            if (IS_THIS_MODEL_A_CAR( uVar2 ))
            {
                CLOSE_ALL_CAR_DOORS( l_U975._fU0 );
            }
            CLEAR_CHAR_TASKS( sub_3830() );
            SET_CAR_COORDINATES( l_U975._fU0, l_U1037._fU0 + 0.75000000, l_U1037._fU4 - 0.75000000, -100.00000000 );
            if ((sub_34457() == 0) || (sub_34457() == 3))
            {
                SET_VEH_INTERIORLIGHT( l_U975._fU0, 1 );
            }
            if ((NOT (IS_CHAR_DEAD( sub_3830() ))) AND (NOT (IS_CAR_DEAD( l_U975._fU0 ))))
            {
                if (SET_CAR_ON_GROUND_PROPERLY( l_U975._fU0 ))
                {
                    SET_USE_HIGHDOF( 1 );
                    sub_34628( ref l_U1013 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    CREATE_CAM( 14, ref l_U1183[0] );
                    SET_CAM_POS( l_U1183[0], 917.28790000, 171.08260000, 34.93357000 );
                    SET_CAM_ROT( l_U1183[0], -2.41042600, -0.00000000, -68.05392000 );
                    SET_CAM_FOV( l_U1183[0], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1183[0], 12.50000000 );
                    SET_CAM_FAR_DOF( l_U1183[0], 20.00000000 );
                    CREATE_CAM( 14, ref l_U1183[1] );
                    SET_CAM_POS( l_U1183[1], 917.09300000, 171.00410000, 34.94242000 );
                    SET_CAM_ROT( l_U1183[1], -2.41042800, 0.00000000, -68.05391000 );
                    SET_CAM_FOV( l_U1183[1], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1183[1], 12.50000000 );
                    SET_CAM_FAR_DOF( l_U1183[1], 20.00000000 );
                    CREATE_CAM( 3, ref l_U1183[2] );
                    vVar3 = {1.28000000, 3.71000000, 0.38000000};
                    vVar6 = {-0.65000000, -0.25000000, 0.45000000};
                    vVar9 = {-0.94000000, 3.89000000, 0.32000000};
                    vVar12 = {0.13000000, 1.30000000, 0.25000000};
                    CREATE_CAM( 14, ref l_U1187[0] );
                    if (NOT (IS_CAR_DEAD( l_U975._fU0 )))
                    {
                        ATTACH_CAM_TO_VEHICLE( l_U1187[0], l_U975._fU0 );
                        SET_CAM_ATTACH_OFFSET( l_U1187[0], vVar3.x, vVar3.y, vVar3.z );
                        POINT_CAM_AT_VEHICLE( l_U1187[0], l_U975._fU0 );
                        SET_CAM_POINT_OFFSET( l_U1187[0], vVar6.x, vVar6.y, vVar6.z );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1187[0], 1 );
                        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U1187[0], 1 );
                    }
                    SET_CAM_FOV( l_U1187[0], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1187[0], 0.50000000 );
                    SET_CAM_FAR_DOF( l_U1187[0], 5.50000000 );
                    CREATE_CAM( 14, ref l_U1187[1] );
                    if (NOT (IS_CAR_DEAD( l_U975._fU0 )))
                    {
                        ATTACH_CAM_TO_VEHICLE( l_U1187[1], l_U975._fU0 );
                        SET_CAM_ATTACH_OFFSET( l_U1187[1], vVar9.x, vVar9.y, vVar9.z );
                        POINT_CAM_AT_VEHICLE( l_U1187[1], l_U975._fU0 );
                        SET_CAM_POINT_OFFSET( l_U1187[1], vVar12.x, vVar12.y, vVar12.z );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1187[1], 1 );
                        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U1187[1], 1 );
                    }
                    SET_CAM_FOV( l_U1187[1], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1187[1], 0.50000000 );
                    SET_CAM_FAR_DOF( l_U1187[1], 5.50000000 );
                    CREATE_CAM( 3, ref l_U1187[2] );
                    CREATE_CAM( 14, ref l_U1191[0] );
                    SET_CAM_POS( l_U1191[0], 944.33000000, 162.40000000, 37.80000000 );
                    SET_CAM_ROT( l_U1191[0], -8.60000000, 0.00000000, 43.00000000 );
                    SET_CAM_FOV( l_U1191[0], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1191[0], 20.00000000 );
                    SET_CAM_FAR_DOF( l_U1191[0], 25.00000000 );
                    CREATE_CAM( 14, ref l_U1191[1] );
                    SET_CAM_POS( l_U1191[1], 944.13000000, 162.50000000, 37.80000000 );
                    SET_CAM_ROT( l_U1191[1], -8.60000000, 0.00000000, 43.00000000 );
                    SET_CAM_FOV( l_U1191[1], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1191[1], 20.00000000 );
                    SET_CAM_FAR_DOF( l_U1191[1], 25.00000000 );
                    CREATE_CAM( 3, ref l_U1191[2] );
                    SET_CAM_ACTIVE( l_U1183[0], 1 );
                    SET_CAM_ACTIVE( l_U1183[1], 1 );
                    SET_CAM_ACTIVE( l_U1183[2], 1 );
                    SET_CAM_PROPAGATE( l_U1183[2], 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U1183[2], l_U1183[0], l_U1183[1], 2000, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SETTIMERB( 0 );
                    l_U961 = 1;
                }
            }
            break;
            case 1:
            switch (l_U1195)
            {
                case 0:
                if (TIMERB() > 1500)
                {
                    sub_22155( "MI1_INCAR", ref l_U1105, 6, 1 );
                    TASK_LOOK_AT_CHAR( sub_3830(), l_U963._fU0, -2, 0 );
                    TASK_LOOK_AT_CHAR( l_U963._fU0, sub_3830(), -2, 4 );
                    l_U1195++;
                }
                break;
                case 1:
                if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1183[2] )))
                {
                    SET_CAM_ACTIVE( l_U1187[0], 1 );
                    SET_CAM_ACTIVE( l_U1187[1], 1 );
                    CREATE_CAM( 3, ref l_U1187[2] );
                    SET_CAM_ACTIVE( l_U1187[2], 1 );
                    SET_CAM_PROPAGATE( l_U1187[2], 1 );
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_3830(), "niko_incar_partial", "amb@dating", 1.00000000, 1, 0, 0, 0, 0 );
                    SET_CAM_INTERP_STYLE_CORE( l_U1187[2], l_U1187[0], l_U1187[1], 11000, 0 );
                    SET_CAM_INTERP_STYLE_DETAILED( l_U1187[2], 0, 3, 1, 1 );
                    l_U1195 = 0;
                    l_U961 = 2;
                }
                break;
            }
            break;
            case 2:
            if (NOT (sub_23251( l_U1105 )))
            {
                if (IS_GROUP_MEMBER( l_U963._fU0, sub_13624() ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U963._fU0 );
                }
                OPEN_SEQUENCE_TASK( ref l_U1018 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 918.88260000, 181.45460000, 33.81560000, 2, -1 );
                CLOSE_SEQUENCE_TASK( l_U1018 );
                TASK_PERFORM_SEQUENCE( l_U963._fU0, l_U1018 );
                CLEAR_SEQUENCE_TASK( l_U1018 );
                SET_CAM_PROPAGATE( l_U1187[2], 0 );
                SET_CAM_ACTIVE( l_U1191[0], 1 );
                SET_CAM_ACTIVE( l_U1191[1], 1 );
                SET_CAM_ACTIVE( l_U1191[2], 1 );
                SET_CAM_PROPAGATE( l_U1191[2], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U1191[2], l_U1191[0], l_U1191[1], 4500, 0 );
                l_U961 = 4;
            }
            break;
            case 4:
            if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1191[2] )))
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U961 = 6;
            }
            break;
            case 5:
            DO_SCREEN_FADE_OUT( 250 );
            CLEAR_PRINTS();
            sub_33796( 0 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            WAIT( 2500 );
            DO_SCREEN_FADE_IN( 250 );
            l_U961 = 6;
            break;
            case 6:
            for ( I = 0; I < l_U1183; I++ )
            {
                if (DOES_CAM_EXIST( l_U1183[I] ))
                {
                    SET_CAM_PROPAGATE( l_U1183[I], 0 );
                    SET_CAM_ACTIVE( l_U1183[I], 0 );
                    DESTROY_CAM( l_U1183[I] );
                }
            }
            for ( I = 0; I < l_U1187; I++ )
            {
                if (DOES_CAM_EXIST( l_U1187[I] ))
                {
                    SET_CAM_PROPAGATE( l_U1187[I], 0 );
                    SET_CAM_ACTIVE( l_U1187[I], 0 );
                    DESTROY_CAM( l_U1187[I] );
                }
            }
            for ( I = 0; I < l_U1191; I++ )
            {
                if (DOES_CAM_EXIST( l_U1191[I] ))
                {
                    SET_CAM_PROPAGATE( l_U1191[I], 0 );
                    SET_CAM_ACTIVE( l_U1191[I], 0 );
                    DESTROY_CAM( l_U1191[I] );
                }
            }
            if (DOES_CHAR_EXIST( l_U963._fU0 ))
            {
                DELETE_CHAR( ref l_U963._fU0 );
            }
            if (NOT (IS_CAR_DEAD( l_U975._fU0 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_3830(), l_U975._fU0 )))
                {
                    WARP_CHAR_INTO_CAR( sub_3830(), l_U975._fU0 );
                }
                CLOSE_ALL_CAR_DOORS( l_U975._fU0 );
                SET_VEH_INTERIORLIGHT( l_U975._fU0, 0 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_37190( ref l_U1013 );
            SET_USE_HIGHDOF( 0 );
            SET_CAM_BEHIND_PED( sub_3830() );
            sub_33937( 0 );
            l_U959 = 12;
            break;
        }
    }
    return;
}

void sub_33796(unknown uParam0)
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

void sub_33937(boolean bParam0)
{
    if (bParam0)
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_WIDESCREEN_BORDERS( 1 );
        if (IS_PLAYER_PLAYING( sub_3879() ))
        {
            SET_PLAYER_CONTROL( sub_3879(), 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3830(), 1 );
        }
        while (NOT sub_34018())
        {
            WAIT( 0 );
        }
    }
    else
    {
        sub_34121();
        SET_WIDESCREEN_BORDERS( 0 );
        if (IS_PLAYER_PLAYING( sub_3879() ))
        {
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3830(), 0 );
            SET_PLAYER_CONTROL( sub_3879(), 1 );
            SET_CAM_BEHIND_PED( sub_3830() );
        }
    }
    return;
}

void sub_34018()
{
    return sub_34029( 1, 1 );
}

int sub_34029(boolean bParam0, unknown uParam1)
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

void sub_34121()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_34457()
{
    int iVar2;

    iVar2 = GET_HOURS_OF_DAY();
    if (iVar2 < 8)
    {
        return 0;
    }
    else if (iVar2 < 12)
    {
        return 1;
    }
    else if (iVar2 < 18)
    {
        return 2;
    };;;
    return 3;
}

void sub_34628(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 1)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_37190(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 0)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

int sub_37341()
{
    int I;

    if (sub_5114( ref l_U1006, l_U962 ))
    {
        l_U962 = 5;
    }
    if (NOT (IS_CHAR_INJURED( l_U963._fU0 )))
    {
        switch (l_U962)
        {
            case 0:
            if (IS_MESSAGE_BEING_DISPLAYED())
            {
                if (IS_PLAYER_CONTROL_ON( sub_3879() ))
                {
                    SET_PLAYER_CONTROL( sub_3879(), 0 );
                    sub_33796( 0 );
                    if (DOES_BLIP_EXIST( l_U1020 ))
                    {
                        REMOVE_BLIP( l_U1020 );
                    }
                }
            }
            else if (NOT IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    DO_SCREEN_FADE_OUT( 125 );
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    sub_33937( 1 );
                    DO_SCREEN_FADE_OUT( 125 );
                }
            }
            else
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U975._fU0 );
                CLEAR_AREA( 1195.07400000, -674.81060000, 15.44480000, 7.50000000, 1 );
                CLEAR_AREA( 1196.34100000, -676.19410000, 15.43980000, 7.50000000, 1 );
                SET_CHAR_COORDINATES( sub_3830(), 1195.07400000, -674.81060000, 15.44480000 );
                SET_CHAR_HEADING( sub_3830(), 207.78550000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_3830(), l_U963._fU0 );
                SET_CHAR_COORDINATES( l_U963._fU0, 1196.34100000, -676.19410000, 15.43980000 );
                SET_CHAR_HEADING( l_U963._fU0, 40.66400000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U963._fU0, sub_3830() );
                if (IS_GROUP_MEMBER( l_U963._fU0, sub_13624() ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U963._fU0 );
                }
                SET_USE_HIGHDOF( 1 );
                sub_34628( ref l_U1013 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                CREATE_CAM( 14, ref l_U1196[0] );
                SET_CAM_POS( l_U1196[0], 1194.91800000, -672.77010000, 17.32172000 );
                SET_CAM_ROT( l_U1196[0], -15.54623000, 0.00000100, -164.57410000 );
                SET_CAM_FOV( l_U1196[0], 30.00000000 );
                SET_CAM_NEAR_DOF( l_U1196[0], 1.00000000 );
                SET_CAM_FAR_DOF( l_U1196[0], 4.00000000 );
                CREATE_CAM( 14, ref l_U1196[1] );
                SET_CAM_POS( l_U1196[1], 1192.95100000, -673.98190000, 17.16701000 );
                SET_CAM_ROT( l_U1196[1], -11.19175000, 0.00000000, -122.40440000 );
                SET_CAM_FOV( l_U1196[1], 30.00000000 );
                SET_CAM_NEAR_DOF( l_U1196[1], 1.00000000 );
                SET_CAM_FAR_DOF( l_U1196[1], 4.00000000 );
                CREATE_CAM( 14, ref l_U1200[0] );
                SET_CAM_POS( l_U1200[0], 1201.52100000, -670.12160000, 17.27306000 );
                SET_CAM_ROT( l_U1200[0], -2.41041300, -0.00000000, 142.78160000 );
                SET_CAM_FOV( l_U1200[0], 60.00000000 );
                SET_CAM_NEAR_DOF( l_U1200[0], 7.50000000 );
                SET_CAM_FAR_DOF( l_U1200[0], 12.50000000 );
                CREATE_CAM( 14, ref l_U1200[1] );
                SET_CAM_POS( l_U1200[1], 1201.68300000, -669.94420000, 17.29829000 );
                SET_CAM_ROT( l_U1200[1], -2.41041300, -0.00000000, 142.78160000 );
                SET_CAM_FOV( l_U1200[1], 60.00000000 );
                SET_CAM_NEAR_DOF( l_U1200[1], 7.50000000 );
                SET_CAM_FAR_DOF( l_U1200[1], 12.50000000 );
                SET_CAM_ACTIVE( l_U1196[0], 1 );
                SET_CAM_ACTIVE( l_U1196[1], 1 );
                CREATE_CAM( 3, ref l_U1196[2] );
                CREATE_CAM( 3, ref l_U1200[2] );
                SET_CAM_ACTIVE( l_U1196[2], 1 );
                SET_CAM_PROPAGATE( l_U1196[2], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U1196[2], l_U1196[0], l_U1196[1], 9000, 0 );
                SET_CAM_ACTIVE( l_U1196[2], 1 );
                SET_CAM_PROPAGATE( l_U1196[2], 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SETTIMERB( 0 );
                DO_SCREEN_FADE_IN( 125 );
                l_U962 = 1;
            }
            break;
            case 1:
            if (TIMERB() > 2500)
            {
                sub_22155( "MI1_DROP", ref l_U1111, 6, 1 );
                l_U962 = 2;
            }
            break;
            case 2:
            if (NOT (sub_23251( l_U1111 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U1018 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 1200.63100000, -682.06830000, 16.44110000, 2, -1 );
                CLOSE_SEQUENCE_TASK( l_U1018 );
                TASK_PERFORM_SEQUENCE( l_U963._fU0, l_U1018 );
                CLEAR_SEQUENCE_TASK( l_U1018 );
                SETTIMERB( 0 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U962 = 3;
            }
            break;
            case 3:
            if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1196[2] )))
            {
                SET_CAM_PROPAGATE( l_U1196[2], 0 );
                SET_CAM_ACTIVE( l_U1200[0], 1 );
                SET_CAM_ACTIVE( l_U1200[1], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U1200[2], l_U1200[0], l_U1200[1], 3000, 0 );
                SET_CAM_ACTIVE( l_U1200[2], 1 );
                SET_CAM_PROPAGATE( l_U1200[2], 1 );
                l_U962 = 4;
            }
            break;
            case 4:
            if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1200[2] )))
            {
                DO_SCREEN_FADE_OUT( 125 );
                l_U962 = 6;
            }
            break;
            case 5:
            DO_SCREEN_FADE_OUT( 250 );
            CLEAR_PRINTS();
            sub_33796( 0 );
            l_U962 = 6;
            break;
            case 6:
            if (IS_SCREEN_FADED_OUT())
            {
                for ( I = 0; I < l_U1196; I++ )
                {
                    SET_CAM_PROPAGATE( l_U1196[I], 0 );
                    SET_CAM_ACTIVE( l_U1196[I], 0 );
                }
                for ( I = 0; I < l_U1200; I++ )
                {
                    SET_CAM_PROPAGATE( l_U1200[I], 0 );
                    SET_CAM_ACTIVE( l_U1200[I], 0 );
                }
                if (DOES_CHAR_EXIST( l_U963._fU0 ))
                {
                    DELETE_CHAR( ref l_U963._fU0 );
                }
                SET_CHAR_COORDINATES( sub_3830(), 1198.57900000, -682.27650000, 15.44000000 );
                SET_CHAR_HEADING( sub_3830(), 180.00000000 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                sub_37190( ref l_U1013 );
                SET_USE_HIGHDOF( 0 );
                CLEAR_ROOM_FOR_CHAR( sub_3830() );
                SET_CAM_BEHIND_PED( sub_3830() );
                sub_33937( 0 );
                DO_SCREEN_FADE_IN( 125 );
                PRINT( "M1_F_BAIL", 7500, 1 );
                l_U1008 = 1;
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_39403(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_39447( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_39447(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

int sub_40029(unknown uParam0, unknown uParam1)
{
    int iVar4;
    boolean bVar5;
    int I;

    if (sub_5114( ref l_U1006, l_U962 ))
    {
        l_U962 = 5;
    }
    if (NOT (IS_CHAR_INJURED( l_U963._fU0 )))
    {
        switch (l_U962)
        {
            case 0:
            if (NOT l_U1204)
            {
                if (sub_20328( 1, 1 ))
                {
                    if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( uParam1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                    {
                        PRINT_NOW( uParam1, 7500, 1 );
                        SET_CHAR_PROOFS( l_U963._fU0, 1, 1, 1, 1, 1 );
                        if (IS_GROUP_MEMBER( l_U963._fU0, sub_13624() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U963._fU0 );
                        }
                        if (DOES_BLIP_EXIST( l_U1020 ))
                        {
                            REMOVE_BLIP( l_U1020 );
                        }
                        sub_33796( 0 );
                    }
                    else
                    {
                        l_U1204 = 1;
                    }
                    PRINTSTRING( "  * IS_THIS_PRINT_BEING_DISPLAYED(sFailed_print): " );
                    sub_40394( IS_THIS_PRINT_BEING_DISPLAYED( uParam1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ) );
                    PRINTNL();
                }
            }
            else if ((NOT (IS_THIS_PRINT_BEING_DISPLAYED( uParam1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))) AND ((sub_20328( 1, 1 )) || ((IS_SCREEN_FADED_OUT()) AND (g_U8220 == 6))))
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING())
                    {
                        CLEAR_PRINTS();
                        CLEAR_HELP();
                        DO_SCREEN_FADE_OUT( 125 );
                    }
                }
                else
                {
                    sub_33937( 1 );
                    if (IS_PLAYER_CONTROL_ON( sub_3879() ))
                    {
                        SET_PLAYER_CONTROL( sub_3879(), 0 );
                    }
                    LOAD_SCENE( 927.51330000, 179.07280000, 32.37830000 );
                    CLEAR_AREA( 927.51330000, 179.07280000, 32.37830000, 20.00000000, 1 );
                    if (IS_GROUP_MEMBER( l_U963._fU0, sub_13624() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U963._fU0 );
                    }
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3830(), 1 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3830() );
                    if (IS_CHAR_IN_ANY_CAR( sub_3830() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3830(), 927.51330000, 179.07280000, 32.37830000 );
                    }
                    else
                    {
                        DETACH_PED( sub_3830(), 1 );
                        SET_CHAR_COORDINATES( sub_3830(), 927.51330000, 179.07280000, 32.37830000 );
                    }
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U963._fU0, 1 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U963._fU0 );
                    if (IS_CHAR_IN_ANY_CAR( l_U963._fU0 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U963._fU0, 928.30010000, 180.50550000, 32.22570000 );
                    }
                    else
                    {
                        DETACH_PED( l_U963._fU0, 1 );
                        SET_CHAR_COORDINATES( l_U963._fU0, 928.30010000, 180.50550000, 32.22570000 );
                    }
                    if (IS_CHAR_ON_FIRE( sub_3830() ))
                    {
                        EXTINGUISH_CHAR_FIRE( sub_3830() );
                    }
                    if (IS_CHAR_ON_FIRE( l_U963._fU0 ))
                    {
                        EXTINGUISH_CHAR_FIRE( l_U963._fU0 );
                    }
                    SET_CHAR_HEADING( sub_3830(), 351.60460000 );
                    SET_CHAR_HEADING( l_U963._fU0, 154.12040000 );
                    TASK_CHAT_WITH_CHAR( sub_3830(), l_U963._fU0, 1, 1 );
                    TASK_CHAT_WITH_CHAR( l_U963._fU0, sub_3830(), 0, 1 );
                    TASK_LOOK_AT_CHAR( l_U963._fU0, sub_3830(), -1, 0 );
                    TASK_LOOK_AT_CHAR( sub_3830(), l_U963._fU0, -1, 0 );
                    # -sub_C1FFC0-0xc214c8( 0, ref l_U1043 );
                    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U1044 );
                    SET_CHAR_DECISION_MAKER( l_U963._fU0, l_U1043 );
                    SET_COMBAT_DECISION_MAKER( l_U963._fU0, l_U1044 );
                    if ((NOT (sub_20962( l_U975._fU0, 0 ))) AND (l_U959 != 10))
                    {
                        CLOSE_ALL_CAR_DOORS( l_U975._fU0 );
                        SET_CAR_COORDINATES( l_U975._fU0, l_U975._fU12._fU0, l_U975._fU12._fU4, l_U975._fU12._fU8 );
                        SET_CAR_HEADING( l_U975._fU0, l_U975._fU24 );
                        iVar4 = 0;
                        bVar5 = false;
                        while (NOT bVar5)
                        {
                            PRINTSTRING( "bRepositioning_michelle_car_on_fail\n" );
                            if (NOT (IS_CAR_DEAD( l_U975._fU0 )))
                            {
                                if ((SET_CAR_ON_GROUND_PROPERLY( l_U975._fU0 )) || (iVar4 > 500))
                                {
                                    bVar5 = true;
                                }
                            }
                            else
                            {
                                bVar5 = true;
                            }
                            iVar4++;
                            WAIT( 0 );
                        }
                    }
                    SET_USE_HIGHDOF( 1 );
                    sub_34628( ref l_U1013 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    CREATE_CAM( 14, ref l_U1196[0] );
                    SET_CAM_POS( l_U1196[0], 940.62950000, 172.53590000, 36.30827000 );
                    SET_CAM_ROT( l_U1196[0], -6.34920500, -0.00000000, 40.18186000 );
                    SET_CAM_FOV( l_U1196[0], 60.00000000 );
                    SET_CAM_NEAR_DOF( l_U1196[0], 10.50000000 );
                    SET_CAM_FAR_DOF( l_U1196[0], 50.50000000 );
                    CREATE_CAM( 14, ref l_U1196[1] );
                    SET_CAM_POS( l_U1196[1], 941.45030000, 171.56400000, 36.44982000 );
                    SET_CAM_ROT( l_U1196[1], -6.34920500, -0.00000000, 40.18186000 );
                    SET_CAM_FOV( l_U1196[1], 60.00000000 );
                    SET_CAM_NEAR_DOF( l_U1196[1], 10.50000000 );
                    SET_CAM_FAR_DOF( l_U1196[1], 50.50000000 );
                    CREATE_CAM( 14, ref l_U1200[0] );
                    SET_CAM_POS( l_U1200[0], 927.85660000, 177.26680000, 34.02955000 );
                    SET_CAM_ROT( l_U1200[0], -9.55777100, -0.00000000, 2.59592600 );
                    SET_CAM_FOV( l_U1200[0], 30.00000000 );
                    SET_CAM_NEAR_DOF( l_U1200[0], 1.00000000 );
                    SET_CAM_FAR_DOF( l_U1200[0], 6.00000000 );
                    CREATE_CAM( 14, ref l_U1200[1] );
                    SET_CAM_POS( l_U1200[1], 922.20370000, 177.40050000, 34.03201000 );
                    SET_CAM_ROT( l_U1200[1], -0.68886700, -0.00000000, -72.58157000 );
                    SET_CAM_FOV( l_U1200[1], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1200[1], 1.00000000 );
                    SET_CAM_FAR_DOF( l_U1200[1], 6.00000000 );
                    SET_CAM_ACTIVE( l_U1196[0], 1 );
                    SET_CAM_ACTIVE( l_U1196[1], 1 );
                    CREATE_CAM( 3, ref l_U1196[2] );
                    CREATE_CAM( 3, ref l_U1200[2] );
                    SET_CAM_ACTIVE( l_U1196[2], 1 );
                    SET_CAM_PROPAGATE( l_U1196[2], 1 );
                    WAIT( 250 );
                    SET_CAM_INTERP_STYLE_CORE( l_U1196[2], l_U1196[0], l_U1196[1], 6500, 0 );
                    SET_CAM_ACTIVE( l_U1196[2], 1 );
                    SET_CAM_PROPAGATE( l_U1196[2], 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SETTIMERB( 0 );
                    DO_SCREEN_FADE_IN( 125 );
                    l_U962 = 1;
                }
            }
            break;
            case 1:
            if (TIMERB() > 750)
            {
                sub_22155( uParam0, ref l_U1111, 6, 1 );
                l_U962 = 2;
            }
            break;
            case 2:
            if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1196[2] )))
            {
                SET_CAM_PROPAGATE( l_U1196[2], 0 );
                SET_CAM_ACTIVE( l_U1200[0], 1 );
                SET_CAM_ACTIVE( l_U1200[1], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U1200[2], l_U1200[0], l_U1200[1], 12000, 0 );
                SET_CAM_ACTIVE( l_U1200[2], 1 );
                SET_CAM_PROPAGATE( l_U1200[2], 1 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U962 = 3;
            }
            break;
            case 3:
            if (NOT (sub_23251( l_U1111 )))
            {
                TASK_GO_STRAIGHT_TO_COORD( l_U963._fU0, 917.60110000, 181.49840000, 35.02440000, 2, -1 );
                l_U962 = 4;
            }
            break;
            case 4:
            if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1200[2] )))
            {
                DO_SCREEN_FADE_OUT( 125 );
                l_U962 = 6;
            }
            break;
            case 5:
            DO_SCREEN_FADE_OUT( 250 );
            CLEAR_PRINTS();
            sub_33796( 0 );
            l_U962 = 6;
            break;
            case 6:
            if (IS_SCREEN_FADED_OUT())
            {
                for ( I = 0; I < l_U1196; I++ )
                {
                    SET_CAM_PROPAGATE( l_U1196[I], 0 );
                    SET_CAM_ACTIVE( l_U1196[I], 0 );
                }
                for ( I = 0; I < l_U1200; I++ )
                {
                    SET_CAM_PROPAGATE( l_U1200[I], 0 );
                    SET_CAM_ACTIVE( l_U1200[I], 0 );
                }
                if (DOES_CHAR_EXIST( l_U963._fU0 ))
                {
                    DELETE_CHAR( ref l_U963._fU0 );
                }
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3830(), 0 );
                SET_CHAR_COORDINATES( sub_3830(), 927.51330000, 179.07280000, 32.37830000 );
                SET_CHAR_HEADING( sub_3830(), 351.60460000 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                sub_37190( ref l_U1013 );
                SET_USE_HIGHDOF( 0 );
                CLEAR_ROOM_FOR_CHAR( sub_3830() );
                SET_CAM_BEHIND_PED( sub_3830() );
                sub_33937( 0 );
                DO_SCREEN_FADE_IN( 125 );
                l_U1008 = 1;
                return 1;
            }
            break;
        }
    }
    else
    {
        PRINTSTRING( "PLAYED_FAILED_CUTSCENE - michelle is dead\n" );
        l_U959 = 13;
    }
    return 0;
}

void sub_40394(boolean bParam0)
{
    if (bParam0)
    {
        PRINTSTRING( "TRUE" );
    }
    else
    {
        PRINTSTRING( "FALSE" );
    }
    return;
}

void sub_43027()
{
    unknown uVar2;

    sub_43040( 0, ref uVar2, 1, -1 );
    sub_43875( 0 );
    CLEAR_WANTED_LEVEL( sub_3879() );
    sub_44845();
    sub_44931();
    TRIGGER_MISSION_COMPLETE_AUDIO( g_U32927 );
    l_U1005 = 0;
    return;
}

void sub_43040(int iParam0, unknown uParam1, boolean bParam2, int iParam3)
{
    if (bParam2)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 365, 1 );
    }
    else
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 366, 1 );
    }
    if ((iParam0 == 2) AND (iParam3 >= 0))
    {
        sub_43104( iParam0, iParam3, (uParam1^) );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 364, 1 );
    (uParam1^)++;
    return;
}

void sub_43104(int iParam0, int iParam1, unknown uParam2)
{
    if (iParam0 == 2)
    {
        if (((NOT (sub_43126( iParam0, uParam2 ))) || (iParam1 == 27)) || (iParam1 == 26))
        {
            sub_43203( iParam1 );
        }
    }
    return;
}

int sub_43126(int iParam0, int iParam1)
{
    if (iParam1 <= 0)
    {
        if ((iParam0 == 0) || (iParam0 == 1))
        {
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_43203(int iParam0)
{
    int I;
    int iVar4;
    unknown[7] uVar5;
    int iVar13;

    if (g_U954 >= 35)
    {
        return 0;
    }
    iVar4 = 1;
    array(ref uVar5, 7);
    switch (iParam0)
    {
        case 1:
        case 3:
        case 12:
        case 14:
        case 16:
        case 18:
        case 20:
        case 22:
        case 24:
        iVar4 = 2;
        break;
        case 28:
        if ((GET_BITS_IN_RANGE( g_U955[iParam0 / 5], (iParam0 mod 5) * 6, ((iParam0 mod 5) * 6) + 5 )) == 63)
        {
            SET_BITS_IN_RANGE( ref g_U955[iParam0 / 5], (iParam0 mod 5) * 6, ((iParam0 mod 5) * 6) + 5, g_U954 );
            g_U954++;
            sub_15971( "\n Updating Alex's blog with story ", iParam0 + 12 );
            return 1;
        }
        iVar4 = 7;
        break;
    }
    sub_43484( ref uVar5, iVar4 );
    for ( I = 0; I <= (iVar4 - 1); I++ )
    {
        iVar13 = iParam0;
        iVar13 += uVar5[I];
        if ((GET_BITS_IN_RANGE( g_U955[iVar13 / 5], (iVar13 mod 5) * 6, ((iVar13 mod 5) * 6) + 5 )) == 63)
        {
            SET_BITS_IN_RANGE( ref g_U955[iVar13 / 5], (iVar13 mod 5) * 6, ((iVar13 mod 5) * 6) + 5, g_U954 );
            g_U954++;
            sub_15971( "\n Updating Alex's blog with story ", iVar13 + 12 );
            return 1;
        }
    }
    return 0;
}

void sub_43484(unknown uParam0, int iParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;

    if (iParam1 <= 1)
    {
        (uParam0^)[0] = 0;
    }
    else if ((uParam0^) >= iParam1)
    {
        for ( I = 0; I <= (iParam1 - 1); I++ )
        {
            (uParam0^)[I] = I;
        }
        for ( I = iParam1 - 1; I >= 1; I += -1 )
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar6 );
            uVar5 = (uParam0^)[I];
            (uParam0^)[I] = (uParam0^)[uVar6];
            (uParam0^)[uVar6] = uVar5;
        }
    }
    return;
}

void sub_43875(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3830() )))
    {
        GET_CAR_CHAR_IS_USING( sub_3830(), ref g_U33853[uParam0]._fU0 );
        if (NOT (IS_CAR_DEAD( g_U33853[uParam0]._fU0 )))
        {
            GET_CAR_MODEL( g_U33853[uParam0]._fU0, ref g_U33853[uParam0]._fU4 );
            if (IS_THIS_MODEL_A_BOAT( g_U33853[uParam0]._fU4 ))
            {
                g_U33853[uParam0]._fU8[0] = -1;
                g_U33853[uParam0]._fU8[1] = -1;
                g_U33853[uParam0]._fU8[2] = -1;
                g_U33853[uParam0]._fU8[3] = -1;
            }
            else
            {
                GET_CAR_COLOURS( g_U33853[uParam0]._fU0, ref g_U33853[uParam0]._fU8[0], ref g_U33853[uParam0]._fU8[1] );
                GET_EXTRA_CAR_COLOURS( g_U33853[uParam0]._fU0, ref g_U33853[uParam0]._fU8[2], ref g_U33853[uParam0]._fU8[3] );
            }
        }
        else
        {
            g_U33853[uParam0]._fU8[0] = -1;
            g_U33853[uParam0]._fU8[1] = -1;
            g_U33853[uParam0]._fU8[2] = -1;
            g_U33853[uParam0]._fU8[3] = -1;
            g_U33853[uParam0]._fU4 = 0;
        }
        sub_44285( sub_3830(), ref g_U33889[uParam0], 1 );
    }
    return;
}

void sub_44285(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_PROP_INDEX( uParam0, 0, iParam1 + 0 );
        if (iParam1->_fU0 == -1)
        {
            iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_3830(), 8 );
            iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_3830(), 8 );
            if ((iVar5 == 1) AND (iVar6 == 0))
            {
                iParam1->_fU0 = 10;
            }
        }
        GET_CHAR_PROP_INDEX( uParam0, 1, iParam1 + 4 );
        iParam1->_fU8 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 0 );
        iParam1->_fU12 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 1 );
        iParam1->_fU16 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 2 );
        iParam1->_fU20 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 3 );
        iParam1->_fU24 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 4 );
        iParam1->_fU28 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 5 );
        iParam1->_fU32 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 6 );
        iParam1->_fU36 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 7 );
        iParam1->_fU40 = GET_CHAR_TEXTURE_VARIATION( uParam0, 0 );
        iParam1->_fU44 = GET_CHAR_TEXTURE_VARIATION( uParam0, 1 );
        iParam1->_fU48 = GET_CHAR_TEXTURE_VARIATION( uParam0, 2 );
        iParam1->_fU52 = GET_CHAR_TEXTURE_VARIATION( uParam0, 3 );
        iParam1->_fU56 = GET_CHAR_TEXTURE_VARIATION( uParam0, 4 );
        iParam1->_fU60 = GET_CHAR_TEXTURE_VARIATION( uParam0, 5 );
        iParam1->_fU64 = GET_CHAR_TEXTURE_VARIATION( uParam0, 6 );
        iParam1->_fU68 = GET_CHAR_TEXTURE_VARIATION( uParam0, 7 );
    }
    else
    {
        iParam1->_fU0 = -1;
        iParam1->_fU4 = -1;
        iParam1->_fU8 = -1;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        iParam1->_fU28 = -1;
        iParam1->_fU32 = -1;
        iParam1->_fU36 = -1;
        iParam1->_fU40 = -1;
        iParam1->_fU44 = -1;
        iParam1->_fU48 = -1;
        iParam1->_fU52 = -1;
        iParam1->_fU56 = -1;
        iParam1->_fU60 = -1;
        iParam1->_fU64 = -1;
        iParam1->_fU68 = -1;
    }
    if (bParam2)
    {
        if (iParam1->_fU0 == 2)
        {
            iParam1->_fU0 = -1;
        }
    }
    return;
}

void sub_44845()
{
    sub_44856( 6, 3 );
    sub_44856( 1020, 3 );
    return;
}

void sub_44856(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_44931()
{
    sub_44940();
    return;
}

void sub_44940()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_44958();
    sub_45017( iVar2, iVar3, iVar4 );
    return;
}

void sub_44958()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_45017(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 2;
    sub_45046( iVar5, uParam0, uParam1, uParam2, "Girl_3" );
    return;
}

void sub_45046(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_45142( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_45142( ref cVar9 );
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
            sub_45142( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_45142( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_45142( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_45142( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_45719( iParam0, iVar7 );;;
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
                sub_46116( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_46116( 0, 4 );
            }
        }
    }
    if (NOT (sub_46205( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3879(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3879() );
    }
    sub_2433();
    bVar27 = true;
    uVar28 = sub_45719( iParam0, iVar7 );
    uVar29 = sub_1890( iParam0 );
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
                sub_55581( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_56011();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_56096( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_56153( iParam0 );
                sub_56192( 0 );
                sub_2331( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_56300();
        }
    }
    if (bParam2)
    {
        sub_56011();
        sub_56388();
        sub_56192( 0 );
    }
    if (bParam3)
    {
        sub_56011();
        sub_56428();
        sub_56192( 0 );
        sub_2331( uVar29, 0 );
    }
    sub_1777();
    return;
}

void sub_45142(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_45719(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_2289( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_46116(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_46205(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_46413( uParam1 );
        break;
        case 1:
        bVar8 = sub_48491( uParam1 );
        break;
        case 2:
        bVar8 = sub_48717( uParam1 );
        break;
        case 3:
        bVar8 = sub_48867( uParam1 );
        break;
        case 4:
        bVar8 = sub_49145( uParam1 );
        break;
        case 5:
        bVar8 = sub_49448( uParam1 );
        break;
        case 6:
        bVar8 = sub_49647( uParam1 );
        break;
        case 7:
        bVar8 = sub_49873( uParam1 );
        break;
        case 8:
        bVar8 = sub_50108( uParam1 );
        break;
        case 9:
        bVar8 = sub_50483( uParam1 );
        break;
        case 10:
        bVar8 = sub_50730( uParam1 );
        break;
        case 11:
        bVar8 = sub_50869( uParam1 );
        break;
        case 12:
        bVar8 = sub_51168( uParam1 );
        break;
        case 13:
        bVar8 = sub_51396( uParam1 );
        break;
        case 14:
        bVar8 = sub_51683( uParam1 );
        break;
        case 15:
        bVar8 = sub_51965( uParam1 );
        break;
        case 16:
        bVar8 = sub_52247( uParam1 );
        break;
        case 17:
        bVar8 = sub_52448( uParam1 );
        break;
        case 18:
        bVar8 = sub_52521( uParam1 );
        break;
        case 19:
        bVar8 = sub_52735( uParam1 );
        break;
        case 20:
        bVar8 = sub_52988( uParam1 );
        break;
        case 21:
        bVar8 = sub_53235( uParam1 );
        break;
        case 22:
        bVar8 = sub_53436( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_48096( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_45719( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_53759( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_46413(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_46692( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_46692( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_46692( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_46692( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_46692( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_46692( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_46692( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_46692( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_46692( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_46692( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_46692( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_46692( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_46692( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_46692( iVar3, 0, 3, 1, 0, 0 );
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
        sub_46692( iVar3, 0, sub_47974(), sub_48240(), 0, 0 );
        break;
        default:
        sub_48399( "Friend 1", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Friend 1", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_46692(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_46703( uParam1 );
    sub_46877( uParam0, 0, uParam2 );
    sub_46877( uParam0, 1, uParam3 );
    sub_46877( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_44958();
    return;
}

void sub_46703(unknown uParam0)
{
    ADD_SCORE( sub_3879(), uParam0 );
    sub_46728( uParam0 );
    return;
}

void sub_46728(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2289( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_46877(unknown uParam0, int iParam1, int iParam2)
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
        sub_47034( uParam0 );
    }
    return;
}

void sub_47034(unknown uParam0)
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

int sub_47974()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_48096( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_48096(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_48240()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_48096( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_48399(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_48491(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46692( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_48399( "Contact 2", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 2", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48717(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_46692( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_48399( "Girl 3", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Girl 3", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48867(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_46692( iVar3, 0, sub_47974(), sub_48240(), 0, 0 );
        break;
        default:
        sub_48399( "Friend 4", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Friend 4", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49145(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46692( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_46692( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_46692( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_46692( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_48399( "Contact 5", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 5", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49448(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_48399( "Contact 7", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 7", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49647(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46692( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_48399( "Contact 7b", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 7b", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49873(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_46692( iVar3, 0, sub_47974(), sub_48240(), 0, 0 );
        break;
        default:
        sub_48399( "Friend 8", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Friend 8", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50108(unknown uParam0)
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
        sub_46692( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_46692( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_46692( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_46692( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_46692( iVar3, 0, sub_47974(), sub_48240(), 0, 0 );
        break;
        default:
        sub_48399( "Friend 9", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Friend 9", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50483(unknown uParam0)
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
        sub_46692( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_46692( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_46692( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_48399( "Contact 10", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_48399( "Contact 10", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50730(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_48399( "Girl 11", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Girl 11", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50869(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46692( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_46692( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_46692( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_46692( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_46692( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_48399( "Contact 12", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 12", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51168(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46692( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_48399( "Contact 13", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 13", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51396(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_46692( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_46692( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_46692( iVar3, 0, sub_47974(), sub_48240(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_48399( "Friend 15", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Friend 15", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51683(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46692( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_46692( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_46692( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_48399( "Contact 16", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 16", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51965(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_46692( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_46692( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_46692( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_48399( "Contact 18", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 18", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52247(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_48399( "Contact 19", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 19", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52448(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_48399( "Girl 20", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52521(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_48399( "Contact 21", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 21", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52735(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46692( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_46692( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_48399( "Contact 22", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 22", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52988(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_46692( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46692( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_46692( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_48399( "Contact 24", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 24", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53235(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46692( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46692( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46692( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_48399( "Contact 25", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48399( "Contact 25", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53436(unknown uParam0)
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
        sub_46692( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_48399( "Girl 26", 1 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_48399( "Girl 26", 0 );
        sub_46692( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_53759(int iParam0, int iParam1)
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
    if (sub_53807( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_54538( iParam1 );
    }
    return;
}

int sub_53807(int iParam0, int iParam1)
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
            sub_53947( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_53947(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_54129( 0 );
    return;
}

void sub_54129(boolean bParam0)
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
        sub_54384();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_54384()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_54538(int iParam0)
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
        sub_54871( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_54871( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_54871( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_54871( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_54871( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_54871( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_54871( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_54871( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_54871( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_54871( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_54871( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_54871( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_54871( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_54871( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_54871( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_54871( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_54871( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_54871( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_54871( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_54871(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_55581(unknown uParam0, unknown uParam1)
{
    sub_55600( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_55600(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_56011()
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

int sub_56096(int iParam0, int iParam1)
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

void sub_56153(unknown uParam0)
{
    sub_1676();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_56192(unknown uParam0)
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

void sub_56300()
{
    sub_56309();
    return;
}

void sub_56309()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_56388()
{
    sub_56309();
    return;
}

void sub_56428()
{
    sub_56309();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_56549()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT l_U1008)
    {
        sub_33796( 0 );
        if (sub_19418())
        {
            if ((IS_CHAR_INJURED( l_U963._fU0 )) AND (NOT l_U1172))
            {
                sub_56631( HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U963._fU0, sub_3830(), 0 ) );
            }
        }
        else if (sub_20962( l_U975._fU0, 1 ))
        {
            if (DOES_VEHICLE_EXIST( l_U975._fU0 ))
            {
                sub_15382( "  * michelle_car.veh exists\n" );
            }
            else
            {
                sub_15382( "  * michelle_car.veh DOES NOT EXISTS\n" );
            }
            if (IS_CAR_DEAD( l_U975._fU0 ))
            {
                sub_15382( "  * michelle_car.veh DEAD\n" );
            }
            else
            {
                sub_15382( "  * michelle_car.veh not dead\n" );
            }
        }
        else
        {
            GET_CHAR_COORDINATES( sub_3830(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_CHAR_COORDINATES( l_U963._fU0, ref l_U963._fU28._fU0, ref l_U963._fU28._fU4, ref l_U963._fU28._fU8 );
            if ((VDIST( uVar2, l_U963._fU28 )) >= 150.00000000)
            {
                PRINT_NOW( "M1_F_LEFT", 7500, 1 );
            }
            else
            {
                PRINT_NOW( "michelle1 - fail reason ", 7500, 1 );
            }
        }
    }
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3879(), 150 );
        SAY_AMBIENT_SPEECH( sub_3830(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_43040( 0, ref uVar5, 0, -1 );
    sub_57439();
    l_U1005 = 0;
    return;
}

void sub_56631(unknown uParam0)
{
    sub_56642( uParam0 );
    return;
}

void sub_56642(boolean bParam0)
{
    int iVar3;

    iVar3 = 2;
    if (bParam0)
    {
        sub_56663( iVar3 );
    }
    return;
}

void sub_56663(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        sub_46692( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_45142( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_57439()
{
    sub_57448();
    return;
}

void sub_57448()
{
    int iVar2;

    iVar2 = 2;
    sub_57462( iVar2 );
    sub_2424( iVar2 );
    return;
}

void sub_57462(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3879(), 150 );
    CLEAR_HELP();
    sub_1248( uParam0 );
    return;
}