void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U101 = 0;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U134 = 10.00000000;
    l_U135 = 15.00000000;
    l_U150 = 0;
    l_U151 = 0;
    l_U152 = 0;
    l_U153 = 0;
    l_U154 = 1;
    l_U220 = 6;
    l_U258 = nil;
    l_U271 = nil;
    l_U289 = 1;
    l_U324 = nil;
    l_U344 = 1;
    l_U420 = 6;
    l_U429 = "BOGT_BoxDrop";
    l_U430 = "BOGT_Box_TickDrop";
    l_U495 = 0.63600000;
    l_U496 = 0.37600000;
    l_U545 = 0.05200000;
    l_U546 = 0.35300000;
    l_U547 = 0.30000000;
    l_U548 = 0.37200000;
    l_U549 = 0.37300000;
    l_U550 = 0.38700000;
    l_U551 = 0.44400000;
    l_U552 = 0.03750000;
    l_U553 = 0.36900000;
    l_U554 = 0.62350000;
    l_U555 = 0.60800000;
    l_U556 = {0.24300000, 0.46700000, 0.00000000};
    l_U559 = {0.23100000, 0.43500000, 0.00000000};
    l_U562 = {0.23100000, 0.43500000, 0.00000000};
    l_U565 = {0.31920000, 0.65250000, 0.00000000};
    l_U568 = {0.31920000, 0.65250000, 0.00000000};
    l_U571 = {0.24300000, 0.46700000, 0.00000000};
    l_U574 = {0.50000000, 1.10000000, 0.00000000};
    l_U577 = {0.31920000, 0.65250000, 0.00000000};
    l_U580 = {0.18225000, 0.35025000, 0.00000000};
    l_U583 = 0.30000000;
    l_U584 = 0.37000000;
    l_U585 = 0.56200000;
    l_U586 = 0.40100000;
    l_U587 = 0.30000000;
    l_U588 = 0.37000000;
    l_U589 = 0.69700000;
    l_U590 = 0.40100000;
    l_U591 = 0.30000000;
    l_U592 = 0.37000000;
    l_U593 = 0.66500000;
    l_U594 = 0.40100000;
    l_U595 = 0.32500000;
    l_U596 = 0.62500000;
    l_U597 = 0.00800000;
    l_U598 = 0.49700000;
    l_U599 = 0.52500000;
    l_U600 = 0.49700000;
    l_U601 = 0.51800000;
    l_U602 = 1;
    l_U603 = 0;
    l_U604 = {0.50000000, 0.50000000, 0};
    l_U607 = 0.20000000;
    l_U608 = 0.20000000;
    l_U652 = 0;
    l_U653 = 0;
    l_U665 = 0;
    l_U669 = 0;
    l_U674 = 0;
    l_U675 = 1;
    l_U676 = 3;
    l_U678 = 0;
    l_U679 = -1;
    l_U680 = 0;
    l_U681 = 0;
    l_U686 = 1;
    l_U789 = 0.00000000;
    l_U790 = 0.00000000;
    l_U791 = 0.00000000;
    l_U861 = {-445.33360000, 357.16620000, 10.14640000};
    l_U864 = {-449.26450000, 357.77600000, 9.98440000};
    l_U867 = {-1502.14600000, 265.18620000, 11.46830000};
    l_U870 = {-1510.49800000, 263.82870000, 11.63700000};
    l_U873 = {-1511.55600000, 262.91780000, 11.62160000};
    l_U889 = 0;
    l_U890 = 0;
    l_U891 = 0;
    l_U892 = 0;
    l_U893 = 0;
    l_U894 = 0;
    l_U895 = 0;
    l_U896 = 0;
    l_U897 = 1;
    l_U898 = 0;
    l_U899 = 0;
    l_U900 = 0;
    l_U901 = 0;
    l_U902 = 83.82010000;
    l_U903 = 359.49470000;
    l_U904 = 274.32580000;
    l_U905 = 270.32610000;
    l_U954 = 1;
    l_U955 = 0;
    l_U966 = 0;
    l_U967 = 0;
    l_U968 = 0;
    l_U969 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1150();
        sub_3467();
    }
    sub_7205();
    sub_8052();
    while (true)
    {
        WAIT( 0 );
        switch (l_U966)
        {
            case 0:
            sub_8219();
            break;
            case 1:
            sub_24660();
            break;
            case 2:
            sub_42406();
            break;
            case 3:
            sub_44583();
            break;
            case 5:
            sub_46053();
            break;
            case 6:
            sub_46729();
            break;
            case 7:
            sub_46845();
            break;
            case 8:
            sub_54528();
            break;
            case 9:
            if (NOT (IS_CHAR_INJURED( l_U906 )))
            {
                sub_58615();
            }
            else
            {
                sub_57918( 0 );
            }
            break;
            case 10:
            if (NOT (IS_CHAR_INJURED( l_U907 )))
            {
                sub_60706();
            }
            else
            {
                sub_57918( 0 );
            }
            break;
            case 11:
            if (NOT (IS_CHAR_INJURED( l_U906 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U907 )))
                {
                    sub_63180();
                }
                else
                {
                    l_U966 = 9;
                    l_U969 = 4;
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U907 )))
            {
                l_U966 = 10;
                l_U969 = 3;
            }
            else if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                sub_57918( 0 );
            };;;
            break;
        }
        sub_65374();
        if (DOES_CHAR_EXIST( l_U906 ))
        {
            if (IS_CHAR_INJURED( l_U906 ))
            {
                if (NOT l_U891)
                {
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    sub_5646();
                    sub_33675();
                    sub_5993( 0 );
                    PRINT_NOW( "T4_T_DEAD", 7500, 0 );
                    l_U966 = 10;
                    l_U969 = 3;
                    l_U891 = 1;
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U907 ))
        {
            if (IS_CHAR_INJURED( l_U907 ))
            {
                if (NOT l_U891)
                {
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    sub_5646();
                    sub_33675();
                    sub_5993( 0 );
                    PRINT_NOW( "T4_G_DEAD", 7500, 0 );
                    l_U966 = 9;
                    l_U969 = 4;
                    l_U891 = 1;
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U909 ))
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U909 )))
            {
                if (NOT l_U891)
                {
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    sub_5646();
                    sub_33675();
                    sub_5993( 1 );
                    PRINT_NOW( "T4_G_CAR", 7500, 0 );
                    l_U966 = 10;
                    l_U969 = 5;
                    l_U891 = 1;
                }
            }
        }
        if (IS_VEH_DRIVEABLE( l_U908 ))
        {
            sub_66370( l_U908 );
        }
        sub_11424( 0 );
    }
    return;
}

void sub_1150()
{
    int iVar2;

    iVar2 = 0;
    sub_1164( iVar2 );
    sub_2450( iVar2 );
    return;
}

void sub_1164(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    sub_1173();
    if (g_U43133)
    {
        return;
    }
    iVar3 = g_U14925[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U819)
    {
        sub_1349();
        sub_1557();
        g_U11063 = 1;
    }
    else if (NOT g_U12382[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1682();
            sub_1734();
            g_U11063 = 1;
        }
    }
    sub_1827();
    sub_1966();
    uVar5 = sub_2079( uParam0 );
    sub_2357( uVar5, 0 );
    return;
}

void sub_1173()
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

void sub_1349()
{
    if (g_U10972)
    {
        return;
    }
    sub_1376( g_U10971 );
    if (NOT (IS_BIT_SET( g_U10938._fU0, 7 )))
    {
        sub_1497();
    }
    return;
}

void sub_1376(int iParam0)
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

void sub_1497()
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

void sub_1557()
{
    sub_1566();
    return;
}

void sub_1566()
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

void sub_1682()
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

void sub_1734()
{
    sub_1743();
    return;
}

void sub_1743()
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

void sub_1827()
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

void sub_1966()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1988();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_1988()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_2079(unknown uParam0)
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
    sub_2310( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_2310(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2357(int iParam0, boolean bParam1)
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

void sub_2450(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2459();
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
    if (NOT sub_3234())
    {
        return;
    }
    if (NOT g_U819)
    {
        sub_3300();
        SET_BIT( ref g_U10938._fU0, 2 );
    }
    return;
}

void sub_2459()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_2497( 5, g_U575[I] )) == 1) AND (g_U575[I]._fU20))
        {
            if ((sub_2497( 1, g_U575[I] )) != 0)
            {
                sub_2783( I );
            }
        }
    }
    if (NOT sub_2949())
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

