void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 1;
    l_U106 = 3;
    l_U108 = 0;
    l_U109 = -1;
    l_U110 = 0;
    l_U111 = 0;
    l_U116 = 1;
    l_U208 = 0;
    l_U209 = 0;
    l_U210 = 0;
    l_U211 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U241 = 10.00000000;
    l_U242 = 15.00000000;
    l_U257 = 0;
    l_U258 = 0;
    l_U259 = 0;
    l_U260 = 0;
    l_U261 = 1;
    l_U327 = 6;
    l_U365 = nil;
    l_U378 = nil;
    l_U396 = 1;
    l_U431 = nil;
    l_U451 = 1;
    l_U527 = 6;
    l_U536 = "BOGT_BoxDrop";
    l_U537 = "BOGT_Box_TickDrop";
    l_U602 = 0.63600000;
    l_U603 = 0.37600000;
    l_U652 = 0.05200000;
    l_U653 = 0.35300000;
    l_U654 = 0.30000000;
    l_U655 = 0.37200000;
    l_U656 = 0.37300000;
    l_U657 = 0.38700000;
    l_U658 = 0.44400000;
    l_U659 = 0.03750000;
    l_U660 = 0.36900000;
    l_U661 = 0.62350000;
    l_U662 = 0.60800000;
    l_U663 = {0.24300000, 0.46700000, 0.00000000};
    l_U666 = {0.23100000, 0.43500000, 0.00000000};
    l_U669 = {0.23100000, 0.43500000, 0.00000000};
    l_U672 = {0.31920000, 0.65250000, 0.00000000};
    l_U675 = {0.31920000, 0.65250000, 0.00000000};
    l_U678 = {0.24300000, 0.46700000, 0.00000000};
    l_U681 = {0.50000000, 1.10000000, 0.00000000};
    l_U684 = {0.31920000, 0.65250000, 0.00000000};
    l_U687 = {0.18225000, 0.35025000, 0.00000000};
    l_U690 = 0.30000000;
    l_U691 = 0.37000000;
    l_U692 = 0.56200000;
    l_U693 = 0.40100000;
    l_U694 = 0.30000000;
    l_U695 = 0.37000000;
    l_U696 = 0.69700000;
    l_U697 = 0.40100000;
    l_U698 = 0.30000000;
    l_U699 = 0.37000000;
    l_U700 = 0.66500000;
    l_U701 = 0.40100000;
    l_U702 = 0.32500000;
    l_U703 = 0.62500000;
    l_U704 = 0.00800000;
    l_U705 = 0.49700000;
    l_U706 = 0.52500000;
    l_U707 = 0.49700000;
    l_U708 = 0.51800000;
    l_U709 = 1;
    l_U710 = 0;
    l_U711 = {0.50000000, 0.50000000, 0};
    l_U714 = 0.20000000;
    l_U715 = 0.20000000;
    l_U759 = 0;
    l_U760 = 0;
    l_U772 = 0;
    l_U776 = 0;
    l_U783 = 0;
    l_U784 = 0;
    l_U795 = 0;
    l_U796 = 0;
    l_U797 = 0;
    l_U798 = 0;
    l_U828 = 0;
    l_U829 = 0;
    l_U887 = {-379.33520000, 1559.81100000, 19.13420000};
    l_U911 = 1;
    l_U1674 = 0;
    l_U1781 = 0;
    l_U1870 = 0;
    l_U1973 = 0;
    l_U1995 = 1;
    l_U2128 = 0;
    l_U2235 = 0;
    l_U2300 = 0;
    WAIT( 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_980();
        sub_3297();
    }
    SET_MISSION_FLAG( 1 );
    while (l_U911)
    {
        WAIT( 0 );
        switch (l_U795)
        {
            case 0:
            g_U43137 = 19;
            sub_5299();
            l_U795 = 2;
            break;
            case 2:
            sub_14684();
            break;
            case 1:
            if (NOT l_U912)
            {
                CLEAR_AREA( l_U859[0]._fU0, l_U859[0]._fU4, l_U859[0]._fU8, 300.00000000, 1 );
                sub_17973( "F1_AA" );
            }
            else
            {
                l_U795 = 3;
            }
            break;
            case 3:
            if (NOT l_U1620)
            {
                l_U1620 = 1;
                sub_16993();
                sub_18397();
            }
            if (IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_IN())
                {
                    DO_SCREEN_FADE_IN_UNHACKED( 2000 );
                }
            }
            else
            {
                SET_PLAYER_CONTROL( sub_20771(), 1 );
                if (NOT (g_U43104[19] == 2))
                {
                    g_U43104[19] = 1;
                }
                l_U795 = 4;
            }
            break;
            case 4:
            if (NOT l_U2330)
            {
                sub_20861();
                if (DOES_VEHICLE_EXIST( l_U903 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U903 ))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_7291(), l_U903 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U2331 )))
                            {
                                ADD_BLIP_FOR_CAR( l_U903, ref l_U2331 );
                                SET_BLIP_AS_FRIENDLY( l_U2331, 1 );
                                CHANGE_BLIP_DISPLAY( l_U2331, 2 );
                            }
                            else if (NOT IS_SCREEN_FADING())
                            {
                                if (NOT l_U945[0])
                                {
                                    sub_21601( "E2F1AUD" );
                                    sub_21664( "E2F1_ARMGO", ref l_U1700, 6, 1 );
                                    l_U945[0] = 1;
                                }
                                else if (NOT l_U945[1])
                                {
                                    if (NOT (sub_3725( l_U1700 )))
                                    {
                                        PRINT_NOW( "F1_GET", 7500, 1 );
                                        l_U945[1] = 1;
                                    }
                                }
                            }
                            for ( l_U799 = 0; l_U799 < 2; l_U799++ )
                            {
                                if (DOES_CHAR_EXIST( l_U908[l_U799] ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
                                    {
                                        if (NOT (IS_CHAR_IN_CAR( l_U908[l_U799], l_U903 )))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 11, ref l_U960[l_U799] );
                                            if (l_U960[l_U799] == 7)
                                            {
                                                if (l_U799 == 0)
                                                {
                                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                                    TASK_ENTER_CAR_AS_PASSENGER( l_U908[l_U799], l_U903, -2, 0 );
                                                }
                                                else
                                                {
                                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                                    TASK_ENTER_CAR_AS_PASSENGER( l_U908[l_U799], l_U903, -2, 1 );
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (DOES_BLIP_EXIST( l_U2331 ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2331 );
                        }
                        GET_GAME_TIMER( ref l_U808[0] );
                        l_U2330 = 1;;
                    }
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U811[0] );
                l_U814[0] = l_U811[0] - l_U808[0];
                if (l_U814[0] > 7500)
                {
                    sub_24214();
                    sub_26421();
                }
                sub_29230();
                sub_31263();
                sub_46466();
                sub_20861();
                if (l_U932)
                {
                    sub_46910();
                }
            }
            break;
            case 5:
            sub_48777();
            sub_48822();
            break;
            case 6:
            if (NOT l_U912)
            {
                sub_49560();
                sub_17973( "BH02_BA" );
            }
            else
            {
                l_U795 = 7;
                sub_18397();
                sub_46910();
            }
            break;
            case 7:
            if (sub_50222())
            {
                sub_52628();
                sub_52855();
                REQUEST_MODEL( -1004762946 );
                while (NOT (HAS_MODEL_LOADED( -1004762946 )))
                {
                    WAIT( 0 );
                }
                SET_CHAR_COORDINATES( sub_7291(), l_U1156._fU0, l_U1156._fU4, l_U1156._fU8 );
                if (NOT (IS_PED_IN_COVER( sub_7291() )))
                {
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( sub_7291(), l_U1170, 8000 );
                }
                for ( l_U799 = 0; l_U799 < 2; l_U799++ )
                {
                    if (DOES_CHAR_EXIST( l_U908[l_U799] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
                        {
                            SET_CHAR_COORDINATES( l_U908[l_U799], l_U1159[l_U799]._fU0, l_U1159[l_U799]._fU4, l_U1159[l_U799]._fU8 );
                            if (NOT (IS_PED_IN_COVER( l_U908[l_U799] )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 116, ref l_U960[l_U799] );
                                if (l_U960[l_U799] == 7)
                                {
                                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U908[l_U799], l_U1173[l_U799], 8000 );
                                }
                            }
                            GET_PLAYER_GROUP( sub_20771(), ref l_U970 );
                            if (NOT (IS_GROUP_MEMBER( l_U908[l_U799], l_U970 )))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U908[l_U799] );
                            }
                            SET_CHAR_MAX_HEALTH( l_U908[l_U799], 1000 );
                            SET_CHAR_HEALTH( l_U908[l_U799], 1000 );
                            GET_GAME_TIMER( ref l_U808[l_U799] );
                        }
                    }
                }
                if (NOT l_U913[13])
                {
                    if (NOT (HAS_CHAR_GOT_WEAPON( sub_7291(), 31 )))
                    {
                        GIVE_WEAPON_TO_CHAR( sub_7291(), 31, 250, 0 );
                    }
                    if (NOT (HAS_CHAR_GOT_WEAPON( sub_7291(), 4 )))
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_7291(), 4, 15, 0 );
                    }
                }
                GET_CURRENT_CHAR_WEAPON( sub_7291(), ref l_U2245 );
                if ((l_U2245 == 0) || (l_U2245 == 56))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_7291(), 31, 1 );
                }
                else
                {
                    SET_CURRENT_CHAR_WEAPON( sub_7291(), l_U2245, 1 );
                }
                SET_POLICE_RADAR_BLIPS( 0 );
                if (NOT l_U1622)
                {
                    sub_54460();
                    l_U1622 = 1;
                }
                else
                {
                    sub_55021();
                }
                if (DOES_VEHICLE_EXIST( l_U903 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U903 ))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U903 );
                    }
                }
                CLEAR_AREA( 751.38920000, 46.65740000, 10.41890000, 20.00000000, 0 );
                SET_PED_IS_BLIND_RAGING( sub_7291(), 1 );
                if (IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING_IN())
                    {
                        WAIT( 2000 );
                        DO_SCREEN_FADE_IN_UNHACKED( 2000 );
                        SET_GAME_CAM_HEADING( 90.00000000 );
                        SET_GAME_CAM_PITCH( 10.00000000 );
                        SET_PLAYER_CONTROL( sub_20771(), 1 );
                        if (g_U43104[19] <= 1)
                        {
                            if (NOT g_U43133)
                            {
                                g_U43793 = 0;
                            }
                            else
                            {
                                g_U43793 = 100;
                            }
                        }
                        g_U43104[19] = 2;
                        GET_GAME_TIMER( ref l_U2326 );
                        l_U2329 = 1;
                        l_U795 = 8;
                        GET_GAME_TIMER( ref l_U1872 );
                    }
                }
            }
            break;
            case 8:
            sub_58479();
            sub_58811();
            sub_60156();
            sub_60544();
            sub_64441();
            sub_66393();
            sub_67279();
            sub_68042();
            if (l_U2187)
            {
                sub_72471();
            }
            sub_73463();
            sub_74558();
            sub_55021();
            break;
            case 9:
            sub_58479();
            sub_73463();
            sub_74558();
            sub_75752();
            sub_75769();
            sub_77772();
            sub_79112();
            sub_79677();
            sub_68042();
            sub_80276();
            sub_83015();
            sub_72471();
            sub_55021();
            break;
            case 15:
            sub_58479();
            sub_84259();
            sub_68042();
            sub_80276();
            sub_83015();
            sub_90025();
            break;
            case 10:
            sub_80276();
            sub_90025();
            sub_83015();
            sub_92266();
            sub_93681();
            sub_95786();
            sub_96344();
            sub_68042();
            sub_97580();
            sub_98701();
            sub_100135();
            sub_55021();
            break;
            case 11:
            sub_97580();
            sub_98701();
            sub_100135();
            sub_100543();
            sub_101732();
            sub_102639();
            sub_102998();
            sub_68042();
            sub_55021();
            break;
            case 14:
            sub_104314();
            sub_112678( l_U2126, l_U2127 );
            break;
            case 12:
            sub_114212();
            sub_114229();
            sub_116490();
            sub_116797();
            sub_68042();
            sub_117159();
            sub_55021();
            break;
            case 13:
            sub_117749();
            sub_119303();
            sub_119622();
            sub_120946();
            sub_20861();
            break;
            case 16:
            sub_121041();
            break;
            case 17: break;
            case 18: break;
            case 19: break;
            case 20: break;
            case 21: break;
            case 22: break;
            case 23: break;
            case 24:
            sub_68227();
            break;
            case 25:
            PRINTNL();
            PRINTSTRING( "Inside FailedCheck" );
            sub_128645();
            break;
            case 26:
            sub_128925();
            break;
            case 27:
            SET_PLAYER_CONTROL( sub_20771(), 1 );
            GET_GAME_TIMER( ref l_U811[0] );
            l_U814[0] = l_U811[0] - l_U808[0];
            if (l_U814[0] > 3000)
            {
                sub_136130();
            }
            break;
        }
        sub_142812( 0 );
    }
    sub_3297();
    return;
}

void sub_980()
{
    int iVar2;

    iVar2 = 3;
    sub_994( iVar2 );
    sub_2280( iVar2 );
    return;
}

void sub_994(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    sub_1003();
    if (g_U43133)
    {
        return;
    }
    iVar3 = g_U14925[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U819)
    {
        sub_1179();
        sub_1387();
        g_U11063 = 1;
    }
    else if (NOT g_U12382[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1512();
            sub_1564();
            g_U11063 = 1;
        }
    }
    sub_1657();
    sub_1796();
    uVar5 = sub_1909( uParam0 );
    sub_2187( uVar5, 0 );
    return;
}

void sub_1003()
{
    g_U43588 = 0;
    g_U43628 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionStatTracker" );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    return;
}

void sub_1179()
{
    if (g_U10972)
    {
        return;
    }
    sub_1206( g_U10971 );
    if (NOT (IS_BIT_SET( g_U10938._fU0, 7 )))
    {
        sub_1327();
    }
    return;
}

void sub_1206(int iParam0)
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
    if (g_U10972)
    {
        return;
    }
    iVar3 = g_U22960[iParam0]._fU100;
    iVar3--;
    g_U22960[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1327()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1387()
{
    sub_1396();
    return;
}

void sub_1396()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1512()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1564()
{
    sub_1573();
    return;
}

void sub_1573()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1657()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12382[J]._fU148[I]._fU36)
            {
                g_U12382[J]._fU28 = 1;
            }
            g_U12382[J]._fU148[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1796()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1818();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_1818()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1909(unknown uParam0)
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
        case 8: return 9;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_2140( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_2140(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2187(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_2280(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2289();
    if (g_U0)
    {
        return;
    }
    if (g_U43133)
    {
        return;
    }
    if (g_U95._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12379)
    {
        return;
    }
    iVar3 = g_U14925[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12382[iParam0]._fU12)
    {
        return;
    }
    if (g_U10938._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10938._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_3064())
    {
        return;
    }
    if (NOT g_U819)
    {
        sub_3130();
        SET_BIT( ref g_U10938._fU0, 2 );
    }
    return;
}

void sub_2289()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_2327( 5, g_U575[I] )) == 1) AND (g_U575[I]._fU20))
        {
            if ((sub_2327( 1, g_U575[I] )) != 0)
            {
                sub_2613( I );
            }
        }
    }
    if (NOT sub_2779())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_2327(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2613(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2698( g_U575 - 1 );
    return;
}

void sub_2698(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2779()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2327( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3064()
{
    if ((g_U10938._fU4 == 0) AND (g_U10938._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_3130()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_3297()
{
    g_U10509 = 0;
    g_U43627 = 0;
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U908[l_U799] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[l_U799] )))
            {
                if (IS_PED_ATTACHED_TO_ANY_CAR( l_U908[l_U799] ))
                {
                    DETACH_PED( l_U908[l_U799], 1 );
                }
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U908[l_U799] );
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U2016 ))
    {
        if (NOT (IS_CAR_DEAD( l_U2016 )))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2016 );
        }
        if (IS_CAR_DEAD( l_U2016 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2016 );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U2126 ))
    {
        if (NOT (IS_CAR_DEAD( l_U2126 )))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2126 );
        }
        if (IS_CAR_DEAD( l_U2126 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2126 );
        }
    }
    for ( l_U799 = 0; l_U799 < 5; l_U799++ )
    {
        if (DOES_OBJECT_EXIST( l_U964[l_U799] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U964[l_U799] );
        }
    }
    if (DOES_BLIP_EXIST( l_U980 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U980 );
    }
    if (sub_3725( l_U1706 ))
    {
        sub_3909( ref l_U1706, 0 );
    }
    if (sub_3725( l_U1724 ))
    {
        sub_3909( ref l_U1724, 0 );
    }
    if (HAS_MODEL_LOADED( l_U972 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U972 );
    }
    sub_4089( 3 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U866[0]._fU0, l_U866[0]._fU4, l_U866[0]._fU8, l_U866[1]._fU0, l_U866[1]._fU4, l_U866[1]._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U873[0]._fU0, l_U873[0]._fU4, l_U873[0]._fU8, l_U873[1]._fU0, l_U873[1]._fU4, l_U873[1]._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U880[0]._fU0, l_U880[0]._fU4, l_U880[0]._fU8, l_U880[1]._fU0, l_U880[1]._fU4, l_U880[1]._fU8 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 720.68930000, 118.65200000, -50.30110000, 714.28480000, 98.84380000, 50.00000000, 0 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_CREATE_RANDOM_COPS( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    g_U10983 = 1;
    STOP_SOUND( l_U2246 );
    RELEASE_SOUND_ID( l_U2246 );
    g_U10568 = 1;
    if (l_U1651)
    {
        ALLOW_EMERGENCY_SERVICES( 1 );
    }
    SWITCH_GARBAGE_TRUCKS( 1 );
    if (NOT g_U43133)
    {
        if (g_U43793 == 0)
        {
            g_U43793 = 1;
        }
        else if (g_U43793 == 1)
        {
            g_U43793 = 2;
        }
    }
    else if (g_U43793 < 101)
    {
        g_U43793 = 101;
    }
    else if (g_U43793 == 101)
    {
        g_U43793 = 102;
    };;;
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_3725(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_3837( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_3837( "\n speech is not playing" );
    }
    return 0;
}

void sub_3837(unknown uParam0)
{
    return;
}

void sub_3909(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_4089(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4112( uParam0 ) );
    return;
}

int sub_4112(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_2140( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5299()
{
    LOAD_ADDITIONAL_TEXT( "FRI1", 0 );
    sub_5333( "E2F1AUD" );
    LOAD_ADDITIONAL_TEXT( "E2F1AUD", 6 );
    sub_5456();
    sub_8701( 0, sub_7291(), "LUIS", 0 );
    sub_8846();
    SWITCH_GARBAGE_TRUCKS( 0 );
    g_U10568 = 0;
    l_U799 = 0;
    l_U820 = 0;
    l_U827 = 0;
    l_U2246 = GET_SOUND_ID();
    l_U825 = 0;
    l_U826 = 0;
    l_U973 = -1806886352;
    l_U972 = -2135182574;
    l_U971 = 1448755353;
    l_U1463 = 1092677220;
    l_U1464 = 391410758;
    l_U1567 = 353883353;
    l_U974 = 7;
    l_U976 = 10;
    l_U1992 = 2087858952;
    l_U830 = {721.65300000, 98.44350000, 4.87800000};
    l_U833[0] = {703.21840000, 111.94050000, 5.01580000};
    l_U833[1] = {702.72640000, 113.58450000, 5.01450000};
    l_U833[2] = {701.38040000, 112.55520000, 5.01440000};
    l_U859[0] = {-380.00700000, 1556.34700000, 19.11450000};
    l_U859[1] = {-381.37150000, 1557.23500000, 19.11600000};
    l_U843[0] = {706.79500000, 84.12410000, 4.97310000};
    l_U843[1] = {700.71790000, 91.68250000, 4.99590000};
    l_U843[2] = {713.77500000, 85.05560000, 4.97640000};
    l_U843[3] = {700.07070000, 80.65780000, 4.97150000};
    l_U843[4] = {701.64150000, 91.37390000, 4.99590000};
    l_U894[0] = 109.58780000;
    l_U894[1] = 345.29640000;
    l_U894[2] = 345.29640000;
    l_U894[3] = 109.58780000;
    l_U894[4] = 345.29640000;
    l_U866[0] = {788.76530000, -12.79460000, 54.96850000};
    l_U866[1] = {806.37700000, -28.25130000, -45.14990000};
    l_U873[0] = {759.13540000, 160.87770000, 55.02210000};
    l_U873[1] = {742.48050000, 172.16200000, -44.98090000};
    l_U880[0] = {774.25960000, -31.74570000, 54.90510000};
    l_U880[1] = {697.52760000, 168.15220000, -44.98230000};
    l_U1049[0] = {715.49190000, 87.89640000, 4.98760000};
    l_U1049[1] = {704.96920000, 85.55810000, 4.97560000};
    l_U1049[2] = {697.13570000, 76.92900000, 4.97110000};
    l_U1049[3] = {698.94240000, 68.13150000, 4.96970000};
    l_U1049[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U1049[5] = {0.00000000, 0.00000000, 0.00000000};
    l_U1049[6] = {718.98820000, 85.41360000, 4.97890000};
    l_U1049[7] = {714.10160000, 92.54810000, 5.00710000};
    l_U1049[8] = {717.18900000, 94.81950000, 5.01910000};
    l_U1087[0] = {727.20270000, 97.68920000, 4.86270000};
    l_U1087[1] = {725.31410000, 89.13830000, 4.81850000};
    l_U1087[2] = {714.36470000, 94.68880000, 5.01670000};
    l_U1087[3] = {710.16750000, 93.95640000, 5.01080000};
    l_U1180[0] = {711.58410000, 109.40090000, 16.13730000};
    l_U1180[1] = {702.95570000, 106.85310000, 15.01600000};
    l_U1187[0] = {707.76700000, 108.37610000, 5.01790000};
    l_U1187[1] = {699.02940000, 105.62990000, 6.13670000};
    l_U1173[0] = {708.52450000, 101.44490000, 5.01820000};
    l_U1173[1] = {705.40250000, 104.03040000, 5.01620000};
    l_U1170 = {710.81380000, 103.26020000, 5.01970000};
    l_U1631 = {606.90620000, 47.12670000, 0.31660000};
    l_U1634 = 13.55130000;
    l_U1639 = 0;
    l_U1394[0] = {699.94400000, 102.72100000, 6.17000000};
    l_U1394[1] = {704.63400000, 99.76100000, 6.17000000};
    l_U1394[2] = {712.55000000, 106.41100000, 6.17000000};
    l_U1394[3] = {710.65000000, 112.33100000, 6.17000000};
    l_U1407[0] = {0.00000000, 0.00000000, 103.00000000};
    l_U1407[1] = {0.00000000, 0.00000000, 15.00000000};
    l_U1407[2] = {0.00000000, 0.00000000, 103.00000000};
    l_U1407[3] = {0.00000000, 0.00000000, 103.00000000};
    l_U1420[0] = {699.03800000, 105.73000000, 7.20000000};
    l_U1420[1] = {700.87800000, 99.76000000, 7.20000000};
    l_U1420[2] = {707.26800000, 100.52000000, 7.20000000};
    l_U1420[3] = {712.74800000, 102.03000000, 7.20000000};
    l_U1420[4] = {711.52800000, 109.38000000, 7.20000000};
    l_U1436[0] = {0.00000000, 0.00000000, 103.00000000};
    l_U1436[1] = {0.00000000, 0.00000000, 103.00000000};
    l_U1436[2] = {0.00000000, 0.00000000, 14.00000000};
    l_U1436[3] = {0.00000000, 0.00000000, 14.00000000};
    l_U1436[4] = {0.00000000, 0.00000000, 103.00000000};
    l_U1488[0] = {721.84080000, 76.85390000, 4.95250000};
    l_U1488[1] = {722.25840000, 74.82860000, 4.95300000};
    l_U1488[2] = {713.90190000, 64.30280000, 4.96970000};
    l_U1488[3] = {714.57960000, 62.19560000, 4.96970000};
    l_U1488[4] = {711.72420000, 71.90770000, 4.96970000};
    l_U1599 = {746.05520000, 162.18930000, 4.86850000};
    l_U1602 = 101.25640000;
    l_U1166 = 189.40860000;
    l_U1167[0] = 181.89130000;
    l_U1167[1] = 184.56580000;
    l_U1156 = {710.81380000, 103.26020000, 5.01970000};
    l_U1159[0] = {708.52450000, 101.44490000, 5.01820000};
    l_U1159[1] = {705.40250000, 104.03040000, 5.01620000};
    l_U1465[0] = {727.92790000, 115.11380000, 11.38290000};
    l_U1465[1] = {729.82140000, 104.14640000, 11.50540000};
    l_U1465[2] = {720.05280000, 84.05350000, 16.66470000};
    l_U1465[3] = {709.30200000, 76.52220000, 23.31200000};
    l_U1524[0] = {690.55650000, 145.98220000, 2.37540000};
    l_U1524[1] = {687.61220000, 139.36970000, 2.37540000};
    l_U890[0] = 231.91550000;
    l_U890[1] = 228.64620000;
    l_U890[2] = 285.70800000;
    l_U900[0] = 359.98870000;
    l_U900[1] = 348.78570000;
    l_U1077[0] = 352.02040000;
    l_U1077[1] = 302.22370000;
    l_U1077[2] = 342.67740000;
    l_U1077[3] = 354.96980000;
    l_U1077[4] = 0.00000000;
    l_U1077[5] = 0.00000000;
    l_U1077[6] = 0.00000000;
    l_U1077[7] = 21.55670000;
    l_U1077[8] = 50.25180000;
    l_U1100[0] = 325.31300000;
    l_U1100[1] = 79.87440000;
    l_U1100[2] = 128.58110000;
    l_U1100[3] = 73.50360000;
    l_U1194 = 5.00000000;
    l_U1478[0] = 97.03930000;
    l_U1478[1] = 90.77540000;
    l_U1478[2] = 26.22540000;
    l_U1478[3] = 4.41230000;
    l_U1504[0] = 357.99240000;
    l_U1504[1] = 167.19340000;
    l_U1504[2] = 72.36040000;
    l_U1504[3] = 110.02540000;
    l_U1504[4] = 56.15270000;
    l_U1195[0] = {717.56580000, 91.79010000, 5.00600000};
    l_U1195[1] = {711.80680000, 85.96870000, 4.97810000};
    l_U1195[2] = {706.78890000, 90.18550000, 4.99200000};
    l_U1195[3] = {702.28570000, 84.13270000, 4.97250000};
    l_U1195[4] = {696.28140000, 81.03220000, 4.97140000};
    l_U1195[5] = {713.59160000, 103.90110000, 5.01110000};
    l_U1195[6] = {711.96730000, 109.43560000, 5.01010000};
    l_U1195[7] = {700.36390000, 99.71050000, 5.00290000};
    l_U1195[8] = {698.67150000, 105.56880000, 5.00300000};
    l_U1195[9] = {725.56870000, 90.28880000, 4.82460000};
    l_U1195[10] = {726.13960000, 98.41640000, 4.86490000};
    l_U1195[11] = {710.20330000, 100.49270000, 5.00920000};
    l_U1195[12] = {705.34690000, 98.88700000, 5.00710000};
    l_U1241[0] = {718.15310000, 89.54830000, 14.99650000};
    l_U1241[1] = {710.91330000, 88.16020000, 14.98580000};
    l_U1241[2] = {708.00900000, 92.31970000, 15.00220000};
    l_U1241[3] = {701.02150000, 82.38950000, 14.97160000};
    l_U1241[4] = {694.15240000, 80.16700000, 14.97130000};
    l_U1241[5] = {715.41140000, 104.28600000, 15.01300000};
    l_U1241[6] = {713.73960000, 109.99810000, 15.00700000};
    l_U1241[7] = {698.49290000, 99.24150000, 15.00180000};
    l_U1241[8] = {696.79800000, 105.02430000, 15.00150000};
    l_U1241[9] = {725.12380000, 87.97270000, 14.81250000};
    l_U1241[10] = {727.98200000, 96.74260000, 14.86090000};
    l_U1241[11] = {710.71060000, 98.66040000, 15.01480000};
    l_U1241[12] = {705.42350000, 96.83500000, 15.01160000};
    l_U1349[0] = 31.27710000;
    l_U1349[1] = 14.86780000;
    l_U1349[2] = 5.43400000;
    l_U1349[3] = 343.80210000;
    l_U1349[4] = 339.09000000;
    l_U1349[5] = 101.20200000;
    l_U1349[6] = 93.77330000;
    l_U1349[7] = 288.91620000;
    l_U1349[8] = 279.03050000;
    l_U1349[9] = 34.94000000;
    l_U1349[10] = 59.53650000;
    l_U1349[11] = 13.26480000;
    l_U1349[12] = 19.31930000;
    l_U1303[0] = {718.88460000, 89.41530000, 4.99640000};
    l_U1303[1] = {711.57300000, 85.83760000, 4.97770000};
    l_U1303[2] = {707.32010000, 89.72020000, 4.99030000};
    l_U1303[3] = {701.15250000, 81.96690000, 5.97660000};
    l_U1303[4] = {695.32720000, 79.23900000, 4.97130000};
    l_U1303[5] = {713.45030000, 104.38450000, 5.01100000};
    l_U1303[6] = {711.68210000, 110.40770000, 5.00980000};
    l_U1303[7] = {700.07610000, 100.78050000, 5.00280000};
    l_U1303[8] = {699.05690000, 104.25300000, 5.00260000};
    l_U1303[9] = {724.95690000, 89.14860000, 4.81880000};
    l_U1303[10] = {727.03520000, 97.80940000, 4.86310000};
    l_U1303[11] = {710.91250000, 98.71810000, 5.01490000};
    l_U1303[12] = {705.42350000, 96.83500000, 5.01160000};
    l_U1303[13] = {714.10160000, 92.54810000, 5.00710000};
    l_U1303[14] = {717.18900000, 94.81950000, 5.01910000};
    l_U1287[0] = 2.00000000;
    l_U1287[1] = 2.00000000;
    l_U1287[2] = 2.00000000;
    l_U1287[3] = 2.00000000;
    l_U1287[4] = 2.00000000;
    l_U1287[5] = 2.00000000;
    l_U1287[6] = 2.00000000;
    l_U1287[7] = 2.00000000;
    l_U1287[8] = 2.00000000;
    l_U1287[9] = 5.00000000;
    l_U1287[10] = 5.00000000;
    l_U1287[11] = 3.00000000;
    l_U1287[12] = 3.00000000;
    l_U1287[13] = 5.00000000;
    l_U1287[14] = 5.00000000;
    l_U1794[0] = {701.87590000, 90.79430000, 4.99150000};
    l_U1794[1] = {700.59670000, 79.24410000, 4.97140000};
    l_U1794[2] = {706.93350000, 83.24180000, 4.97170000};
    l_U1794[3] = {708.18010000, 89.85880000, 4.99150000};
    l_U1794[4] = {710.62960000, 91.01020000, 4.99810000};
    l_U1794[5] = {713.82700000, 91.38980000, 5.00180000};
    l_U1794[6] = {720.90480000, 98.76880000, 4.88290000};
    l_U1794[7] = {705.24210000, 74.63780000, 4.97110000};
    l_U1794[8] = {700.47380000, 73.78320000, 4.97100000};
    l_U1794[9] = {696.68850000, 72.52620000, 4.97080000};
    l_U1794[10] = {716.53900000, 83.34640000, 16.66470000};
    l_U1828[0] = {719.68490000, 100.46910000, 4.86470000};
    l_U1828[1] = {724.07530000, 92.79320000, 4.83870000};
    l_U1828[2] = {715.43050000, 92.59320000, 5.00820000};
    l_U1828[3] = {708.83000000, 91.53960000, 4.99930000};
    l_U1841[0] = 338.52060000;
    l_U1841[1] = 348.81650000;
    l_U1841[2] = 10.00350000;
    l_U1841[3] = 23.41150000;
    l_U1841[4] = 18.67860000;
    l_U1841[5] = 23.45820000;
    l_U1841[6] = 76.92690000;
    l_U1841[7] = 350.63660000;
    l_U1841[8] = 353.02160000;
    l_U1841[9] = 336.94230000;
    l_U1841[10] = 359.08590000;
    l_U1853[0] = 147.17650000;
    l_U1853[1] = 39.69610000;
    l_U1853[2] = 89.14510000;
    l_U1853[3] = 116.95280000;
    l_U1905[0] = {719.19350000, 54.78620000, 4.96970000};
    l_U1905[1] = {693.69500000, 51.43760000, 4.96970000};
    l_U1905[2] = {692.01070000, 53.59940000, 4.96970000};
    l_U1905[3] = {718.28610000, 57.56180000, 4.96970000};
    l_U1905[4] = {721.06790000, 56.22960000, 4.96970000};
    l_U1905[5] = {724.60040000, 57.33770000, 4.96360000};
    l_U1905[6] = {690.83800000, 57.28730000, 4.96970000};
    l_U1905[7] = {689.83290000, 53.77010000, 4.96970000};
    l_U1930[0] = {713.29730000, 64.87300000, 4.96970000};
    l_U1930[1] = {692.68920000, 67.63360000, 4.96970000};
    l_U1930[2] = {695.21740000, 60.02860000, 5.48750000};
    l_U1930[3] = {714.13480000, 60.94020000, 4.96970000};
    l_U1930[4] = {704.33650000, 61.80100000, 6.37560000};
    l_U1930[5] = {709.70870000, 59.49230000, 4.96970000};
    l_U1930[6] = {700.93600000, 57.19280000, 4.96970000};
    l_U1930[7] = {707.83830000, 48.37600000, 4.96970000};
    l_U1955[0] = 160.65420000;
    l_U1955[1] = 327.25370000;
    l_U1955[2] = 297.23060000;
    l_U1955[3] = 72.39050000;
    l_U1955[4] = 60.56730000;
    l_U1955[5] = 75.02020000;
    l_U1955[6] = 223.34520000;
    l_U1955[7] = 265.06850000;
    l_U1964[0] = 3.15290000;
    l_U1964[1] = 9.54460000;
    l_U1964[2] = 11.11380000;
    l_U1964[3] = 10.33930000;
    l_U1964[4] = 350.71380000;
    l_U1964[5] = 25.02800000;
    l_U1964[6] = 22.24620000;
    l_U1964[7] = 19.50460000;
    l_U1974[0] = 1;
    l_U1974[1] = 1;
    l_U1974[2] = 1;
    l_U1974[3] = 1;
    l_U2157[0] = 0;
    l_U2157[1] = 0;
    l_U2157[2] = 1;
    l_U2017[0] = {714.86090000, 137.28310000, 5.76600000};
    l_U2017[1] = {745.03800000, 97.50380000, 5.66830000};
    l_U2017[2] = {735.66100000, -34.91080000, 5.49620000};
    l_U2017[3] = {773.19390000, -17.37290000, 5.38850000};
    l_U2054 = {683.01310000, 55.29980000, 41.23400000};
    l_U1581 = {709.50740000, 92.29380000, 5.00300000};
    l_U1584 = {707.75810000, 94.58690000, 5.00940000};
    l_U1587 = {711.05690000, 83.13620000, 24.97210000};
    l_U1590 = 7.60330000;
    l_U1591 = 22.00000000;
    l_U2161[0] = {733.78230000, 57.35020000, 4.77420000};
    l_U2161[1] = {761.81490000, 60.62700000, 4.96140000};
    l_U2161[2] = {791.97420000, 58.82350000, 4.90830000};
    l_U2161[3] = {795.66720000, 44.53050000, 4.91260000};
    l_U2161[4] = {786.22800000, 42.15920000, 4.90830000};
    l_U2161[5] = {793.86510000, 50.84490000, 4.91830000};
    l_U2180[0] = 5.88160000;
    l_U2180[1] = 160.60660000;
    l_U2180[2] = 17.63300000;
    l_U2180[3] = 194.84580000;
    l_U2180[4] = 13.07260000;
    l_U2180[5] = 193.38460000;
    l_U986 = 1;
    l_U987 = 2;
    # -sub_C1FFC0-0xc214c8( l_U986, ref l_U984 );
    LOAD_COMBAT_DECISION_MAKER( l_U987, ref l_U985 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U985, 2 );
    l_U990 = 1;
    l_U991 = 2;
    # -sub_C1FFC0-0xc214c8( l_U990, ref l_U988 );
    LOAD_COMBAT_DECISION_MAKER( l_U991, ref l_U989 );
    l_U994 = 1;
    l_U995 = 9;
    # -sub_C1FFC0-0xc214c8( l_U994, ref l_U992 );
    LOAD_COMBAT_DECISION_MAKER( l_U995, ref l_U993 );
    l_U998 = 1;
    l_U999 = 8;
    # -sub_C1FFC0-0xc214c8( l_U998, ref l_U996 );
    LOAD_COMBAT_DECISION_MAKER( l_U999, ref l_U997 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U997, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE( l_U997, 200 );
    l_U1002 = 0;
    l_U1003 = 0;
    # -sub_C1FFC0-0xc214c8( l_U1002, ref l_U1000 );
    LOAD_COMBAT_DECISION_MAKER( l_U1003, ref l_U1001 );
    l_U1536[0] = {0.00000000, 0.00000000, 0.00000000};
    l_U1536[1] = {0.00000000, 0.00000000, 0.00000000};
    l_U1543[0] = 0.00000000;
    l_U1543[1] = 0.00000000;
    l_U1546[0] = {0.00000000, 0.00000000, 0.71000000};
    l_U1546[1] = {0.00000000, 1.21000000, 0.71000000};
    l_U1553[0] = 0.00000000;
    l_U1553[1] = 0.00000000;
    l_U1564 = {581.27210000, -20.48640000, 44.17900000};
    l_U1568 = 308.14100000;
    return;
}

void sub_5333(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_5350();
    return;
}

void sub_5350()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U2._fU16[I]._fU0 = nil;
        StrCopy( ref l_U2._fU16[I]._fU4, "", 32 );
        l_U2._fU344[I] = 0;
    }
    return;
}

void sub_5456()
{
    sub_5465();
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    g_U43628 = 1;
    g_U43593 = 0;
    g_U43594 = 0;
    g_U43595 = 0;
    g_U43596 = 0;
    REQUEST_SCRIPT( "MissionResultsTimer" );
    if (g_U43137 == 0)
    {
        REQUEST_SCRIPT( "MissionResultHelp" );
        sub_7244();
        sub_7282();
    }
    else
    {
        g_U43626 = 1;
        sub_7244();
        sub_7282();
        if (g_U43137 == 22)
        {
            sub_7421( 0, 0, 0 );
        }
        if (g_U43137 == 17)
        {
            sub_7421( 1, 0, 0 );
        }
        if (g_U43137 == 15)
        {
            sub_7421( 0, 1, 0 );
        }
        if (g_U43137 == 18)
        {
            sub_7421( 0, 0, 1 );
        }
        if (g_U43137 == 16)
        {
            sub_7421( 0, 0, 1 );
        }
    }
    if (g_U43133 == 1)
    {
        if ((g_U43463[g_U43137] == 0) || (g_U43463[g_U43137] == -1))
        {
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            PRINTSTRING( "g_FirstPlaythroughOfMission = TRUE" );
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            g_U43624 = 1;
        }
        else
        {
            PRINTSTRING( "**************************************" );
            PRINTNL();
            PRINTSTRING( "g_FirstPlaythroughOfMission = FALSE" );
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            g_U43624 = 0;
        }
    }
    else
    {
        PRINTSTRING( "**************************************" );
        PRINTNL();
        PRINTSTRING( "g_FirstPlaythroughOfMission = TRUE" );
        PRINTNL();
        PRINTSTRING( "**************************************" );
        PRINTNL();
        g_U43624 = 1;
    }
    g_U43611 = 0;
    g_U43612 = 0;
    g_U43615 = 0;
    g_U43617 = 0;
    g_U43614 = 0;
    g_U43622 = 0;
    g_U43619 = 0;
    g_U43620 = 0;
    g_U43621 = 0;
    g_U43616 = 0;
    g_U43613 = 0;
    g_U43503 = 0;
    g_U43506 = 0;
    g_U43509 = 0;
    g_U43512 = 0;
    g_U43515 = 0;
    g_U43516 = 0;
    g_U43519 = 0;
    g_U43522 = 0;
    g_U43558 = 0;
    g_U43559 = 0;
    l_U766 = 0;
    g_U43509 = 0;
    g_U43508 = 0;
    g_U43507 = 0;
    g_U43498 = 0;
    PRINTNL();
    PRINTNL();
    PRINTSTRING( "*******************************************************" );
    PRINTSTRING( "g_AreMissionStatsNeeded = TRUE & Requesting MissionStatTracker.sc" );
    PRINTNL();
    PRINTSTRING( "*******************************************************" );
    PRINTNL();
    g_U43588 = 1;
    REQUEST_SCRIPT( "MissionStatTracker" );
    return;
}

void sub_5465()
{
    g_U43138[0]._fU0 = 4;
    g_U43138[0]._fU4 = 30;
    g_U43138[0]._fU8 = 0;
    g_U43138[0]._fU12 = 10;
    g_U43138[1]._fU0 = 5;
    g_U43138[1]._fU4 = 20;
    g_U43138[1]._fU8 = 10;
    g_U43138[1]._fU20 = 70;
    g_U43138[1]._fU16 = 31;
    g_U43138[2]._fU0 = 4;
    g_U43138[2]._fU4 = 0;
    g_U43138[2]._fU8 = 50;
    g_U43138[2]._fU20 = 70;
    g_U43138[2]._fU16 = 11;
    g_U43138[3]._fU0 = 2;
    g_U43138[3]._fU4 = 30;
    g_U43138[3]._fU12 = 0;
    g_U43138[5]._fU0 = 3;
    g_U43138[5]._fU4 = 10;
    g_U43138[5]._fU8 = 40;
    g_U43138[4]._fU0 = 2;
    g_U43138[4]._fU4 = 10;
    g_U43138[4]._fU8 = 0;
    g_U43138[4]._fU44 = 8000;
    g_U43138[6]._fU0 = 5;
    g_U43138[6]._fU4 = 0;
    g_U43138[6]._fU8 = 50;
    g_U43138[7]._fU0 = 5;
    g_U43138[7]._fU4 = 45;
    g_U43138[7]._fU8 = 50;
    g_U43138[7]._fU44 = 35000;
    g_U43138[8]._fU0 = 4;
    g_U43138[8]._fU4 = 35;
    g_U43138[8]._fU8 = 20;
    g_U43138[8]._fU12 = 80;
    g_U43138[9]._fU0 = 8;
    g_U43138[9]._fU4 = 50;
    g_U43138[9]._fU12 = 0;
    g_U43138[10]._fU0 = 3;
    g_U43138[10]._fU4 = 55;
    g_U43138[10]._fU44 = 7000;
    g_U43138[11]._fU0 = 10;
    g_U43138[11]._fU4 = 0;
    g_U43138[11]._fU8 = 50;
    g_U43138[11]._fU20 = 70;
    g_U43138[11]._fU16 = 25;
    g_U43138[12]._fU0 = 5;
    g_U43138[12]._fU4 = 0;
    g_U43138[12]._fU8 = 50;
    g_U43138[12]._fU12 = 60;
    g_U43138[12]._fU20 = 70;
    g_U43138[12]._fU16 = 10;
    g_U43138[12]._fU24 = 70;
    g_U43138[13]._fU0 = 7;
    g_U43138[13]._fU4 = 35;
    g_U43138[13]._fU8 = 0;
    g_U43138[14]._fU0 = 5;
    g_U43138[14]._fU4 = 15;
    g_U43138[14]._fU12 = 20;
    g_U43138[14]._fU24 = 140;
    g_U43138[15]._fU0 = 6;
    g_U43138[15]._fU4 = 0;
    g_U43138[15]._fU8 = 0;
    g_U43138[15]._fU20 = 70;
    g_U43138[15]._fU28 = 4;
    g_U43138[16]._fU0 = 4;
    g_U43138[16]._fU4 = 10;
    g_U43138[16]._fU8 = 50;
    g_U43138[16]._fU20 = 70;
    g_U43138[16]._fU16 = 6;
    g_U43138[16]._fU28 = 4;
    g_U43138[17]._fU0 = 7;
    g_U43138[17]._fU4 = 25;
    g_U43138[17]._fU8 = 50;
    g_U43138[17]._fU28 = 6;
    g_U43138[17]._fU12 = 50;
    g_U43138[18]._fU0 = 4;
    g_U43138[18]._fU4 = 20;
    g_U43138[18]._fU8 = 50;
    g_U43138[18]._fU28 = 8;
    g_U43138[19]._fU0 = 7;
    g_U43138[19]._fU4 = 50;
    g_U43138[19]._fU8 = 40;
    g_U43138[19]._fU16 = 20;
    g_U43138[19]._fU20 = 55;
    g_U43138[20]._fU0 = 5;
    g_U43138[20]._fU4 = 0;
    g_U43138[20]._fU8 = 40;
    g_U43138[20]._fU20 = 55;
    g_U43138[20]._fU16 = 20;
    g_U43138[21]._fU0 = 3;
    g_U43138[21]._fU4 = 10;
    g_U43138[21]._fU8 = 10;
    g_U43138[22]._fU0 = 6;
    g_U43138[22]._fU4 = 30;
    g_U43138[22]._fU8 = 50;
    g_U43138[22]._fU20 = 70;
    g_U43138[22]._fU16 = 20;
    g_U43138[22]._fU28 = 5;
    g_U43138[23]._fU0 = 6;
    g_U43138[23]._fU4 = 40;
    g_U43138[23]._fU8 = 40;
    g_U43138[23]._fU20 = 70;
    g_U43138[23]._fU16 = 20;
    g_U43138[24]._fU0 = 4;
    g_U43138[24]._fU4 = 30;
    g_U43138[24]._fU8 = 40;
    g_U43138[24]._fU20 = 60;
    g_U43138[24]._fU16 = 10;
    g_U43138[25]._fU0 = 4;
    g_U43138[25]._fU4 = 30;
    g_U43138[25]._fU8 = 90;
    g_U43138[25]._fU20 = 70;
    g_U43138[25]._fU16 = 25;
    g_U43138[25]._fU28 = 4;
    return;
}

void sub_7244()
{
    GET_GAME_TIMER( ref g_U43501 );
    g_U43496 = 1;
    return;
}

void sub_7282()
{
    if (NOT (IS_CHAR_DEAD( sub_7291() )))
    {
        GET_CHAR_HEALTH( sub_7291(), ref g_U43520 );
        g_U43520 = 200;
    }
    return;
}

void sub_7291()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_7421(int iParam0, int iParam1, int iParam2)
{
    if (iParam1 == 1)
    {
        g_U43517 = GET_INT_STAT( 296 );
    }
    else if (iParam2 == 1)
    {
        g_U43517 = GET_INT_STAT( 297 );
    }
    else
    {
        g_U43517 = GET_INT_STAT( 294 );
    }
    if (iParam0 == 1)
    {
        RESET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
    }
    return;
}

void sub_8701(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8781( "\n PED NUMBER ", uParam0 );
    sub_8821( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8781(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8821(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8846()
{
    sub_8856( 1 );
    sub_8856( 2 );
    sub_8856( 0 );
    return;
}

void sub_8856(unknown uParam0)
{
    g_U30226[uParam0] = GET_ID_OF_THIS_THREAD();
    g_U30149[uParam0] = 1;
    return;
}

void sub_14684()
{
    CLEAR_AREA_OF_CHARS( l_U887._fU0, l_U887._fU4, l_U887._fU8, 20.00000000 );
    if ((g_U43133) || (NOT (g_U43104[19] >= 2)))
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U903 )))
        {
            while (NOT (sub_14786( 3, l_U887, 275.00000000, ref l_U903 )))
            {
                WAIT( 0 );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U903 ))
        {
            if (IS_VEH_DRIVEABLE( l_U903 ))
            {
                SET_CAR_IN_CUTSCENE( l_U903, 1 );
            }
        }
        sub_16287( -379.95920000, 1532.87200000, 18.58120000, 175.12180000, ref l_U2222 );
    }
    if (g_U43133)
    {
        g_U43104[19] = 1;
        if (NOT (DOES_VEHICLE_EXIST( l_U903 )))
        {
            while (NOT (sub_14786( 3, l_U887, 275.00000000, ref l_U903 )))
            {
                WAIT( 0 );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U903 ))
        {
            if (IS_VEH_DRIVEABLE( l_U903 ))
            {
                SET_CAR_IN_CUTSCENE( l_U903, 1 );
            }
        }
        LOAD_SCENE( -378.93520000, 1559.67100000, 19.13420000 );
        l_U795 = 3;
    }
    else if (IS_BIT_SET( g_U10938._fU0, 7 ))
    {
        g_U43104[19] = 0;
        l_U795 = 1;
    }
    else if (NOT g_U43133)
    {
        if (g_U43104[19] == 1)
        {
            if (NOT (DOES_VEHICLE_EXIST( l_U903 )))
            {
                while (NOT (sub_14786( 3, l_U887, 275.00000000, ref l_U903 )))
                {
                    WAIT( 0 );
                }
            }
            if (DOES_VEHICLE_EXIST( l_U903 ))
            {
                if (IS_VEH_DRIVEABLE( l_U903 ))
                {
                    SET_CAR_IN_CUTSCENE( l_U903, 1 );
                }
            }
            LOAD_SCENE( -378.93520000, 1559.67100000, 19.13420000 );
            l_U795 = 3;
        }
        if (g_U43104[19] == 2)
        {
            l_U913[13] = 1;
            sub_16993();
            if (NOT (HAS_CHAR_GOT_WEAPON( sub_7291(), 31 )))
            {
                GIVE_WEAPON_TO_CHAR( sub_7291(), 31, 250, 0 );
            }
            else
            {
                l_U1624 = sub_17662( sub_7291(), 31 );
                if (l_U1624 < 150)
                {
                    GIVE_WEAPON_TO_CHAR( sub_7291(), 31, 250, 0 );
                }
            }
            if (NOT (HAS_CHAR_GOT_WEAPON( sub_7291(), 4 )))
            {
                GIVE_DELAYED_WEAPON_TO_CHAR( sub_7291(), 4, 15, 0 );
            }
            else
            {
                l_U1624 = sub_17662( sub_7291(), 4 );
                if (l_U1624 < 8)
                {
                    l_U1625 = 15 - l_U1624;
                    GIVE_DELAYED_WEAPON_TO_CHAR( sub_7291(), 4, l_U1625, 0 );
                }
            }
            l_U795 = 5;
        }
    };;;
    return;
}

void sub_14786(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_14797( uParam0 );
    return sub_14966( uParam5, uVar8, uParam1, uParam4, uParam0 );
}

int sub_14797(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -1255452397;
        case 3: return -789894171;
        case 2: return 1638119866;
        case 1: return -304802106;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -1660661558;
}

int sub_14966(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_15098( (uParam0^), uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_15098(unknown uParam0, int iParam1)
{
    if (iParam1 == 8)
    {
        return;
    }
    switch (iParam1)
    {
        case 0:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_7291() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_7291() )))
            {
                PRINTSTRING( "KGM.............Retune TONY car to K109_THE_STUDIO\n" );
                RETUNE_RADIO_TO_STATION_NAME( "K109_THE_STUDIO" );
            }
        }
        break;
        case 3:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 0, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 3.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_7291() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_7291() )))
            {
                PRINTSTRING( "KGM.............Retune DOMINICANS car to SAN_JUAN_SOUNDS\n" );
                RETUNE_RADIO_TO_STATION_NAME( "SAN_JUAN_SOUNDS" );
            }
        }
        break;
        case 2:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 134, 136 );
        SET_EXTRA_CAR_COLOURS( uParam0, 134, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_7291() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_7291() )))
            {
                PRINTSTRING( "KGM.............Retune YUSUF car to BEAT\n" );
                RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
            }
        }
        break;
        case 1:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 45, 45 );
        SET_EXTRA_CAR_COLOURS( uParam0, 35, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_7291() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_7291() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_16287(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_7291(), -380.74440000, 1554.74500000, 19.16290000 );
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( uParam4 );
    if (NOT ((uParam4^) == l_U903))
    {
        if ((IS_VEH_DRIVEABLE( (uParam4^) )) AND (NOT (IS_CHAR_INJURED( sub_7291() ))))
        {
            GET_CAR_MODEL( (uParam4^), ref iVar7 );
            if (NOT (iVar7 == -789894171))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( (uParam4^) )))
                {
                    SET_CAR_AS_MISSION_CAR( (uParam4^) );
                }
                SET_LOAD_COLLISION_FOR_CAR_FLAG( (uParam4^), 0 );
                GET_CAR_MODEL( (uParam4^), ref iVar7 );
                if (IS_THIS_MODEL_A_CAR( iVar7 ))
                {
                    CLOSE_ALL_CAR_DOORS( (uParam4^) );
                }
                if ((IS_THIS_MODEL_A_CAR( iVar7 )) || (IS_THIS_MODEL_A_BIKE( iVar7 )))
                {
                    if (DOES_VEHICLE_EXIST( (uParam4^) ))
                    {
                        if (IS_VEH_DRIVEABLE( (uParam4^) ))
                        {
                            SET_CAR_ENGINE_ON( (uParam4^), 0, 1 );
                            SET_CAR_COORDINATES( (uParam4^), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
                            SET_CAR_HEADING( (uParam4^), uParam3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_16993()
{
    vector vVar2;
    vector vVar5;
    float fVar8;
    float fVar9;
    int iVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT g_U43133)
    {
        if (NOT (g_U43104[19] >= 2))
        {
            vVar2 = {-383.99020000, 1558.25500000, 22.00820000};
            vVar5 = {-380.74440000, 1554.74500000, 19.16290000};
            fVar8 = 258.50400000;
            fVar9 = 1.90730000;
        }
        else
        {
            vVar5 = {l_U1156};
            fVar9 = l_U1166;
        }
    }
    else
    {
        vVar2 = {-383.99020000, 1558.25500000, 22.00820000};
        vVar5 = {-380.74440000, 1554.74500000, 19.16290000};
        fVar8 = 258.50400000;
        fVar9 = 1.90730000;
    }
    iVar10 = 675415136;
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_7291(), vVar5.x, vVar5.y, vVar5.z, 1.00000000, 1.00000000, 1.00000000, 0 )))
    {
        CLEAR_AREA( vVar5.x, vVar5.y, vVar5.z, 5.00000000, 0 );
        if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_7291(), vVar5.x, vVar5.y, vVar5.z );
            SET_CHAR_COORDINATES( sub_7291(), vVar5.x, vVar5.y, vVar5.z );
            SET_CHAR_HEADING( sub_7291(), fVar9 );
            SET_CAM_BEHIND_PED( sub_7291() );
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_7291(), vVar5.x, vVar5.y, vVar5.z );
            SET_CHAR_HEADING( sub_7291(), fVar9 );
            SET_CAM_BEHIND_PED( sub_7291() );
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
    }
    CLEAR_AREA( 729.85270000, 55.17620000, 4.94480000, 20.00000000, 0 );
    PRINTNL();
    PRINTSTRING( "About to check the car" );
    if ((g_U43133) || (NOT (g_U43104[19] >= 2)))
    {
        ;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "ability_vehicle" );
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_gun_car" )) > 0)
    {
        g_U11191 = 1;
    }
    return;
}

void sub_17662(unknown uParam0, int iParam1)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (iParam1 == 0)
        {
            GET_CURRENT_CHAR_WEAPON( uParam0, ref iParam1 );
        }
        else if (NOT (HAS_CHAR_GOT_WEAPON( uParam0, iParam1 )))
        {
            return Result;
        }
        GET_AMMO_IN_CHAR_WEAPON( uParam0, iParam1, ref Result );
    }
    return Result;
}

void sub_17973(unknown uParam0)
{
    switch (l_U796)
    {
        case 0:
        if (l_U795 == 1)
        {
            if (IS_BIT_SET( g_U10938._fU0, 7 ))
            {
                g_U2792 = 1;
                g_U43627 = 1;
                g_U10509 = 1;
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1870989171 );
                SET_CHAR_COORDINATES( sub_7291(), -383.99020000, 1558.25500000, 22.00820000 );
                START_CUTSCENE_NOW( uParam0 );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( uParam0 );
                l_U796 = 1;
            }
            else
            {
                l_U796 = 2;
            }
        }
        else
        {
            g_U2792 = 1;
            START_CUTSCENE_NOW( uParam0 );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( uParam0 );
            l_U796 = 1;
        }
        break;
        case 1:
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        l_U796 = 2;
        break;
        case 2:
        l_U912 = 1;
        g_U43627 = 0;
        g_U10509 = 0;
        break;
    }
    return;
}

void sub_18397()
{
    vector vVar2;
    float fVar5;

    sub_18407( 3 );
    sub_18407( 7 );
    while ((NOT (sub_18445( 3 ))) || (NOT (sub_18445( 7 ))))
    {
        WAIT( 0 );
    }
    if (NOT g_U43133)
    {
        if (g_U43104[19] == 2)
        {
            l_U859[0] = {l_U1159[0]};
            l_U859[1] = {l_U1159[1]};
            vVar2 = {719.18420000, 117.59620000, 5.11650000};
            fVar5 = 197.26280000;
        }
        else
        {
            vVar2 = {-376.02930000, 1563.72200000, 19.18360000};
            fVar5 = 232.28210000;
        }
    }
    else
    {
        vVar2 = {-379.48830000, 1536.27300000, 18.68110000};
        fVar5 = 176.58920000;
    }
    CLEAR_AREA( l_U859[0]._fU0, l_U859[0]._fU4, l_U859[0]._fU8, 50.00000000, 0 );
    if (NOT (DOES_VEHICLE_EXIST( l_U903 )))
    {
        while (NOT (sub_14786( 3, l_U887, 275.00000000, ref l_U903 )))
        {
            WAIT( 0 );
        }
    }
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (NOT (DOES_CHAR_EXIST( l_U908[l_U799] )))
        {
            if (l_U799 == 0)
            {
                sub_18878( 3, ref l_U908[l_U799], l_U859[l_U799]._fU0, l_U859[l_U799]._fU4, l_U859[l_U799]._fU8, l_U900[l_U799] );
            }
            else
            {
                sub_18878( 7, ref l_U908[l_U799], l_U859[l_U799]._fU0, l_U859[l_U799]._fU4, l_U859[l_U799]._fU8, l_U900[l_U799] );
            }
            SET_CHAR_RELATIONSHIP_GROUP( l_U908[l_U799], 0 );
            SET_CHAR_RELATIONSHIP( l_U908[l_U799], 1, 0 );
            SET_CHAR_RELATIONSHIP( l_U908[l_U799], 1, 24 );
            SET_CHAR_RELATIONSHIP( l_U908[l_U799], 5, 26 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U908[l_U799], 1 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U908[l_U799], 1 );
            SET_CHAR_WILL_USE_COVER( l_U908[l_U799], 1 );
            if (l_U799 == 0)
            {
                SET_CHAR_DECISION_MAKER( l_U908[l_U799], l_U988 );
                SET_COMBAT_DECISION_MAKER( l_U908[l_U799], l_U989 );
                GIVE_WEAPON_TO_CHAR( l_U908[l_U799], 14, 2500, 0 );
            }
            else
            {
                SET_CHAR_DECISION_MAKER( l_U908[l_U799], l_U988 );
                SET_COMBAT_DECISION_MAKER( l_U908[l_U799], l_U989 );
                GIVE_WEAPON_TO_CHAR( l_U908[l_U799], 32, 1200, 0 );
            }
            SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( l_U908[l_U799], 0 );
            SET_CHAR_ACCURACY( l_U908[l_U799], 70 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U908[l_U799], 0 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U908[l_U799], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U908[l_U799], 1 );
            SET_CHAR_NEVER_TARGETTED( l_U908[l_U799], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 0 );
            SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U908[l_U799], 1 );
            SET_PED_DONT_DO_EVASIVE_DIVES( l_U908[l_U799], 1 );
            SET_PED_SKIPS_COMPLEX_COVER_COLLISION_CHECKS( l_U908[l_U799], 1 );
            if (l_U799 == 0)
            {
                SET_CHAR_NAME_DEBUG( l_U908[l_U799], "Armando" );
            }
            else
            {
                SET_CHAR_NAME_DEBUG( l_U908[l_U799], "Henrique" );
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U908[0] ))
    {
        sub_8701( 1, l_U908[0], "ARMANDO", 0 );
    }
    if (DOES_CHAR_EXIST( l_U908[1] ))
    {
        sub_8701( 2, l_U908[1], "HENRIQUE", 0 );
    }
    return;
}

void sub_18407(unknown uParam0)
{
    REQUEST_MODEL( sub_4112( uParam0 ) );
    return;
}

void sub_18445(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_4112( uParam0 ) );
}

void sub_18878(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_18889( uParam0 ), sub_4112( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_18935( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_18969( uParam0, (uParam1^) );
    return;
}

int sub_18889(unknown uParam0)
{
    return 25;
}

void sub_18935(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_18969(unknown uParam0, unknown uParam1)
{
    sub_18981( ref uParam1, uParam0 );
    return;
}

void sub_18981(unknown uParam0, int iParam1)
{
    sub_18992( uParam0 );
    if (iParam1 == 37)
    {
        sub_19094( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_19678( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_18992(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_19094(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
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
        GET_CHAR_PROP_INDEX( (uParam0^), 1, ref iVar13 );
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

void sub_19678(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_19094( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_19094( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_19094( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_19094( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_19094( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_20771()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_20861()
{
    unknown[2] uVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown[2] uVar9;

    array(ref uVar2, 2);
    array(ref uVar9, 2);
    if (l_U795 == 4)
    {
        if (DOES_VEHICLE_EXIST( l_U903 ))
        {
            if ((NOT (IS_VEH_DRIVEABLE( l_U903 ))) || (NOT (sub_20926( l_U903 ))))
            {
                l_U820 = 11;
                l_U795 = 24;
                sub_3909( ref l_U1706, 0 );
            }
        }
    }
    GET_CHAR_COORDINATES( sub_7291(), ref l_U1592._fU0, ref l_U1592._fU4, ref l_U1592._fU8 );
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U908[l_U799] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
            {
                GET_CHAR_COORDINATES( l_U908[l_U799], ref uVar2[l_U799]._fU0, ref uVar2[l_U799]._fU4, ref uVar2[l_U799]._fU8 );
            }
        }
    }
    GET_DISTANCE_BETWEEN_COORDS_3D( l_U1592._fU0, l_U1592._fU4, l_U1592._fU8, uVar2[0]._fU0, uVar2[0]._fU4, uVar2[0]._fU8, ref uVar9[0] );
    GET_DISTANCE_BETWEEN_COORDS_3D( l_U1592._fU0, l_U1592._fU4, l_U1592._fU8, uVar2[1]._fU0, uVar2[1]._fU4, uVar2[1]._fU8, ref uVar9[1] );
    if ((uVar9[0] >= 200.00000000) || (uVar9[1] >= 200.00000000))
    {
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                if (DOES_CHAR_EXIST( l_U908[1] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                    {
                        GET_PLAYER_GROUP( sub_20771(), ref l_U970 );
                        if (NOT (IS_GROUP_MEMBER( l_U908[0], l_U970 )))
                        {
                            if (NOT (IS_GROUP_MEMBER( l_U908[1], l_U970 )))
                            {
                                l_U820 = 4;
                                l_U795 = 24;
                            }
                        }
                        if (NOT (IS_GROUP_MEMBER( l_U908[0], l_U970 )))
                        {
                            if (IS_GROUP_MEMBER( l_U908[1], l_U970 ))
                            {
                                l_U820 = 9;
                                sub_21601( "E2F1AUD" );
                                sub_21664( "E2F1_ALEFT", ref l_U1712, 6, 1 );
                                while (sub_3725( l_U1712 ))
                                {
                                    WAIT( 0 );
                                }
                                l_U795 = 24;
                            }
                        }
                        if (NOT (IS_GROUP_MEMBER( l_U908[1], l_U970 )))
                        {
                            if (IS_GROUP_MEMBER( l_U908[0], l_U970 ))
                            {
                                l_U820 = 10;
                                if (sub_3725( l_U1718 ))
                                {
                                    sub_3909( ref l_U1718, 0 );
                                }
                                if (sub_3725( l_U1712 ))
                                {
                                    sub_3909( ref l_U1712, 0 );
                                }
                                if (sub_3725( l_U1724 ))
                                {
                                    sub_3909( ref l_U1724, 0 );
                                }
                                if (sub_3725( l_U1682 ))
                                {
                                    sub_3909( ref l_U1682, 0 );
                                }
                                if (sub_3725( l_U1742 ))
                                {
                                    sub_3909( ref l_U1742, 0 );
                                }
                                sub_21601( "E2F1AUD" );
                                sub_21664( "E2F1_HLEFT", ref l_U1712, 6, 1 );
                                while (sub_3725( l_U1712 ))
                                {
                                    WAIT( 0 );
                                }
                                l_U795 = 24;
                            }
                        }
                    }
                }
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U908[0] ))
    {
        if (IS_CHAR_INJURED( l_U908[0] ))
        {
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (IS_CHAR_INJURED( l_U908[1] ))
                {
                    l_U820 = 1;
                    if (sub_3725( l_U1718 ))
                    {
                        sub_3909( ref l_U1718, 0 );
                    }
                    if (sub_3725( l_U1712 ))
                    {
                        sub_3909( ref l_U1712, 0 );
                    }
                    if (sub_3725( l_U1724 ))
                    {
                        sub_3909( ref l_U1724, 0 );
                    }
                    if (sub_3725( l_U1682 ))
                    {
                        sub_3909( ref l_U1682, 0 );
                    }
                    if (sub_3725( l_U1742 ))
                    {
                        sub_3909( ref l_U1742, 0 );
                    }
                    l_U795 = 24;
                }
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U908[0] ))
    {
        if (IS_CHAR_INJURED( l_U908[0] ))
        {
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                {
                    l_U820 = 2;
                    if (sub_3725( l_U1718 ))
                    {
                        sub_3909( ref l_U1718, 0 );
                    }
                    if (sub_3725( l_U1712 ))
                    {
                        sub_3909( ref l_U1712, 0 );
                    }
                    if (sub_3725( l_U1724 ))
                    {
                        sub_3909( ref l_U1724, 0 );
                    }
                    if (sub_3725( l_U1682 ))
                    {
                        sub_3909( ref l_U1682, 0 );
                    }
                    if (sub_3725( l_U1742 ))
                    {
                        sub_3909( ref l_U1742, 0 );
                    }
                    l_U795 = 24;
                }
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U908[1] ))
    {
        if (IS_CHAR_INJURED( l_U908[1] ))
        {
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                {
                    l_U820 = 3;
                    if (sub_3725( l_U1718 ))
                    {
                        sub_3909( ref l_U1718, 0 );
                    }
                    if (sub_3725( l_U1712 ))
                    {
                        sub_3909( ref l_U1712, 0 );
                    }
                    if (sub_3725( l_U1724 ))
                    {
                        sub_3909( ref l_U1724, 0 );
                    }
                    if (sub_3725( l_U1682 ))
                    {
                        sub_3909( ref l_U1682, 0 );
                    }
                    if (sub_3725( l_U1742 ))
                    {
                        sub_3909( ref l_U1742, 0 );
                    }
                    l_U795 = 24;
                }
            }
        }
    }
    return;
}

int sub_20926(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (NOT (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))
        {
            if (NOT (CHECK_STUCK_TIMER( uParam0, 2, 30000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( uParam0, 1, 40000 )))
                {
                    if (NOT (CHECK_STUCK_TIMER( uParam0, 0, 5000 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_21601(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U2._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_21664(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_21685( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_21685(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_21739( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_21739(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_21761( iParam1 )))
    {
        return 0;
    }
    l_U2._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_22437( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_21761(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_3837( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_3837( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_3837( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_22437(int iParam0, int iParam1)
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

void sub_24214()
{
    int iVar2;
    unknown uVar3;

    if (l_U795 == 4)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
        {
            GET_CAR_CHAR_IS_USING( sub_7291(), ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( l_U908[0], uVar3 ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( l_U908[1], uVar3 ))
                            {
                                if (NOT l_U941)
                                {
                                    GET_GAME_TIMER( ref l_U817 );
                                    l_U941 = 1;
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref l_U818 );
                                    l_U819 = l_U818 - l_U817;
                                    if (NOT l_U913[13])
                                    {
                                        if (l_U819 > 30000)
                                        {
                                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                            {
                                                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                                                {
                                                    if (NOT (HAS_CHAR_GOT_WEAPON( sub_7291(), 31 )))
                                                    {
                                                        GIVE_WEAPON_TO_CHAR( sub_7291(), 31, 250, 0 );
                                                    }
                                                    else
                                                    {
                                                        l_U1624 = sub_17662( sub_7291(), 31 );
                                                        if (l_U1624 < 150)
                                                        {
                                                            GIVE_WEAPON_TO_CHAR( sub_7291(), 31, 250, 0 );
                                                        }
                                                    }
                                                    if (NOT (HAS_CHAR_GOT_WEAPON( sub_7291(), 4 )))
                                                    {
                                                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_7291(), 4, 15, 0 );
                                                    }
                                                    else
                                                    {
                                                        l_U1624 = sub_17662( sub_7291(), 4 );
                                                        if (l_U1624 < 8)
                                                        {
                                                            l_U1625 = 15 - l_U1624;
                                                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_7291(), 4, l_U1625, 0 );
                                                        }
                                                    }
                                                    l_U913[13] = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U795 == 17)
    {
        for ( l_U799 = 0; l_U799 < 25; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U1008[l_U799] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U1008[l_U799] )))
                {
                    if (NOT l_U1365)
                    {
                        if ((LOCATE_CHAR_ON_FOOT_3D( l_U1008[l_U799], l_U1303[5]._fU0, l_U1303[5]._fU4, l_U1303[5]._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( l_U1008[l_U799], l_U1303[6]._fU0, l_U1303[6]._fU4, l_U1303[6]._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
                        {
                            l_U1365 = 1;
                        }
                    }
                    if (NOT l_U1366)
                    {
                        if ((LOCATE_CHAR_ON_FOOT_3D( l_U1008[l_U799], l_U1303[7]._fU0, l_U1303[7]._fU4, l_U1303[7]._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( l_U1008[l_U799], l_U1303[8]._fU0, l_U1303[8]._fU4, l_U1303[8]._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
                        {
                            l_U1366 = 1;
                        }
                    }
                    if (NOT l_U1367)
                    {
                        if ((LOCATE_CHAR_ON_FOOT_3D( l_U1008[l_U799], l_U1303[11]._fU0, l_U1303[11]._fU4, l_U1303[11]._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( l_U1008[l_U799], l_U1303[12]._fU0, l_U1303[12]._fU4, l_U1303[12]._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
                        {
                            l_U1367 = 1;
                        }
                    }
                }
            }
        }
        if (l_U1007 == 1)
        {
            if (NOT l_U913[12])
            {
                GET_GAME_TIMER( ref l_U817 );
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        PRINT_NOW( "F1_12", 7500, 1 );
                        GET_GAME_TIMER( ref l_U817 );
                        l_U913[12] = 1;
                    }
                }
            }
        }
        if (NOT l_U1629)
        {
            if (l_U1007 == 2)
            {
                if (l_U828 == 1)
                {
                    if (NOT l_U913[15])
                    {
                        GET_GAME_TIMER( ref l_U817 );
                        if (l_U913[14])
                        {
                            if (NOT l_U913[15])
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    PRINT_NOW( "F1_15", 7500, 1 );
                                    l_U913[15] = 1;
                                }
                            }
                        }
                        if (NOT l_U913[14])
                        {
                            CLEAR_PRINTS();
                            PRINT_NOW( "F1_14", 7500, 1 );
                            l_U913[14] = 1;
                        }
                    }
                }
            }
        }
        if (l_U1007 == 2)
        {
            if (l_U1639 == 1)
            {
                if (NOT l_U913[17])
                {
                    GET_GAME_TIMER( ref l_U817 );
                    if (l_U913[16])
                    {
                        if (NOT l_U913[17])
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                PRINT_NOW( "F1_17", 7500, 1 );
                                l_U913[17] = 1;
                            }
                        }
                    }
                    if (NOT l_U913[16])
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "F1_16", 7500, 1 );
                        l_U913[16] = 1;
                    }
                }
            }
        }
        GET_GAME_TIMER( ref l_U818 );
        l_U819 = l_U818 - l_U817;
        GENERATE_RANDOM_INT_IN_RANGE( 500, 2000, ref iVar2 );
        if (l_U1007 > 0)
        {
            if (l_U819 > (7500 + iVar2))
            {
                if (l_U1365)
                {
                    if (l_U1366)
                    {
                        if (l_U1367)
                        {
                            if ((NOT (IS_CHAR_DEAD( l_U908[0] ))) || (NOT (IS_CHAR_DEAD( l_U908[1] ))))
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (NOT sub_25825())
                                    {
                                        PRINT_NOW( "F1_W1", 7500, 1 );
                                        GET_GAME_TIMER( ref l_U817 );
                                    }
                                }
                            }
                        }
                    }
                }
                if (l_U1365)
                {
                    if (l_U1366)
                    {
                        if (NOT l_U1367)
                        {
                            if ((NOT (IS_CHAR_DEAD( l_U908[0] ))) || (NOT (IS_CHAR_DEAD( l_U908[1] ))))
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (NOT sub_25825())
                                    {
                                        PRINT_NOW( "F1_W2", 7500, 1 );
                                        GET_GAME_TIMER( ref l_U817 );
                                    }
                                }
                            }
                        }
                    }
                }
                if (l_U1365)
                {
                    if (NOT l_U1366)
                    {
                        if (NOT l_U1367)
                        {
                            if ((NOT (IS_CHAR_DEAD( l_U908[0] ))) || (NOT (IS_CHAR_DEAD( l_U908[1] ))))
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (NOT sub_25825())
                                    {
                                        PRINT_NOW( "F1_W4", 7500, 1 );
                                        GET_GAME_TIMER( ref l_U817 );
                                    }
                                }
                            }
                        }
                    }
                }
                if (NOT l_U1365)
                {
                    if (l_U1366)
                    {
                        if (NOT l_U1367)
                        {
                            if ((NOT (IS_CHAR_DEAD( l_U908[0] ))) || (NOT (IS_CHAR_DEAD( l_U908[1] ))))
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (NOT sub_25825())
                                    {
                                        PRINT_NOW( "F1_W5", 7500, 1 );
                                        GET_GAME_TIMER( ref l_U817 );
                                    }
                                }
                            }
                        }
                    }
                }
                if (NOT l_U1365)
                {
                    if (NOT l_U1366)
                    {
                        if (l_U1367)
                        {
                            if ((NOT (IS_CHAR_DEAD( l_U908[0] ))) || (NOT (IS_CHAR_DEAD( l_U908[1] ))))
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (NOT sub_25825())
                                    {
                                        PRINT_NOW( "F1_W3", 7500, 1 );
                                        GET_GAME_TIMER( ref l_U817 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U1365 = 0;
                l_U1366 = 0;
                l_U1367 = 0;
            }
        }
    }
    return;
}

int sub_25825()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_26421()
{
    if (NOT l_U2248[l_U2300])
    {
        if (NOT g_U43133)
        {
            if (g_U43793 == 0)
            {
                if (l_U2300 == 0)
                {
                    l_U1748 = "E2F1_B1AV1";
                }
                else if (l_U2300 == 1)
                {
                    l_U1748 = "E2F1_B1BV1";
                }
                else if (l_U2300 == 2)
                {
                    l_U1748 = "E2F1_B1CV1";
                }
                else if (l_U2300 == 3)
                {
                    l_U1748 = "E2F1_B1DV1";
                }
                else if (l_U2300 == 4)
                {
                    l_U1748 = "E2F1_B1EV1";
                }
                else if (l_U2300 == 5)
                {
                    l_U1748 = "E2F1_B1FV1";
                }
                else if (l_U2300 == 6)
                {
                    l_U1748 = "E2F1_B1GV1";
                }
                else if (l_U2300 == 7)
                {
                    l_U1748 = "E2F1_B1HV1";
                }
                else if (l_U2300 == 8)
                {
                    l_U1748 = "E2F1_B1IV1";
                }
                else if (l_U2300 == 9)
                {
                    l_U1748 = "E2F1_AWPNS";
                }
                else if (l_U2300 == 10)
                {
                    l_U1748 = "E2F1_LCHRS";
                }
                else
                {
                    l_U2296 = 1;
                };;;;;;;;;;;
            }
            if (g_U43793 == 1)
            {
                if (l_U2300 == 0)
                {
                    l_U1748 = "E2F1_B1AV2";
                }
                else if (l_U2300 == 1)
                {
                    l_U1748 = "E2F1_B1BV2";
                }
                else if (l_U2300 == 2)
                {
                    l_U1748 = "E2F1_B1CV2";
                }
                else if (l_U2300 == 3)
                {
                    l_U1748 = "E2F1_B1DV2";
                }
                else if (l_U2300 == 4)
                {
                    l_U1748 = "E2F1_B1EV2";
                }
                else if (l_U2300 == 5)
                {
                    l_U1748 = "E2F1_B1FV2";
                }
                else if (l_U2300 == 6)
                {
                    l_U1748 = "E2F1_B1GV2";
                }
                else if (l_U2300 == 7)
                {
                    l_U1748 = "E2F1_AWPNS";
                }
                else if (l_U2300 == 8)
                {
                    l_U1748 = "E2F1_LCHRS";
                }
                else
                {
                    l_U2296 = 1;
                };;;;;;;;;
            }
        }
        else if (NOT (g_U43793 == 101))
        {
            if (l_U2300 == 0)
            {
                l_U1748 = "E2F1_B1AV1";
            }
            else if (l_U2300 == 1)
            {
                l_U1748 = "E2F1_B1BV1";
            }
            else if (l_U2300 == 2)
            {
                l_U1748 = "E2F1_B1CV1";
            }
            else if (l_U2300 == 3)
            {
                l_U1748 = "E2F1_B1DV1";
            }
            else if (l_U2300 == 4)
            {
                l_U1748 = "E2F1_B1EV1";
            }
            else if (l_U2300 == 5)
            {
                l_U1748 = "E2F1_B1FV1";
            }
            else if (l_U2300 == 6)
            {
                l_U1748 = "E2F1_B1GV1";
            }
            else if (l_U2300 == 7)
            {
                l_U1748 = "E2F1_B1HV1";
            }
            else if (l_U2300 == 8)
            {
                l_U1748 = "E2F1_B1IV1";
            }
            else if (l_U2300 == 9)
            {
                l_U1748 = "E2F1_AWPNS";
            }
            else if (l_U2300 == 10)
            {
                l_U1748 = "E2F1_LCHRS";
            }
            else
            {
                l_U2296 = 1;
            };;;;;;;;;;;
        }
        else if (l_U2300 == 0)
        {
            l_U1748 = "E2F1_B1AV2";
        }
        else if (l_U2300 == 1)
        {
            l_U1748 = "E2F1_B1BV2";
        }
        else if (l_U2300 == 2)
        {
            l_U1748 = "E2F1_B1CV2";
        }
        else if (l_U2300 == 3)
        {
            l_U1748 = "E2F1_B1DV2";
        }
        else if (l_U2300 == 4)
        {
            l_U1748 = "E2F1_B1EV2";
        }
        else if (l_U2300 == 5)
        {
            l_U1748 = "E2F1_B1FV2";
        }
        else if (l_U2300 == 6)
        {
            l_U1748 = "E2F1_B1GV2";
        }
        else if (l_U2300 == 7)
        {
            l_U1748 = "E2F1_AWPNS";
        }
        else if (l_U2300 == 8)
        {
            l_U1748 = "E2F1_LCHRS";
        }
        else
        {
            l_U2296 = 1;
        };;;;;;;;;;;
    }
    if (NOT (IS_WANTED_LEVEL_GREATER( sub_20771(), 0 )))
    {
        if ((g_U43793 == 2) || (g_U43793 > 101))
        {
            if (NOT l_U955[0])
            {
                if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                {
                    SAY_AMBIENT_SPEECH( l_U908[0], "LISTEN_TO_RADIO", 1, 1, 0 );
                    PRINTNL();
                    PRINTSTRING( "*************SAY_AMBIENT_SPEECH 1 *************" );
                    PRINTNL();
                }
                l_U955[0] = 1;
            }
        }
        else if (NOT l_U2296)
        {
            if (NOT l_U2261[l_U2300])
            {
                if (sub_28170())
                {
                    if (NOT (sub_3725( l_U1706 )))
                    {
                        if (NOT (sub_28404( l_U1706 )))
                        {
                            if (NOT l_U2248[l_U2300])
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    sub_21664( l_U1748, ref l_U1706, 6, 1 );
                                    l_U2248[l_U2300] = 1;
                                }
                            }
                            else
                            {
                                sub_3909( ref l_U1706, 1 );
                                l_U2261[l_U2300] = 1;
                                if (l_U2300 < 11)
                                {
                                    l_U2300++;
                                }
                            }
                        }
                        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_28573( l_U1748, ref l_U1706, 6, 1 );
                            l_U958 = 0;
                        }
                    }
                }
                else if (sub_3725( l_U1706 ))
                {
                    sub_28715( ref l_U1706 );
                }
            }
        }
    }
    else if (sub_3725( l_U1706 ))
    {
        sub_28715( ref l_U1706 );
    }
    else if (NOT l_U958)
    {
        sub_21664( "E2F1_WANT", ref l_U1682, 6, 1 );
        l_U958 = 1;
    };;;
    return;
}

int sub_28170()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
    {
        GET_CAR_CHAR_IS_USING( sub_7291(), ref uVar2 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            if (IS_VEH_DRIVEABLE( uVar2 ))
            {
                if (DOES_CHAR_EXIST( l_U908[0] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                    {
                        if (DOES_CHAR_EXIST( l_U908[1] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                            {
                                if (IS_CHAR_IN_CAR( l_U908[0], uVar2 ))
                                {
                                    if (IS_CHAR_IN_CAR( l_U908[1], uVar2 ))
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

void sub_28404(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_28573(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_28594( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

int sub_28594(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_21739( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_28715(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_3837( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (iParam0->_fU4 == g_U8866)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_3837( "\n CONVERSATION PAUSED AT LINE " );
            sub_28871( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_3837( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_3837( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_3837( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_28871(unknown uParam0)
{
    return;
}

void sub_29230()
{
    if (l_U795 == 4)
    {
        for ( l_U799 = 0; l_U799 < 2; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U908[l_U799] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
                {
                    sub_29330( l_U908[l_U799] );
                }
            }
        }
    }
    if (l_U795 == 17)
    {
        for ( l_U799 = 0; l_U799 < 2; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U908[l_U799] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
                {
                    GET_PLAYER_GROUP( sub_20771(), ref l_U970 );
                    if (IS_GROUP_MEMBER( l_U908[l_U799], l_U970 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U908[l_U799] );
                    }
                    if (NOT l_U913[10])
                    {
                        if (l_U799 == 0)
                        {
                            GET_GAME_TIMER( ref l_U811[l_U799] );
                            l_U814[l_U799] = l_U811[l_U799] - l_U808[l_U799];
                            if (l_U814[l_U799] < 8000)
                            {
                                if (NOT (IS_PED_IN_COVER( l_U908[l_U799] )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 116, ref l_U960[l_U799] );
                                    if (l_U960[l_U799] == 7)
                                    {
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 0 );
                                        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U908[l_U799], l_U1173[l_U799], 5000 );
                                    }
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 106, ref l_U960[l_U799] );
                                if (l_U960[l_U799] == 7)
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 0 );
                                    TASK_GUARD_ANGLED_DEFENSIVE_AREA( l_U908[l_U799], l_U1159[l_U799], l_U1167[l_U799], 5.00000000, 240000, l_U1180[l_U799], l_U1187[l_U799], l_U1194 );
                                }
                            }
                        }
                        if (l_U799 == 1)
                        {
                            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[l_U799], l_U1159[l_U799]._fU0, l_U1159[l_U799]._fU4, l_U1159[l_U799]._fU8, 3.00000000, 3.00000000, 3.00000000, 0 )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 104, ref l_U960[l_U799] );
                                if (l_U960[l_U799] == 7)
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 1 );
                                    TASK_SEEK_COVER_TO_COORDS( l_U908[l_U799], l_U1159[l_U799]._fU0, l_U1159[l_U799]._fU4, l_U1159[l_U799]._fU8, l_U1303[l_U799]._fU0, l_U1303[l_U799]._fU4, l_U1303[l_U799]._fU8, 0 );
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 117, ref l_U960[l_U799] );
                                if (l_U960[l_U799] == 7)
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 0 );
                                    TASK_GUARD_CURRENT_POSITION( l_U908[l_U799], 0.00000000, 2.00000000, 1 );
                                }
                            }
                        }
                    }
                    else if (l_U799 == 0)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 106, ref l_U960[l_U799] );
                        if (NOT (l_U960[l_U799] == 7))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[l_U799] );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 1 );
                        }
                        else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[l_U799], 693.44870000, 145.27290000, 3.68920000, 2.00000000, 2.00000000, 2.00000000, 0 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 47, ref l_U960[l_U799] );
                            if (l_U960[l_U799] == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 1 );
                                TASK_GO_TO_COORD_WHILE_AIMING( l_U908[l_U799], 693.44870000, 145.27290000, 3.68920000, 3, 3.00000000, 3.00000000, 0, 714.69010000, 52.66870000, 4.96900000, 1 );
                            }
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 117, ref l_U960[l_U799] );
                            if (l_U960[l_U799] == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 0 );
                                TASK_GUARD_CURRENT_POSITION( l_U908[l_U799], 0.00000000, 2.00000000, 1 );
                            }
                        }
                    }
                    if (l_U799 == 1)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 117, ref l_U960[l_U799] );
                        if (NOT (l_U960[l_U799] == 7))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[l_U799] );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 1 );
                        }
                        else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[l_U799], 687.98160000, 138.84840000, 2.81250000, 2.00000000, 2.00000000, 2.00000000, 0 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 47, ref l_U960[l_U799] );
                            if (l_U960[l_U799] == 7)
                            {
                                TASK_GO_TO_COORD_WHILE_AIMING( l_U908[l_U799], 687.98160000, 138.84840000, 2.81250000, 3, 3.00000000, 3.00000000, 0, 714.69010000, 52.66870000, 4.96900000, 1 );
                            }
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 117, ref l_U960[l_U799] );
                            if (l_U960[l_U799] == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 0 );
                                TASK_GUARD_CURRENT_POSITION( l_U908[l_U799], 0.00000000, 2.00000000, 1 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_29330(unknown uParam0)
{
    float fVar3;
    float fVar4;

    fVar3 = 40.00000000;
    fVar4 = 15.00000000;
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            GET_PLAYER_GROUP( sub_20771(), ref l_U970 );
            if (NOT (IS_GROUP_MEMBER( uParam0, l_U970 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), uParam0, fVar4, fVar4, fVar4, 0 ))
                {
                    SET_GROUP_MEMBER( l_U970, uParam0 );
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), uParam0, fVar3, fVar3, fVar3, 0 )))
            {
                REMOVE_CHAR_FROM_GROUP( uParam0 );
            }
        }
    }
    return;
}

void sub_31263()
{
    sub_31292( 719.18420000, 117.59620000, 5.11650000, 188.53590000 );
    if (DOES_VEHICLE_EXIST( l_U903 ))
    {
        if (IS_VEH_DRIVEABLE( l_U903 ))
        {
            if (sub_31501( l_U830._fU0, l_U830._fU4, l_U830._fU8 + 3.00000000, 1.50000000, 1.50000000, 3.00000000, 1, l_U908[0], l_U908[1], 0, l_U903, "F1_01", "F1_02", "F1_02", "F1_02", "F1_03", "f1_GET", 0, 1, "F1_04", "F1_GET" ))
            {
                l_U933 = 1;
                sub_3909( ref l_U1706, 1 );
                sub_21664( "E2F1_ARR", ref l_U1700, 6, 1 );
                SET_PLAYER_CONTROL( sub_20771(), 0 );
                l_U795 = 5;
            }
        }
    }
    return;
}

void sub_31292(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U253 = {uParam0, uParam1, uParam2};
    l_U243 = uParam3;
    l_U219 = 1;
    return;
}

int sub_31501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20)
{
    int iVar23;
    int I;
    unknown uVar25;

    l_U248[0] = uParam7;
    l_U248[1] = uParam8;
    l_U248[2] = uParam9;
    l_U247 = uParam7;
    sub_31549();
    sub_31881();
    sub_32761();
    if (IS_VEH_DRIVEABLE( uParam10 ))
    {
        if (sub_32959( l_U248[0], l_U248[1], l_U248[2], uParam12, uParam13, uParam14, uParam15, l_U242, uParam17, uParam10, 0, 0 ))
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (IS_CHAR_IN_CAR( sub_7291(), uParam10 ))
                {
                    l_U212 = 1;
                    l_U223 = 1;
                    sub_33507( uParam16 );
                    sub_33507( uParam20 );
                    if ((uParam18) AND (IS_WANTED_LEVEL_GREATER( sub_20771(), 0 )))
                    {
                        if ((DOES_BLIP_EXIST( l_U239 )) || (DOES_BLIP_EXIST( l_U234 )))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U239 );
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 1" );
                            PRINTNL();
                            sub_33507( uParam11 );
                        }
                        if (((NOT (sub_37661( 0 ))) AND (NOT sub_39067())) AND (NOT l_U208))
                        {
                            sub_33387( uParam19, 0 );
                            l_U252 = uParam19;
                            l_U208 = 1;
                            l_U209 = 0;
                            if (NOT (IS_CHAR_INJURED( l_U248[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U248[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                            }
                        }
                    }
                    else if (l_U208)
                    {
                        sub_33507( uParam19 );
                        l_U208 = 0;
                        l_U209 = 1;
                    }
                    if (l_U209)
                    {
                        if (NOT (sub_37661( 0 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U248[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U248[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                            }
                            l_U209 = 0;
                        }
                    }
                    if (LOCATE_CHAR_IN_CAR_3D( sub_7291(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U248[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U248[I], uParam10 )))
                                {
                                    iVar23 = 0;
                                }
                            }
                        }
                        if ((iVar23) AND (sub_39466()))
                        {
                            sub_33507( uParam11 );
                            sub_33507( uParam12 );
                            sub_33507( uParam13 );
                            sub_33507( uParam14 );
                            sub_33507( uParam15 );
                            sub_33507( uParam19 );
                            sub_39947();
                            for ( I = 0; I < 3; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( l_U248[I] )))
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U248[I], 0 );
                                }
                            }
                            return 1;
                        }
                    }
                    else
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U248[I] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U248[I] )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U248[I], uParam10 )))
                                    {
                                        iVar23 = 0;
                                    }
                                }
                            }
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U239 )))
                        {
                            if (DOES_BLIP_EXIST( l_U234 ))
                            {
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                            }
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 2" );
                            PRINTNL();
                            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U239 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 1" );
                            PRINTNL();
                            sub_35494( l_U239 );
                            if (l_U227)
                            {
                                SHOW_BLIP_ON_ALTIMETER( l_U239, 1 );
                            }
                        }
                        if (NOT (sub_37661( 0 )))
                        {
                            if (NOT l_U210)
                            {
                                sub_33387( uParam11, 0 );
                                l_U210 = 1;
                            }
                        }
                    }
                }
                else if (((uParam18) AND (IS_WANTED_LEVEL_GREATER( sub_20771(), 0 ))) AND (NOT l_U223))
                {
                    sub_33507( uParam16 );
                    sub_33507( uParam20 );
                    if ((DOES_BLIP_EXIST( l_U239 )) || (DOES_BLIP_EXIST( l_U234 )))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U239 );
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                        PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
                        PRINTNL();
                        sub_33507( uParam11 );
                    }
                    if (((NOT (sub_37661( 0 ))) AND (NOT sub_39067())) AND (NOT l_U208))
                    {
                        sub_33387( uParam19, 0 );
                        l_U252 = uParam19;
                        l_U208 = 1;
                        l_U209 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U248[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U248[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U208)
                {
                    sub_33507( uParam19 );
                    l_U208 = 0;
                    l_U209 = 1;
                }
                if (l_U209)
                {
                    if (NOT (sub_37661( 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U248[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U248[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U209 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U234 )))
                {
                    if (DOES_BLIP_EXIST( l_U239 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U239 );
                        sub_33507( uParam11 );
                    }
                    ADD_BLIP_FOR_CAR( uParam10, ref l_U234 );
                    CHANGE_BLIP_DISPLAY( l_U234, 2 );
                    PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 2" );
                    PRINTNL();
                    SET_BLIP_AS_FRIENDLY( l_U234, 1 );
                    if (NOT l_U213)
                    {
                        sub_35494( l_U234 );
                    }
                }
                if (NOT (sub_37661( 0 )))
                {
                    if (NOT l_U212)
                    {
                        sub_33387( uParam16, 0 );
                        l_U212 = 1;
                    }
                    else if (l_U223)
                    {
                        if (NOT (IS_STRING_NULL( uParam20 )))
                        {
                            if (NOT l_U213)
                            {
                                sub_33387( uParam20, 0 );
                                l_U213 = 1;
                            }
                        }
                        else if (NOT l_U213)
                        {
                            sub_33387( uParam16, 0 );
                            l_U213 = 1;
                        }
                    }
                };;;
            }
        }
        else if (l_U208)
        {
            l_U208 = 0;
        }
        if (DOES_BLIP_EXIST( l_U239 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U239 );
            sub_33507( uParam11 );
        }
        if (DOES_BLIP_EXIST( l_U234 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
            PRINTNL();
            sub_33507( uParam16 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - check vehicle is alive before calling this." );
        return 0;
    }
    sub_41873( uParam0, uParam1, uParam2, 0, uParam10 );
    sub_46030( uParam0, uParam1, uParam2 );
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    return 0;
}

void sub_31549()
{
    int I;

    for ( I = 0; I < l_U248; I++ )
    {
        if (DOES_CHAR_EXIST( l_U248[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U248[I] )))
            {
                if (((IS_CHAR_SITTING_IN_ANY_CAR( l_U248[I] )) AND (sub_31642( l_U248[I] ))) AND (sub_31707()))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U248[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_20771() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_7291() )))
        {
            if (((IS_CHAR_SITTING_IN_ANY_CAR( sub_7291() )) AND (sub_31642( sub_7291() ))) AND (sub_31707()))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_7291(), 1 );
            }
        }
    }
    return;
}

int sub_31642(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U2._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_31707()
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        return 1;
    }
    return 0;
}

void sub_31881()
{
    if (NOT l_U221)
    {
        l_U256 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U208 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U209 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U210 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U211 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U213 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U212 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U214 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U215[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U215[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U215[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U219 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U220 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U241, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U242, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U243, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U253._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U253._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U253._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U222 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U223 );
        END_WIDGET_GROUP();
        l_U221 = 1;
    }
    return;
}

void sub_32761()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_20771() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_7291(), 0 );
    }
    for ( I = 0; I < l_U248; I++ )
    {
        if (DOES_CHAR_EXIST( l_U248[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U248[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U248[I], 0 );
            }
        }
    }
    return;
}

int sub_32959(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U248[0] = uParam0;
    l_U248[1] = uParam1;
    l_U248[2] = uParam2;
    l_U247 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U248[I] )))
        {
            iVar16++;
        }
    }
    if (((NOT sub_33130()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_7291() ))) AND (NOT (DOES_VEHICLE_EXIST( iParam9 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_7291(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U228)
            {
                sub_33387( "MORE_SEATS", 0 );
                l_U228 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U228 = 0;
        sub_33507( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U248[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U248[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U248[I], sub_33617() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U248[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U248[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_7291() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_7291(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U248[I], sub_33617() ))
                        {
                            if ((NOT sub_33130()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_7291() )))
                            {
                                if (NOT (sub_33819( l_U248[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U248[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U248[I], sub_33617() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U248[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U248[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_7291(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U248[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U248[I], sub_33617() ))
                {
                    if (sub_34380())
                    {
                        if (l_U230[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U248[I], -1 );
                            l_U230[I] = 0;
                        }
                    }
                    else if (NOT l_U230[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U248[I], 2 );
                        l_U230[I] = 1;
                    }
                }
                if (((NOT (IS_GROUP_MEMBER( l_U248[I], sub_33617() ))) AND (NOT (sub_34562( l_U248[I], iParam9 )))) AND (NOT (sub_34658( l_U248[I], iParam9 ))))
                {
                    if (sub_34771( l_U248[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U248[I], sub_33617() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U248[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U248[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_33617(), l_U248[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U235[I] )))
                        {
                            GET_GAME_TIMER( ref l_U245 );
                            ADD_BLIP_FOR_CHAR( l_U248[I], ref l_U235[I] );
                            CHANGE_BLIP_DISPLAY( l_U235[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U235[I], 1 );
                            if (bParam8)
                            {
                                sub_35494( l_U235[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U235[I] ))
                {
                    if (((sub_35613( l_U248[I] )) || (sub_34562( l_U248[I], iParam9 ))) || (uParam11))
                    {
                        if (DOES_BLIP_EXIST( l_U235[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U235[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_33507( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_35494( l_U235[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U248[I], iParam9 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U248[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )) AND (NOT l_U225))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U248[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U248[I], iParam9 )))
                                {
                                    if (NOT (sub_35613( l_U248[I] )))
                                    {
                                        if (sub_36221( l_U248[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U248[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U248[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_7291(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_7291(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U248[I], sub_33617() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U248[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U248[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U248[I], 1 );
                                if (l_U224)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U248[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U248[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_7291(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U248[I], ref l_U235[I] );
                                CHANGE_BLIP_DISPLAY( l_U235[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U235[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U248[I], sub_33617() )))
                        {
                            if (sub_34771( l_U248[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U248[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U248[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U248[I], 0 );
                                SET_GROUP_MEMBER( sub_33617(), l_U248[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_7291(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U248[I], sub_33617() )))
                        {
                            SET_GROUP_MEMBER( sub_33617(), l_U248[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U248[I], sub_33617() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U248[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U235[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U235[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_33507( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U235[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_37661( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U248[I] )))
                    {
                        if ((sub_33819( l_U248[I] )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U248[I], sub_7291(), 40.00000000, 40.00000000, 40.00000000, 0 )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if (((iVar17 - l_U245) > 1500) || (iVar16 == 1))
        {
            if (iVar15 > 0)
            {
                if (l_U246 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U246 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar15 == iVar16) AND (iVar16 > 1))
                    {
                        if ((NOT l_U214) AND (NOT (l_U246 == iVar15)))
                        {
                            sub_33387( uParam6, 0 );
                            l_U214 = 1;
                            l_U246 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT l_U215[I]) AND (NOT (l_U246 == iVar15)))
                                {
                                    sub_33387( uVar28[I], 0 );
                                    l_U215[I] = 1;
                                    l_U246 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U246 = 0;
            }
        }
    }
    l_U224 = 0;
    if ((iVar18) AND (NOT bVar25))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U235[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U235[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_33507( uVar28[I] );
            }
        }
        sub_33507( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_7291() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_7291(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U248[I] )))
                {
                    SET_CHAR_COORDINATES( l_U248[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_33130()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_7291() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_7291(), ref uVar2 );
        if (sub_33171( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_33171(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U248; I++ )
        {
            if (DOES_CHAR_EXIST( l_U248[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_33387(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U244 );
    return;
}

void sub_33507(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_33617()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_33819(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_20771() ))
    {
        GET_CAR_CHAR_IS_USING( sub_7291(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_34380()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_7291(), ref uVar2 );
    if (sub_33171( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_34562(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_34658(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_33617() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_34771(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_7291(), uVar5 ))
                    {
                        if (sub_33130())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_34380())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_7291(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_35494(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U240 ))
        {
            SET_ROUTE( l_U240, 0 );
        }
        l_U240 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_35613(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_7291() ))
        {
            if (sub_35661( sub_7291(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_33617(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_33617() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_33617(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_35661(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_36221(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 > -0.50000000) AND (fVar3 < 0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_37661(boolean bParam0)
{
    if (((((IS_MESSAGE_BEING_DISPLAYED()) || (((sub_31707()) AND (NOT bParam0)) || ((sub_37686()) AND (bParam0)))) || (sub_37715())) || (IS_SCRIPTED_CONVERSATION_ONGOING())) || (sub_37774()))
    {
        return 1;
    }
    return 0;
}

void sub_37686()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_37715()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_37774()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U244;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

int sub_39067()
{
    if (NOT (IS_CHAR_INJURED( l_U247 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U247 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_39466()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_7291() ))
    {
        if ((IS_CHAR_ON_ANY_BIKE( sub_7291() )) || (IS_CHAR_IN_ANY_HELI( sub_7291() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U226)
    {
        if (sub_36221( sub_7291() ))
        {
            if ((sub_39556( 1, iVar2 )) || (l_U220))
            {
                return 1;
            }
        }
    }
    else if ((sub_39556( 1, iVar2 )) || (l_U220))
    {
        return 1;
    }
    return 0;
}

int sub_39556(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_7291(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_7291(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_7291()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_7291() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_20771() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_20771() )))
    {
        return 0;
    }
    return 1;
}

void sub_39947()
{
    int I;

    sub_39956();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U235[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U235[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    l_U240 = nil;
    l_U214 = 0;
    for ( I = 0; I < l_U215; I++ )
    {
        l_U215[I] = 0;
        l_U230[I] = 0;
    }
    l_U210 = 0;
    l_U208 = 0;
    l_U209 = 0;
    l_U211 = 0;
    l_U213 = 0;
    l_U212 = 0;
    l_U219 = 0;
    l_U220 = 0;
    l_U222 = 0;
    l_U223 = 0;
    l_U246 = 0;
    for ( I = 0; I < l_U248; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U248[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U248[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U248[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_20771() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_7291(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_20771() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_7291(), 1 );
    }
    l_U224 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    return;
}

void sub_39956()
{
    if (DOES_BLIP_EXIST( l_U239 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U239 );
    }
    return;
}

void sub_41873(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_31881();
    if (l_U219)
    {
        uParam0 = l_U253._fU0;
        uParam1 = l_U253._fU4;
        uParam2 = l_U253._fU8;
        uVar12 = l_U243;
        l_U219 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_7291() )))
    {
        GET_CHAR_HEADING( sub_7291(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_20771() );
            sub_42084( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_42505( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U248; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U248[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U248[I] );
                        if (NOT (IS_CHAR_INJURED( sub_7291() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_7291(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U248[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U248[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_7291() );
                    WARP_CHAR_INTO_CAR( sub_7291(), uParam4 );
                    for ( I = 0; I < l_U248; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U248[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U248[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U248[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U248[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U248[I], 0 );
                            }
                        }
                    }
                }
                sub_42505( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_7291() );
                    WARP_CHAR_INTO_CAR( sub_7291(), uVar8 );
                    sub_43412( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_7291() );
                        WARP_CHAR_INTO_CAR( sub_7291(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U248; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U248[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U248[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U248[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U248[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U248; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U248[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U248[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U248[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_44032( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_42084(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_20771() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_7291(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_7291(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_42204( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_42204(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_42505(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_7291(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_7291(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_7291(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_7291(), uParam3 );
    return;
}

void sub_43412(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_44032(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( sub_7291() ))) AND ((IS_SCREEN_FADED_OUT()) || (bParam0)))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_44412( sub_7291(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_44412( sub_7291(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_44412( sub_7291(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_45689( 0 );
        sub_45689( 1 );
        sub_45689( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U207 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U207;
            if ((iVar6 > 15000) || (((g_U30110[0] == 0) AND (g_U30110[1] == 0)) AND (g_U30110[2] == 0)))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_44412(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_44423( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_44583( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_44423(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( 14.17720000, 397.67000000, -399.10690000);
        break;
        case 1:
        return vector( 9.80000000, 153.41000000, -468.03000000);
        break;
        case 2:
        return vector( 11.54000000, 356.98000000, -440.28000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_44583(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_44611( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_44611(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_7291(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_45689(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_46030(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_46055( uParam0, uParam1, uParam2, l_U241, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_7291(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U241, l_U241, l_U241, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U241 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U241 );
            }
        }
    }
    return;
}

int sub_46055(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_46072( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_7291(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_46072(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_46466()
{
    if (NOT l_U932)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_7291(), l_U830._fU0, l_U830._fU4, l_U830._fU8, 200.00000000, 200.00000000, 200.00000000, 0 ))
        {
            l_U932 = 1;
            sub_46546();
        }
    }
    return;
}

void sub_46546()
{
    vector vVar2;
    vector vVar5;

    vVar2 = {744.03050000, 55.01610000, 54.90100000};
    vVar5 = {643.47680000, 189.17200000, -66.42790000};
    ADD_SCENARIO_BLOCKING_AREA( vVar2, vVar5 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 720.68930000, 118.65200000, -50.30110000, 714.28480000, 98.84380000, 50.00000000, 0 );
    SWITCH_ROADS_OFF( l_U866[0]._fU0, l_U866[0]._fU4, l_U866[0]._fU8, l_U866[1]._fU0, l_U866[1]._fU4, l_U866[1]._fU8 );
    SWITCH_ROADS_OFF( l_U873[0]._fU0, l_U873[0]._fU4, l_U873[0]._fU8, l_U873[1]._fU0, l_U873[1]._fU4, l_U873[1]._fU8 );
    SWITCH_ROADS_OFF( l_U880[0]._fU0, l_U880[0]._fU4, l_U880[0]._fU8, l_U880[1]._fU0, l_U880[1]._fU4, l_U880[1]._fU8 );
    CLEAR_AREA( l_U830._fU0, l_U830._fU4, l_U830._fU8, 120.00000000, 0 );
    return;
}

void sub_46910()
{
    vector[2] vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    vector[2] vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    array(ref vVar2, 2);
    array(ref vVar9, 2);
    vVar2[0] = {734.83300000, 57.22720000, 5.55450000};
    vVar2[1] = {729.05950000, 67.60330000, 5.57290000};
    vVar9[0] = {0.00000000, 0.00000000, 150.00000000};
    vVar9[1] = {0.00000000, 0.00000000, 2.00000000};
    REQUEST_MODEL( -1758379524 );
    REQUEST_MODEL( 1337041428 );
    REQUEST_MODEL( -660479673 );
    REQUEST_MODEL( -1941868026 );
    REQUEST_MODEL( 469507247 );
    REQUEST_MODEL( 2142893183 );
    REQUEST_MODEL( -2124071584 );
    while (((((((NOT (HAS_MODEL_LOADED( -1758379524 ))) || (NOT (HAS_MODEL_LOADED( 1337041428 )))) || (NOT (HAS_MODEL_LOADED( -660479673 )))) || (NOT (HAS_MODEL_LOADED( -1941868026 )))) || (NOT (HAS_MODEL_LOADED( 469507247 )))) || (NOT (HAS_MODEL_LOADED( 2142893183 )))) || (NOT (HAS_MODEL_LOADED( -2124071584 ))))
    {
        WAIT( 0 );
    }
    for ( l_U799 = 0; l_U799 < 5; l_U799++ )
    {
        if (NOT (DOES_OBJECT_EXIST( l_U964[l_U799] )))
        {
            CLEAR_AREA( l_U843[l_U799]._fU0, l_U843[l_U799]._fU4, l_U843[l_U799]._fU8, 5.00000000, 0 );
            if (l_U799 < 3)
            {
                CREATE_OBJECT( -2124071584, l_U843[l_U799]._fU0, l_U843[l_U799]._fU4, l_U843[l_U799]._fU8, ref l_U964[l_U799], 1 );
            }
            else
            {
                CREATE_OBJECT( -2124071584, l_U843[l_U799]._fU0, l_U843[l_U799]._fU4, l_U843[l_U799]._fU8, ref l_U964[l_U799], 1 );
            }
            SET_OBJECT_HEADING( l_U964[l_U799], l_U894[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 4; l_U799++ )
    {
        if (NOT (DOES_OBJECT_EXIST( l_U1452[l_U799] )))
        {
            if (NOT (l_U799 == 1))
            {
                CREATE_OBJECT( l_U1463, l_U1394[l_U799]._fU0, l_U1394[l_U799]._fU4, l_U1394[l_U799]._fU8, ref l_U1452[l_U799], 0 );
                SET_OBJECT_COORDINATES( l_U1452[l_U799], l_U1394[l_U799]._fU0, l_U1394[l_U799]._fU4, l_U1394[l_U799]._fU8 );
                SET_OBJECT_ROTATION( l_U1452[l_U799], l_U1407[l_U799]._fU0, l_U1407[l_U799]._fU4, l_U1407[l_U799]._fU8 );
            }
        }
    }
    for ( l_U799 = 0; l_U799 < 5; l_U799++ )
    {
        if (NOT (DOES_OBJECT_EXIST( l_U1457[l_U799] )))
        {
            CREATE_OBJECT( l_U1464, l_U1420[l_U799]._fU0, l_U1420[l_U799]._fU4, l_U1420[l_U799]._fU8, ref l_U1457[l_U799], 0 );
            SET_OBJECT_COORDINATES( l_U1457[l_U799], l_U1420[l_U799]._fU0, l_U1420[l_U799]._fU4, l_U1420[l_U799]._fU8 );
            SET_OBJECT_ROTATION( l_U1457[l_U799], l_U1436[l_U799]._fU0, l_U1436[l_U799]._fU4, l_U1436[l_U799]._fU8 );
        }
    }
    for ( l_U799 = 0; l_U799 < 6; l_U799++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U1757[l_U799] )))
        {
            if (NOT (l_U799 == 0))
            {
                if (l_U799 == 5)
                {
                    CREATE_CAR( 1337041428, l_U2161[l_U799]._fU0, l_U2161[l_U799]._fU4, l_U2161[l_U799]._fU8, ref l_U1757[l_U799], 1 );
                }
                else
                {
                    CREATE_CAR( -1758379524, l_U2161[l_U799]._fU0, l_U2161[l_U799]._fU4, l_U2161[l_U799]._fU8, ref l_U1757[l_U799], 1 );
                }
                SET_CAR_HEADING( l_U1757[l_U799], l_U2180[l_U799] );
                SET_CAR_COORDINATES( l_U1757[l_U799], l_U2161[l_U799]._fU0, l_U2161[l_U799]._fU4, l_U2161[l_U799]._fU8 );
                LOCK_CAR_DOORS( l_U1757[l_U799], 2 );
                if (NOT (l_U799 == 1))
                {
                    SET_CAR_PROOFS( l_U1757[l_U799], 1, 1, 1, 1, 1 );
                }
            }
        }
    }
    if (NOT (DOES_OBJECT_EXIST( l_U2150[2] )))
    {
        CREATE_OBJECT( 469507247, 729.57020000, 52.65040000, 6.92800000, ref l_U2150[2], 0 );
        SET_OBJECT_COORDINATES( l_U2150[2], 729.57020000, 52.65040000, 6.92800000 );
        SET_OBJECT_ROTATION( l_U2150[2], 0.00000000, 0.00000000, 13.00000000 );
        FREEZE_OBJECT_POSITION( l_U2150[2], 1 );
    }
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (NOT (DOES_OBJECT_EXIST( l_U2229[l_U799] )))
        {
            CREATE_OBJECT( 2142893183, vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, ref l_U2229[l_U799], 0 );
            SET_OBJECT_COORDINATES( l_U2229[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8 );
            SET_OBJECT_ROTATION( l_U2229[l_U799], vVar9[l_U799]._fU0, vVar9[l_U799]._fU4, vVar9[l_U799]._fU8 );
            FREEZE_OBJECT_POSITION( l_U2229[l_U799], 1 );
        }
    }
    return;
}

void sub_48777()
{
    if (DOES_BLIP_EXIST( l_U980 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U980 );
    }
    return;
}

void sub_48822()
{
    vector vVar2;
    unknown uVar5;

    vVar2 = {703.21840000, 111.94050000, 5.01580000};
    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING_OUT())
        {
            SET_PLAYER_CONTROL( sub_20771(), 0 );
            DO_SCREEN_FADE_OUT_UNHACKED( 2500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( sub_7291() );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_7291() )))
        {
            SET_CHAR_HEADING( sub_7291(), l_U1166 );
            SET_CHAR_COORDINATES( sub_7291(), l_U1156._fU0, l_U1156._fU4, l_U1156._fU8 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_7291(), l_U1156._fU0, l_U1156._fU4, l_U1156._fU8 );
            SET_CHAR_HEADING( sub_7291(), l_U1166 );
        }
        for ( l_U799 = 0; l_U799 < 2; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U908[l_U799] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U908[l_U799] ))
                    {
                        CLEAR_CHAR_TASKS( l_U908[l_U799] );
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U908[l_U799], l_U1159[l_U799]._fU0, l_U1159[l_U799]._fU4, l_U1159[l_U799]._fU8 );
                        SET_CHAR_HEADING( l_U908[l_U799], l_U1167[l_U799] );
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS( l_U908[l_U799] );
                        SET_CHAR_HEADING( l_U908[l_U799], l_U1167[l_U799] );
                        SET_CHAR_COORDINATES( l_U908[l_U799], l_U1159[l_U799]._fU0, l_U1159[l_U799]._fU4, l_U1159[l_U799]._fU8 );
                    }
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[l_U799], 1 );
                }
            }
        }
        GET_CURRENT_CHAR_WEAPON( sub_7291(), ref l_U2245 );
        CLEAR_AREA( l_U1156._fU0, l_U1156._fU4, l_U1156._fU8, 250.00000000, 1 );
        LOAD_SCENE( l_U1156._fU0, l_U1156._fU4, l_U1156._fU8 );
        l_U912 = 0;
        l_U933 = 1;
        l_U796 = 0;
        l_U795 = 6;
        ALLOW_EMERGENCY_SERVICES( 0 );
        l_U1651 = 1;
    }
    return;
}

void sub_49560()
{
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U908[l_U799] ))
        {
            DELETE_CHAR( ref l_U908[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 5; l_U799++ )
    {
        if (DOES_OBJECT_EXIST( l_U964[l_U799] ))
        {
            DELETE_OBJECT( ref l_U964[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 4; l_U799++ )
    {
        if (DOES_OBJECT_EXIST( l_U1452[l_U799] ))
        {
            DELETE_OBJECT( ref l_U1452[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 5; l_U799++ )
    {
        if (DOES_OBJECT_EXIST( l_U1457[l_U799] ))
        {
            DELETE_OBJECT( ref l_U1457[l_U799] );
        }
    }
    if (DOES_OBJECT_EXIST( l_U2150[2] ))
    {
        DELETE_OBJECT( ref l_U2150[2] );
    }
    for ( l_U799 = 0; l_U799 < 6; l_U799++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1757[l_U799] ))
        {
            DELETE_CAR( ref l_U1757[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_OBJECT_EXIST( l_U2229[l_U799] ))
        {
            DELETE_OBJECT( ref l_U2229[l_U799] );
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1370299619 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1905515841 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1758379524 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1337041428 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -660479673 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1941868026 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 469507247 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 2142893183 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2124071584 );
    return;
}

int sub_50222()
{
    vector[2] vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float[2] fVar9;

    if (sub_50231())
    {
        array(ref vVar2, 2);
        array(ref fVar9, 2);
        vVar2[0] = {727.76760000, 77.02390000, 4.77590000};
        vVar2[1] = {734.10890000, 79.68420000, 4.77610000};
        fVar9[0] = 124.19840000;
        fVar9[1] = 244.65350000;
        for ( l_U799 = 0; l_U799 < 4; l_U799++ )
        {
            if (NOT (DOES_VEHICLE_EXIST( l_U1764[l_U799] )))
            {
                if (NOT (l_U799 == 1))
                {
                    CREATE_CAR( -1627000575, l_U1828[l_U799]._fU0, l_U1828[l_U799]._fU4, l_U1828[l_U799]._fU8, ref l_U1764[l_U799], 1 );
                }
                else
                {
                    CREATE_CAR( 1911513875, l_U1828[l_U799]._fU0, l_U1828[l_U799]._fU4, l_U1828[l_U799]._fU8, ref l_U1764[l_U799], 1 );
                }
                SET_CAR_HEADING( l_U1764[l_U799], l_U1853[l_U799] );
                SET_CAR_COORDINATES( l_U1764[l_U799], l_U1828[l_U799]._fU0, l_U1828[l_U799]._fU4, l_U1828[l_U799]._fU8 );
                SET_CAR_ON_GROUND_PROPERLY( l_U1764[l_U799] );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1764[l_U799], 1 );
                if (l_U799 == 3)
                {
                    FREEZE_CAR_POSITION( l_U1764[l_U799], 1 );
                }
                LOCK_CAR_DOORS( l_U1764[l_U799], 3 );
            }
        }
        for ( l_U799 = 0; l_U799 < 11; l_U799++ )
        {
            if (NOT (l_U799 == 0))
            {
                if (NOT (DOES_CHAR_EXIST( l_U1769[l_U799] )))
                {
                    CREATE_CHAR( 6, -183203150, l_U1794[l_U799]._fU0, l_U1794[l_U799]._fU4, l_U1794[l_U799]._fU8, ref l_U1769[l_U799], 1 );
                    SET_CHAR_HEADING( l_U1769[l_U799], l_U1841[l_U799] );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U1769[l_U799], 26 );
                    SET_CHAR_RELATIONSHIP( l_U1769[l_U799], 1, 26 );
                    SET_CHAR_RELATIONSHIP( l_U1769[l_U799], 5, 0 );
                    SET_CHAR_DECISION_MAKER( l_U1769[l_U799], l_U984 );
                    SET_COMBAT_DECISION_MAKER( l_U1769[l_U799], l_U985 );
                    SET_SENSE_RANGE( l_U1769[l_U799], 120.00000000 );
                    GIVE_WEAPON_TO_CHAR( l_U1769[l_U799], l_U974, 300, 0 );
                    SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( l_U1769[l_U799], 0 );
                    SET_CHAR_ACCURACY( l_U1769[l_U799], 45 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U1769[l_U799], 0 );
                    SET_CHAR_AS_ENEMY( l_U1769[l_U799], 1 );
                    SET_PED_DIES_WHEN_INJURED( l_U1769[l_U799], 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1769[l_U799], 1 );
                    SET_CHAR_MAX_HEALTH( l_U1769[l_U799], 180 );
                    SET_CHAR_HEALTH( l_U1769[l_U799], 180 );
                    if (l_U799 == 0)
                    {
                        SET_CHAR_MAX_HEALTH( l_U1769[l_U799], 101 );
                        SET_CHAR_HEALTH( l_U1769[l_U799], 101 );
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[0]" );
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1769[l_U799], 1 );
                    }
                    if (l_U799 == 1)
                    {
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1769[l_U799], 1 );
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[1]" );
                    }
                    if (l_U799 == 2)
                    {
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[2]" );
                    }
                    if (l_U799 == 3)
                    {
                        SET_CHAR_MAX_HEALTH( l_U1769[l_U799], 150 );
                        SET_CHAR_HEALTH( l_U1769[l_U799], 150 );
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1769[l_U799], 1 );
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[3]" );
                    }
                    if (l_U799 == 4)
                    {
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[4]" );
                    }
                    if (l_U799 == 5)
                    {
                        SET_CHAR_IS_TARGET_PRIORITY( l_U1769[l_U799], 1 );
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[5]" );
                    }
                    if (l_U799 == 6)
                    {
                        SET_CHAR_MAX_HEALTH( l_U1769[l_U799], 101 );
                        SET_CHAR_HEALTH( l_U1769[l_U799], 101 );
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[6]" );
                    }
                    if (l_U799 == 7)
                    {
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[7]" );
                    }
                    if (l_U799 == 8)
                    {
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[8]" );
                    }
                    if (l_U799 == 9)
                    {
                        SET_CHAR_MAX_HEALTH( l_U1769[l_U799], 120 );
                        SET_CHAR_HEALTH( l_U1769[l_U799], 120 );
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[9]" );
                    }
                    if (l_U799 == 10)
                    {
                        SET_CHAR_IS_TARGET_PRIORITY( l_U1769[l_U799], 1 );
                        SET_CHAR_MAX_HEALTH( l_U1769[l_U799], 200 );
                        SET_CHAR_HEALTH( l_U1769[l_U799], 200 );
                        SET_CHAR_DECISION_MAKER( l_U1769[l_U799], l_U996 );
                        SET_COMBAT_DECISION_MAKER( l_U1769[l_U799], l_U997 );
                        GIVE_WEAPON_TO_CHAR( l_U1769[l_U799], 15, 300, 0 );
                        SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( l_U1769[l_U799], 0 );
                        SET_CHAR_ACCURACY( l_U1769[l_U799], 8 );
                        SET_CHAR_SHOOT_RATE( l_U1769[l_U799], 15 );
                        SET_CHAR_NAME_DEBUG( l_U1769[l_U799], "piPolice[10]" );
                    }
                }
            }
        }
        for ( l_U799 = 0; l_U799 < 2; l_U799++ )
        {
            if (NOT (DOES_VEHICLE_EXIST( l_U2336[l_U799] )))
            {
                CREATE_CAR( 1911513875, vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, ref l_U2336[l_U799], 1 );
                SET_CAR_COORDINATES( l_U2336[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8 );
                SET_CAR_HEADING( l_U2336[l_U799], fVar9[l_U799] );
                SET_CAR_ON_GROUND_PROPERLY( l_U2336[l_U799] );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2336[l_U799], 1 );
                FREEZE_CAR_POSITION( l_U2336[l_U799], 1 );
                LOCK_CAR_DOORS( l_U2336[l_U799], 3 );
            }
        }
        if (NOT (IS_CAR_DEAD( l_U1764[2] )))
        {
            SET_SIREN_WITH_NO_DRIVER( l_U1764[2], 1 );
            SWITCH_CAR_SIREN( l_U1764[2], 1 );
        }
        return 1;
        break;
    }
    return 0;
}

int sub_50231()
{
    if (NOT l_U948[1])
    {
        REQUEST_MODEL( -183203150 );
        REQUEST_MODEL( -1627000575 );
        REQUEST_MODEL( 1911513875 );
        l_U948[1] = 1;
    }
    if (((HAS_MODEL_LOADED( -183203150 )) AND (HAS_MODEL_LOADED( -1627000575 ))) AND (HAS_MODEL_LOADED( 1911513875 )))
    {
        return 1;
    }
    return 0;
}

void sub_52628()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    CLEAR_WANTED_LEVEL( sub_20771() );
    SET_MAX_WANTED_LEVEL( 0 );
    g_U10983 = 0;
    if (iVar2 < 3)
    {
        iVar2 = 3;
    }
    SET_FAKE_WANTED_LEVEL( iVar2 );
    SET_WANTED_MULTIPLIER( 0 );
    GET_CHAR_COORDINATES( sub_7291(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    uVar3._fU8 = 0;
    if (iVar2 == 3)
    {
        SET_FAKE_WANTED_CIRCLE( uVar3._fU0, uVar3._fU4, 300 );
    }
    else if (iVar2 == 4)
    {
        SET_FAKE_WANTED_CIRCLE( uVar3._fU0, uVar3._fU4, 420 );
    }
    else if (iVar2 == 5)
    {
        SET_FAKE_WANTED_CIRCLE( uVar3._fU0, uVar3._fU4, 650 );
    }
    else if (iVar2 == 6)
    {
        SET_FAKE_WANTED_CIRCLE( uVar3._fU0, uVar3._fU4, 850 );
    };;;;
    return;
}

void sub_52855()
{
    vector[21] vVar2;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
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
    float[21] fVar66;

    array(ref vVar2, 21);
    array(ref fVar66, 21);
    vVar2[0] = {705.30130000, 76.18830000, 4.97130000};
    vVar2[1] = {700.88240000, 75.17830000, 4.97110000};
    vVar2[2] = {696.41380000, 73.88300000, 4.97090000};
    vVar2[3] = {705.55830000, 75.22210000, 4.97120000};
    vVar2[4] = {701.10440000, 74.01140000, 4.97100000};
    vVar2[5] = {696.75980000, 72.75140000, 4.97080000};
    vVar2[6] = {706.33660000, 72.85440000, 4.96970000};
    vVar2[7] = {701.73230000, 71.80940000, 4.96970000};
    vVar2[8] = {697.43550000, 70.26750000, 4.96970000};
    vVar2[9] = {697.81760000, 68.73240000, 4.96970000};
    vVar2[10] = {702.31340000, 70.14150000, 4.96970000};
    vVar2[11] = {706.53800000, 70.92690000, 4.96970000};
    vVar2[12] = {708.33220000, 64.94350000, 4.96970000};
    vVar2[13] = {699.56970000, 62.22450000, 6.13550000};
    vVar2[14] = {699.84030000, 61.26580000, 6.30190000};
    vVar2[15] = {708.65530000, 63.50160000, 4.96970000};
    vVar2[16] = {709.56210000, 60.88900000, 4.96970000};
    vVar2[17] = {700.35290000, 59.37890000, 5.28730000};
    vVar2[18] = {700.92940000, 57.28940000, 4.96970000};
    vVar2[19] = {709.66410000, 59.75760000, 4.96970000};
    vVar2[20] = {745.79090000, 68.06550000, 4.92880000};
    fVar66[0] = 195.70300000;
    fVar66[1] = 191.93140000;
    fVar66[2] = 197.40220000;
    fVar66[3] = 17.50560000;
    fVar66[4] = 11.93610000;
    fVar66[5] = 31.48860000;
    fVar66[6] = 181.36840000;
    fVar66[7] = 188.98550000;
    fVar66[8] = 196.32180000;
    fVar66[9] = 14.51020000;
    fVar66[10] = 15.73220000;
    fVar66[11] = 4.70700000;
    fVar66[12] = 203.08830000;
    fVar66[13] = 189.58280000;
    fVar66[14] = 13.28540000;
    fVar66[15] = 10.69690000;
    fVar66[16] = 188.81220000;
    fVar66[17] = 241.14660000;
    fVar66[18] = 22.60570000;
    fVar66[19] = 39.53580000;
    fVar66[20] = 279.53340000;
    for ( l_U799 = 0; l_U799 < 21; l_U799++ )
    {
        if (NOT (l_U799 == 20))
        {
            ADD_COVER_POINT( vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 3, fVar66[l_U799], 3, 0, ref l_U1652[l_U799] );
        }
        else
        {
            ADD_COVER_POINT( vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 0, fVar66[l_U799], 3, 0, ref l_U1652[l_U799] );
        }
    }
    return;
}

void sub_54460()
{
    sub_54469();
    sub_54503();
    return;
}

void sub_54469()
{
    g_U43513 = GET_INT_STAT( 289 );
    return;
}

void sub_54503()
{
    RESET_LOCAL_PLAYER_WEAPON_STAT( 21, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 21, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 29, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 29, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 30, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 30, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 31, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 31, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 32, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 32, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 33, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 33, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 34, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 34, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 35, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 35, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 36, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 36, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 37, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 37, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 39, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 39, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 40, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 40, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 14, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 14, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 7, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 7, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 9, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 9, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 12, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 12, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 13, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 13, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 15, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 15, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 10, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 10, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 11, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 11, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 4, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 4, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 5, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 5, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 18, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 18, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 16, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 16, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 17, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 17, 1 );
    return;
}

void sub_55021()
{
    if (sub_55030() >= g_U43138[g_U43137]._fU16)
    {
        g_U43566 = 1;
    }
    else
    {
        g_U43566 = 0;
    }
    if (g_U43603 == 1)
    {
        g_U43614 = sub_55174();
        g_U43603 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_55030() > g_U43614)
            {
                g_U43578 = 1;
            }
            else
            {
                g_U43578 = 0;
            }
        }
        else
        {
            g_U43578 = 0;
        }
    }
    else
    {
        g_U43578 = 0;
    }
    if (g_U43137 != 15)
    {
        if (sub_55795() >= g_U43138[g_U43137]._fU20)
        {
            g_U43567 = 1;
        }
        else
        {
            g_U43567 = 0;
        }
        if (g_U43604 == 1)
        {
            g_U43616 = sub_57336();
            g_U43604 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (sub_55795() > g_U43616)
                {
                    g_U43579 = 1;
                }
                else
                {
                    g_U43579 = 0;
                }
            }
            else
            {
                g_U43579 = 0;
            }
        }
        else
        {
            g_U43579 = 0;
        }
    }
    if (g_U43137 == 15)
    {
        if (((g_U43523[9] + g_U43523[10]) / 2) >= g_U43138[g_U43137]._fU20)
        {
            g_U43567 = 1;
        }
        else
        {
            g_U43567 = 0;
        }
        if (g_U43604 == 1)
        {
            g_U43616 = sub_57336();
            g_U43604 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (((g_U43523[9] + g_U43523[10]) / 2) > g_U43616)
                {
                    g_U43579 = 1;
                }
                else
                {
                    g_U43579 = 0;
                }
            }
            else
            {
                g_U43579 = 0;
            }
        }
        else
        {
            g_U43579 = 0;
        }
    }
    return;
}

void sub_55030()
{
    g_U43514 = GET_INT_STAT( 289 );
    g_U43515 = g_U43514 - g_U43513;
    if (g_U43515 < 0)
    {
        g_U43515 = 0;
    }
    return g_U43515;
}

int sub_55174()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 485 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 551 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 527 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 569 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 574 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 584 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 600 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 606 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 521 );
    }
    return 0;
}

void sub_55795()
{
    unknown uVar2;
    unknown uVar3;
    float fVar4;
    int iVar5;
    int I;

    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 29, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 29, 1 ) );
    g_U43523[1] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 30, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 30, 1 ) );
    g_U43523[2] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 31, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 31, 1 ) );
    g_U43523[3] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 32, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 32, 1 ) );
    g_U43523[4] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 33, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 33, 1 ) );
    g_U43523[5] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 34, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 34, 1 ) );
    g_U43523[6] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 35, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 35, 1 ) );
    g_U43523[7] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 37, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 37, 1 ) );
    g_U43523[9] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 39, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 39, 1 ) );
    g_U43523[10] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 40, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 40, 1 ) );
    g_U43523[11] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 14, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 14, 1 ) );
    g_U43523[12] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 7, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 7, 1 ) );
    g_U43523[13] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 9, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 9, 1 ) );
    g_U43523[14] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 12, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 12, 1 ) );
    g_U43523[15] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 13, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 13, 1 ) );
    g_U43523[16] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 15, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 15, 1 ) );
    g_U43523[17] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 10, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 10, 1 ) );
    g_U43523[18] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 11, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 11, 1 ) );
    g_U43523[19] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 18, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 18, 1 ) );
    g_U43523[22] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 16, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 16, 1 ) );
    g_U43523[23] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 17, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 17, 1 ) );
    g_U43523[24] = (uVar3 / uVar2) * 100;
    fVar4 = 0.00000000;
    iVar5 = 0;
    for ( I = 0; I <= 24; I++ )
    {
        if (g_U43523[I] > 0)
        {
            if (g_U43523[I] != g_U43523[0])
            {
                if (g_U43523[I] != g_U43523[8])
                {
                    if (g_U43523[I] != g_U43523[20])
                    {
                        if (g_U43523[I] != g_U43523[21])
                        {
                            fVar4 += g_U43523[I];
                            iVar5++;
                        }
                    }
                }
            }
        }
    }
    fVar4 /= iVar5;
    g_U43516 = FLOOR( fVar4 );
    if (g_U43516 > 100)
    {
        g_U43516 = 100;
    }
    if (g_U43516 < 0)
    {
        g_U43516 = 0;
    }
    return g_U43516;
}

int sub_57336()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 480 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 486 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 552 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 528 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 570 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 575 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 585 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 593 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 601 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 607 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 522 );
    }
    return 0;
}

void sub_58479()
{
    unknown uVar2;

    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_7291(), 729.85270000, 55.17620000, 4.94480000, 40.00000000, 40.00000000, 10.00000000, 0 )))
    {
        GET_GAME_VIEWPORT_ID( ref uVar2 );
        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar2, 729.85270000, 55.17620000, 4.94480000, 2.00000000 )))
        {
            CLEAR_AREA( 729.85270000, 55.17620000, 4.94480000, 20.00000000, 0 );
        }
    }
    else if (NOT l_U939)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_7291(), ref l_U1046 );
        }
        if (DOES_VEHICLE_EXIST( l_U1046 ))
        {
            if (IS_VEH_DRIVEABLE( l_U1046 ))
            {
                if (LOCATE_CAR_3D( l_U1046, 729.85270000, 55.17620000, 4.94480000, 10.00000000, 10.00000000, 10.00000000, 0 ))
                {
                    if (NOT (sub_3725( l_U1712 )))
                    {
                        sub_21601( "E2F1BAU" );
                        sub_21664( "E2F1_WEIRD", ref l_U1700, 6, 1 );
                        l_U939 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_58811()
{
    if (DOES_CHAR_EXIST( l_U1769[6] ))
    {
        if (NOT (IS_CHAR_DEAD( l_U1769[6] )))
        {
            GET_GAME_TIMER( ref l_U1873 );
            l_U1874 = l_U1873 - l_U1872;
            if (l_U1874 > 4000)
            {
                SET_CHAR_HEALTH( l_U1769[6], 50 );
            }
        }
    }
    if (NOT l_U1596)
    {
        l_U1874 = l_U1873 - l_U1872;
        if (l_U1874 > 4000)
        {
            TRIGGER_POLICE_REPORT( "BH02_CORNER_KIDS_SCANNER_01" );
            l_U1596 = 1;
        }
    }
    if (DOES_CHAR_EXIST( l_U1769[3] ))
    {
        if (IS_CHAR_INJURED( l_U1769[3] ))
        {
            if (DOES_CHAR_EXIST( l_U1769[4] ))
            {
                if (IS_CHAR_INJURED( l_U1769[4] ))
                {
                    if (DOES_CHAR_EXIST( l_U1769[0] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U1769[0] )))
                        {
                            SET_CHAR_HEALTH( l_U1769[0], 1 );
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U1769[5] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U1769[5] )))
                        {
                            SET_CHAR_HEALTH( l_U1769[5], 50 );
                        }
                    }
                }
            }
        }
    }
    for ( l_U799 = 0; l_U799 < 11; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U1769[l_U799] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U1769[l_U799] )))
            {
                if (l_U799 == 10)
                {
                    sub_59306( l_U1769[l_U799], 199, ref l_U1858[10], 18.00000000 );
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U1769[l_U799], 716.53900000, 83.34640000, 16.66470000, 1.50000000, 1.50000000, 5.00000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U1769[l_U799], 17, ref l_U1782[l_U799] );
                        if (l_U1782[l_U799] == 7)
                        {
                            TASK_GO_STRAIGHT_TO_COORD( l_U1769[l_U799], 716.53900000, 83.34640000, 16.66470000, 3, -2 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U1769[l_U799], 91, ref l_U1782[l_U799] );
                        if (l_U1782[l_U799] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1769[l_U799], 0 );
                            TASK_COMBAT( l_U1769[l_U799], sub_7291() );
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U1769[l_U799], 113, ref l_U1782[l_U799] );
                    if (l_U1782[l_U799] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1769[l_U799], 0 );
                        TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U1769[l_U799], l_U1794[l_U799], l_U1841[l_U799], 0.00000000, -2, l_U1794[l_U799], 2.00000000 );
                    }
                }
            }
        }
    }
    return;
}

void sub_59306(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            GET_CHAR_HEALTH( uParam0, ref iVar6 );
            if (iVar6 < iParam1)
            {
                if (NOT (uParam2^))
                {
                    vVar7 = {sub_59380( sub_7291(), uParam0 )};
                    vVar7 = {vVar7 * -1.00000000};
                    uVar10 = {vVar7};
                    if (uVar10._fU0 > 50.00000000)
                    {
                        uVar10._fU0 = 50.00000000;
                    }
                    if (uVar10._fU0 < 0.00000000)
                    {
                        uVar10._fU0 = 0.00000000;
                    }
                    if (uVar10._fU4 > 50.00000000)
                    {
                        uVar10._fU4 = 50.00000000;
                    }
                    if (uVar10._fU4 < 0.00000000)
                    {
                        uVar10._fU4 = 0.00000000;
                    }
                    if (uVar10._fU8 > 50.00000000)
                    {
                        uVar10._fU8 = 50.00000000;
                    }
                    if (uVar10._fU8 < 0.00000000)
                    {
                        uVar10._fU8 = 0.00000000;
                    }
                    SWITCH_PED_TO_RAGDOLL_WITH_FALL( uParam0, 0, 1000, 4, vVar7, uParam3, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                    (uParam2^) = 1;
                }
            }
        }
    }
    return;
}

void sub_59380(unknown uParam0, unknown uParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    vector vVar10;
    vector vVar13;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    vVar13 = {vVar10 - vVar7};
    Result = {vVar13 / (VMAG( vVar13 ))};
    return Result;
}

void sub_60156()
{
    int iVar2;

    for ( l_U799 = 0; l_U799 < 4; l_U799++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1764[l_U799] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1764[l_U799] ))
            {
                if (l_U799 == 2)
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_7291() )))
                    {
                        if (NOT (l_U1781 > 2))
                        {
                            GET_CAR_HEALTH( l_U1764[l_U799], ref iVar2 );
                            if (iVar2 < 1000)
                            {
                                SET_CAR_HEALTH( l_U1764[l_U799], 1000 );
                            }
                            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U1764[l_U799], sub_7291() ))
                            {
                                l_U1781++;
                                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U1764[l_U799] );
                            }
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                            {
                                ;
                            }
                        }
                        EXPLODE_CAR( l_U1764[l_U799], 1, 0 );
                        l_U1781 = 99;;
                    }
                }
            }
        }
    }
    if (l_U1781 == 99)
    {
        if (NOT (IS_CHAR_INJURED( l_U908[0] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                ;
            }
        }
    }
    return;
}

void sub_60544()
{
    sub_60553();
    if (DOES_CHAR_EXIST( l_U908[0] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[0] )))
        {
            if (IS_PED_IN_GROUP( l_U908[0] ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U908[0] );
            }
            if (l_U1870 == 0)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 708.52450000, 101.44490000, 5.01820000, 2.00000000, 2.00000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1769[0] )))
                    {
                        l_U1871 = l_U1769[0];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[1] )))
                    {
                        l_U1871 = l_U1769[1];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[3] )))
                    {
                        l_U1871 = l_U1769[3];
                    }
                    else
                    {
                        l_U2232[0] = 1;
                    };;;
                    if (NOT l_U2232[0])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 33, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[0], 708.52450000, 101.44490000, 5.01820000, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                            SET_CHAR_ACCURACY( l_U908[0], 40 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 47, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[0], 708.52450000, 101.44490000, 5.01820000, 3, 1.00000000, 1.00000000, 0, 706.18910000, 52.40740000, 4.96970000, 1 );
                            SET_CHAR_ACCURACY( l_U908[0], 40 );
                        }
                    }
                }
                else
                {
                    l_U2232[0] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 29, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[0], 708.52450000, 101.44490000, 5.01820000, 0.40000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 708.52450000, 101.44490000, 5.01820000, 712.89890000, 83.07610000, 4.97220000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
            if (l_U1870 == 1)
            {
                if (NOT l_U2333[0])
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 706.85740000, 92.10830000, 5.00050000, 2.00000000, 2.00000000, 3.00000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 27, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[0], 706.85740000, 92.10830000, 5.00050000, 3, -2, 1.00000000 );
                            EXTINGUISH_FIRE_AT_POINT( 708.00000000, 92.00000000, 9.00000000, 7.00000000 );
                        }
                    }
                    else
                    {
                        l_U2333[0] = 1;
                    }
                }
                else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 702.02120000, 92.52860000, 4.99720000, 2.00000000, 2.00000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1769[7] )))
                    {
                        l_U1871 = l_U1769[7];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[8] )))
                    {
                        l_U1871 = l_U1769[8];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[9] )))
                    {
                        l_U1871 = l_U1769[9];
                    }
                    else
                    {
                        l_U2232[0] = 1;
                    };;;
                    if (NOT l_U2232[0])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 33, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            EXTINGUISH_FIRE_AT_POINT( 708.00000000, 92.00000000, 6.00000000, 7.00000000 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[0], 702.02120000, 92.52860000, 4.99720000, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 47, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            EXTINGUISH_FIRE_AT_POINT( 708.00000000, 92.00000000, 6.00000000, 7.00000000 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[0], 702.02120000, 92.52860000, 4.99720000, 3, 1.00000000, 2.00000000, 0, 706.18910000, 52.40740000, 4.96970000, 1 );
                        }
                    }
                }
                else
                {
                    l_U2232[0] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 29, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[0], 702.02120000, 92.52860000, 4.99720000, 1.20000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 702.02120000, 92.52860000, 4.99720000, 699.98300000, 67.81120000, 4.96970000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
            if (l_U1870 == 2)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 1.50000000, 1.50000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1769[7] )))
                    {
                        l_U1871 = l_U1769[7];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[8] )))
                    {
                        l_U1871 = l_U1769[8];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[9] )))
                    {
                        l_U1871 = l_U1769[9];
                    }
                    else
                    {
                        l_U2232[0] = 1;
                    };;;
                    if (NOT l_U2232[0])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 33, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 47, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 3, 1.00000000, 1.00000000, 0, 706.18910000, 52.40740000, 4.96970000, 1 );
                        }
                    }
                }
                else
                {
                    l_U2232[0] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 29, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 1.00000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 711.43040000, 51.34490000, 4.96970000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
        }
    }
    return;
}

void sub_60553()
{
    vector[2] vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    vector[2] vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    vector[2] vVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    vector[2] vVar23;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    vector[2] vVar30;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    vector[2] vVar37;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    vector[2] vVar44;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;

    array(ref vVar2, 2);
    array(ref vVar9, 2);
    array(ref vVar16, 2);
    array(ref vVar23, 2);
    array(ref vVar30, 2);
    array(ref vVar37, 2);
    array(ref vVar44, 2);
    vVar2[0] = {707.09610000, 85.00050000, 4.97471000};
    vVar2[1] = {705.94450000, 84.59140000, 4.97370000};
    vVar9[0] = {703.08060000, 79.54660000, 4.97100000};
    vVar9[1] = {710.01710000, 77.49390000, 4.97150000};
    vVar16[0] = {701.74980000, 71.83930000, 4.96970000};
    vVar16[1] = {706.34840000, 72.32360000, 4.96970000};
    vVar23[0] = {708.21430000, 64.92160000, 4.96970000};
    vVar23[1] = {704.06290000, 63.47710000, 4.96970000};
    vVar30[0] = {699.22690000, 81.21900000, 4.97150000};
    vVar30[1] = {700.57340000, 81.60620000, 4.97160000};
    vVar37[0] = {699.99770000, 81.40140000, 4.97150000};
    vVar37[1] = {692.06750000, 72.63740000, 4.97070000};
    vVar44[0] = {697.27800000, 70.47690000, 4.96970000};
    vVar44[1] = {693.06430000, 68.76360000, 4.96970000};
    if (l_U795 == 8)
    {
        if (l_U1870 == 2)
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar2[0]._fU0, vVar2[0]._fU4, vVar2[0]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2340 = {vVar2[1]};
            }
            else if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar2[1]._fU0, vVar2[1]._fU4, vVar2[1]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2340 = {vVar9[0]};
            }
            else
            {
                l_U2340 = {vVar2[0]};
            }
            if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar30[0]._fU0, vVar30[0]._fU4, vVar30[0]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2343 = {vVar30[1]};
            }
            else if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar30[1]._fU0, vVar30[1]._fU4, vVar30[1]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2343 = {vVar37[0]};
            }
            else
            {
                l_U2343 = {vVar30[0]};
            }
        }
    }
    if (l_U795 == 9)
    {
        if (l_U1973 == 0)
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar9[0]._fU0, vVar9[0]._fU4, vVar9[0]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2340 = {vVar9[1]};
            }
            else if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar9[1]._fU0, vVar9[1]._fU4, vVar9[1]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2340 = {vVar9[0]};
            }
            else
            {
                l_U2340 = {vVar9[0]};
            }
            if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar37[0]._fU0, vVar37[0]._fU4, vVar37[0]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2343 = {vVar37[1]};
            }
            else if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar37[1]._fU0, vVar37[1]._fU4, vVar37[1]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2343 = {vVar37[0]};
            }
            else
            {
                l_U2343 = {vVar37[0]};
            }
        }
        if (l_U1973 == 1)
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar16[0]._fU0, vVar16[0]._fU4, vVar16[0]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2340 = {vVar16[1]};
            }
            else if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar16[1]._fU0, vVar16[1]._fU4, vVar16[1]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2340 = {vVar16[0]};
            }
            else
            {
                l_U2340 = {vVar16[0]};
            }
            if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar44[0]._fU0, vVar44[0]._fU4, vVar44[0]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2343 = {vVar44[1]};
            }
            else if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar44[1]._fU0, vVar44[1]._fU4, vVar44[1]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2343 = {vVar44[0]};
            }
            else
            {
                l_U2343 = {vVar44[0]};
            }
        }
        if (l_U1973 == 2)
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar23[0]._fU0, vVar23[0]._fU4, vVar23[0]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2340 = {vVar16[1]};
            }
            else if (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), vVar23[1]._fU0, vVar23[1]._fU4, vVar23[1]._fU8, 0.75000000, 0.75000000, 3.00000000, 0 ))
            {
                l_U2340 = {vVar23[0]};
            }
            else
            {
                l_U2340 = {vVar23[0]};
            }
        }
    }
    return;
}

void sub_64441()
{
    sub_60553();
    if (DOES_CHAR_EXIST( l_U908[1] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[1] )))
        {
            if (IS_PED_IN_GROUP( l_U908[1] ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U908[1] );
            }
            if (l_U1870 == 0)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 705.92850000, 100.67880000, 5.01640000, 2.00000000, 2.00000000, 5.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1769[0] )))
                    {
                        l_U1871 = l_U1769[0];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[1] )))
                    {
                        l_U1871 = l_U1769[1];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[3] )))
                    {
                        l_U1871 = l_U1769[3];
                    }
                    else
                    {
                        l_U2232[1] = 1;
                    };;;
                    if (NOT l_U2232[1])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 17, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_STRAIGHT_TO_COORD( l_U908[1], 705.92850000, 100.67880000, 5.01640000, 3, -2 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 17, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_STRAIGHT_TO_COORD( l_U908[1], 705.92850000, 100.67880000, 5.01640000, 3, -2 );
                        }
                    }
                }
                else
                {
                    l_U2232[1] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[1], 705.92850000, 100.67880000, 5.01640000, 0.50000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 705.92850000, 100.67880000, 5.01640000, 700.50010000, 80.29450000, 4.97150000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
            if (l_U1870 == 1)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 700.91630000, 93.39170000, 4.99780000, 2.00000000, 2.00000000, 5.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1769[7] )))
                    {
                        l_U1871 = l_U1769[7];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[8] )))
                    {
                        l_U1871 = l_U1769[8];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[9] )))
                    {
                        l_U1871 = l_U1769[9];
                    }
                    else
                    {
                        l_U2232[1] = 1;
                    };;;
                    if (NOT l_U2232[1])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 33, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[1], 700.91630000, 93.39170000, 4.99780000, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 47, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[1], 700.91630000, 93.39170000, 4.99780000, 3, 1.00000000, 1.00000000, 0, 706.18910000, 52.40740000, 4.96970000, 1 );
                        }
                    }
                }
                else
                {
                    l_U2232[1] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[1], 700.91630000, 93.39170000, 4.99780000, 1.00000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 700.91630000, 93.39170000, 4.99780000, 704.54270000, 52.37620000, 4.96970000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
            if (l_U1870 == 2)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 1.50000000, 1.50000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1769[7] )))
                    {
                        l_U1871 = l_U1769[7];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[8] )))
                    {
                        l_U1871 = l_U1769[8];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1769[9] )))
                    {
                        l_U1871 = l_U1769[9];
                    }
                    else
                    {
                        l_U2232[1] = 1;
                    };;;
                    if (NOT l_U2232[1])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 33, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 47, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 3, 1.00000000, 1.00000000, 0, 706.18910000, 52.40740000, 4.96970000, 1 );
                        }
                    }
                }
                else
                {
                    l_U2232[1] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 1.00000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 704.54270000, 52.37620000, 4.96970000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
        }
    }
    return;
}

void sub_66393()
{
    if (l_U1870 == 0)
    {
        if (DOES_CHAR_EXIST( l_U1769[3] ))
        {
            if (IS_CHAR_DEAD( l_U1769[3] ))
            {
                if (DOES_CHAR_EXIST( l_U1769[4] ))
                {
                    if (IS_CHAR_DEAD( l_U1769[4] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                        {
                            CLEAR_CHAR_TASKS( l_U908[0] );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                        {
                            CLEAR_CHAR_TASKS( l_U908[1] );
                        }
                        EXTINGUISH_FIRE_AT_POINT( 708.00000000, 92.00000000, 6.00000000, 7.00000000 );
                        l_U943 = 0;
                        l_U1870++;
                    }
                }
            }
        }
        if (NOT l_U943)
        {
            if (IS_CAR_DEAD( l_U1764[3] ))
            {
                EXTINGUISH_FIRE_AT_POINT( 708.00000000, 92.00000000, 6.00000000, 7.00000000 );
                l_U943 = 1;
            }
        }
        if (NOT l_U944)
        {
            if (IS_CAR_DEAD( l_U1764[2] ))
            {
                EXTINGUISH_FIRE_AT_POINT( 708.00000000, 92.00000000, 6.00000000, 7.00000000 );
                l_U944 = 1;
            }
        }
    }
    if (l_U1870 == 1)
    {
        if (DOES_CHAR_EXIST( l_U1769[1] ))
        {
            if (IS_CHAR_DEAD( l_U1769[1] ))
            {
                if (DOES_CHAR_EXIST( l_U1769[2] ))
                {
                    if (IS_CHAR_DEAD( l_U1769[2] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                        {
                            CLEAR_CHAR_TASKS( l_U908[0] );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                        {
                            CLEAR_CHAR_TASKS( l_U908[1] );
                        }
                        l_U1870++;
                    }
                }
            }
        }
        if (NOT l_U943)
        {
            if (IS_CAR_DEAD( l_U1764[3] ))
            {
                EXTINGUISH_FIRE_AT_POINT( 708.00000000, 92.00000000, 6.00000000, 7.00000000 );
                l_U943 = 1;
            }
        }
        if (NOT l_U944)
        {
            if (IS_CAR_DEAD( l_U1764[2] ))
            {
                EXTINGUISH_FIRE_AT_POINT( 708.00000000, 92.00000000, 6.00000000, 7.00000000 );
                l_U944 = 1;
            }
        }
    }
    if (l_U1870 == 2)
    {
        if (DOES_CHAR_EXIST( l_U1769[7] ))
        {
            if (IS_CHAR_DEAD( l_U1769[7] ))
            {
                if (DOES_CHAR_EXIST( l_U1769[8] ))
                {
                    if (IS_CHAR_DEAD( l_U1769[8] ))
                    {
                        if (DOES_CHAR_EXIST( l_U1769[9] ))
                        {
                            if (IS_CHAR_DEAD( l_U1769[9] ))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U908[0] );
                                }
                                if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U908[1] );
                                }
                                l_U2232[0] = 0;
                                l_U2232[1] = 0;
                                l_U795 = 9;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_67279()
{
    for ( l_U799 = 0; l_U799 < 11; l_U799++ )
    {
        if (NOT (l_U799 == 10))
        {
            if (DOES_CHAR_EXIST( l_U1769[l_U799] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U1769[l_U799] )))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U1875[l_U799] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U1769[l_U799], ref l_U1875[l_U799] );
                        SET_BLIP_AS_FRIENDLY( l_U1875[l_U799], 0 );
                        CHANGE_BLIP_SCALE( l_U1875[l_U799], 0.50000000 );
                        CHANGE_BLIP_DISPLAY( l_U1875[l_U799], 2 );
                    }
                }
                else if (DOES_BLIP_EXIST( l_U1875[l_U799] ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U1875[l_U799] );
                }
            }
        }
    }
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U908[l_U799] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U981[l_U799] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U908[l_U799], ref l_U981[l_U799] );
                    SET_BLIP_AS_FRIENDLY( l_U981[l_U799], 1 );
                    CHANGE_BLIP_SCALE( l_U981[l_U799], 0.50000000 );
                    CHANGE_BLIP_DISPLAY( l_U981[l_U799], 2 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U981[l_U799] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U981[l_U799] );
            }
        }
    }
    if (NOT l_U2301)
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (sub_3725( l_U1718 )))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    GET_GAME_TIMER( ref l_U811[0] );
                    l_U814[0] = l_U811[0] - l_U808[0];
                    if (l_U814[0] > 500)
                    {
                        sub_21664( "E2F1_ASHT", ref l_U1718, 6, 1 );
                        l_U2301 = 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U808[0] );
                }
            }
        }
    }
    if (l_U2301)
    {
        if (NOT (sub_3725( l_U1718 )))
        {
            if (NOT l_U2187)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    PRINT_NOW( "F1_Z1", 7500, 1 );
                    l_U2187 = 1;
                }
            }
        }
    }
    return;
}

void sub_68042()
{
    if (DOES_CHAR_EXIST( l_U908[0] ))
    {
        if (IS_CHAR_INJURED( l_U908[0] ))
        {
            if (sub_3725( l_U1718 ))
            {
                sub_3909( ref l_U1718, 0 );
            }
            if (sub_3725( l_U1712 ))
            {
                sub_3909( ref l_U1712, 0 );
            }
            if (sub_3725( l_U1724 ))
            {
                sub_3909( ref l_U1724, 0 );
            }
            if (sub_3725( l_U1682 ))
            {
                sub_3909( ref l_U1682, 0 );
            }
            if (sub_3725( l_U1742 ))
            {
                sub_3909( ref l_U1742, 0 );
            }
            l_U820 = 2;
            sub_68227();
        }
    }
    if (DOES_CHAR_EXIST( l_U908[1] ))
    {
        if (IS_CHAR_INJURED( l_U908[1] ))
        {
            if (sub_3725( l_U1718 ))
            {
                sub_3909( ref l_U1718, 0 );
            }
            if (sub_3725( l_U1712 ))
            {
                sub_3909( ref l_U1712, 0 );
            }
            if (sub_3725( l_U1724 ))
            {
                sub_3909( ref l_U1724, 0 );
            }
            if (sub_3725( l_U1682 ))
            {
                sub_3909( ref l_U1682, 0 );
            }
            if (sub_3725( l_U1742 ))
            {
                sub_3909( ref l_U1742, 0 );
            }
            l_U820 = 3;
            sub_68227();
        }
    }
    if (l_U1674 == 0)
    {
        if (DOES_BLIP_EXIST( l_U981[0] ))
        {
            CHANGE_BLIP_SCALE( l_U981[0], 0.50000000 );
        }
        if (DOES_BLIP_EXIST( l_U981[1] ))
        {
            CHANGE_BLIP_SCALE( l_U981[1], 0.50000000 );
        }
        l_U1675[0] = 0;
    }
    if (l_U1674 == 0)
    {
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), l_U908[0], 30.00000000, 30.00000000, 30.00000000, 0 )))
                {
                    l_U1674 = 1;
                }
                else
                {
                    l_U1674 = 0;
                }
            }
        }
    }
    if (l_U1674 == 0)
    {
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), l_U908[1], 30.00000000, 30.00000000, 30.00000000, 0 )))
                {
                    l_U1674 = 1;
                }
                else
                {
                    l_U1674 = 0;
                }
            }
        }
    }
    if (l_U1674 == 1)
    {
        if (NOT l_U1675[0])
        {
            if (sub_3725( l_U1718 ))
            {
                sub_3909( ref l_U1718, 0 );
            }
            if (sub_3725( l_U1712 ))
            {
                sub_3909( ref l_U1712, 0 );
            }
            if (sub_3725( l_U1724 ))
            {
                sub_3909( ref l_U1724, 0 );
            }
            if (sub_3725( l_U1682 ))
            {
                sub_3909( ref l_U1682, 0 );
            }
            if (sub_3725( l_U1742 ))
            {
                sub_3909( ref l_U1742, 0 );
            }
            if (IS_MESSAGE_BEING_DISPLAYED())
            {
                CLEAR_PRINTS();
            }
            sub_21601( "E2F1AUD" );
            sub_21664( "E2F1_LGO", ref l_U1718, 6, 1 );
            l_U1675[0] = 1;
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                if (DOES_BLIP_EXIST( l_U981[0] ))
                {
                    CHANGE_BLIP_SCALE( l_U981[0], 1.00000000 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                if (DOES_BLIP_EXIST( l_U981[1] ))
                {
                    CHANGE_BLIP_SCALE( l_U981[1], 1.00000000 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                if (DOES_CHAR_EXIST( l_U908[1] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), l_U908[0], 25.00000000, 25.00000000, 25.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), l_U908[1], 25.00000000, 25.00000000, 25.00000000, 0 )))
                        {
                            l_U1674 = 0;
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                if (DOES_CHAR_EXIST( l_U908[1] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                    {
                        if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), l_U908[0], 60.00000000, 60.00000000, 60.00000000, 0 ))) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), l_U908[1], 60.00000000, 60.00000000, 60.00000000, 0 ))))
                        {
                            l_U1674 = 3;
                        }
                    }
                }
            }
        }
    }
    if (NOT l_U1675[1])
    {
        if (l_U1675[0])
        {
            if (NOT (sub_3725( l_U1718 )))
            {
                PRINT_NOW( "F1_BACK", 7500, 1 );
                l_U1675[1] = 1;
            }
        }
    }
    if (l_U1674 == 3)
    {
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                TASK_SMART_FLEE_CHAR( l_U908[0], sub_7291(), 300, -2 );
                SET_CHAR_KEEP_TASK( l_U908[0], 1 );
            }
        }
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                TASK_SMART_FLEE_CHAR( l_U908[1], sub_7291(), 300, -2 );
                SET_CHAR_KEEP_TASK( l_U908[1], 1 );
            }
        }
        l_U820 = 4;
        sub_68227();
    }
    return;
}

void sub_68227()
{
    unknown uVar2;

    STOP_SOUND( l_U2246 );
    sub_39947();
    if (sub_3725( l_U1742 ))
    {
        sub_3909( ref l_U1742, 0 );
    }
    if (sub_3725( l_U1706 ))
    {
        sub_3909( ref l_U1706, 0 );
    }
    if (sub_3725( l_U1718 ))
    {
        sub_3909( ref l_U1718, 0 );
    }
    if (sub_3725( l_U1712 ))
    {
        sub_3909( ref l_U1712, 0 );
    }
    if (sub_3725( l_U1724 ))
    {
        sub_3909( ref l_U1724, 0 );
    }
    if (sub_3725( l_U1730 ))
    {
        sub_3909( ref l_U1730, 0 );
    }
    if (DOES_BLIP_EXIST( l_U2331 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2331 );
    }
    if (DOES_BLIP_EXIST( l_U2198 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2198 );
    }
    if (DOES_BLIP_EXIST( l_U980 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U980 );
    }
    if (DOES_BLIP_EXIST( l_U2199 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2199 );
    }
    if (DOES_BLIP_EXIST( l_U1048 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U1048 );
    }
    if (DOES_BLIP_EXIST( l_U1047 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U1047 );
    }
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_BLIP_EXIST( l_U981[l_U799] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U981[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 11; l_U799++ )
    {
        if (DOES_BLIP_EXIST( l_U1875[l_U799] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U1875[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 8; l_U799++ )
    {
        if (DOES_BLIP_EXIST( l_U1983[l_U799] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U1983[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 12; l_U799++ )
    {
        if (DOES_BLIP_EXIST( l_U2057[l_U799] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2057[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 3; l_U799++ )
    {
        if (DOES_BLIP_EXIST( l_U2113[l_U799] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2113[l_U799] );
        }
    }
    CLEAR_PRINTS();
    if (l_U936)
    {
        if (l_U820 == 0)
        {
            PRINT_NOW( "F1_F1", 7500, 1 );
        }
    }
    if (l_U820 == 1)
    {
        PRINT_NOW( "F1_F1", 7500, 1 );
        if (l_U1651)
        {
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[0] );
                    TASK_SMART_FLEE_CHAR( l_U908[0], sub_7291(), 300.00000000, -2 );
                    SET_CHAR_KEEP_TASK( l_U908[0], 1 );
                }
                else
                {
                    sub_69164( 3, l_U908[0], 3 );
                }
            }
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[1] );
                    TASK_SMART_FLEE_CHAR( l_U908[1], sub_7291(), 300.00000000, -2 );
                    SET_CHAR_KEEP_TASK( l_U908[1], 1 );
                }
                else
                {
                    sub_69164( 7, l_U908[1], 3 );
                }
            }
            g_U10983 = 1;
            SET_FAKE_WANTED_LEVEL( 0 );
            SET_MAX_WANTED_LEVEL( 6 );
            SET_POLICE_RADAR_BLIPS( 1 );
            SET_WANTED_MULTIPLIER( 1.00000000 );
            ALTER_WANTED_LEVEL( sub_20771(), 3 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_20771() );
            sub_69460();
            l_U911 = 0;
        }
        else
        {
            sub_69164( 3, l_U908[0], 3 );
            sub_69164( 7, l_U908[1], 3 );
            sub_69460();
            l_U911 = 0;
        }
    }
    if (l_U820 == 2)
    {
        PRINT_NOW( "F1_F2", 7500, 1 );
        if (l_U1651)
        {
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[0] );
                    TASK_SMART_FLEE_CHAR( l_U908[0], sub_7291(), 300.00000000, -2 );
                    SET_CHAR_KEEP_TASK( l_U908[0], 1 );
                }
                else
                {
                    sub_69164( 3, l_U908[0], 3 );
                }
            }
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[1] );
                    TASK_SMART_FLEE_CHAR( l_U908[1], sub_7291(), 300.00000000, -2 );
                    SET_CHAR_KEEP_TASK( l_U908[1], 1 );
                }
                else
                {
                    sub_69164( 7, l_U908[1], 3 );
                }
            }
            g_U10983 = 1;
            SET_FAKE_WANTED_LEVEL( 0 );
            SET_MAX_WANTED_LEVEL( 6 );
            SET_POLICE_RADAR_BLIPS( 1 );
            SET_WANTED_MULTIPLIER( 1.00000000 );
            ALTER_WANTED_LEVEL( sub_20771(), 3 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_20771() );
            sub_69460();
            l_U911 = 0;
        }
        else
        {
            sub_69164( 3, l_U908[0], 3 );
            l_U795 = 25;
            l_U1748 = "E2F1_FAIL1";
        }
    }
    if (l_U820 == 3)
    {
        PRINT_NOW( "F1_F3", 7500, 1 );
        if (l_U1651)
        {
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[0] );
                    TASK_SMART_FLEE_CHAR( l_U908[0], sub_7291(), 300.00000000, -2 );
                    SET_CHAR_KEEP_TASK( l_U908[0], 1 );
                }
                else
                {
                    sub_69164( 3, l_U908[0], 3 );
                }
            }
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[1] );
                    TASK_SMART_FLEE_CHAR( l_U908[1], sub_7291(), 300.00000000, -2 );
                    SET_CHAR_KEEP_TASK( l_U908[1], 1 );
                }
                else
                {
                    sub_69164( 7, l_U908[1], 3 );
                }
            }
            g_U10983 = 1;
            SET_FAKE_WANTED_LEVEL( 0 );
            SET_MAX_WANTED_LEVEL( 6 );
            SET_POLICE_RADAR_BLIPS( 1 );
            SET_WANTED_MULTIPLIER( 1.00000000 );
            ALTER_WANTED_LEVEL( sub_20771(), 3 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_20771() );
            sub_69460();
            l_U911 = 0;
        }
        else
        {
            sub_69164( 7, l_U908[1], 3 );
            l_U795 = 25;
            l_U1748 = "E2F1_FAIL2";
        }
    }
    if (l_U820 == 4)
    {
        PRINT_NOW( "F1_F4", 7500, 1 );
        if (l_U1651)
        {
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[0] );
                    TASK_SMART_FLEE_CHAR( l_U908[0], sub_7291(), 300.00000000, -2 );
                    SET_CHAR_KEEP_TASK( l_U908[0], 1 );
                }
            }
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[1] );
                    TASK_SMART_FLEE_CHAR( l_U908[1], sub_7291(), 300.00000000, -2 );
                    SET_CHAR_KEEP_TASK( l_U908[1], 1 );
                }
            }
            g_U10983 = 1;
            SET_FAKE_WANTED_LEVEL( 0 );
            SET_MAX_WANTED_LEVEL( 6 );
            SET_POLICE_RADAR_BLIPS( 1 );
            SET_WANTED_MULTIPLIER( 1.00000000 );
            if (l_U1651)
            {
                ALTER_WANTED_LEVEL( sub_20771(), 3 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_20771() );
            }
            sub_69460();
            l_U911 = 0;
        }
        else
        {
            sub_69460();
            l_U911 = 0;
        }
    }
    if (l_U820 == 9)
    {
        PRINT_NOW( "F1_F9", 7500, 1 );
        if (l_U1651)
        {
            ;
        }
        else
        {
            l_U795 = 25;
            l_U1748 = "E2F1_FAIL4";
        }
    }
    if (l_U820 == 10)
    {
        PRINT_NOW( "F1_F10", 7500, 1 );
        if (l_U1651)
        {
            ;
        }
        else
        {
            l_U795 = 25;
            l_U1748 = "E2F1_FAIL3";
        }
    }
    if (l_U820 == 11)
    {
        PRINT_NOW( "F1_F11", 7500, 1 );
        if (l_U1651)
        {
            ;
        }
        else
        {
            l_U795 = 25;
            l_U1748 = "E2F1_FAIL4";
        }
    }
    return;
}

void sub_69164(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam1 )))
    {
        return;
    }
    g_U42871._fU0 = uParam0;
    g_U42871._fU4 = iParam1;
    g_U42871._fU8 = uParam2;
    g_U42871._fU12 = 0;
    if (g_U12379)
    {
        g_U42871._fU12 = 1;
    }
    return;
}

void sub_69460()
{
    int iVar2;

    iVar2 = 3;
    sub_69474( iVar2 );
    sub_2280( iVar2 );
    return;
}

void sub_69474(unknown uParam0)
{
    if (g_U12382[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_20771(), 150 );
    CLEAR_HELP();
    sub_994( uParam0 );
    return;
}

void sub_72471()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( l_U908[0] )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), l_U908[0], 25.00000000, 25.00000000, 25.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), l_U908[1], 25.00000000, 25.00000000, 25.00000000, 0 ))
                {
                    if (NOT (sub_3725( l_U1712 )))
                    {
                        if (NOT (sub_3725( l_U1718 )))
                        {
                            if (NOT (sub_3725( l_U1724 )))
                            {
                                if (NOT (sub_3725( l_U1682 )))
                                {
                                    if (NOT (sub_3725( l_U1742 )))
                                    {
                                        if (l_U2329)
                                        {
                                            GET_GAME_TIMER( ref l_U2327 );
                                            l_U2328 = l_U2327 - l_U2326;
                                            if (l_U2328 > 10000)
                                            {
                                                l_U801++;
                                                if (l_U801 == 1)
                                                {
                                                    sub_21601( "E2F1AUD" );
                                                    l_U1748 = "E2F1_CHA1";
                                                }
                                                else if (l_U801 == 2)
                                                {
                                                    sub_21601( "E2F1AUD" );
                                                    l_U1748 = "E2F1_CHA2";
                                                }
                                                else if (l_U801 == 3)
                                                {
                                                    sub_21601( "E2F1AUD" );
                                                    l_U1748 = "E2F1_CHA3";
                                                }
                                                else if (l_U801 == 4)
                                                {
                                                    sub_21601( "E2F1AUD" );
                                                    l_U1748 = "E2F1_CHA4";
                                                }
                                                else if (l_U801 == 5)
                                                {
                                                    sub_21601( "E2F1AUD" );
                                                    l_U1748 = "E2F1_CHA5";
                                                }
                                                else if (l_U801 == 6)
                                                {
                                                    sub_21601( "E2F1AUD" );
                                                    l_U1748 = "E2F1_CHA6";
                                                }
                                                else if (l_U801 == 7)
                                                {
                                                    sub_21601( "E2F1AUD" );
                                                    l_U1748 = "E2F1_CHA7";
                                                }
                                                else if (l_U801 == 8)
                                                {
                                                    sub_21601( "E2F1AUD" );
                                                    l_U1748 = "E2F1_CHA8";
                                                }
                                                else if (l_U801 == 9)
                                                {
                                                    sub_21601( "E2F1AUD" );
                                                    l_U1748 = "E2F1_CHA9";
                                                }
                                                else if (l_U801 == 10)
                                                {
                                                    sub_21601( "E2F1AUD" );
                                                    l_U1748 = "E2F1_CHA10";
                                                }
                                                else
                                                {
                                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar2 );
                                                    if (iVar2 == 0)
                                                    {
                                                        sub_21601( "E2F1BAU" );
                                                        l_U1748 = "E2F1_AATK";
                                                    }
                                                    else if (iVar2 == 1)
                                                    {
                                                        sub_21601( "E2F1BAU" );
                                                        l_U1748 = "E2F1_Hatk";
                                                    }
                                                    else if (iVar2 == 2)
                                                    {
                                                        sub_21601( "E2F1BAU" );
                                                        l_U1748 = "E2F1_LATK";
                                                    };;;
                                                };;;;;;;;;;
                                                sub_21664( l_U1748, ref l_U1742, 6, 1 );
                                                l_U2329 = 0;
                                            }
                                        }
                                    }
                                    else if (NOT l_U2329)
                                    {
                                        GET_GAME_TIMER( ref l_U2326 );
                                        l_U2329 = 1;
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

void sub_73463()
{
    if (l_U795 == 8)
    {
        for ( l_U799 = 0; l_U799 < 8; l_U799++ )
        {
            if (NOT (DOES_CHAR_EXIST( l_U1887[l_U799] )))
            {
                CREATE_CHAR( 6, -1004762946, l_U1905[l_U799]._fU0, l_U1905[l_U799]._fU4, l_U1905[l_U799]._fU8, ref l_U1887[l_U799], 1 );
                SET_CHAR_HEADING( l_U1887[l_U799], l_U1955[l_U799] );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1887[l_U799], 26 );
                SET_CHAR_RELATIONSHIP( l_U1887[l_U799], 1, 26 );
                SET_CHAR_RELATIONSHIP( l_U1887[l_U799], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U1887[l_U799], l_U984 );
                SET_COMBAT_DECISION_MAKER( l_U1887[l_U799], l_U985 );
                SET_SENSE_RANGE( l_U1887[l_U799], 120.00000000 );
                GIVE_WEAPON_TO_CHAR( l_U1887[l_U799], 13, 500, 0 );
                ADD_ARMOUR_TO_CHAR( l_U1887[l_U799], 65436 );
                SET_CHAR_MAX_HEALTH( l_U1887[l_U799], 250 );
                SET_CHAR_HEALTH( l_U1887[l_U799], 250 );
                SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( l_U1887[l_U799], 0 );
                SET_CHAR_ACCURACY( l_U1887[l_U799], 20 );
                SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U1887[l_U799], 0 );
                SET_CHAR_AS_ENEMY( l_U1887[l_U799], 1 );
                SET_PED_DIES_WHEN_INJURED( l_U1887[l_U799], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1887[l_U799], 1 );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U2332 );
                if (l_U2332 == 0)
                {
                    SET_CHAR_PROP_INDEX( l_U1887[l_U799], 0, 1 );
                }
                else if (l_U2332 == 1)
                {
                    SET_CHAR_PROP_INDEX( l_U1887[l_U799], 0, 0 );
                }
                if (l_U799 == 0)
                {
                    SET_CHAR_NAME_DEBUG( l_U1887[l_U799], "piPolZoneTwo[0]" );
                }
                if (l_U799 == 1)
                {
                    SET_CHAR_NAME_DEBUG( l_U1887[l_U799], "piPolZoneTwo[1]" );
                    SET_CHAR_MAX_HEALTH( l_U1887[l_U799], 101 );
                    SET_CHAR_HEALTH( l_U1887[l_U799], 101 );
                }
                if (l_U799 == 2)
                {
                    SET_CHAR_NAME_DEBUG( l_U1887[l_U799], "piPolZoneTwo[2]" );
                }
                if (l_U799 == 3)
                {
                    SET_CHAR_NAME_DEBUG( l_U1887[l_U799], "piPolZoneTwo[3]" );
                    SET_CHAR_MAX_HEALTH( l_U1887[l_U799], 101 );
                    SET_CHAR_HEALTH( l_U1887[l_U799], 101 );
                }
                if (l_U799 == 4)
                {
                    SET_CHAR_NAME_DEBUG( l_U1887[l_U799], "piPolZoneTwo[4]" );
                }
                if (l_U799 == 5)
                {
                    SET_CHAR_NAME_DEBUG( l_U1887[l_U799], "piPolZoneTwo[5]" );
                }
                if (l_U799 == 6)
                {
                    SET_CHAR_NAME_DEBUG( l_U1887[l_U799], "piPolZoneTwo[6]" );
                }
                if (l_U799 == 7)
                {
                    SET_CHAR_NAME_DEBUG( l_U1887[l_U799], "piPolZoneTwo[7]" );
                }
            }
        }
    }
    return;
}

void sub_74558()
{
    if (l_U795 == 8)
    {
        if (l_U1870 == 1)
        {
            l_U1974[0] = 1;
            l_U1974[1] = 1;
        }
    }
    if (l_U795 == 8)
    {
        if (l_U1870 == 2)
        {
            l_U1974[2] = 1;
            l_U1974[3] = 1;
        }
    }
    if ((l_U795 == 8) || (l_U795 == 9))
    {
        for ( l_U799 = 0; l_U799 < 8; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U1887[l_U799] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U1887[l_U799] )))
                {
                    if (l_U1974[l_U799])
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1887[l_U799], l_U1930[l_U799]._fU0, l_U1930[l_U799]._fU4, l_U1930[l_U799]._fU8, 1.00000000, 1.00000000, 3.00000000, 0 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U1887[l_U799], 33, ref l_U1896[l_U799] );
                            if (l_U1896[l_U799] == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1887[l_U799], 1 );
                                TASK_GO_TO_COORD_WHILE_SHOOTING( l_U1887[l_U799], l_U1930[l_U799]._fU0, l_U1930[l_U799]._fU4, l_U1930[l_U799]._fU8, 3, 1.00000000, 1.00000000, sub_7291(), 1 );
                            }
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U1887[l_U799], 33, ref l_U1896[l_U799] );
                            if (l_U1896[l_U799] == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1887[l_U799], 0 );
                                TASK_GO_TO_COORD_WHILE_SHOOTING( l_U1887[l_U799], l_U1930[l_U799]._fU0, l_U1930[l_U799]._fU4, l_U1930[l_U799]._fU8, 3, 1.00000000, 1.00000000, sub_7291(), 1 );
                            }
                        }
                    }
                    if (l_U799 == 4)
                    {
                        if (NOT l_U1974[4])
                        {
                            if (DOES_CHAR_EXIST( l_U1887[0] ))
                            {
                                if (IS_CHAR_DEAD( l_U1887[0] ))
                                {
                                    l_U1974[4] = 1;
                                }
                            }
                            if (sub_75226( l_U1887[4] ))
                            {
                                l_U1974[4] = 1;
                            }
                        }
                    }
                    if (l_U799 == 5)
                    {
                        if (NOT l_U1974[5])
                        {
                            if (DOES_CHAR_EXIST( l_U1887[1] ))
                            {
                                if (IS_CHAR_DEAD( l_U1887[1] ))
                                {
                                    l_U1974[5] = 1;
                                }
                            }
                            if (sub_75226( l_U1887[5] ))
                            {
                                l_U1974[5] = 1;
                            }
                        }
                    }
                    if (l_U799 == 6)
                    {
                        if (NOT l_U1974[6])
                        {
                            if (DOES_CHAR_EXIST( l_U1887[2] ))
                            {
                                if (IS_CHAR_DEAD( l_U1887[2] ))
                                {
                                    l_U1974[6] = 1;
                                }
                            }
                            if (sub_75226( l_U1887[6] ))
                            {
                                l_U1974[6] = 1;
                            }
                        }
                    }
                    if (l_U799 == 7)
                    {
                        if (NOT l_U1974[7])
                        {
                            if (DOES_CHAR_EXIST( l_U1887[3] ))
                            {
                                if (IS_CHAR_DEAD( l_U1887[3] ))
                                {
                                    l_U1974[7] = 1;
                                }
                            }
                            if (sub_75226( l_U1887[7] ))
                            {
                                l_U1974[7] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_75226(unknown uParam0)
{
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_7291(), 0 ))
            {
                return 1;
            }
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), uParam0, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                return 1;
            }
            if (IS_PLAYER_TARGETTING_CHAR( sub_20771(), uParam0 ))
            {
                return 1;
            }
            if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_20771(), uParam0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_75752()
{
    return;
}

void sub_75769()
{
    sub_60553();
    if (DOES_CHAR_EXIST( l_U908[0] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[0] )))
        {
            if (IS_PED_IN_GROUP( l_U908[0] ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U908[0] );
            }
            if (l_U1973 == 0)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 2.50000000, 2.50000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1887[7] )))
                    {
                        l_U1871 = l_U1887[7];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1887[6] )))
                    {
                        l_U1871 = l_U1887[6];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1887[5] )))
                    {
                        l_U1871 = l_U1887[5];
                    }
                    else
                    {
                        l_U2232[0] = 1;
                    };;;
                    if (NOT l_U2232[0])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 33, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                            SET_CHAR_ACCURACY( l_U908[0], 40 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 47, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 3, 1.00000000, 1.00000000, 0, 706.18910000, 52.40740000, 4.96970000, 1 );
                            SET_CHAR_ACCURACY( l_U908[0], 40 );
                        }
                    }
                }
                else
                {
                    l_U2232[0] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 113, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 0 );
                        TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 194.29590000, 0.00000000, -2, 703.08060000, 79.54660000, 4.97100000, 3.00000000 );
                        SET_CHAR_ACCURACY( l_U908[0], 40 );
                    }
                }
            }
            if (l_U1973 == 1)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 2.50000000, 2.50000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1887[7] )))
                    {
                        l_U1871 = l_U1887[7];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1887[6] )))
                    {
                        l_U1871 = l_U1887[6];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1887[5] )))
                    {
                        l_U1871 = l_U1887[5];
                    }
                    else
                    {
                        l_U2232[0] = 1;
                    };;;
                    if (NOT l_U2232[0])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 33, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                            SET_CHAR_ACCURACY( l_U908[0], 40 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 47, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 3, 1.00000000, 1.00000000, 0, 706.18910000, 52.40740000, 4.96970000, 1 );
                            SET_CHAR_ACCURACY( l_U908[0], 40 );
                        }
                    }
                }
                else
                {
                    l_U2232[0] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 113, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 0 );
                        TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 200.60650000, 0.00000000, -2, 701.74980000, 71.83930000, 4.96970000, 3.00000000 );
                        SET_CHAR_ACCURACY( l_U908[0], 40 );
                    }
                }
            }
            if (l_U1973 == 2)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 2.50000000, 2.50000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1887[7] )))
                    {
                        l_U1871 = l_U1887[7];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1887[6] )))
                    {
                        l_U1871 = l_U1887[6];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1887[5] )))
                    {
                        l_U1871 = l_U1887[5];
                    }
                    else
                    {
                        l_U2232[0] = 1;
                    };;;
                    if (NOT l_U2232[0])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 33, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                            SET_CHAR_ACCURACY( l_U908[0], 40 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 47, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 3, 1.00000000, 1.00000000, 0, 706.18910000, 52.40740000, 4.96970000, 1 );
                            SET_CHAR_ACCURACY( l_U908[0], 40 );
                        }
                    }
                }
                else
                {
                    l_U2232[0] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 113, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 0 );
                        TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U908[0], l_U2340._fU0, l_U2340._fU4, l_U2340._fU8, 187.17420000, 0.00000000, -2, 708.21430000, 64.92160000, 4.96970000, 3.00000000 );
                        SET_CHAR_ACCURACY( l_U908[0], 40 );
                    }
                }
            }
        }
    }
    return;
}

void sub_77772()
{
    sub_60553();
    if (DOES_CHAR_EXIST( l_U908[1] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[1] )))
        {
            if (IS_PED_IN_GROUP( l_U908[1] ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U908[1] );
            }
            if (l_U1973 == 0)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 2.50000000, 2.50000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1887[7] )))
                    {
                        l_U1871 = l_U1887[7];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1887[6] )))
                    {
                        l_U1871 = l_U1887[6];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1887[5] )))
                    {
                        l_U1871 = l_U1887[5];
                    }
                    else
                    {
                        l_U2232[1] = 1;
                    };;;
                    if (NOT l_U2232[1])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 33, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                            SET_CHAR_ACCURACY( l_U908[1], 40 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 47, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 3, 1.00000000, 1.00000000, 0, 706.18910000, 52.40740000, 4.96970000, 1 );
                            SET_CHAR_ACCURACY( l_U908[1], 40 );
                        }
                    }
                }
                else
                {
                    l_U2232[1] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 113, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 0 );
                        TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 191.80730000, 0.00000000, -2, 695.72240000, 77.55830000, 4.97110000, 3.00000000 );
                        SET_CHAR_ACCURACY( l_U908[1], 40 );
                    }
                }
            }
            if ((l_U1973 == 1) || (l_U1973 == 2))
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 2.50000000, 2.50000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1887[7] )))
                    {
                        l_U1871 = l_U1887[7];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1887[6] )))
                    {
                        l_U1871 = l_U1887[6];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1887[5] )))
                    {
                        l_U1871 = l_U1887[5];
                    }
                    else
                    {
                        l_U2232[1] = 1;
                    };;;
                    if (NOT l_U2232[1])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 33, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 47, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 3, 1.00000000, 1.00000000, 0, 706.18910000, 52.40740000, 4.96970000, 1 );
                        }
                    }
                }
                else
                {
                    l_U2232[1] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 113, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 0 );
                        TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U908[1], l_U2343._fU0, l_U2343._fU4, l_U2343._fU8, 230.06590000, 0.00000000, -2, 697.27800000, 70.47690000, 4.96970000, 3.00000000 );
                        SET_CHAR_ACCURACY( l_U908[1], 40 );
                    }
                }
            }
        }
    }
    return;
}

void sub_79112()
{
    if (l_U1973 == 0)
    {
        if (DOES_CHAR_EXIST( l_U1887[0] ))
        {
            if (IS_CHAR_DEAD( l_U1887[0] ))
            {
                if (DOES_CHAR_EXIST( l_U1887[1] ))
                {
                    if (IS_CHAR_DEAD( l_U1887[1] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                        {
                            CLEAR_CHAR_TASKS( l_U908[0] );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                        {
                            CLEAR_CHAR_TASKS( l_U908[1] );
                        }
                        l_U1973++;
                    }
                }
            }
        }
    }
    if (l_U1973 == 1)
    {
        if (DOES_CHAR_EXIST( l_U1887[2] ))
        {
            if (IS_CHAR_DEAD( l_U1887[2] ))
            {
                if (DOES_CHAR_EXIST( l_U1887[4] ))
                {
                    if (IS_CHAR_DEAD( l_U1887[4] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                        {
                            CLEAR_CHAR_TASKS( l_U908[0] );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                        {
                            CLEAR_CHAR_TASKS( l_U908[1] );
                        }
                        l_U1973++;
                    }
                }
            }
        }
    }
    if (l_U1973 == 2)
    {
        if (DOES_CHAR_EXIST( l_U1887[3] ))
        {
            if (IS_CHAR_DEAD( l_U1887[3] ))
            {
                if (DOES_CHAR_EXIST( l_U1887[5] ))
                {
                    if (IS_CHAR_DEAD( l_U1887[5] ))
                    {
                        if (DOES_CHAR_EXIST( l_U1887[6] ))
                        {
                            if (IS_CHAR_DEAD( l_U1887[6] ))
                            {
                                if (DOES_CHAR_EXIST( l_U1887[7] ))
                                {
                                    if (IS_CHAR_DEAD( l_U1887[7] ))
                                    {
                                        l_U2232[0] = 0;
                                        l_U2232[1] = 0;
                                        l_U795 = 15;
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

void sub_79677()
{
    for ( l_U799 = 0; l_U799 < 11; l_U799++ )
    {
        if (DOES_BLIP_EXIST( l_U1875[l_U799] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U1875[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 8; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U1887[l_U799] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1887[l_U799] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U1983[l_U799] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U1887[l_U799], ref l_U1983[l_U799] );
                    SET_BLIP_AS_FRIENDLY( l_U1983[l_U799], 0 );
                    CHANGE_BLIP_SCALE( l_U1983[l_U799], 0.50000000 );
                    CHANGE_BLIP_DISPLAY( l_U1983[l_U799], 2 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U1983[l_U799] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U1983[l_U799] );
            }
        }
    }
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U908[l_U799] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U981[l_U799] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U908[l_U799], ref l_U981[l_U799] );
                    SET_BLIP_AS_FRIENDLY( l_U981[l_U799], 1 );
                    CHANGE_BLIP_SCALE( l_U981[l_U799], 0.50000000 );
                    CHANGE_BLIP_DISPLAY( l_U981[l_U799], 2 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U981[l_U799] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U981[l_U799] );
            }
        }
    }
    return;
}

void sub_80276()
{
    if ((l_U795 == 9) || (l_U795 == 15))
    {
        if (sub_80305())
        {
            for ( l_U799 = 0; l_U799 < 4; l_U799++ )
            {
                if (l_U799 > 1)
                {
                    if (NOT (DOES_VEHICLE_EXIST( l_U2011[l_U799] )))
                    {
                        if (NOT (l_U799 == 3))
                        {
                            CREATE_CAR( -1627000575, l_U2017[l_U799]._fU0, l_U2017[l_U799]._fU4, l_U2017[l_U799]._fU8, ref l_U2011[l_U799], 1 );
                        }
                        else
                        {
                            CREATE_CAR( 1911513875, l_U2017[l_U799]._fU0, l_U2017[l_U799]._fU4, l_U2017[l_U799]._fU8, ref l_U2011[l_U799], 1 );
                        }
                        SET_CAR_COORDINATES( l_U2011[l_U799], l_U2017[l_U799]._fU0, l_U2017[l_U799]._fU4, l_U2017[l_U799]._fU8 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U2011[l_U799] );
                        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2011[l_U799], 1 );
                        LOCK_CAR_DOORS( l_U1764[l_U799], 3 );
                    }
                }
            }
            if (NOT (DOES_VEHICLE_EXIST( l_U2016 )))
            {
                if (NOT l_U2227)
                {
                    CREATE_CAR( 837858166, l_U2054._fU0, l_U2054._fU4, l_U2054._fU8, ref l_U2016, 1 );
                    FREEZE_CAR_POSITION( l_U2016, 1 );
                    LOCK_CAR_DOORS( l_U2016, 3 );
                }
            }
            for ( l_U799 = 0; l_U799 < 12; l_U799++ )
            {
                if (l_U799 > 3)
                {
                    if (NOT (DOES_CHAR_EXIST( l_U1998[l_U799] )))
                    {
                        if (l_U799 == 0)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2011[0] ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2011[0] ))
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U2011[0], 6, -1004762946, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree0" );
                                    SWITCH_CAR_SIREN( l_U2011[l_U799], 1 );
                                }
                            }
                        }
                        if (l_U799 == 1)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2011[0] ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2011[0] ))
                                {
                                    CREATE_CHAR_AS_PASSENGER( l_U2011[0], 6, -1004762946, 0, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree1" );
                                }
                            }
                        }
                        if (l_U799 == 2)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2011[1] ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2011[1] ))
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U2011[1], 6, -1004762946, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree2" );
                                }
                            }
                        }
                        if (l_U799 == 3)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2011[1] ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2011[1] ))
                                {
                                    CREATE_CHAR_AS_PASSENGER( l_U2011[1], 6, -1004762946, 0, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree3" );
                                }
                            }
                        }
                        if (l_U799 == 4)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2011[2] ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2011[2] ))
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U2011[2], 6, -1004762946, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree4" );
                                }
                            }
                        }
                        if (l_U799 == 5)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2011[2] ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2011[2] ))
                                {
                                    CREATE_CHAR_AS_PASSENGER( l_U2011[2], 6, -1004762946, 0, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree5" );
                                }
                            }
                        }
                        if (l_U799 == 6)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2011[3] ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2011[3] ))
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U2011[3], 6, -1004762946, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree6" );
                                    SWITCH_CAR_SIREN( l_U2011[3], 1 );
                                }
                            }
                        }
                        if (l_U799 == 7)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2011[3] ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2011[3] ))
                                {
                                    CREATE_CHAR_AS_PASSENGER( l_U2011[3], 26, -1004762946, 0, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree7" );
                                }
                            }
                        }
                        if (l_U799 == 8)
                        {
                            if (NOT l_U2227)
                            {
                                if (DOES_VEHICLE_EXIST( l_U2016 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U2016 ))
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U2016, 6, -1004762946, ref l_U1998[l_U799] );
                                        SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree9" );
                                    }
                                }
                                l_U2227 = 1;
                            }
                        }
                        if (l_U799 == 9)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2016 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2016 ))
                                {
                                    CREATE_CHAR_AS_PASSENGER( l_U2016, 6, -1004762946, 0, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree9" );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1998[l_U799], 1 );
                                    SET_CHAR_IS_TARGET_PRIORITY( l_U1998[l_U799], 1 );
                                }
                            }
                        }
                        if (l_U799 == 10)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2016 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2016 ))
                                {
                                    CREATE_CHAR_AS_PASSENGER( l_U2016, 26, -1004762946, 1, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree10" );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1998[l_U799], 1 );
                                    SET_CHAR_IS_TARGET_PRIORITY( l_U1998[l_U799], 1 );
                                }
                            }
                        }
                        if (l_U799 == 11)
                        {
                            if (DOES_VEHICLE_EXIST( l_U2016 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U2016 ))
                                {
                                    CREATE_CHAR_AS_PASSENGER( l_U2016, 6, -1004762946, 2, ref l_U1998[l_U799] );
                                    SET_CHAR_NAME_DEBUG( l_U1998[l_U799], "piPolThree11" );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1998[l_U799], 1 );
                                    SET_CHAR_IS_TARGET_PRIORITY( l_U1998[l_U799], 1 );
                                }
                            }
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U1998[l_U799] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1998[l_U799] )))
                        {
                            SET_CHAR_RELATIONSHIP_GROUP( l_U1998[l_U799], 26 );
                            SET_CHAR_RELATIONSHIP( l_U1998[l_U799], 1, 26 );
                            SET_CHAR_RELATIONSHIP( l_U1998[l_U799], 5, 0 );
                            SET_CHAR_DECISION_MAKER( l_U1998[l_U799], l_U984 );
                            SET_COMBAT_DECISION_MAKER( l_U1998[l_U799], l_U985 );
                            SET_SENSE_RANGE( l_U1998[l_U799], 120.00000000 );
                            GIVE_WEAPON_TO_CHAR( l_U1998[l_U799], 13, 500, 0 );
                            ADD_ARMOUR_TO_CHAR( l_U1998[l_U799], 65436 );
                            if (NOT (l_U799 > 8))
                            {
                                SET_CHAR_MAX_HEALTH( l_U1998[l_U799], 220 );
                                SET_CHAR_HEALTH( l_U1998[l_U799], 220 );
                            }
                            SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( l_U1998[l_U799], 0 );
                            SET_CHAR_ACCURACY( l_U1998[l_U799], 16 );
                            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U1998[l_U799], 0 );
                            SET_CHAR_AS_ENEMY( l_U1998[l_U799], 1 );
                            SET_PED_DIES_WHEN_INJURED( l_U1998[l_U799], 1 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1998[l_U799], 1 );
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U2332 );
                            if (l_U2332 == 0)
                            {
                                SET_CHAR_PROP_INDEX( l_U1998[l_U799], 0, 1 );
                            }
                            else if (l_U2332 == 1)
                            {
                                SET_CHAR_PROP_INDEX( l_U1998[l_U799], 0, 0 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_80305()
{
    if (NOT l_U948[3])
    {
        REQUEST_MODEL( -1004762946 );
        REQUEST_MODEL( -1627000575 );
        REQUEST_MODEL( 1911513875 );
        REQUEST_MODEL( 837858166 );
        l_U948[3] = 1;
    }
    if ((((HAS_MODEL_LOADED( -1004762946 )) AND (HAS_MODEL_LOADED( -1627000575 ))) AND (HAS_MODEL_LOADED( 1911513875 ))) AND (HAS_MODEL_LOADED( 837858166 )))
    {
        return 1;
    }
    return 0;
}

void sub_83015()
{
    if (l_U795 == 9)
    {
        if (DOES_VEHICLE_EXIST( l_U2011[1] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2011[1] ))
            {
                SWITCH_CAR_SIREN( l_U2011[1], 1 );
            }
        }
    }
    if (((l_U795 == 15) AND (DOES_OBJECT_EXIST( l_U1993 ))) || (l_U795 == 10))
    {
        if (sub_83125())
        {
            for ( l_U799 = 0; l_U799 < 4; l_U799++ )
            {
                if (l_U799 > 1)
                {
                    if (DOES_VEHICLE_EXIST( l_U2011[l_U799] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2011[l_U799] ))
                        {
                            if (NOT l_U2083[l_U799])
                            {
                                if (l_U799 == 0)
                                {
                                    if (HAS_CAR_RECORDING_BEEN_LOADED( 1810 ))
                                    {
                                        START_PLAYBACK_RECORDED_CAR( l_U2011[l_U799], 1810 );
                                        l_U2083[l_U799] = 1;
                                    }
                                }
                                if (l_U799 == 1)
                                {
                                    if (HAS_CAR_RECORDING_BEEN_LOADED( 1811 ))
                                    {
                                        START_PLAYBACK_RECORDED_CAR( l_U2011[l_U799], 1811 );
                                        SWITCH_CAR_SIREN( l_U2011[l_U799], 1 );
                                        l_U2083[l_U799] = 1;
                                    }
                                }
                                if (l_U799 == 2)
                                {
                                    if (HAS_CAR_RECORDING_BEEN_LOADED( 1812 ))
                                    {
                                        START_PLAYBACK_RECORDED_CAR( l_U2011[l_U799], 1812 );
                                        SWITCH_CAR_SIREN( l_U2011[l_U799], 1 );
                                        l_U2083[l_U799] = 1;
                                    }
                                }
                                if (l_U799 == 3)
                                {
                                    if (HAS_CAR_RECORDING_BEEN_LOADED( 1813 ))
                                    {
                                        START_PLAYBACK_RECORDED_CAR( l_U2011[l_U799], 1813 );
                                        SWITCH_CAR_SIREN( l_U2011[l_U799], 1 );
                                        l_U2083[l_U799] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((l_U795 == 15) || (l_U795 == 10))
    {
        if (sub_83125())
        {
            if (DOES_VEHICLE_EXIST( l_U2016 ))
            {
                if (IS_VEH_DRIVEABLE( l_U2016 ))
                {
                    if (NOT l_U2088[0])
                    {
                        if (HAS_CAR_RECORDING_BEEN_LOADED( 1816 ))
                        {
                            START_PLAYBACK_RECORDED_CAR( l_U2016, 1816 );
                            SET_PLAYBACK_SPEED( l_U2016, 0.60000000 );
                            l_U2088[0] = 1;
                            FREEZE_CAR_POSITION( l_U2016, 0 );
                        }
                    }
                    else if (DOES_CHAR_EXIST( l_U1998[9] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1998[9] )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U1998[9], l_U2016 )))
                            {
                                if (DOES_CHAR_EXIST( l_U1998[10] ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1998[10] )))
                                    {
                                        if (NOT (IS_CHAR_IN_CAR( l_U1998[10], l_U2016 )))
                                        {
                                            if (DOES_CHAR_EXIST( l_U1998[11] ))
                                            {
                                                if (NOT (IS_CHAR_INJURED( l_U1998[11] )))
                                                {
                                                    if (NOT (IS_CHAR_IN_CAR( l_U1998[11], l_U2016 )))
                                                    {
                                                        if (NOT l_U2088[1])
                                                        {
                                                            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2016 )))
                                                            {
                                                                if (HAS_CAR_RECORDING_BEEN_LOADED( 1817 ))
                                                                {
                                                                    START_PLAYBACK_RECORDED_CAR( l_U2016, 1817 );
                                                                    l_U2088[1] = 1;
                                                                }
                                                                else
                                                                {
                                                                    REQUEST_CAR_RECORDING( 1817 );
                                                                }
                                                            }
                                                        }
                                                        else if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2016 )))
                                                        {
                                                            if (DOES_CHAR_EXIST( l_U1998[8] ))
                                                            {
                                                                if (NOT (IS_CHAR_INJURED( l_U1998[8] )))
                                                                {
                                                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1998[8] );
                                                                }
                                                            }
                                                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2016 );
                                                        }
                                                    }
                                                }
                                            }
                                        }
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

int sub_83125()
{
    REQUEST_CAR_RECORDING( 1810 );
    REQUEST_CAR_RECORDING( 1811 );
    REQUEST_CAR_RECORDING( 1812 );
    REQUEST_CAR_RECORDING( 1813 );
    REQUEST_CAR_RECORDING( 1816 );
    REQUEST_CAR_RECORDING( 1817 );
    if ((((((HAS_CAR_RECORDING_BEEN_LOADED( 1810 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1811 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1812 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1813 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1816 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1817 )))
    {
        return 1;
    }
    return 0;
}

void sub_84259()
{
    vector[2] vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    vector[2] vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    vector vVar16;
    vector vVar19;
    vector vVar22;
    vector vVar25;
    vector[2] vVar28;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    float fVar35;
    float fVar36;
    int iVar37;
    int iVar38;
    boolean bVar39;

    PRINTSTRING( "WMW - iBlowUpWallStage" );
    array(ref vVar2, 2);
    array(ref vVar9, 2);
    array(ref vVar28, 2);
    vVar2[0] = {712.20030000, 53.98090000, 4.96970000};
    vVar2[1] = {712.20030000, 53.98090000, 4.96970000};
    vVar9[0] = {715.22390000, 60.56000000, 4.96970000};
    vVar9[1] = {710.39700000, 55.99450000, 4.96970000};
    vVar28[0] = {695.43500000, 67.89400000, 4.96970000};
    vVar28[1] = {692.51980000, 49.02190000, 4.96970000};
    vVar16 = {728.65250000, 55.59250000, 4.95350000};
    vVar19 = {715.49230000, 50.87430000, 4.96970000};
    vVar22 = {729.03320000, 55.61420000, 6.30110000};
    vVar25 = {0.00000000, 0.00000000, 286.00000000};
    fVar35 = 263.90190000;
    iVar38 = 0;
    bVar39 = false;
    GET_GAME_TIMER( ref iVar38 );
    if ((iVar38 - l_U829) > 25000)
    {
        PRINTSTRING( "\nbFailSafeActivated = TRUE\n" );
        bVar39 = true;
    }
    else
    {
        bVar39 = false;
    }
    if (sub_84627())
    {
        if (l_U1994 == 0)
        {
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                {
                    if (DOES_CHAR_EXIST( l_U908[1] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            GET_GAME_TIMER( ref l_U829 );
                            bVar39 = false;
                            l_U1994 = 1;
                        }
                    }
                }
            }
        }
        if (l_U1994 == 1)
        {
            for ( l_U799 = 0; l_U799 < 2; l_U799++ )
            {
                if (DOES_CHAR_EXIST( l_U908[l_U799] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
                    {
                        if (l_U799 == 0)
                        {
                            if ((NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], vVar9[l_U799]._fU0, vVar9[l_U799]._fU4, vVar9[l_U799]._fU8, 2.00000000, 2.00000000, 3.00000000, 0 ))) AND (NOT bVar39))
                            {
                                PRINTSTRING( "WMW - Buddy 0 - LOCATE_CHAR_ON_FOOT_3D(piBuddy[0], vBuddyEnd[iCount].x, vBuddyEnd[iCount].y, vBuddyEnd[iCount].z, 2.0, 2.0, 3.0, FALSE) is not true." );
                                l_U1678[0] = 0;
                                GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 27, ref l_U960[l_U799] );
                                if (l_U960[l_U799] == 7)
                                {
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[l_U799], vVar9[l_U799]._fU0, vVar9[l_U799]._fU4, vVar9[l_U799]._fU8, 3, -1, 1.00000000 );
                                }
                            }
                            else
                            {
                                PRINTSTRING( "WMW - Buddy 0 - Is now true >>>LOCATE_CHAR_ON_FOOT_3D(piBuddy[0], vBuddyEnd[iCount].x, vBuddyEnd[iCount].y, vBuddyEnd[iCount].z, 2.0, 2.0, 3.0, FALSE), so we're spinning to complete a task sequence" );
                                if (bVar39)
                                {
                                    SET_CHAR_COORDINATES( l_U908[l_U799], vVar9[l_U799]._fU0, vVar9[l_U799]._fU4, vVar9[l_U799]._fU8 );
                                }
                                GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 29, ref l_U960[l_U799] );
                                if ((l_U960[l_U799] == 7) || (bVar39))
                                {
                                    PRINTSTRING( "WMW - Buddy 0 - Now we've finished the task sequence." );
                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[l_U799], 713.21400000, 61.18610000, 4.96970000, 1.00000000 );
                                    l_U1678[0] = 1;
                                    OPEN_SEQUENCE_TASK( ref l_U1681 );
                                    TASK_TOGGLE_DUCK( 0, 1 );
                                    CLOSE_SEQUENCE_TASK( l_U1681 );
                                    TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                                    CLEAR_SEQUENCE_TASK( l_U1681 );
                                }
                            }
                        }
                        if (l_U799 == 1)
                        {
                            if (NOT (DOES_OBJECT_EXIST( l_U1993 )))
                            {
                                if ((NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[l_U799], vVar16.x, vVar16.y, vVar16.z, 2.00000000, 2.00000000, 3.00000000, 0 ))) AND (NOT bVar39))
                                {
                                    PRINTSTRING( "WMW - Buddy 1 NOT LOCATE_CHAR_ON_FOOT_3D(piBuddy[iCount], vWall.x, vWall.y, vWall.z, 2.0, 2.0, 3.0, FALSE)" );
                                    GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 29, ref l_U960[l_U799] );
                                    if (l_U960[l_U799] == 7)
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 715.58720000, 54.62330000, 4.96970000, 3, -1, 1.00000000 );
                                        TASK_GO_STRAIGHT_TO_COORD( 0, vVar16.x, vVar16.y, vVar16.z, 3, 10000 );
                                        CLOSE_SEQUENCE_TASK( l_U1681 );
                                        TASK_PERFORM_SEQUENCE( l_U908[l_U799], l_U1681 );
                                        CLEAR_SEQUENCE_TASK( l_U1681 );
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "WMW - Buddy 1 the following is now true>>>>>LOCATE_CHAR_ON_FOOT_3D(piBuddy[iCount], vWall.x, vWall.y, vWall.z, 2.0, 2.0, 3.0, FALSE)" );
                                    if ((NOT (IS_CHAR_PLAYING_ANIM( l_U908[l_U799], "throw_grenade", "sticky_wall_b" ))) AND (NOT bVar39))
                                    {
                                        PRINTSTRING( "WMW - Buddy 1 Not playing the anim, tellinfg him to do so." );
                                        GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 80, ref l_U960[l_U799] );
                                        if ((l_U960[l_U799] == 7) || (bVar39))
                                        {
                                            TASK_PLAY_ANIM( l_U908[l_U799], "sticky_wall_b", "throw_grenade", 2.00000000, 0, 0, 0, 0, -2 );
                                        }
                                    }
                                    else
                                    {
                                        PRINTSTRING( "WMW - Buddy 1 Playing the anim, polling how far through it he is." );
                                        if (bVar39)
                                        {
                                            SET_CHAR_COORDINATES( l_U908[l_U799], vVar16.x, vVar16.y, vVar16.z );
                                        }
                                        GET_CHAR_ANIM_CURRENT_TIME( l_U908[l_U799], "throw_grenade", "sticky_wall_b", ref fVar36 );
                                        if ((fVar36 > 0.80000000) || (bVar39))
                                        {
                                            PRINTSTRING( "WMW - Buddy 1 He's far enough now" );
                                            if (DOES_OBJECT_EXIST( l_U2150[2] ))
                                            {
                                                DELETE_OBJECT( ref l_U2150[2] );
                                            }
                                            if (NOT (DOES_OBJECT_EXIST( l_U2150[0] )))
                                            {
                                                CREATE_OBJECT( -660479673, 729.57020000, 52.65040000, 6.92800000, ref l_U2150[0], 0 );
                                                SET_OBJECT_COORDINATES( l_U2150[0], 729.57020000, 52.65040000, 6.92800000 );
                                                SET_OBJECT_ROTATION( l_U2150[0], 0.00000000, 0.00000000, 13.00000000 );
                                            }
                                            if (NOT (DOES_OBJECT_EXIST( l_U2150[1] )))
                                            {
                                                CREATE_OBJECT( -1941868026, 729.59470000, 52.68460000, 6.92800000, ref l_U2150[1], 0 );
                                                SET_OBJECT_COORDINATES( l_U2150[1], 729.59470000, 52.68460000, 6.92800000 );
                                                SET_OBJECT_ROTATION( l_U2150[1], 0.00000000, 0.00000000, 13.00000000 );
                                                FREEZE_OBJECT_POSITION( l_U2150[1], 1 );
                                            }
                                            CREATE_OBJECT( l_U1992, vVar22.x, vVar22.y, vVar22.z, ref l_U1993, 1 );
                                            SET_OBJECT_ROTATION( l_U1993, vVar25.x, vVar25.y, vVar25.z );
                                            FREEZE_OBJECT_POSITION( l_U1993, 1 );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                PRINTSTRING( "WMW - Now the bomb exists, still friend 1" );
                                if ((NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[l_U799], vVar9[l_U799]._fU0, vVar9[l_U799]._fU4, vVar9[l_U799]._fU8, 1.00000000, 1.00000000, 3.00000000, 0 ))) AND (NOT bVar39))
                                {
                                    PRINTSTRING( "WMW - Bomb Exists - NOT LOCATE_CHAR_ON_FOOT_3D(piBuddy[iCount], vBuddyEnd[iCount].x, vBuddyEnd[iCount].y, vBuddyEnd[iCount].z, 1.0, 1.0, 3.0, FALSE)" );
                                    GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 27, ref l_U960[l_U799] );
                                    if (l_U960[l_U799] == 7)
                                    {
                                        if (NOT l_U954)
                                        {
                                            PLAY_SOUND_FROM_OBJECT( l_U2246, "F1_CORNER_KIDS_STICKY_BOMB", l_U1993 );
                                            l_U954 = 1;
                                        }
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[l_U799], vVar9[l_U799]._fU0, vVar9[l_U799]._fU4, vVar9[l_U799]._fU8, 3, -1, 1.50000000 );
                                    }
                                    else
                                    {
                                        PRINTSTRING( "WMW - Bomb Exists Friend 1 - Not finished task yet." );
                                    }
                                    if (NOT l_U959)
                                    {
                                        if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[l_U799], vVar16.x, vVar16.y, vVar16.z, 5.00000000, 5.00000000, 3.00000000, 0 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U908[l_U799], "EXPLOSION_IS_IMMINENT", 1, 1, 2 );
                                            PRINTNL();
                                            PRINTSTRING( "********SAY_AMBIENT_SPEECH(piBuddy[iCount], EXPLOSION_IS_IMMINENT, TRUE, TRUE, SPEECH_SHOUTED)********" );
                                            PRINTNL();
                                            l_U959 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "WMW - Bomb Exists - TRUE --> LOCATE_CHAR_ON_FOOT_3D(piBuddy[iCount], vBuddyEnd[iCount].x, vBuddyEnd[iCount].y, vBuddyEnd[iCount].z, 1.0, 1.0, 3.0, FALSE)" );
                                    if (bVar39)
                                    {
                                        SET_CHAR_COORDINATES( l_U908[l_U799], vVar9[l_U799]._fU0, vVar9[l_U799]._fU4, vVar9[l_U799]._fU8 );
                                    }
                                    GET_SCRIPT_TASK_STATUS( l_U908[l_U799], 29, ref l_U960[l_U799] );
                                    if ((l_U960[l_U799] == 7) || (bVar39))
                                    {
                                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[l_U799], 715.22420000, 56.96570000, 4.96970000, 1.50000000 );
                                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                                        TASK_TOGGLE_DUCK( 0, 1 );
                                        CLOSE_SEQUENCE_TASK( l_U1681 );
                                        TASK_PERFORM_SEQUENCE( l_U908[l_U799], l_U1681 );
                                        CLEAR_SEQUENCE_TASK( l_U1681 );
                                        l_U1678[1] = 1;
                                    }
                                    else
                                    {
                                        PRINTSTRING( "WMW - Bomb Exists Friend 1 - Not finished task yet - V2." );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (l_U1678[0])
            {
                if (l_U1678[1])
                {
                    l_U1994 = 2;
                    GET_GAME_TIMER( ref l_U808[0] );
                    GET_GAME_TIMER( ref l_U829 );
                    bVar39 = false;
                    sub_8781( "WMW - Advancing to next stage, storing timer of ", l_U808[0] );
                }
            }
        }
        if (l_U1994 == 2)
        {
            PRINTSTRING( "WMW - iBlowUpWallStage = 2" );
            GET_GAME_TIMER( ref l_U811[0] );
            l_U814[0] = l_U811[0] - l_U808[0];
            sub_8781( "WMW - iBuddyTimeDiff[0]", l_U814[0] );
            if ((l_U814[0] > 2000) || (bVar39))
            {
                if (DOES_OBJECT_EXIST( l_U1993 ))
                {
                    STOP_SOUND( l_U2246 );
                    PRINTNL();
                    PRINTSTRING( "********STOP_SOUND(iSound)********" );
                    PRINTNL();
                }
                GET_GAME_TIMER( ref l_U808[0] );
                sub_8781( "WMW - Advancing stage, storing iBuddyTimeStart[0] ", l_U808[0] );
                GET_GAME_TIMER( ref l_U829 );
                bVar39 = false;
                l_U1994++;
            }
        }
        if (l_U1994 == 3)
        {
            PRINTSTRING( "WMW - iBlowUpWallStage = 3" );
            GET_GAME_TIMER( ref l_U811[0] );
            l_U814[0] = l_U811[0] - l_U808[0];
            sub_8781( "WMW - iBuddyTimeDiff[0]", l_U814[0] );
            if ((l_U814[0] > 1000) || (bVar39))
            {
                ADD_EXPLOSION( vVar22.x, vVar22.y, vVar22.z, 0, 1.00000000, 1, 1, 1 );
                TRIGGER_PTFX( "EXP_STICKY_WALL", vVar22, 0.00000000, 0.00000000, 0.00000000, 1 );
                CLEAR_AREA_OF_CARS( 729.85270000, 55.17620000, 4.94480000, 5.00000000 );
                PLAY_SOUND_FROM_POSITION( l_U2246, "F1_CORNER_KIDS_WALL_EXPLODE", vVar22 );
                if (DOES_OBJECT_EXIST( l_U1993 ))
                {
                    DELETE_OBJECT( ref l_U1993 );
                }
                GET_GAME_TIMER( ref l_U829 );
                bVar39 = false;
                l_U1994++;
            }
        }
        if (l_U1994 == 4)
        {
            PRINTSTRING( "WMW - iBlowUpWallStage" );
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                {
                    TASK_TOGGLE_DUCK( l_U908[0], 0 );
                    GET_CHAR_HEALTH( l_U908[0], ref iVar37 );
                    if (iVar37 < 700)
                    {
                        SET_CHAR_HEALTH( l_U908[0], 1000 );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                {
                    TASK_TOGGLE_DUCK( l_U908[1], 0 );
                    GET_CHAR_HEALTH( l_U908[1], ref iVar37 );
                    if (iVar37 < 700)
                    {
                        SET_CHAR_HEALTH( l_U908[1], 1000 );
                    }
                }
            }
            GET_GAME_TIMER( ref l_U829 );
            bVar39 = false;
            l_U1994++;
        }
        if (l_U1994 == 5)
        {
            l_U829 = 0;
            bVar39 = false;
            l_U795 = 10;
        }
    }
    if (l_U1994 >= 0)
    {
        sub_3909( ref l_U1742, 0 );
        if ((g_U43793 == 0) || (g_U43793 == 101))
        {
            l_U1748 = "E2F1_WALL";
        }
        else
        {
            l_U1748 = "E2F1_WALL2";
        }
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (sub_3725( l_U1682 )))
            {
                if (NOT l_U2302[0])
                {
                    if (DOES_CHAR_EXIST( l_U908[0] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], vVar9[0]._fU0, vVar9[0]._fU4, vVar9[0]._fU8, 1.50000000, 1.50000000, 3.00000000, 0 ))
                            {
                                sub_21601( "E2F1BAU" );
                                sub_21664( l_U1748, ref l_U1682, 6, 1 );
                                l_U2302[0] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U1994 > 3)
    {
        l_U1748 = "E2F1_WBLO";
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (sub_3725( l_U1682 )))
            {
                if (NOT l_U2302[1])
                {
                    sub_21601( "E2F1BAU" );
                    sub_21664( l_U1748, ref l_U1682, 6, 1 );
                    l_U2302[1] = 1;
                }
            }
        }
    }
    return;
}

int sub_84627()
{
    if (NOT l_U948[2])
    {
        REQUEST_MODEL( l_U1992 );
        l_U948[2] = 1;
    }
    if (HAS_MODEL_LOADED( l_U1992 ))
    {
        return 1;
    }
    return 0;
}

void sub_90025()
{
    vector[12] vVar2;
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
    unknown uVar37;
    unknown uVar38;
    float[12] fVar39;
    unknown uVar52;

    array(ref vVar2, 12);
    array(ref fVar39, 12);
    vVar2[0] = {728.20040000, 83.58130000, 4.78550000};
    vVar2[1] = {731.70390000, 84.49090000, 4.78630000};
    vVar2[2] = {734.71580000, 85.11010000, 4.78580000};
    vVar2[3] = {725.13750000, 75.38440000, 4.93880000};
    vVar2[4] = {741.45990000, 24.63690000, 4.78680000};
    vVar2[5] = {744.29140000, 30.16160000, 4.77260000};
    vVar2[6] = {750.55910000, 30.30160000, 4.87870000};
    vVar2[7] = {745.46850000, 33.09390000, 4.77270000};
    vVar2[8] = {0.00000000, 0.00000000, 0.00000000};
    vVar2[9] = {746.34370000, 48.07150000, 10.41890000};
    vVar2[10] = {747.53950000, 54.03780000, 10.41890000};
    vVar2[11] = {754.19310000, 55.70710000, 10.41890000};
    fVar39[0] = 205.08020000;
    fVar39[1] = 175.61540000;
    fVar39[2] = 185.82620000;
    fVar39[3] = 18.13470000;
    fVar39[4] = 45.88400000;
    fVar39[5] = 36.87640000;
    fVar39[6] = 47.96450000;
    fVar39[7] = 36.07080000;
    fVar39[8] = 0.00000000;
    fVar39[9] = 53.36370000;
    fVar39[10] = 114.73760000;
    fVar39[10] = 74.84650000;
    for ( l_U799 = 0; l_U799 < 12; l_U799++ )
    {
        if (NOT (l_U799 == 8))
        {
            if (l_U799 > 8)
            {
                if (DOES_CHAR_EXIST( l_U1998[l_U799] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U1998[l_U799] )))
                    {
                        if (sub_90550( l_U799 ))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U1998[l_U799] ))
                            {
                                if (l_U799 == 9)
                                {
                                    WARP_CHAR_FROM_CAR_TO_COORD( l_U1998[l_U799], 750.26530000, 43.98020000, 10.41890000 );
                                }
                                if (l_U799 == 10)
                                {
                                    WARP_CHAR_FROM_CAR_TO_COORD( l_U1998[l_U799], 750.56480000, 49.50570000, 10.41890000 );
                                }
                                if (l_U799 == 11)
                                {
                                    WARP_CHAR_FROM_CAR_TO_COORD( l_U1998[l_U799], 753.99450000, 50.58700000, 10.41890000 );
                                }
                            }
                            else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U1998[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 1.00000000, 1.00000000, 3.00000000, 0 )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U1998[l_U799], 33, ref l_U2091[l_U799] );
                                if (l_U2091[l_U799] == 7)
                                {
                                    TASK_GO_TO_COORD_WHILE_SHOOTING( l_U1998[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 3, 0.75000000, 2.00000000, sub_7291(), 1 );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1998[l_U799], 1 );
                                }
                            }
                            else
                            {
                                sub_59306( l_U1998[l_U799], 199, ref l_U2070[l_U799], 5.00000000 );
                                GET_SCRIPT_TASK_STATUS( l_U1998[l_U799], 104, ref l_U2091[l_U799] );
                                if (l_U2091[l_U799] == 7)
                                {
                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1998[l_U799], vVar2[l_U799], 0.40000000 );
                                    TASK_SEEK_COVER_TO_COORDS( l_U1998[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 734.95970000, 57.53450000, 4.77420000, -2 );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1998[l_U799], 0 );
                                }
                            }
                        }
                    }
                }
            }
            else if (DOES_CHAR_EXIST( l_U1998[l_U799] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U1998[l_U799] )))
                {
                    if (sub_90550( l_U799 ))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U1998[l_U799] ))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U1998[l_U799], 31, ref l_U2091[l_U799] );
                            if (l_U2091[l_U799] == 7)
                            {
                                TASK_LEAVE_ANY_CAR( l_U1998[l_U799] );
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U1998[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 2.00000000, 2.00000000, 3.00000000, 0 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U1998[l_U799], 33, ref l_U2091[l_U799] );
                            if (l_U2091[l_U799] == 7)
                            {
                                TASK_GO_TO_COORD_WHILE_SHOOTING( l_U1998[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 3, 1.00000000, 0.50000000, sub_7291(), 1 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1998[l_U799], 1 );
                            }
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U1998[l_U799], 104, ref l_U2091[l_U799] );
                            if (l_U2091[l_U799] == 7)
                            {
                                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1998[l_U799], vVar2[l_U799], 1.00000000 );
                                TASK_SEEK_COVER_TO_COORDS( l_U1998[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 734.95970000, 57.53450000, 4.77420000, -2 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1998[l_U799], 0 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_90550(int iParam0)
{
    int iVar3;

    if ((iParam0 == 0) || (iParam0 == 1))
    {
        if (DOES_VEHICLE_EXIST( l_U2011[0] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2011[0] ))
            {
                if (l_U2083[0])
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2011[0] )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    if ((iParam0 == 2) || (iParam0 == 3))
    {
        if (DOES_VEHICLE_EXIST( l_U2011[1] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2011[1] ))
            {
                if (l_U2083[1])
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2011[1] )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    if ((iParam0 == 4) || (iParam0 == 5))
    {
        if (DOES_VEHICLE_EXIST( l_U2011[2] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2011[2] ))
            {
                if (l_U2083[2])
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2011[2] )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    if ((iParam0 == 6) || (iParam0 == 7))
    {
        if (DOES_VEHICLE_EXIST( l_U2011[3] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2011[3] ))
            {
                if (l_U2083[3])
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2011[3] )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    if (((iParam0 == 9) || (iParam0 == 10)) || (iParam0 == 11))
    {
        if (DOES_VEHICLE_EXIST( l_U2016 ))
        {
            if (IS_VEH_DRIVEABLE( l_U2016 ))
            {
                if (l_U2088[0])
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2016 )))
                    {
                        return 1;
                    }
                    else
                    {
                        iVar3 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( l_U2016 );
                        if (iVar3 == 1817)
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_92266()
{
    if (DOES_CHAR_EXIST( l_U908[0] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[0] )))
        {
            if (l_U1997 == 0)
            {
                if (NOT l_U2154[0])
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 732.68680000, 55.71730000, 4.77420000, 1.50000000, 1.50000000, 3.00000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 27, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[0], 732.68680000, 55.71730000, 4.77420000, 3, -1, 1.00000000 );
                        }
                    }
                    else
                    {
                        l_U2154[0] = 1;
                    }
                }
                else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 728.76780000, 64.33110000, 4.77470000, 2.00000000, 2.00000000, 3.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 27, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[0], 728.76780000, 64.33110000, 4.77470000, 3, -1, 1.00000000 );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 29, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[0], 728.76780000, 64.33110000, 6.77470000, 1.40000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 728.76780000, 64.33110000, 4.77470000, 730.32350000, 93.63230000, 4.84210000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
            if (l_U1997 == 2)
            {
                if (NOT l_U2154[0])
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 732.68680000, 55.71730000, 4.77420000, 1.50000000, 1.50000000, 3.00000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 27, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[0], 732.68680000, 55.71730000, 4.77420000, 3, -1, 1.00000000 );
                        }
                    }
                    else
                    {
                        l_U2154[0] = 1;
                    }
                }
                else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 739.91110000, 72.90670000, 4.93480000, 2.00000000, 2.00000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1998[0] )))
                    {
                        l_U1871 = l_U1998[0];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1998[1] )))
                    {
                        l_U1871 = l_U1998[1];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1998[2] )))
                    {
                        l_U1871 = l_U1998[2];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1998[3] )))
                    {
                        l_U1871 = l_U1998[3];
                    }
                    else
                    {
                        l_U2232[0] = 1;
                    };;;;
                    if (NOT l_U2232[0])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 33, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[0], 739.91110000, 72.90670000, 4.93480000, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 47, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[0], 739.91110000, 72.90670000, 4.93480000, 3, 1.00000000, 1.00000000, 0, 729.97510000, 85.93790000, 4.79610000, 1 );
                        }
                    }
                }
                else
                {
                    l_U2232[0] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 29, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[0], 739.91110000, 72.90670000, 4.93480000, 0.75000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 739.91110000, 72.90670000, 4.93480000, 730.32350000, 93.63230000, 4.84210000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
        }
    }
    return;
}

void sub_93681()
{
    if (DOES_CHAR_EXIST( l_U908[1] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[1] )))
        {
            if (l_U1997 == 0)
            {
                if (NOT l_U2154[1])
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 732.82820000, 55.99330000, 4.77420000, 1.50000000, 1.50000000, 3.00000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 27, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[1], 732.82820000, 55.99330000, 4.77420000, 3, -1, 1.00000000 );
                        }
                    }
                    else
                    {
                        l_U2154[1] = 1;
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[1], 730.53490000, 54.35930000, 5.35790000, 0.80000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 730.53490000, 54.35930000, 4.95790000, 740.87340000, 31.42480000, 4.77280000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
            if (l_U1997 == 1)
            {
                if (NOT l_U2154[1])
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 732.82820000, 55.99330000, 4.77420000, 1.50000000, 1.50000000, 3.00000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 27, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[1], 732.82820000, 55.99330000, 4.77420000, 3, -1, 1.00000000 );
                        }
                    }
                    else
                    {
                        l_U2154[1] = 1;
                    }
                }
                else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 744.91850000, 53.74900000, 5.90000000, 4.00000000, 4.00000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1998[4] )))
                    {
                        l_U1871 = l_U1998[4];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1998[5] )))
                    {
                        l_U1871 = l_U1998[5];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1998[6] )))
                    {
                        l_U1871 = l_U1998[6];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1998[7] )))
                    {
                        l_U1871 = l_U1998[7];
                    }
                    else
                    {
                        l_U2232[1] = 1;
                    };;;;
                    if (NOT l_U2232[1])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 33, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[1], 744.91850000, 53.74900000, 5.90000000, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 47, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[1], 744.91850000, 53.74900000, 5.90000000, 3, 1.00000000, 1.00000000, 0, 744.96350000, 27.96350000, 4.77250000, 1 );
                        }
                    }
                }
                else
                {
                    l_U2232[1] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[1], 744.91850000, 53.74900000, 5.90000000, 1.50000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 744.91850000, 53.74900000, 5.90000000, 730.32350000, 93.63230000, 4.84210000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
            if (l_U1997 == 2)
            {
                if (NOT l_U2154[1])
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 732.20370000, 55.55330000, 4.77420000, 1.50000000, 1.50000000, 4.00000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 27, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[1], 732.20370000, 55.55330000, 4.77420000, 3, -1, 1.00000000 );
                        }
                    }
                    else
                    {
                        l_U2154[1] = 1;
                    }
                }
                else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 744.91850000, 53.74900000, 5.90000000, 4.00000000, 4.00000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1998[4] )))
                    {
                        l_U1871 = l_U1998[4];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1998[5] )))
                    {
                        l_U1871 = l_U1998[5];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1998[6] )))
                    {
                        l_U1871 = l_U1998[6];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1998[7] )))
                    {
                        l_U1871 = l_U1998[7];
                    }
                    else
                    {
                        l_U2232[1] = 1;
                    };;;;
                    if (NOT l_U2232[1])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 33, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[1], 744.91850000, 53.74900000, 5.90000000, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 47, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[1], 744.91850000, 53.74900000, 5.90000000, 3, 1.00000000, 1.00000000, 0, 744.96350000, 27.96350000, 4.77250000, 1 );
                        }
                    }
                }
                else
                {
                    l_U2232[1] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[1], 744.91850000, 53.74900000, 5.90000000, 1.50000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 744.91850000, 53.74900000, 5.90000000, 730.32350000, 93.63230000, 4.84210000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
        }
    }
    return;
}

void sub_95786()
{
    int iVar2;

    if (l_U1997 == 0)
    {
        if (((IS_CHAR_INJURED( l_U1998[9] )) || (IS_CHAR_INJURED( l_U1998[10] ))) || (IS_CHAR_INJURED( l_U1998[11] )))
        {
            l_U1997++;
        }
    }
    if (l_U1997 == 1)
    {
        if (IS_CHAR_INJURED( l_U1998[9] ))
        {
            iVar2++;
        }
        if (IS_CHAR_INJURED( l_U1998[10] ))
        {
            iVar2++;
        }
        if (IS_CHAR_INJURED( l_U1998[11] ))
        {
            iVar2++;
        }
        if (iVar2 > 1)
        {
            l_U1997++;
        }
        else
        {
            iVar2 = 0;
        }
    }
    if (l_U1997 == 2)
    {
        if (IS_CHAR_INJURED( l_U1998[9] ))
        {
            if (IS_CHAR_INJURED( l_U1998[10] ))
            {
                if (IS_CHAR_INJURED( l_U1998[11] ))
                {
                    if (DOES_CHAR_EXIST( l_U908[0] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                        {
                            if (DOES_CHAR_EXIST( l_U908[1] ))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                                {
                                    if (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 739.91110000, 72.90670000, 4.93480000, 2.00000000, 2.00000000, 3.00000000, 0 ))
                                    {
                                        if (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 744.91850000, 53.74900000, 4.90000000, 2.00000000, 2.00000000, 3.00000000, 0 ))
                                        {
                                            l_U2232[0] = 0;
                                            l_U2232[1] = 0;
                                            l_U795 = 11;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (IS_CHAR_INJURED( l_U1998[9] ))
    {
        if (IS_CHAR_INJURED( l_U1998[10] ))
        {
            if (IS_CHAR_INJURED( l_U1998[11] ))
            {
                l_U795 = 11;
            }
        }
    }
    return;
}

void sub_96344()
{
    for ( l_U799 = 0; l_U799 < 8; l_U799++ )
    {
        if (DOES_BLIP_EXIST( l_U1983[l_U799] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U1983[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 12; l_U799++ )
    {
        if (l_U799 > 8)
        {
            if (DOES_CHAR_EXIST( l_U1998[l_U799] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U1998[l_U799] )))
                {
                    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U1998[l_U799] )))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U2057[l_U799] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U1998[l_U799], ref l_U2057[l_U799] );
                            SET_BLIP_AS_FRIENDLY( l_U2057[l_U799], 0 );
                            CHANGE_BLIP_SCALE( l_U2057[l_U799], 0.50000000 );
                            CHANGE_BLIP_DISPLAY( l_U2057[l_U799], 2 );
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U2057[l_U799] ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2057[l_U799] );
                }
            }
        }
    }
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U908[l_U799] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U981[l_U799] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U908[l_U799], ref l_U981[l_U799] );
                    SET_BLIP_AS_FRIENDLY( l_U981[l_U799], 1 );
                    CHANGE_BLIP_SCALE( l_U981[l_U799], 0.50000000 );
                    CHANGE_BLIP_DISPLAY( l_U981[l_U799], 2 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U981[l_U799] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U981[l_U799] );
            }
        }
    }
    if (NOT (sub_3725( l_U1718 )))
    {
        if (NOT (sub_3725( l_U1682 )))
        {
            if (l_U2307[0])
            {
                if (l_U2307[1])
                {
                    if (l_U2307[2])
                    {
                        if (NOT l_U2188[2])
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                if ((((DOES_CHAR_EXIST( l_U1998[9] )) AND (NOT (IS_CHAR_INJURED( l_U1998[9] )))) || ((DOES_CHAR_EXIST( l_U1998[10] )) AND (NOT (IS_CHAR_INJURED( l_U1998[10] ))))) || ((DOES_CHAR_EXIST( l_U1998[11] )) AND (NOT (IS_CHAR_INJURED( l_U1998[11] )))))
                                {
                                    PRINT_NOW( "F1_Z32", 7500, 1 );
                                    l_U2188[2] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (NOT (sub_3725( l_U1718 )))
    {
        if (NOT (sub_3725( l_U1682 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT l_U2307[0])
                {
                    sub_21601( "E2F1BAU" );
                    sub_21664( "E2F1_AMOV", ref l_U1718, 6, 1 );
                    l_U2307[0] = 1;
                }
            }
        }
    }
    if (NOT (sub_3725( l_U1718 )))
    {
        if (NOT (sub_3725( l_U1712 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (l_U2307[0])
                {
                    if (NOT l_U2307[1])
                    {
                        sub_21601( "E2F1BAU" );
                        sub_21664( "E2F1_CHOP", ref l_U1718, 6, 1 );
                        l_U2307[1] = 1;
                    }
                }
            }
        }
    }
    if (NOT (sub_3725( l_U1718 )))
    {
        if (NOT (sub_3725( l_U1712 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (l_U2307[0])
                {
                    if (l_U2307[1])
                    {
                        if (NOT l_U2307[2])
                        {
                            sub_21601( "E2F1BAU" );
                            sub_21664( "E2F1_CAR", ref l_U1718, 6, 1 );
                            l_U2307[2] = 1;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_97580()
{
    if (((l_U795 == 10) AND (l_U1997 > 0)) || (l_U795 == 11))
    {
        if (sub_97617())
        {
            if (NOT (DOES_VEHICLE_EXIST( l_U2109 )))
            {
                CREATE_CAR( 1911513875, l_U2110._fU0, l_U2110._fU4, l_U2110._fU8, ref l_U2109, 1 );
                SET_CAR_COORDINATES( l_U2109, l_U2110._fU0, l_U2110._fU4, l_U2110._fU8 );
                SET_CAR_ON_GROUND_PROPERLY( l_U2109 );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2109, 1 );
                FREEZE_CAR_POSITION( l_U2109, 1 );
                LOCK_CAR_DOORS( l_U2109, 3 );
            }
            for ( l_U799 = 0; l_U799 < 3; l_U799++ )
            {
                if (NOT (DOES_CHAR_EXIST( l_U2105[l_U799] )))
                {
                    if (l_U799 == 0)
                    {
                        if (DOES_VEHICLE_EXIST( l_U2109 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U2109 ))
                            {
                                CREATE_CHAR_INSIDE_CAR( l_U2109, 6, -1004762946, ref l_U2105[l_U799] );
                                SET_CHAR_NAME_DEBUG( l_U2105[l_U799], "piPolFour0" );
                            }
                        }
                    }
                    if (l_U799 == 1)
                    {
                        if (DOES_VEHICLE_EXIST( l_U2109 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U2109 ))
                            {
                                CREATE_CHAR_AS_PASSENGER( l_U2109, 6, -1004762946, 1, ref l_U2105[l_U799] );
                                SET_CHAR_NAME_DEBUG( l_U2105[l_U799], "piPolFour1" );
                            }
                        }
                    }
                    if (l_U799 == 2)
                    {
                        if (DOES_VEHICLE_EXIST( l_U2109 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U2109 ))
                            {
                                CREATE_CHAR_AS_PASSENGER( l_U2109, 6, -1004762946, 2, ref l_U2105[l_U799] );
                                SET_CHAR_NAME_DEBUG( l_U2105[l_U799], "piPolFour2" );
                            }
                        }
                    }
                    SET_CHAR_RELATIONSHIP_GROUP( l_U2105[l_U799], 26 );
                    SET_CHAR_RELATIONSHIP( l_U2105[l_U799], 1, 26 );
                    SET_CHAR_RELATIONSHIP( l_U2105[l_U799], 5, 0 );
                    SET_CHAR_DECISION_MAKER( l_U2105[l_U799], l_U984 );
                    SET_COMBAT_DECISION_MAKER( l_U2105[l_U799], l_U985 );
                    SET_SENSE_RANGE( l_U2105[l_U799], 120.00000000 );
                    GIVE_WEAPON_TO_CHAR( l_U2105[l_U799], 13, 500, 0 );
                    ADD_ARMOUR_TO_CHAR( l_U2105[l_U799], 65436 );
                    SET_CHAR_MAX_HEALTH( l_U2105[l_U799], 300 );
                    SET_CHAR_HEALTH( l_U2105[l_U799], 300 );
                    SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( l_U2105[l_U799], 0 );
                    SET_CHAR_ACCURACY( l_U2105[l_U799], 15 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U2105[l_U799], 0 );
                    SET_CHAR_AS_ENEMY( l_U2105[l_U799], 1 );
                    SET_PED_DIES_WHEN_INJURED( l_U2105[l_U799], 1 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U2105[l_U799], 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2105[l_U799], 1 );
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U2332 );
                    if (l_U2332 == 0)
                    {
                        SET_CHAR_PROP_INDEX( l_U2105[l_U799], 0, 1 );
                    }
                    else if (l_U2332 == 1)
                    {
                        SET_CHAR_PROP_INDEX( l_U2105[l_U799], 0, 0 );
                    }
                }
            }
        }
    }
    return;
}

int sub_97617()
{
    if (NOT l_U948[4])
    {
        REQUEST_MODEL( -1004762946 );
        REQUEST_MODEL( 1911513875 );
        l_U948[4] = 1;
    }
    if ((HAS_MODEL_LOADED( -1004762946 )) AND (HAS_MODEL_LOADED( 1911513875 )))
    {
        return 1;
    }
    return 0;
}

void sub_98701()
{
    vector[3] vVar2;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float[3] fVar12;

    array(ref vVar2, 3);
    array(ref fVar12, 3);
    vVar2[0] = {762.45370000, 58.97560000, 4.96220000};
    vVar2[1] = {763.65340000, 61.33690000, 4.97090000};
    vVar2[2] = {774.04680000, 69.35980000, 5.01000000};
    fVar12[0] = 110.65530000;
    fVar12[1] = 118.69440000;
    fVar12[2] = 51.18800000;
    if ((l_U795 == 10) AND (l_U1997 > 0))
    {
        for ( l_U799 = 0; l_U799 < 3; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U2105[l_U799] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U2105[l_U799] )))
                {
                    if (sub_98907( l_U799 ))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U2105[l_U799] ))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U2105[l_U799], 31, ref l_U2122[l_U799] );
                            if (l_U2122[l_U799] == 7)
                            {
                                TASK_LEAVE_ANY_CAR( l_U2105[l_U799] );
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U2105[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 2.00000000, 2.00000000, 3.00000000, 0 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U2105[l_U799], 33, ref l_U2122[l_U799] );
                            if (l_U2122[l_U799] == 7)
                            {
                                TASK_GO_TO_COORD_WHILE_SHOOTING( l_U2105[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 3, 1.00000000, 0.50000000, sub_7291(), 1 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2105[l_U799], 1 );
                            }
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U2105[l_U799], 104, ref l_U2122[l_U799] );
                            if (l_U2122[l_U799] == 7)
                            {
                                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U2105[l_U799], vVar2[l_U799], 1.00000000 );
                                TASK_SEEK_COVER_TO_COORDS( l_U2105[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 742.94730000, 60.72740000, 4.90870000, -2 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2105[l_U799], 0 );
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U795 == 11)
    {
        for ( l_U799 = 0; l_U799 < 3; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U2105[l_U799] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U2105[l_U799] )))
                {
                    if (sub_98907( l_U799 ))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U2105[l_U799] ))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U2105[l_U799], 31, ref l_U2122[l_U799] );
                            if (l_U2122[l_U799] == 7)
                            {
                                TASK_LEAVE_ANY_CAR( l_U2105[l_U799] );
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U2105[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 2.00000000, 2.00000000, 3.00000000, 0 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U2105[l_U799], 33, ref l_U2122[l_U799] );
                            if (l_U2122[l_U799] == 7)
                            {
                                TASK_GO_TO_COORD_WHILE_SHOOTING( l_U2105[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 3, 1.00000000, 0.50000000, sub_7291(), 1 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2105[l_U799], 1 );
                            }
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U2105[l_U799], 104, ref l_U2122[l_U799] );
                            if (l_U2122[l_U799] == 7)
                            {
                                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U2105[l_U799], vVar2[l_U799], 1.00000000 );
                                TASK_SEEK_COVER_TO_COORDS( l_U2105[l_U799], vVar2[l_U799]._fU0, vVar2[l_U799]._fU4, vVar2[l_U799]._fU8, 742.94730000, 60.72740000, 4.90870000, -2 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2105[l_U799], 0 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_98907(int iParam0)
{
    if (((iParam0 == 0) || (iParam0 == 1)) || (iParam0 == 2))
    {
        if (DOES_VEHICLE_EXIST( l_U2109 ))
        {
            if (IS_VEH_DRIVEABLE( l_U2109 ))
            {
                if (l_U2121)
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2109 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_100135()
{
    int iVar2;

    if (((l_U795 == 10) AND (l_U1997 > 0)) || (l_U795 == 11))
    {
        if (sub_100172())
        {
            if (DOES_VEHICLE_EXIST( l_U2109 ))
            {
                if (IS_VEH_DRIVEABLE( l_U2109 ))
                {
                    if (NOT l_U2121)
                    {
                        if (HAS_CAR_RECORDING_BEEN_LOADED( 1818 ))
                        {
                            START_PLAYBACK_RECORDED_CAR( l_U2109, 1818 );
                            SWITCH_CAR_SIREN( l_U2109, 1 );
                            l_U2121 = 1;
                        }
                    }
                }
            }
        }
    }
    if (l_U795 == 11)
    {
        if (DOES_VEHICLE_EXIST( l_U1757[1] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1757[1] ))
            {
                if (NOT (l_U2147 > 2))
                {
                    GET_CAR_HEALTH( l_U1757[1], ref iVar2 );
                    if (iVar2 < 1000)
                    {
                        SET_CAR_HEALTH( l_U1757[1], 1000 );
                    }
                    if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U1757[1], sub_7291() ))
                    {
                        l_U2147++;
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U1757[1] );
                    }
                }
                else
                {
                    EXPLODE_CAR( l_U1757[1], 1, 0 );
                    l_U2147 = 99;
                }
            }
        }
    }
    return;
}

int sub_100172()
{
    REQUEST_CAR_RECORDING( 1818 );
    if (HAS_CAR_RECORDING_BEEN_LOADED( 1818 ))
    {
        return 1;
    }
    return 0;
}

void sub_100543()
{
    if (DOES_CHAR_EXIST( l_U908[0] ))
    {
        if (NOT (IS_CHAR_DEAD( l_U908[0] )))
        {
            if (l_U2104 == 0)
            {
                if (NOT l_U2154[0])
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 732.68680000, 55.71730000, 4.77420000, 1.00000000, 1.00000000, 3.00000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 27, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[0], 732.68680000, 55.71730000, 4.77420000, 3, -2, 1.00000000 );
                        }
                    }
                    else
                    {
                        l_U2154[0] = 1;
                    }
                }
                else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 754.11850000, 69.69000000, 4.95180000, 2.00000000, 2.00000000, 3.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2105[0] )))
                    {
                        l_U1871 = l_U2105[0];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U2105[1] )))
                    {
                        l_U1871 = l_U2105[1];
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U2105[2] )))
                    {
                        l_U1871 = l_U2105[2];
                    }
                    else
                    {
                        l_U2232[0] = 1;
                    };;;
                    if (NOT l_U2232[0])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 33, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U908[0], 754.11850000, 69.69000000, 4.95180000, 3, 1.00000000, 1.00000000, l_U1871, 1 );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 47, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                            TASK_GO_TO_COORD_WHILE_AIMING( l_U908[0], 754.11850000, 69.69000000, 4.95180000, 3, 1.00000000, 1.00000000, 0, 777.04170000, 66.53220000, 4.92430000, 1 );
                        }
                    }
                }
                else
                {
                    l_U2232[0] = 0;
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 29, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[0], 754.11850000, 69.69000000, 4.95180000, 0.75000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 754.11850000, 69.69000000, 4.95180000, 776.20170000, 65.93590000, 4.96230000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
            if (l_U2104 == 1)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 775.34050000, 53.70230000, 5.00680000, 2.00000000, 2.00000000, 3.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 27, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[0], 775.34050000, 53.70230000, 5.00680000, 3, -2, 1.00000000 );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U908[0], 29, ref l_U960[0] );
                    if (l_U960[0] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[0], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[0], 775.34050000, 53.70230000, 5.00680000, 0.75000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_AIM_GUN_AT_COORD( 0, 790.86320000, 37.83590000, 5.02680000, 100000 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
        }
    }
    return;
}

void sub_101732()
{
    if (DOES_CHAR_EXIST( l_U908[1] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[1] )))
        {
            if (l_U2104 == 0)
            {
                if (NOT l_U2154[1])
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 732.82820000, 55.99330000, 4.77420000, 1.50000000, 1.50000000, 4.00000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 27, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[1], 732.82820000, 55.99330000, 4.77420000, 3, -1, 1.00000000 );
                        }
                    }
                    else
                    {
                        l_U2154[1] = 1;
                    }
                }
                else if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 753.78670000, 56.19190000, 4.92670000, 2.00000000, 2.00000000, 3.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 27, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[1], 753.78670000, 56.19190000, 4.92670000, 3, -2, 1.00000000 );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[1], 753.78670000, 56.19190000, 4.92670000, 0.75000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_SEEK_COVER_TO_COORDS( 0, 753.78670000, 56.19190000, 4.92670000, 776.20170000, 65.93590000, 4.96230000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
            if (l_U2104 == 1)
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 773.89970000, 59.07180000, 6.01210000, 2.00000000, 2.00000000, 3.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 27, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[1], 773.89970000, 59.07180000, 6.01210000, 3, -2, 1.00000000 );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                    if (l_U960[1] == 7)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[1], 0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[1], 773.89970000, 59.07180000, 6.01210000, 0.75000000 );
                        OPEN_SEQUENCE_TASK( ref l_U1681 );
                        TASK_AIM_GUN_AT_COORD( 0, 781.12380000, 85.94360000, 5.13970000, 10000 );
                        CLOSE_SEQUENCE_TASK( l_U1681 );
                        TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                        CLEAR_SEQUENCE_TASK( l_U1681 );
                    }
                }
            }
        }
    }
    return;
}

void sub_102639()
{
    if (l_U2104 == 0)
    {
        if (DOES_CHAR_EXIST( l_U2105[0] ))
        {
            if (IS_CHAR_INJURED( l_U2105[0] ))
            {
                if (DOES_CHAR_EXIST( l_U2105[1] ))
                {
                    if (IS_CHAR_INJURED( l_U2105[1] ))
                    {
                        if (DOES_CHAR_EXIST( l_U2105[2] ))
                        {
                            if (IS_CHAR_INJURED( l_U2105[2] ))
                            {
                                l_U2104++;
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U2104 == 1)
    {
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_7291(), 775.34050000, 53.70230000, 5.00680000, 7.00000000, 7.00000000, 7.00000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_7291(), l_U2161[5]._fU0, l_U2161[5]._fU4, l_U2161[5]._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
        {
            l_U2104++;
        }
    }
    if (l_U2104 == 2)
    {
        CLEAR_PRINTS();
        if (DOES_BLIP_EXIST( l_U2198 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2198 );
        }
        GET_GAME_TIMER( ref l_U808[0] );
        l_U795 = 14;
    }
    return;
}

void sub_102998()
{
    for ( l_U799 = 0; l_U799 < 12; l_U799++ )
    {
        if (l_U799 > 8)
        {
            if (DOES_BLIP_EXIST( l_U2057[l_U799] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2057[l_U799] );
            }
        }
    }
    for ( l_U799 = 0; l_U799 < 3; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U2105[l_U799] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2105[l_U799] )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U2105[l_U799] )))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U2113[l_U799] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U2105[l_U799], ref l_U2113[l_U799] );
                        SET_BLIP_AS_FRIENDLY( l_U2113[l_U799], 0 );
                        CHANGE_BLIP_SCALE( l_U2113[l_U799], 0.50000000 );
                        CHANGE_BLIP_DISPLAY( l_U2113[l_U799], 2 );
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U2113[l_U799] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2113[l_U799] );
            }
        }
    }
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U908[l_U799] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U981[l_U799] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U908[l_U799], ref l_U981[l_U799] );
                    SET_BLIP_AS_FRIENDLY( l_U981[l_U799], 1 );
                    CHANGE_BLIP_SCALE( l_U981[l_U799], 0.50000000 );
                    CHANGE_BLIP_DISPLAY( l_U981[l_U799], 2 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U981[l_U799] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U981[l_U799] );
            }
        }
    }
    if (l_U2104 == 1)
    {
        if (l_U2313[1])
        {
            if (NOT l_U2192[1])
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT (sub_3725( l_U1718 )))
                    {
                        PRINT_NOW( "F1_Z42", 7500, 1 );
                        l_U2192[1] = 1;
                    }
                }
            }
        }
    }
    if (l_U2104 == 1)
    {
        if (DOES_VEHICLE_EXIST( l_U1757[5] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1757[5] ))
            {
                if (NOT (l_U1674 > 0))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U2198 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U1757[5], ref l_U2198 );
                        SET_BLIP_AS_FRIENDLY( l_U2198, 1 );
                        CHANGE_BLIP_DISPLAY( l_U2198, 2 );
                    }
                }
                else if (DOES_BLIP_EXIST( l_U2198 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2198 );
                }
            }
        }
        if (NOT l_U2313[1])
        {
            if (NOT (sub_3725( l_U1718 )))
            {
                sub_3909( ref l_U1718, 0 );
            }
            if (NOT (sub_3725( l_U1712 )))
            {
                sub_3909( ref l_U1712, 0 );
            }
            if (IS_MESSAGE_BEING_DISPLAYED())
            {
                CLEAR_PRINTS();
            }
            sub_21601( "E2F1BAU" );
            sub_21664( "E2F1_ACAR", ref l_U1718, 6, 1 );
            l_U2313[1] = 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U2105[0] )))
    {
        if (NOT (IS_CHAR_DEAD( l_U2105[1] )))
        {
            if (NOT (IS_CHAR_DEAD( l_U2105[2] )))
            {
                if (NOT (sub_3725( l_U1718 )))
                {
                    if (NOT (sub_3725( l_U1712 )))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U2313[0])
                            {
                                sub_21601( "E2F1BAU" );
                                sub_21664( "E2F1_AENC", ref l_U1718, 6, 1 );
                                l_U2313[0] = 1;
                            }
                        }
                    }
                }
                if (NOT (sub_3725( l_U1718 )))
                {
                    if (NOT (sub_3725( l_U1712 )))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (l_U2313[0])
                            {
                                if (NOT l_U2192[0])
                                {
                                    PRINT_NOW( "F1_Z1", 7500, 1 );
                                    l_U2192[0] = 1;
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

void sub_104314()
{
    int iVar2;

    GET_GAME_TIMER( ref l_U811[0] );
    l_U814[0] = l_U811[0] - l_U808[0];
    if (l_U814[0] > 2000)
    {
        if ((l_U2128 > 1) AND (l_U2128 < 16))
        {
            if (sub_104399())
            {
                if (NOT l_U933)
                {
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        if (NOT IS_SCREEN_FADING_OUT())
                        {
                            DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                            WAIT( 500 );
                            sub_3909( ref l_U1718, 0 );
                            sub_3909( ref l_U1712, 0 );
                            sub_3909( ref l_U1724, 0 );
                            l_U2128 = 17;
                        }
                    }
                    else
                    {
                        l_U2128 = 17;
                    }
                }
            }
            else
            {
                l_U933 = 0;
            }
        }
    }
    switch (l_U2128)
    {
        case 0:
        if (sub_39556( 1, 1 ))
        {
            SET_PLAYER_CONTROL( sub_20771(), 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            CLEAR_PRINTS();
            CLEAR_HELP();
            if (DOES_BLIP_EXIST( l_U981[0] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U981[0] );
            }
            if (DOES_BLIP_EXIST( l_U981[1] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U981[1] );
            }
            if (DOES_BLIP_EXIST( l_U2198 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2198 );
            }
            if (sub_3725( l_U1718 ))
            {
                sub_3909( ref l_U1718, 0 );
            }
            if (sub_3725( l_U1712 ))
            {
                sub_3909( ref l_U1712, 0 );
            }
            if (sub_3725( l_U1724 ))
            {
                sub_3909( ref l_U1724, 0 );
            }
            if (sub_3725( l_U1742 ))
            {
                sub_3909( ref l_U1742, 0 );
            }
            l_U2128 = 1;
        }
        break;
        case 1:
        if (NOT (DOES_VEHICLE_EXIST( l_U2126 )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1998[8] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1998[9] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1998[10] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1998[11] );
            if (DOES_VEHICLE_EXIST( l_U2016 ))
            {
                DELETE_CAR( ref l_U2016 );
            }
            CREATE_CAR( 837858166, 842.73830000, -76.86670000, 5.78490000, ref l_U2126, 1 );
            CREATE_CHAR_INSIDE_CAR( l_U2126, 26, -1004762946, ref l_U2127 );
            SET_CHAR_RELATIONSHIP( l_U2127, 1, 26 );
            SET_CHAR_RELATIONSHIP( l_U2127, 5, 0 );
            SET_PED_DIES_WHEN_INJURED( l_U2127, 1 );
            HELI_AUDIO_SHOULD_SKIP_STARTUP( l_U2126, 1 );
            SET_HELI_BLADES_FULL_SPEED( l_U2126 );
            ADD_ARMOUR_TO_CHAR( l_U2127, 0 );
            CREATE_CHAR_AS_PASSENGER( l_U2126, 6, -1004762946, 1, ref l_U2200[1] );
            SET_CHAR_RELATIONSHIP_GROUP( l_U2200[1], 26 );
            SET_CHAR_RELATIONSHIP( l_U2200[1], 1, 26 );
            SET_CHAR_RELATIONSHIP( l_U2200[1], 5, 0 );
            SET_CHAR_DECISION_MAKER( l_U2200[1], l_U984 );
            SET_COMBAT_DECISION_MAKER( l_U2200[1], l_U993 );
            SET_SENSE_RANGE( l_U2200[1], 120.00000000 );
            GIVE_WEAPON_TO_CHAR( l_U2200[1], 15, 2500, 0 );
            SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( l_U2200[1], 0 );
            SET_CHAR_ACCURACY( l_U2200[1], 1 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U2200[1], 1 );
            SET_CHAR_AS_ENEMY( l_U2200[1], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U2200[1], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U2200[1], 1 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2200[1], 0 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U2200[1], 0 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U2200[1], 1 );
            TASK_DRIVE_BY( l_U2200[1], sub_7291(), 0, 0.00000000, 0.00000000, 0.00000000, 600.00000000, 8, 0, 100 );
            SET_CHAR_KEEP_TASK( l_U2200[1], 1 );
            CREATE_CHAR_AS_PASSENGER( l_U2126, 6, -1004762946, 2, ref l_U2200[2] );
            SET_CHAR_RELATIONSHIP_GROUP( l_U2200[2], 26 );
            SET_CHAR_RELATIONSHIP( l_U2200[2], 1, 26 );
            SET_CHAR_RELATIONSHIP( l_U2200[2], 5, 0 );
            SET_CHAR_DECISION_MAKER( l_U2200[2], l_U984 );
            SET_COMBAT_DECISION_MAKER( l_U2200[2], l_U993 );
            SET_SENSE_RANGE( l_U2200[2], 120.00000000 );
            GIVE_WEAPON_TO_CHAR( l_U2200[2], 13, 500, 0 );
            SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( l_U2200[2], 0 );
            SET_CHAR_ACCURACY( l_U2200[2], 10 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U2200[2], 1 );
            SET_CHAR_AS_ENEMY( l_U2200[2], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U2200[2], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U2200[2], 1 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2200[2], 0 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U2200[2], 1 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U2200[2], 0 );
            TASK_DRIVE_BY( l_U2200[2], sub_7291(), 0, 0.00000000, 0.00000000, 0.00000000, 600.00000000, 8, 0, 100 );
            SET_CHAR_KEEP_TASK( l_U2200[2], 1 );
        }
        BEGIN_CAM_COMMANDS( ref l_U800 );
        l_U2223[0] = 1;
        CREATE_CAM( 14, ref l_U2130 );
        SET_CAM_POS( l_U2130, 797.47400000, 48.14346000, 6.44370900 );
        SET_CAM_ROT( l_U2130, -1.35597400, 0.00000000, 73.13654000 );
        SET_CAM_FOV( l_U2130, 18.90007000 );
        CREATE_CAM( 14, ref l_U2131 );
        SET_CAM_POS( l_U2131, 805.62180000, -6.22559500, 14.01276000 );
        SET_CAM_ROT( l_U2131, -5.09570600, 0.00000000, 10.99969000 );
        SET_CAM_FOV( l_U2131, 18.90007000 );
        CREATE_CAM( 14, ref l_U2132[0] );
        CREATE_CAM( 14, ref l_U2132[1] );
        CREATE_CAM( 3, ref l_U2138 );
        SET_CAM_POS( l_U2132[0], 792.99540000, 74.58801000, 5.53914900 );
        SET_CAM_ROT( l_U2132[0], 3.04029600, 0.00000000, 174.26250000 );
        SET_CAM_FOV( l_U2132[0], 18.90007000 );
        SET_CAM_POS( l_U2132[1], 792.99540000, 74.58801000, 5.53914900 );
        SET_CAM_ROT( l_U2132[1], 3.04029500, 0.00000000, 123.04000000 );
        SET_CAM_FOV( l_U2132[1], 18.90007000 );
        CREATE_CAM( 14, ref l_U2135[0] );
        CREATE_CAM( 14, ref l_U2135[1] );
        CREATE_CAM( 3, ref l_U2139 );
        SET_CAM_POS( l_U2135[0], 789.01350000, 58.22705000, 6.40093700 );
        SET_CAM_ROT( l_U2135[0], -2.41042400, 0.00000000, 55.19230000 );
        SET_CAM_FOV( l_U2135[0], 33.30003000 );
        SET_CAM_POS( l_U2135[1], 789.19790000, 62.23780000, 6.20158700 );
        SET_CAM_ROT( l_U2135[1], -2.41042400, 0.00000000, 69.86002000 );
        SET_CAM_FOV( l_U2135[1], 33.30003000 );
        SET_CAM_ACTIVE( l_U2130, 1 );
        SET_CAM_ACTIVE( l_U2131, 1 );
        SET_CAM_ACTIVE( l_U2132[0], 1 );
        SET_CAM_ACTIVE( l_U2132[1], 1 );
        SET_CAM_ACTIVE( l_U2132[0], 1 );
        SET_CAM_ACTIVE( l_U2132[1], 1 );
        SET_CAM_PROPAGATE( l_U2130, 0 );
        SET_CAM_PROPAGATE( l_U2131, 0 );
        SET_CAM_PROPAGATE( l_U2132[0], 0 );
        SET_CAM_PROPAGATE( l_U2132[1], 0 );
        SET_CAM_PROPAGATE( l_U2132[0], 0 );
        SET_CAM_PROPAGATE( l_U2132[1], 0 );
        CLEAR_AREA( 785.64310000, 57.06370000, 5.02770000, 30.00000000, 1 );
        l_U2128++;
        break;
        case 2:
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[0] );
                SET_CHAR_HEADING( l_U908[0], 259.72720000 );
                SET_CHAR_COORDINATES( l_U908[0], 780.98740000, 53.89530000, 4.91220000 );
                UNLOCK_RAGDOLL( l_U908[0], 0 );
                SET_NEXT_DESIRED_MOVE_STATE( 4 );
                MODIFY_CHAR_MOVE_BLEND_RATIO( l_U908[0], 3.00000000 );
            }
        }
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[1] );
                SET_CHAR_HEADING( l_U908[1], 255.59090000 );
                SET_CHAR_COORDINATES( l_U908[1], 781.48390000, 49.66040000, 4.92670000 );
                UNLOCK_RAGDOLL( l_U908[1], 0 );
                SET_NEXT_DESIRED_MOVE_STATE( 4 );
                MODIFY_CHAR_MOVE_BLEND_RATIO( l_U908[1], 3.00000000 );
            }
        }
        CLEAR_CHAR_TASKS( sub_7291() );
        SET_CHAR_HEADING( sub_7291(), 267.51960000 );
        SET_CHAR_COORDINATES( sub_7291(), 780.17220000, 51.82330000, 4.96330000 );
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                if (DOES_VEHICLE_EXIST( l_U1757[5] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1757[5] ))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 12, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            TASK_ENTER_CAR_AS_DRIVER( l_U908[1], l_U1757[5], -2 );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                if (DOES_VEHICLE_EXIST( l_U1757[5] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1757[5] ))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 11, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            TASK_ENTER_CAR_AS_PASSENGER( l_U908[0], l_U1757[5], -2, 1 );
                        }
                    }
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U1757[5] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1757[5] ))
            {
                GET_SCRIPT_TASK_STATUS( sub_7291(), 11, ref l_U963 );
                if (l_U963 == 7)
                {
                    TASK_ENTER_CAR_AS_PASSENGER( sub_7291(), l_U1757[5], -2, 0 );
                }
            }
        }
        l_U2128++;
        break;
        case 3:
        SET_CAM_PROPAGATE( l_U2130, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                if (DOES_VEHICLE_EXIST( l_U1757[5] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1757[5] ))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 12, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            SET_NEXT_DESIRED_MOVE_STATE( 4 );
                            MODIFY_CHAR_MOVE_BLEND_RATIO( l_U908[1], 3.00000000 );
                            TASK_ENTER_CAR_AS_DRIVER( l_U908[1], l_U1757[5], -2 );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                if (DOES_VEHICLE_EXIST( l_U1757[5] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1757[5] ))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 11, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            SET_NEXT_DESIRED_MOVE_STATE( 4 );
                            MODIFY_CHAR_MOVE_BLEND_RATIO( l_U908[0], 3.00000000 );
                            TASK_ENTER_CAR_AS_PASSENGER( l_U908[0], l_U1757[5], -2, 1 );
                        }
                    }
                }
            }
        }
        l_U2128 = 4;
        break;
        case 4:
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                if (DOES_VEHICLE_EXIST( l_U1757[5] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1757[5] ))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[1], 12, ref l_U960[1] );
                        if (l_U960[1] == 7)
                        {
                            TASK_ENTER_CAR_AS_DRIVER( l_U908[1], l_U1757[5], -2 );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                if (DOES_VEHICLE_EXIST( l_U1757[5] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1757[5] ))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U908[0], 11, ref l_U960[0] );
                        if (l_U960[0] == 7)
                        {
                            TASK_ENTER_CAR_AS_PASSENGER( l_U908[0], l_U1757[5], -2, 1 );
                        }
                    }
                }
            }
        }
        if (l_U814[0] > 3600)
        {
            if (NOT l_U2316[0])
            {
                if (IS_MESSAGE_BEING_DISPLAYED())
                {
                    CLEAR_PRINTS();
                }
                sub_21601( "E2F1BAU" );
                sub_21664( "E2F1_CRLK", ref l_U1724, 6, 1 );
                l_U2316[0] = 1;
            }
        }
        if (l_U2316[0] == 1)
        {
            if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1819 )))
            {
                REQUEST_CAR_RECORDING( 1819 );
            }
            else if (DOES_VEHICLE_EXIST( l_U2126 ))
            {
                if (IS_VEH_DRIVEABLE( l_U2126 ))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U2126, 1819 );
                    l_U2129 = 1;
                    l_U2128++;
                }
            }
        }
        break;
        case 5:
        if (l_U814[0] > 4500)
        {
            if (DOES_VEHICLE_EXIST( l_U2126 ))
            {
                if (IS_VEH_DRIVEABLE( l_U2126 ))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2126 ))
                    {
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2126, 800 );
                        SET_CAM_PROPAGATE( l_U2130, 0 );
                        SET_CAM_PROPAGATE( l_U2132[0], 1 );
                        l_U2128++;
                    }
                }
            }
        }
        break;
        case 6:
        if (l_U814[0] > 5100)
        {
            if (NOT l_U2316[1])
            {
                if (NOT (sub_3725( l_U1724 )))
                {
                    if (IS_MESSAGE_BEING_DISPLAYED())
                    {
                        CLEAR_PRINTS();
                    }
                    l_U2339 = 1;
                    sub_21601( "E2F1BAU" );
                    sub_21664( "E2F1_HCHOP", ref l_U1724, 6, 1 );
                    l_U2316[1] = 1;
                }
            }
        }
        if (l_U2316[1] == 1)
        {
            l_U2128++;
        }
        break;
        case 7:
        if (IS_CAM_PROPAGATING( l_U2132[0] ))
        {
            SET_CAM_PROPAGATE( l_U2132[0], 0 );
            SET_CAM_PROPAGATE( l_U2138, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U2138, l_U2132[0], l_U2132[1], 20000, 0 );
        }
        l_U2128++;
        break;
        case 8:
        l_U2128++;
        break;
        case 9:
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                if (l_U960[1] == 7)
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 4 );
                    OPEN_SEQUENCE_TASK( ref l_U1681 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 774.53030000, 69.21800000, 4.96710000, 4, -2, 3.00000000 );
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, 774.53030000, 69.21800000, 4.96710000, 30000 );
                    CLOSE_SEQUENCE_TASK( l_U1681 );
                    TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                    CLEAR_SEQUENCE_TASK( l_U1681 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U908[0], 29, ref l_U960[0] );
                if (l_U960[0] == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U1681 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 778.64650000, 68.27030000, 4.88740000, 4, -2, 3.00000000 );
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, 778.64650000, 68.27030000, 4.88740000, 30000 );
                    CLOSE_SEQUENCE_TASK( l_U1681 );
                    TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                    CLEAR_SEQUENCE_TASK( l_U1681 );
                }
            }
        }
        GET_SCRIPT_TASK_STATUS( sub_7291(), 27, ref l_U963 );
        if (l_U963 == 7)
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_7291(), 781.00900000, 69.35880000, 5.05560000, 4, -2, 1.00000000 );
        }
        if (NOT l_U2316[2])
        {
            if (l_U2316[0])
            {
                if (l_U2316[1])
                {
                    if (NOT (sub_3725( l_U1718 )))
                    {
                        if (NOT (sub_3725( l_U1712 )))
                        {
                            if (NOT (sub_3725( l_U1724 )))
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    sub_21601( "E2F1BAU" );
                                    sub_21664( "E2F1_VAN", ref l_U1724, 6, 1 );
                                    l_U2128++;
                                    l_U2316[2] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 10:
        l_U2128++;
        break;
        case 11:
        l_U2128++;
        break;
        case 12:
        l_U2128++;
        break;
        case 13:
        if (NOT (HAS_CHAR_GOT_WEAPON( sub_7291(), 18 )))
        {
            GIVE_WEAPON_TO_CHAR( sub_7291(), 18, 3, 1 );
            l_U2128 = 14;
        }
        else
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_7291(), 18, ref iVar2 );
            if (iVar2 < 3)
            {
                SET_CHAR_AMMO( sub_7291(), 18, 3 );
            }
            SET_CURRENT_CHAR_WEAPON( sub_7291(), 18, 1 );
            l_U2128 = 14;
        }
        break;
        case 14:
        if (NOT l_U2316[3])
        {
            if (l_U2316[0])
            {
                if (l_U2316[1])
                {
                    if (l_U2316[2])
                    {
                        if (NOT (sub_3725( l_U1718 )))
                        {
                            if (NOT (sub_3725( l_U1712 )))
                            {
                                if (NOT (sub_3725( l_U1724 )))
                                {
                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                    {
                                        sub_21601( "E2F1BAU" );
                                        sub_21664( "E2F1_LRKT", ref l_U1724, 6, 1 );
                                        l_U2128++;
                                        l_U2316[3] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 15:
        if (DOES_VEHICLE_EXIST( l_U2126 ))
        {
            if (IS_VEH_DRIVEABLE( l_U2126 ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2126 ))
                {
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2126, 5000 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[0] )))
            {
                CLEAR_CHAR_TASKS( l_U908[0] );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[0], 778.64650000, 68.27030000, 4.88740000, 10.00000000 );
            }
        }
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[1] )))
            {
                CLEAR_CHAR_TASKS( l_U908[1] );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[1], 774.53030000, 69.21800000, 4.96710000, 10.00000000 );
            }
        }
        CLEAR_CHAR_TASKS( sub_7291() );
        if (DOES_CAM_EXIST( l_U2130 ))
        {
            if (IS_CAM_PROPAGATING( l_U2130 ))
            {
                SET_CAM_PROPAGATE( l_U2130, 0 );
            }
            if (IS_CAM_ACTIVE( l_U2130 ))
            {
                SET_CAM_ACTIVE( l_U2130, 0 );
            }
            DESTROY_CAM( l_U2130 );
        }
        if (DOES_CAM_EXIST( l_U2131 ))
        {
            if (IS_CAM_PROPAGATING( l_U2131 ))
            {
                SET_CAM_PROPAGATE( l_U2131, 0 );
            }
            if (IS_CAM_ACTIVE( l_U2131 ))
            {
                SET_CAM_ACTIVE( l_U2131, 0 );
            }
            DESTROY_CAM( l_U2131 );
        }
        if (DOES_CAM_EXIST( l_U2132[0] ))
        {
            if (IS_CAM_PROPAGATING( l_U2132[0] ))
            {
                SET_CAM_PROPAGATE( l_U2132[0], 0 );
            }
            if (IS_CAM_ACTIVE( l_U2132[0] ))
            {
                SET_CAM_ACTIVE( l_U2132[0], 0 );
            }
            DESTROY_CAM( l_U2132[0] );
        }
        if (DOES_CAM_EXIST( l_U2132[1] ))
        {
            if (IS_CAM_PROPAGATING( l_U2132[1] ))
            {
                SET_CAM_PROPAGATE( l_U2132[1], 0 );
            }
            if (IS_CAM_ACTIVE( l_U2132[1] ))
            {
                SET_CAM_ACTIVE( l_U2132[1], 0 );
            }
            DESTROY_CAM( l_U2132[1] );
        }
        if (DOES_CAM_EXIST( l_U2135[0] ))
        {
            if (IS_CAM_PROPAGATING( l_U2135[0] ))
            {
                SET_CAM_PROPAGATE( l_U2135[0], 0 );
            }
            if (IS_CAM_ACTIVE( l_U2135[0] ))
            {
                SET_CAM_ACTIVE( l_U2135[0], 0 );
            }
            DESTROY_CAM( l_U2135[0] );
        }
        if (DOES_CAM_EXIST( l_U2135[1] ))
        {
            if (IS_CAM_PROPAGATING( l_U2135[1] ))
            {
                SET_CAM_PROPAGATE( l_U2135[1], 0 );
            }
            if (IS_CAM_ACTIVE( l_U2135[1] ))
            {
                SET_CAM_ACTIVE( l_U2135[1], 0 );
            }
            DESTROY_CAM( l_U2135[1] );
        }
        if (DOES_CAM_EXIST( l_U2138 ))
        {
            if (IS_CAM_PROPAGATING( l_U2138 ))
            {
                SET_CAM_PROPAGATE( l_U2138, 0 );
            }
            if (IS_CAM_ACTIVE( l_U2138 ))
            {
                SET_CAM_ACTIVE( l_U2138, 0 );
            }
            DESTROY_CAM( l_U2138 );
        }
        if (DOES_CAM_EXIST( l_U2139 ))
        {
            if (IS_CAM_PROPAGATING( l_U2139 ))
            {
                SET_CAM_PROPAGATE( l_U2139, 0 );
            }
            if (IS_CAM_ACTIVE( l_U2139 ))
            {
                SET_CAM_ACTIVE( l_U2139, 0 );
            }
            DESTROY_CAM( l_U2139 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U800 );
        SET_CAM_BEHIND_PED( sub_7291() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_PLAYER_CONTROL( sub_20771(), 1 );
        l_U2128 = 16;
        break;
        case 16:
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_IN())
            {
                DO_SCREEN_FADE_IN_UNHACKED( 500 );
            }
        }
        else
        {
            l_U795 = 12;
        }
        break;
        case 17:
        if (l_U2223[0])
        {
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                {
                    CLEAR_CHAR_TASKS( l_U908[0] );
                }
            }
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                {
                    CLEAR_CHAR_TASKS( l_U908[1] );
                }
            }
            CLEAR_CHAR_TASKS( sub_7291() );
            if (DOES_CAM_EXIST( l_U2130 ))
            {
                if (IS_CAM_PROPAGATING( l_U2130 ))
                {
                    SET_CAM_PROPAGATE( l_U2130, 0 );
                }
                if (IS_CAM_ACTIVE( l_U2130 ))
                {
                    SET_CAM_ACTIVE( l_U2130, 0 );
                }
                DESTROY_CAM( l_U2130 );
            }
            if (DOES_CAM_EXIST( l_U2131 ))
            {
                if (IS_CAM_PROPAGATING( l_U2131 ))
                {
                    SET_CAM_PROPAGATE( l_U2131, 0 );
                }
                if (IS_CAM_ACTIVE( l_U2131 ))
                {
                    SET_CAM_ACTIVE( l_U2131, 0 );
                }
                DESTROY_CAM( l_U2131 );
            }
            if (DOES_CAM_EXIST( l_U2132[0] ))
            {
                if (IS_CAM_PROPAGATING( l_U2132[0] ))
                {
                    SET_CAM_PROPAGATE( l_U2132[0], 0 );
                }
                if (IS_CAM_ACTIVE( l_U2132[0] ))
                {
                    SET_CAM_ACTIVE( l_U2132[0], 0 );
                }
                DESTROY_CAM( l_U2132[0] );
            }
            if (DOES_CAM_EXIST( l_U2132[1] ))
            {
                if (IS_CAM_PROPAGATING( l_U2132[1] ))
                {
                    SET_CAM_PROPAGATE( l_U2132[1], 0 );
                }
                if (IS_CAM_ACTIVE( l_U2132[1] ))
                {
                    SET_CAM_ACTIVE( l_U2132[1], 0 );
                }
                DESTROY_CAM( l_U2132[1] );
            }
            if (DOES_CAM_EXIST( l_U2135[0] ))
            {
                if (IS_CAM_PROPAGATING( l_U2135[0] ))
                {
                    SET_CAM_PROPAGATE( l_U2135[0], 0 );
                }
                if (IS_CAM_ACTIVE( l_U2135[0] ))
                {
                    SET_CAM_ACTIVE( l_U2135[0], 0 );
                }
                DESTROY_CAM( l_U2135[0] );
            }
            if (DOES_CAM_EXIST( l_U2135[1] ))
            {
                if (IS_CAM_PROPAGATING( l_U2135[1] ))
                {
                    SET_CAM_PROPAGATE( l_U2135[1], 0 );
                }
                if (IS_CAM_ACTIVE( l_U2135[1] ))
                {
                    SET_CAM_ACTIVE( l_U2135[1], 0 );
                }
                DESTROY_CAM( l_U2135[1] );
            }
            if (DOES_CAM_EXIST( l_U2138 ))
            {
                if (IS_CAM_PROPAGATING( l_U2138 ))
                {
                    SET_CAM_PROPAGATE( l_U2138, 0 );
                }
                if (IS_CAM_ACTIVE( l_U2138 ))
                {
                    SET_CAM_ACTIVE( l_U2138, 0 );
                }
                DESTROY_CAM( l_U2138 );
            }
            if (DOES_CAM_EXIST( l_U2139 ))
            {
                if (IS_CAM_PROPAGATING( l_U2139 ))
                {
                    SET_CAM_PROPAGATE( l_U2139, 0 );
                }
                if (IS_CAM_ACTIVE( l_U2139 ))
                {
                    SET_CAM_ACTIVE( l_U2139, 0 );
                }
                DESTROY_CAM( l_U2139 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U800 );
            l_U2223[0] = 0;
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                SET_CHAR_COORDINATES( l_U908[0], 778.64650000, 68.27030000, 4.88740000 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U908[0], 778.64650000, 68.27030000, 4.88740000, 30000 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[0], 778.64650000, 68.27030000, 4.88740000, 10.00000000 );
            }
        }
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                SET_CHAR_COORDINATES( l_U908[1], 774.53030000, 69.21800000, 4.96710000 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U908[1], 774.53030000, 69.21800000, 4.96710000, 30000 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U908[1], 774.53030000, 69.21800000, 4.96710000, 10.00000000 );
            }
        }
        if (NOT (HAS_CHAR_GOT_WEAPON( sub_7291(), 18 )))
        {
            GIVE_WEAPON_TO_CHAR( sub_7291(), 18, 3, 1 );
        }
        else
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_7291(), 18, ref iVar2 );
            if (iVar2 < 3)
            {
                SET_CHAR_AMMO( sub_7291(), 18, 3 );
            }
            SET_CURRENT_CHAR_WEAPON( sub_7291(), 18, 1 );
        }
        SET_CHAR_COORDINATES( sub_7291(), 781.00900000, 69.35880000, 5.05560000 );
        SET_CHAR_HEADING( sub_7291(), 13.58700000 );
        SET_CAM_BEHIND_PED( sub_7291() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U2128 = 18;
        break;
        case 18:
        if (DOES_VEHICLE_EXIST( l_U2126 ))
        {
            if (IS_VEH_DRIVEABLE( l_U2126 ))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2126 )))
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1819 )))
                    {
                        REQUEST_CAR_RECORDING( 1819 );
                    }
                    else
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U2126, 1819 );
                    }
                }
                else
                {
                    l_U2128 = 19;
                }
            }
        }
        break;
        case 19:
        if (DOES_VEHICLE_EXIST( l_U2126 ))
        {
            if (IS_VEH_DRIVEABLE( l_U2126 ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2126 ))
                {
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2126, 16000 );
                    l_U2128 = 20;
                }
            }
        }
        break;
        case 20:
        if (NOT IS_SCREEN_FADED_IN())
        {
            if (NOT IS_SCREEN_FADING_IN())
            {
                DO_SCREEN_FADE_IN_UNHACKED( 4000 );
                SET_PLAYER_CONTROL( sub_20771(), 1 );
                SET_WIDESCREEN_BORDERS( 0 );
            }
        }
        else
        {
            l_U795 = 12;
        }
        break;
    }
    return;
}

int sub_104399()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_112678(unknown uParam0, unknown uParam1)
{
    float fVar4;
    unknown uVar5;
    float fVar6;
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
    int iVar19;
    int iVar20;
    int iVar21;

    if (l_U2339)
    {
        switch (l_U2140)
        {
            case 0:
            if ((IS_VEH_DRIVEABLE( uParam0 )) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
            {
                GET_CAR_COORDINATES( uParam0, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
                GET_CHAR_COORDINATES( sub_7291(), ref l_U2141._fU0, ref l_U2141._fU4, ref l_U2141._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar16._fU0, uVar16._fU4, uVar16._fU8, l_U2141._fU0, l_U2141._fU4, l_U2141._fU8, ref fVar6 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -2.30000000, 2, 0, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 2.30000000, 2, 0, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
                GET_CAR_PITCH( uParam0, ref uVar7 );
                GET_CAR_ROLL( uParam0, ref uVar8 );
                GET_CAR_HEADING( uParam0, ref uVar9 );
                if ((fVar6 < 500) AND (sub_112963( uParam1 )))
                {
                    GENERATE_RANDOM_FLOAT( ref fVar4 );
                    if (NOT (IS_CHAR_INJURED( sub_7291() )))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_7291(), -283.97000000, -94.95000000, 368.13500000, 1, 1, 25, 0 )))
                        {
                            if (fVar4 <= 0.10000000)
                            {
                                iVar21 = 0;
                                iVar19 = 0;
                                iVar20 = 0;
                            }
                            else
                            {
                                GENERATE_RANDOM_FLOAT( ref uVar5 );
                                if ((fVar4 > 0.10000000) AND (fVar4 <= 0.40000000))
                                {
                                    iVar19 = -2;
                                    iVar20 = 2;
                                }
                                else if ((fVar4 > 0.40000000) AND (fVar4 <= 0.60000000))
                                {
                                    iVar19 = 2;
                                    iVar20 = -2;
                                }
                                else if ((fVar4 > 0.60000000) AND (fVar4 <= 0.80000000))
                                {
                                    iVar19 = -2;
                                    iVar20 = -2;
                                }
                                else if ((fVar4 > 0.80000000) AND (fVar4 <= 1.00000000))
                                {
                                    iVar19 = 2;
                                    iVar20 = 2;
                                };;;;
                            }
                        }
                        else if (fVar4 <= 0.20000000)
                        {
                            iVar21 = 0;
                            iVar19 = 0;
                            iVar20 = 0;
                        }
                        else
                        {
                            GENERATE_RANDOM_FLOAT( ref uVar5 );
                            if ((fVar4 > 0.20000000) AND (fVar4 <= 0.60000000))
                            {
                                iVar19 = 2;
                                iVar20 = -2;
                            }
                            else if ((fVar4 > 0.60000000) AND (fVar4 <= 0.80000000))
                            {
                                iVar19 = -2;
                                iVar20 = -2;
                            }
                            else if ((fVar4 > 0.80000000) AND (fVar4 <= 1.00000000))
                            {
                                iVar19 = 2;
                                iVar20 = 2;
                            };;;
                        }
                    }
                    TRIGGER_PTFX( "muz_minigun", uVar10, uVar7, uVar8, uVar9, 1 );
                    TRIGGER_PTFX( "muz_minigun", uVar13, uVar7, uVar8, uVar9, 1 );
                    if (l_U2144 == 0)
                    {
                        l_U2145 = GET_SOUND_ID();
                        PLAY_SOUND_FROM_POSITION( l_U2145, "F1_CORNER_KIDS_HELI_MINIGUN", uVar16._fU0, uVar16._fU4, uVar16._fU8 );
                        l_U2144 = 1;
                    }
                    if (NOT (IS_CHAR_INJURED( sub_7291() )))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_7291(), -283.97000000, -94.95000000, 368.13500000, 1, 1, 25, 0 )))
                        {
                            FIRE_SINGLE_BULLET( uVar10._fU0, uVar10._fU4, uVar10._fU8, l_U2141._fU0 + iVar19, l_U2141._fU4 + iVar20, l_U2141._fU8 + iVar21, 4 );
                            FIRE_SINGLE_BULLET( uVar13._fU0, uVar13._fU4, uVar13._fU8, l_U2141._fU0 + iVar19, l_U2141._fU4 + iVar20, l_U2141._fU8 + iVar21, 4 );
                            l_U2140++;
                        }
                        else
                        {
                            FIRE_SINGLE_BULLET( uVar10._fU0, uVar10._fU4, uVar10._fU8, l_U2141._fU0 + iVar19, l_U2141._fU4 + iVar20, l_U2141._fU8 + iVar21, 12 );
                            FIRE_SINGLE_BULLET( uVar13._fU0, uVar13._fU4, uVar13._fU8, l_U2141._fU0 + iVar19, l_U2141._fU4 + iVar20, l_U2141._fU8 + iVar21, 12 );
                            l_U2140++;
                        }
                    }
                }
                else if (l_U2144 == 1)
                {
                    STOP_SOUND( l_U2145 );
                    RELEASE_SOUND_ID( l_U2145 );
                    l_U2144 = 0;
                }
            }
            else if (l_U2144 == 1)
            {
                STOP_SOUND( l_U2145 );
                RELEASE_SOUND_ID( l_U2145 );
                l_U2144 = 0;
            }
            break;
            case 1:
            SETTIMERA( 0 );
            l_U2140++;
            break;
            case 2:
            if (l_U2146 < 15)
            {
                if (TIMERA() > 50)
                {
                    l_U2146++;
                    l_U2140 = 0;
                }
            }
            else
            {
                SETTIMERB( 0 );
                if (l_U2144 == 1)
                {
                    STOP_SOUND( l_U2145 );
                    RELEASE_SOUND_ID( l_U2145 );
                    l_U2144 = 0;
                }
                l_U2140++;
            }
            break;
            case 3:
            if (l_U795 == 12)
            {
                if (TIMERB() > 2000)
                {
                    l_U2146 = 0;
                    l_U2140 = 0;
                }
            }
            break;
        }
    }
    return;
}

int sub_112963(unknown uParam0)
{
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (IS_CHAR_FACING_CHAR( uParam0, sub_7291(), 120.00000000 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_114212()
{
    return;
}

void sub_114229()
{
    if (DOES_VEHICLE_EXIST( l_U2126 ))
    {
        if (IS_VEH_DRIVEABLE( l_U2126 ))
        {
            sub_112678( l_U2126, l_U2127 );
            if (DOES_CHAR_EXIST( l_U2127 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U2127 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U2127, l_U2126 )))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2126 ))
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U2126 );
                            EXPLODE_CAR( l_U2126, 1, 1 );
                        }
                    }
                }
                else if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2126 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U2126 );
                    EXPLODE_CAR( l_U2126, 1, 1 );
                }
            }
            if (DOES_CHAR_EXIST( l_U2127 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U2127 )))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2126 )))
                    {
                        TASK_HELI_MISSION( l_U2127, l_U2126, 0, sub_7291(), -1, -1, -1, 6, 20, 20, -1, 20, 15 );
                        SET_PED_HELI_PILOT_RESPECTS_MINIMUMM_HEIGHT( l_U2127, 1 );
                    }
                }
            }
        }
        else if (NOT (IS_CAR_DEAD( l_U2126 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2126 ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U2126 );
                EXPLODE_CAR( l_U2126, 1, 0 );
            }
        }
        if (DOES_CHAR_EXIST( l_U2127 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2127 )))
            {
                SET_CHAR_HEALTH( l_U2127, 0 );
            }
        }
        if (DOES_CHAR_EXIST( l_U2200[1] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2200[1] )))
            {
                SET_CHAR_HEALTH( l_U2200[1], 0 );
            }
        }
        if (DOES_CHAR_EXIST( l_U2200[2] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2200[2] )))
            {
                SET_CHAR_HEALTH( l_U2200[2], 0 );
            }
        }
        if (l_U2144 == 1)
        {
            STOP_SOUND( l_U2145 );
            RELEASE_SOUND_ID( l_U2145 );
            l_U2144 = 0;
        }
        if (l_U2157[0])
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                l_U1651 = 0;
                ALLOW_EMERGENCY_SERVICES( 1 );
                sub_114849();
                if (DOES_CHAR_EXIST( l_U908[0] ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                    {
                        SET_CHAR_MAX_HEALTH( l_U908[0], 200 );
                        SET_CHAR_HEALTH( l_U908[0], 200 );
                        SET_CHAR_PROOFS( l_U908[0], 0, 0, 0, 0, 0 );
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U908[0], 1 );
                    }
                }
                if (DOES_CHAR_EXIST( l_U908[1] ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                    {
                        SET_CHAR_MAX_HEALTH( l_U908[1], 200 );
                        SET_CHAR_HEALTH( l_U908[1], 200 );
                        SET_CHAR_PROOFS( l_U908[1], 0, 0, 0, 0, 0 );
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U908[1], 0 );
                    }
                }
                l_U2296 = 0;
                l_U2300 = 0;
                l_U795 = 13;
            }
        }
        if (NOT l_U2157[0])
        {
            if (NOT l_U2322[1])
            {
                if (IS_MESSAGE_BEING_DISPLAYED())
                {
                    CLEAR_PRINTS();
                }
                sub_21601( "E2F1BAU" );
                sub_21664( "E2F1_AOUT", ref l_U1724, 6, 1 );
                l_U2322[1] = 1;
                l_U2157[0] = 1;
            }
        }
    }
    return;
}

void sub_114849()
{
    for ( l_U799 = 0; l_U799 < 6; l_U799++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1757[l_U799] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1757[l_U799] ))
            {
                LOCK_CAR_DOORS( l_U1757[l_U799], 1 );
                SET_CAR_PROOFS( l_U1757[l_U799], 0, 0, 0, 0, 0 );
                FREEZE_CAR_POSITION( l_U1757[l_U799], 0 );
            }
            if (NOT (IS_VEH_DRIVEABLE( l_U1757[l_U799] )))
            {
                if (((l_U799 == 3) || (l_U799 == 4)) || (l_U799 == 5))
                {
                    LOCK_CAR_DOORS( l_U1757[l_U799], 1 );
                    SET_CAR_PROOFS( l_U1757[l_U799], 0, 0, 0, 0, 0 );
                    FREEZE_CAR_POSITION( l_U1757[l_U799], 0 );
                }
            }
        }
    }
    for ( l_U799 = 0; l_U799 < 11; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U1769[l_U799] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1769[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 8; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U1887[l_U799] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1887[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 12; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U1998[l_U799] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1998[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 3; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U1998[l_U799] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1998[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 24; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U1008[l_U799] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1008[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U1569[l_U799] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1569[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 4; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U1035[l_U799] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1035[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 4; l_U799++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1764[l_U799] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1764[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 4; l_U799++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2011[l_U799] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2011[l_U799] );
        }
    }
    for ( l_U799 = 0; l_U799 < 1; l_U799++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2109 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2109 );
        }
    }
    for ( l_U799 = 0; l_U799 < 6; l_U799++ )
    {
        if (NOT (l_U799 == 0))
        {
            if (NOT (l_U799 == 5))
            {
                if (DOES_VEHICLE_EXIST( l_U1757[l_U799] ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1757[l_U799] );
                }
            }
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1004762946 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1758379524 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1337041428 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -660479673 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1941868026 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 469507247 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 2142893183 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -183203150 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1627000575 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1911513875 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 837858166 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1992 );
    return;
}

void sub_116490()
{
    if (DOES_CHAR_EXIST( l_U908[0] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[0] )))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[0], 778.64650000, 68.27030000, 4.88740000, 2.00000000, 2.00000000, 3.00000000, 0 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U908[0], 27, ref l_U960[0] );
                if (l_U960[0] == 7)
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U908[0], 778.64650000, 68.27030000, 4.88740000, 4, -2, 2.00000000 );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U908[0], 29, ref l_U960[0] );
                if (l_U960[0] == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U1681 );
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, 778.64650000, 68.27030000, 4.88740000, -2 );
                    CLOSE_SEQUENCE_TASK( l_U1681 );
                    TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                    CLEAR_SEQUENCE_TASK( l_U1681 );
                }
            }
        }
    }
    return;
}

void sub_116797()
{
    if (DOES_CHAR_EXIST( l_U908[1] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[1] )))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U908[1], 774.53030000, 69.21800000, 4.96710000, 2.00000000, 2.00000000, 3.00000000, 0 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                if (l_U960[1] == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U1681 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 774.53030000, 69.21800000, 4.96710000, 4, -2, 1.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U1681 );
                    TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                    CLEAR_SEQUENCE_TASK( l_U1681 );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U908[1], 29, ref l_U960[1] );
                if (l_U960[1] == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U1681 );
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, 774.53030000, 69.21800000, 4.96710000, 30000 );
                    CLOSE_SEQUENCE_TASK( l_U1681 );
                    TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                    CLEAR_SEQUENCE_TASK( l_U1681 );
                }
            }
        }
    }
    return;
}

void sub_117159()
{
    if (DOES_VEHICLE_EXIST( l_U2126 ))
    {
        if (IS_VEH_DRIVEABLE( l_U2126 ))
        {
            if (NOT (DOES_BLIP_EXIST( l_U2199 )))
            {
                ADD_BLIP_FOR_CAR( l_U2126, ref l_U2199 );
                CHANGE_BLIP_DISPLAY( l_U2199, 2 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U2199 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2199 );
        }
    }
    for ( l_U799 = 0; l_U799 < 2; l_U799++ )
    {
        if (DOES_CHAR_EXIST( l_U908[l_U799] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[l_U799] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U981[l_U799] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U908[l_U799], ref l_U981[l_U799] );
                    SET_BLIP_AS_FRIENDLY( l_U981[l_U799], 1 );
                    CHANGE_BLIP_SCALE( l_U981[l_U799], 0.50000000 );
                    CHANGE_BLIP_DISPLAY( l_U981[l_U799], 2 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U981[l_U799] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U981[l_U799] );
            }
        }
    }
    if (NOT l_U2322[0])
    {
        if (NOT (sub_3725( l_U1718 )))
        {
            if (NOT (sub_3725( l_U1712 )))
            {
                if (NOT (sub_3725( l_U1724 )))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        sub_21601( "E2F1BAU" );
                        sub_21664( "E2F1_VAN2", ref l_U1724, 6, 1 );
                        l_U2322[0] = 1;
                    }
                }
            }
        }
    }
    else if (NOT l_U2226)
    {
        if (NOT (sub_3725( l_U1724 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_NOW( "F1_DES", 7500, 1 );
                l_U2226 = 1;
            }
        }
    }
    return;
}

void sub_117749()
{
    sub_21601( "E2F1BAU" );
    if (NOT l_U2274[l_U2300])
    {
        if (NOT g_U43133)
        {
            if (g_U43793 == 0)
            {
                if (l_U2300 == 0)
                {
                    l_U1748 = "E2F1_B2AV1";
                }
                else if (l_U2300 == 1)
                {
                    l_U1748 = "E2F1_B2BV1";
                }
                else if (l_U2300 == 2)
                {
                    l_U1748 = "E2F1_B2CV1";
                }
                else if (l_U2300 == 3)
                {
                    l_U1748 = "E2F1_B2DV1";
                }
                else if (l_U2300 == 4)
                {
                    l_U1748 = "E2F1_B2EV1";
                }
                else if (l_U2300 == 5)
                {
                    l_U1748 = "E2F1_B2FV1";
                }
                else if (l_U2300 == 6)
                {
                    l_U1748 = "E2F1_B2GV1";
                }
                else if (l_U2300 == 7)
                {
                    l_U1748 = "E2F1_B2HV1";
                }
                else
                {
                    l_U2296 = 1;
                };;;;;;;;
            }
            if (g_U43793 == 1)
            {
                if (l_U2300 == 0)
                {
                    l_U1748 = "E2F1_B2AV2";
                }
                else if (l_U2300 == 1)
                {
                    l_U1748 = "E2F1_B2BV2";
                }
                else if (l_U2300 == 2)
                {
                    l_U1748 = "E2F1_B2CV2";
                }
                else if (l_U2300 == 3)
                {
                    l_U1748 = "E2F1_B2DV2";
                }
                else if (l_U2300 == 4)
                {
                    l_U1748 = "E2F1_B2EV2";
                }
                else if (l_U2300 == 5)
                {
                    l_U1748 = "E2F1_B2FV2";
                }
                else
                {
                    l_U2296 = 1;
                };;;;;;
            }
        }
        else if (NOT (g_U43793 == 101))
        {
            if (l_U2300 == 0)
            {
                l_U1748 = "E2F1_B2AV1";
            }
            else if (l_U2300 == 1)
            {
                l_U1748 = "E2F1_B2BV1";
            }
            else if (l_U2300 == 2)
            {
                l_U1748 = "E2F1_B2CV1";
            }
            else if (l_U2300 == 3)
            {
                l_U1748 = "E2F1_B2DV1";
            }
            else if (l_U2300 == 4)
            {
                l_U1748 = "E2F1_B2EV1";
            }
            else if (l_U2300 == 5)
            {
                l_U1748 = "E2F1_B2FV1";
            }
            else if (l_U2300 == 6)
            {
                l_U1748 = "E2F1_B2GV1";
            }
            else if (l_U2300 == 7)
            {
                l_U1748 = "E2F1_B2HV1";
            }
            else
            {
                l_U2296 = 1;
            };;;;;;;;
        }
        else if (l_U2300 == 0)
        {
            l_U1748 = "E2F1_B2AV2";
        }
        else if (l_U2300 == 1)
        {
            l_U1748 = "E2F1_B2BV2";
        }
        else if (l_U2300 == 2)
        {
            l_U1748 = "E2F1_B2CV2";
        }
        else if (l_U2300 == 3)
        {
            l_U1748 = "E2F1_B2DV2";
        }
        else if (l_U2300 == 4)
        {
            l_U1748 = "E2F1_B2EV2";
        }
        else if (l_U2300 == 5)
        {
            l_U1748 = "E2F1_B2FV2";
        }
        else
        {
            l_U2296 = 1;
        };;;;;;;;
    }
    if ((g_U43793 == 2) || (g_U43793 > 101))
    {
        if (NOT l_U955[1])
        {
            if (NOT (IS_CHAR_DEAD( l_U908[0] )))
            {
                SAY_AMBIENT_SPEECH( l_U908[0], "LISTEN_TO_RADIO", 1, 1, 0 );
                PRINTNL();
                PRINTSTRING( "*************SAY_AMBIENT_SPEECH*************" );
                PRINTNL();
                l_U955[1] = 1;
            }
        }
    }
    else if (NOT l_U2296)
    {
        if (NOT l_U2285[l_U2300])
        {
            if (sub_28170())
            {
                if (NOT (sub_3725( l_U1706 )))
                {
                    if (NOT (sub_28404( l_U1706 )))
                    {
                        if (NOT l_U2274[l_U2300])
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                sub_21664( l_U1748, ref l_U1706, 6, 1 );
                                l_U2274[l_U2300] = 1;
                            }
                        }
                        else
                        {
                            sub_3909( ref l_U1706, 1 );
                            l_U2285[l_U2300] = 1;
                            if (l_U2300 < 9)
                            {
                                l_U2300++;
                            }
                        }
                    }
                    else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        sub_28573( l_U1748, ref l_U1706, 6, 1 );
                    }
                }
            }
            else if (sub_3725( l_U1706 ))
            {
                sub_28715( ref l_U1706 );
            }
        }
    }
    return;
}

void sub_119303()
{
    if (NOT l_U2157[1])
    {
        for ( l_U799 = 0; l_U799 < 6; l_U799++ )
        {
            if (DOES_VEHICLE_EXIST( l_U1757[l_U799] ))
            {
                if (IS_VEH_DRIVEABLE( l_U1757[l_U799] ))
                {
                    if (((l_U799 == 3) || (l_U799 == 4)) || (l_U799 == 5))
                    {
                        LOCK_CAR_DOORS( l_U1757[l_U799], 1 );
                        FREEZE_CAR_POSITION( l_U1757[l_U799], 0 );
                    }
                }
            }
        }
        g_U10983 = 1;
        SET_FAKE_WANTED_LEVEL( 0 );
        SET_MAX_WANTED_LEVEL( 6 );
        SET_POLICE_RADAR_BLIPS( 1 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        ALTER_WANTED_LEVEL( sub_20771(), 0 );
        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_20771() );
        l_U2157[1] = 1;
    }
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_7291(), 783.20940000, 64.57060000, 5.04480000, 150.00000000, 150.00000000, 150.00000000, 0 )))
    {
        SET_WANTED_MULTIPLIER( 1.00000000 );
    }
    return;
}

void sub_119622()
{
    if (l_U2157[1])
    {
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[0] )))
            {
                SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U908[0], 1 );
            }
        }
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[1] )))
            {
                SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U908[1], 0 );
            }
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_20771(), 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), l_U908[0], 30.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U908[1] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_7291(), l_U908[1], 30.00000000, 30.00000000, 30.00000000, 0 ))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_7291(), -176.99560000, 1509.61000000, 19.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )))
                            {
                                ;
                            }
                        }
                    }
                }
            }
        }
        if (sub_120053( -176.99560000, 1509.61000000, 18.05160000, 2.00000000, 2.00000000, 8.00000000, 1, l_U908[1], l_U908[0], 0, "F1_Z62", "F1_02", "F1_02", "F1_02", "F1_03", 1, 1, "F1_COPS" ))
        {
            l_U933 = 1;
            sub_3909( ref l_U1706, 1 );
            l_U795 = 16;
        }
    }
    return;
}

int sub_120053(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
{
    int iVar20;
    int I;
    unknown uVar22;

    l_U248[0] = uParam7;
    l_U248[1] = uParam8;
    l_U248[2] = uParam9;
    l_U247 = uParam7;
    sub_31549();
    sub_31881();
    sub_32761();
    if (sub_32959( l_U248[0], l_U248[1], l_U248[2], uParam11, uParam12, uParam13, uParam14, l_U242, uParam15, 0, 0, 0 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((uParam16) AND (IS_WANTED_LEVEL_GREATER( sub_20771(), 0 )))
            {
                if (DOES_BLIP_EXIST( l_U239 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U239 );
                    sub_33507( uParam10 );
                }
                if (((NOT (sub_37661( 0 ))) AND (NOT sub_39067())) AND (NOT l_U208))
                {
                    sub_33387( uParam17, 0 );
                    l_U252 = uParam17;
                    l_U208 = 1;
                    l_U209 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U248[0] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U248[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                    }
                }
            }
            else if (l_U208)
            {
                sub_33507( uParam17 );
                l_U208 = 0;
                l_U209 = 1;
            }
            if (l_U209)
            {
                if (NOT (sub_37661( 0 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U248[0] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U248[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                    }
                    l_U209 = 0;
                }
            }
            if (NOT (DOES_BLIP_EXIST( l_U239 )))
            {
                ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U239 );
                sub_35494( l_U239 );
                if (l_U227)
                {
                    SHOW_BLIP_ON_ALTIMETER( l_U239, 1 );
                }
            }
            if (NOT (sub_37661( 0 )))
            {
                if (NOT l_U210)
                {
                    sub_33387( uParam10, 0 );
                    l_U210 = 1;
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_7291(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
            {
                iVar20 = 1;
                for ( I = 0; I < 3; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U248[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U248[I] )))
                        {
                            if ((NOT (IS_GROUP_MEMBER( l_U248[I], sub_33617() ))) || (NOT (sub_35613( l_U248[I] ))))
                            {
                                iVar20 = 0;
                            }
                        }
                    }
                }
                if ((iVar20) AND (sub_39466()))
                {
                    sub_33507( uParam10 );
                    sub_33507( uParam11 );
                    sub_33507( uParam12 );
                    sub_33507( uParam13 );
                    sub_33507( uParam14 );
                    sub_33507( uParam17 );
                    sub_33507( "MORE_SEATS" );
                    sub_39947();
                    return 1;
                }
            }
        }
    }
    else if (DOES_BLIP_EXIST( l_U239 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U239 );
        sub_33507( uParam10 );
    }
    sub_41873( uParam0, uParam1, uParam2, 0, 0 );
    sub_46030( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_120946()
{
    if (DOES_BLIP_EXIST( l_U981[0] ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U981[0] );
    }
    if (DOES_BLIP_EXIST( l_U981[1] ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U981[1] );
    }
    return;
}

void sub_121041()
{
    unknown uVar2;
    float fVar3;

    GET_GAME_TIMER( ref l_U811[0] );
    l_U814[0] = l_U811[0] - l_U808[0];
    if ((l_U2204 > 1) AND (l_U2204 < 6))
    {
        if (sub_104399())
        {
            if (NOT l_U933)
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING_OUT())
                    {
                        DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        sub_3909( ref l_U1718, 0 );
                        sub_3909( ref l_U1712, 0 );
                        sub_3909( ref l_U1682, 0 );
                        sub_3909( ref l_U1724, 0 );
                        sub_3909( ref l_U1730, 0 );
                        l_U2204 = 6;
                        l_U2228 = 1;
                    }
                }
                else
                {
                    sub_3909( ref l_U1718, 0 );
                    sub_3909( ref l_U1712, 0 );
                    sub_3909( ref l_U1682, 0 );
                    sub_3909( ref l_U1724, 0 );
                    sub_3909( ref l_U1730, 0 );
                    l_U2204 = 6;
                    l_U2228 = 1;
                }
            }
        }
        else
        {
            l_U933 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U908[1] )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U908[1] ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U908[1], 1 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U908[0] )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U908[0] ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U908[0], 1 );
        }
    }
    switch (l_U2204)
    {
        case 0:
        sub_121517( 1, 1, 1 );
        sub_3909( ref l_U1718, 0 );
        sub_3909( ref l_U1712, 0 );
        sub_3909( ref l_U1682, 0 );
        sub_3909( ref l_U1724, 0 );
        l_U2204 = 1;
        break;
        case 1:
        WAIT( 500 );
        if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
        {
            GET_CAR_CHAR_IS_USING( sub_7291(), ref uVar2 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_CAR_HEADING( uVar2, ref fVar3 );
                if ((fVar3 >= (329.65580000 - 90.00000000)) || (fVar3 <= ((329.65580000 + 90.00000000) - 360.00000000)))
                {
                    SET_CAR_COORDINATES( uVar2, -176.99560000, 1509.61000000, 17.25160000 );
                    SET_CAR_HEADING( uVar2, 329.65580000 );
                }
                else
                {
                    SET_CAR_COORDINATES( uVar2, -177.88390000, 1508.18700000, 17.27630000 );
                    SET_CAR_HEADING( uVar2, 150.60520000 );
                    l_U2355 = 1;
                }
                SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                REMOVE_CAR_WINDOW( uVar2, 0 );
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U908[1] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[1] );
            if (NOT l_U2355)
            {
                SET_CHAR_COORDINATES( l_U908[1], -175.60690000, 1508.49600000, 17.37380000 );
                SET_CHAR_HEADING( l_U908[1], 193.03720000 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U908[1], -179.73740000, 1508.51500000, 17.37700000 );
                SET_CHAR_HEADING( l_U908[1], 163.30000000 );
            }
            REMOVE_CHAR_FROM_GROUP( l_U908[1] );
            OPEN_SEQUENCE_TASK( ref l_U1681 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_7291() );
            CLOSE_SEQUENCE_TASK( l_U1681 );
            TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
            CLEAR_SEQUENCE_TASK( l_U1681 );
        }
        if (NOT (IS_CHAR_INJURED( l_U908[0] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[0] );
            if (NOT l_U2355)
            {
                SET_CHAR_COORDINATES( l_U908[0], -178.99510000, 1509.86300000, 17.35870000 );
                SET_CHAR_HEADING( l_U908[0], 277.65150000 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U908[0], -175.73320000, 1508.00400000, 17.38020000 );
                SET_CHAR_HEADING( l_U908[0], 85.17520000 );
            }
            CLEAR_CHAR_TASKS( sub_7291() );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U908[0], sub_7291() );
            TASK_TURN_CHAR_TO_FACE_CHAR( sub_7291(), l_U908[0] );
            TASK_LOOK_AT_CHAR( l_U908[0], sub_7291(), 9999999, 0 );
            TASK_LOOK_AT_CHAR( sub_7291(), l_U908[0], 9999999, 0 );
        }
        CREATE_CAM( 14, ref l_U2205[0] );
        CREATE_CAM( 14, ref l_U2205[1] );
        CREATE_CAM( 3, ref l_U2205[2] );
        CREATE_CAM( 14, ref l_U2205[3] );
        CREATE_CAM( 14, ref l_U2205[4] );
        CREATE_CAM( 3, ref l_U2205[5] );
        CREATE_CAM( 14, ref l_U2205[6] );
        CREATE_CAM( 14, ref l_U2205[7] );
        CREATE_CAM( 3, ref l_U2205[8] );
        if (NOT l_U2355)
        {
            SET_CAM_POS( l_U2205[0], -178.23370000, 1512.50300000, 18.44722000 );
            SET_CAM_ROT( l_U2205[0], -0.03221100, -0.00000000, -165.43400000 );
            SET_CAM_FOV( l_U2205[0], 25.20005000 );
            SET_CAM_ACTIVE( l_U2205[0], 0 );
            SET_CAM_PROPAGATE( l_U2205[0], 0 );
            SET_CAM_POS( l_U2205[1], -177.44800000, 1512.60800000, 18.44722000 );
            SET_CAM_ROT( l_U2205[1], -0.03221100, -0.00000000, 179.79300000 );
            SET_CAM_FOV( l_U2205[1], 25.20005000 );
            SET_CAM_ACTIVE( l_U2205[1], 0 );
            SET_CAM_PROPAGATE( l_U2205[1], 0 );
        }
        else
        {
            SET_CAM_POS( l_U2205[0], -176.23780000, 1505.22500000, 18.57594000 );
            SET_CAM_ROT( l_U2205[0], -3.69914000, -0.00000000, 20.84312000 );
            SET_CAM_FOV( l_U2205[0], 25.80005000 );
            SET_CAM_ACTIVE( l_U2205[0], 0 );
            SET_CAM_PROPAGATE( l_U2205[0], 0 );
            SET_CAM_POS( l_U2205[1], -176.94810000, 1504.95500000, 18.57594000 );
            SET_CAM_ROT( l_U2205[1], -3.69914000, 0.00000000, 11.67579000 );
            SET_CAM_FOV( l_U2205[1], 25.80005000 );
            SET_CAM_ACTIVE( l_U2205[1], 0 );
            SET_CAM_PROPAGATE( l_U2205[1], 0 );
        }
        if (NOT l_U2355)
        {
            SET_CAM_POS( l_U2205[3], -174.87070000, 1510.50400000, 19.14580000 );
            SET_CAM_ROT( l_U2205[3], -7.10885000, -0.00000000, 103.42610000 );
            SET_CAM_FOV( l_U2205[3], 33.60003000 );
            SET_CAM_ACTIVE( l_U2205[3], 0 );
            SET_CAM_PROPAGATE( l_U2205[3], 0 );
            SET_CAM_POS( l_U2205[4], -173.89740000, 1510.87400000, 19.31325000 );
            SET_CAM_ROT( l_U2205[4], -8.31758300, -0.00000000, 103.85160000 );
            SET_CAM_FOV( l_U2205[4], 33.60003000 );
            SET_CAM_ACTIVE( l_U2205[4], 0 );
            SET_CAM_PROPAGATE( l_U2205[4], 0 );
        }
        else
        {
            SET_CAM_POS( l_U2205[3], -174.50450000, 1507.48800000, 19.19396000 );
            SET_CAM_ROT( l_U2205[3], -15.20590000, 0.00000000, 81.99846000 );
            SET_CAM_FOV( l_U2205[3], 33.60003000 );
            SET_CAM_ACTIVE( l_U2205[3], 0 );
            SET_CAM_PROPAGATE( l_U2205[3], 0 );
            SET_CAM_POS( l_U2205[4], -174.61590000, 1506.69600000, 19.19396000 );
            SET_CAM_ROT( l_U2205[4], -15.20590000, -0.00000000, 62.86167000 );
            SET_CAM_FOV( l_U2205[4], 33.60003000 );
            SET_CAM_ACTIVE( l_U2205[4], 0 );
            SET_CAM_PROPAGATE( l_U2205[4], 0 );
        }
        if (NOT l_U2355)
        {
            SET_CAM_POS( l_U2205[6], -176.22950000, 1528.04500000, 21.46128000 );
            SET_CAM_ROT( l_U2205[6], -8.21919300, 0.00000000, 179.22550000 );
            SET_CAM_FOV( l_U2205[6], 22.50006000 );
            SET_CAM_ACTIVE( l_U2205[6], 0 );
            SET_CAM_PROPAGATE( l_U2205[6], 0 );
            SET_CAM_POS( l_U2205[7], -172.58260000, 1527.78500000, 21.46128000 );
            SET_CAM_ROT( l_U2205[7], -8.21919300, -0.00000000, 166.87330000 );
            SET_CAM_FOV( l_U2205[7], 22.50006000 );
            SET_CAM_ACTIVE( l_U2205[7], 0 );
            SET_CAM_PROPAGATE( l_U2205[7], 0 );
        }
        else
        {
            SET_CAM_POS( l_U2205[6], -189.74440000, 1494.65700000, 20.76767000 );
            SET_CAM_ROT( l_U2205[6], -4.54889200, 0.00000000, -40.84370000 );
            SET_CAM_FOV( l_U2205[6], 23.40005000 );
            SET_CAM_ACTIVE( l_U2205[6], 0 );
            SET_CAM_PROPAGATE( l_U2205[6], 0 );
            SET_CAM_POS( l_U2205[7], -191.31790000, 1496.01700000, 20.76767000 );
            SET_CAM_ROT( l_U2205[7], -4.54889200, -0.00000000, -47.49001000 );
            SET_CAM_FOV( l_U2205[7], 23.40005000 );
            SET_CAM_ACTIVE( l_U2205[7], 0 );
            SET_CAM_PROPAGATE( l_U2205[7], 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U908[1] )))
        {
            TASK_LOOK_AT_CHAR( l_U908[1], sub_7291(), 9999999, 0 );
            if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
            {
                TASK_LOOK_AT_CHAR( sub_7291(), l_U908[1], 9999999, 0 );
            }
            REMOVE_CHAR_FROM_GROUP( l_U908[1] );
        }
        if (NOT (IS_CHAR_INJURED( l_U908[0] )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U908[0] );
        }
        sub_124273();
        sub_21601( "E2F1BAU" );
        if (NOT g_U43133)
        {
            sub_21664( "E2F1_DWON", ref l_U1730, 6, 1 );
        }
        else
        {
            sub_21664( "E2F1_DWOF", ref l_U1730, 6, 1 );
        }
        SETTIMERA( 0 );
        l_U2204 = 2;
        break;
        case 2:
        if (TIMERA() > 5000)
        {
            SETTIMERA( 0 );
            SET_CAM_ACTIVE( l_U2205[0], 1 );
            SET_CAM_ACTIVE( l_U2205[1], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U2205[2], l_U2205[0], l_U2205[1], 15000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U2205[2], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U2205[2], 1 );
            SET_CAM_PROPAGATE( l_U2205[2], 1 );
            SET_CAM_PROPAGATE( l_U2205[0], 0 );
            sub_125630();
            l_U2204 = 3;
        }
        break;
        case 3:
        if ((NOT (sub_3725( l_U1730 ))) || (TIMERA() > 2000))
        {
            if (NOT l_U2215[1])
            {
                if (NOT (IS_CHAR_INJURED( l_U908[0] )))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U908[0] );
                    OPEN_SEQUENCE_TASK( ref l_U1681 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    CLOSE_SEQUENCE_TASK( l_U1681 );
                    TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                    CLEAR_SEQUENCE_TASK( l_U1681 );
                }
                l_U2215[1] = 1;
            }
        }
        if (NOT l_U2215[0])
        {
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U908[1] );
                OPEN_SEQUENCE_TASK( ref l_U1681 );
                TASK_STAND_STILL( 0, 1000 );
                TASK_LEAVE_ANY_CAR( 0 );
                CLOSE_SEQUENCE_TASK( l_U1681 );
                TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                CLEAR_SEQUENCE_TASK( l_U1681 );
                l_U2215[0] = 1;
            }
        }
        if ((l_U2215[0]) AND (l_U2215[1]))
        {
            SETTIMERA( 0 );
            l_U2204 = 4;
        }
        break;
        case 4:
        if (TIMERA() > 2000)
        {
            TASK_CLEAR_LOOK_AT( sub_7291() );
            if (NOT (IS_CHAR_INJURED( l_U908[1] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[1] );
                if (NOT l_U2355)
                {
                    SET_CHAR_COORDINATES( l_U908[1], -175.60690000, 1508.49600000, 17.37380000 );
                    SET_CHAR_HEADING( l_U908[1], 193.03720000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U908[1], -179.73740000, 1508.51500000, 17.37700000 );
                    SET_CHAR_HEADING( l_U908[1], 163.30000000 );
                }
                REMOVE_CHAR_FROM_GROUP( l_U908[1] );
                OPEN_SEQUENCE_TASK( ref l_U1681 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -152.83410000, 1483.29900000, 17.43230000, 2, -1, 1.00000000 );
                CLOSE_SEQUENCE_TASK( l_U1681 );
                TASK_PERFORM_SEQUENCE( l_U908[1], l_U1681 );
                CLEAR_SEQUENCE_TASK( l_U1681 );
            }
            if (NOT (IS_CHAR_INJURED( l_U908[0] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[0] );
                if (NOT l_U2355)
                {
                    SET_CHAR_COORDINATES( l_U908[0], -178.99510000, 1509.86300000, 17.35870000 );
                    SET_CHAR_HEADING( l_U908[0], 277.65150000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U908[0], -175.73320000, 1508.00400000, 17.38020000 );
                    SET_CHAR_HEADING( l_U908[0], 85.17520000 );
                }
                if (NOT l_U2355)
                {
                    TASK_LOOK_AT_COORD( sub_7291(), -181.15930000, 1514.01400000, 18.80326000, 9999999, 4 );
                }
                else
                {
                    TASK_LOOK_AT_COORD( sub_7291(), -173.77980000, 1502.88600000, 18.51954000, 9999999, 4 );
                }
                TASK_LOOK_AT_CHAR( l_U908[0], sub_7291(), 9999999, 0 );
                WAIT( 0 );
                SET_CAM_ACTIVE( l_U2205[3], 1 );
                SET_CAM_ACTIVE( l_U2205[4], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U2205[5], l_U2205[3], l_U2205[4], 15000, 0 );
                SET_CAM_INTERP_STYLE_DETAILED( l_U2205[5], 0, 0, 1, 1 );
                SET_CAM_ACTIVE( l_U2205[5], 1 );
                SET_CAM_PROPAGATE( l_U2205[5], 1 );
                SET_CAM_ACTIVE( l_U2205[2], 0 );
                SET_CAM_PROPAGATE( l_U2205[2], 0 );
                SET_CAM_ACTIVE( l_U2205[1], 0 );
                SETTIMERA( 0 );
                l_U2204 = 5;
            }
        }
        break;
        case 5:
        if ((TIMERA() > 11500) || (NOT (sub_3725( l_U1730 ))))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[0] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U908[0] );
                if (NOT l_U2355)
                {
                    SET_CHAR_COORDINATES( l_U908[0], -179.97560000, 1508.97400000, 17.39370000 );
                    SET_CHAR_HEADING( l_U908[0], 190.56510000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U908[0], -176.07690000, 1507.76700000, 17.38510000 );
                    SET_CHAR_HEADING( l_U908[0], 172.96540000 );
                }
                OPEN_SEQUENCE_TASK( ref l_U1681 );
                TASK_CLEAR_LOOK_AT( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -172.13520000, 1492.74200000, 17.44040000, 2, -1, 1.00000000 );
                CLOSE_SEQUENCE_TASK( l_U1681 );
                TASK_PERFORM_SEQUENCE( l_U908[0], l_U1681 );
                CLEAR_SEQUENCE_TASK( l_U1681 );
                TASK_CLEAR_LOOK_AT( sub_7291() );
            }
            SET_CAM_ACTIVE( l_U2205[6], 1 );
            SET_CAM_ACTIVE( l_U2205[7], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U2205[8], l_U2205[6], l_U2205[7], 15000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U2205[8], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U2205[8], 1 );
            SET_CAM_PROPAGATE( l_U2205[8], 1 );
            SET_CAM_ACTIVE( l_U2205[5], 0 );
            SET_CAM_PROPAGATE( l_U2205[5], 0 );
            SETTIMERA( 0 );
            l_U2204 = 6;
        }
        break;
        case 6:
        if ((((NOT l_U2355) AND (TIMERA() > 8500)) || ((l_U2355) AND (TIMERA() > 4000))) || (l_U2228))
        {
            sub_127342( ref l_U2205[0], ref l_U2205[1], ref l_U2205[2] );
            sub_127342( ref l_U2205[3], ref l_U2205[4], ref l_U2205[5] );
            sub_127342( ref l_U2205[6], ref l_U2205[7], ref l_U2205[8] );
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                DELETE_CHAR( ref l_U908[0] );
            }
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                DELETE_CHAR( ref l_U908[1] );
            }
            sub_125630();
            sub_127585( 0, 1, 0, 0, 0 );
            if (l_U2228)
            {
                TASK_CLEAR_LOOK_AT( sub_7291() );
                DO_SCREEN_FADE_IN( 500 );
            }
            GET_GAME_TIMER( ref l_U808[0] );
            l_U795 = 27;
        }
        break;
    }
    return;
}

void sub_121517(boolean bParam0, boolean bParam1, boolean bParam2)
{
    sub_121526();
    if (bParam1)
    {
        sub_3909( ref l_U789, 0 );
        CLEAR_PRINTS();
    }
    CLEAR_HELP();
    SET_WIDESCREEN_BORDERS( 1 );
    if (bParam0)
    {
        SET_PLAYER_CONTROL( sub_20771(), 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_7291() )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_7291() );
        }
        if (bParam2)
        {
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_7291(), 1 );
        }
    }
    else
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_20771(), 0, 0, 0 );
    }
    sub_121727();
    return;
}

void sub_121526()
{
    if (NOT l_U782)
    {
        sub_121550( ref l_U779 );
        l_U782 = 1;
    }
    return;
}

void sub_121550(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_USE_HIGHDOF( 1 );
    return;
}

void sub_121727()
{
    int iVar2;

    if (IS_PLAYER_PLAYING( sub_20771() ))
    {
        GET_CHAR_PROP_INDEX( sub_7291(), 0, ref iVar2 );
        if (iVar2 == 2)
        {
            CLEAR_CHAR_PROP( sub_7291(), 0 );
        }
    }
    return;
}

void sub_124273()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (NOT l_U2355)
    {
        CREATE_CAM( 14, ref l_U2350[0] );
        SET_CAM_POS( l_U2350[0], -178.33060000, 1526.01700000, 21.03500000 );
        SET_CAM_ROT( l_U2350[0], -6.79310000, 0.00000000, -171.06700000 );
        SET_CAM_FOV( l_U2350[0], 22.50010000 );
        SET_CAM_ACTIVE( l_U2350[0], 1 );
        CREATE_CAM( 14, ref l_U2350[1] );
        SET_CAM_POS( l_U2350[1], -176.20580000, 1526.35100000, 21.03500000 );
        SET_CAM_ROT( l_U2350[1], -6.79310000, 0.00000000, -175.87690000 );
        SET_CAM_FOV( l_U2350[1], 22.50010000 );
        SET_CAM_ACTIVE( l_U2350[1], 1 );
        CREATE_CAM( 14, ref l_U2350[2] );
        SET_CAM_POS( l_U2350[2], -174.02520000, 1526.48200000, 21.03500000 );
        SET_CAM_ROT( l_U2350[2], -6.79310000, 0.00000000, 175.75290000 );
        SET_CAM_FOV( l_U2350[2], 22.50010000 );
        SET_CAM_ACTIVE( l_U2350[2], 1 );
        CREATE_CAM( 14, ref l_U2350[3] );
        SET_CAM_POS( l_U2350[3], -172.23990000, 1526.33400000, 21.03500000 );
        SET_CAM_ROT( l_U2350[3], -6.79310000, 0.00000000, 170.61460000 );
        SET_CAM_FOV( l_U2350[3], 22.50010000 );
        SET_CAM_ACTIVE( l_U2350[3], 1 );
    }
    else
    {
        CREATE_CAM( 14, ref l_U2350[0] );
        SET_CAM_POS( l_U2350[0], -188.60310000, 1493.92600000, 20.81140000 );
        SET_CAM_ROT( l_U2350[0], -4.90160000, 0.00000000, -38.25720000 );
        SET_CAM_FOV( l_U2350[0], 22.50010000 );
        SET_CAM_ACTIVE( l_U2350[0], 1 );
        CREATE_CAM( 14, ref l_U2350[1] );
        SET_CAM_POS( l_U2350[1], -189.80870000, 1495.06600000, 20.81140000 );
        SET_CAM_ROT( l_U2350[1], -4.90160000, 0.00000000, -43.40260000 );
        SET_CAM_FOV( l_U2350[1], 22.50010000 );
        SET_CAM_ACTIVE( l_U2350[1], 1 );
        CREATE_CAM( 14, ref l_U2350[2] );
        SET_CAM_POS( l_U2350[2], -190.77140000, 1496.17200000, 20.81140000 );
        SET_CAM_ROT( l_U2350[2], -4.90160000, 0.00000000, -46.74310000 );
        SET_CAM_FOV( l_U2350[2], 22.50010000 );
        SET_CAM_ACTIVE( l_U2350[2], 1 );
        CREATE_CAM( 14, ref l_U2350[3] );
        SET_CAM_POS( l_U2350[3], -192.02250000, 1497.72200000, 20.81140000 );
        SET_CAM_ROT( l_U2350[3], -4.90160000, 0.00000000, -52.88300000 );
        SET_CAM_FOV( l_U2350[3], 22.50010000 );
        SET_CAM_ACTIVE( l_U2350[3], 1 );
    }
    CREATE_CAM( 25, ref l_U2349 );
    SET_CAM_SPLINE_DURATION( l_U2349, 18000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U2349, 0 );
    ADD_CAM_SPLINE_NODE( l_U2349, l_U2350[0] );
    ADD_CAM_SPLINE_NODE( l_U2349, l_U2350[1] );
    ADD_CAM_SPLINE_NODE( l_U2349, l_U2350[2] );
    ADD_CAM_SPLINE_NODE( l_U2349, l_U2350[3] );
    SET_CAM_ACTIVE( l_U2349, 1 );
    SET_CAM_PROPAGATE( l_U2349, 1 );
    return;
}

void sub_125630()
{
    int I;

    for ( I = 0; I < l_U2350; I++ )
    {
        if (DOES_CAM_EXIST( l_U2350[I] ))
        {
            DESTROY_CAM( l_U2350[I] );
        }
    }
    if (DOES_CAM_EXIST( l_U2349 ))
    {
        DESTROY_CAM( l_U2349 );
    }
    return;
}

void sub_127342(unknown uParam0, unknown uParam1, unknown uParam2)
{
    SET_CAM_ACTIVE( (uParam2^), 0 );
    SET_CAM_PROPAGATE( (uParam2^), 0 );
    SET_CAM_ACTIVE( (uParam1^), 0 );
    SET_CAM_PROPAGATE( (uParam1^), 0 );
    SET_CAM_ACTIVE( (uParam0^), 0 );
    SET_CAM_PROPAGATE( (uParam0^), 0 );
    DESTROY_CAM( (uParam2^) );
    DESTROY_CAM( (uParam0^) );
    DESTROY_CAM( (uParam1^) );
    return;
}

void sub_127585(int iParam0, unknown uParam1, boolean bParam2, unknown uParam3, boolean bParam4)
{
    boolean bVar7;

    bVar7 = false;
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_GAME_CAM_PITCH( 0.00000000 );
    SET_CAM_BEHIND_PED( sub_7291() );
    if (NOT bParam4)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_7291(), 0 );
    }
    if ((sub_127676()) || (uParam3))
    {
        bVar7 = true;
    }
    sub_127941();
    if (bVar7)
    {
        if (((iParam0 > 0) AND (uParam1)) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, iParam0 );
        }
        else
        {
            sub_128078();
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        }
    }
    else
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    }
    sub_128342();
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_SCREEN_FADED_OUT())
    {
        if (NOT bParam2)
        {
            DO_SCREEN_FADE_IN( iParam0 );
        }
        else
        {
            DO_SCREEN_FADE_IN_UNHACKED( iParam0 );
        }
    }
    DISPLAY_RADAR( 1 );
    return;
}

void sub_127676()
{
    int Result;

    Result = 0;
    if (DOES_CAM_EXIST( l_U785 ))
    {
        SET_CAM_ACTIVE( l_U785, 0 );
        SET_CAM_PROPAGATE( l_U785, 0 );
        DESTROY_CAM( l_U785 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U786 ))
    {
        SET_CAM_ACTIVE( l_U786, 0 );
        SET_CAM_PROPAGATE( l_U786, 0 );
        DESTROY_CAM( l_U786 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U787 ))
    {
        SET_CAM_ACTIVE( l_U787, 0 );
        SET_CAM_PROPAGATE( l_U787, 0 );
        DESTROY_CAM( l_U787 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U788 ))
    {
        SET_CAM_ACTIVE( l_U788, 0 );
        SET_CAM_PROPAGATE( l_U788, 0 );
        DESTROY_CAM( l_U788 );
        Result = 1;
    }
    return Result;
}

void sub_127941()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_20771() ))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            GET_CHAR_COORDINATES( sub_7291(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            WAIT( 0 );
        }
    }
    return;
}

void sub_128078()
{
    unknown uVar2;
    unknown uVar3;

    if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_7291(), ref uVar2 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_CAR_MODEL( uVar2, ref uVar3 );
                if (IS_THIS_MODEL_A_CAR( uVar3 ))
                {
                    SHUT_CAR_DOOR( uVar2, 0 );
                    SHUT_CAR_DOOR( uVar2, 1 );
                    SHUT_CAR_DOOR( uVar2, 2 );
                    SHUT_CAR_DOOR( uVar2, 3 );
                }
            }
        }
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (DOES_VEHICLE_EXIST( uVar2 ))
    {
        if (NOT (IS_CAR_DEAD( uVar2 )))
        {
            GET_CAR_MODEL( uVar2, ref uVar3 );
            if (IS_THIS_MODEL_A_CAR( uVar3 ))
            {
                SHUT_CAR_DOOR( uVar2, 0 );
                SHUT_CAR_DOOR( uVar2, 1 );
                SHUT_CAR_DOOR( uVar2, 2 );
                SHUT_CAR_DOOR( uVar2, 3 );
            }
        }
    }
    return;
}

void sub_128342()
{
    if (l_U782)
    {
        sub_127676();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_128380( ref l_U779 );
        l_U782 = 0;
    }
    return;
}

void sub_128380(unknown uParam0)
{
    SET_USE_HIGHDOF( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_128645()
{
    if (NOT l_U1651)
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (l_U820 == 2)
            {
                l_U933 = 1;
                l_U795 = 26;
            }
            if (l_U820 == 3)
            {
                PRINTNL();
                PRINTSTRING( "iFailed = 3" );
                l_U933 = 1;
                l_U795 = 26;
            }
            if (l_U820 == 9)
            {
                PRINTNL();
                PRINTSTRING( "iFailed = 9" );
                l_U933 = 1;
                l_U795 = 26;
            }
            if (l_U820 == 10)
            {
                PRINTNL();
                PRINTSTRING( "iFailed = 10" );
                l_U933 = 1;
                l_U795 = 26;
            }
            if (l_U820 == 11)
            {
                PRINTNL();
                PRINTSTRING( "iFailed = 10" );
                l_U933 = 1;
                l_U795 = 26;
            }
        }
    }
    return;
}

void sub_128925()
{
    if ((l_U2235 > 0) AND (l_U2235 < 12))
    {
        if (sub_104399())
        {
            if (NOT l_U933)
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING())
                    {
                        DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                        WAIT( 500 );
                        sub_3909( ref l_U1718, 0 );
                        sub_3909( ref l_U1712, 0 );
                        sub_3909( ref l_U1724, 0 );
                        sub_3909( ref l_U1742, 0 );
                        l_U2235 = 100;
                    }
                }
            }
        }
        else
        {
            l_U933 = 0;
        }
    }
    switch (l_U2235)
    {
        case 0:
        if (sub_39556( 1, 1 ))
        {
            sub_121517( 1, 1, 1 );
            sub_3909( ref l_U1718, 0 );
            sub_3909( ref l_U1712, 0 );
            sub_3909( ref l_U1724, 0 );
            sub_3909( ref l_U1742, 0 );
            if (l_U820 == 2)
            {
                if (DOES_CHAR_EXIST( l_U908[1] ))
                {
                    if (IS_CHAR_DEAD( l_U908[1] ))
                    {
                        sub_69164( 7, l_U908[1], 3 );
                        l_U2235 = 100;
                    }
                    else
                    {
                        l_U2235 = 1;
                    }
                }
            }
            if (l_U820 == 3)
            {
                if (DOES_CHAR_EXIST( l_U908[0] ))
                {
                    PRINTNL();
                    PRINTSTRING( "Char does exist" );
                    if (IS_CHAR_DEAD( l_U908[0] ))
                    {
                        PRINTNL();
                        PRINTSTRING( "Char is dead" );
                        sub_69164( 3, l_U908[0], 3 );
                        l_U2235 = 100;
                    }
                    else
                    {
                        l_U2235 = 1;
                    }
                }
            }
            if (l_U820 == 9)
            {
                if (DOES_CHAR_EXIST( l_U908[1] ))
                {
                    if (IS_CHAR_DEAD( l_U908[1] ))
                    {
                        sub_69164( 7, l_U908[1], 3 );
                        l_U2235 = 100;
                    }
                    else
                    {
                        l_U2235 = 1;
                    }
                }
            }
            if (l_U820 == 10)
            {
                if (DOES_CHAR_EXIST( l_U908[0] ))
                {
                    if (IS_CHAR_DEAD( l_U908[0] ))
                    {
                        sub_69164( 3, l_U908[0], 3 );
                        l_U2235 = 100;
                    }
                    else
                    {
                        l_U2235 = 1;
                    }
                }
            }
            if (l_U820 == 11)
            {
                if (((DOES_CHAR_EXIST( l_U908[0] )) AND (IS_CHAR_INJURED( l_U908[0] ))) || ((DOES_CHAR_EXIST( l_U908[1] )) AND (IS_CHAR_INJURED( l_U908[1] ))))
                {
                    if (IS_CHAR_INJURED( l_U908[0] ))
                    {
                        sub_69164( 3, l_U908[0], 3 );
                    }
                    if (IS_CHAR_INJURED( l_U908[1] ))
                    {
                        sub_69164( 7, l_U908[1], 3 );
                    }
                    l_U2235 = 100;
                }
                else
                {
                    l_U2235 = 1;
                }
            }
        }
        break;
        case 1:
        PRINTNL();
        PRINTSTRING( "Case 1" );
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT_UNHACKED( 500 );
            }
        }
        else
        {
            l_U2235 = 2;
        }
        break;
        case 2:
        PRINTNL();
        PRINTSTRING( "Case 2" );
        REQUEST_MODEL( 675415136 );
        while (NOT (HAS_MODEL_LOADED( 675415136 )))
        {
            WAIT( 0 );
        }
        if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
        {
            SET_CHAR_HEADING( sub_7291(), 356.77410000 );
            SET_CHAR_COORDINATES( sub_7291(), -404.56010000, 1551.53000000, 18.34960000 );
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[0] )))
            {
                if (IS_PED_IN_GROUP( l_U908[0] ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U908[0] );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[1] )))
            {
                if (IS_PED_IN_GROUP( l_U908[1] ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U908[1] );
                }
            }
        }
        l_U2235 = 3;
        break;
        case 3:
        PRINTNL();
        PRINTSTRING( "Case 3" );
        CLEAR_AREA( -380.08970000, 1530.25500000, 18.50790000, 50.00000000, 1 );
        if (DOES_VEHICLE_EXIST( l_U2222 ))
        {
            DELETE_CAR( ref l_U2222 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2222 );
        }
        if (NOT (DOES_VEHICLE_EXIST( l_U2236 )))
        {
            if (NOT (l_U820 == 11))
            {
                while (NOT (sub_14786( 3, -380.08970000, 1530.25500000, 18.50790000, 176.81160000, ref l_U2236 )))
                {
                    WAIT( 0 );
                }
                l_U2235 = 4;
            }
            else
            {
                CREATE_CAR( 675415136, -380.08970000, 1530.25500000, 18.50790000, ref l_U2236, 1 );
                SET_CAR_HEADING( l_U2236, 176.81160000 );
                SET_CAR_COORDINATES( l_U2236, -380.08970000, 1530.25500000, 18.50790000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U2236 );
                l_U2235 = 4;
            }
        }
        break;
        case 4:
        PRINTNL();
        PRINTSTRING( "Case 4" );
        if (IS_CHAR_IN_ANY_CAR( sub_7291() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_7291(), -382.34130000, 1530.25000000, 18.61290000 );
            SET_CHAR_HEADING( sub_7291(), 265.18130000 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_7291(), -382.34130000, 1530.25000000, 18.61290000 );
            SET_CHAR_HEADING( sub_7291(), 265.18130000 );
        }
        LOAD_SCENE( -382.34130000, 1530.25000000, 18.61290000 );
        if ((l_U820 == 2) || (l_U820 == 9))
        {
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U908[1] ))
                    {
                        if (DOES_VEHICLE_EXIST( l_U2236 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U2236 ))
                            {
                                WARP_CHAR_FROM_CAR_TO_CAR( l_U908[1], l_U2236, -1 );
                                if (DOES_VEHICLE_EXIST( l_U903 ))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U903 )))
                                    {
                                        DELETE_CAR( ref l_U903 );
                                    }
                                    if (IS_CAR_DEAD( l_U903 ))
                                    {
                                        DELETE_CAR( ref l_U903 );
                                    }
                                }
                                l_U2235 = 5;
                            }
                        }
                    }
                    else if (DOES_VEHICLE_EXIST( l_U2236 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2236 ))
                        {
                            WARP_CHAR_INTO_CAR( l_U908[1], l_U2236 );
                            if (DOES_VEHICLE_EXIST( l_U903 ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U903 )))
                                {
                                    DELETE_CAR( ref l_U903 );
                                }
                                if (IS_CAR_DEAD( l_U903 ))
                                {
                                    DELETE_CAR( ref l_U903 );
                                }
                            }
                            l_U2235 = 5;
                        }
                    }
                }
                else
                {
                    l_U2235 = 100;
                }
            }
        }
        if ((l_U820 == 3) || (l_U820 == 10))
        {
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U908[0] ))
                    {
                        if (DOES_VEHICLE_EXIST( l_U2236 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U2236 ))
                            {
                                WARP_CHAR_FROM_CAR_TO_CAR( l_U908[0], l_U2236, -1 );
                                if (DOES_VEHICLE_EXIST( l_U903 ))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U903 )))
                                    {
                                        DELETE_CAR( ref l_U903 );
                                    }
                                    if (IS_CAR_DEAD( l_U903 ))
                                    {
                                        DELETE_CAR( ref l_U903 );
                                    }
                                }
                                l_U2235 = 5;
                            }
                        }
                    }
                    else
                    {
                        PRINTNL();
                        PRINTSTRING( " Armando exists and isn't in a car" );
                        if (DOES_VEHICLE_EXIST( l_U2236 ))
                        {
                            PRINTNL();
                            PRINTSTRING( "viFailcar exists" );
                            if (IS_VEH_DRIVEABLE( l_U2236 ))
                            {
                                PRINTNL();
                                PRINTSTRING( "viFailCAr is driveable" );
                                WARP_CHAR_INTO_CAR( l_U908[0], l_U2236 );
                                PRINTNL();
                                PRINTSTRING( "warp char command given" );
                                if (DOES_VEHICLE_EXIST( l_U903 ))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U903 )))
                                    {
                                        DELETE_CAR( ref l_U903 );
                                    }
                                    if (IS_CAR_DEAD( l_U903 ))
                                    {
                                        DELETE_CAR( ref l_U903 );
                                    }
                                }
                                l_U2235 = 5;
                                PRINTNL();
                                PRINTSTRING( "failecut is no 5" );
                            }
                        }
                    }
                }
                else
                {
                    l_U2235 = 100;
                }
            }
        }
        if (l_U820 == 11)
        {
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U908[1] ))
                    {
                        if (DOES_VEHICLE_EXIST( l_U2236 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U2236 ))
                            {
                                WARP_CHAR_FROM_CAR_TO_CAR( l_U908[1], l_U2236, -1 );
                                if (DOES_VEHICLE_EXIST( l_U903 ))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U903 )))
                                    {
                                        DELETE_CAR( ref l_U903 );
                                    }
                                    if (IS_CAR_DEAD( l_U903 ))
                                    {
                                        DELETE_CAR( ref l_U903 );
                                    }
                                }
                                l_U2235 = 5;
                            }
                        }
                    }
                    else if (DOES_VEHICLE_EXIST( l_U2236 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2236 ))
                        {
                            WARP_CHAR_INTO_CAR( l_U908[1], l_U2236 );
                            if (DOES_VEHICLE_EXIST( l_U903 ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U903 )))
                                {
                                    DELETE_CAR( ref l_U903 );
                                }
                                if (IS_CAR_DEAD( l_U903 ))
                                {
                                    DELETE_CAR( ref l_U903 );
                                }
                            }
                            l_U2235 = 5;
                        }
                    }
                }
                else
                {
                    l_U2235 = 100;
                }
            }
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U908[0] ))
                    {
                        if (DOES_VEHICLE_EXIST( l_U2236 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U2236 ))
                            {
                                WARP_CHAR_FROM_CAR_TO_CAR( l_U908[0], l_U2236, 0 );
                                if (DOES_VEHICLE_EXIST( l_U903 ))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U903 )))
                                    {
                                        DELETE_CAR( ref l_U903 );
                                    }
                                    if (IS_CAR_DEAD( l_U903 ))
                                    {
                                        DELETE_CAR( ref l_U903 );
                                    }
                                }
                                l_U2235 = 5;
                            }
                        }
                    }
                    else if (DOES_VEHICLE_EXIST( l_U2236 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2236 ))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U908[0], l_U2236, 0 );
                            if (DOES_VEHICLE_EXIST( l_U903 ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U903 )))
                                {
                                    DELETE_CAR( ref l_U903 );
                                }
                                if (IS_CAR_DEAD( l_U903 ))
                                {
                                    DELETE_CAR( ref l_U903 );
                                }
                            }
                            l_U2235 = 5;
                        }
                    }
                }
                else
                {
                    l_U2235 = 100;
                }
            }
        }
        break;
        case 5:
        PRINTNL();
        PRINTSTRING( "Case 5" );
        CREATE_CAM( 14, ref l_U2241[0] );
        CREATE_CAM( 14, ref l_U2241[1] );
        CREATE_CAM( 3, ref l_U2244 );
        SET_CAM_POS( l_U2241[0], -383.07500000, 1527.30100000, 20.33829000 );
        SET_CAM_ROT( l_U2241[0], -9.54449000, 0.00000000, -36.37491000 );
        SET_CAM_FOV( l_U2241[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U2241[0], 1 );
        SET_CAM_POS( l_U2241[1], -382.93120000, 1529.33400000, 20.15297000 );
        SET_CAM_ROT( l_U2241[1], -4.84623800, 0.00000000, -60.55375000 );
        SET_CAM_FOV( l_U2241[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U2241[1], 1 );
        SET_CAM_ACTIVE( l_U2244, 1 );
        SET_CAM_PROPAGATE( l_U2241[0], 1 );
        SET_CAM_PROPAGATE( l_U2241[1], 0 );
        SET_CAM_PROPAGATE( l_U2244, 0 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U2235 = 6;
        break;
        case 6:
        PRINTNL();
        PRINTSTRING( "Case 6" );
        if ((l_U820 == 2) || (l_U820 == 9))
        {
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U908[1] ))
                    {
                        CLEAR_CHAR_TASKS( l_U908[1] );
                        TASK_LOOK_AT_CHAR( l_U908[1], sub_7291(), -2, 0 );
                        l_U2235 = 7;
                    }
                }
                else
                {
                    l_U2235 = 100;
                }
            }
        }
        if ((l_U820 == 3) || (l_U820 == 10))
        {
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U908[0] ))
                    {
                        CLEAR_CHAR_TASKS( l_U908[0] );
                        TASK_LOOK_AT_CHAR( l_U908[0], sub_7291(), -2, 0 );
                        l_U2235 = 7;
                    }
                }
                else
                {
                    l_U2235 = 100;
                }
            }
        }
        if (l_U820 == 11)
        {
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U908[1] ))
                    {
                        CLEAR_CHAR_TASKS( l_U908[1] );
                        TASK_LOOK_AT_CHAR( l_U908[1], sub_7291(), -2, 0 );
                        l_U2235 = 7;
                    }
                }
                else
                {
                    l_U2235 = 100;
                }
            }
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U908[0] ))
                    {
                        CLEAR_CHAR_TASKS( l_U908[0] );
                        TASK_LOOK_AT_CHAR( l_U908[0], sub_7291(), -2, 0 );
                        l_U2235 = 7;
                    }
                }
                else
                {
                    l_U2235 = 100;
                }
            }
        }
        break;
        case 7:
        PRINTNL();
        PRINTSTRING( "Case 7" );
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING())
            {
                DO_SCREEN_FADE_IN_UNHACKED( 3000 );
            }
        }
        else
        {
            l_U2235 = 8;
        }
        break;
        case 8:
        PRINTNL();
        PRINTSTRING( "Case 8" );
        if (IS_CAM_PROPAGATING( l_U2241[0] ))
        {
            if (NOT IS_CAM_INTERPOLATING())
            {
                SET_CAM_PROPAGATE( l_U2241[0], 0 );
                SET_CAM_PROPAGATE( l_U2244, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U2244, l_U2241[0], l_U2241[1], 20000, 0 );
                GET_GAME_TIMER( ref l_U808[0] );
                l_U2235 = 9;
            }
        }
        break;
        case 9:
        PRINTNL();
        PRINTSTRING( "Case 9" );
        if (IS_SCREEN_FADED_IN())
        {
            if (NOT (sub_3725( l_U1736 )))
            {
                if (NOT l_U2325)
                {
                    sub_21601( "E2F1BAU" );
                    sub_21664( l_U1748, ref l_U1736, 6, 1 );
                    l_U2235 = 10;
                    l_U2325 = 1;
                }
            }
        }
        break;
        case 10:
        if (l_U2325)
        {
            if (NOT (sub_3725( l_U1736 )))
            {
                if ((l_U820 == 2) || (l_U820 == 9))
                {
                    if (DOES_CHAR_EXIST( l_U908[1] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U908[1] ))
                            {
                                TASK_CLEAR_LOOK_AT( l_U908[1] );
                                l_U2235 = 11;
                            }
                        }
                        else
                        {
                            l_U2235 = 100;
                        }
                    }
                }
                if ((l_U820 == 3) || (l_U820 == 10))
                {
                    if (DOES_CHAR_EXIST( l_U908[0] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U908[0] ))
                            {
                                TASK_CLEAR_LOOK_AT( l_U908[0] );
                                l_U2235 = 11;
                            }
                        }
                        else
                        {
                            l_U2235 = 100;
                        }
                    }
                }
                if (l_U820 == 11)
                {
                    if (DOES_CHAR_EXIST( l_U908[1] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U908[1] ))
                            {
                                TASK_CLEAR_LOOK_AT( l_U908[1] );
                                l_U2235 = 11;
                            }
                        }
                        else
                        {
                            l_U2235 = 100;
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U908[0] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U908[0] ))
                            {
                                TASK_CLEAR_LOOK_AT( l_U908[0] );
                                l_U2235 = 11;
                            }
                        }
                        else
                        {
                            l_U2235 = 100;
                        }
                    }
                }
            }
        }
        break;
        case 11:
        PRINTNL();
        PRINTSTRING( "Case 11" );
        if ((l_U820 == 2) || (l_U820 == 9))
        {
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                {
                    if (DOES_VEHICLE_EXIST( l_U2236 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2236 ))
                        {
                            if (IS_CHAR_IN_CAR( l_U908[1], l_U2236 ))
                            {
                                if (NOT (LOCATE_CHAR_IN_CAR_3D( l_U908[1], -379.50790000, 1513.35400000, 17.87000000, 2.50000000, 2.50000000, 2.50000000, 0 )))
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U908[1], l_U2236, -379.50790000, 1513.35400000, 17.87000000, 15.00000000, 0, 675415136, 2, 2.50000000, 10 );
                                }
                                else
                                {
                                    l_U2235 = 12;
                                }
                            }
                        }
                    }
                }
                else
                {
                    l_U2235 = 100;
                }
            }
        }
        if ((l_U820 == 3) || (l_U820 == 10))
        {
            if (DOES_CHAR_EXIST( l_U908[0] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[0] )))
                {
                    if (DOES_VEHICLE_EXIST( l_U2236 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2236 ))
                        {
                            if (IS_CHAR_IN_CAR( l_U908[0], l_U2236 ))
                            {
                                if (NOT (LOCATE_CHAR_IN_CAR_3D( l_U908[0], -379.50790000, 1513.35400000, 17.87000000, 2.50000000, 2.50000000, 2.50000000, 0 )))
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U908[0], l_U2236, -379.50790000, 1513.35400000, 17.87000000, 15.00000000, 0, 675415136, 2, 2.50000000, 10 );
                                }
                                else
                                {
                                    l_U2235 = 12;
                                }
                            }
                        }
                    }
                }
                else
                {
                    l_U2235 = 100;
                }
            }
        }
        if (l_U820 == 11)
        {
            if (DOES_CHAR_EXIST( l_U908[1] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U908[1] )))
                {
                    if (DOES_VEHICLE_EXIST( l_U2236 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2236 ))
                        {
                            if (IS_CHAR_IN_CAR( l_U908[1], l_U2236 ))
                            {
                                if (NOT (LOCATE_CHAR_IN_CAR_3D( l_U908[1], -379.50790000, 1513.35400000, 17.87000000, 2.50000000, 2.50000000, 2.50000000, 0 )))
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U908[1], l_U2236, -379.50790000, 1513.35400000, 17.87000000, 15.00000000, 0, 675415136, 2, 2.50000000, 10 );
                                }
                                else
                                {
                                    l_U2235 = 12;
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 12:
        PRINTNL();
        PRINTSTRING( "Case 12" );
        if (DOES_CAM_EXIST( l_U2241[0] ))
        {
            if (IS_CAM_PROPAGATING( l_U2241[0] ))
            {
                SET_CAM_PROPAGATE( l_U2241[0], 0 );
            }
            if (IS_CAM_ACTIVE( l_U2241[0] ))
            {
                SET_CAM_ACTIVE( l_U2241[0], 0 );
            }
            DESTROY_CAM( l_U2241[0] );
        }
        if (DOES_CAM_EXIST( l_U2241[1] ))
        {
            if (IS_CAM_PROPAGATING( l_U2241[1] ))
            {
                SET_CAM_PROPAGATE( l_U2241[1], 0 );
            }
            if (IS_CAM_ACTIVE( l_U2241[1] ))
            {
                SET_CAM_ACTIVE( l_U2241[1], 0 );
            }
            DESTROY_CAM( l_U2241[1] );
        }
        if (DOES_CAM_EXIST( l_U2244 ))
        {
            if (IS_CAM_PROPAGATING( l_U2244 ))
            {
                SET_CAM_PROPAGATE( l_U2244, 0 );
            }
            if (IS_CAM_ACTIVE( l_U2244 ))
            {
                SET_CAM_ACTIVE( l_U2244, 0 );
            }
            DESTROY_CAM( l_U2244 );
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[0] )))
            {
                DELETE_CHAR( ref l_U908[0] );
            }
        }
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[1] )))
            {
                DELETE_CHAR( ref l_U908[1] );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U2236 ))
        {
            if (IS_VEH_DRIVEABLE( l_U2236 ))
            {
                DELETE_CAR( ref l_U2236 );
            }
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U779 );
        SET_CAM_BEHIND_PED( sub_7291() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_7291(), 0 );
        SET_PLAYER_CONTROL( sub_20771(), 1 );
        sub_69460();
        l_U911 = 0;
        break;
        case 100:
        sub_3909( ref l_U1736, 0 );
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING())
            {
                DO_SCREEN_FADE_OUT_UNHACKED( 500 );
            }
        }
        else
        {
            l_U2235 = 101;
        }
        break;
        case 101:
        if (DOES_CAM_EXIST( l_U2241[0] ))
        {
            if (IS_CAM_PROPAGATING( l_U2241[0] ))
            {
                SET_CAM_PROPAGATE( l_U2241[0], 0 );
            }
            if (IS_CAM_ACTIVE( l_U2241[0] ))
            {
                SET_CAM_ACTIVE( l_U2241[0], 0 );
            }
            DESTROY_CAM( l_U2241[0] );
        }
        if (DOES_CAM_EXIST( l_U2241[1] ))
        {
            if (IS_CAM_PROPAGATING( l_U2241[1] ))
            {
                SET_CAM_PROPAGATE( l_U2241[1], 0 );
            }
            if (IS_CAM_ACTIVE( l_U2241[1] ))
            {
                SET_CAM_ACTIVE( l_U2241[1], 0 );
            }
            DESTROY_CAM( l_U2241[1] );
        }
        if (DOES_CAM_EXIST( l_U2244 ))
        {
            if (IS_CAM_PROPAGATING( l_U2244 ))
            {
                SET_CAM_PROPAGATE( l_U2244, 0 );
            }
            if (IS_CAM_ACTIVE( l_U2244 ))
            {
                SET_CAM_ACTIVE( l_U2244, 0 );
            }
            DESTROY_CAM( l_U2244 );
        }
        if (DOES_CHAR_EXIST( l_U908[0] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[0] )))
            {
                DELETE_CHAR( ref l_U908[0] );
            }
        }
        if (DOES_CHAR_EXIST( l_U908[1] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U908[1] )))
            {
                DELETE_CHAR( ref l_U908[1] );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U2236 ))
        {
            if (IS_VEH_DRIVEABLE( l_U2236 ))
            {
                DELETE_CAR( ref l_U2236 );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U2222 ))
        {
            if (IS_VEH_DRIVEABLE( l_U2222 ))
            {
                DELETE_CAR( ref l_U2222 );
            }
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U779 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U2235 = 102;
        break;
        case 102:
        if (NOT IS_SCREEN_FADED_IN())
        {
            if (NOT IS_SCREEN_FADING())
            {
                DO_SCREEN_FADE_IN_UNHACKED( 500 );
            }
        }
        else
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_WIDESCREEN_BORDERS( 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_7291(), 0 );
            SET_PLAYER_CONTROL( sub_20771(), 1 );
            sub_69460();
            l_U911 = 0;
        }
        break;
    }
    return;
}

void sub_136130()
{
    CLEAR_PRINTS();
    g_U25 = 80;
    sub_136152();
    g_U10983 = 1;
    SET_FAKE_WANTED_LEVEL( 0 );
    SET_MAX_WANTED_LEVEL( 6 );
    SET_POLICE_RADAR_BLIPS( 1 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    CLEAR_WANTED_LEVEL( sub_20771() );
    l_U911 = 0;
    return;
}

void sub_136152()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_136170();
    sub_136229( iVar2, iVar3, iVar4 );
    return;
}

void sub_136170()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U196[I] = 4;
    }
    return;
}

void sub_136229(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 3;
    sub_136262( iVar5, uParam0, uParam1, uParam2, "Dominicans" );
    return;
}

void sub_136262(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    if (bParam1)
    {
        if (g_U43133)
        {
            sub_136290();
            return;
        }
    }
    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14925[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_136464( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_136464( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14925[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_136464( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_136464( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU160._fU76;
    }
    else if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_136464( ref cVar9 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_136464( ref cVar9 );
        return;
    }
    iVar7 = g_U14925[uParam0]._fU0._fU4;
    iVar8 = sub_137041( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12382[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14925[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12382[uParam0]._fU148[I]._fU8++;
            if ((NOT g_U12382[uParam0]._fU148[I]._fU12) AND (g_U12382[uParam0]._fU148[I]._fU8 >= g_U12382[uParam0]._fU148[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12382[uParam0]._fU148[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_137489( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14925[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_20771() );
    sub_2289();
    bVar28 = true;
    uVar29 = sub_137041( uParam0, iVar7 );
    uVar30 = sub_1909( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14925[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U22960[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10961 );
                sub_141763( 9, ref g_U14925[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12379))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_136290();
                    g_U10953._fU8 = 1;
                    g_U10953._fU20 = sub_142214( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_142293( uParam0 );
                sub_142332( 0 );
                sub_2187( uVar30, 0 );
                g_U11076 = 0;
            }
            g_U12382[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_142507();
        }
    }
    if (bParam2)
    {
        sub_136290();
        sub_142606();
        sub_142332( 0 );
        g_U11062 = 1;
        g_U11076 = 0;
    }
    if (bParam3)
    {
        sub_136290();
        sub_142658();
        sub_142332( 0 );
        sub_2187( uVar30, 0 );
    }
    sub_1796();
    return;
}

void sub_136290()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_136464(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_137041(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_2140( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U28562[iParam0]._fU0;
    iVar5 = g_U28562[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U22960[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_137489(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_137585( uParam1 );
        break;
        case 1:
        bVar8 = sub_138466( uParam1 );
        break;
        case 2:
        bVar8 = sub_138655( uParam1 );
        break;
        case 3:
        bVar8 = sub_138873( uParam1 );
        break;
        case 4:
        bVar8 = sub_139471( uParam1 );
        break;
        case 5:
        bVar8 = sub_139604( uParam1 );
        break;
        case 6:
        bVar8 = sub_139801( uParam1 );
        break;
        case 7:
        bVar8 = sub_139938( uParam1 );
        break;
        case 8:
        bVar8 = sub_140087( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_139084( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_137041( uParam0, uParam1 );
    if (bParam3)
    {
        sub_140305( uVar9, uParam0 );
    }
    return 1;
}

int sub_137585(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_137752( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        sub_137752( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_137752( iVar3, 1500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_137752( iVar3, 500, 0, 0, 0, 0 );
        break;
        case 5:
        sub_137752( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 6:
        sub_137752( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 7:
        sub_137752( iVar3, 3000, 5, 2, 0, 0 );
        break;
        case 8:
        sub_137752( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 9:
        sub_137752( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 10:
        sub_137752( iVar3, 4500, 5, 2, 0, 0 );
        break;
        case 11:
        sub_137752( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 12:
        sub_137752( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 0:
        case 13:
        case 14:
        case 15:
        case 16: break;
        default:
        sub_138374( "Gay Tony", 1 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_138374( "Gay Tony", 0 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_137752(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_137763( uParam1 );
    sub_137937( uParam0, 0, uParam2 );
    sub_137937( uParam0, 1, uParam3 );
    sub_137937( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_136170();
    return;
}

void sub_137763(unknown uParam0)
{
    ADD_SCORE( sub_20771(), uParam0 );
    sub_137788( uParam0 );
    return;
}

void sub_137788(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2140( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_137937(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_138374(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_138466(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_137752( iVar3, 500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_137752( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_137752( iVar3, 1500, 5, 2, 0, 0 );
        break;
        default:
        sub_138374( "Mori", 1 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_138374( "Mori", 0 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_138655(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_137752( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_137752( iVar3, 15000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_137752( iVar3, 20000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_137752( iVar3, 25000, 5, 2, 0, 0 );
        break;
        default:
        sub_138374( "Yusuf", 1 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_138374( "Yusuf", 0 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_138873(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_137752( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_137752( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 2:
        sub_137752( iVar3, 0, sub_138962(), sub_139228(), 0, 0 );
        break;
        default:
        sub_138374( "Dominicans", 1 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_138374( "Dominicans", 0 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_138962()
{
    switch (l_U196[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_139084( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_139084(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_139228()
{
    switch (l_U196[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_139084( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_139471(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_137752( iVar3, 1000, 5, 2, 0, 0 );
        break;
        default:
        sub_138374( "Mum", 1 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_138374( "Mum", 0 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_139604(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_137752( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_137752( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_137752( iVar3, 6000, 5, 2, 0, 0 );
        break;
        default:
        sub_138374( "Bulgarin", 1 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_138374( "Bulgarin", 0 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_139801(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_137752( iVar3, 5000, 5, 2, 0, 0 );
        break;
        default:
        sub_138374( "Rocco", 1 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_138374( "Rocco", 0 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_139938(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_137752( iVar3, 0, sub_138962(), sub_139228(), 0, 0 );
        break;
        default:
        sub_138374( "Henrique", 1 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_138374( "Henrique", 0 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_140087(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    if (bVar4)
    {
        sub_138374( "Reserve 1", 0 );
        sub_137752( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_140305(int iParam0, int iParam1)
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
    if (g_U10972)
    {
        return;
    }
    if (sub_140366( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_141092( iParam1 );
    }
    return;
}

int sub_140366(int iParam0, int iParam1)
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
    iVar4 = g_U14925[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U22960[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U22960[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_140506( 0, iVar6 );
            g_U14902[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U22960[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_140506(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_140676( 0 );
    return;
}

void sub_140676(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_140921();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_140921()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_141092(int iParam0)
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
    if (g_U14902[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14902[iParam0]._fU4 == g_U14902[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14902[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14902[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_141331( 188 );
        SET_FLOAT_STAT( 188, fVar3 );
        break;
        case 1:
        sub_141331( 192 );
        SET_FLOAT_STAT( 192, fVar3 );
        break;
        case 2:
        sub_141331( 191 );
        SET_FLOAT_STAT( 191, fVar3 );
        break;
        case 3:
        sub_141331( 197 );
        SET_FLOAT_STAT( 197, fVar3 );
        break;
        case 4: break;
        case 5:
        sub_141331( 200 );
        SET_FLOAT_STAT( 200, fVar3 );
        break;
        case 6:
        sub_141331( 201 );
        SET_FLOAT_STAT( 201, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_141331(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_141763(unknown uParam0, unknown uParam1)
{
    sub_141782( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_141782(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_142214(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 12)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_142293(unknown uParam0)
{
    sub_1657();
    g_U12382[uParam0]._fU120 = 0;
    return;
}

void sub_142332(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_142383( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_142383(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_142507()
{
    sub_142516();
    return;
}

void sub_142516()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_142606()
{
    sub_142516();
    return;
}

void sub_142658()
{
    sub_142516();
    StrCopy( ref g_U10966, "FPASS", 16 );
    return;
}

void sub_142812(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (sub_142821() == 0)
    {
        sub_142846();
    }
    if (HAS_SCRIPT_LOADED( "MissionResultsTimer" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) == 0)
        {
            START_NEW_SCRIPT( "MissionResultsTimer", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionResultsTimer" );
        }
    }
    if (sub_145601() <= g_U43138[g_U43137]._fU8)
    {
        g_U43568 = 1;
    }
    else
    {
        g_U43568 = 0;
    }
    if (g_U43600 == 1)
    {
        g_U43612 = sub_145883();
        g_U43600 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_145601() < g_U43612)
            {
                g_U43575 = 1;
            }
            else
            {
                g_U43575 = 0;
            }
        }
        else
        {
            g_U43575 = 0;
        }
    }
    else
    {
        g_U43575 = 0;
    }
    if (g_U43137 == 22)
    {
        if ((sub_146676( 0, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_146986();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_146676( 0, 0, 0 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 17)
    {
        if ((sub_146676( 1, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_146986();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_146676( 1, 0, 0 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 15)
    {
        g_U43519 = uParam0;
        if (g_U43519 >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_146986();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (g_U43519 > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if ((g_U43137 == 18) || (g_U43137 == 16))
    {
        if ((sub_146676( 0, 0, 1 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_146986();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_146676( 0, 0, 1 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 25)
    {
        g_U43519 = uParam0;
        if (g_U43519 >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_146986();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (g_U43519 > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43571 == 1)
    {
        iVar3 = 1;
    }
    else
    {
        iVar3 = 0;
    }
    if (g_U43572 == 1)
    {
        iVar4 = 1;
    }
    else
    {
        iVar4 = 0;
    }
    if (g_U43573 == 1)
    {
        iVar5 = 1;
    }
    else
    {
        iVar5 = 0;
    }
    if (g_U43607 == 1)
    {
        g_U43619 = sub_148458();
        g_U43607 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar3 > g_U43619)
            {
                g_U43582 = 1;
            }
            else
            {
                g_U43582 = 0;
            }
        }
        else
        {
            g_U43582 = 0;
        }
    }
    else
    {
        g_U43582 = 0;
    }
    if (g_U43608 == 1)
    {
        g_U43620 = sub_149154();
        g_U43608 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar4 > g_U43620)
            {
                g_U43583 = 1;
            }
            else
            {
                g_U43583 = 0;
            }
        }
        else
        {
            g_U43583 = 0;
        }
    }
    else
    {
        g_U43583 = 0;
    }
    if (g_U43609 == 1)
    {
        g_U43621 = sub_149733();
        g_U43609 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar5 > g_U43621)
            {
                g_U43584 = 1;
            }
            else
            {
                g_U43584 = 0;
            }
        }
        else
        {
            g_U43584 = 0;
        }
    }
    else
    {
        g_U43584 = 0;
    }
    return;
}

int sub_142821()
{
    return 0;
}

void sub_142846()
{
    if (sub_142860( sub_7291() ))
    {
        if (IS_CONTROL_PRESSED( 2, 77 ))
        {
            if (l_U776 == 0)
            {
                GET_GAME_TIMER( ref l_U773 );
                l_U776 = 1;
            }
            GET_GAME_TIMER( ref l_U774 );
            l_U775 = l_U774 - l_U773;
            if (l_U775 < 1000)
            {
                PRINTNL();
                PRINTSTRING( "***************************" );
                PRINTNL();
                PRINTSTRING( "Player is in the back of a taxi - Blocking Mission Time Goal" );
                PRINTNL();
                PRINTSTRING( "***************************" );
                PRINTNL();
                g_U43593 = 1;
            }
        }
    }
    sub_143390();
    if (g_U12379 == 1)
    {
        if ((IS_BIT_SET( g_U10938._fU0, 7 )) == 0)
        {
            if (g_U43133 == 0)
            {
                if (l_U772 == 0)
                {
                    GET_GAME_TIMER( ref l_U769 );
                    l_U772 = 1;
                }
                GET_GAME_TIMER( ref l_U770 );
                l_U771 = l_U770 - l_U769;
                if (l_U771 < 1000)
                {
                    g_U43597 = 1;
                    PRINTNL();
                    PRINTSTRING( "***************************" );
                    PRINTNL();
                    PRINTSTRING( "Player has used a trip skip - Blocking Mission Goals" );
                    PRINTNL();
                    PRINTSTRING( "***************************" );
                    PRINTNL();
                }
            }
            else
            {
                g_U43597 = 0;
            }
        }
        else
        {
            g_U43597 = 0;
        }
    }
    return;
}

int sub_142860(int iParam0)
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
                if (sub_142924( uVar3 ))
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

int sub_142924(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2687))
    {
        return 1;
    }
    return 0;
}

void sub_143390()
{
    int iVar2;

    iVar2 = 1000;
    if (CHEAT_HAPPENED_RECENTLY( 0, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Poor Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 1, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Advance Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 22, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used E2 Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 30, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used E2 Explosive punch cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 7, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Annihilitor cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 27, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Buzzard cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 26, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used APC cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 2, iVar2 ))
    {
        g_U43594 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Health Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 4, iVar2 ))
    {
        g_U43596 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Wanted Level Reduction - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    return;
}

void sub_145601()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    if (g_U12379 == 1)
    {
        if (NOT (IS_CHAR_DEAD( sub_7291() )))
        {
            GET_CHAR_HEALTH( sub_7291(), ref g_U43521 );
        }
    }
    uVar3 = TO_FLOAT( g_U43521 );
    uVar4 = TO_FLOAT( g_U43520 );
    fVar2 = uVar3 / uVar4;
    fVar2 *= 100;
    fVar2 -= 100;
    if (fVar2 < 0)
    {
        fVar2 *= -1;
    }
    fVar2 *= 2;
    if (fVar2 < 0)
    {
        fVar2 = 0;
    }
    if (fVar2 > 100)
    {
        fVar2 = 100;
    }
    g_U43522 = FLOOR( fVar2 );
    if (g_U43522 < 0)
    {
        g_U43522 = 0;
    }
    return g_U43522;
}

int sub_145883()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 475 );
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 479 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 484 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 578 );
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 544 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 550 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 557 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 525 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 533 );
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 568 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 573 );
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 493 );
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 498 );
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 502 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 506 );
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 511 );
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 583 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 591 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 599 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 563 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 605 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 520 );
    }
    return 0;
}

void sub_146676(int iParam0, int iParam1, int iParam2)
{
    if (iParam1 == 1)
    {
        g_U43518 = GET_INT_STAT( 296 );
        g_U43519 = g_U43518 - g_U43517;
    }
    else if (iParam2 == 1)
    {
        g_U43518 = GET_INT_STAT( 297 );
        g_U43519 = g_U43518 - g_U43517;
    }
    else if (iParam0 == 1)
    {
        if (l_U768 < GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER())
        {
            g_U43519++;
        }
        l_U768 = GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
    }
    else
    {
        g_U43518 = GET_INT_STAT( 294 );
        g_U43519 = g_U43518 - g_U43517;
    };;;
    if (g_U43519 < 0)
    {
        g_U43519 = 0;
    }
    return g_U43519;
}

int sub_146986()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 547 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 553 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 558 );
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 586 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 565 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 608 );
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_148458()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 481 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 487 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 579 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 560 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 529 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 534 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 495 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 503 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 507 );
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 613 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 541 );
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 587 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 594 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 602 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 564 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_149154()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 580 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 535 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 494 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 612 );
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 588 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 595 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_149733()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 554 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 596 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}