int sub_2497(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2783(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2868( g_U575 - 1 );
    return;
}

void sub_2868(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2949()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2497( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3234()
{
    if ((g_U10938._fU4 == 0) AND (g_U10938._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_3300()
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

void sub_3467()
{
    if (NOT (IS_CHAR_INJURED( sub_3476() )))
    {
        SET_PLAYER_CONTROL( sub_3530(), 1 );
    }
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 1 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1507.82300000, 239.96800000, -10.29050000, -1468.89800000, 385.56870000, 30.56610000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -446.26570000, 277.01490000, -10.29050000, -463.57580000, 376.90800000, 30.56610000 );
    sub_3683( 17, 0 );
    sub_5606();
    sub_5629();
    sub_5646();
    sub_5801();
    sub_5874();
    sub_5891();
    sub_5993( 1 );
    MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3476()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3530()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3683(unknown uParam0, unknown uParam1)
{
    g_U11343._fU112[uParam0] = uParam1;
    sub_3707();
    return;
}

void sub_3707()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_3735( 19 );
        if ((sub_3780( 19, iVar3 )) AND (g_U10973[g_U11209[I]._fU0]._fU0))
        {
            sub_3881( ref g_U11209[I]._fU20, g_U11209[I]._fU4, 4, 60 );
        }
        else
        {
            sub_4087( ref g_U11209[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_3735( 16 );
        if ((sub_3780( 16, iVar3 )) AND (g_U10973[g_U11300[I]._fU0]._fU0))
        {
            sub_3881( ref g_U11300[I]._fU20, g_U11300[I]._fU4, 4, 62 );
        }
        else
        {
            sub_4087( ref g_U11300[I]._fU20 );
        }
    }
    for ( I = 0; I < 72; I++ )
    {
        iVar3 = sub_4280( I );
        if ((sub_3780( g_U11582[I]._fU12, iVar3 )) AND (g_U10973[g_U11582[I]._fU28]._fU0))
        {
            sub_3881( ref g_U11582[I]._fU32, g_U11582[I]._fU0, g_U11582[I]._fU24, g_U11582[I]._fU20 );
            sub_4588( I );
        }
        else
        {
            sub_4087( ref g_U11582[I]._fU32 );
            g_U11343._fU660[I] = 0;
        }
    }
    sub_4877();
    return;
}

int sub_3735(unknown uParam0)
{
    if (g_U11343._fU112[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_3780(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U11343._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_3881(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
            if (iParam4 == 0)
            {
                CHANGE_BLIP_DISPLAY( (uParam0^), 2 );
            }
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U674 );
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

void sub_4087(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP_AND_CLEAR_INDEX( uParam0 );
    (uParam0^) = nil;
    return;
}

int sub_4280(unknown uParam0)
{
    unknown uVar3;

    if (g_U11343._fU368[uParam0])
    {
        return 1;
    }
    if (sub_4322( g_U11582[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_3735( g_U11582[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U12379)
    {
        uVar3 = g_U11582[uParam0]._fU12;
        if (g_U11343._fU0[uVar3])
        {
            if (g_U11582[uParam0]._fU24 == 1)
            {
                if (g_U10978 == g_U11582[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_4322(unknown uParam0)
{
    if (g_U11343._fU224[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_4588(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U11582[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 5:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11582[uParam0]._fU32, "BINCO" );
            break;
            case 42:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11582[uParam0]._fU32, "ZIP" );
            break;
            case 41:
            case 40:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11582[uParam0]._fU32, "PERSEUS" );
            break;
            case 11:
            case 20:
            case 62:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11582[uParam0]._fU32, "RACEBLIP" );
            break;
        }
    }
    return;
}

void sub_4877()
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
    bVar3 = sub_3735( 19 );
    for ( I = 0; I < 15; I++ )
    {
        sub_4922( g_U11209[I]._fU20, bVar3 );
    }
    bVar3 = sub_3735( 16 );
    for ( I = 0; I < 7; I++ )
    {
        sub_4922( g_U11300[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 72; I++ )
    {
        if ((sub_4280( I )) AND (g_U10973[g_U11582[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 72; I++ )
    {
        bVar3 = sub_4280( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U10978 == g_U11582[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_4922( g_U11582[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 1; I++ )
    {
        bVar3 = false;
        if (g_U10984[I]._fU0)
        {
            if (g_U10978 == g_U10984[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_4922( g_U10984[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_3476() )))
        {
            GET_CHAR_COORDINATES( sub_3476(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 1; I++ )
            {
                if (g_U10984[I]._fU0)
                {
                    fVar11 = sub_5413( uVar7, g_U10984[I]._fU8 );
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
            for ( I = 0; I < 1; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_4922( g_U10984[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_4922(unknown uParam0, boolean bParam1)
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

void sub_5413(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_5606()
{
    g_U972 = -1;
    return;
}

void sub_5629()
{
    return;
}

void sub_5646()
{
    if (DOES_BLIP_EXIST( l_U912 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U912 );
    }
    if (DOES_BLIP_EXIST( l_U913 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U913 );
    }
    if (DOES_BLIP_EXIST( l_U911 ))
    {
        SET_ROUTE( l_U911, 0 );
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U911 );
    }
    if (DOES_BLIP_EXIST( l_U914 ))
    {
        SET_ROUTE( l_U914, 0 );
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U914 );
    }
    return;
}

void sub_5801()
{
    if (DOES_CHAR_EXIST( l_U906 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U906 );
    }
    if (DOES_CHAR_EXIST( l_U907 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U907 );
    }
    return;
}

void sub_5874()
{
    return;
}

void sub_5891()
{
    if (DOES_VEHICLE_EXIST( l_U908 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U908 );
    }
    if (DOES_VEHICLE_EXIST( l_U909 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U909 );
    }
    if (DOES_VEHICLE_EXIST( l_U910 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U910 );
    }
    return;
}

void sub_5993(unknown uParam0)
{
    if (sub_6008( l_U956 ))
    {
        sub_6049( l_U963, ref l_U956, l_U962, 0 );
        WAIT( 0 );
    }
    sub_7038( ref l_U956, uParam0 );
    l_U922 = 0;
    return;
}

void sub_6008(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_6049(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_6070( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

int sub_6070(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_6134( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_6134(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_6156( iParam1 )))
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
    sub_6844( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_6156(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_6233( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_6233( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_6233( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_6233(unknown uParam0)
{
    return;
}

void sub_6844(int iParam0, int iParam1)
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

void sub_7038(int iParam0, unknown uParam1)
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

void sub_7205()
{
    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    CLEAR_AREA( 0.00000000, 0.00000000, 0.00000000, 5000.00000000, 1 );
    g_U43137 = 3;
    l_U876[0] = {973.95100000, -169.82210000, 24.19870000};
    l_U876[1] = {-338.17320000, 1392.43200000, 12.91810000};
    l_U876[2] = {-1580.49400000, 463.76640000, 25.44880000};
    LOAD_ADDITIONAL_TEXT( "TONY4", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "EP2_SFX\GT04_BLOG_THIS_A" )))
    {
        WAIT( 0 );
    }
    sub_7451();
    sub_5606();
    if (IS_PLAYER_PLAYING( sub_3530() ))
    {
        SET_PLAYER_CONTROL( sub_3530(), 0 );
        CLEAR_WANTED_LEVEL( sub_3530() );
    }
    sub_7525( "E2T4AUD" );
    sub_7644( 0, sub_3476(), "LUIS", 0 );
    l_U899 = sub_7812( "E2T4AUD", "E2T4_ARRGH" );
    g_U42935 = 0;
    CLEAR_PRINTS();
    return;
}

void sub_7451()
{
    return;
}

void sub_7525(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_7542();
    return;
}

void sub_7542()
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

void sub_7644(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_7724( "\n PED NUMBER ", uParam0 );
    sub_7764( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_7724(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7764(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7812(unknown uParam0, unknown uParam1)
{
    int Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    Result = 0;
    REQUEST_ADDITIONAL_TEXT( uParam0, 6 );
    while (NOT (HAS_ADDITIONAL_TEXT_LOADED( 6 )))
    {
        WAIT( 0 );
    }
    sub_7870( ref uVar5, uParam1, Result + 1, -1, -1 );
    ConcatString(ref uVar5, "A", 16);
    while (DOES_TEXT_LABEL_EXIST( ref uVar5 ))
    {
        Result++;
        sub_7870( ref uVar5, uParam1, Result + 1, -1, -1 );
        ConcatString(ref uVar5, "A", 16);
    }
    return Result;
}

void sub_7870(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_8052()
{
    switch (g_U43104[3])
    {
        case 0:
        l_U966 = 0;
        break;
        default:
    }
    return;
}

void sub_8219()
{
    int iVar2;
    int iVar3;

    sub_8228();
    sub_11424( 0 );
    if ((IS_BIT_SET( g_U10938._fU0, 7 )) AND (NOT g_U43133))
    {
        g_U10935 = 1;
        sub_18901();
        sub_18975( 2 );
        START_CUTSCENE_NOW( "GT04_AA" );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1316667213, -440.00000000, 358.00000000, 12.00000000, 1, 1.00000000 );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            sub_11424( 0 );
            TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "ambwindowlift" );
            TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "ambtunnelcops" );
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            sub_11424( 0 );
            TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "ambwindowlift" );
            TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "ambtunnelcops" );
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "GT04_AA" );
    }
    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    g_U10935 = 0;
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1316667213, -440.00000000, 358.00000000, 12.00000000, 0, 0.00000000 );
    g_U43104[3] = 0;
    CLEAR_AREA( l_U861._fU0, l_U861._fU4, l_U861._fU8, 200.00000000, 1 );
    REQUEST_MODEL( sub_20131( 0 ) );
    REQUEST_MODEL( 2014087898 );
    REQUEST_MODEL( -1097828879 );
    sub_20317( 0 );
    while ((((NOT (HAS_MODEL_LOADED( 2014087898 ))) || (NOT (HAS_MODEL_LOADED( sub_20131( 0 ) )))) || (NOT (HAS_MODEL_LOADED( -1097828879 )))) || (NOT (sub_20820( 0 ))))
    {
        WAIT( 0 );
    }
    if (NOT (sub_20887( 0, l_U864, l_U903, ref l_U908 )))
    {
        WAIT( 0 );
    }
    WARP_CHAR_INTO_CAR( sub_3476(), l_U908 );
    GET_PLAYER_GROUP( sub_3530(), ref l_U919 );
    SET_GROUP_SEPARATION_RANGE( l_U919, 40.00000000 );
    sub_22223( 0, ref l_U906, l_U908, 0 );
    SET_CHAR_HEALTH( l_U906, 200 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U906, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U906, 1 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U906, 0 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U906, 0 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U906, 0 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U906, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U906, 0 );
    SET_CHAR_RELATIONSHIP( l_U906, 1, 0 );
    sub_7644( 1, l_U906, "TONY", 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U906, 1, 2, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U906, 2, 0, 0 );
    iVar2 = 0;
    iVar3 = -1;
    GET_CHAR_PROP_INDEX( l_U906, 1, ref iVar3 );
    if (NOT (iVar3 == iVar2))
    {
        SET_CHAR_PROP_INDEX( l_U906, 1, iVar2 );
    }
    CREATE_CHAR( 26, 2014087898, l_U861._fU0 - 1.00000000, l_U861._fU4 - 1.00000000, l_U861._fU8, ref l_U907, 1 );
    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U907, l_U908, 2 );
    SET_CHAR_HEALTH( l_U907, 200 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U907, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U907, 1 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U907, 0 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U907, 0 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U907, 0 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U907, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U907, 0 );
    SET_CHAR_RELATIONSHIP( l_U907, 1, 0 );
    sub_7644( 2, l_U907, "GRACIE", 0 );
    CREATE_CAR( -1097828879, l_U873._fU0, l_U873._fU4, l_U873._fU8, ref l_U909, 1 );
    SET_CAR_HEADING( l_U909, l_U905 );
    CHANGE_CAR_COLOUR( l_U909, 101, 35 );
    SET_CAR_HEALTH( l_U909, 1300 );
    SET_CAR_ON_GROUND_PROPERLY( l_U909 );
    SET_VEH_HAS_STRONG_AXLES( l_U909, 1 );
    STOP_CAR_BREAKING( l_U909, 1 );
    LOCK_CAR_DOORS( l_U909, 3 );
    TURN_OFF_VEHICLE_EXTRA( l_U909, 3, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 2014087898 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_20131( 0 ) );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1097828879 );
    sub_23902( 0 );
    SET_CAM_BEHIND_PED( sub_3476() );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SWITCH_ROADS_OFF( -1507.82300000, 239.96800000, -10.29050000, -1468.89800000, 385.56870000, 30.56610000 );
    SWITCH_ROADS_OFF( -446.26570000, 277.01490000, -10.29050000, -463.57580000, 376.90800000, 30.56610000 );
    CLEAR_AREA_OF_CARS( l_U864._fU0, l_U864._fU4, l_U864._fU8, 200.00000000 );
    sub_18901();
    LOAD_SCENE( l_U861._fU0, l_U861._fU4, l_U861._fU8 );
    WAIT( 500 );
    if (NOT IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U910 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U910 );
    }
    SET_GPS_TEST_IN_3D_FLAG( 1 );
    SET_PLAYER_CONTROL( sub_3530(), 1 );
    sub_24250( "E2T4_WHERE", 1, 6, "E2T4AUD", 0, 0 );
    sub_24478( l_U908 );
    l_U966 = 1;
    return;
}

void sub_8228()
{
    sub_8237();
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
        sub_10016();
        sub_10054();
    }
    else
    {
        g_U43626 = 1;
        sub_10016();
        sub_10054();
        if (g_U43137 == 22)
        {
            sub_10157( 0, 0, 0 );
        }
        if (g_U43137 == 17)
        {
            sub_10157( 1, 0, 0 );
        }
        if (g_U43137 == 15)
        {
            sub_10157( 0, 1, 0 );
        }
        if (g_U43137 == 18)
        {
            sub_10157( 0, 0, 1 );
        }
        if (g_U43137 == 16)
        {
            sub_10157( 0, 0, 1 );
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
    l_U659 = 0;
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

void sub_8237()
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

void sub_10016()
{
    GET_GAME_TIMER( ref g_U43501 );
    g_U43496 = 1;
    return;
}

void sub_10054()
{
    if (NOT (IS_CHAR_DEAD( sub_3476() )))
    {
        GET_CHAR_HEALTH( sub_3476(), ref g_U43520 );
        g_U43520 = 200;
    }
    return;
}

void sub_10157(int iParam0, int iParam1, int iParam2)
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

void sub_11424(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (sub_11433() == 0)
    {
        sub_11458();
    }
    if (HAS_SCRIPT_LOADED( "MissionResultsTimer" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) == 0)
        {
            START_NEW_SCRIPT( "MissionResultsTimer", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionResultsTimer" );
        }
    }
    if (sub_14213() <= g_U43138[g_U43137]._fU8)
    {
        g_U43568 = 1;
    }
    else
    {
        g_U43568 = 0;
    }
    if (g_U43600 == 1)
    {
        g_U43612 = sub_14495();
        g_U43600 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_14213() < g_U43612)
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
        if ((sub_15288( 0, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_15598();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_15288( 0, 0, 0 )) > g_U43617)
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
        if ((sub_15288( 1, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_15598();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_15288( 1, 0, 0 )) > g_U43617)
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
            g_U43617 = sub_15598();
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
        if ((sub_15288( 0, 0, 1 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_15598();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_15288( 0, 0, 1 )) > g_U43617)
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
            g_U43617 = sub_15598();
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
        g_U43619 = sub_17070();
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
        g_U43620 = sub_17766();
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
        g_U43621 = sub_18345();
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

int sub_11433()
{
    return 0;
}

void sub_11458()
{
    if (sub_11472( sub_3476() ))
    {
        if (IS_CONTROL_PRESSED( 2, 77 ))
        {
            if (l_U669 == 0)
            {
                GET_GAME_TIMER( ref l_U666 );
                l_U669 = 1;
            }
            GET_GAME_TIMER( ref l_U667 );
            l_U668 = l_U667 - l_U666;
            if (l_U668 < 1000)
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
    sub_12002();
    if (g_U12379 == 1)
    {
        if ((IS_BIT_SET( g_U10938._fU0, 7 )) == 0)
        {
            if (g_U43133 == 0)
            {
                if (l_U665 == 0)
                {
                    GET_GAME_TIMER( ref l_U662 );
                    l_U665 = 1;
                }
                GET_GAME_TIMER( ref l_U663 );
                l_U664 = l_U663 - l_U662;
                if (l_U664 < 1000)
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

int sub_11472(int iParam0)
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
                if (sub_11536( uVar3 ))
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

int sub_11536(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2687))
    {
        return 1;
    }
    return 0;
}

void sub_12002()
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

void sub_14213()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    if (g_U12379 == 1)
    {
        if (NOT (IS_CHAR_DEAD( sub_3476() )))
        {
            GET_CHAR_HEALTH( sub_3476(), ref g_U43521 );
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

int sub_14495()
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

void sub_15288(int iParam0, int iParam1, int iParam2)
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
        if (l_U661 < GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER())
        {
            g_U43519++;
        }
        l_U661 = GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
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

int sub_15598()
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

int sub_17070()
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

int sub_17766()
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

int sub_18345()
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

void sub_18901()
{
    sub_18911( 1 );
    sub_18911( 2 );
    sub_18911( 0 );
    return;
}

void sub_18911(unknown uParam0)
{
    g_U30226[uParam0] = GET_ID_OF_THIS_THREAD();
    g_U30149[uParam0] = 1;
    return;
}

void sub_18975(unknown uParam0)
{
    REMOVE_ANIMS( "missnightclub" );
    REMOVE_ANIMS( "AMB@SMOKING_F" );
    REMOVE_ANIMS( "AMB@SMOKING" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2037134882 );
    switch (uParam0)
    {
        case 0:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 982077731 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1758965191 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -844218756 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1684055465 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubBM2" );
        REMOVE_ANIMS( "missamb_bama" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "BAHAMA MAMAS" );
        PRINTNL();
        break;
        case 1:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        sub_19325( g_U30218 );
        sub_19325( g_U30219 );
        sub_19325( g_U30220 );
        sub_19325( g_U30221 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1429700748 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1446884113 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubM92" );
        REMOVE_ANIMS( "missamb_m9" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "MAISONETTE_9" );
        PRINTNL();
        break;
        case 2:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        sub_19325( g_U30222 );
        sub_19325( g_U30223 );
        sub_19325( g_U30224 );
        sub_19325( g_U30225 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1662473323 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubHC2" );
        REMOVE_ANIMS( "missamb_herc_female" );
        REMOVE_ANIMS( "missamb_herc_male" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "HERCULES" );
        PRINTNL();
        break;
    }
    if (NOT g_U30124[uParam0])
    {
        g_U30124[uParam0] = 1;
    }
    return;
}

void sub_19325(int iParam0)
{
    if (NOT (iParam0 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( iParam0 );
    }
    return;
}

int sub_20131(unknown uParam0)
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

void sub_20317(unknown uParam0)
{
    REQUEST_MODEL( sub_20328( uParam0 ) );
    return;
}

int sub_20328(unknown uParam0)
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
    sub_2310( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_20820(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_20328( uParam0 ) );
}

void sub_20887(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_20131( uParam0 );
    return sub_20918( uParam5, uVar8, uParam1, uParam4, uParam0 );
}

int sub_20918(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    sub_21050( (uParam0^), uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_21050(unknown uParam0, int iParam1)
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
        if (NOT (IS_CHAR_DEAD( sub_3476() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3476() )))
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
        if (NOT (IS_CHAR_DEAD( sub_3476() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3476() )))
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
        if (NOT (IS_CHAR_DEAD( sub_3476() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3476() )))
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
        if (NOT (IS_CHAR_DEAD( sub_3476() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3476() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_22223(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    CREATE_CHAR_AS_PASSENGER( uParam2, sub_22236( uParam0 ), sub_20328( uParam0 ), uParam3, uParam1 );
    sub_22277( uParam0, (uParam1^) );
    sub_22299( uParam0, (uParam1^) );
    return;
}

int sub_22236(unknown uParam0)
{
    return 25;
}

void sub_22277(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_22299(unknown uParam0, unknown uParam1)
{
    sub_22311( ref uParam1, uParam0 );
    return;
}

void sub_22311(unknown uParam0, int iParam1)
{
    sub_22322( uParam0 );
    if (iParam1 == 37)
    {
        sub_22424( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_23008( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_22322(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_22424(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_23008(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_22424( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_22424( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_22424( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_22424( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_22424( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_23902(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_20328( uParam0 ) );
    return;
}

void sub_24250(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, boolean bParam4, boolean bParam5)
{
    unknown uVar8;

    uVar8 = uParam1;
    if (bParam4)
    {
        l_U923[uVar8] = 0;
    }
    if (NOT l_U923[uVar8])
    {
        l_U963 = uParam0;
        l_U964 = uParam3;
        l_U922 = uVar8;
        l_U962 = uParam2;
        if (bParam5)
        {
            sub_5993( 0 );
            sub_24355( l_U963, ref l_U956, l_U962, 1 );
            l_U923[l_U922] = 1;
        }
    }
    return;
}

void sub_24355(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_24376( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_24376(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_6134( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_24478(unknown uParam0)
{
    sub_24489( uParam0 );
    if (g_U43137 == 4)
    {
        sub_24557();
    }
    if (g_U43137 == 10)
    {
        sub_24557();
    }
    if (g_U43137 == 7)
    {
        sub_24557();
    }
    return;
}

void sub_24489(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEALTH( uParam0, ref g_U43510 );
    }
    g_U43499 = 1;
    return;
}

void sub_24557()
{
    GET_GAME_TIMER( ref g_U43504 );
    g_U43497 = 1;
    return;
}

void sub_24660()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    float fVar6;
    float fVar7;

    l_U954 = 0;
    GET_CHAR_COORDINATES( sub_3476(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    if ((NOT (IS_CHAR_INJURED( l_U906 ))) AND (NOT (IS_CHAR_INJURED( l_U907 ))))
    {
        sub_24749( -1501.70100000, 286.32120000, 13.01790000, 182.11490000 );
        if ((IS_VEH_DRIVEABLE( l_U908 )) AND (NOT (sub_24936( l_U908 ))))
        {
            if (sub_25229( l_U867._fU0, l_U867._fU4, l_U867._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1, l_U906, l_U907, 0, l_U908, "T4_HOUSE", "T4_T_LEAVE", "T4_G_LEAVE", "", "T4_T_LEAVE", "T4_CAR", 0, 1, "T4_LOSECOPS", "T4_CARB" ))
            {
                CLEAR_PRINTS();
                sub_5646();
                sub_5993( 1 );
                l_U954 = 1;
                SET_PLAYER_CONTROL( sub_3530(), 0 );
                if ((NOT (IS_CHAR_INJURED( l_U906 ))) AND (NOT (IS_CHAR_INJURED( l_U907 ))))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U906, 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U907, 1 );
                    REMOVE_CHAR_FROM_GROUP( l_U906 );
                    REMOVE_CHAR_FROM_GROUP( l_U907 );
                }
                SETTIMERB( 0 );
                l_U966 = 2;
            }
            else if (((sub_40276( sub_3476(), l_U906 )) AND (sub_40276( l_U907, l_U906 ))) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_3530(), 0 ))))
            {
                l_U954 = 1;
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3476(), 1 );
                BLOCK_CHAR_AMBIENT_ANIMS( l_U906, 1 );
                BLOCK_CHAR_AMBIENT_ANIMS( l_U907, 1 );
                BLOCK_CHAR_GESTURE_ANIMS( l_U907, 0 );
                if ((((((NOT (sub_31389( 0 ))) AND (NOT (sub_40489( l_U956 )))) AND (NOT (sub_6008( l_U956 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_3476() )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U906 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U907 ))))
                {
                    if (NOT l_U892)
                    {
                        if (g_U43133)
                        {
                            if (g_U42937 < 100)
                            {
                                g_U42937 = 100;
                            }
                        }
                        g_U42937++;
                        if (((NOT g_U43133) AND (g_U42937 > 2)) || ((g_U43133) AND (g_U42937 > 102)))
                        {
                            SAY_AMBIENT_SPEECH( l_U906, "LISTEN_TO_RADIO", 1, 0, 0 );
                        }
                        l_U892 = 1;
                    }
                    if ((g_U42937 == 1) || (g_U42937 == 101))
                    {
                        iVar5 = 0;
                    }
                    else if ((g_U42937 == 2) || (g_U42937 == 102))
                    {
                        iVar5 = 1;
                    }
                    else
                    {
                        iVar5 = 2;
                    }
                    switch (l_U898)
                    {
                        case 0:
                        if (iVar5 == 0)
                        {
                            sub_24250( "E2T4_B1AV1", 2, 6, "E2T4AUD", 0, 0 );
                        }
                        else if (iVar5 == 1)
                        {
                            sub_24250( "E2T4_B1AV2", 9, 6, "E2T4AUD", 0, 0 );
                        }
                        l_U898++;
                        break;
                        case 1:
                        if (iVar5 == 0)
                        {
                            sub_24250( "E2T4_B1BV1", 3, 6, "E2T4AUD", 0, 0 );
                        }
                        else if (iVar5 == 1)
                        {
                            sub_24250( "E2T4_B1BV2", 10, 6, "E2T4AUD", 0, 0 );
                        }
                        l_U898++;
                        break;
                        case 2:
                        if (iVar5 == 0)
                        {
                            sub_24250( "E2T4_B1CV1", 4, 6, "E2T4AUD", 0, 0 );
                        }
                        else if (iVar5 == 1)
                        {
                            sub_24250( "E2T4_B1CV2", 11, 6, "E2T4AUD", 0, 0 );
                        }
                        l_U898++;
                        break;
                        case 3:
                        if (iVar5 == 0)
                        {
                            sub_24250( "E2T4_B1DV1", 5, 6, "E2T4AUD", 0, 0 );
                        }
                        else if (iVar5 == 1)
                        {
                            sub_24250( "E2T4_B1DV2", 12, 6, "E2T4AUD", 0, 0 );
                        }
                        l_U898++;
                        break;
                        case 4:
                        if (iVar5 == 0)
                        {
                            sub_24250( "E2T4_B1EV1", 6, 6, "E2T4AUD", 0, 0 );
                        }
                        else if (iVar5 == 1)
                        {
                            sub_24250( "E2T4_B1EV2", 13, 6, "E2T4AUD", 0, 0 );
                        }
                        l_U898++;
                        break;
                        case 5:
                        if (iVar5 == 0)
                        {
                            sub_24250( "E2T4_B1FV1", 7, 6, "E2T4AUD", 0, 0 );
                        }
                        else if (iVar5 == 1)
                        {
                            sub_24250( "E2T4_B1FV2", 14, 6, "E2T4AUD", 0, 0 );
                        }
                        l_U898++;
                        break;
                        case 6:
                        if (iVar5 == 0)
                        {
                            sub_24250( "E2T4_B1GV1", 8, 6, "E2T4AUD", 0, 0 );
                        }
                        l_U898++;
                        break;
                    }
                }
            }
        }
        else if (NOT l_U891)
        {
            CLEAR_PRINTS();
            CLEAR_HELP();
            sub_5646();
            sub_33675();
            sub_5993( 1 );
            PRINT_NOW( "T4_T_CAR", 7500, 0 );
            l_U966 = 11;
            l_U969 = 6;
            l_U891 = 1;
        }
        fVar6 = sub_41779( sub_3476(), l_U907, 1, 0 );
        fVar7 = sub_41779( sub_3476(), l_U906, 1, 0 );
        if (fVar7 >= 40000.00000000)
        {
            if (NOT l_U891)
            {
                CLEAR_PRINTS();
                CLEAR_HELP();
                sub_5646();
                sub_33675();
                sub_5993( 0 );
                if (DOES_CHAR_EXIST( l_U906 ))
                {
                    DELETE_CHAR( ref l_U906 );
                }
                if (fVar6 >= 10000.00000000)
                {
                    if (DOES_CHAR_EXIST( l_U907 ))
                    {
                        DELETE_CHAR( ref l_U907 );
                    }
                    PRINT_NOW( "T4_TG_LEFT", 7500, 0 );
                    l_U966 = 8;
                }
                else
                {
                    PRINT_NOW( "T4_T_LEFT", 7500, 0 );
                    l_U966 = 10;
                }
                l_U969 = 1;
                l_U891 = 1;
            }
        }
        else if (fVar6 >= 40000.00000000)
        {
            if (NOT l_U891)
            {
                CLEAR_PRINTS();
                CLEAR_HELP();
                sub_5646();
                sub_33675();
                sub_5993( 0 );
                if (DOES_CHAR_EXIST( l_U907 ))
                {
                    DELETE_CHAR( ref l_U907 );
                }
                if (fVar7 >= 10000.00000000)
                {
                    if (DOES_CHAR_EXIST( l_U906 ))
                    {
                        DELETE_CHAR( ref l_U906 );
                    }
                    PRINT_NOW( "T4_TG_LEFT", 7500, 0 );
                    l_U966 = 8;
                }
                else
                {
                    PRINT_NOW( "T4_G_LEFT", 7500, 0 );
                    l_U966 = 9;
                }
                l_U969 = 2;
                l_U891 = 1;
            }
        }
    }
    return;
}

void sub_24749(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_BLIP_EXIST( l_U132 ))
    {
        if (sub_24780( l_U132 ))
        {
            sub_24855( ref l_U132, uParam0, uParam3 );
        }
    }
    return;
}

int sub_24780(unknown uParam0)
{
    int iVar3;

    if (DOES_BLIP_EXIST( uParam0 ))
    {
        iVar3 = GET_BLIP_INFO_ID_TYPE( uParam0 );
        if ((iVar3 == 4) || (iVar3 == 5))
        {
            return 1;
        }
    }
    return 0;
}

void sub_24855(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2668 = (uParam0^);
        g_U2683 = {uParam1};
        g_U2681 = uParam4;
    }
    return;
}

int sub_24936(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))
        {
            return 1;
        };;;;
    }
    return 0;
}

int sub_25229(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20)
{
    int iVar23;
    int I;
    unknown uVar25;

    l_U141[0] = uParam7;
    l_U141[1] = uParam8;
    l_U141[2] = uParam9;
    l_U140 = uParam7;
    sub_25277();
    sub_25609();
    sub_26489();
    if (IS_VEH_DRIVEABLE( uParam10 ))
    {
        if (sub_26687( l_U141[0], l_U141[1], l_U141[2], uParam12, uParam13, uParam14, uParam15, l_U135, uParam17, uParam10, 0, 0 ))
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (IS_CHAR_IN_CAR( sub_3476(), uParam10 ))
                {
                    l_U105 = 1;
                    l_U116 = 1;
                    sub_27235( uParam16 );
                    sub_27235( uParam20 );
                    if ((uParam18) AND (IS_WANTED_LEVEL_GREATER( sub_3530(), 0 )))
                    {
                        if ((DOES_BLIP_EXIST( l_U132 )) || (DOES_BLIP_EXIST( l_U127 )))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132 );
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U127 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 1" );
                            PRINTNL();
                            sub_27235( uParam11 );
                        }
                        if (((NOT (sub_31389( 0 ))) AND (NOT sub_32795())) AND (NOT l_U101))
                        {
                            sub_27115( uParam19, 0 );
                            l_U145 = uParam19;
                            l_U101 = 1;
                            l_U102 = 0;
                            if (NOT (IS_CHAR_INJURED( l_U141[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U141[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                            }
                        }
                    }
                    else if (l_U101)
                    {
                        sub_27235( uParam19 );
                        l_U101 = 0;
                        l_U102 = 1;
                    }
                    if (l_U102)
                    {
                        if (NOT (sub_31389( 0 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U141[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U141[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                            }
                            l_U102 = 0;
                        }
                    }
                    if (LOCATE_CHAR_IN_CAR_3D( sub_3476(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U141[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U141[I], uParam10 )))
                                {
                                    iVar23 = 0;
                                }
                            }
                        }
                        if ((iVar23) AND (sub_33194()))
                        {
                            sub_27235( uParam11 );
                            sub_27235( uParam12 );
                            sub_27235( uParam13 );
                            sub_27235( uParam14 );
                            sub_27235( uParam15 );
                            sub_27235( uParam19 );
                            sub_33675();
                            for ( I = 0; I < 3; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U141[I], 0 );
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
                            if (DOES_CHAR_EXIST( l_U141[I] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U141[I], uParam10 )))
                                    {
                                        iVar23 = 0;
                                    }
                                }
                            }
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U132 )))
                        {
                            if (DOES_BLIP_EXIST( l_U127 ))
                            {
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U127 );
                            }
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 2" );
                            PRINTNL();
                            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U132 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 1" );
                            PRINTNL();
                            sub_29222( l_U132 );
                            if (l_U120)
                            {
                                SHOW_BLIP_ON_ALTIMETER( l_U132, 1 );
                            }
                        }
                        if (NOT (sub_31389( 0 )))
                        {
                            if (NOT l_U103)
                            {
                                sub_27115( uParam11, 0 );
                                l_U103 = 1;
                            }
                        }
                    }
                }
                else if (((uParam18) AND (IS_WANTED_LEVEL_GREATER( sub_3530(), 0 ))) AND (NOT l_U116))
                {
                    sub_27235( uParam16 );
                    sub_27235( uParam20 );
                    if ((DOES_BLIP_EXIST( l_U132 )) || (DOES_BLIP_EXIST( l_U127 )))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132 );
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U127 );
                        PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
                        PRINTNL();
                        sub_27235( uParam11 );
                    }
                    if (((NOT (sub_31389( 0 ))) AND (NOT sub_32795())) AND (NOT l_U101))
                    {
                        sub_27115( uParam19, 0 );
                        l_U145 = uParam19;
                        l_U101 = 1;
                        l_U102 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U141[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U141[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U101)
                {
                    sub_27235( uParam19 );
                    l_U101 = 0;
                    l_U102 = 1;
                }
                if (l_U102)
                {
                    if (NOT (sub_31389( 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U141[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U141[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U102 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U127 )))
                {
                    if (DOES_BLIP_EXIST( l_U132 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132 );
                        sub_27235( uParam11 );
                    }
                    ADD_BLIP_FOR_CAR( uParam10, ref l_U127 );
                    CHANGE_BLIP_DISPLAY( l_U127, 2 );
                    PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 2" );
                    PRINTNL();
                    SET_BLIP_AS_FRIENDLY( l_U127, 1 );
                    if (NOT l_U106)
                    {
                        sub_29222( l_U127 );
                    }
                }
                if (NOT (sub_31389( 0 )))
                {
                    if (NOT l_U105)
                    {
                        sub_27115( uParam16, 0 );
                        l_U105 = 1;
                    }
                    else if (l_U116)
                    {
                        if (NOT (IS_STRING_NULL( uParam20 )))
                        {
                            if (NOT l_U106)
                            {
                                sub_27115( uParam20, 0 );
                                l_U106 = 1;
                            }
                        }
                        else if (NOT l_U106)
                        {
                            sub_27115( uParam16, 0 );
                            l_U106 = 1;
                        }
                    }
                };;;
            }
        }
        else if (l_U101)
        {
            l_U101 = 0;
        }
        if (DOES_BLIP_EXIST( l_U132 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132 );
            sub_27235( uParam11 );
        }
        if (DOES_BLIP_EXIST( l_U127 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U127 );
            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
            PRINTNL();
            sub_27235( uParam16 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - check vehicle is alive before calling this." );
        return 0;
    }
    sub_35601( uParam0, uParam1, uParam2, 0, uParam10 );
    sub_39758( uParam0, uParam1, uParam2 );
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    return 0;
}

void sub_25277()
{
    int I;

    for ( I = 0; I < l_U141; I++ )
    {
        if (DOES_CHAR_EXIST( l_U141[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U141[I] )))
            {
                if (((IS_CHAR_SITTING_IN_ANY_CAR( l_U141[I] )) AND (sub_25370( l_U141[I] ))) AND (sub_25435()))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U141[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_3530() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_3476() )))
        {
            if (((IS_CHAR_SITTING_IN_ANY_CAR( sub_3476() )) AND (sub_25370( sub_3476() ))) AND (sub_25435()))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3476(), 1 );
            }
        }
    }
    return;
}

int sub_25370(int iParam0)
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

int sub_25435()
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        return 1;
    }
    return 0;
}

void sub_25609()
{
    if (NOT l_U114)
    {
        l_U149 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U101 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U102 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U103 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U104 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U106 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U105 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U107 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U108[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U108[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U108[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U112 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U113 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U134, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U135, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U136, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U146._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U146._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U146._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U115 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U116 );
        END_WIDGET_GROUP();
        l_U114 = 1;
    }
    return;
}

void sub_26489()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_3530() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3476(), 0 );
    }
    for ( I = 0; I < l_U141; I++ )
    {
        if (DOES_CHAR_EXIST( l_U141[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U141[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U141[I], 0 );
            }
        }
    }
    return;
}

int sub_26687(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
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
    l_U141[0] = uParam0;
    l_U141[1] = uParam1;
    l_U141[2] = uParam2;
    l_U140 = uParam0;
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
        if (NOT (IS_CHAR_INJURED( l_U141[I] )))
        {
            iVar16++;
        }
    }
    if (((NOT sub_26858()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3476() ))) AND (NOT (DOES_VEHICLE_EXIST( iParam9 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3476(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U121)
            {
                sub_27115( "MORE_SEATS", 0 );
                l_U121 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U121 = 0;
        sub_27235( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U141[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U141[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U141[I], sub_27345() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U141[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U141[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3476() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3476(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U141[I], sub_27345() ))
                        {
                            if ((NOT sub_26858()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3476() )))
                            {
                                if (NOT (sub_27547( l_U141[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U141[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U141[I], sub_27345() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U141[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U141[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3476(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U141[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U141[I], sub_27345() ))
                {
                    if (sub_28108())
                    {
                        if (l_U123[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U141[I], -1 );
                            l_U123[I] = 0;
                        }
                    }
                    else if (NOT l_U123[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U141[I], 2 );
                        l_U123[I] = 1;
                    }
                }
                if (((NOT (IS_GROUP_MEMBER( l_U141[I], sub_27345() ))) AND (NOT (sub_28290( l_U141[I], iParam9 )))) AND (NOT (sub_28386( l_U141[I], iParam9 ))))
                {
                    if (sub_28499( l_U141[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U141[I], sub_27345() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U141[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U141[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_27345(), l_U141[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U128[I] )))
                        {
                            GET_GAME_TIMER( ref l_U138 );
                            ADD_BLIP_FOR_CHAR( l_U141[I], ref l_U128[I] );
                            CHANGE_BLIP_DISPLAY( l_U128[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U128[I], 1 );
                            if (bParam8)
                            {
                                sub_29222( l_U128[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U128[I] ))
                {
                    if (((sub_29341( l_U141[I] )) || (sub_28290( l_U141[I], iParam9 ))) || (uParam11))
                    {
                        if (DOES_BLIP_EXIST( l_U128[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U128[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_27235( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_29222( l_U128[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U141[I], iParam9 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U141[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )) AND (NOT l_U118))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U141[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U141[I], iParam9 )))
                                {
                                    if (NOT (sub_29341( l_U141[I] )))
                                    {
                                        if (sub_29949( l_U141[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U141[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U141[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3476(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_3476(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U141[I], sub_27345() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U141[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U141[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U141[I], 1 );
                                if (l_U117)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U141[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U141[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_3476(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U141[I], ref l_U128[I] );
                                CHANGE_BLIP_DISPLAY( l_U128[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U128[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U141[I], sub_27345() )))
                        {
                            if (sub_28499( l_U141[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U141[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U141[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U141[I], 0 );
                                SET_GROUP_MEMBER( sub_27345(), l_U141[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_3476(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U141[I], sub_27345() )))
                        {
                            SET_GROUP_MEMBER( sub_27345(), l_U141[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U141[I], sub_27345() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U141[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U128[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U128[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_27235( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U128[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_31389( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                    {
                        if ((sub_27547( l_U141[I] )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U141[I], sub_3476(), 40.00000000, 40.00000000, 40.00000000, 0 )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if (((iVar17 - l_U138) > 1500) || (iVar16 == 1))
        {
            if (iVar15 > 0)
            {
                if (l_U139 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U139 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar15 == iVar16) AND (iVar16 > 1))
                    {
                        if ((NOT l_U107) AND (NOT (l_U139 == iVar15)))
                        {
                            sub_27115( uParam6, 0 );
                            l_U107 = 1;
                            l_U139 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT l_U108[I]) AND (NOT (l_U139 == iVar15)))
                                {
                                    sub_27115( uVar28[I], 0 );
                                    l_U108[I] = 1;
                                    l_U139 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U139 = 0;
            }
        }
    }
    l_U117 = 0;
    if ((iVar18) AND (NOT bVar25))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U128[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U128[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_27235( uVar28[I] );
            }
        }
        sub_27235( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_3476() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3476(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                {
                    SET_CHAR_COORDINATES( l_U141[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_26858()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3476() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3476(), ref uVar2 );
        if (sub_26899( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_26899(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U141; I++ )
        {
            if (DOES_CHAR_EXIST( l_U141[I] ))
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

void sub_27115(unknown uParam0, boolean bParam1)
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
    GET_GAME_TIMER( ref l_U137 );
    return;
}

void sub_27235(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_27345()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_27547(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_3530() ))
    {
        GET_CAR_CHAR_IS_USING( sub_3476(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3476(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )))
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

int sub_28108()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_3476(), ref uVar2 );
    if (sub_26899( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_28290(unknown uParam0, unknown uParam1)
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

int sub_28386(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_27345() )))
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

int sub_28499(unknown uParam0, unknown uParam1, boolean bParam2)
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
                    if (IS_CHAR_SITTING_IN_CAR( sub_3476(), uVar5 ))
                    {
                        if (sub_26858())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3476(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3476(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_28108())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_3476(), ref uVar5 );
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

void sub_29222(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U133 ))
        {
            SET_ROUTE( l_U133, 0 );
        }
        l_U133 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_29341(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3476() ))
        {
            if (sub_29389( sub_3476(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_27345(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_27345() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_27345(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_29389(unknown uParam0, unknown uParam1)
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

int sub_29949(unknown uParam0)
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

int sub_31389(boolean bParam0)
{
    if (((((IS_MESSAGE_BEING_DISPLAYED()) || (((sub_25435()) AND (NOT bParam0)) || ((sub_31414()) AND (bParam0)))) || (sub_31443())) || (IS_SCRIPTED_CONVERSATION_ONGOING())) || (sub_31502()))
    {
        return 1;
    }
    return 0;
}

void sub_31414()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_31443()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_31502()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U137;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

int sub_32795()
{
    if (NOT (IS_CHAR_INJURED( l_U140 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U140 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_33194()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3476() ))
    {
        if ((IS_CHAR_ON_ANY_BIKE( sub_3476() )) || (IS_CHAR_IN_ANY_HELI( sub_3476() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U119)
    {
        if (sub_29949( sub_3476() ))
        {
            if ((sub_33284( 1, iVar2 )) || (l_U113))
            {
                return 1;
            }
        }
    }
    else if ((sub_33284( 1, iVar2 )) || (l_U113))
    {
        return 1;
    }
    return 0;
}

int sub_33284(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3476() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3476(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3476() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3476(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3476()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3476() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3476() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3530() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3530() )))
    {
        return 0;
    }
    return 1;
}

void sub_33675()
{
    int I;

    sub_33684();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U128[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U128[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U127 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U127 );
    }
    l_U133 = nil;
    l_U107 = 0;
    for ( I = 0; I < l_U108; I++ )
    {
        l_U108[I] = 0;
        l_U123[I] = 0;
    }
    l_U103 = 0;
    l_U101 = 0;
    l_U102 = 0;
    l_U104 = 0;
    l_U106 = 0;
    l_U105 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U139 = 0;
    for ( I = 0; I < l_U141; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U141[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U141[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U141[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_3530() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_3476(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_3530() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3476(), 1 );
    }
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    return;
}

void sub_33684()
{
    if (DOES_BLIP_EXIST( l_U132 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132 );
    }
    return;
}

void sub_35601(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_25609();
    if (l_U112)
    {
        uParam0 = l_U146._fU0;
        uParam1 = l_U146._fU4;
        uParam2 = l_U146._fU8;
        uVar12 = l_U136;
        l_U112 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_3476() )))
    {
        GET_CHAR_HEADING( sub_3476(), ref uVar12 );
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
            CLEAR_WANTED_LEVEL( sub_3530() );
            sub_35812( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_36233( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U141; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U141[I] );
                        if (NOT (IS_CHAR_INJURED( sub_3476() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3476(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U141[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U141[I], uVar12 );
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
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3476() );
                    WARP_CHAR_INTO_CAR( sub_3476(), uParam4 );
                    for ( I = 0; I < l_U141; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U141[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U141[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U141[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U141[I], 0 );
                            }
                        }
                    }
                }
                sub_36233( uParam0, uParam1, uParam2, uVar12 );
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
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3476() );
                    WARP_CHAR_INTO_CAR( sub_3476(), uVar8 );
                    sub_37140( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3476() );
                        WARP_CHAR_INTO_CAR( sub_3476(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U141; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U141[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U141[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U141[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U141; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U141[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U141[I], uVar8, I );
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
            sub_37760( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_35812(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_3530() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3476() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3476(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_3476(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_35932( (uParam0^) );
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

void sub_35932(unknown uParam0)
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

void sub_36233(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_3476(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_3476(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_3476(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_3476(), uParam3 );
    return;
}

void sub_37140(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_37760(boolean bParam0, unknown uParam1)
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
    if ((NOT (IS_CHAR_INJURED( sub_3476() ))) AND ((IS_SCREEN_FADED_OUT()) || (bParam0)))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_38140( sub_3476(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_38140( sub_3476(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_38140( sub_3476(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_39417( 0 );
        sub_39417( 1 );
        sub_39417( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U100 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U100;
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

int sub_38140(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_38151( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_38311( uParam0, uParam1, 0 ))
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

vector sub_38151(unknown uParam0)
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

int sub_38311(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_38339( uParam0, uParam1 ))
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

int sub_38339(unknown uParam0, unknown uParam1)
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
            if (IS_CHAR_IN_AREA_3D( sub_3476(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_39417(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_39758(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_39783( uParam0, uParam1, uParam2, l_U134, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3476(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U134, l_U134, l_U134, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U134 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U134 );
            }
        }
    }
    return;
}

int sub_39783(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_39800( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_3476(), uParam0, uParam1, uParam4, uParam4, 0 )))
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

int sub_39800(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_40276(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_40489(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_6233( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_6233( "\n speech is not playing" );
    }
    return 0;
}

float sub_41779(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_CHAR_COORDINATES( uParam1, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
        return sub_41864( uVar6, uVar9, uParam2, uParam3 );
        break;
    }
    return -1.00000000;
}

void sub_41864(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, boolean bParam7)
{
    if (bParam6)
    {
        uParam0._fU8 = 0.00000000;
        uParam3._fU8 = 0.00000000;
    }
    if (bParam7)
    {
        return VDIST( uParam0, uParam3 );
        break;
    }
    return VDIST2( uParam0, uParam3 );
}

void sub_42406()
{
    sub_42415();
    if ((NOT l_U894) AND (TIMERB() > 100))
    {
        if ((NOT (IS_CHAR_INJURED( l_U906 ))) AND (NOT (IS_CHAR_INJURED( l_U907 ))))
        {
            OPEN_SEQUENCE_TASK( ref l_U915 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1509.54600000, 264.46570000, 11.56980000, 2, -2, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U906 );
            TASK_CHAT_WITH_CHAR( 0, l_U906, 0, 1 );
            CLOSE_SEQUENCE_TASK( l_U915 );
            TASK_PERFORM_SEQUENCE( l_U907, l_U915 );
            CLEAR_SEQUENCE_TASK( l_U915 );
            l_U894 = 1;
        }
    }
    if ((NOT l_U895) AND (TIMERB() > 600))
    {
        if ((NOT (IS_CHAR_INJURED( l_U906 ))) AND (NOT (IS_CHAR_INJURED( l_U907 ))))
        {
            OPEN_SEQUENCE_TASK( ref l_U915 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1511.15700000, 264.37430000, 11.63640000, 2, -2, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U907 );
            TASK_CHAT_WITH_CHAR( 0, l_U907, 1, 1 );
            CLOSE_SEQUENCE_TASK( l_U915 );
            TASK_PERFORM_SEQUENCE( l_U906, l_U915 );
            CLEAR_SEQUENCE_TASK( l_U915 );
            l_U895 = 1;
        }
    }
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_40489( l_U956 ))))
    {
        switch (l_U900)
        {
            case 0:
            if (sub_43237( "E2T4_ARRGH", 0, 1, ref l_U956, 6, 1 ))
            {
                l_U900++;
            }
            break;
            case 1:
            if (l_U950[1])
            {
                l_U900++;
            }
            break;
            case 2:
            if (sub_43237( "E2T4_ARRGH", 1, 1, ref l_U956, 6, 1 ))
            {
                l_U900++;
            }
            break;
            case 3:
            if (sub_43237( "E2T4_ARRGH", 3, 1, ref l_U956, 6, 1 ))
            {
                l_U900++;
            }
            break;
            case 4:
            if (sub_43237( "E2T4_ARRGH", 5, 1, ref l_U956, 6, 1 ))
            {
                l_U900++;
            }
            break;
            case 5:
            if (sub_43237( "E2T4_ARRGH", 7, 1, ref l_U956, 6, 1 ))
            {
                l_U900++;
            }
            break;
        }
    }
    if (NOT (IS_PLAYER_CONTROL_ON( sub_3530() )))
    {
        if ((NOT (IS_CHAR_INJURED( l_U906 ))) AND (NOT (IS_CHAR_INJURED( l_U907 ))))
        {
            if ((((NOT (IS_CHAR_IN_ANY_CAR( l_U906 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U907 )))) || (NOT (IS_CHAR_IN_ANY_CAR( sub_3476() )))) || ((NOT (sub_40276( sub_3476(), l_U906 ))) AND (NOT (sub_40276( sub_3476(), l_U907 )))))
            {
                SET_PLAYER_CONTROL( sub_3530(), 1 );
                SET_CHAR_PROOFS( l_U907, 0, 0, 0, 0, 0 );
                SET_CHAR_PROOFS( l_U906, 0, 0, 0, 0, 0 );
                sub_3683( 17, 1 );
                sub_43770( 2 );
                sub_43795( 5 );
                if (NOT g_U42936)
                {
                    sub_43834( 4, 0 );
                    g_U42936 = 1;
                }
                l_U966 = 3;
            }
        }
    }
    return;
}

void sub_42415()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int I;

    GET_CHAR_COORDINATES( sub_3476(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    fVar5 = 0.00000000;
    fVar6 = -1.00000000;
    I = 0;
    for ( I = 0; I < l_U876; I++ )
    {
        fVar5 = sub_41864( uVar2, l_U876[I], 1, 0 );
        if ((fVar5 < fVar6) || (fVar6 == -1.00000000))
        {
            fVar6 = fVar5;
            uVar7 = {l_U876[I]};
        }
    }
    if (DOES_BLIP_EXIST( l_U914 ))
    {
        if (NOT l_U950[1])
        {
            if (((NOT (sub_31389( 0 ))) AND (NOT (sub_40489( l_U956 )))) AND (l_U900 > 0))
            {
                PRINT_NOW( "T4_GONET", 7500, 0 );
                l_U950[1] = 1;
            }
        }
        if (uVar7._fU0 != l_U886._fU0)
        {
            SET_ROUTE( l_U914, 0 );
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U914 );
            ADD_BLIP_FOR_COORD( uVar7._fU0, uVar7._fU4, uVar7._fU8, ref l_U914 );
            SET_ROUTE( l_U914, 1 );
        }
    }
    else
    {
        ADD_BLIP_FOR_COORD( uVar7._fU0, uVar7._fU4, uVar7._fU8, ref l_U914 );
        SET_ROUTE( l_U914, 1 );
    }
    l_U886 = {uVar7};
    return;
}

void sub_43237(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_43262( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_43262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_6134( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_43770(unknown uParam0)
{
    g_U972 = uParam0;
    return;
}

void sub_43795(unknown uParam0)
{
    g_U953 = uParam0;
    return;
}

void sub_43834(unknown uParam0, int iParam1)
{
    if (iParam1 < g_U1555[uParam0]._fU316)
    {
        if (g_U1555[uParam0]._fU184[iParam1] == 0)
        {
            sub_43927( ref g_U1555[uParam0]._fU204[iParam1], g_U1555[uParam0]._fU400, 0, 0 );
            g_U1555[uParam0]._fU184[iParam1] = 1;
        }
    }
    return;
}

void sub_43927(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_43980( iParam0, uParam1, uParam2 );
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
        sub_44112( iParam0 + 0 );
    }
    return;
}

void sub_43980(int iParam0, int iParam1, int iParam2)
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
        sub_44112( iParam0 + 0 );
    }
    return;
}

void sub_44112(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_44143( iParam0->_fU4 )))
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

int sub_44143(unknown uParam0)
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

void sub_44583()
{
    int iVar2;
    int iVar3;

    if (sub_44592())
    {
        if (DOES_BLIP_EXIST( l_U914 ))
        {
            SET_ROUTE( l_U914, 0 );
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U914 );
            CLEAR_PRINTS();
        }
        if (sub_44827() == 0)
        {
            if (l_U896 != 1)
            {
                ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
                if (l_U896 > 1)
                {
                    PRINT_NOW( "T4_IHELP6", 7500, 0 );
                }
                else
                {
                    PRINT_NOW( "T4_IHELP1", 7500, 0 );
                }
                l_U896 = 1;
            }
        }
        else
        {
            CLEAR_PRINTS();
            l_U966 = 5;
        }
    }
    else if (NOT (DOES_BLIP_EXIST( l_U914 )))
    {
        CLEAR_PRINTS();
        sub_5646();
    }
    sub_42415();
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3476(), l_U886._fU0, l_U886._fU4, l_U886._fU8, 1.00000000, 1.00000000, 1.00000000, 1 ))
    {
        ;
    }
    if (((NOT l_U891) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT (sub_40489( l_U956 ))))
    {
        switch (l_U900)
        {
            case 0:
            if (sub_43237( "E2T4_ARRGH", 0, 1, ref l_U956, 6, 1 ))
            {
                l_U900++;
            }
            break;
            case 1:
            if (l_U950[1])
            {
                l_U900++;
            }
            break;
            case 2:
            if (sub_43237( "E2T4_ARRGH", 1, 1, ref l_U956, 6, 1 ))
            {
                l_U900++;
            }
            break;
            case 3:
            if (sub_43237( "E2T4_ARRGH", 3, 1, ref l_U956, 6, 1 ))
            {
                l_U900++;
            }
            break;
            case 4:
            if (sub_43237( "E2T4_ARRGH", 5, 1, ref l_U956, 6, 1 ))
            {
                l_U900++;
            }
            break;
            case 5:
            if (sub_43237( "E2T4_ARRGH", 7, 1, ref l_U956, 6, 1 ))
            {
                l_U900++;
            }
            break;
            case 6:
            if ((NOT (IS_CHAR_INJURED( l_U906 ))) AND (NOT (IS_CHAR_INJURED( l_U907 ))))
            {
                GET_GAME_TIMER( ref iVar2 );
                if (NOT l_U893)
                {
                    if (NOT sub_25435())
                    {
                        if ((iVar2 - l_U901) > 5000)
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U906, sub_3476() );
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U907, sub_3476() );
                            sub_24250( "E2T4_HANG", 24, 6, "E2T4AUD", 1, 0 );
                            l_U893 = 1;
                        }
                    }
                }
                else if (NOT sub_25435())
                {
                    OPEN_SEQUENCE_TASK( ref l_U915 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1511.15700000, 264.37430000, 11.63640000, 2, -2, 1.00000000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U907 );
                    TASK_CHAT_WITH_CHAR( 0, l_U907, 1, 1 );
                    CLOSE_SEQUENCE_TASK( l_U915 );
                    TASK_PERFORM_SEQUENCE( l_U906, l_U915 );
                    CLEAR_SEQUENCE_TASK( l_U915 );
                    OPEN_SEQUENCE_TASK( ref l_U915 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1509.54600000, 264.46570000, 11.56980000, 2, -2, 1.00000000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U906 );
                    TASK_CHAT_WITH_CHAR( 0, l_U906, 0, 1 );
                    CLOSE_SEQUENCE_TASK( l_U915 );
                    TASK_PERFORM_SEQUENCE( l_U907, l_U915 );
                    CLEAR_SEQUENCE_TASK( l_U915 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 8000, ref iVar3 );
                    l_U901 = iVar2 + iVar3;
                    l_U893 = 0;
                }
            }
            break;
        }
    }
    if (sub_45858( l_U906 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U906 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    }
    if (sub_45858( l_U907 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U907 );
    }
    return;
}

int sub_44592()
{
    if (((IS_CHAR_IN_ANGLED_AREA_3D( sub_3476(), -1583.93600000, 459.26000000, 22.44870000, -1578.56600000, 469.41360000, 29.44870000, -20.00000000, 0 )) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3476(), -338.88810000, 1386.89300000, 9.91310000, -338.85640000, 1398.40700000, 16.91310000, -20.00000000, 0 ))) || (IS_CHAR_IN_ANGLED_AREA_3D( sub_3476(), 972.94210000, -164.43910000, 20.19360000, 976.27250000, -175.48130000, 27.19860000, -20.00000000, 0 )))
    {
        return 1;
    }
    return 0;
}

void sub_44827()
{
    return g_U864._fU0;
}

int sub_45858(unknown uParam0)
{
    float fVar3;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            fVar3 = sub_41779( uParam0, sub_3476(), 1, 0 );
            if (fVar3 > 625.00000000)
            {
                if (sub_40489( l_U956 ))
                {
                    sub_5993( 1 );
                }
            }
            if ((fVar3 > 40000.00000000) AND (NOT (sub_40489( l_U956 ))))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_46053()
{
    int iVar2;

    if (sub_44827() != 0)
    {
        if (NOT g_U42935)
        {
            if (sub_44827() == 1)
            {
                if (l_U896 != 2)
                {
                    PRINT_HELP_FOREVER( "T4_IHELP2" );
                    l_U896 = 2;
                }
            }
            else if (sub_46160( "www.eyefind.info" ))
            {
                if (l_U896 != 3)
                {
                    PRINT_HELP_FOREVER( "T4_IHELP3" );
                    l_U896 = 3;
                }
            }
            else if (sub_46160( "www.youvebeencelebinated.com" ))
            {
                if (l_U896 != 4)
                {
                    PRINT_HELP_FOREVER( "T4_IHELP4" );
                    l_U896 = 4;
                }
            }
            else if (sub_46160( "www.youvebeencelebinated.com/comment.html" ))
            {
                if (NOT l_U923[25])
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 1, ref iVar2 );
                    if (iVar2 == 0)
                    {
                        PLAY_SOUND_FRONTEND( -1, "EP2_SFX_GT04_BLOG_THIS_A_E2T4_ACB_01" );
                    }
                    else
                    {
                        PLAY_SOUND_FRONTEND( -1, "EP2_SFX_GT04_BLOG_THIS_A_E2T4_ACA_01" );
                    }
                    l_U923[25] = 1;
                }
                if (l_U896 != 5)
                {
                    PRINT_HELP_FOREVER( "T4_IHELP5" );
                    l_U896 = 5;
                }
            }
            else if (l_U896 != 10)
            {
                PRINT_HELP_FOREVER( "T4_IHELP3B" );
                l_U896 = 10;
            };;;;;
        }
        else if (l_U896 != 7)
        {
            PRINT_HELP_FOREVER( "T4_IHELP7" );
            l_U896 = 7;
        }
    }
    else
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        if (g_U42935)
        {
            PRINT_NOW( "T4_LEAVENET", 7500, 0 );
            l_U966 = 6;
        }
        else
        {
            l_U966 = 3;
        }
    }
    return;
}

void sub_46160(unknown uParam0)
{
    return COMPARE_STRING( uParam0, ref g_U864._fU232._fU0 );
}

void sub_46729()
{
    if (NOT sub_44592())
    {
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_3530(), 0 )))
        {
            l_U966 = 7;
        }
        else if (NOT l_U950[2])
        {
            sub_5646();
            PRINT_NOW( "T4_LOSECOPS", 7500, 0 );
            l_U950[2] = 1;
        }
    }
    return;
}

void sub_46845()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
    if (iVar2 == 0)
    {
        sub_46898( 0, "E2T4_PASS1", "E2T4AUD", 0 );
    }
    else
    {
        sub_46898( 0, "E2T4_CALL1", "E2T4AUD", 0 );
    }
    sub_47621();
    return;
}

void sub_46898(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_46942( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_46942(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

    if (g_U43133)
    {
        PRINTSTRING( "KGM........End of mission call blocked because the mission is being repeated\n" );
        return;
    }
    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U818 )))
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
        g_U817 = 1;
        g_U818 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_47621()
{
    CLEAR_WANTED_LEVEL( sub_3530() );
    g_U25 = 80;
    sub_47649( 0 );
    sub_47919();
    sub_3467();
    return;
}

void sub_47649(unknown uParam0)
{
    if (NOT g_U42941[uParam0])
    {
        g_U42941[uParam0] = 1;
        sub_6233( "\n ----------------------------------------------------------------" );
        sub_7724( "\n  Following block of Celeb Stories has been unlocked CELEB_BLOCK_", uParam0 );
        sub_6233( "\n ----------------------------------------------------------------" );
    }
    return;
}

void sub_47919()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_47937();
    sub_47996( iVar2, iVar3, iVar4 );
    return;
}

void sub_47937()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U766[I] = 4;
    }
    return;
}

void sub_47996(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_48026( iVar5, uParam0, uParam1, uParam2, "GayTony" );
    return;
}

void sub_48026(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_48054();
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
            sub_48228( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_48228( ref cVar9 );
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
            sub_48228( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_48228( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU160._fU76;
    }
    else if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_48228( ref cVar9 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_48228( ref cVar9 );
        return;
    }
    iVar7 = g_U14925[uParam0]._fU0._fU4;
    iVar8 = sub_48805( uParam0, iVar7 );;;
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
    if (NOT (sub_49253( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14925[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_3530() );
    sub_2459();
    bVar28 = true;
    uVar29 = sub_48805( uParam0, iVar7 );
    uVar30 = sub_2079( uParam0 );
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
                sub_53527( 9, ref g_U14925[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12379))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_48054();
                    g_U10953._fU8 = 1;
                    g_U10953._fU20 = sub_53978( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_54057( uParam0 );
                sub_54096( 0 );
                sub_2357( uVar30, 0 );
                g_U11076 = 0;
            }
            g_U12382[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_54271();
        }
    }
    if (bParam2)
    {
        sub_48054();
        sub_54370();
        sub_54096( 0 );
        g_U11062 = 1;
        g_U11076 = 0;
    }
    if (bParam3)
    {
        sub_48054();
        sub_54422();
        sub_54096( 0 );
        sub_2357( uVar30, 0 );
    }
    sub_1966();
    return;
}

void sub_48054()
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

void sub_48228(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_48805(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_2310( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_49253(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_49349( uParam1 );
        break;
        case 1:
        bVar8 = sub_50230( uParam1 );
        break;
        case 2:
        bVar8 = sub_50419( uParam1 );
        break;
        case 3:
        bVar8 = sub_50637( uParam1 );
        break;
        case 4:
        bVar8 = sub_51235( uParam1 );
        break;
        case 5:
        bVar8 = sub_51368( uParam1 );
        break;
        case 6:
        bVar8 = sub_51565( uParam1 );
        break;
        case 7:
        bVar8 = sub_51702( uParam1 );
        break;
        case 8:
        bVar8 = sub_51851( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_50848( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_48805( uParam0, uParam1 );
    if (bParam3)
    {
        sub_52069( uVar9, uParam0 );
    }
    return 1;
}

int sub_49349(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_49516( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49516( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_49516( iVar3, 1500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_49516( iVar3, 500, 0, 0, 0, 0 );
        break;
        case 5:
        sub_49516( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 6:
        sub_49516( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 7:
        sub_49516( iVar3, 3000, 5, 2, 0, 0 );
        break;
        case 8:
        sub_49516( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 9:
        sub_49516( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 10:
        sub_49516( iVar3, 4500, 5, 2, 0, 0 );
        break;
        case 11:
        sub_49516( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 12:
        sub_49516( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 0:
        case 13:
        case 14:
        case 15:
        case 16: break;
        default:
        sub_50138( "Gay Tony", 1 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50138( "Gay Tony", 0 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_49516(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_49527( uParam1 );
    sub_49701( uParam0, 0, uParam2 );
    sub_49701( uParam0, 1, uParam3 );
    sub_49701( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_47937();
    return;
}

void sub_49527(unknown uParam0)
{
    ADD_SCORE( sub_3530(), uParam0 );
    sub_49552( uParam0 );
    return;
}

void sub_49552(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2310( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_49701(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_50138(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_50230(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49516( iVar3, 500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49516( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49516( iVar3, 1500, 5, 2, 0, 0 );
        break;
        default:
        sub_50138( "Mori", 1 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50138( "Mori", 0 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50419(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49516( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49516( iVar3, 15000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49516( iVar3, 20000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_49516( iVar3, 25000, 5, 2, 0, 0 );
        break;
        default:
        sub_50138( "Yusuf", 1 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50138( "Yusuf", 0 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50637(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49516( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49516( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49516( iVar3, 0, sub_50726(), sub_50992(), 0, 0 );
        break;
        default:
        sub_50138( "Dominicans", 1 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50138( "Dominicans", 0 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50726()
{
    switch (l_U766[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_50848( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_50848(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_50992()
{
    switch (l_U766[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_50848( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_51235(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49516( iVar3, 1000, 5, 2, 0, 0 );
        break;
        default:
        sub_50138( "Mum", 1 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50138( "Mum", 0 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51368(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49516( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_49516( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_49516( iVar3, 6000, 5, 2, 0, 0 );
        break;
        default:
        sub_50138( "Bulgarin", 1 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50138( "Bulgarin", 0 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51565(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49516( iVar3, 5000, 5, 2, 0, 0 );
        break;
        default:
        sub_50138( "Rocco", 1 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50138( "Rocco", 0 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51702(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_49516( iVar3, 0, sub_50726(), sub_50992(), 0, 0 );
        break;
        default:
        sub_50138( "Henrique", 1 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50138( "Henrique", 0 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51851(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    if (bVar4)
    {
        sub_50138( "Reserve 1", 0 );
        sub_49516( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_52069(int iParam0, int iParam1)
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
    if (sub_52130( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_52856( iParam1 );
    }
    return;
}

int sub_52130(int iParam0, int iParam1)
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
            sub_52270( 0, iVar6 );
            g_U14902[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U22960[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_52270(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_52440( 0 );
    return;
}

void sub_52440(boolean bParam0)
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
        sub_52685();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_52685()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_52856(int iParam0)
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
        sub_53095( 188 );
        SET_FLOAT_STAT( 188, fVar3 );
        break;
        case 1:
        sub_53095( 192 );
        SET_FLOAT_STAT( 192, fVar3 );
        break;
        case 2:
        sub_53095( 191 );
        SET_FLOAT_STAT( 191, fVar3 );
        break;
        case 3:
        sub_53095( 197 );
        SET_FLOAT_STAT( 197, fVar3 );
        break;
        case 4: break;
        case 5:
        sub_53095( 200 );
        SET_FLOAT_STAT( 200, fVar3 );
        break;
        case 6:
        sub_53095( 201 );
        SET_FLOAT_STAT( 201, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_53095(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_53527(unknown uParam0, unknown uParam1)
{
    sub_53546( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_53546(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_53978(int iParam0, int iParam1)
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

void sub_54057(unknown uParam0)
{
    sub_1827();
    g_U12382[uParam0]._fU120 = 0;
    return;
}

void sub_54096(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_54147( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_54147(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_54271()
{
    sub_54280();
    return;
}

void sub_54280()
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

void sub_54370()
{
    sub_54280();
    return;
}

void sub_54422()
{
    sub_54280();
    StrCopy( ref g_U10966, "FPASS", 16 );
    return;
}

void sub_54528()
{
    switch (l_U967)
    {
        case 0:
        if ((NOT (sub_31389( 0 ))) AND (NOT (sub_40489( l_U956 ))))
        {
            if (NOT g_U43133)
            {
                switch (l_U969)
                {
                    case 1:
                    if (sub_54667( 0, "E2T4_FCABN", "E2T4AUD", 1000, 1 ))
                    {
                        l_U967 = 1;
                    }
                    break;
                    case 2:
                    if (sub_54667( 0, "E2T4_FCABN", "E2T4AUD", 1000, 1 ))
                    {
                        l_U967 = 1;
                    }
                    break;
                    case 0:
                    if (sub_54667( 0, "E2T4_FCGEN", "E2T4AUD", 1000, 1 ))
                    {
                        l_U967 = 1;
                    }
                    break;
                }
                l_U922 = 0;
            }
            else
            {
                sub_57918( 0 );
            }
        }
        break;
        case 1:
        if ((sub_58243( 0 )) || (sub_58504() == 2))
        {
            sub_57918( 0 );
        }
        break;
    }
    return;
}

void sub_54667(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_54727( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_54727(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U95._fU540)
    {
        return 0;
    }
    sub_6233( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 >= 6)
        {
            sub_6233( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3530() )))
    {
        sub_6233( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3476() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3476() ))))
    {
        sub_6233( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_6233( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_55242()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU48 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
        case 1:
        if (g_U95._fU368)
        {
            if ((g_U95._fU372) || (NOT bParam8))
            {
                sub_6233( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U95._fU60 != -1)
        {
            if ((g_U16014[g_U95._fU60]._fU212._fU24 != 5) AND (g_U16014[g_U95._fU60]._fU212._fU24 != 4))
            {
                g_U16014[g_U95._fU60]._fU212._fU24 = 0;
            }
        }
        g_U95._fU368 = 1;
        g_U95._fU372 = bParam8;
        uParam0 = g_U95._fU60;
        break;
        case 2:
        if ((NOT sub_55242()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU52 = 1;
        g_U95._fU56 = 1;
        g_U95._fU372 = 1;
        g_U95._fU368 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_56614( uParam0, ref g_U95._fU176 );
    sub_57274( ref g_U95._fU160 );
    g_U95._fU380 = uParam10;
    g_U95._fU376 = bParam11;
    g_U95._fU420 = uParam12;
    g_U95._fU424 = -1;
    g_U95._fU364 = uParam3;
    StrCopy( ref g_U95._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8972[I] = {(uParam1^)[I]};
        sub_7764( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U95._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U95._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U95._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U95._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U95._fU208, uParam6, 16 );
    g_U95._fU80 = uParam7;
    g_U95._fU384 = 0;
    g_U95._fU532 = uParam13;
    g_U8867 = 4;
    return 1;
}

int sub_55242()
{
    if ((g_U95._fU48) || (g_U95._fU52))
    {
        return 0;
    }
    if (g_U95._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_55299())
    {
        return 0;
    }
    if (g_U560 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_55299()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3530() )))
    {
        sub_6233( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_6233( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U95._fU376)
    {
        sub_6233( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U95._fU100) || (g_U95._fU104))
    {
        sub_6233( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3530() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3476() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3476(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_6233( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3476() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_6233( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_6233( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3530() )))
    {
        sub_6233( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_56614(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "TONY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "MORI", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "YUSUF", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ARMANDO", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ADRIANA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "BULGARIN", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ROCCO", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "HENRIQUE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "reserve1", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "ASSISTANT", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "DESSIE", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "JOJO", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "TAYLOR", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "VIKKY", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "ANA", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "DANA", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "CINDY", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "TANIA", 32 );
        break;
        case 23:
        StrCopy( (uParam1^), "LILY", 32 );
        break;
        case 24:
        StrCopy( (uParam1^), "TAMI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DOMINO", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "HEIDI", 32 );
        break;
        case 27:
        StrCopy( (uParam1^), "SIMONE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_57274(unknown uParam0)
{
    StrCopy( (uParam0^), "LUIS", 16 );
    return;
}

void sub_57918(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: break;
        case 3:
        PRINT_NOW( "T4_T_DEAD", 7500, 0 );
        break;
        case 4:
        PRINT_NOW( "T4_G_DEAD", 7500, 0 );
        break;
        case 1:
        PRINT_NOW( "T4_T_LEFT", 7500, 0 );
        break;
        case 2:
        PRINT_NOW( "T4_G_LEFT", 7500, 0 );
        break;
        case 5:
        PRINT_NOW( "T4_G_CAR", 7500, 0 );
        break;
    }
    sub_58128();
    sub_3467();
    return;
}

void sub_58128()
{
    int iVar2;

    iVar2 = 0;
    sub_58142( iVar2 );
    sub_2450( iVar2 );
    return;
}

void sub_58142(unknown uParam0)
{
    if (g_U12382[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3530(), 150 );
    CLEAR_HELP();
    sub_1164( uParam0 );
    return;
}

int sub_58243(boolean bParam0)
{
    unknown uVar3;

    if (g_U95._fU60 != -1)
    {
        switch (g_U16014[g_U95._fU60]._fU212._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U95._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_3476(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_6233( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_58504()
{
    if (g_U95._fU60 != -1)
    {
        return g_U16014[g_U95._fU60]._fU212._fU24;
    }
    return 6;
}

void sub_58615()
{
    vector vVar2;
    int iVar5;
    int iVar6;
    int iVar7;

    vVar2 = {-443.41700000, 346.83880000, 11.20640000};
    iVar5 = 0;
    iVar6 = -1;
    switch (l_U968)
    {
        case 0:
        if ((((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (sub_33284( 1, 1 ))) AND (IS_PLAYER_CONTROL_ON( sub_3530() ))) AND (NOT IS_SCREEN_FADING()))
        {
            SET_PLAYER_CONTROL( sub_3530(), 0 );
            CLEAR_PRINTS();
            CLEAR_HELP();
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            sub_5993( 0 );
            g_U2792 = 1;
            WAIT( 0 );
            DISPLAY_RADAR( 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            CLEAR_AREA( vVar2.x, vVar2.y, vVar2.z, 200.00000000, 1 );
            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
            if (DOES_CHAR_EXIST( l_U907 ))
            {
                DELETE_CHAR( ref l_U907 );
            }
            if (DOES_CHAR_EXIST( l_U906 ))
            {
                DELETE_CHAR( ref l_U906 );
            }
            sub_20317( 0 );
            while (NOT (sub_20820( 0 )))
            {
                WAIT( 0 );
            }
            sub_58990( 0, ref l_U906, -443.96970000, 347.59790000, 11.10930000, 242.11820000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U906, 1 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U906, 0 );
            sub_7644( 1, l_U906, "TONY", 0 );
            sub_23902( 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U906, 1, 2, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U906, 2, 0, 0 );
            GET_CHAR_PROP_INDEX( l_U906, 1, ref iVar6 );
            if (NOT (iVar6 == iVar5))
            {
                SET_CHAR_PROP_INDEX( l_U906, 1, iVar5 );
            }
            if (IS_CHAR_IN_ANY_CAR( sub_3476() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_3476(), -443.41700000, 346.83880000, 11.20640000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_3476(), -443.41700000, 346.83880000, 11.20640000 );
            }
            SET_CHAR_HEADING( sub_3476(), 20.11020000 );
            if (DOES_VEHICLE_EXIST( l_U908 ))
            {
                DELETE_CAR( ref l_U908 );
            }
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3476(), 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3476() );
            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3476(), l_U906 );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U906, sub_3476() );
            TASK_LOOK_AT_CHAR( sub_3476(), l_U906, -2, 0 );
            TASK_LOOK_AT_CHAR( l_U906, sub_3476(), -2, 0 );
            WAIT( 1000 );
            CREATE_CAM( 14, ref l_U916 );
            SET_CAM_POS( l_U916, -444.25930000, 345.36220000, 13.01133000 );
            SET_CAM_ROT( l_U916, -4.92344800, -0.00000000, -20.54388000 );
            SET_CAM_FOV( l_U916, 36.60002000 );
            CREATE_CAM( 14, ref l_U918 );
            SET_CAM_POS( l_U918, -445.65920000, 346.68230000, 13.01133000 );
            SET_CAM_ROT( l_U918, -4.92344800, 0.00000000, -76.00618000 );
            SET_CAM_FOV( l_U918, 36.60002000 );
            CREATE_CAM( 3, ref l_U917 );
            SET_CAM_INTERP_STYLE_CORE( l_U917, l_U916, l_U918, 35000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U917, 0, 0, 1, 1 );
            SET_USE_HIGHDOF( 1 );
            SET_CAM_FAR_DOF( l_U916, 5.00000000 );
            SET_CAM_FAR_DOF( l_U918, 5.00000000 );
            sub_59697( l_U917, 1 );
            LOAD_SCENE( vVar2.x, vVar2.y, vVar2.z );
            sub_37760( 0, 0 );
            WAIT( 0 );
            if (NOT IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_PRINTS();
            CLEAR_HELP();
            sub_5993( 1 );
            l_U954 = 1;
            switch (l_U969)
            {
                case 4:
                sub_24250( "E2T4_FCGDI", 16, 6, "E2T4AUD", 0, 0 );
                break;
                case 2:
                sub_24250( "E2T4_FCGDI", 16, 6, "E2T4AUD", 0, 0 );
                break;
            }
            SETTIMERB( 0 );
            l_U968 = 1;
        }
        break;
        case 1:
        if ((TIMERB() > 7000) AND (NOT sub_31414()))
        {
            if (NOT (IS_CHAR_INJURED( l_U906 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U906, 27, ref iVar7 );
                if (iVar7 != 1)
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U906, -445.50220000, 375.83840000, 10.03610000, 2, -2, 0.50000000 );
                    sub_59697( l_U917, 0 );
                    SET_CAM_POS( l_U916, -445.99430000, 348.49040000, 12.83835000 );
                    SET_CAM_ROT( l_U916, -3.58553200, 0.00000000, -113.65220000 );
                    SET_CAM_FOV( l_U916, 36.30002000 );
                    SET_CAM_FAR_DOF( l_U916, 10.00000000 );
                    sub_59697( l_U916, 1 );
                    SETTIMERB( 0 );
                }
                else if (TIMERB() > 2000)
                {
                    l_U968 = 2;
                }
            }
        }
        if (sub_60224())
        {
            l_U968 = 2;
        }
        break;
        case 2:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        sub_5993( 0 );
        DELETE_CHAR( ref l_U906 );
        if (DOES_CAM_EXIST( l_U916 ))
        {
            DESTROY_CAM( l_U916 );
        }
        if (DOES_CAM_EXIST( l_U918 ))
        {
            DESTROY_CAM( l_U918 );
        }
        if (DOES_CAM_EXIST( l_U917 ))
        {
            DESTROY_CAM( l_U917 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_USE_HIGHDOF( 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3476() );
        SET_CAM_BEHIND_PED( sub_3476() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        DISPLAY_RADAR( 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3476(), 0 );
        LOAD_SCENE( vVar2.x, vVar2.y, vVar2.z );
        if (NOT IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        SET_PLAYER_CONTROL( sub_3530(), 1 );
        sub_57918( 0 );
        break;
    }
    return;
}

void sub_58990(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_22236( uParam0 ), sub_20328( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_22277( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_22299( uParam0, (uParam1^) );
    return;
}

void sub_59697(unknown uParam0, unknown uParam1)
{
    SET_CAM_ACTIVE( uParam0, uParam1 );
    SET_CAM_PROPAGATE( uParam0, uParam1 );
    ACTIVATE_SCRIPTED_CAMS( uParam1, uParam1 );
    return;
}

int sub_60224()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_60706()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    float fVar11;
    float fVar12;
    int iVar13;

    vVar2 = {-443.41700000, 348.83880000, 11.20640000};
    vVar5 = {-443.96970000, 347.59790000, 11.10930000};
    vVar8 = {-443.41700000, 346.83880000, 11.20640000};
    fVar11 = 242.11820000;
    fVar12 = 20.11020000;
    if (l_U969 == 5)
    {
        vVar2 = {-1505.98300000, 269.71860000, 11.90720000};
        vVar5 = {-1505.14000000, 268.65770000, 11.83080000};
        vVar8 = {-1505.98300000, 269.71860000, 11.90720000};
        fVar11 = 88.27070000;
        fVar12 = 250.18560000;
    }
    switch (l_U968)
    {
        case 0:
        if ((((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (sub_33284( 1, 1 ))) AND (IS_PLAYER_CONTROL_ON( sub_3530() ))) AND (NOT IS_SCREEN_FADING()))
        {
            SET_PLAYER_CONTROL( sub_3530(), 0 );
            CLEAR_PRINTS();
            CLEAR_HELP();
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            sub_5993( 0 );
            g_U2792 = 1;
            WAIT( 0 );
            DISPLAY_RADAR( 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            CLEAR_AREA( vVar2.x, vVar2.y, vVar2.z, 200.00000000, 1 );
            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
            if (DOES_CHAR_EXIST( l_U906 ))
            {
                DELETE_CHAR( ref l_U906 );
            }
            if (DOES_VEHICLE_EXIST( l_U909 ))
            {
                DELETE_CAR( ref l_U909 );
            }
            if (DOES_CHAR_EXIST( l_U907 ))
            {
                DELETE_CHAR( ref l_U907 );
            }
            REQUEST_MODEL( 2014087898 );
            while (NOT (HAS_MODEL_LOADED( 2014087898 )))
            {
                WAIT( 0 );
            }
            CREATE_CHAR( 26, 2014087898, vVar5.x, vVar5.y, vVar5.z, ref l_U907, 1 );
            SET_CHAR_HEADING( l_U907, fVar11 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U907, 1 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U907, 0 );
            sub_7644( 2, l_U907, "GRACIE", 0 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 2014087898 );
            if (IS_CHAR_IN_ANY_CAR( sub_3476() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_3476(), vVar8.x, vVar8.y, vVar8.z );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_3476(), vVar8.x, vVar8.y, vVar8.z );
            }
            SET_CHAR_HEADING( sub_3476(), fVar12 );
            if (DOES_VEHICLE_EXIST( l_U908 ))
            {
                DELETE_CAR( ref l_U908 );
            }
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3476(), 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3476() );
            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3476(), l_U907 );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U907, sub_3476() );
            TASK_LOOK_AT_CHAR( sub_3476(), l_U907, -2, 0 );
            TASK_LOOK_AT_CHAR( l_U907, sub_3476(), -2, 0 );
            WAIT( 1000 );
            if (l_U969 != 5)
            {
                CREATE_CAM( 14, ref l_U916 );
                SET_CAM_POS( l_U916, -444.25930000, 345.36220000, 13.01133000 );
                SET_CAM_ROT( l_U916, -4.92344800, -0.00000000, -20.54388000 );
                SET_CAM_FOV( l_U916, 36.60002000 );
                CREATE_CAM( 14, ref l_U918 );
                SET_CAM_POS( l_U918, -445.65920000, 346.68230000, 13.01133000 );
                SET_CAM_ROT( l_U918, -4.92344800, 0.00000000, -76.00618000 );
                SET_CAM_FOV( l_U918, 36.60002000 );
            }
            else
            {
                CREATE_CAM( 14, ref l_U916 );
                SET_CAM_POS( l_U916, -1505.94300000, 271.72410000, 13.62420000 );
                SET_CAM_ROT( l_U916, -9.34255100, 0.00000000, -174.70070000 );
                SET_CAM_FOV( l_U916, 30.30004000 );
                CREATE_CAM( 14, ref l_U918 );
                SET_CAM_POS( l_U918, -1505.25600000, 271.72410000, 13.62420000 );
                SET_CAM_ROT( l_U918, -9.34255000, -0.00000000, 170.30330000 );
                SET_CAM_FOV( l_U918, 30.30004000 );
            }
            CREATE_CAM( 3, ref l_U917 );
            SET_CAM_INTERP_STYLE_CORE( l_U917, l_U916, l_U918, 35000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U917, 0, 0, 1, 1 );
            SET_USE_HIGHDOF( 1 );
            SET_CAM_FAR_DOF( l_U916, 5.00000000 );
            SET_CAM_FAR_DOF( l_U918, 5.00000000 );
            sub_59697( l_U917, 1 );
            LOAD_SCENE( vVar2.x, vVar2.y, vVar2.z );
            sub_37760( 0, 0 );
            WAIT( 0 );
            if (NOT IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_PRINTS();
            CLEAR_HELP();
            sub_5993( 1 );
            l_U954 = 1;
            switch (l_U969)
            {
                case 3:
                sub_24250( "E2T4_FCTDI", 15, 6, "E2T4AUD", 0, 0 );
                break;
                case 5:
                sub_24250( "E2T4_FCAR2", 18, 6, "E2T4AUD", 0, 0 );
                break;
                case 1:
                sub_24250( "E2T4_FGEN", 19, 6, "E2T4AUD", 0, 0 );
                break;
                case 0:
                sub_24250( "E2T4_FGEN", 19, 6, "E2T4AUD", 0, 0 );
                break;
            }
            SETTIMERB( 0 );
            l_U968 = 1;
        }
        break;
        case 1:
        if ((TIMERB() > 7000) AND (NOT sub_31414()))
        {
            if (NOT (IS_CHAR_INJURED( l_U907 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U907, 27, ref iVar13 );
                if (iVar13 != 1)
                {
                    if (l_U969 == 5)
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U907, -1513.37100000, 264.69980000, 11.63010000, 2, -2, 0.50000000 );
                    }
                    else
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U907, -445.50220000, 375.83840000, 10.03610000, 2, -2, 0.50000000 );
                    }
                    sub_59697( l_U917, 0 );
                    if (l_U969 != 5)
                    {
                        SET_CAM_POS( l_U916, -445.99430000, 348.49040000, 12.83835000 );
                        SET_CAM_ROT( l_U916, -3.58553200, 0.00000000, -113.65220000 );
                        SET_CAM_FOV( l_U916, 36.30002000 );
                    }
                    else
                    {
                        SET_CAM_POS( l_U916, -1502.25700000, 268.20240000, 13.33068000 );
                        SET_CAM_ROT( l_U916, -2.02567300, 0.00000000, 74.53189000 );
                        SET_CAM_FOV( l_U916, 30.30004000 );
                    }
                    SET_CAM_FAR_DOF( l_U916, 10.00000000 );
                    sub_59697( l_U916, 1 );
                    SETTIMERB( 0 );
                }
                else if (TIMERB() > 2000)
                {
                    l_U968 = 2;
                }
            }
        }
        if (sub_60224())
        {
            l_U968 = 2;
        }
        break;
        case 2:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        sub_5993( 0 );
        if (DOES_CHAR_EXIST( l_U907 ))
        {
            DELETE_CHAR( ref l_U907 );
        }
        if (DOES_CAM_EXIST( l_U916 ))
        {
            DESTROY_CAM( l_U916 );
        }
        if (DOES_CAM_EXIST( l_U918 ))
        {
            DESTROY_CAM( l_U918 );
        }
        if (DOES_CAM_EXIST( l_U917 ))
        {
            DESTROY_CAM( l_U917 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_USE_HIGHDOF( 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3476() );
        SET_CAM_BEHIND_PED( sub_3476() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        DISPLAY_RADAR( 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3476(), 0 );
        LOAD_SCENE( vVar2.x, vVar2.y, vVar2.z );
        sub_37760( 0, 0 );
        WAIT( 0 );
        if (NOT IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        SET_PLAYER_CONTROL( sub_3530(), 1 );
        sub_57918( 0 );
        break;
    }
    return;
}

void sub_63180()
{
    vector vVar2;
    int iVar5;
    int iVar6;
    int iVar7;

    vVar2 = {-443.41700000, 346.83880000, 11.20640000};
    iVar5 = 0;
    iVar6 = -1;
    switch (l_U968)
    {
        case 0:
        if ((((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (sub_33284( 1, 1 ))) AND (IS_PLAYER_CONTROL_ON( sub_3530() ))) AND (NOT IS_SCREEN_FADING()))
        {
            SET_PLAYER_CONTROL( sub_3530(), 0 );
            CLEAR_PRINTS();
            CLEAR_HELP();
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            sub_5993( 0 );
            g_U2792 = 1;
            WAIT( 0 );
            DISPLAY_RADAR( 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            CLEAR_AREA( vVar2.x, vVar2.y, vVar2.z, 200.00000000, 1 );
            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
            REQUEST_MODEL( 2014087898 );
            while (NOT (HAS_MODEL_LOADED( 2014087898 )))
            {
                WAIT( 0 );
            }
            if (DOES_CHAR_EXIST( l_U907 ))
            {
                DELETE_CHAR( ref l_U907 );
            }
            REQUEST_MODEL( 2014087898 );
            while (NOT (HAS_MODEL_LOADED( 2014087898 )))
            {
                WAIT( 0 );
            }
            CREATE_CHAR( 26, 2014087898, -442.93970000, 348.21790000, 11.10930000, ref l_U907, 1 );
            SET_CHAR_HEADING( l_U907, 242.11820000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U907, 1 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U907, 0 );
            sub_7644( 2, l_U907, "GRACIE", 0 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 2014087898 );
            if (DOES_CHAR_EXIST( l_U906 ))
            {
                DELETE_CHAR( ref l_U906 );
            }
            sub_20317( 0 );
            while (NOT (sub_20820( 0 )))
            {
                WAIT( 0 );
            }
            sub_58990( 0, ref l_U906, -443.96970000, 347.59790000, 11.10930000, 242.11820000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U906, 1 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U906, 0 );
            sub_7644( 1, l_U906, "TONY", 0 );
            sub_23902( 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U906, 1, 2, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U906, 2, 0, 0 );
            GET_CHAR_PROP_INDEX( l_U906, 1, ref iVar6 );
            if (NOT (iVar6 == iVar5))
            {
                SET_CHAR_PROP_INDEX( l_U906, 1, iVar5 );
            }
            if (IS_CHAR_IN_ANY_CAR( sub_3476() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_3476(), -443.41700000, 346.83880000, 11.20640000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_3476(), -443.41700000, 346.83880000, 11.20640000 );
            }
            SET_CHAR_HEADING( sub_3476(), 20.11020000 );
            if (DOES_VEHICLE_EXIST( l_U908 ))
            {
                DELETE_CAR( ref l_U908 );
            }
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3476(), 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3476() );
            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3476(), l_U906 );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U906, sub_3476() );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U907, sub_3476() );
            TASK_LOOK_AT_CHAR( sub_3476(), l_U906, -2, 0 );
            TASK_LOOK_AT_CHAR( l_U906, sub_3476(), -2, 0 );
            TASK_LOOK_AT_CHAR( l_U907, sub_3476(), -2, 0 );
            WAIT( 1000 );
            CREATE_CAM( 14, ref l_U916 );
            SET_CAM_POS( l_U916, -444.25930000, 345.36220000, 13.01133000 );
            SET_CAM_ROT( l_U916, -4.92344800, -0.00000000, -20.54388000 );
            SET_CAM_FOV( l_U916, 36.60002000 );
            CREATE_CAM( 14, ref l_U918 );
            SET_CAM_POS( l_U918, -445.65920000, 346.68230000, 13.01133000 );
            SET_CAM_ROT( l_U918, -4.92344800, 0.00000000, -76.00618000 );
            SET_CAM_FOV( l_U918, 36.60002000 );
            CREATE_CAM( 3, ref l_U917 );
            SET_CAM_INTERP_STYLE_CORE( l_U917, l_U916, l_U918, 35000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U917, 0, 0, 1, 1 );
            SET_USE_HIGHDOF( 1 );
            SET_CAM_FAR_DOF( l_U916, 5.00000000 );
            SET_CAM_FAR_DOF( l_U918, 5.00000000 );
            sub_59697( l_U917, 1 );
            LOAD_SCENE( vVar2.x, vVar2.y, vVar2.z );
            sub_37760( 0, 0 );
            WAIT( 0 );
            if (NOT IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_PRINTS();
            CLEAR_HELP();
            sub_5993( 1 );
            l_U954 = 1;
            switch (l_U969)
            {
                case 6:
                sub_24250( "E2T4_FCAR1", 17, 6, "E2T4AUD", 0, 0 );
                break;
                default:
            }
            SETTIMERB( 0 );
            l_U968 = 1;
        }
        break;
        case 1:
        if ((TIMERB() > 7000) AND (NOT sub_31414()))
        {
            if (NOT (IS_CHAR_INJURED( l_U906 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U906, 27, ref iVar7 );
                if (iVar7 != 1)
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U906, -445.50220000, 375.83840000, 10.03610000, 2, -2, 0.50000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U907, -445.50220000, 375.83840000, 10.03610000, 2, -2, 0.50000000 );
                    sub_59697( l_U917, 0 );
                    SET_CAM_POS( l_U916, -445.99430000, 348.49040000, 12.83835000 );
                    SET_CAM_ROT( l_U916, -3.58553200, 0.00000000, -113.65220000 );
                    SET_CAM_FOV( l_U916, 36.30002000 );
                    SET_CAM_FAR_DOF( l_U916, 10.00000000 );
                    sub_59697( l_U916, 1 );
                    SETTIMERB( 0 );
                }
                else if (TIMERB() > 2000)
                {
                    l_U968 = 2;
                }
            }
        }
        if (sub_60224())
        {
            l_U968 = 2;
        }
        break;
        case 2:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        sub_5993( 0 );
        if (DOES_CHAR_EXIST( l_U906 ))
        {
            DELETE_CHAR( ref l_U906 );
        }
        if (DOES_CHAR_EXIST( l_U907 ))
        {
            DELETE_CHAR( ref l_U907 );
        }
        if (DOES_CAM_EXIST( l_U916 ))
        {
            DESTROY_CAM( l_U916 );
        }
        if (DOES_CAM_EXIST( l_U918 ))
        {
            DESTROY_CAM( l_U918 );
        }
        if (DOES_CAM_EXIST( l_U917 ))
        {
            DESTROY_CAM( l_U917 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_USE_HIGHDOF( 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3476() );
        SET_CAM_BEHIND_PED( sub_3476() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        DISPLAY_RADAR( 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3476(), 0 );
        LOAD_SCENE( vVar2.x, vVar2.y, vVar2.z );
        if (NOT IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        SET_PLAYER_CONTROL( sub_3530(), 1 );
        sub_57918( 0 );
        break;
    }
    return;
}

void sub_65374()
{
    int iVar2;

    if (l_U954)
    {
        if (sub_6008( l_U956 ))
        {
            sub_6049( l_U963, ref l_U956, l_U962, 1 );
        }
    }
    else if (NOT (sub_6008( l_U956 )))
    {
        sub_65456( ref l_U956 );
    }
    iVar2 = 1;
    if (l_U955)
    {
        if (NOT (DOES_CHAR_EXIST( l_U965 )))
        {
            iVar2 = 0;
        }
        else if (IS_CHAR_INJURED( l_U965 ))
        {
            iVar2 = 0;
        }
    }
    if ((((l_U922 != 0) AND (NOT l_U923[l_U922])) AND (l_U954)) AND (iVar2))
    {
        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_40489( l_U956 ))))
        {
            sub_24355( l_U963, ref l_U956, l_U962, 1 );
            l_U923[l_U922] = 1;
        }
    }
    return;
}

int sub_65456(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_6233( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_6233( "\n CONVERSATION PAUSED AT LINE " );
            sub_65596( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_6233( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_6233( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_6233( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_65596(unknown uParam0)
{
    return;
}

void sub_66370(unknown uParam0)
{
    if ((sub_66381( uParam0 )) > g_U43138[g_U43137]._fU12)
    {
        g_U43564 = 0;
    }
    else
    {
        g_U43564 = 1;
    }
    if (g_U43602 == 1)
    {
        g_U43613 = sub_66820();
        g_U43602 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if ((sub_66381( uParam0 )) < g_U43613)
            {
                g_U43577 = 1;
            }
            else
            {
                g_U43577 = 0;
            }
        }
        else
        {
            g_U43577 = 0;
        }
    }
    else
    {
        g_U43577 = 0;
    }
    if (g_U43137 == 4)
    {
        if ((FLOOR( (TO_FLOAT( sub_67418() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_67642();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_67418() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
                {
                    g_U43576 = 1;
                }
                else
                {
                    g_U43576 = 0;
                }
            }
            else
            {
                g_U43576 = 0;
            }
        }
        else
        {
            g_U43576 = 0;
        }
    }
    if (g_U43137 == 10)
    {
        if ((FLOOR( (TO_FLOAT( sub_67418() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_67642();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_67418() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
                {
                    g_U43576 = 1;
                }
                else
                {
                    g_U43576 = 0;
                }
            }
            else
            {
                g_U43576 = 0;
            }
        }
        else
        {
            g_U43576 = 0;
        }
    }
    if (g_U43137 == 7)
    {
        if ((FLOOR( (TO_FLOAT( sub_67418() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_67642();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_67418() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
                {
                    g_U43576 = 1;
                }
                else
                {
                    g_U43576 = 0;
                }
            }
            else
            {
                g_U43576 = 0;
            }
        }
        else
        {
            g_U43576 = 0;
        }
    }
    if ((sub_68749( uParam0 )) >= g_U43138[g_U43137]._fU24)
    {
        g_U43565 = 1;
    }
    else
    {
        g_U43565 = 0;
    }
    if (g_U43606 == 1)
    {
        g_U43618 = sub_68947();
        g_U43606 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if ((sub_68749( uParam0 )) > g_U43618)
            {
                g_U43581 = 1;
            }
            else
            {
                g_U43581 = 0;
            }
        }
        else
        {
            g_U43581 = 0;
        }
    }
    else
    {
        g_U43581 = 0;
    }
    return;
}

void sub_66381(unknown uParam0)
{
    if (g_U43499 == 1)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_CAR_HEALTH( uParam0, ref g_U43511 );
        }
        g_U43512 = g_U43510 - g_U43511;
        g_U43559 = ((TO_FLOAT( g_U43512 )) / (TO_FLOAT( g_U43510 ))) * 100;
    }
    g_U43559 = sub_66498( uParam0 );
    g_U43559 = TO_FLOAT( FLOOR( g_U43559 ) );
    if (g_U43559 < 0)
    {
        g_U43559 = 0;
    }
    return g_U43559;
}

float sub_66498(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float Result;
    unknown uVar7;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEALTH( uParam0, ref uVar7 );
        uVar3 = sub_66544( 100, TO_FLOAT( uVar7 ) );
        uVar4 = GET_PETROL_TANK_HEALTH( uParam0 );
        uVar5 = GET_ENGINE_HEALTH( uParam0 );
        Result = sub_66608( uVar3, sub_66608( uVar4, uVar5 ) );
        Result /= 10.00000000;
        Result = 100 - Result;
        return Result;
    }
    return 100.00000000;
}

void sub_66544(float Result, float fParam1)
{
    if (fParam1 < Result)
    {
        return Result;
    }
    return fParam1;
}

void sub_66608(float Result, float fParam1)
{
    if (Result < fParam1)
    {
        return Result;
    }
    return fParam1;
}

int sub_66820()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 476 );
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
        return GET_INT_STAT( 490 );
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
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 559 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 526 );
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
        return GET_INT_STAT( 513 );
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 611 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 540 );
    }
    if (g_U43137 == 22)
    {
        ;
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

void sub_67418()
{
    if (g_U43497 == 1)
    {
        GET_GAME_TIMER( ref g_U43505 );
        g_U43506 = g_U43505 - g_U43504;
    }
    if (g_U43506 > 18000000)
    {
        g_U43506 = 18000000;
    }
    if (g_U43506 < 0)
    {
        g_U43506 = 0;
    }
    return g_U43506;
}

int sub_67642()
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
        return GET_INT_STAT( 499 );
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 508 );
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
        ;
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
        return GET_INT_STAT( 517 );
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

void sub_68749(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        fVar3 = (fVar3 * 2.23693600) * 1.30000000;
        if (fVar3 > g_U43558)
        {
            g_U43558 = fVar3;
            g_U43558 = (g_U43558 * 2.23693600) * 1.30000000;
        }
    }
    if (g_U43558 < 0)
    {
        g_U43558 = 0;
    }
    return g_U43558;
}

int sub_68947()
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
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return sub_69092( GET_INT_STAT( 530 ) );
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
        return sub_69092( GET_INT_STAT( 539 ) );
    }
    if (g_U43137 == 22)
    {
        ;
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

int sub_69092(int iParam0)
{
    return iParam0 / 1670;
}