void main()
{
    l_U0 = 0;
    l_U1 = 86.00000000;
    l_U2 = 274.00000000;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U8 = -1;
    l_U120 = 15.00000000;
    l_U121 = 35.00000000;
    l_U122 = 16.00000000;
    l_U123 = 0.00000000;
    l_U129 = 1000.00000000;
    l_U130 = 7500.00000000;
    l_U139 = 1;
    l_U140 = 30.00000000;
    l_U141 = 30.00000000;
    l_U142 = 2.00000000;
    l_U152 = 0.00000000;
    l_U153 = 0.00000000;
    l_U165 = 1;
    l_U166 = 0;
    l_U167 = -1;
    l_U168 = 1;
    l_U169 = -1;
    l_U170 = -1;
    l_U171 = 15.00000000;
    l_U198 = 0;
    l_U199 = -1949702649;
    l_U200 = 2075870698;
    l_U205 = 0.12000000;
    l_U220 = 0;
    l_U221 = 1;
    l_U222 = 3;
    l_U224 = 0;
    l_U225 = -1;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 1;
    l_U229 = 1;
    l_U354 = 0;
    l_U355 = 0;
    l_U356 = 0;
    l_U357 = 0;
    l_U358 = 0;
    l_U359 = 0;
    l_U360 = 0;
    l_U361 = 0;
    l_U538 = {40.00000000, 40.00000000, 10.00000000};
    l_U541 = {20.00000000, 20.00000000, 10.00000000};
    l_U622 = 0;
    l_U1012 = 1;
    l_U1070 = 1;
    l_U1158 = 1;
    WAIT( 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_435();
        sub_618();
        sub_2792();
    }
    SET_MISSION_FLAG( 1 );
    while (l_U1070)
    {
        WAIT( 0 );
        switch (l_U354)
        {
            case 0:
            sub_6478();
            l_U354 = 1;
            break;
            case 1:
            sub_9900();
            break;
            case 2:
            if (NOT l_U1156)
            {
                sub_18136();
                sub_18237();
            }
            CLEAR_AREA( -1841.72000000, 281.79300000, 21.95570000, 50.00000000, 0 );
            sub_18502( "JF01_AA" );
            break;
            case 3:
            if (NOT l_U1156)
            {
                sub_18136();
                sub_18237();
            }
            CLEAR_AREA( -1841.72000000, 281.79300000, 21.95570000, 50.00000000, 0 );
            sub_13379();
            sub_10560();
            sub_12562();
            sub_19482();
            sub_10100();
            sub_14629();
            CLEAR_PRINTS();
            LOAD_SCENE( l_U365._fU0, l_U365._fU4, l_U365._fU8 );
            if (l_U1156)
            {
                if (NOT (l_U698 == nil))
                {
                    if (DOES_VEHICLE_EXIST( l_U698 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U698 ))
                        {
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U698 );
                        }
                    }
                }
            }
            if (NOT IS_SCREEN_FADING_IN())
            {
                DO_SCREEN_FADE_IN_UNHACKED( 500 );
            }
            while (IS_SCREEN_FADING())
            {
                WAIT( 0 );
            }
            SET_PLAYER_CONTROL( sub_5742(), 1 );
            l_U354 = 4;
            break;
            case 4:
            sub_20037();
            sub_31565();
            sub_60359();
            sub_64154();
            sub_70925();
            sub_14629();
            sub_71130();
            break;
            case 5:
            sub_20037();
            sub_31565();
            sub_64154();
            if (l_U599 > 0)
            {
                sub_72172();
                sub_77316();
                sub_14629();
            }
            sub_70925();
            break;
            case 6:
            if (NOT (g_U39149[5] == 2))
            {
                g_U39149[5] = 1;
            }
            sub_20037();
            sub_57539( l_U699 );
            sub_60359();
            sub_16143();
            sub_16482();
            sub_64154();
            sub_70925();
            sub_31565();
            sub_80327();
            sub_81343();
            break;
            case 7:
            g_U39149[5] = 2;
            sub_82971();
            sub_14629();
            break;
            case 8:
            sub_20037();
            sub_31565();
            sub_60359();
            sub_70925();
            sub_64154();
            sub_87748();
            if ((l_U599 >= 1) AND (NOT l_U1124))
            {
                CLEAR_AREA( -1483.18400000, -85.89300000, 5.42050000, 5.00000000, 0 );
                sub_87814();
            }
            if ((l_U1124) AND (NOT l_U1125))
            {
                sub_88848();
                sub_89850();
            }
            sub_14629();
            sub_72172();
            sub_77316();
            if (l_U1126)
            {
                if (DOES_VEHICLE_EXIST( l_U677 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U677 ))
                    {
                        LOCK_CAR_DOORS( l_U677, 1 );
                    }
                }
            }
            if (l_U599 > 3)
            {
                if (l_U1125)
                {
                    if (DOES_VEHICLE_EXIST( l_U677 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U677 ))
                        {
                            LOCK_CAR_DOORS( l_U677, 1 );
                        }
                    }
                }
            }
            sub_90632();
            sub_90767();
            break;
            case 18:
            sub_91870();
            break;
            case 9:
            sub_20037();
            sub_88848();
            sub_70925();
            sub_64154();
            sub_72172();
            sub_77316();
            sub_14629();
            sub_31565();
            break;
            case 10:
            sub_64154();
            sub_92803();
            sub_72172();
            sub_77316();
            sub_70925();
            sub_87748();
            l_U354 = 12;
            break;
            case 11:
            sub_20037();
            sub_14629();
            sub_60359();
            sub_94614();
            sub_70925();
            sub_87748();
            sub_57539( l_U699 );
            sub_64154();
            break;
            case 17:
            sub_97318();
            if (NOT l_U1158)
            {
                sub_97653( 1 );
            }
            if (IS_SCREEN_FADED_OUT())
            {
                if (l_U1158)
                {
                    CLEAR_AREA( l_U368._fU0, l_U368._fU4, l_U368._fU8, 50.00000000, 0 );
                }
                else
                {
                    CLEAR_AREA( l_U572._fU0, l_U572._fU4, l_U572._fU8, 50.00000000, 0 );
                }
                if (NOT IS_SCREEN_FADING_IN())
                {
                    DO_SCREEN_FADE_IN( 1000 );
                    WAIT( 1000 );
                    SET_PLAYER_CONTROL( sub_5742(), 1 );
                    l_U354 = 20;
                }
            }
            break;
            case 12:
            sub_20037();
            sub_14629();
            sub_60359();
            sub_94614();
            sub_70925();
            sub_87748();
            sub_57539( l_U699 );
            sub_64154();
            if ((l_U1157) || (l_U1158))
            {
                sub_98254();
            }
            break;
            case 14: break;
            case 13:
            sub_20037();
            sub_60359();
            sub_31565();
            sub_70925();
            sub_64154();
            break;
            case 15:
            if (l_U1157)
            {
                sub_98600();
            }
            else if (l_U1158)
            {
                sub_103155();
            }
            else
            {
                sub_108543();
            }
            break;
            case 16:
            sub_112882();
            SET_BIT( ref g_U10959._fU0, 7 );
            sub_18502( "JF01_AC" );
            break;
            case 19:
            sub_114769();
            break;
            case 20:
            sub_121460();
            break;
            case 21: break;
        }
    }
    sub_2792();
    return;
}

void sub_435()
{
    sub_444();
    return;
}

void sub_444()
{
    int I;

    I = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            g_U38937[I]._fU0 = 1;
            g_U38937[I]._fU4 = 0;
        }
    }
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            g_U39058[I]._fU0 = 1;
            g_U39058[I]._fU4 = 0;
        }
    }
    g_U39102 = 0;
    return;
}

void sub_618()
{
    sub_627();
    return;
}

void sub_627()
{
    int iVar2;

    iVar2 = 1;
    sub_641( iVar2 );
    sub_1782( iVar2 );
    return;
}

void sub_641(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_685();
        sub_893();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1018();
            sub_1070();
            g_U11095 = 1;
        }
    }
    sub_1163();
    sub_1302();
    uVar5 = sub_1415( uParam0 );
    sub_1691( uVar5, 0 );
    return;
}

void sub_685()
{
    if (g_U10993)
    {
        return;
    }
    sub_712( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_833();
    }
    return;
}

void sub_712(int iParam0)
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
    if (g_U10993)
    {
        return;
    }
    iVar3 = g_U20913[iParam0]._fU100;
    iVar3--;
    g_U20913[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_833()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_893()
{
    sub_902();
    return;
}

void sub_902()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1018()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1070()
{
    sub_1079();
    return;
}

void sub_1079()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1163()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12306[J]._fU144[I]._fU36)
            {
                g_U12306[J]._fU28 = 1;
            }
            g_U12306[J]._fU144[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1302()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1324();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1324()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1415(unknown uParam0)
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
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1646( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1646(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1691(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_1782(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1791();
    if (g_U0)
    {
        return;
    }
    if (g_U94._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12303)
    {
        return;
    }
    iVar3 = g_U14838[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12306[iParam0]._fU12)
    {
        return;
    }
    if (g_U10959._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10959._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_2551())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2617();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_1791()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_1829( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_1829( 1, g_U572[I] )) != 0)
            {
                sub_2115( I );
            }
        }
    }
    if (NOT sub_2281())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    if (g_U94._fU0 == 1015)
    {
        g_U94._fU92 = 1;
    }
    return;
}

int sub_1829(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2115(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2200( g_U572 - 1 );
    return;
}

void sub_2200(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2281()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_1829( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2551()
{
    if ((g_U10959._fU4 == 0) AND (g_U10959._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_2617()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_2792()
{
    if (l_U1160)
    {
        if (g_U39246 == 0)
        {
            g_U39246 = 1;
        }
        else
        {
            g_U39246 = 0;
        }
    }
    if (DOES_OBJECT_EXIST( l_U1215 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U1215 );
    }
    if (DOES_OBJECT_EXIST( l_U1216 ))
    {
        if (IS_OBJECT_ATTACHED( l_U1216 ))
        {
            DETACH_OBJECT( l_U1216, 0 );
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U1216 );
        }
        else
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U1215 );
        }
    }
    if (l_U1066)
    {
        if (DOES_CAM_EXIST( l_U1221 ))
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            if (DOES_CAM_EXIST( l_U1221 ))
            {
                DESTROY_CAM( l_U1221 );
            }
            END_CAM_COMMANDS( ref l_U1218 );
        }
    }
    if (l_U1064)
    {
        if (DOES_CAM_EXIST( l_U1219 ))
        {
            if (IS_CAM_ACTIVE( l_U1219 ))
            {
                SET_CAM_ACTIVE( l_U1219, 0 );
            }
            if (IS_CAM_PROPAGATING( l_U1219 ))
            {
                SET_CAM_PROPAGATE( l_U1219, 0 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            if (DOES_CAM_EXIST( l_U1219 ))
            {
                DESTROY_CAM( l_U1219 );
            }
            SET_USE_HIGHDOF( 0 );
            END_CAM_COMMANDS( ref l_U1218 );
        }
    }
    if (DOES_BLIP_EXIST( l_U1225 ))
    {
        REMOVE_BLIP( l_U1225 );
    }
    if (DOES_BLIP_EXIST( l_U736._fU100 ))
    {
        REMOVE_BLIP( l_U736._fU100 );
    }
    if (DOES_BLIP_EXIST( l_U1226 ))
    {
        REMOVE_BLIP( l_U1226 );
    }
    if (DOES_BLIP_EXIST( l_U1227 ))
    {
        REMOVE_BLIP( l_U1227 );
    }
    if (DOES_BLIP_EXIST( l_U1235 ))
    {
        REMOVE_BLIP( l_U1235 );
    }
    if (DOES_BLIP_EXIST( l_U1236 ))
    {
        REMOVE_BLIP( l_U1236 );
    }
    if (DOES_BLIP_EXIST( l_U1248 ))
    {
        REMOVE_BLIP( l_U1248 );
    }
    for ( l_U597 = 0; l_U597 < 2; l_U597++ )
    {
        if (DOES_BLIP_EXIST( l_U1229[l_U597] ))
        {
            REMOVE_BLIP( l_U1229[l_U597] );
        }
        if (DOES_BLIP_EXIST( l_U1232[l_U597] ))
        {
            REMOVE_BLIP( l_U1232[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 5; l_U597++ )
    {
        if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
        {
            REMOVE_BLIP( l_U1237[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 3; l_U597++ )
    {
        if (DOES_BLIP_EXIST( l_U1244[l_U597] ))
        {
            REMOVE_BLIP( l_U1244[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
    {
        if (DOES_BLIP_EXIST( l_U1249[l_U597] ))
        {
            REMOVE_BLIP( l_U1249[l_U597] );
        }
    }
    if (DOES_CHAR_EXIST( l_U699 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U699 );
    }
    for ( l_U597 = 0; l_U597 < 3; l_U597++ )
    {
        if (DOES_CHAR_EXIST( l_U700[l_U597] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U700[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
    {
        if (DOES_CHAR_EXIST( l_U704[l_U597] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U704[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
    {
        if (DOES_CHAR_EXIST( l_U709[l_U597] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U709[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 2; l_U597++ )
    {
        if (DOES_CHAR_EXIST( l_U714[l_U597] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U714[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
    {
        if (DOES_CHAR_EXIST( l_U727[l_U597 + 4] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U727[l_U597 + 4] );
        }
    }
    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
    {
        if (DOES_CHAR_EXIST( l_U762[l_U597]._fU0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U762[l_U597]._fU0 );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U676 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U676 );
    }
    if (DOES_VEHICLE_EXIST( l_U677 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U677 );
    }
    for ( l_U597 = 0; l_U597 < 5; l_U597++ )
    {
        if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U678[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
    {
        if (DOES_VEHICLE_EXIST( l_U686[l_U597] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U686[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
    {
        if (DOES_VEHICLE_EXIST( l_U762[l_U597]._fU4 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U762[l_U597]._fU4 );
        }
    }
    for ( l_U597 = 0; l_U597 < 2; l_U597++ )
    {
        if (DOES_VEHICLE_EXIST( l_U695[l_U597] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U695[l_U597] );
        }
    }
    CLEAR_SEQUENCE_TASK( l_U1165 );
    REMOVE_DECISION_MAKER( l_U1287 );
    REMOVE_DECISION_MAKER( l_U1288 );
    REMOVE_DECISION_MAKER( l_U1291 );
    REMOVE_DECISION_MAKER( l_U1292 );
    REMOVE_DECISION_MAKER( l_U1296 );
    REMOVE_DECISION_MAKER( l_U1299 );
    REMOVE_DECISION_MAKER( l_U1300 );
    REMOVE_DECISION_MAKER( l_U1303 );
    REMOVE_DECISION_MAKER( l_U1304 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1204 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1205 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1206 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1207 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1208 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1209 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1210 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1211 );
    REMOVE_ANIMS( "missjim_1" );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U476[0]._fU0, l_U476[0]._fU4, l_U476[0]._fU8, l_U476[1]._fU0, l_U476[1]._fU4, l_U476[1]._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U483[0]._fU0, l_U483[0]._fU4, l_U483[0]._fU8, l_U483[1]._fU0, l_U483[1]._fU4, l_U483[1]._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U490[0]._fU0, l_U490[0]._fU4, l_U490[0]._fU8, l_U490[1]._fU0, l_U490[1]._fU4, l_U490[1]._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U497[0]._fU0, l_U497[0]._fU4, l_U497[0]._fU8, l_U497[1]._fU0, l_U497[1]._fU4, l_U497[1]._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U504[0]._fU0, l_U504[0]._fU4, l_U504[0]._fU8, l_U504[1]._fU0, l_U504[1]._fU4, l_U504[1]._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U511[0]._fU0, l_U511[0]._fU4, l_U511[0]._fU8, l_U511[1]._fU0, l_U511[1]._fU4, l_U511[1]._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U518[0]._fU0, l_U518[0]._fU4, l_U518[0]._fU8, l_U518[1]._fU0, l_U518[1]._fU4, l_U518[1]._fU8 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    sub_5311();
    DONT_SUPPRESS_CAR_MODEL( l_U1205 );
    DONT_SUPPRESS_CAR_MODEL( l_U1204 );
    if (l_U1048)
    {
        sub_5492( 0, 0 );
    }
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    g_U10460 = 1;
    if (l_U1107)
    {
        sub_5627( 6 );
    }
    if (DOES_CHAR_EXIST( sub_5671() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_5671() )))
        {
            SET_PLAYER_CONTROL( sub_5742(), 1 );
        }
    }
    if (sub_5787( l_U1265 ))
    {
        sub_5971( ref l_U1265, 0 );
    }
    if (sub_5787( l_U1271 ))
    {
        sub_5971( ref l_U1271, 0 );
    }
    if (sub_5787( l_U1277 ))
    {
        sub_5971( ref l_U1277, 0 );
    }
    g_U15862[6]._fU8[0]._fU0[0] = 0;
    g_U15862[7]._fU8[0]._fU0[0] = 0;
    sub_6189();
    if (l_U1154)
    {
        SET_PED_IS_BLIND_RAGING( sub_5671(), 0 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_5311()
{
    if (l_U6)
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
    l_U4 = 0;
    l_U3 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_5492(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11094) AND (NOT g_U11093))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_5627(int iParam0)
{
    if (g_U94._fU72 == iParam0)
    {
        g_U94._fU72 = -1;
    }
    return;
}

void sub_5671()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5742()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_5787(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_5899( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_5899( "\n speech is not playing" );
    }
    return 0;
}

void sub_5899(unknown uParam0)
{
    return;
}

void sub_5971(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_6189()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_6478()
{
    LOAD_ADDITIONAL_TEXT( "JIM1", 0 );
    sub_6512( "E1J1AUD" );
    LOAD_ADDITIONAL_TEXT( "E1J1AUD", 6 );
    sub_6651( 0, sub_5671(), "JOHNNY", 0 );
    l_U1032 = 1;
    l_U1080[0] = 1;
    l_U1080[1] = 1;
    l_U1080[2] = 1;
    l_U597 = 0;
    l_U598 = 0;
    l_U599 = 0;
    l_U600 = 0;
    l_U601 = 0;
    l_U605 = 0;
    l_U607 = 0;
    l_U635 = 0;
    l_U1206 = sub_6878( 1 );
    l_U1204 = -570033273;
    l_U1205 = -1898120560;
    l_U1207 = -77769032;
    l_U1208 = -571009320;
    l_U1210 = -1670328242;
    l_U1211 = -329861389;
    l_U1209 = 15972646;
    l_U1212 = 7;
    l_U1213 = 1;
    l_U1214 = 26;
    l_U362 = {-1849.22400000, 284.34360000, 21.95600000};
    l_U365 = {-1851.88200000, 284.00660000, 21.95600000};
    l_U368 = {-1314.97800000, 716.17990000, 16.20900000};
    l_U371 = {-1313.98000000, 710.51270000, 16.01560000};
    l_U374 = {-1383.65900000, 738.06920000, 18.47260000};
    l_U396 = {-1444.05600000, -43.00220000, 5.29730000};
    l_U441 = {-1493.42800000, -49.32000000, 5.83880000};
    l_U444 = {-1476.69000000, -36.59590000, 5.72120000};
    l_U447 = {-1701.15500000, 358.13850000, 24.35710000};
    l_U450 = {-1416.14600000, 693.77760000, 18.50850000};
    l_U463[0] = {-1558.68300000, -57.93000000, 5.50160000};
    l_U463[1] = {-1563.45300000, -60.58000000, 5.65970000};
    l_U463[2] = {-1549.90900000, 3.39720000, 6.79640000};
    l_U463[3] = {-1419.59800000, 33.16390000, 6.26260000};
    l_U399[0] = {0.00000000, 0.00000000, 0.00000000};
    l_U399[1] = {0.00000000, 0.00000000, 0.00000000};
    l_U406[0] = {0.00000000, 0.00000000, 0.00000000};
    l_U406[1] = {0.00000000, 0.00000000, 0.00000000};
    l_U413[0] = {0.00000000, -1.00000000, 0.82600000};
    l_U413[1] = {-0.79500000, -3.52500000, 0.82600000};
    l_U420[0] = {0.59800000, -0.80400000, 0.82600000};
    l_U420[1] = {0.73100000, -3.19800000, 0.82600000};
    l_U427[0] = {0.00000000, 0.20000000, 0.00000000};
    l_U427[1] = {0.00000000, -0.10000000, 0.00000000};
    l_U434[0] = {0.00000000, -0.20000000, -0.00000000};
    l_U434[1] = {0.00000000, 0.30000000, 0.00000000};
    l_U377[0] = {-1471.51000000, -47.28270000, 5.29730000};
    l_U377[1] = {-1469.08600000, -46.48890000, 5.29590000};
    l_U377[2] = {-1512.48100000, -67.86730000, 5.29640000};
    l_U377[3] = {-1505.33000000, -85.16010000, 5.28690000};
    l_U377[4] = {-1487.17000000, -69.86300000, 5.29640000};
    l_U377[5] = {-1503.26300000, -59.23760000, 5.29690000};
    l_U476[0] = {-1830.77700000, 291.95520000, -27.41640000};
    l_U476[1] = {-1869.17500000, 273.52680000, 71.95430000};
    l_U483[0] = {-1853.06300000, 193.24440000, -37.41810000};
    l_U483[1] = {-1790.26900000, 290.03790000, 74.25640000};
    l_U490[0] = {-1434.33800000, 676.70150000, -32.41510000};
    l_U490[1] = {-1347.89200000, 770.75700000, 68.56350000};
    l_U497[0] = {-1331.87300000, 712.45170000, -32.90970000};
    l_U497[1] = {-1284.37200000, 732.70400000, 66.52310000};
    l_U504[0] = {-1493.48900000, -40.80900000, -45.69280000};
    l_U504[1] = {-1435.24200000, -59.98770000, 55.29780000};
    l_U511[0] = {-1474.11400000, -47.30000000, -45.29730000};
    l_U511[1] = {-1510.22400000, -90.62190000, 56.64490000};
    l_U518[0] = {-1753.20500000, 381.26610000, -26.32900000};
    l_U518[1] = {-1666.02100000, 356.35860000, 74.36680000};
    l_U525 = {-1393.82700000, 722.16020000, 18.60310000};
    l_U528 = {-1868.87100000, 285.15210000, 21.95600000};
    l_U531[1] = {-1317.39200000, 710.67460000, 16.18180000};
    l_U531[0] = {-1315.77300000, 712.44750000, 16.14610000};
    l_U538 = {40.00000000, 40.00000000, 10.00000000};
    l_U541 = {20.00000000, 20.00000000, 10.00000000};
    l_U544[0] = {-1490.75700000, -69.41750000, 5.29640000};
    l_U544[1] = {-1492.44000000, -73.89290000, 5.29640000};
    l_U544[2] = {-1493.27100000, -78.04420000, 5.29610000};
    l_U544[3] = {-1472.47100000, -87.07320000, 5.29780000};
    l_U544[4] = {-1469.91200000, -87.19280000, 5.29780000};
    l_U544[5] = {-1470.68600000, -85.95680000, 5.42190000};
    l_U544[6] = {-1472.18100000, -85.22160000, 5.42190000};
    l_U544[7] = {-1474.23800000, -85.39170000, 5.42190000};
    l_U544[8] = {-1476.14600000, -85.25430000, 5.42190000};
    l_U572 = {-1701.64000000, 359.45370000, 24.40380000};
    l_U575[0] = {-1488.65800000, -76.17980000, 5.39640000};
    l_U575[1] = {-1489.20200000, -67.13850000, 5.39640000};
    l_U575[2] = {-1498.91500000, -82.66760000, 5.39200000};
    l_U575[3] = {-1509.19000000, -74.12690000, 5.39640000};
    l_U575[4] = {-1502.48100000, -59.24660000, 5.39690000};
    l_U591 = {-1316.68600000, 708.35320000, 16.09440000};
    l_U594 = {-1314.70900000, 709.99350000, 16.03860000};
    l_U639 = 104.64290000;
    l_U640 = 226.63450000;
    l_U641 = 218.18770000;
    l_U642 = 73.57400000;
    l_U650 = 269.80490000;
    l_U651 = 253.42120000;
    l_U652 = 133.81170000;
    l_U643[0] = 134.96200000;
    l_U643[1] = 194.96670000;
    l_U643[2] = 97.53580000;
    l_U643[3] = 213.46620000;
    l_U643[4] = 206.10620000;
    l_U643[5] = 3.04200000;
    l_U653[0] = 301.94210000;
    l_U653[1] = 329.22370000;
    l_U653[2] = 206.82860000;
    l_U653[3] = 87.25790000;
    l_U662 = 359.60160000;
    l_U663[1] = 62.39440000;
    l_U663[0] = 67.41920000;
    l_U666 = 59.69210000;
    l_U667[0] = 267.49350000;
    l_U667[1] = 271.01600000;
    l_U667[2] = 186.75180000;
    l_U667[3] = 106.23000000;
    l_U667[4] = 31.28300000;
    l_U673 = 59.38660000;
    l_U674 = 70.05610000;
    l_U636 = "J1_STEAL_BIKES_WITH_PACKER_LOCK_BIKE";
    l_U638 = "J1_STEAL_BIKES_LOWER_TAILGATE";
    l_U1289 = 1;
    l_U1290 = 2;
    l_U1293 = 1;
    l_U1294 = 2;
    l_U1297 = 1;
    l_U1298 = 3;
    l_U1301 = 1;
    l_U1302 = 3;
    l_U1305 = 1;
    l_U1306 = 2;
    # -sub_C1FFC0-0xc214c8( l_U1289, ref l_U1287 );
    LOAD_COMBAT_DECISION_MAKER( l_U1290, ref l_U1288 );
    # -sub_C1FFC0-0xc214c8( l_U1293, ref l_U1291 );
    LOAD_COMBAT_DECISION_MAKER( l_U1294, ref l_U1292 );
    # -sub_C1FFC0-0xc214c8( l_U1297, ref l_U1295 );
    LOAD_COMBAT_DECISION_MAKER( l_U1298, ref l_U1296 );
    # -sub_C1FFC0-0xc214c8( l_U1301, ref l_U1299 );
    LOAD_COMBAT_DECISION_MAKER( l_U1302, ref l_U1300 );
    # -sub_C1FFC0-0xc214c8( l_U1305, ref l_U1303 );
    LOAD_COMBAT_DECISION_MAKER( l_U1306, ref l_U1304 );
    REQUEST_MODEL( l_U1204 );
    REQUEST_MODEL( l_U1206 );
    REQUEST_MODEL( l_U1210 );
    REQUEST_MODEL( l_U1211 );
    while ((((NOT (HAS_MODEL_LOADED( l_U1204 ))) || (NOT (HAS_MODEL_LOADED( l_U1206 )))) || (NOT (HAS_MODEL_LOADED( l_U1210 )))) || (NOT (HAS_MODEL_LOADED( l_U1211 ))))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "missjim_1" );
    while (NOT (HAVE_ANIMS_LOADED( "missjim_1" )))
    {
        WAIT( 0 );
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    SUPPRESS_CAR_MODEL( l_U1205 );
    SUPPRESS_CAR_MODEL( l_U1204 );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.85000000 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    g_U10460 = 0;
    return;
}

void sub_6512(unknown uParam0)
{
    StrCopy( ref l_U22._fU0, uParam0, 16 );
    sub_6529();
    return;
}

void sub_6529()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U22._fU16[I]._fU0 = nil;
        StrCopy( ref l_U22._fU16[I]._fU4, "", 32 );
        l_U22._fU344[I] = 0;
    }
    return;
}

void sub_6651(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U22._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U22._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6731( "\n PED NUMBER ", uParam0 );
    sub_6771( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6731(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6771(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_6878(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_1646( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_9900()
{
    if (IS_BIT_SET( g_U10959._fU0, 7 ))
    {
        g_U39149[5] = 0;
        l_U354 = 2;
    }
    else if (g_U39149[5] == 0)
    {
        CLEAR_AREA( l_U365._fU0, l_U365._fU4, l_U365._fU8, 200.00000000, 0 );
        l_U354 = 3;
    }
    if (g_U39149[5] == 1)
    {
        if (NOT l_U1131[0])
        {
            CLEAR_AREA( l_U368._fU0, l_U368._fU4, l_U368._fU8, 200.00000000, 0 );
            l_U1012 = 1;
            l_U1030 = 1;
            l_U1062 = 1;
            l_U1121[0] = 1;
            sub_10100();
            sub_10560();
            sub_12562();
            sub_13379();
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
                        {
                            WARP_CHAR_FROM_CAR_TO_CAR( sub_5671(), l_U677, -1 );
                        }
                        else
                        {
                            WARP_CHAR_INTO_CAR( sub_5671(), l_U677 );
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                            {
                                if (IS_CHAR_IN_ANY_CAR( l_U699 ))
                                {
                                    WARP_CHAR_FROM_CAR_TO_CAR( l_U699, l_U677, 0 );
                                }
                                else
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U699, l_U677, 0 );
                                }
                            }
                        }
                    }
                }
            }
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (DOES_VEHICLE_EXIST( l_U676 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U676 ))
                        {
                            if (NOT (LOCATE_CAR_3D( l_U676, -1318.09800000, 707.81630000, 16.14880000, 1.50000000, 1.50000000, 1.50000000, 0 )))
                            {
                                SET_CAR_HEADING( l_U676, 264.25810000 );
                                SET_CAR_COORDINATES( l_U676, -1318.09800000, 707.81630000, 16.14880000 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U676 );
                            }
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U675 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U675 ))
                        {
                            if (NOT (LOCATE_CAR_3D( l_U675, l_U371._fU0, l_U371._fU4, l_U371._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
                            {
                                SET_CAR_HEADING( l_U675, 254.58480000 );
                                SET_CAR_COORDINATES( l_U675, l_U371._fU0, l_U371._fU4, l_U371._fU8 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U675 );
                            }
                        }
                    }
                }
            }
            LOAD_SCENE( l_U371._fU0, l_U371._fU4, l_U371._fU8 );
            l_U1131[0] = 1;
        }
        if (NOT (DOES_OBJECT_EXIST( l_U1216 )))
        {
            CREATE_OBJECT( 1465898834, l_U368._fU8, l_U368._fU4, l_U368._fU8 - 10.00000000, ref l_U1216, 1 );
        }
        else if (NOT (IS_OBJECT_ATTACHED( l_U1216 )))
        {
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    ATTACH_OBJECT_TO_CAR( l_U1216, l_U677, 0, 0.00000000, -0.60000000, 0.42000000, -0.38000000, 0.00000000, 0.00000000 );
                }
            }
        }
        else if (NOT IS_SCREEN_FADED_IN())
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            DO_SCREEN_FADE_IN_UNHACKED( 1000 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        else
        {
            SET_PLAYER_CONTROL( sub_5742(), 1 );
            l_U354 = 6;
        };;;
    }
    if (g_U39149[5] == 2)
    {
        if (NOT l_U1131[1])
        {
            l_U1012 = 1;
            l_U1030 = 1;
            l_U1062 = 1;
            l_U1014 = 1;
            l_U971[6] = 1;
            l_U1108[4] = 1;
            l_U1143[0] = 1;
            sub_10100();
            sub_14629();
            sub_10560();
            sub_12562();
            sub_13379();
            sub_16143();
            sub_16482();
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
                        {
                            WARP_CHAR_FROM_CAR_TO_CAR( sub_5671(), l_U677, -1 );
                        }
                        else
                        {
                            WARP_CHAR_INTO_CAR( sub_5671(), l_U677 );
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                            {
                                if (IS_CHAR_IN_ANY_CAR( l_U699 ))
                                {
                                    WARP_CHAR_FROM_CAR_TO_CAR( l_U699, l_U677, 0 );
                                }
                                else
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U699, l_U677, 0 );
                                }
                            }
                        }
                    }
                }
            }
            CLEAR_AREA( l_U396._fU0, l_U396._fU4, l_U396._fU8, 20.00000000, 0 );
            l_U1131[1] = 1;
        }
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (LOCATE_CAR_3D( l_U677, l_U396._fU0, l_U396._fU4, l_U396._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
                {
                    if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                    {
                        if (DOES_CHAR_EXIST( l_U699 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U699 )))
                            {
                                if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                                {
                                    SET_CAR_HEADING( l_U677, l_U650 );
                                    SET_CAR_COORDINATES( l_U677, l_U396._fU0, l_U396._fU4, l_U396._fU8 );
                                    SET_CAR_ON_GROUND_PROPERLY( l_U677 );
                                    LOAD_SCENE( l_U396._fU0, l_U396._fU4, l_U396._fU8 );
                                }
                            }
                        }
                    }
                }
                else
                {
                    l_U356 = 0;
                    l_U1069 = 1;
                    l_U354 = 6;
                }
            }
        }
    }
    return;
}

void sub_10100()
{
    if (l_U1012)
    {
        if (NOT (HAS_MODEL_LOADED( l_U1205 )))
        {
            REQUEST_MODEL( l_U1205 );
            while (NOT (HAS_MODEL_LOADED( l_U1205 )))
            {
                WAIT( 0 );
            }
        }
        while (NOT (DOES_VEHICLE_EXIST( l_U677 )))
        {
            SWITCH_ROADS_OFF( l_U497[0]._fU0, l_U497[0]._fU4, l_U497[0]._fU8, l_U497[1]._fU0, l_U497[1]._fU4, l_U497[1]._fU8 );
            CLEAR_AREA( l_U368._fU0, l_U368._fU4, l_U368._fU8, 50.00000000, 0 );
            l_U1003[3] = 1;
            CREATE_CAR( l_U1205, l_U368._fU0, l_U368._fU4, l_U368._fU8, ref l_U677, 0 );
            TURN_OFF_VEHICLE_EXTRA( l_U677, 1, 0 );
            TURN_OFF_VEHICLE_EXTRA( l_U677, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( l_U677, 3, 0 );
            TURN_OFF_VEHICLE_EXTRA( l_U677, 4, 0 );
            SET_CAR_HEADING( l_U677, l_U642 );
            SET_CAR_COORDINATES( l_U677, l_U368._fU0, l_U368._fU4, l_U368._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( l_U677 );
            SET_CAR_COLOUR_COMBINATION( l_U677, 0 );
            SET_PETROL_TANK_WEAKPOINT( l_U677, 0 );
            STOP_CAR_BREAKING( l_U677, 1 );
            SET_CAR_DOOR_LATCHED( l_U677, 5, 1, 1 );
            l_U1121[0] = 1;
            if (NOT l_U1071)
            {
                ;
            }
            WAIT( 0 );
        }
    }
    return;
}

void sub_10560()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U675 )))
    {
        while (NOT (sub_10612( ref l_U675, -1845.69300000, 284.79280000, 21.95570000, l_U640 )))
        {
            WAIT( 0 );
            SWITCH_ROADS_OFF( l_U476[0]._fU0, l_U476[0]._fU4, l_U476[0]._fU8, l_U476[1]._fU0, l_U476[1]._fU4, l_U476[1]._fU8 );
            l_U1003[0] = 1;
            CLEAR_AREA( l_U362._fU0, l_U362._fU4, l_U362._fU8, 50.00000000, 0 );
            SET_CAR_ENGINE_ON( l_U675, 1, 1 );
        }
    }
    return;
}

void sub_10612(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_10629( uParam0, 1, uParam1, uParam4 );
}

void sub_10629(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_10640( uParam1 );
    return sub_10873( uParam0, uVar8, uParam2, uParam5, uParam1 );
}

int sub_10640(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

int sub_10873(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    sub_11007( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_11007(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_12562()
{
    unknown uVar2;

    while (NOT (DOES_CHAR_EXIST( l_U699 )))
    {
        if (NOT (IS_CAR_DEAD( l_U675 )))
        {
            CREATE_CHAR_INSIDE_CAR( l_U675, 26, l_U1206, ref l_U699 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U699, 1 );
            GIVE_WEAPON_TO_CHAR( l_U699, 27, 30000, 0 );
            SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( l_U699, 0 );
            SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U699, 1 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U699, 0 );
            SET_CHAR_RELATIONSHIP( l_U699, 1, 0 );
            SET_CHAR_RELATIONSHIP( l_U699, 5, 25 );
            SET_CHAR_DECISION_MAKER( l_U699, l_U1287 );
            SET_COMBAT_DECISION_MAKER( l_U699, l_U1288 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U699, 0 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U699, 1 );
            SET_PED_DIES_WHEN_INJURED( l_U699, 1 );
            SET_CHAR_ACCURACY( l_U699, 75 );
            SET_CHAR_NEVER_TARGETTED( l_U699, 1 );
            SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U699, 3 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U699, 1 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U699, 1 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U699, 0 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U699, 1 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U699, 0 );
            sub_6651( 1, l_U699, "JIM", 0 );
            sub_12924( 1 );
        }
    }
    sub_13094( l_U699, ref l_U736, 1, 0 );
    sub_13146( ref l_U736, l_U675, 0 );
    sub_13297( ref l_U736, 2 );
    return;
}

void sub_12924(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_12935( uParam0 );
    if (iVar3 == 6)
    {
        return;
    }
    g_U39058[iVar3]._fU4 = 1;
    g_U39102 = 1;
    return;
}

int sub_12935(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 6: return 2;
        case 7: return 3;
        case 13: return 4;
        case 16: return 5;
    }
    return 6;
}

void sub_13094(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    iParam1->_fU0 = uParam0;
    iParam1->_fU36 = uParam2;
    iParam1->_fU88 = uParam3;
    return;
}

void sub_13146(int iParam0, unknown uParam1, boolean bParam2)
{
    iParam0->_fU4 = uParam1;
    if (bParam2)
    {
        sub_13172( iParam0, 2 );
    }
    return;
}

void sub_13172(int iParam0, int iParam1)
{
    if (sub_13185( iParam0, iParam1 ))
    {
        iParam0->_fU88 = (iParam0->_fU88) XOR (iParam1);
    }
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        }
    }
    return;
}

boolean sub_13185(int iParam0, unknown uParam1)
{
    return ((iParam0->_fU88) AND (uParam1)) > 0;
}

void sub_13297(int iParam0, int iParam1)
{
    iParam0->_fU88 = (iParam0->_fU88) || (iParam1);
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        }
    }
    return;
}

void sub_13379()
{
    while (NOT (sub_13403( ref l_U676, l_U362, l_U641 )))
    {
        WAIT( 0 );
    }
    if (DOES_VEHICLE_EXIST( l_U676 ))
    {
        if (IS_VEH_DRIVEABLE( l_U676 ))
        {
            SET_CAR_ENGINE_ON( l_U676, 1, 1 );
        }
    }
    return;
}

int sub_13403(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_13412();
    SUPPRESS_CAR_MODEL( uVar7 );
    REQUEST_MODEL( uVar7 );
    if (NOT (HAS_MODEL_LOADED( uVar7 )))
    {
        REQUEST_MODEL( uVar7 );
        return 0;
    }
    CLEAR_AREA( uParam1._fU0, uParam1._fU4, uParam1._fU8, 5.00000000, 0 );
    CREATE_CAR( uVar7, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_11007( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

int sub_13412()
{
    return 301427732;
}

void sub_14629()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown[5] uVar5;
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
    vector vVar21;
    vector vVar24;
    unknown uVar27;
    unknown[5] uVar28;
    unknown[5] uVar34;
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
    unknown[5] uVar50;
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

    array(ref uVar5, 5);
    array(ref uVar28, 5);
    array(ref uVar34, 5);
    array(ref uVar50, 5);
    vVar21 = {0.00000000, -0.60000000, 0.42000000};
    vVar24 = {-0.38000000, 0.00000000, 0.00000000};
    if (l_U1121[0])
    {
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (DOES_OBJECT_EXIST( l_U1216 )))
                {
                    CREATE_OBJECT( 1465898834, l_U368._fU8, l_U368._fU4, l_U368._fU8 - 10.00000000, ref l_U1216, 1 );
                }
                else if (NOT (IS_OBJECT_ATTACHED( l_U1216 )))
                {
                    ATTACH_OBJECT_TO_CAR( l_U1216, l_U677, 0, vVar21, vVar24 );
                }
            }
        }
    }
    else if (DOES_OBJECT_EXIST( l_U1216 ))
    {
        if (IS_OBJECT_ATTACHED( l_U1216 ))
        {
            DETACH_OBJECT( l_U1216, 1 );
        }
        else
        {
            DELETE_OBJECT( ref l_U1216 );
        }
    }
    if (l_U1121[1])
    {
        if (NOT l_U1126)
        {
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U1215 )))
                    {
                        CREATE_OBJECT( 1465898834, l_U396._fU0, l_U396._fU4 - 4.65000000, l_U396._fU8 - 20.00000000, ref l_U1215, 1 );
                    }
                }
            }
        }
    }
    if (l_U599 > 3)
    {
        if (NOT l_U1126)
        {
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                    {
                        GET_CAR_COORDINATES( l_U677, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                        {
                            if (l_U1021[l_U597])
                            {
                                if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                                    {
                                        if (NOT (IS_CAR_ATTACHED( l_U678[l_U597] )))
                                        {
                                            if (NOT l_U1115[l_U597])
                                            {
                                                GET_OFFSETS_FOR_ATTACH_CAR_TO_CAR( l_U677, l_U678[l_U597], ref uVar34[l_U597], ref uVar50[l_U597] );
                                                SET_CAR_ENGINE_ON( l_U678[l_U597], 0, 0 );
                                                ATTACH_CAR_TO_CAR( l_U678[l_U597], l_U677, 0, uVar34[l_U597], uVar50[l_U597] );
                                                l_U1115[l_U597] = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        l_U1126 = 1;
                    }
                    else
                    {
                        GET_GAME_VIEWPORT_ID( ref uVar66 );
                        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), l_U399[0]._fU0, l_U399[0]._fU4, l_U399[0]._fU8, 7.50000000, 7.50000000, 7.50000000, 0 ))) AND (NOT (CAM_IS_SPHERE_VISIBLE( uVar66, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2.00000000 ))))
                        {
                            GET_CAR_COORDINATES( l_U677, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                            {
                                if (l_U1021[l_U597])
                                {
                                    if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                                    {
                                        if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                                        {
                                            if (NOT (IS_CAR_ATTACHED( l_U678[l_U597] )))
                                            {
                                                if (NOT l_U1115[l_U597])
                                                {
                                                    GET_OFFSETS_FOR_ATTACH_CAR_TO_CAR( l_U677, l_U678[l_U597], ref uVar34[l_U597], ref uVar50[l_U597] );
                                                    SET_CAR_ENGINE_ON( l_U678[l_U597], 0, 0 );
                                                    ATTACH_CAR_TO_CAR( l_U678[l_U597], l_U677, 0, uVar34[l_U597], uVar50[l_U597] );
                                                    l_U1115[l_U597] = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            l_U1126 = 1;
                        }
                    }
                }
            }
        }
    }
    if (NOT l_U1126)
    {
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (DOES_OBJECT_EXIST( l_U1215 ))
                {
                    PLACE_OBJECT_RELATIVE_TO_CAR( l_U1215, l_U677, 0.00000000, -4.65000000, 0.25000000 );
                }
            }
        }
    }
    else if (NOT l_U1137)
    {
        if (DOES_OBJECT_EXIST( l_U1215 ))
        {
            APPLY_FORCE_TO_OBJECT( l_U1215, 1, 0.30000000, 0.30000000, 0.30000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
        }
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                LOCK_CAR_DOORS( l_U677, 1 );
                FREEZE_CAR_POSITION( l_U677, 0 );
                CONTROL_CAR_DOOR( l_U677, 5, 0, 0.00000000 );
                SET_CAR_DOOR_LATCHED( l_U677, 5, 1, 1 );
                l_U1137 = 1;
            }
        }
    }
    return;
}

void sub_16143()
{
    vector[2] vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    array(ref vVar2, 2);
    vVar2[0] = {-1422.95200000, -0.71550000, -45.29730000};
    vVar2[1] = {-1514.29200000, -97.32420000, 56.88300000};
    if (l_U1014)
    {
        if (NOT l_U1078)
        {
            SET_CAR_GENERATORS_ACTIVE_IN_AREA( vVar2[0]._fU0, vVar2[0]._fU4, vVar2[0]._fU8, vVar2[1]._fU0, vVar2[1]._fU4, vVar2[1]._fU8, 0 );
            SWITCH_PED_PATHS_OFF( vVar2[0]._fU0, vVar2[0]._fU4, vVar2[0]._fU8, vVar2[1]._fU0, vVar2[1]._fU4, vVar2[1]._fU8 );
            SWITCH_ROADS_OFF( vVar2[0]._fU0, vVar2[0]._fU4, vVar2[0]._fU8, vVar2[1]._fU0, vVar2[1]._fU4, vVar2[1]._fU8 );
            ADD_SCENARIO_BLOCKING_AREA( vVar2[0], vVar2[1] );
            CLEAR_AREA( l_U396._fU0, l_U396._fU4, l_U396._fU8, 75.00000000, 0 );
            CLEAR_AREA( l_U377[0]._fU0, l_U377[0]._fU4, l_U377[0]._fU8, 75.00000000, 0 );
            l_U1078 = 1;
        }
    }
    return;
}

void sub_16482()
{
    vector vVar2;
    float fVar5;

    vVar2 = {-1493.28900000, -50.53660000, 5.83420000};
    fVar5 = 212.45360000;
    if (l_U1014)
    {
        if (NOT l_U1079)
        {
            REQUEST_MODEL( l_U1208 );
            REQUEST_MODEL( l_U1207 );
            REQUEST_MODEL( l_U1209 );
            while (((NOT (HAS_MODEL_LOADED( l_U1207 ))) || (NOT (HAS_MODEL_LOADED( l_U1209 )))) || (NOT (HAS_MODEL_LOADED( l_U1208 ))))
            {
                WAIT( 0 );
            }
            CLEAR_AREA( -1496.94900000, -70.11190000, 5.29640000, 60.00000000, 0 );
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                while (NOT (DOES_VEHICLE_EXIST( l_U678[l_U597] )))
                {
                    CLEAR_AREA( l_U377[l_U597]._fU0, l_U377[l_U597]._fU4, l_U377[l_U597]._fU8, 2.00000000, 0 );
                    if (l_U597 == 0)
                    {
                        CREATE_CAR( l_U1207, l_U377[l_U597]._fU0, l_U377[l_U597]._fU4, l_U377[l_U597]._fU8, ref l_U678[l_U597], 0 );
                        SET_CAR_COLOUR_COMBINATION( l_U678[l_U597], 0 );
                    }
                    else if (l_U597 == 1)
                    {
                        CREATE_CAR( l_U1208, l_U377[l_U597]._fU0, l_U377[l_U597]._fU4, l_U377[l_U597]._fU8, ref l_U678[l_U597], 0 );
                        SET_CAR_COLOUR_COMBINATION( l_U678[l_U597], 1 );
                        TURN_OFF_VEHICLE_EXTRA( l_U678[l_U597], 1, 0 );
                    }
                    else if (l_U597 == 2)
                    {
                        CREATE_CAR( l_U1208, l_U377[l_U597]._fU0, l_U377[l_U597]._fU4, l_U377[l_U597]._fU8, ref l_U678[l_U597], 0 );
                        SET_CAR_COLOUR_COMBINATION( l_U678[l_U597], 0 );
                    }
                    else if (l_U597 == 3)
                    {
                        CREATE_CAR( l_U1207, l_U377[l_U597]._fU0, l_U377[l_U597]._fU4, l_U377[l_U597]._fU8, ref l_U678[l_U597], 0 );
                        SET_CAR_COLOUR_COMBINATION( l_U678[l_U597], 1 );
                    }
                    else
                    {
                        CREATE_CAR( l_U1207, l_U377[l_U597]._fU0, l_U377[l_U597]._fU4, l_U377[l_U597]._fU8, ref l_U678[l_U597], 0 );
                        SET_CAR_COLOUR_COMBINATION( l_U678[l_U597], 2 );
                    };;;;
                    SET_CAR_HEADING( l_U678[l_U597], l_U643[l_U597] );
                    SET_CAR_ON_GROUND_PROPERLY( l_U678[l_U597] );
                    LOCK_CAR_DOORS( l_U678[l_U597], 2 );
                    WAIT( 0 );
                }
            }
            if (NOT (g_U39149[5] == 2))
            {
                for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                {
                    CREATE_RANDOM_CAR_FOR_CAR_PARK( l_U575[l_U597]._fU0, l_U575[l_U597]._fU4, l_U575[l_U597]._fU8, l_U667[l_U597] );
                }
            }
            if (NOT (DOES_OBJECT_EXIST( l_U1217 )))
            {
                CREATE_OBJECT( -2135182574, vVar2.x, vVar2.y, vVar2.z, ref l_U1217, 1 );
            }
            l_U1079 = 1;
        }
    }
    return;
}

void sub_18136()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( sub_5671() )))
    {
        GET_CHAR_COORDINATES( sub_5671(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar2 = GET_CLOSEST_CAR( uVar3, 2000.00000000, sub_13412(), 22 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            DELETE_CAR( ref uVar2 );
        }
    }
    return;
}

void sub_18237()
{
    vector vVar2;
    float fVar5;
    unknown uVar6;

    vVar2 = {-1857.33100000, 293.97390000, 21.95570000};
    fVar5 = 81.72030000;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U698 );
    if (IS_VEH_DRIVEABLE( l_U698 ))
    {
        if (LOCATE_CAR_3D( l_U698, -1832.16200000, 280.51570000, 22.05440000, 30.00000000, 30.00000000, 30.00000000, 0 ))
        {
            SET_CAR_COORDINATES( l_U698, vVar2.x, vVar2.y, vVar2.z );
            SET_CAR_HEADING( l_U698, fVar5 );
            SET_CAR_AS_MISSION_CAR( l_U698 );
            GET_CAR_MODEL( l_U698, ref uVar6 );
            if ((IS_THIS_MODEL_A_BIKE( uVar6 )) || (IS_THIS_MODEL_A_CAR( uVar6 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U698 );
            }
            l_U1156 = 1;
        }
    }
    return;
}

void sub_18502(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_5671();
    switch (l_U355)
    {
        case 0:
        if (IS_BIT_SET( g_U10959._fU0, 7 ))
        {
            LOAD_ADDITIONAL_TEXT( "E1J1AUD", 6 );
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
            l_U355 = 1;
        }
        else
        {
            l_U355 = 2;
        }
        break;
        case 1:
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        l_U355 = 2;
        break;
        case 2:
        if (NOT (l_U354 == 16))
        {
            sub_18744( ref uVar3, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            l_U354 = 3;
        }
        else
        {
            l_U354 = 17;
        }
        break;
    }
    return;
}

void sub_18744(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_5671()) AND (g_U15728[19]))
        {
            if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
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

void sub_19482()
{
    SET_CHAR_HEADING( sub_5671(), l_U639 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (DOES_VEHICLE_EXIST( l_U676 ))
    {
        if (IS_VEH_DRIVEABLE( l_U676 ))
        {
            WARP_CHAR_INTO_CAR( sub_5671(), l_U676 );
        }
    }
    SWITCH_ROADS_OFF( l_U483[0]._fU0, l_U483[0]._fU4, l_U483[0]._fU8, l_U483[1]._fU0, l_U483[1]._fU4, l_U483[1]._fU8 );
    l_U1003[1] = 1;
    CLEAR_AREA( l_U483[0]._fU0, l_U483[0]._fU4, l_U483[0]._fU8, 50.00000000, 0 );
    CLEAR_AREA( l_U483[1]._fU0, l_U483[1]._fU4, l_U483[1]._fU8, 50.00000000, 0 );
    SWITCH_ROADS_OFF( l_U490[0]._fU0, l_U490[0]._fU4, l_U490[0]._fU8, l_U490[1]._fU0, l_U490[1]._fU4, l_U490[1]._fU8 );
    l_U1003[2] = 1;
    CLEAR_AREA( l_U374._fU0, l_U374._fU4, l_U374._fU8, 50.00000000, 0 );
    return;
}

void sub_20037()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
    {
        GET_CAR_CHAR_IS_USING( sub_5671(), ref uVar5 );
        GET_CAR_MODEL( uVar5, ref uVar6 );
        if (IS_THIS_MODEL_A_CAR( uVar6 ))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_5671(), 0 );
        }
        if (IS_THIS_MODEL_A_BIKE( uVar6 ))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_5671(), 1 );
        }
    }
    if (DOES_BLIP_EXIST( l_U1226 ))
    {
        if (DOES_BLIP_EXIST( l_U736._fU100 ))
        {
            REMOVE_BLIP( l_U736._fU100 );
        }
    }
    else if (NOT (DOES_BLIP_EXIST( l_U736._fU100 )))
    {
        sub_20225( ref l_U736 );
    }
    if (l_U354 == 4)
    {
        if (NOT l_U971[0])
        {
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (DOES_VEHICLE_EXIST( l_U675 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U675 ))
                        {
                            if (IS_CHAR_IN_CAR( l_U699, l_U675 ))
                            {
                                if (NOT (sub_5787( l_U1265 )))
                                {
                                    sub_20503( "E1J1_FOLLOW", ref l_U1265, 6, 1 );
                                    GET_GAME_TIMER( ref l_U630 );
                                    l_U971[0] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (l_U971[0])
        {
            if (NOT l_U971[2])
            {
                if (NOT (sub_5787( l_U1265 )))
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "J1_02", 7500, 1 );
                    l_U971[2] = 1;
                }
            }
        }
        if (NOT l_U1012)
        {
            if (NOT (DOES_BLIP_EXIST( l_U1235 )))
            {
                ADD_BLIP_FOR_COORD( l_U368._fU0, l_U368._fU4, l_U368._fU8, ref l_U1235 );
                SET_BLIP_AS_FRIENDLY( l_U1235, 1 );
                CHANGE_BLIP_DISPLAY( l_U1235, 2 );
                SET_ROUTE( l_U1235, 1 );
                if (l_U971[0])
                {
                    if (NOT l_U971[2])
                    {
                        if (NOT (sub_5787( l_U1265 )))
                        {
                            CLEAR_PRINTS();
                            PRINT_NOW( "J1_02", 7500, 1 );
                            l_U971[2] = 1;
                        }
                    }
                }
            }
        }
        else if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U1227 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U677, ref l_U1227 );
                        SET_BLIP_AS_FRIENDLY( l_U1227, 1 );
                        SET_ROUTE( l_U1227, 1 );
                    }
                }
                else if (DOES_BLIP_EXIST( l_U1227 ))
                {
                    REMOVE_BLIP( l_U1227 );
                }
                if (DOES_BLIP_EXIST( l_U1235 ))
                {
                    REMOVE_BLIP( l_U1235 );
                }
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                    {
                        if (DOES_BLIP_EXIST( l_U1227 ))
                        {
                            REMOVE_BLIP( l_U1227 );
                        }
                        if (DOES_BLIP_EXIST( l_U1235 ))
                        {
                            REMOVE_BLIP( l_U1235 );
                        }
                        l_U354 = 6;
                    }
                    else if (DOES_BLIP_EXIST( l_U1227 ))
                    {
                        REMOVE_BLIP( l_U1227 );
                    }
                    if (DOES_BLIP_EXIST( l_U1235 ))
                    {
                        REMOVE_BLIP( l_U1235 );
                    }
                    sub_22082();
                    l_U354 = 5;;
                }
            }
        }
    }
    if (l_U354 == 5)
    {
        if (l_U599 == 0)
        {
            if (DOES_BLIP_EXIST( l_U1235 ))
            {
                REMOVE_BLIP( l_U1235 );
            }
        }
        else
        {
            for ( l_U597 = 0; l_U597 < 3; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1244[l_U597] ))
                {
                    REMOVE_BLIP( l_U1244[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
                {
                    REMOVE_BLIP( l_U1237[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1229[l_U597] ))
                {
                    REMOVE_BLIP( l_U1229[l_U597] );
                }
                if (DOES_BLIP_EXIST( l_U1232[l_U597] ))
                {
                    REMOVE_BLIP( l_U1232[l_U597] );
                }
            }
        }
        if (l_U599 == 0)
        {
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                            {
                                if (DOES_BLIP_EXIST( l_U1226 ))
                                {
                                    REMOVE_BLIP( l_U1226 );
                                    CLEAR_PRINTS();
                                }
                                if (NOT (DOES_BLIP_EXIST( l_U1227 )))
                                {
                                    ADD_BLIP_FOR_CAR( l_U677, ref l_U1227 );
                                    SET_BLIP_AS_FRIENDLY( l_U1227, 1 );
                                    if (NOT l_U971[7])
                                    {
                                        PRINT_NOW( "J1_07", 7500, 1 );
                                        l_U971[7] = 1;
                                    }
                                }
                            }
                            else if (DOES_BLIP_EXIST( l_U1227 ))
                            {
                                REMOVE_BLIP( l_U1227 );
                                CLEAR_PRINTS();
                            }
                            if (NOT (DOES_BLIP_EXIST( l_U1226 )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U699, ref l_U1226 );
                                SET_BLIP_AS_FRIENDLY( l_U1226, 1 );
                                SET_ROUTE( l_U1226, 1 );
                                GET_PLAYER_GROUP( sub_5742(), ref l_U1264 );
                                if (NOT (IS_GROUP_MEMBER( l_U699, l_U1264 )))
                                {
                                    SET_GROUP_MEMBER( l_U1264, l_U699 );
                                    if (NOT l_U971[7])
                                    {
                                        PRINT_NOW( "J1_26", 7500, 1 );
                                        l_U971[7] = 1;
                                    }
                                }
                            }
                        }
                        else if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                        {
                            if (DOES_BLIP_EXIST( l_U1226 ))
                            {
                                REMOVE_BLIP( l_U1226 );
                                CLEAR_PRINTS();
                            }
                            if (NOT (DOES_BLIP_EXIST( l_U1227 )))
                            {
                                ADD_BLIP_FOR_CAR( l_U677, ref l_U1227 );
                                SET_BLIP_AS_FRIENDLY( l_U1227, 1 );
                            }
                        }
                        else if (DOES_BLIP_EXIST( l_U1226 ))
                        {
                            REMOVE_BLIP( l_U1226 );
                            CLEAR_PRINTS();
                        }
                        if (DOES_BLIP_EXIST( l_U1227 ))
                        {
                            REMOVE_BLIP( l_U1227 );
                            CLEAR_PRINTS();
                        }
                        l_U354 = 6;;;
                    }
                }
            }
        }
        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "J1_H1" )))
            {
                if (NOT l_U971[12])
                {
                    PRINT_NOW( "J1_12", 7500, 1 );
                    l_U971[12] = 1;
                }
            }
        }
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                {
                    if (DOES_BLIP_EXIST( l_U1226 ))
                    {
                        REMOVE_BLIP( l_U1226 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U1227 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U677, ref l_U1227 );
                        SET_BLIP_AS_FRIENDLY( l_U1227, 1 );
                    }
                }
                else if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                {
                    if (DOES_BLIP_EXIST( l_U1227 ))
                    {
                        REMOVE_BLIP( l_U1227 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U1226 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U699, ref l_U1226 );
                        SET_BLIP_AS_FRIENDLY( l_U1226, 1 );
                        CLEAR_PRINTS();
                        if (l_U599 == 0)
                        {
                            if (NOT l_U971[4])
                            {
                                PRINT_NOW( "J1_04", 7500, 1 );
                                l_U971[4] = 1;
                            }
                        }
                        else if (NOT l_U971[13])
                        {
                            if (l_U1049[1])
                            {
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "J1_H1" )))
                                {
                                    PRINT_NOW( "J1_13", 7500, 1 );
                                    l_U971[13] = 1;
                                }
                            }
                        }
                    }
                }
                else if (l_U599 == 0)
                {
                    if (DOES_BLIP_EXIST( l_U1226 ))
                    {
                        REMOVE_BLIP( l_U1226 );
                    }
                    if (DOES_BLIP_EXIST( l_U1227 ))
                    {
                        REMOVE_BLIP( l_U1227 );
                    }
                    l_U354 = 6;
                }
                else if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    FREEZE_CAR_POSITION( l_U677, 0 );
                    if (DOES_BLIP_EXIST( l_U1226 ))
                    {
                        REMOVE_BLIP( l_U1226 );
                    }
                    l_U354 = 10;
                };;;;
            }
        }
    }
    if (l_U354 == 6)
    {
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                {
                    if (DOES_BLIP_EXIST( l_U1236 ))
                    {
                        REMOVE_BLIP( l_U1236 );
                    }
                    if (DOES_BLIP_EXIST( l_U1226 ))
                    {
                        REMOVE_BLIP( l_U1226 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U1227 )))
                    {
                        CLEAR_PRINTS();
                        ADD_BLIP_FOR_CAR( l_U677, ref l_U1227 );
                        SET_BLIP_AS_FRIENDLY( l_U1227, 1 );
                        if (NOT l_U971[7])
                        {
                            PRINT_NOW( "J1_07", 7500, 1 );
                            l_U971[7] = 1;
                        }
                    }
                }
                else if (DOES_CHAR_EXIST( l_U699 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                        {
                            if (DOES_BLIP_EXIST( l_U1227 ))
                            {
                                REMOVE_BLIP( l_U1227 );
                            }
                            if (DOES_BLIP_EXIST( l_U1236 ))
                            {
                                REMOVE_BLIP( l_U1236 );
                            }
                            if (NOT (DOES_BLIP_EXIST( l_U1226 )))
                            {
                                CLEAR_PRINTS();
                                ADD_BLIP_FOR_CHAR( l_U699, ref l_U1226 );
                                SET_BLIP_AS_FRIENDLY( l_U1226, 1 );
                                if (NOT l_U971[7])
                                {
                                    PRINT_NOW( "J1_26", 7500, 1 );
                                    l_U971[7] = 1;
                                }
                            }
                        }
                        else if (NOT l_U1158)
                        {
                            if (NOT l_U1108[0])
                            {
                                sub_5971( ref l_U1265, 0 );
                                sub_20503( "E1J1_AOD", ref l_U1265, 6, 1 );
                                l_U1108[0] = 1;
                            }
                            else if (NOT (sub_5787( l_U1265 )))
                            {
                                if (NOT l_U971[6])
                                {
                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                    {
                                        PRINT_NOW( "J1_06", 7500, 1 );
                                        l_U971[6] = 1;
                                        GET_GAME_TIMER( ref l_U623 );
                                        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                                    }
                                }
                            }
                        }
                        else if (NOT l_U1108[4])
                        {
                            if (NOT (sub_5787( l_U1265 )))
                            {
                                sub_20503( "E1J1_WORRY", ref l_U1265, 6, 1 );
                                l_U1108[4] = 1;
                            }
                        }
                        else if (NOT l_U1108[0])
                        {
                            if (NOT (sub_5787( l_U1265 )))
                            {
                                sub_20503( "E1J1_AOD", ref l_U1265, 6, 1 );
                                l_U1108[0] = 1;
                            }
                        }
                        else if (NOT (sub_5787( l_U1265 )))
                        {
                            if (NOT l_U971[6])
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    PRINT_NOW( "J1_06", 7500, 1 );
                                    l_U971[6] = 1;
                                    GET_GAME_TIMER( ref l_U623 );
                                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                                }
                            }
                        };;;;
                        if (DOES_BLIP_EXIST( l_U1226 ))
                        {
                            REMOVE_BLIP( l_U1226 );
                        }
                        if (DOES_BLIP_EXIST( l_U1227 ))
                        {
                            REMOVE_BLIP( l_U1227 );
                        }
                        if (NOT (LOCATE_CAR_3D( l_U677, l_U396._fU0, l_U396._fU4, l_U396._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U1236 )))
                            {
                                CLEAR_PRINTS();
                                ADD_BLIP_FOR_COORD( l_U396._fU0, l_U396._fU4, l_U396._fU8, ref l_U1236 );
                                SET_ROUTE( l_U1236, 1 );
                            }
                        }
                        else if (DOES_BLIP_EXIST( l_U1236 ))
                        {
                            REMOVE_BLIP( l_U1236 );
                        }
                        if (DOES_BLIP_EXIST( l_U1227 ))
                        {
                            REMOVE_BLIP( l_U1227 );
                        }
                        if (DOES_BLIP_EXIST( l_U1226 ))
                        {
                            REMOVE_BLIP( l_U1226 );
                        }
                        if (DOES_VEHICLE_EXIST( l_U677 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U677 ))
                            {
                                if (LOCATE_CAR_3D( l_U677, l_U396._fU0, l_U396._fU4, l_U396._fU8, 2.50000000, 2.50000000, 2.50000000, 0 ))
                                {
                                    if (DOES_CHAR_EXIST( l_U699 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                                        {
                                            if (IS_CHAR_SITTING_IN_CAR( l_U699, l_U677 ))
                                            {
                                                if (IS_CHAR_SITTING_IN_CAR( sub_5671(), l_U677 ))
                                                {
                                                    if (NOT l_U1013)
                                                    {
                                                        l_U1013 = 1;
                                                        l_U1069 = 1;
                                                        l_U354 = 7;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        };;;
                    }
                }
            }
        }
    }
    if (l_U354 == 8)
    {
        if (DOES_BLIP_EXIST( l_U1236 ))
        {
            REMOVE_BLIP( l_U1236 );
        }
        if (l_U971[9])
        {
            if (NOT (sub_5787( l_U1265 )))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT l_U1028)
                    {
                        if (NOT l_U971[8])
                        {
                            PRINT_NOW( "J1_08", 7500, 1 );
                            l_U971[8] = 1;
                        }
                    }
                    else if (NOT l_U971[10])
                    {
                        PRINT_NOW( "J1_10", 7500, 1 );
                        l_U971[10] = 1;
                    }
                }
            }
        }
        else if (DOES_CHAR_EXIST( l_U699 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT (sub_5787( l_U1265 )))
                    {
                        sub_20503( "E1J1_BIKES", ref l_U1265, 6, 1 );
                        l_U971[9] = 1;
                    }
                }
            }
        }
        if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
        {
            GET_CAR_CHAR_IS_USING( sub_5671(), ref l_U685 );
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (NOT l_U1028)
                {
                    if (l_U685 == l_U678[l_U597])
                    {
                        if (NOT l_U1021[l_U597])
                        {
                            if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                            {
                                l_U1028 = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (l_U1028)
        {
            l_U1028 = 0;
        }
        if (NOT (l_U599 > 3))
        {
            for ( l_U597 = 0; l_U597 < 9; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1254[l_U597] ))
                {
                    REMOVE_BLIP( l_U1254[l_U597] );
                }
            }
            if (DOES_BLIP_EXIST( l_U1227 ))
            {
                REMOVE_BLIP( l_U1227 );
                CLEAR_PRINTS();
            }
            if (l_U1028)
            {
                for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                {
                    if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
                    {
                        CLEAR_PRINTS();
                        REMOVE_BLIP( l_U1237[l_U597] );
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U1228 )))
                {
                    if (IS_VEH_DRIVEABLE( l_U677 ))
                    {
                        CLEAR_PRINTS();
                        GET_CAR_COORDINATES( l_U677, ref uVar2, ref uVar3, ref uVar4 );
                        ADD_BLIP_FOR_COORD( uVar2, uVar3, uVar4, ref l_U1228 );
                        CHANGE_BLIP_DISPLAY( l_U1228, 2 );
                    }
                }
                if (NOT l_U971[10])
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "J1_10", 7500, 1 );
                    l_U971[10] = 1;
                }
            }
            else if (DOES_BLIP_EXIST( l_U1228 ))
            {
                REMOVE_BLIP( l_U1228 );
                CLEAR_PRINTS();
            }
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (NOT (DOES_BLIP_EXIST( l_U1237[l_U597] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                    {
                        if (NOT l_U1021[l_U597])
                        {
                            ADD_BLIP_FOR_CAR( l_U678[l_U597], ref l_U1237[l_U597] );
                            SET_BLIP_AS_FRIENDLY( l_U1237[l_U597], 1 );
                        }
                    }
                }
                else if (NOT (IS_VEH_DRIVEABLE( l_U678[l_U597] )))
                {
                    REMOVE_BLIP( l_U1237[l_U597] );
                }
            }
        }
        if ((l_U599 > 3) AND (NOT l_U1125))
        {
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
                {
                    REMOVE_BLIP( l_U1237[l_U597] );
                }
            }
            if (DOES_BLIP_EXIST( l_U1228 ))
            {
                REMOVE_BLIP( l_U1228 );
            }
            for ( l_U597 = 0; l_U597 < 9; l_U597++ )
            {
                if (DOES_CHAR_EXIST( l_U717[l_U597] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U717[l_U597] )))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U1254[l_U597] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U717[l_U597], ref l_U1254[l_U597] );
                            SET_BLIP_AS_FRIENDLY( l_U1254[l_U597], 0 );
                        }
                        if (NOT l_U1108[3])
                        {
                            sub_5971( ref l_U1265, 0 );
                            sub_20503( "E1J1_HELP", ref l_U1265, 6, 1 );
                            l_U1108[3] = 1;
                        }
                        else if (NOT (sub_5787( l_U1265 )))
                        {
                            if (NOT l_U971[16])
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    PRINT_NOW( "J1_16", 7500, 1 );
                                    l_U971[16] = 1;
                                }
                            }
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U1254[l_U597] ))
                    {
                        REMOVE_BLIP( l_U1254[l_U597] );
                    }
                }
                else if (DOES_BLIP_EXIST( l_U1254[l_U597] ))
                {
                    REMOVE_BLIP( l_U1254[l_U597] );
                }
            }
        }
        if ((l_U599 > 3) AND (l_U1125))
        {
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
                {
                    REMOVE_BLIP( l_U1237[l_U597] );
                }
            }
            if (DOES_BLIP_EXIST( l_U1228 ))
            {
                REMOVE_BLIP( l_U1228 );
            }
            for ( l_U597 = 0; l_U597 < 9; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1254[l_U597] ))
                {
                    REMOVE_BLIP( l_U1254[l_U597] );
                }
            }
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "J1_H1" )))
                {
                    if (NOT l_U971[12])
                    {
                        PRINT_NOW( "J1_12", 7500, 1 );
                        l_U971[12] = 1;
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                    {
                        if (DOES_BLIP_EXIST( l_U1226 ))
                        {
                            REMOVE_BLIP( l_U1226 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U1227 )))
                        {
                            ADD_BLIP_FOR_CAR( l_U677, ref l_U1227 );
                            SET_BLIP_AS_FRIENDLY( l_U1227, 1 );
                        }
                    }
                    else if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                    {
                        if (DOES_BLIP_EXIST( l_U1227 ))
                        {
                            REMOVE_BLIP( l_U1227 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U1226 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U699, ref l_U1226 );
                            SET_BLIP_AS_FRIENDLY( l_U1226, 1 );
                            CLEAR_PRINTS();
                            if (NOT l_U971[13])
                            {
                                PRINT_NOW( "J1_13", 7500, 1 );
                                l_U971[13] = 1;
                            }
                        }
                    }
                    else if (IS_VEH_DRIVEABLE( l_U677 ))
                    {
                        if (DOES_BLIP_EXIST( l_U1226 ))
                        {
                            REMOVE_BLIP( l_U1226 );
                        }
                        if (DOES_CHAR_EXIST( l_U699 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U699 )))
                            {
                                SET_CHAR_PROOFS( l_U699, 0, 0, 0, 0, 0 );
                            }
                        }
                        l_U354 = 10;
                    };;;
                }
            }
        }
    }
    if (l_U354 == 9)
    {
        for ( l_U597 = 0; l_U597 < 5; l_U597++ )
        {
            if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
            {
                REMOVE_BLIP( l_U1237[l_U597] );
            }
        }
        if (DOES_BLIP_EXIST( l_U1227 ))
        {
            REMOVE_BLIP( l_U1227 );
        }
        for ( l_U597 = 0; l_U597 < 2; l_U597++ )
        {
            if (DOES_BLIP_EXIST( l_U1229[l_U597] ))
            {
                REMOVE_BLIP( l_U1229[l_U597] );
            }
            if (DOES_BLIP_EXIST( l_U1232[l_U597] ))
            {
                REMOVE_BLIP( l_U1232[l_U597] );
            }
        }
        for ( l_U597 = 0; l_U597 < 9; l_U597++ )
        {
            if (DOES_CHAR_EXIST( l_U717[l_U597] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U717[l_U597] )))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U1254[l_U597] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U717[l_U597], ref l_U1254[l_U597] );
                        SET_BLIP_AS_FRIENDLY( l_U1254[l_U597], 0 );
                    }
                    if (NOT l_U1108[3])
                    {
                        sub_5971( ref l_U1265, 0 );
                        sub_20503( "E1J1_HELP", ref l_U1265, 6, 1 );
                        l_U1108[3] = 1;
                    }
                    else if (NOT (sub_5787( l_U1265 )))
                    {
                        if (NOT l_U971[16])
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                PRINT_NOW( "J1_16", 7500, 1 );
                                l_U971[16] = 1;
                            }
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U1254[l_U597] ))
                {
                    REMOVE_BLIP( l_U1254[l_U597] );
                }
            }
            else if (DOES_BLIP_EXIST( l_U1254[l_U597] ))
            {
                REMOVE_BLIP( l_U1254[l_U597] );
            }
        }
    }
    if (l_U354 == 11)
    {
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (IS_CHAR_SITTING_IN_CAR( sub_5671(), l_U677 )))
                {
                    if (DOES_BLIP_EXIST( l_U1248 ))
                    {
                        REMOVE_BLIP( l_U1248 );
                    }
                    if (DOES_BLIP_EXIST( l_U1226 ))
                    {
                        REMOVE_BLIP( l_U1226 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U1227 )))
                    {
                        CLEAR_PRINTS();
                        ADD_BLIP_FOR_CAR( l_U677, ref l_U1227 );
                        SET_BLIP_AS_FRIENDLY( l_U1227, 1 );
                        if (NOT l_U971[15])
                        {
                            PRINT_NOW( "J1_15", 7500, 1 );
                            l_U971[15] = 1;
                        }
                    }
                }
                else if (DOES_CHAR_EXIST( l_U699 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                        {
                            if (DOES_BLIP_EXIST( l_U1227 ))
                            {
                                REMOVE_BLIP( l_U1227 );
                            }
                            if (DOES_BLIP_EXIST( l_U1248 ))
                            {
                                REMOVE_BLIP( l_U1248 );
                            }
                            if (NOT (DOES_BLIP_EXIST( l_U1226 )))
                            {
                                CLEAR_PRINTS();
                                ADD_BLIP_FOR_CHAR( l_U699, ref l_U1226 );
                                SET_BLIP_AS_FRIENDLY( l_U1226, 1 );
                                if (NOT l_U971[13])
                                {
                                    if (NOT l_U971[20])
                                    {
                                        PRINT_NOW( "J1_20", 7500, 1 );
                                        l_U971[20] = 1;
                                    }
                                }
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), l_U572._fU0, l_U572._fU4, l_U572._fU8 + 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1 )))
                        {
                            ;
                        }
                        if (DOES_BLIP_EXIST( l_U1226 ))
                        {
                            REMOVE_BLIP( l_U1226 );
                        }
                        if (DOES_BLIP_EXIST( l_U1227 ))
                        {
                            REMOVE_BLIP( l_U1227 );
                        }
                        if (NOT l_U1108[1])
                        {
                            sub_5971( ref l_U1265, 0 );
                            sub_20503( "E1J1_BACK", ref l_U1265, 6, 1 );
                            l_U1108[1] = 1;
                        }
                        else if (NOT (sub_5787( l_U1265 )))
                        {
                            if (NOT l_U971[14])
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    PRINT_NOW( "J1_14", 7500, 1 );
                                    l_U971[14] = 1;
                                }
                            }
                        }
                        if (NOT (LOCATE_CAR_3D( l_U677, l_U572._fU0, l_U572._fU4, l_U572._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U1248 )))
                            {
                                CLEAR_PRINTS();
                                ADD_BLIP_FOR_COORD( l_U572._fU0, l_U572._fU4, l_U572._fU8, ref l_U1248 );
                                SET_ROUTE( l_U1248, 1 );
                            }
                        }
                        else if (DOES_VEHICLE_EXIST( l_U677 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U677 ))
                            {
                                if (DOES_CHAR_EXIST( l_U699 ))
                                {
                                    if (IS_CHAR_SITTING_IN_CAR( l_U699, l_U677 ))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( sub_5671(), l_U677 ))
                                        {
                                            if (DOES_BLIP_EXIST( l_U1248 ))
                                            {
                                                REMOVE_BLIP( l_U1248 );
                                            }
                                            if (DOES_BLIP_EXIST( l_U1227 ))
                                            {
                                                REMOVE_BLIP( l_U1227 );
                                            }
                                            if (DOES_BLIP_EXIST( l_U1227 ))
                                            {
                                                REMOVE_BLIP( l_U1227 );
                                            }
                                            l_U1064 = 0;
                                            l_U1069 = 1;
                                            l_U354 = 15;
                                        }
                                    }
                                }
                            }
                        };;;
                    }
                }
            }
        }
    }
    if (l_U354 == 12)
    {
        if (l_U1158)
        {
            l_U368 = {-1281.29100000, 689.62350000, 14.39700000};
        }
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                {
                    if (DOES_BLIP_EXIST( l_U1235 ))
                    {
                        REMOVE_BLIP( l_U1235 );
                    }
                    if (DOES_BLIP_EXIST( l_U1226 ))
                    {
                        REMOVE_BLIP( l_U1226 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U1227 )))
                    {
                        CLEAR_PRINTS();
                        ADD_BLIP_FOR_CAR( l_U677, ref l_U1227 );
                        SET_BLIP_AS_FRIENDLY( l_U1227, 1 );
                        if (NOT l_U971[15])
                        {
                            PRINT_NOW( "J1_15", 7500, 1 );
                            l_U971[15] = 1;
                        }
                    }
                }
                else if (DOES_CHAR_EXIST( l_U699 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                        {
                            if (DOES_BLIP_EXIST( l_U1227 ))
                            {
                                REMOVE_BLIP( l_U1227 );
                            }
                            if (DOES_BLIP_EXIST( l_U1235 ))
                            {
                                REMOVE_BLIP( l_U1235 );
                            }
                            if (NOT (DOES_BLIP_EXIST( l_U1226 )))
                            {
                                CLEAR_PRINTS();
                                ADD_BLIP_FOR_CHAR( l_U699, ref l_U1226 );
                                SET_BLIP_AS_FRIENDLY( l_U1226, 1 );
                                if (NOT l_U971[13])
                                {
                                    if (NOT l_U971[20])
                                    {
                                        PRINT_NOW( "J1_20", 7500, 1 );
                                        l_U971[20] = 1;
                                    }
                                }
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), l_U368._fU0, l_U368._fU4, l_U368._fU8 + 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1 )))
                        {
                            ;
                        }
                        if (DOES_BLIP_EXIST( l_U1226 ))
                        {
                            REMOVE_BLIP( l_U1226 );
                        }
                        if (DOES_BLIP_EXIST( l_U1227 ))
                        {
                            REMOVE_BLIP( l_U1227 );
                        }
                        if (NOT l_U1108[1])
                        {
                            sub_5971( ref l_U1265, 0 );
                            sub_20503( "E1J1_2GO", ref l_U1265, 6, 1 );
                            l_U1108[1] = 1;
                        }
                        else if (NOT (sub_5787( l_U1265 )))
                        {
                            if (NOT l_U971[14])
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    PRINT_NOW( "J1_14", 7500, 1 );
                                    l_U971[14] = 1;
                                }
                            }
                        }
                        if (NOT (LOCATE_CAR_3D( l_U677, l_U368._fU0, l_U368._fU4, l_U368._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U1235 )))
                            {
                                CLEAR_PRINTS();
                                ADD_BLIP_FOR_COORD( l_U368._fU0, l_U368._fU4, l_U368._fU8, ref l_U1235 );
                                SET_ROUTE( l_U1235, 1 );
                            }
                        }
                        else if (DOES_VEHICLE_EXIST( l_U677 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U677 ))
                            {
                                if (DOES_CHAR_EXIST( l_U699 ))
                                {
                                    if (IS_CHAR_SITTING_IN_CAR( l_U699, l_U677 ))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( sub_5671(), l_U677 ))
                                        {
                                            TASK_PAUSE( l_U699, 50000 );
                                            TASK_PAUSE( sub_5671(), 50000 );
                                            if (DOES_BLIP_EXIST( l_U1235 ))
                                            {
                                                REMOVE_BLIP( l_U1235 );
                                            }
                                            if (DOES_BLIP_EXIST( l_U1227 ))
                                            {
                                                REMOVE_BLIP( l_U1227 );
                                            }
                                            if (DOES_BLIP_EXIST( l_U1226 ))
                                            {
                                                REMOVE_BLIP( l_U1226 );
                                            }
                                            l_U1064 = 0;
                                            l_U1069 = 1;
                                            l_U354 = 15;
                                        }
                                    }
                                }
                            }
                        };;;
                    }
                }
            }
        }
    }
    if (l_U354 == 13)
    {
        if (DOES_BLIP_EXIST( l_U1235 ))
        {
            REMOVE_BLIP( l_U1235 );
        }
        if (NOT l_U1157)
        {
            if (NOT l_U971[30])
            {
                if (DOES_VEHICLE_EXIST( l_U695[0] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U695[0] ))
                    {
                        if (DOES_CHAR_EXIST( l_U699 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U699 )))
                            {
                                if (IS_CHAR_IN_CAR( l_U699, l_U695[0] ))
                                {
                                    if (NOT (sub_5787( l_U1265 )))
                                    {
                                        sub_20503( "E1J1_BACK", ref l_U1265, 6, 1 );
                                        l_U971[30] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (DOES_VEHICLE_EXIST( l_U695[1] ))
            {
                if (IS_VEH_DRIVEABLE( l_U695[1] ))
                {
                    if (IS_CHAR_IN_CAR( sub_5671(), l_U695[1] ))
                    {
                        if (DOES_BLIP_EXIST( l_U1225 ))
                        {
                            REMOVE_BLIP( l_U1225 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U1248 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U572._fU0, l_U572._fU4, l_U572._fU8, ref l_U1248 );
                            SET_ROUTE( l_U1248, 1 );
                            CLEAR_PRINTS();
                        }
                        if (NOT l_U971[30])
                        {
                            if (NOT (sub_5787( l_U1265 )))
                            {
                                l_U971[30] = 1;
                            }
                        }
                        else if (NOT (sub_5787( l_U1265 )))
                        {
                            if (NOT l_U971[28])
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    PRINT_NOW( "J1_28", 7500, 1 );
                                    l_U971[28] = 1;
                                }
                            }
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U1248 ))
                    {
                        REMOVE_BLIP( l_U1248 );
                        CLEAR_PRINTS();
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U1225 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U695[1], ref l_U1225 );
                        SET_BLIP_AS_FRIENDLY( l_U1225, 1 );
                    }
                    if (l_U971[30])
                    {
                        if (NOT (sub_5787( l_U1265 )))
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                if (NOT l_U971[29])
                                {
                                    PRINT_NOW( "J1_29", 7500, 1 );
                                    l_U971[29] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (NOT l_U971[30])
        {
            if (DOES_VEHICLE_EXIST( l_U675 ))
            {
                if (IS_VEH_DRIVEABLE( l_U675 ))
                {
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if (IS_CHAR_IN_CAR( l_U699, l_U675 ))
                            {
                                if (NOT (sub_5787( l_U1265 )))
                                {
                                    sub_20503( "E1J1_BACK", ref l_U1265, 6, 1 );
                                    l_U971[30] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U676 ))
        {
            if (IS_VEH_DRIVEABLE( l_U676 ))
            {
                if (IS_CHAR_IN_CAR( sub_5671(), l_U676 ))
                {
                    if (DOES_BLIP_EXIST( l_U1225 ))
                    {
                        REMOVE_BLIP( l_U1225 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U1248 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U572._fU0, l_U572._fU4, l_U572._fU8, ref l_U1248 );
                        SET_ROUTE( l_U1248, 1 );
                        CLEAR_PRINTS();
                    }
                    if (NOT l_U971[30])
                    {
                        if (NOT (sub_5787( l_U1265 )))
                        {
                            l_U971[30] = 1;
                        }
                    }
                    else if (NOT (sub_5787( l_U1265 )))
                    {
                        if (NOT l_U971[28])
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                PRINT_NOW( "J1_28", 7500, 1 );
                                l_U971[28] = 1;
                            }
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U1248 ))
                {
                    REMOVE_BLIP( l_U1248 );
                    CLEAR_PRINTS();
                }
                if (NOT (DOES_BLIP_EXIST( l_U1225 )))
                {
                    ADD_BLIP_FOR_CAR( l_U676, ref l_U1225 );
                    SET_BLIP_AS_FRIENDLY( l_U1225, 1 );
                }
                if (l_U971[30])
                {
                    if (NOT (sub_5787( l_U1265 )))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U971[29])
                            {
                                PRINT_NOW( "J1_29", 7500, 1 );
                                l_U971[29] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_20225(int iParam0)
{
    if (l_U139)
    {
        ADD_BLIP_FOR_CHAR( iParam0->_fU0, iParam0 + 100 );
        SET_BLIP_AS_FRIENDLY( iParam0->_fU100, 1 );
        CHANGE_BLIP_PRIORITY( iParam0->_fU100, 0 );
        SET_BLIP_AS_SHORT_RANGE( iParam0->_fU100, 1 );
        CHANGE_BLIP_SCALE( iParam0->_fU100, 0.50000000 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU100, 5 );
    }
    return;
}

void sub_20503(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_20524( uParam0, ref l_U22._fU0, uParam1, uParam2, uParam3 );
}

void sub_20524(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_20578( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_20578(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_20600( iParam1 )))
    {
        return 0;
    }
    l_U22._fU384 = 0;
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_21276( ref g_U8947, ref l_U22 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_20600(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_5899( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_5899( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_5899( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_21276(int iParam0, int iParam1)
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

void sub_22082()
{
    if (NOT l_U1062)
    {
        if (NOT (IS_CHAR_INJURED( l_U699 )))
        {
            if (IS_VEH_DRIVEABLE( l_U675 ))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U699, l_U675 )))
                {
                    WARP_CHAR_INTO_CAR( l_U699, l_U675 );
                }
            }
        }
        if (NOT (LOCATE_CHAR_IN_CAR_2D( l_U699, l_U525._fU0, l_U525._fU4, 5.00000000, 5.00000000, 0 )))
        {
            SET_CAR_HEADING( l_U675, l_U662 );
            SET_CHAR_COORDINATES( l_U699, l_U525._fU0, l_U525._fU4, l_U525._fU8 );
        }
        if (NOT l_U1030)
        {
            l_U1030 = 1;
        }
        l_U1062 = 1;
    }
    CLEAR_CHAR_TASKS( l_U699 );
    if (DOES_BLIP_EXIST( l_U736._fU100 ))
    {
        REMOVE_BLIP( l_U736._fU100 );
    }
    return;
}

void sub_31565()
{
    unknown uVar2;
    float fVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (DOES_CHAR_EXIST( l_U699 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U699 )))
        {
            if (IS_CHAR_IN_WATER( l_U699 ))
            {
                GET_CHAR_HEALTH( l_U699, ref iVar4 );
                if (NOT (iVar4 < 200))
                {
                    SET_CHAR_HEALTH( l_U699, 200 );
                }
            }
        }
    }
    if (l_U354 == 4)
    {
        if (DOES_CHAR_EXIST( l_U699 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U699, l_U371._fU0, l_U371._fU4, l_U371._fU8, 15.00000000, 15.00000000, 15.00000000, 0 )))
                {
                    sub_31773( ref l_U736, 0 );
                    sub_55889( ref l_U736._fU0 );
                    sub_56563( ref l_U736, l_U371._fU0, l_U371._fU4, l_U371._fU8, 0 );
                    if ((l_U1030) || (l_U1062))
                    {
                        if (NOT l_U1073[0])
                        {
                            if (DOES_VEHICLE_EXIST( l_U675 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U675 ))
                                {
                                    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U675, 0 );
                                    l_U1073[0] = 1;
                                }
                            }
                        }
                        sub_57043( ref l_U736, 7.50000000 );
                    }
                }
                else
                {
                    sub_57072();
                    if (DOES_VEHICLE_EXIST( l_U677 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U677 ))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U699 ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                                {
                                    GET_CAR_CHAR_IS_USING( l_U699, ref uVar5 );
                                    if (DOES_VEHICLE_EXIST( uVar5 ))
                                    {
                                        if (IS_VEH_DRIVEABLE( uVar5 ))
                                        {
                                            GET_CAR_SPEED( uVar5, ref fVar3 );
                                            if (fVar3 < 1.00000000)
                                            {
                                                TASK_LEAVE_CAR( l_U699, uVar5 );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U699, 11, ref l_U1167 );
                                if (l_U1167 == 7)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    TASK_ENTER_CAR_AS_PASSENGER( l_U699, l_U677, -2, 0 );
                                }
                            }
                            else if (DOES_BLIP_EXIST( l_U736._fU100 ))
                            {
                                ;
                            };;;
                        }
                    }
                }
            }
        }
    }
    if (l_U354 == 5)
    {
        sub_57539( l_U699 );
        if (l_U599 == 0)
        {
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    MODIFY_CHAR_MOVE_BLEND_RATIO( l_U699, 1.00000000 );
                }
            }
        }
    }
    if (l_U354 == 8)
    {
        if (DOES_CHAR_EXIST( l_U699 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                SET_CHAR_PROOFS( l_U699, 0, 0, 1, 0, 0 );
                if (NOT l_U1125)
                {
                    if (l_U599 == 0)
                    {
                        if (NOT l_U1130)
                        {
                            if (DOES_VEHICLE_EXIST( l_U677 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U677 ))
                                {
                                    if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                                    {
                                        GET_SCRIPT_TASK_STATUS( l_U699, 31, ref l_U1167 );
                                        if (l_U1167 == 7)
                                        {
                                            TASK_LEAVE_ANY_CAR( l_U699 );
                                        }
                                    }
                                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U699, l_U441._fU0, l_U441._fU4, l_U441._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
                                    {
                                        l_U1029 = 0;
                                        GET_SCRIPT_TASK_STATUS( l_U699, 27, ref l_U1167 );
                                        if (l_U1167 == 7)
                                        {
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U699, l_U441._fU0, l_U441._fU4, l_U441._fU8, 3, 50000, 1.00000000 );
                                        }
                                    }
                                    else if (NOT l_U1029)
                                    {
                                        if (NOT (IS_PED_RAGDOLL( l_U699 )))
                                        {
                                            TASK_ACHIEVE_HEADING( l_U699, l_U651 );
                                        }
                                        SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U699, 1 );
                                        l_U1029 = 1;
                                        GET_GAME_TIMER( ref l_U619 );
                                    }
                                    if (l_U1138)
                                    {
                                        TASK_PLAY_ANIM( l_U699, "Thumbs_up", "missjim_1", 12.00000000, 0, 0, 0, 0, -1 );
                                        l_U1138 = 0;
                                        GET_GAME_TIMER( ref l_U619 );
                                    }
                                    else
                                    {
                                        GET_GAME_TIMER( ref l_U620 );
                                        l_U621 = l_U620 - l_U619;
                                        if (l_U621 > 10000)
                                        {
                                            if (NOT l_U1138)
                                            {
                                                if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( sub_5671(), l_U699 ))
                                                {
                                                    l_U1138 = 1;
                                                }
                                            }
                                        }
                                        else if (l_U1138 == 1)
                                        {
                                            l_U1138 = 0;
                                        }
                                        GET_SCRIPT_TASK_STATUS( l_U699, 80, ref l_U1167 );
                                        if (l_U1167 == 7)
                                        {
                                            TASK_PLAY_ANIM( l_U699, "lookaround", "missjim_1", 12.00000000, 1, 0, 0, 0, -1 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (NOT l_U1125)
                {
                    if (l_U599 > 0)
                    {
                        if (NOT l_U1130)
                        {
                            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U699, l_U441._fU0, l_U441._fU4, l_U441._fU8, 3.00000000, 3.00000000, 3.00000000, 0 )))
                            {
                                l_U1029 = 0;
                                GET_SCRIPT_TASK_STATUS( l_U699, 27, ref l_U1167 );
                                if (l_U1167 == 7)
                                {
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U699, l_U441._fU0, l_U441._fU4, l_U441._fU8, 3, 50000, 1.00000000 );
                                }
                            }
                            else if (NOT l_U1029)
                            {
                                if (NOT (IS_PED_RAGDOLL( l_U699 )))
                                {
                                    TASK_ACHIEVE_HEADING( l_U699, l_U651 );
                                }
                                SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U699, 1 );
                                l_U1029 = 1;
                                GET_GAME_TIMER( ref l_U619 );
                            }
                            GET_SCRIPT_TASK_STATUS( l_U699, 117, ref l_U1167 );
                            if (l_U1167 == 7)
                            {
                                TASK_GUARD_CURRENT_POSITION( l_U699, 3.00000000, 3.00000000, 1 );
                            }
                        }
                    }
                }
                if (l_U1125)
                {
                    if (l_U599 < 4)
                    {
                        if (NOT l_U1130)
                        {
                            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U699, l_U441._fU0, l_U441._fU4, l_U441._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
                            {
                                l_U1029 = 0;
                                GET_SCRIPT_TASK_STATUS( l_U699, 27, ref l_U1167 );
                                if (l_U1167 == 7)
                                {
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U699, l_U441._fU0, l_U441._fU4, l_U441._fU8, 3, 50000, 1.00000000 );
                                }
                            }
                            else if (NOT l_U1029)
                            {
                                if (NOT (IS_PED_RAGDOLL( l_U699 )))
                                {
                                    TASK_ACHIEVE_HEADING( l_U699, l_U651 );
                                }
                                SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U699, 1 );
                                l_U1029 = 1;
                            }
                            if (l_U1138)
                            {
                                TASK_PLAY_ANIM( l_U699, "Thumbs_up", "missjim_1", 12.00000000, 0, 0, 0, 0, -1 );
                                l_U1138 = 0;
                                GET_GAME_TIMER( ref l_U619 );
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U620 );
                                l_U621 = l_U620 - l_U619;
                                if (l_U621 > 10000)
                                {
                                    if (NOT l_U1138)
                                    {
                                        if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( sub_5671(), l_U699 ))
                                        {
                                            l_U1138 = 1;
                                        }
                                    }
                                }
                                else if (l_U1138 == 1)
                                {
                                    l_U1138 = 0;
                                }
                                GET_SCRIPT_TASK_STATUS( l_U699, 80, ref l_U1167 );
                                if (l_U1167 == 7)
                                {
                                    TASK_PLAY_ANIM( l_U699, "lookaround", "missjim_1", 12.00000000, 1, 0, 0, 0, -1 );
                                }
                            }
                        }
                    }
                }
                if (l_U1125)
                {
                    if (l_U599 > 3)
                    {
                        if (NOT l_U1130)
                        {
                            l_U1130 = 1;
                        }
                    }
                }
                if (l_U1125)
                {
                    if (l_U1130)
                    {
                        if (DOES_VEHICLE_EXIST( l_U677 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U677 ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                                    {
                                        GET_SCRIPT_TASK_STATUS( l_U699, 11, ref l_U1167 );
                                        if (l_U1167 == 7)
                                        {
                                            TASK_ENTER_CAR_AS_PASSENGER( l_U699, l_U677, -2, 0 );
                                        }
                                    }
                                    else
                                    {
                                        sub_57539( l_U699 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U354 == 13)
    {
        if (NOT l_U1157)
        {
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U736._fU0 )))
                {
                    if (IS_VEH_DRIVEABLE( l_U695[0] ))
                    {
                        if (IS_CHAR_IN_CAR( l_U699, l_U695[0] ))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U699, l_U572._fU0, l_U572._fU4, l_U572._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                            {
                                sub_31773( ref l_U736, 0 );
                                sub_59660( ref l_U736, 20.00000000, 25.00000000, 1, 0 );
                                sub_55889( ref l_U736._fU0 );
                                sub_56563( ref l_U736, l_U447._fU0, l_U447._fU4, l_U447._fU8, 2 );
                                if (NOT l_U1063)
                                {
                                    sub_13172( ref l_U736, 2 );
                                    sub_13146( ref l_U736, l_U695[0], 0 );
                                    l_U1063 = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (DOES_CHAR_EXIST( l_U699 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U736._fU0 )))
            {
                if (IS_VEH_DRIVEABLE( l_U675 ))
                {
                    if (IS_CHAR_IN_CAR( l_U699, l_U675 ))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U699, l_U572._fU0, l_U572._fU4, l_U572._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                        {
                            sub_31773( ref l_U736, 0 );
                            sub_59660( ref l_U736, 20.00000000, 25.00000000, 1, 0 );
                            sub_55889( ref l_U736._fU0 );
                            sub_56563( ref l_U736, l_U447._fU0, l_U447._fU4, l_U447._fU8, 2 );
                            if (NOT l_U1063)
                            {
                                sub_13172( ref l_U736, 2 );
                                sub_13146( ref l_U736, l_U675, 0 );
                                l_U1063 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_31773(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_31820( iParam0->_fU92 );
            iParam0->_fU92 = 0;
        }
        if (DOES_BLIP_EXIST( iParam0->_fU100 ))
        {
            REMOVE_BLIP( iParam0->_fU100 );
        }
        return;
    }
    if (iParam0->_fU36 != 0)
    {
        if ((sub_32215( iParam0 )) == 2)
        {
            return;
        }
        sub_36536( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_38171( iParam0 );
        }
        if (sub_13185( iParam0, 1 ))
        {
            sub_42993( iParam0 + 0, 0 );
        }
        else
        {
            sub_42993( iParam0 + 0, 1 );
        }
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))
            {
                uVar4 = nil;
                STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
                if (NOT (IS_CAR_DEAD( uVar4 )))
                {
                    if ((IS_CAR_UPSIDEDOWN( uVar4 )) AND (NOT (IS_CAR_IN_AIR_PROPER( uVar4 ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    }
                }
            }
        }
    }
    switch (iParam0->_fU36)
    {
        case 2:
        iVar5 = sub_43284( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_13185( iParam0, 32 ))
            {
                sub_44255( iParam0, 3 );
            }
            else if (sub_13185( iParam0, 64 ))
            {
                if (sub_13185( iParam0, 1 ))
                {
                    sub_44255( iParam0, 5 );
                }
                else
                {
                    sub_44255( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_44356( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_45595( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46763( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46877( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46998( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_47298( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_47654( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_44356( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_45595( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46763( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46877( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10956 != 0) || (g_U10958 != 0))
        {
            if ((sub_36056( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_47913( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_48070( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_36056( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_44356( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_45595( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46763( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46877( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_43381( iParam0 )) > 30.00000000)
        {
            sub_55309( iParam0 );
        }
        else if ((sub_47913( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_35894( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_55394( iParam0 );
    }
    return;
}

void sub_31820(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_31831( uParam0 );
    if (iVar3 == -1)
    {
        return;
    }
    if (NOT g_U38937[iVar3]._fU4)
    {
        PRINTSTRING( "Recurring_Lost_Killed: marked as killed but wasn't in use: " );
        PRINTINT( iVar3 );
        PRINTNL();
        return;
    }
    g_U38937[iVar3]._fU0 = 0;
    return;
}

int sub_31831(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = 0;
    Result = 0;
    for ( Result = 0; Result < 13; Result++ )
    {
        if ((g_U38937[Result]._fU0) || (g_U38937[Result]._fU4))
        {
            iVar3++;
            if (iVar3 == iParam0)
            {
                return Result;
            }
        }
    }
    SCRIPT_ASSERT( "Get_Recurring_Lost_ArrayPos: Run out of alive Recurring Lost characters" );
    return -1;
}

int sub_32215(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_5671() )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_5671(), ref iVar4 );
    GET_DRIVER_OF_CAR( iVar3, ref iVar5 );
    if (iVar5 != iParam0->_fU0)
    {
        return 0;
    }
    GET_CAR_DOOR_LOCK_STATUS( iVar3, ref iVar6 );
    if (iVar6 != 1)
    {
        return 0;
    }
    if (iVar4 == iVar3)
    {
        if (NOT (((sub_32349( iParam0 + 0 )) == 3) AND ((sub_32993( iVar3 )) == sub_13412())))
        {
            if ((((sub_32349( iParam0 + 0 )) != 1) || ((sub_33051( iParam0->_fU0 )) == (sub_6878( 0 )))) || ((sub_33093( sub_5671() )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_5671() )))))
            {
                return 0;
            }
            else
            {
                GET_CAR_DOOR_LOCK_STATUS( iVar4, ref iVar7 );
                if (iVar7 != 1)
                {
                    return 0;
                }
            }
        }
        if ((sub_32349( iParam0 + 0 )) == 3)
        {
            sub_33212( iParam0->_fU0, "", sub_5671(), 26 );
        }
        else
        {
            sub_33212( sub_5671(), "", iParam0->_fU0, 37 );
        }
        return sub_35894( iParam0, 1, 1 );
    }
    return 0;
}

void sub_32349(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_32389( ref uVar3 );
    }
    return Result;
}

void sub_32389(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((((((uParam0^) == (sub_6878( 0 ))) || ((uParam0^) == (sub_6878( 1 )))) || ((uParam0^) == (sub_6878( 6 )))) || ((uParam0^) == (sub_6878( 7 )))) || ((uParam0^) == (sub_6878( 13 )))) || ((uParam0^) == (sub_6878( 16 ))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_6878( 15 ))) || ((uParam0^) == (sub_6878( 17 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

void sub_32993(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_33051(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_33093(unknown uParam0)
{
    return (IS_CHAR_IN_ANY_CAR( uParam0 )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )));
}

void sub_33212(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    boolean Result;
    unknown uVar7;
    int iVar8;

    Result = false;
    if (IS_CHAR_INJURED( iParam0 ))
    {
        PRINTSTRING( "PERFORM_BIKER_GESTURE: ped is injured\n" );
        return 0;
    }
    if (IS_STRING_NULL( uParam1 ))
    {
        Result = true;
    }
    else if (COMPARE_STRING( uParam1, "" ))
    {
        Result = true;
    }
    else if (NOT ((IS_CHAR_ON_ANY_BIKE( iParam0 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( iParam0 ))))
    {
        Result = true;
    }
    else
    {
        uVar7 = sub_33702( sub_33372( iParam0 ) );
        if (NOT (IS_STRING_NULL( uVar7 )))
        {
            if (HAVE_ANIMS_LOADED( uVar7 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0, uVar7, uParam1 )))
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( iParam0, uParam1, uVar7, 8.00000000, 0, 0, 0, 0, 0 );
                    Result = true;
                }
            }
        }
    };;;
    if (Result)
    {
        l_U163 = iParam0;
        l_U164 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_34046( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_5671())
            {
                iVar8 = sub_32349( ref iParam0 );
                if ((iVar8 == 1) AND (iParam2 != sub_5671()))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_5671(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_5671(), iParam2, sub_34046( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_5671(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_5671(), iParam0, sub_34046( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((iParam3 == 38) AND (IS_CHAR_MODEL( iParam0, sub_6878( 0 ) )))
            {
                if (l_U168)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_34310( iParam3 ), 1, 1, 2 );
            }
            l_U162 = iParam3;
        }
        GET_GAME_TIMER( ref l_U161 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U166, 2 );
            case 36: SET_BIT( ref l_U166, 1 );
            case 24:
            SET_BIT( ref l_U166, 0 );
            break;
            case 38:
            SET_BIT( ref l_U166, 6 );
            break;
        }
    }
    return Result;
}

void sub_33372(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_33425( uVar3 );
        }
    }
    return Result;
}

void sub_33425(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

void sub_33702(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "MISSBIKE_GESTFREE";
        break;
        case 1:
        Result = "MISSBIKE_GESTCHOP";
        break;
        case 2:
        Result = "MISSBIKE_GESTSPT";
        break;
        case 3:
        Result = "MISSBIKE_GESTSCOT";
        break;
        case 4:
        Result = "MISSBIKE_GESTDIRT";
        break;
    }
    return Result;
}

void sub_34046(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_34310(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "ABUSE_COPS";
        break;
        case 1:
        Result = "ABUSE_GENERIC_BIKER_PED";
        break;
        case 2:
        Result = "ABUSE_HOOKER";
        break;
        case 3:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST";
        break;
        case 4:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST_TRUCE";
        break;
        case 5:
        Result = "BIKE_CRASH_DRIVEN";
        break;
        case 6:
        Result = "BIKE_DRIVE_MORE_CAREFUL";
        break;
        case 7:
        Result = "BIKE_HIT_PED";
        break;
        case 8:
        Result = "BIKE_JUMP";
        break;
        case 9:
        Result = "BIKE_ON_FIRE";
        break;
        case 10:
        Result = "BIKE_OVERTAKE";
        break;
        case 11:
        Result = "BIKER_ACHIEVE_MISSION_OBJECTIVE";
        break;
        case 12:
        Result = "BIKER_CLIPS_ANOTHER_BIKE";
        break;
        case 13:
        Result = "BIKER_CLIPS_ANYTHING";
        break;
        case 14:
        Result = "BIKER_FALLING_BEHIND";
        break;
        case 15:
        Result = "BIKER_FALLS_BEHIND";
        break;
        case 16:
        Result = "BIKER_PASSENGER_SHOOT_GENERIC";
        break;
        case 17:
        Result = "BIKER_PLAYER_FALLS_BEHIND";
        break;
        case 18:
        Result = "COME_UNDER_ATTACK";
        break;
        case 19:
        Result = "FOLLOW_ME_GUYS";
        break;
        case 20:
        Result = "GENERIC_CELEBRATION";
        break;
        case 21:
        Result = "GET_A_MOVE_ON";
        break;
        case 22:
        Result = "GET_IN_COVER";
        break;
        case 23:
        Result = "GET_THE_HELL_OUT_OF_HERE";
        break;
        case 24:
        Result = "GET_WANTED_LEVEL";
        break;
        case 25:
        Result = "GREET_JOHNNY";
        break;
        case 26:
        Result = "JACKED_BY_PLAYER_LIKE";
        break;
        case 27:
        Result = "KEEP_SHOOTING";
        break;
        case 28:
        Result = "LOST_TAUNT_ANGELS_OF_DEATH";
        break;
        case 29:
        Result = "LOST_TAUNT_LOST";
        break;
        case 30:
        Result = "LOST_WHOOP";
        break;
        case 31:
        Result = "NEED_BIKE_NOT_CAR";
        break;
        case 32:
        Result = "NEED_SOME_HELP";
        break;
        case 33:
        Result = "NICE_BIKE";
        break;
        case 34:
        Result = "NICE_SHOOTING_JOHNNY";
        break;
        case 35:
        Result = "POLICE_PURSUIT";
        break;
        case 36:
        Result = "SPOT_POLICE";
        break;
        case 37:
        Result = "JACKING_LOST_BIKE";
        break;
        case 38:
        Result = "WAIT_FOR_ME";
        break;
    }
    return Result;
}

int sub_35894(int iParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    float fVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_CHAR_ON_FOOT( iParam0->_fU0 ))
    {
        return 1;
    }
    else if ((sub_33093( iParam0->_fU0 )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))))
    {
        return 2;
    }
    else if ((uParam1) || (sub_13185( iParam0, 1 )))
    {
        uVar5 = nil;
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar5 );
        }
        if (IS_VEH_DRIVEABLE( uVar5 ))
        {
            GET_CAR_SPEED( uVar5, ref fVar6 );
            if (fVar6 > 0.20000000)
            {
                return sub_36056( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_36325( sub_5671(), 1 )};
                    GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar5, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    TASK_LEAVE_CAR_IN_DIRECTION( iParam0->_fU0, uVar5, uVar8._fU0 > 0.00000000 );
                }
                else
                {
                    TASK_LEAVE_ANY_CAR( iParam0->_fU0 );
                }
            }
            return 2;
        }
    };;;
    return 0;
}

int sub_36056(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_36067( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        if (IS_CHAR_STOPPED( iParam0->_fU0 ))
        {
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar4 );
            if ((iVar4 == 7) || (iParam0->_fU96 != 5))
            {
                iParam0->_fU96 = 5;
                TASK_CAR_MISSION( iParam0->_fU0, uVar3, 0, iParam0->_fU96, 0.00000000, 2, -1, -1 );
            }
            return 2;
        }
    }
    return 0;
}

void sub_36067(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_36325(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_36536(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_36567( (iParam0^) )))
        {
            if (((sub_36602( (iParam0^) )) AND (NOT l_U150)) AND (NOT l_U151))
            {
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_36654()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_ON_ANY_BIKE( sub_5671() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5671(), iParam0->_fU0, l_U140, l_U140, l_U140, 0 ))
                        {
                            if (sub_36753())
                            {
                                if (iParam0->_fU0 == l_U149)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_20503( (iParam0 + 44) + 12, ref l_U143, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_20503( (iParam0 + 44) + 28, ref l_U143, 7, 1 );
                                    }
                                    sub_36879( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_5671() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_5671(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_5671(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U126 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_5671(), ref l_U155._fU0, ref l_U155._fU4, ref l_U155._fU8 );
                                    GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U155._fU0, l_U155._fU4, l_U155._fU8, l_U158._fU0, l_U158._fU4, l_U158._fU8, ref l_U154 );
                                    if (iParam0->_fU0 == l_U149)
                                    {
                                        l_U153 += 1.00000000 * TIMESTEP();
                                        l_U152 = l_U154;
                                    }
                                    else if ((l_U154 <= l_U152) || (IS_CHAR_INJURED( l_U149 )))
                                    {
                                        l_U149 = iParam0->_fU0;
                                        l_U152 = l_U154;
                                        l_U153 = 0.00000000;
                                    }
                                }
                            }
                            else if (NOT sub_37307())
                            {
                                sub_37335();
                            }
                            else if (sub_37392())
                            {
                                sub_37356();
                            }
                            GET_CHAR_COORDINATES( sub_5671(), ref l_U155._fU0, ref l_U155._fU4, ref l_U155._fU8 );
                            GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( l_U155._fU0, l_U155._fU4, l_U155._fU8, l_U158._fU0, l_U158._fU4, l_U158._fU8, ref l_U154 );
                            if (iParam0->_fU0 == l_U149)
                            {
                                l_U153 += 1.00000000 * TIMESTEP();
                                l_U152 = l_U154;
                            }
                            else if ((l_U154 <= l_U152) || (IS_CHAR_INJURED( l_U149 )))
                            {
                                l_U149 = iParam0->_fU0;
                                l_U152 = l_U154;
                                l_U153 = 0.00000000;
                            };;;;
                        }
                        else if (NOT sub_37656())
                        {
                            sub_37707( (iParam0^) );
                        }
                    }
                    else if (NOT sub_37656())
                    {
                        sub_37707( (iParam0^) );
                    }
                }
                else if (NOT sub_37656())
                {
                    sub_37707( (iParam0^) );
                }
            }
            else if (NOT sub_37656())
            {
                sub_37707( (iParam0^) );
            }
        }
        else if (NOT sub_37656())
        {
            if ((((((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5671(), iParam0->_fU0, l_U141, l_U141, l_U141, 0 ))) || (NOT (IS_CHAR_ON_ANY_BIKE( sub_5671() )))) || (NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5671() )))) || (NOT (sub_5787( l_U143 ))))
            {
                sub_38008( iParam0 );
            }
        }
    }
    else if (sub_36567( (iParam0^) ))
    {
        sub_5971( ref l_U143, 0 );
        sub_38008( iParam0 );
    }
    return;
}

void sub_36567(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_36602(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

void sub_36654()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_36753()
{
    if (NOT l_U127)
    {
        if (l_U126)
        {
            return 1;
        }
    }
    return 0;
}

void sub_36879(int iParam0)
{
    ref iParam0->_fU44->_fU4 = 1;
    if (ref iParam0->_fU44->_fU8)
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else if (COMPARE_STRING( (iParam0 + 44) + 28, "" ))
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else
    {
        ref iParam0->_fU44->_fU8 = 1;
    }
    l_U149 = nil;
    l_U153 = 0.00000000;
    l_U150 = 1;
    return;
}

void sub_37307()
{
    return l_U125;
}

void sub_37335()
{
    l_U125 = 1;
    l_U126 = 0;
    sub_37356();
    return;
}

void sub_37356()
{
    l_U127 = 0;
    return;
}

void sub_37392()
{
    return l_U127;
}

void sub_37656()
{
    int Result;

    Result = 0;
    if (sub_5787( l_U133 ))
    {
        Result = 1;
    }
    return Result;
}

void sub_37707(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U149)
    {
        l_U149 = nil;
        l_U153 = 0.00000000;
        sub_37748();
    }
    return;
}

void sub_37748()
{
    if (l_U124 == 1)
    {
        l_U128 = 0.00000000;
        l_U127 = 1;
        l_U126 = 0;
    }
    return;
}

void sub_38008(int iParam0)
{
    sub_5971( ref l_U143, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_5671() )))
    {
        TASK_CLEAR_LOOK_AT( sub_5671() );
    }
    l_U150 = 0;
    return;
}

void sub_38171(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    boolean bVar16;
    boolean bVar17;
    boolean bVar18;
    int iVar19;
    int iVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;
    unknown uVar25;
    float fVar26;

    GET_GAME_TIMER( ref iVar4 );
    if ((NOT l_U165) || (iParam0->_fU36 == 0))
    {
        return;
    }
    if ((sub_36567( (iParam0^) )) AND (sub_36654()))
    {
        if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
        {
            if (((IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) AND (IS_CHAR_ON_ANY_BIKE( sub_5671() )))
            {
                GET_CHAR_COORDINATES( sub_5671(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U163 != iParam0->_fU0) || (l_U164 != sub_5671()))
                    {
                        sub_33212( iParam0->_fU0, sub_38445( uVar8._fU0 < 0.00000000, sub_33425( iParam0->_fU4 ) ), sub_5671(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_5671() ))
                {
                    l_U163 = sub_5671();
                    l_U164 = iParam0->_fU0;
                }
            }
        }
    }
    if (((sub_36654()) || (sub_36567( (iParam0^) ))) || ((iVar4 - l_U161) < 33))
    {
        return;
    }
    if (l_U161 <= 0)
    {
        l_U161 = iVar4;
        return;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        iVar11 = nil;
        uVar12 = nil;
        uVar13 = nil;
        uVar14 = nil;
        iVar15 = 39;
        bVar16 = false;
        bVar17 = false;
        bVar18 = false;
        iVar19 = 10000;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar20 );
        if (iVar20 == iParam0->_fU0)
        {
            uVar12 = iParam0->_fU4;
            bVar16 = true;
        }
        else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar12 );
        }
        if (NOT (IS_CAR_DEAD( uVar12 )))
        {
            if (sub_39098( uVar12 ))
            {
                fVar21 = sub_39141( iParam0 );
                if (((NOT (sub_36567( (iParam0^) ))) AND (((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) AND (fVar21 < 19)) || (fVar21 < 15))) AND (iParam0->_fU0 != l_U163))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((l_U0) AND ((iParam0->_fU36 != 1) || ((sub_34046( 0, 10 )) == 0)))
                    {
                        l_U0 = 0;
                        iVar15 = 17;
                        iVar11 = sub_5671();
                    }
                    else if ((((sub_39331( iParam0 )) AND (iParam0->_fU36 == 2)) AND ((sub_32349( iParam0 + 0 )) == 1)) AND (NOT (IS_BIT_SET( l_U166, 6 ))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_39445( bVar16 );
                        iVar11 = sub_5671();
                    }
                    else if (((IS_CAR_IN_AIR_PROPER( uVar12 )) AND ((ABSF( uVar22 )) < 20.00000000)) AND (sub_39533( 8 )))
                    {
                        uVar13 = sub_39787( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_5671() )) AND (sub_39533( 12 )))
                    {
                        uVar13 = sub_39445( bVar16 );
                        iVar11 = sub_5671();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if (((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 )) || (IS_PED_RAGDOLL( iParam0->_fU0 ))) AND (sub_39533( 13 )))
                    {
                        uVar13 = sub_39445( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if (((((sub_32349( iParam0 + 0 )) == 1) AND (NOT (IS_PLAYER_PRESSING_HORN( sub_5742() )))) AND (IS_BIT_SET( l_U166, 7 ))) AND (sub_39533( 20 )))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_39787( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_5671();
                        CLEAR_BIT( ref l_U166, 7 );
                    }
                    else if ((((IS_WANTED_LEVEL_GREATER( sub_5742(), 0 )) AND (NOT (IS_BIT_SET( l_U166, 0 )))) AND (sub_39533( 24 ))) AND ((sub_32349( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 24;
                        iVar11 = sub_5671();
                    }
                    else if ((((NOT (IS_WANTED_LEVEL_GREATER( sub_5742(), 0 ))) AND (IS_BIT_SET( l_U166, 0 ))) AND (sub_39533( 30 ))) AND ((sub_32349( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_36325( sub_5671(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U166, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_5671() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_5671() ))
                                    {
                                        if (sub_39533( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_5671();
                                            if ((sub_34046( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_39787( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_39445( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U166, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_5671() ))
                                    {
                                        CLEAR_BIT( ref l_U166, 3 );
                                        CLEAR_BIT( ref l_U166, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_5671() ))
                            {
                                if (((sub_39533( 33 )) AND (NOT (IS_BIT_SET( l_U166, 4 )))) AND ((sub_32349( iParam0 + 0 )) == 1))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5671(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_33425( uVar23 );
                                        if ((NOT (IS_CAR_A_MISSION_CAR( uVar23 ))) AND ((iVar24 == 1) || (iVar24 == 0)))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U166, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U166, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_5671() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5671(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_39533( 31 )) AND (NOT (IS_BIT_SET( l_U166, 4 )))) AND ((sub_32349( iParam0 + 0 )) == 1))
                                    {
                                        if (NOT (IS_CAR_A_MISSION_CAR( uVar23 )))
                                        {
                                            iVar15 = 31;
                                            SET_BIT( ref l_U166, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U166, 3 );
                            }
                            else if ((IS_CHAR_ON_FOOT( sub_5671() )) AND (NOT (IS_PED_RAGDOLL( sub_5671() ))))
                            {
                                CLEAR_BIT( ref l_U166, 3 );
                                CLEAR_BIT( ref l_U166, 4 );
                            };;;
                            uVar23 = nil;;
                        }
                        if (iVar15 == 39)
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
                            END_CHAR_SEARCH_CRITERIA();
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U164))
                                {
                                    iVar11 = nil;
                                }
                                else if ((sub_39533( 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_5742(), 0 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_34046( 0, 10 )) == 0;
                                    }
                                }
                                else if (((sub_39533( 36 )) AND (IS_WANTED_LEVEL_GREATER( sub_5742(), 0 ))) AND (NOT (IS_BIT_SET( l_U166, 1 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((IS_WANTED_LEVEL_GREATER( sub_5742(), 2 )) AND (sub_39533( 23 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((sub_39533( 2 )) AND (iVar15 == 39))
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 1 );
                            END_CHAR_SEARCH_CRITERIA();
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U164))
                                {
                                    iVar11 = nil;
                                }
                                else if ((IS_CHAR_MODEL( iVar11, 552542187 )) || (IS_CHAR_MODEL( iVar11, 996267216 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 2;
                                    bVar18 = (sub_34046( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((IS_WANTED_LEVEL_GREATER( sub_5742(), 0 )) AND (NOT (IS_BIT_SET( l_U166, 2 ))))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_41676( uVar5, 25.00000000, 4 );
                            if (IS_VEH_DRIVEABLE( uVar23 ))
                            {
                                GET_DRIVER_OF_CAR( uVar23, ref iVar11 );
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U164))
                                {
                                    iVar11 = nil;
                                }
                                else if (NOT (IS_CHAR_ON_SCREEN( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else
                                {
                                    uVar13 = nil;
                                    uVar25 = sub_32349( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if ((sub_39533( 28 )) AND ((sub_32349( iParam0 + 0 )) == 1))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_32349( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_39533( 3 )) AND (sub_39533( 4 )))
                                            {
                                                if (g_U15728[13])
                                                {
                                                    iVar15 = 4;
                                                }
                                                else
                                                {
                                                    iVar15 = 3;
                                                }
                                            }
                                        }
                                        else if ((sub_32349( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_39533( 30 ))
                                            {
                                                uVar13 = sub_42277( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_39533( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_5671(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if (((sub_32349( iParam0 + 0 )) == 1) AND (fVar26 < 5))
                            {
                                if ((sub_39533( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_5742(), 0 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_39533( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U166, 5 ))) AND (fVar26 > 30))
                            {
                                if ((sub_39533( 30 )) AND ((sub_32349( iParam0 + 0 )) == 1))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_39533( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_34046( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((iVar15 != 39) || (NOT (IS_STRING_NULL( uVar13 ))))
                    {
                        if (sub_33212( iParam0->_fU0, uVar13, iVar11, iVar15 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if (((iVar4 - l_U161) > 10000) AND (IS_BIT_SET( l_U166, 6 )))
    {
        CLEAR_BIT( ref l_U166, 6 );
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_5742() )) AND (NOT (IS_BIT_SET( l_U166, 7 ))))
    {
        SET_BIT( ref l_U166, 7 );
    }
    if (((iVar4 - l_U161) > 28000) AND (l_U163 != nil))
    {
        if ((sub_32349( iParam0 + 0 )) == 1)
        {
            sub_33212( iParam0->_fU0, "", sub_5671(), 30 );
        }
        else
        {
            sub_33212( iParam0->_fU0, "", sub_5671(), 20 );
        }
        l_U163 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_5742(), 0 )))
        {
            CLEAR_BIT( ref l_U166, 0 );
            CLEAR_BIT( ref l_U166, 2 );
            CLEAR_BIT( ref l_U166, 1 );
        }
        CLEAR_BIT( ref l_U166, 7 );
    }
    return;
}

void sub_38445(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 1) || (iParam1 == 0))
    {
        if (bParam0)
        {
            switch (sub_34046( 0, 3 ))
            {
                case 0:
                Result = "chat_left_e";
                break;
                case 1:
                Result = "chat_left_f";
                break;
                default:
                Result = "chat_left_g";
                break;
            }
        }
        else
        {
            switch (sub_34046( 0, 3 ))
            {
                case 0:
                Result = "chat_right_e";
                break;
                case 1:
                Result = "chat_right_f";
                break;
                default:
                Result = "chat_right_g";
                break;
            }
        }
        PRINTSTRING( "Anim used: " );
        PRINTSTRING( Result );
        PRINTNL();
    }
    return Result;
}

void sub_39098(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_39141(int iParam0)
{
    return sub_39161( iParam0->_fU0, sub_5671(), 1 );
}

void sub_39161(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_36325( uParam0, uParam2 ), sub_36325( uParam1, uParam2 ) );
}

void sub_39331(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_5671(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_39445(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_39533(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 10000;
    switch (iParam0)
    {
        case 20:
        iVar3 = 2500;
        break;
        case 8:
        iVar3 = 4500;
        break;
        case 6:
        iVar3 = 2500;
        break;
        case 5:
        iVar3 = 1000;
        break;
        case 33:
        iVar3 = 2000;
        break;
        case 31:
        iVar3 = 2000;
        break;
        case 0:
        iVar3 = 18000;
        break;
        case 1:
        iVar3 = 19000;
        break;
        case 21:
        iVar3 = 25000;
        break;
        case 38:
        iVar3 = 2000;
        break;
    }
    GET_GAME_TIMER( ref iVar4 );
    if (iParam0 == 39)
    {
        return 0;
    }
    return (iVar4 - l_U161) > iVar3;
}

void sub_39787(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref uVar3 );
        switch (uVar3)
        {
            case 1:
            Result = "gest_thumbsup";
            break;
            default:
            Result = "gest_thumbsup";
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "p_gest_celeb_a";
            break;
            case 1:
            Result = "p_gest_celeb_b";
            break;
            case 2:
            Result = "p_gest_celeb_c";
            break;
            case 3:
            Result = "p_gest_celeb_d";
            break;
            case 5:
            Result = "p_gest_rockin";
            break;
            case 6:
            Result = "p_gest_yes";
            break;
            default:
            Result = "p_gest_yes";
            break;
        }
    }
    return Result;
}

void sub_41676(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;
    int[22] iVar8;
    int I;

    Result = nil;
    array(ref iVar8, 22);
    iVar8[0] = -408052231;
    iVar8[1] = 584879743;
    iVar8[2] = 802082487;
    iVar8[3] = -570033273;
    iVar8[4] = 301427732;
    iVar8[5] = -159126838;
    iVar8[6] = -359167535;
    iVar8[7] = -571009320;
    iVar8[8] = 2006142190;
    iVar8[9] = -1606187161;
    iVar8[10] = -618617997;
    iVar8[11] = -77769032;
    iVar8[12] = 1265391242;
    iVar8[13] = -255678177;
    iVar8[14] = -1670998136;
    iVar8[15] = -1759858085;
    iVar8[16] = -114291515;
    iVar8[17] = -891462355;
    iVar8[18] = 1203311498;
    iVar8[19] = -909201658;
    iVar8[20] = 788045382;
    iVar8[21] = -1842748181;
    for ( I = 0; I < iVar8; I++ )
    {
        Result = GET_CLOSEST_CAR( uParam0, uParam3, iVar8[I], uParam4 );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            return Result;
        }
    }
    return nil;
}

void sub_42277(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "gest_thumbsup";
            break;
            case 1:
            Result = "gest_hey";
            break;
        }
    }
    else
    {
        Result = "p_gest_rockin";
    }
    return Result;
}

void sub_42993(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_32349( uParam0 )) == 1)
        {
            if ((IS_SCREEN_FADED_OUT()) || (NOT (IS_CHAR_ON_SCREEN( (uParam0^) ))))
            {
                if ((IS_CHAR_ON_ANY_BIKE( (uParam0^) )) || (uParam1))
                {
                    GIVE_PED_HELMET_WITH_OPTS( (uParam0^), 1 );
                }
                else
                {
                    REMOVE_PED_HELMET( (uParam0^), 1 );
                }
            }
        }
    }
    return;
}

int sub_43284(int iParam0)
{
    int iVar3;
    float fVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_36067( iParam0 )) != iParam0->_fU4)
    {
        if (sub_39098( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_43381( iParam0 )) < l_U171)
    {
        return 1;
    };;;
    if (sub_39098( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if ((iVar3 == 7) || ((iParam0->_fU96 != 4) AND (iParam0->_fU96 != 14)))
    {
        if (sub_13185( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_13185( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_13185( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U170, l_U169 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U170, l_U169 );
        }
    }
    else if (sub_13185( iParam0, 64 ))
    {
        fVar4 = (sub_43381( iParam0 )) / 3.00000000;
        if (fVar4 < iParam0->_fU28)
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar4 );
        }
        else
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
    }
    else
    {
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    }
    if (sub_43909( iParam0->_fU4 ))
    {
        uVar6 = {sub_44059( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_43381(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_39161( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_36325( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_43909(unknown uParam0)
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

void sub_44059(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CAR_DEAD( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_44255(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

int sub_44356(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_13185( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_36067( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        GET_CAR_CHAR_IS_USING( iParam0->_fU0, ref uVar3 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                if (IS_CHAR_IN_CAR( iParam0->_fU8, uVar3 ))
                {
                    iParam0->_fU4 = uVar3;
                    return 1;
                }
            }
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (((sub_32349( ref iVar4 )) == (sub_32349( iParam0 + 0 ))) || ((iVar4 == sub_5671()) AND ((sub_32349( iParam0 + 0 )) == 1)))
                {
                    sub_44581( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

void sub_44581(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_44677( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_5671()) AND (iParam1 != sub_5671()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[0]) || (g_U11197 == g_U11081[1]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[0]) || (g_U11198 == g_U11081[1]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND ((iParam0->_fU8 != iParam1) || (iParam0->_fU36 != 1)))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_44255( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_5671())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_45256( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_45256( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_45256( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_45256( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_45256( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_44677(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_44701( uParam0, uParam1 )));
}

boolean sub_44701(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_45256(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_5671())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

int sub_45595(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_45633( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_33093( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_36067( iParam0 )) == iParam0->_fU4)
        {
            if (sub_39098( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_39098( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if ((iVar3 == sub_5671()) || ((iVar3 == iParam0->_fU8) AND (NOT (IS_CHAR_INJURED( iVar3 )))))
        {
            if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( iVar3 )))
        {
            if ((sub_32349( iParam0 + 0 )) == (sub_32349( ref iVar3 )))
            {
                return 0;
            }
        }
        if ((((IS_CHAR_IN_CAR( sub_5671(), iParam0->_fU4 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((sub_39161( iParam0->_fU0, sub_5671(), 1 )) < 90.00000000))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 30.00000000, 30.00000000, 30.00000000, 0 ))
            {
                bVar4 = false;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            bVar4 = true;
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (NOT (IS_CHAR_DEAD( iVar3 )))
                {
                    if (IS_PED_A_MISSION_PED( iVar3 ))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    DELETE_CHAR( ref iVar3 );
                }
            }
        }
        sub_46317( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_39098( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 12, ref iVar5 );
            if (iVar5 == 7)
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 12.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -1 );
                }
                else
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -2 );
                }
            }
            return 2;
        }
    }
    return 0;
}

void sub_45633(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_45663( ref uVar5, uParam2 );
}

int sub_45663(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_45688( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_45688( (uParam0^)[I], ref uVar5[1], uParam1 ))
        {
            if (uVar5[0] != uVar5[1])
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

int sub_45688(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            return 0;
        }
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, uParam1 );
    return 1;
}

int sub_46317(int iParam0)
{
    if (sub_46331( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_46331(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (IS_PED_IN_GROUP( uParam0 ))
    {
        GET_PED_GROUP_INDEX( uParam0, ref iVar3 );
        if (DOES_GROUP_EXIST( iVar3 ))
        {
            GET_GROUP_SIZE( iVar3, ref iVar4, ref iVar5 );
            if (NOT (IS_GROUP_LEADER( uParam0, iVar3 )))
            {
                if (((iVar4 < 1) || (iVar5 < 2)) AND (iVar3 != sub_46417()))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar5 < 1) AND (iVar3 != sub_46417()))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

void sub_46417()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_46763(int iParam0)
{
    unknown uVar3;

    if ((NOT (sub_13185( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = sub_41676( sub_36325( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_46877(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((NOT (sub_13185( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_36325( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_46998(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_43381( iParam0 );
    if (fVar3 < 12.00000000)
    {
        return 1;
    }
    else if (fVar3 > 90.00000000)
    {
        return 0;
    }
    else
    {
        switch (iParam0->_fU36)
        {
            case 2:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 27, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0->_fU0, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 4, -1, 12.00000000 / 2.00000000 );
            }
            else if ((GET_NAVMESH_ROUTE_RESULT( iParam0->_fU0 )) == 2)
            {
                return 0;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 21, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_GO_TO_CHAR( iParam0->_fU0, iParam0->_fU8, -1, 12.00000000 / 2.00000000 );
            }
            break;
            default: break;
        }
    }
    return 2;
}

int sub_47298(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU36 != 2)
    {
        return 0;
    }
    GET_GAME_VIEWPORT_ID( ref uVar3 );
    if ((sub_43381( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if ((((sub_43381( iParam0 )) > 90.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND ((sub_39161( iParam0->_fU0, sub_5671(), 1 )) > 90.00000000))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 )) || (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 ))) || ((VDIST( sub_36325( sub_5671(), 1 ), uVar4 )) < 30.00000000))
            {
                ;
            }
            else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            return 2;;
        }
    }
    return 0;
}

int sub_47654(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_36067( iParam0 )) != iParam0->_fU4)
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 16, ref iVar3 );
    if (iVar3 == 7)
    {
        TASK_CAR_DRIVE_WANDER( iParam0->_fU0, iParam0->_fU4, iParam0->_fU28, 2 );
    }
    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    return 2;
}

int sub_47913(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((iVar3 == 7) AND (NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_5671(), 45.00000000 ))))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_5671(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_5671() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_48070(int iParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    iVar4 = nil;
    bVar5 = false;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar4 );
    }
    if (DOES_VEHICLE_EXIST( iVar4 ))
    {
        if (sub_44677( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_IN_CAR( sub_5671(), iVar4 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_5671() ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_45633( sub_5671(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_32349( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_5671(), ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (IS_CAR_MODEL( uVar7, 800869680 ))
                    {
                        return 2;
                    }
                }
            }
            if (bVar6)
            {
                return sub_35894( iParam0, 1, 0 );
            }
        }
    }
    if ((sub_13185( iParam0, 1 )) AND ((sub_43381( iParam0 )) < 30.00000000))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        if (IS_PED_IN_COMBAT( iParam0->_fU0 ))
        {
            return 2;
        }
    }
    else
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        if ((IS_PED_IN_COMBAT( iParam0->_fU0 )) AND (NOT bVar5))
        {
            CLEAR_CHAR_TASKS( iParam0->_fU0 );
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 1 );
        }
        else
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
        }
    }
    iVar4 = nil;
    GET_CAR_CHAR_IS_USING( sub_5671(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_5671())
    {
        if ((IS_CHAR_ON_FOOT( iParam0->_fU0 )) AND (IS_CHAR_ON_FOOT( sub_5671() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_5671(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))) AND ((((IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 )) || (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 ))) || (DOES_VEHICLE_EXIST( iVar4 ))) || ((sub_39161( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8)))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((sub_44701( iParam0->_fU8, iParam0->_fU4 )) || (iParam0->_fU4 == iVar4))
            {
                if ((sub_48756( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_44356( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_46763( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_49823( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_50322( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_46998( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_47913( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if ((sub_44701( sub_5671(), iParam0->_fU4 )) AND ((sub_32349( iParam0 + 0 )) == 1))
            {
                if ((sub_44356( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_46763( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_49823( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_50322( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_46998( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_47913( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_51148( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_51297( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_45595( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_44356( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_46763( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_50322( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_48756( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_49823( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_46998( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_47913( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_51148( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_45595( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_44356( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48756( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46763( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46877( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_49823( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_50322( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46998( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_47913( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_45633( sub_5671(), iParam0->_fU0, 1 )) AND (iParam0->_fU8 != sub_5671())) AND ((sub_32349( iParam0 + 0 )) == 1))
    {
        sub_44581( iParam0, sub_5671() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_36056( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_45595( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_44356( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_50322( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_49095( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_46998( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_46763( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_46877( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_49823( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((NOT (sub_13185( iParam0, 1 ))) || (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
        {
            if ((sub_36056( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_45595( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_44356( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_50322( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_51148( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_49095( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46998( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_47913( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((sub_13185( iParam0, 1 )) AND (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))))
    {
        if ((sub_51148( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_49095( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_46998( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_35894( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_36056( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_51148( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_36056( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_45595( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_44356( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_48756( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_46763( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_50322( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_49823( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_49095( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_46998( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_47913( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_48756(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    int iVar15;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 )))
    {
        return 0;
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar3 );
        if (NOT (IS_VEH_DRIVEABLE( uVar3 )))
        {
            return 0;
        }
        else if (IS_CHAR_IN_CAR( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
        else
        {
            iVar4 = sub_48885( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_44059( uVar3, 1 )};
    uVar8 = {sub_36325( iParam0->_fU0, 1 )};
    uVar11 = {sub_36325( sub_5671(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_43381( iParam0 )) > 30.00000000)
        {
            sub_46317( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_43381( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_49095( iParam0 );
        if (iVar14 != 0)
        {
            return 2;
        }
    }
    if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( uVar3 ))) || ((VDIST( uVar11, uVar5 )) < 30.00000000)) || ((VDIST( uVar11, uVar8 )) < 30.00000000))
    {
        if ((VDIST( uVar8, uVar5 )) > 30.00000000)
        {
            return 0;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar15 );
            if (iVar15 == 7)
            {
                TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, -2, iVar4 );
            }
            return 2;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( iParam0->_fU0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, iVar4 );
        return 1;
    }
    return 0;
}

int sub_48885(unknown uParam0)
{
    int Result;
    int iVar4;

    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
    for ( Result = 0; Result < iVar4; Result++ )
    {
        if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, Result ))
        {
            return Result;
        }
    }
    return -1;
}

int sub_49095(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_46331( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_45633( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_39161( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
    {
        return 0;
    }
    GET_PED_GROUP_INDEX( iParam0->_fU8, ref uVar3 );
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        if (IS_GROUP_MEMBER( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        REMOVE_ALL_INACTIVE_GROUPS_FROM_CLEANUP_LIST();
        CREATE_GROUP( 0, ref uVar3, 1 );
        SET_GROUP_LEADER( uVar3, iParam0->_fU8 );
        PRINTSTRING( "e1_biker_buddy_task: CREATING GROUP with leader" );
        PRINTINT( iParam0->_fU8 );
        PRINTSTRING( " and ped " );
        PRINTINT( iParam0->_fU0 );
        PRINTNL();
    }
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        GET_GROUP_SIZE( uVar3, ref uVar4, ref iVar5 );
        if (iVar5 < 7)
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            GET_GROUP_LEADER( uVar3, ref uVar6 );
            if (NOT (IS_CHAR_INJURED( uVar6 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
                SET_GROUP_MEMBER( uVar3, iParam0->_fU0 );
                SET_CHAR_NEVER_LEAVES_GROUP( iParam0->_fU0, 1 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_49823(int iParam0)
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

    if (NOT (sub_13185( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_32993( iParam0->_fU4 );
    }
    else if (HAS_MODEL_LOADED( -408052231 ))
    {
        iVar3 = -408052231;
    }
    else if (HAS_MODEL_LOADED( -570033273 ))
    {
        iVar3 = -570033273;
    }
    else if (HAS_MODEL_LOADED( 584879743 ))
    {
        iVar3 = 584879743;
    }
    else if (HAS_MODEL_LOADED( 802082487 ))
    {
        iVar3 = 802082487;
    }
    else if (HAS_MODEL_LOADED( -1830458836 ))
    {
        iVar3 = -1830458836;
    };;;;;;
    if (iVar3 == 0)
    {
        ;
    }
    else if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_39141( iParam0 )) > 30.00000000))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_50138( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_39098( uVar11 ))
            {
                GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                SET_BLIP_THROTTLE_RANDOMLY( uVar11, 1 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar11 );
            return 1;
        }
    }
    return 0;
}

void sub_50138(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_11007( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

int sub_50322(int iParam0)
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
    int iVar13;
    int iVar14;
    boolean bVar15;

    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if ((iVar3 == iParam0->_fU0) || (IS_CHAR_INJURED( iVar3 )))
            {
                return 0;
            }
            else if (iVar3 != iParam0->_fU8)
            {
                sub_44581( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_36325( sub_5671(), 1 )};
        uVar7 = {sub_36325( iParam0->_fU0, 1 )};
        uVar10 = {sub_44059( iParam0->_fU4, 1 )};
        if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((VDIST( uVar4, uVar10 )) < 30.00000000)) || ((VDIST( uVar4, uVar7 )) < 30.00000000))
        {
            if ((VDIST( uVar10, uVar7 )) > 30.00000000)
            {
                return 0;
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar13 );
            if (iVar13 != 7)
            {
                return 2;
            }
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (IS_CHAR_INJURED( iVar3 ))
            {
                return 0;
            }
            else if ((iVar3 == sub_5671()) || ((sub_32349( ref iVar3 )) == (sub_32349( iParam0 + 0 ))))
            {
                iVar14 = sub_48885( iParam0->_fU4 );
                if (iVar14 < 0)
                {
                    return 0;
                }
                else
                {
                    TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, -2, iVar14 );
                    return 2;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (IS_PED_A_MISSION_PED( iVar3 ))
                {
                    bVar15 = false;
                }
                else
                {
                    DELETE_CHAR( ref iVar3 );
                    bVar15 = true;
                }
            }
            else
            {
                bVar15 = true;
            }
            if (bVar15)
            {
                CLEAR_CHAR_TASKS( iParam0->_fU0 );
                SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
                WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
                if (sub_39098( iParam0->_fU4 ))
                {
                    GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                    SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
                }
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    iParam0->_fU4 = nil;
    return 0;
}

int sub_51148(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if ((((IS_PED_IN_COMBAT( iParam0->_fU0 )) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 ))) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 ))) AND ((sub_43381( iParam0 )) < 30.00000000))
    {
        return 2;
    }
    return 0;
}

int sub_51297(int iParam0)
{
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    int iVar8;
    boolean bVar9;
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

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_36067( iParam0 )) != iParam0->_fU4)
    {
        if (sub_39098( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_39098( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_39098( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )) AND (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_46317( iParam0 );
    iVar8 = 2;
    if (sub_13185( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_43381( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((iParam0->_fU8 == sub_5671()) AND (IS_CHAR_GETTING_IN_TO_A_CAR( sub_5671() )))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_5742(), ref uVar10 );
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        GET_CAR_MODEL( uVar10, ref uVar11 );
        if (NOT ((IS_THIS_MODEL_A_BIKE( uVar11 )) || (IS_THIS_MODEL_A_CAR( uVar11 ))))
        {
            uVar10 = nil;
        }
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        if (PLAYER_IS_INTERACTING_WITH_GARAGE())
        {
            uVar12 = {sub_36325( sub_5671(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_51815( iParam0, uVar12 );
            }
            else
            {
                return sub_36056( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar4 < 2.50000000) AND (fVar6 < 9.00000000))
        {
            return sub_36056( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_36056( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_5671())
                {
                    if ((((fVar6 < 6.00000000) AND (iParam0->_fU40 == 2)) || ((fVar6 < 5.00000000) AND (iParam0->_fU40 == 3))) || (fVar6 < 3.00000000))
                    {
                        fVar7 = fVar5 - 2.00000000;
                        if (iParam0->_fU40 == 2)
                        {
                            SET_CAR_LANE_SHIFT( iParam0->_fU4, 1.50000000 );
                        }
                    }
                    else
                    {
                        SET_CAR_LANE_SHIFT( iParam0->_fU4, 0.00000000 );
                    }
                }
                else if (sub_52227())
                {
                    if (fVar6 < 5.00000000)
                    {
                        fVar7 = fVar5 - 5.00000000;
                    }
                    else
                    {
                        fVar7 = fVar5;
                    }
                }
                else if ((IS_THIS_MODEL_A_CAR( uVar11 )) AND (fVar6 < (((ABSF( uVar15._fU4 )) + uVar18._fU0) + 2.50000000)))
                {
                    fVar7 = fVar5 - 2.00000000;
                }
                else if ((fVar6 < 4.00000000) AND (iParam0->_fU40 == 2))
                {
                    fVar7 = fVar5 - 5.00000000;
                }
                else if (fVar6 < 2.50000000)
                {
                    fVar7 = fVar5;
                };;;;;
            };;;
        }
        else if (((sub_43909( iParam0->_fU4 )) || (sub_13185( iParam0, 4 ))) AND ((sub_39141( iParam0 )) >= l_U121))
        {
            bVar9 = sub_52497( iParam0, l_U121, l_U122, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_13185( iParam0, 128 ))
                {
                    TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                else
                {
                    TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                return 2;
            }
        };;;
        if (fVar7 < 0.00000000)
        {
            fVar7 = 0.00000000;
        }
        if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_13185( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            return 2;
        }
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );
        return 2;
    }
    else
    {
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        if (fVar6 < 12.00000000)
        {
            return sub_36056( iParam0 );
        }
        else if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_13185( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_53941( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_51815(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_13297( iParam0, 64 );
    Result = sub_43284( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

boolean sub_52227()
{
    return ((IS_CONTROL_PRESSED( 0, 41 )) || (IS_CONTROL_PRESSED( 0, 44 ))) || (IS_CONTROL_PRESSED( 0, 45 ));
}

int sub_52497(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU8, iParam0->_fU4, uParam1, uParam1, uParam1, 0 )))
    {
        if (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 )))
        {
            GET_CAR_COORDINATES( iParam0->_fU4, ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_CHAR_COORDINATES( iParam0->_fU8, ref vVar12.x, ref vVar12.y, ref vVar12.z );
            vVar9 = {vVar6 - vVar12};
            vVar9 = {vVar9 * ((fParam2 + (10.00000000 / 2)) / (VMAG( vVar9 )))};
            vVar9 = {vVar9 + vVar12};
            if (GET_CLOSEST_CAR_NODE_WITH_HEADING( vVar9.x, vVar9.y, vVar9.z, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8, ref uVar18 ))
            {
                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar15._fU0, uVar15._fU4, uVar15._fU8, 4.00000000, 4.00000000, 4.00000000 )))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar19 );
                    if (((NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 ))) AND ((VDIST( uVar15, sub_36325( sub_5671(), 1 ) )) > fParam2)) AND ((VDIST2( uVar15, vVar6 )) > 9.00000000))
                    {
                        uVar21 = {-SIN( uVar18 ), COS( uVar18 ), 0.00000000};
                        GET_ANGLE_BETWEEN_2D_VECTORS( uVar21._fU0, uVar21._fU4, vVar12.x - uVar15._fU0, vVar12.y - uVar15._fU4, ref fVar20 );
                        if (fVar20 > 90.00000000)
                        {
                            LIMIT_ANGLE( fVar20 + 180.00000000, ref fVar20 );
                            LIMIT_ANGLE( uVar18 + 180.00000000, ref uVar18 );
                        }
                        if ((fVar20 < 45.00000000) || (fVar20 > 315.00000000))
                        {
                            SET_CAR_HEADING( iParam0->_fU4, uVar18 );
                            SET_CAR_COORDINATES( iParam0->_fU4, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                            SET_CAR_FORWARD_SPEED( iParam0->_fU4, uParam3 );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_53941(unknown uParam0, float fParam1, float fParam2)
{
    float fVar5;

    if (fParam2 < fParam1)
    {
        fVar5 = fParam2;
        fParam2 = fParam1;
        fParam1 = fVar5;
    }
    if ((uParam0^) < fParam1)
    {
        (uParam0^) = fParam1;
        return 1;
    }
    else if ((uParam0^) > fParam2)
    {
        (uParam0^) = fParam2;
        return 1;
    }
    return 0;
}

void sub_55309(unknown uParam0)
{
    sub_44255( uParam0, 2 );
    return;
}

void sub_55394(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_13185( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_45633( sub_5671(), iParam0->_fU0, 1 )))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU0, 0 );
                            FREEZE_CHAR_POSITION( iParam0->_fU0, 1 );
                            if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU0, 0 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_5671(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_13297( iParam0, 256 );
        }
    }
    else if (sub_13185( iParam0, 256 ))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU0 ))
        {
            if (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (NOT (IS_CHAR_VISIBLE( iParam0->_fU0 )))
                    {
                        SET_CHAR_VISIBLE( iParam0->_fU0, 1 );
                        FREEZE_CHAR_POSITION( iParam0->_fU0, 0 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                        {
                            SET_CHAR_COLLISION( iParam0->_fU0, 1 );
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 1 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    SET_CAR_COLLISION( iParam0->_fU4, 1 );
                }
                sub_13172( iParam0, 256 );
            }
        }
    }
    return;
}

void sub_55889(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U6)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U4) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U5 + 500))
        {
            l_U4 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_5671() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_56049())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U6)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U5 );
            l_U4 = 1;
            l_U3 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U3) AND (NOT l_U4))
        {
            if (l_U6)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U3 = 1;
        }
    }
    else if (l_U3)
    {
        if (l_U6)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U3 = 0;
    };;;
    return;
}

int sub_56049()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_56563(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if ((VDIST2( uParam1, iParam0->_fU16 )) > 1.00000000)
        {
            TASK_PAUSE( iParam0->_fU0, 30 );
        }
        else if ((iParam0->_fU36 == 4) AND ((VDIST( iParam0->_fU16, sub_36325( iParam0->_fU0, 1 ) )) < 12.00000000))
        {
            return;
        }
        else if (iParam0->_fU36 != 2)
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar7 );
            if (iVar7 != 7)
            {
                TASK_PAUSE( iParam0->_fU0, 30 );
            }
        };;;
    }
    if (iParam0->_fU28 < 0.01000000)
    {
        iParam0->_fU28 = 28.00000000;
    }
    iParam0->_fU36 = 2;
    iParam0->_fU16 = {uParam1};
    switch (uParam4)
    {
        case 0:
        sub_13172( iParam0, 32 );
        sub_13172( iParam0, 64 );
        break;
        case 1:
        sub_13172( iParam0, 32 );
        sub_13297( iParam0, 64 );
        sub_13297( iParam0, 1 );
        break;
        case 2:
        sub_13172( iParam0, 32 );
        sub_13297( iParam0, 64 );
        sub_13172( iParam0, 1 );
        break;
        case 3:
        sub_13297( iParam0, 32 );
        sub_13172( iParam0, 64 );
        break;
    }
    return;
}

void sub_57043(int iParam0, unknown uParam1)
{
    iParam0->_fU28 = uParam1;
    return;
}

void sub_57072()
{
    sub_5311();
    sub_57086();
    return;
}

void sub_57086()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U7 ))
    {
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 != 1)
        {
            ;
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_PROPAGATE( l_U7, 0 );
            SET_CAM_ACTIVE( l_U7, 0 );
            DESTROY_CAM( l_U7 );
            l_U7 = nil;
            l_U8 = -1;
            l_U20 = 0;
            if (IS_CONTROL_PRESSED( 0, 51 ))
            {
                GET_GAME_TIMER( ref l_U20 );
            }
            else
            {
                l_U20 = 0;
            }
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 1 );
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
        }
        END_CAM_COMMANDS( ref iVar2 );
    }
    return;
}

void sub_57539(unknown uParam0)
{
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5671(), uParam0, l_U541._fU0, l_U541._fU4, l_U541._fU8, 0 ))
            {
                GET_PLAYER_GROUP( sub_5742(), ref l_U1264 );
                if (NOT (IS_GROUP_MEMBER( uParam0, l_U1264 )))
                {
                    SET_GROUP_MEMBER( l_U1264, uParam0 );
                }
            }
            else
            {
                GET_PLAYER_GROUP( sub_5742(), ref l_U1264 );
                if (NOT (IS_CHAR_DEAD( uParam0 )))
                {
                    if (IS_GROUP_MEMBER( uParam0, l_U1264 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( uParam0 );
                    }
                }
            }
        }
    }
    return;
}

void sub_59660(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3, boolean bParam4)
{
    float fVar7;
    float fVar8;
    float Result;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_VEH_DRIVEABLE( sub_36067( iParam0 ) ))
        {
            fVar7 = sub_39161( iParam0->_fU0, sub_5671(), 1 );
            if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
            {
                if (fVar7 > 200.00000000)
                {
                    if (bParam3)
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                    }
                    l_U0 = 1;
                }
                else if (fVar7 < 6.00000000)
                {
                    l_U0 = 0;
                }
                if (fVar7 > 75.00000000)
                {
                    fVar7 = 75.00000000;
                    l_U0 = 1;
                }
                fVar7 /= 100.00000000;
                fVar7 += -1.00000000;
                fVar7 *= -1.00000000;
                fVar8 = (fVar7 * (uParam2 - uParam1)) + uParam1;
                Result = (fVar7 * (uParam2 - uParam1)) + uParam1;
                if (NOT bParam4)
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, Result );
                }
                return Result;;
            }
            else if (fVar7 < 200)
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, uParam1 );
                return uParam1;
                if (fVar7 > 40.00000000)
                {
                    l_U0 = 1;
                }
            }
            else
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                l_U0 = 1;
                return 0.00000000;
            }
        }
    }
    return iParam0->_fU28;
}

void sub_60359()
{
    unknown uVar2;

    if (l_U354 == 4)
    {
        if (NOT l_U1030)
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (IS_VEH_DRIVEABLE( l_U675 ))
                {
                    if (IS_CHAR_IN_CAR( l_U699, l_U675 ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( l_U699, l_U450._fU0, l_U450._fU4, l_U450._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                        {
                            l_U1030 = 1;
                        }
                    }
                }
            }
        }
        if (NOT l_U1012)
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if ((LOCATE_CHAR_ANY_MEANS_2D( sub_5671(), l_U374._fU0, l_U374._fU4, 50.00000000, 50.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_2D( l_U699, l_U374._fU0, l_U374._fU4, 50.00000000, 50.00000000, 0 )))
                {
                    l_U1012 = 1;
                    if (l_U1003[0])
                    {
                        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U476[0]._fU0, l_U476[0]._fU4, l_U476[0]._fU8, l_U476[1]._fU0, l_U476[1]._fU4, l_U476[1]._fU8 );
                        l_U1003[0] = 0;
                    }
                    if (l_U1003[1])
                    {
                        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U483[0]._fU0, l_U483[0]._fU4, l_U483[0]._fU8, l_U483[1]._fU0, l_U483[1]._fU4, l_U483[1]._fU8 );
                        l_U1003[1] = 0;
                    }
                }
            }
        }
        if (NOT l_U1062)
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_2D( l_U699, l_U525._fU0, l_U525._fU4, 10.00000000, 10.00000000, 0 ))
                {
                    l_U1062 = 1;
                }
            }
        }
    }
    if (l_U354 == 6)
    {
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                {
                    if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                    {
                        if (NOT l_U1014)
                        {
                            if (LOCATE_CHAR_IN_CAR_3D( sub_5671(), l_U396._fU0, l_U396._fU4, l_U396._fU8, 150.00000000, 150.00000000, 150.00000000, 0 ))
                            {
                                l_U1014 = 1;
                            }
                        }
                        if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_5671(), l_U396._fU0, l_U396._fU4, l_U396._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if (l_U354 == 8)
    {
        if (DOES_BLIP_EXIST( l_U1228 ))
        {
            if (l_U1028)
            {
                if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_5671(), l_U399[0]._fU0, l_U399[0]._fU4, l_U399[0]._fU8, 1.50000000, 1.50000000, 1.50000000, 1 )))
                {
                    ;
                }
            }
        }
        GET_GAME_VIEWPORT_ID( ref uVar2 );
        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar2, l_U399[0]._fU0, l_U399[0]._fU4, l_U399[0]._fU8, 2.00000000 )))
        {
            CLEAR_AREA( l_U399[0]._fU0, l_U399[0]._fU4, l_U399[0]._fU8, 3.00000000, 0 );
        }
        if (NOT l_U1126)
        {
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                    {
                        if (LOCATE_CAR_3D( l_U678[l_U597], l_U399[0]._fU0 - 0.50000000, l_U399[0]._fU4 - 0.50000000, l_U399[0]._fU8 + 0.25000000, 1.70000000, 1.40000000, 1.00000000, 0 ))
                        {
                            if (NOT l_U1021[l_U597])
                            {
                                l_U1021[l_U597] = 1;
                                l_U599++;
                                l_U1028 = 0;
                                if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
                                {
                                    REMOVE_BLIP( l_U1237[l_U597] );
                                }
                                SET_CAR_CAN_BE_DAMAGED( l_U678[l_U597], 0 );
                                LOCK_CAR_DOORS( l_U678[l_U597], 3 );
                            }
                        }
                        else if (l_U1021[l_U597])
                        {
                            l_U1021[l_U597] = 0;
                            l_U599--;
                            SET_CAR_CAN_BE_DAMAGED( l_U678[l_U597], 1 );
                            LOCK_CAR_DOORS( l_U678[l_U597], 1 );
                        }
                    }
                }
            }
        }
    }
    if (l_U354 == 12)
    {
        if (NOT l_U1046)
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_5671(), l_U396._fU0, l_U396._fU4, 30.00000000, 30.00000000, 0 )))
                {
                    l_U1046 = 1;
                    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U704[l_U597] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U704[l_U597], 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U709[l_U597] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709[l_U597], 0 );
                        }
                    }
                }
            }
        }
        else if (l_U1108[1])
        {
            if (l_U971[14])
            {
                if (NOT l_U1108[2])
                {
                    if (NOT (sub_5787( l_U1265 )))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_20503( "E1J1_ROUTE", ref l_U1265, 6, 1 );
                            l_U1108[2] = 1;
                        }
                    }
                }
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), l_U368._fU0, l_U368._fU4, l_U368._fU8, 175.00000000, 175.00000000, 175.00000000, 0 ))
        {
            if (NOT l_U1153)
            {
                if (DOES_VEHICLE_EXIST( l_U762[0]._fU4 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U762[0]._fU4 ))
                    {
                        PLAY_AUDIO_EVENT_FROM_VEHICLE( "AMBIENT_HORNS_REGULAR_SIRENS", l_U762[0]._fU4 );
                        l_U1153 = 1;
                    }
                }
            }
            if (NOT l_U1153)
            {
                if (DOES_VEHICLE_EXIST( l_U762[1]._fU4 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U762[1]._fU4 ))
                    {
                        PLAY_AUDIO_EVENT_FROM_VEHICLE( "AMBIENT_HORNS_REGULAR_SIRENS", l_U762[1]._fU4 );
                        l_U1153 = 1;
                    }
                }
            }
            if (NOT l_U1153)
            {
                if (DOES_VEHICLE_EXIST( l_U762[2]._fU4 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U762[2]._fU4 ))
                    {
                        PLAY_AUDIO_EVENT_FROM_VEHICLE( "AMBIENT_HORNS_REGULAR_SIRENS", l_U762[2]._fU4 );
                        l_U1153 = 1;
                    }
                }
            }
            if (NOT l_U1153)
            {
                if (DOES_VEHICLE_EXIST( l_U762[3]._fU4 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U762[3]._fU4 ))
                    {
                        PLAY_AUDIO_EVENT_FROM_VEHICLE( "AMBIENT_HORNS_REGULAR_SIRENS", l_U762[3]._fU4 );
                        l_U1153 = 1;
                    }
                }
            }
        }
        if (NOT l_U1047)
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), l_U368._fU0, l_U368._fU4, l_U368._fU8, 150.00000000, 150.00000000, 150.00000000, 0 ))
                            {
                                l_U1047 = 1;
                                if (NOT (sub_5787( l_U1265 )))
                                {
                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                    {
                                        sub_20503( "E1J1_NEAR", ref l_U1265, 6, 1 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((l_U1157) || (l_U1158))
        {
            if (NOT l_U1159)
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), l_U368._fU0, l_U368._fU4, l_U368._fU8, 100.00000000, 100.00000000, 100.00000000, 0 ))
                                {
                                    l_U1159 = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U354 == 11)
    {
        if (NOT l_U1046)
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_5671(), l_U396._fU0, l_U396._fU4, 30.00000000, 30.00000000, 0 )))
                {
                    l_U1046 = 1;
                    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U704[l_U597] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U704[l_U597], 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U709[l_U597] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709[l_U597], 0 );
                        }
                    }
                }
            }
        }
        else if (l_U1108[1])
        {
            if (l_U971[14])
            {
                if (NOT l_U1108[2])
                {
                    if (NOT (sub_5787( l_U1265 )))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_20503( "E1J1_ROUTE", ref l_U1265, 6, 1 );
                            l_U1108[2] = 1;
                        }
                    }
                }
            }
        }
        if (NOT l_U1047)
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), l_U572._fU0, l_U572._fU4, l_U572._fU8, 75.00000000, 75.00000000, 75.00000000, 0 ))
                            {
                                l_U1047 = 1;
                                if (DOES_CHAR_EXIST( l_U699 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                                    {
                                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                        {
                                            if (NOT (sub_5787( l_U1265 )))
                                            {
                                                sub_20503( "E1J1_CLEAR", ref l_U1265, 6, 1 );
                                                l_U971[11] = 1;
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
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), l_U572._fU0, l_U572._fU4, l_U572._fU8, 100.00000000, 100.00000000, 100.00000000, 0 ))
        {
            if (NOT l_U1003[7])
            {
                SWITCH_ROADS_OFF( l_U518[0]._fU0, l_U518[0]._fU4, l_U518[0]._fU8, l_U518[1]._fU0, l_U518[1]._fU4, l_U518[1]._fU8 );
                CLEAR_AREA( l_U447._fU0, l_U447._fU4, l_U447._fU8, 50.00000000, 0 );
                l_U1003[7] = 1;
            }
        }
    }
    if (l_U354 == 13)
    {
        if (NOT l_U1003[7])
        {
            SWITCH_ROADS_OFF( l_U518[0]._fU0, l_U518[0]._fU4, l_U518[0]._fU8, l_U518[1]._fU0, l_U518[1]._fU4, l_U518[1]._fU8 );
            CLEAR_AREA( l_U447._fU0, l_U447._fU4, l_U447._fU8, 50.00000000, 0 );
            l_U1003[7] = 1;
        }
        if (NOT l_U1157)
        {
            if (DOES_VEHICLE_EXIST( l_U695[1] ))
            {
                if (IS_VEH_DRIVEABLE( l_U695[1] ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_5671(), l_U695[1] ))
                    {
                        if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_5671(), -1696.54300000, 357.68370000, 24.44140000 + 2.00000000, 2.50000000, 2.50000000, 2.50000000, 1 )))
                        {
                            ;
                        }
                        if (LOCATE_CHAR_IN_CAR_3D( sub_5671(), -1696.54300000, 357.68370000, 24.44140000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                        {
                            l_U355 = 0;
                            l_U354 = 16;
                        }
                    }
                }
            }
        }
        else if (DOES_VEHICLE_EXIST( l_U676 ))
        {
            if (IS_VEH_DRIVEABLE( l_U676 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_5671(), l_U676 ))
                {
                    if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_5671(), -1696.54300000, 357.68370000, 24.44140000 + 2.00000000, 2.50000000, 2.50000000, 2.50000000, 1 )))
                    {
                        ;
                    }
                    if (LOCATE_CHAR_IN_CAR_3D( sub_5671(), -1696.54300000, 357.68370000, 24.44140000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                    {
                        l_U355 = 0;
                        l_U354 = 16;
                    }
                }
            }
        }
    }
    return;
}

void sub_64154()
{
    int iVar2;
    vector vVar3;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown[5] uVar12;
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
    float fVar28;
    unknown uVar29;

    array(ref uVar12, 5);
    vVar3 = {956.70660000, -291.89470000, 18.59580000};
    if (DOES_VEHICLE_EXIST( l_U677 ))
    {
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (LOCATE_CAR_3D( l_U677, vVar3.x, vVar3.y, vVar3.z, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                FREEZE_CAR_POSITION( l_U677, 1 );
                SET_CAR_ENGINE_ON( l_U677, 0, 1 );
                SET_ENGINE_HEALTH( l_U677, -1.00000000 );
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U699 ))
    {
        if (IS_CHAR_INJURED( l_U699 ))
        {
            if (DOES_BLIP_EXIST( l_U736._fU100 ))
            {
                REMOVE_BLIP( l_U736._fU100 );
            }
        }
    }
    if (l_U354 == 4)
    {
        if ((IS_CHAR_INJURED( l_U699 )) || (IS_CHAR_DEAD( l_U699 )))
        {
            l_U598 = 1;
            sub_64430();
        }
        if (l_U1012)
        {
            if (sub_67006( l_U677 ))
            {
                if (DOES_VEHICLE_EXIST( l_U677 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U677 )))
                    {
                        if (IS_CAR_ON_FIRE( l_U677 ))
                        {
                            l_U607 = 10;
                            STOP_CAR_BREAKING( l_U677, 0 );
                            SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                            SET_CAR_ENGINE_ON( l_U677, 0, 0 );
                        }
                    }
                }
                l_U598 = 4;
                sub_64430();
            }
        }
    }
    if (l_U354 == 5)
    {
        if ((IS_CHAR_INJURED( l_U699 )) || (IS_CHAR_DEAD( l_U699 )))
        {
            l_U598 = 1;
            sub_64430();
        }
        if (l_U599 == 0)
        {
            ;
        }
        if (l_U1012)
        {
            if (sub_67006( l_U677 ))
            {
                if (l_U599 == 0)
                {
                    if (DOES_VEHICLE_EXIST( l_U677 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U677 )))
                        {
                            if (IS_CAR_ON_FIRE( l_U677 ))
                            {
                                l_U607 = 10;
                                STOP_CAR_BREAKING( l_U677, 0 );
                                SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                                SET_CAR_ENGINE_ON( l_U677, 0, 0 );
                            }
                        }
                    }
                    l_U598 = 4;
                    sub_64430();
                }
                else
                {
                    l_U598 = 4;
                    sub_64430();
                }
            }
        }
    }
    if (l_U354 == 6)
    {
        if (DOES_CHAR_EXIST( l_U699 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                GET_CHAR_COORDINATES( l_U699, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                GET_CHAR_COORDINATES( sub_5671(), ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar9._fU0, uVar9._fU4, uVar9._fU8, ref fVar28 );
                if (fVar28 >= 100.00000000)
                {
                    GET_GAME_VIEWPORT_ID( ref uVar29 );
                    if (NOT (CAM_IS_SPHERE_VISIBLE( uVar29, uVar6._fU0, uVar6._fU4, uVar6._fU8, 3.00000000 )))
                    {
                        SET_CHAR_HEALTH( l_U699, 99 );
                    }
                }
            }
        }
        if ((IS_CHAR_INJURED( l_U699 )) || (IS_CHAR_DEAD( l_U699 )))
        {
            l_U598 = 1;
            sub_64430();
        }
        if (l_U1012)
        {
            if (sub_67006( l_U677 ))
            {
                if (DOES_VEHICLE_EXIST( l_U677 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U677 )))
                    {
                        if (IS_CAR_ON_FIRE( l_U677 ))
                        {
                            l_U607 = 10;
                            STOP_CAR_BREAKING( l_U677, 0 );
                            SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                            SET_CAR_ENGINE_ON( l_U677, 0, 0 );
                        }
                    }
                }
                l_U598 = 4;
                sub_64430();
            }
        }
        if (l_U1014)
        {
            if (NOT l_U1126)
            {
                for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                {
                    if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                    {
                        if (NOT (IS_VEH_DRIVEABLE( l_U678[l_U597] )))
                        {
                            iVar2++;
                        }
                    }
                }
                if (iVar2 > 1)
                {
                    l_U598 = 5;
                    sub_64430();
                }
                else
                {
                    iVar2 = 0;
                }
            }
        }
    }
    if (l_U354 == 8)
    {
        if (DOES_CHAR_EXIST( l_U699 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                GET_CHAR_COORDINATES( l_U699, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                GET_CHAR_COORDINATES( sub_5671(), ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar9._fU0, uVar9._fU4, uVar9._fU8, ref fVar28 );
                if (fVar28 >= 100.00000000)
                {
                    GET_GAME_VIEWPORT_ID( ref uVar29 );
                    if (NOT (CAM_IS_SPHERE_VISIBLE( uVar29, uVar6._fU0, uVar6._fU4, uVar6._fU8, 3.00000000 )))
                    {
                        SET_CHAR_HEALTH( l_U699, 99 );
                    }
                }
            }
        }
        if (IS_CHAR_INJURED( l_U699 ))
        {
            l_U598 = 1;
            sub_64430();
        }
        if (l_U1012)
        {
            if (sub_67006( l_U677 ))
            {
                if (DOES_VEHICLE_EXIST( l_U677 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U677 )))
                    {
                        if (IS_CAR_ON_FIRE( l_U677 ))
                        {
                            l_U607 = 10;
                            STOP_CAR_BREAKING( l_U677, 0 );
                            SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                            SET_CAR_ENGINE_ON( l_U677, 0, 0 );
                        }
                    }
                }
                l_U598 = 4;
                sub_64430();
            }
        }
        if (NOT l_U1126)
        {
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( l_U678[l_U597] )))
                    {
                        iVar2++;
                    }
                }
            }
            if (iVar2 > 1)
            {
                l_U598 = 5;
                sub_64430();
            }
            else
            {
                iVar2 = 0;
            }
        }
    }
    if (l_U354 == 9)
    {
        if (l_U1012)
        {
            if (sub_67006( l_U677 ))
            {
                if (l_U599 == 0)
                {
                    l_U598 = 4;
                    sub_64430();
                }
                else
                {
                    for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                    {
                        if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                            {
                                if (l_U1021[l_U597])
                                {
                                    if (DOES_VEHICLE_EXIST( l_U677 ))
                                    {
                                        if (NOT (IS_CAR_DEAD( l_U677 )))
                                        {
                                            SET_ENGINE_HEALTH( l_U678[l_U597], 0.00000000 );
                                        }
                                        else
                                        {
                                            SET_ENGINE_HEALTH( l_U678[l_U597], -1000.00000000 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                    l_U598 = 4;
                    sub_64430();
                }
            }
        }
        if ((IS_CHAR_INJURED( l_U699 )) || (IS_CHAR_DEAD( l_U699 )))
        {
            l_U598 = 1;
            sub_64430();
        }
    }
    if (l_U354 == 10)
    {
        if (l_U1012)
        {
            if (sub_67006( l_U677 ))
            {
                if (l_U599 == 0)
                {
                    l_U598 = 4;
                    sub_64430();
                }
                else
                {
                    l_U598 = 4;
                    sub_64430();
                }
            }
        }
        if ((IS_CHAR_INJURED( l_U699 )) || (IS_CHAR_DEAD( l_U699 )))
        {
            l_U598 = 1;
            sub_64430();
        }
    }
    if (l_U354 == 11)
    {
        if (l_U1012)
        {
            if (sub_67006( l_U677 ))
            {
                if (l_U599 == 0)
                {
                    if (DOES_VEHICLE_EXIST( l_U677 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U677 )))
                        {
                            if (IS_CAR_ON_FIRE( l_U677 ))
                            {
                                l_U607 = 10;
                                STOP_CAR_BREAKING( l_U677, 0 );
                                SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                                SET_CAR_ENGINE_ON( l_U677, 0, 0 );
                            }
                        }
                    }
                    l_U598 = 4;
                    sub_64430();
                }
                else if (DOES_VEHICLE_EXIST( l_U677 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U677 )))
                    {
                        if (IS_CAR_ON_FIRE( l_U677 ))
                        {
                            l_U607 = 10;
                            STOP_CAR_BREAKING( l_U677, 0 );
                            SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                            SET_CAR_ENGINE_ON( l_U677, 0, 0 );
                        }
                    }
                }
                l_U598 = 4;
                sub_64430();;
            }
        }
        if ((IS_CHAR_INJURED( l_U699 )) || (IS_CHAR_DEAD( l_U699 )))
        {
            l_U598 = 1;
            sub_64430();
        }
    }
    if (l_U354 == 12)
    {
        if (l_U1012)
        {
            if (sub_67006( l_U677 ))
            {
                if (l_U599 == 0)
                {
                    if (DOES_VEHICLE_EXIST( l_U677 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U677 )))
                        {
                            if (IS_CAR_ON_FIRE( l_U677 ))
                            {
                                l_U607 = 10;
                                STOP_CAR_BREAKING( l_U677, 0 );
                                SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                                SET_CAR_ENGINE_ON( l_U677, 0, 0 );
                            }
                        }
                    }
                    l_U598 = 4;
                    sub_64430();
                }
                else if (DOES_VEHICLE_EXIST( l_U677 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U677 )))
                    {
                        if (IS_CAR_ON_FIRE( l_U677 ))
                        {
                            l_U607 = 10;
                            STOP_CAR_BREAKING( l_U677, 0 );
                            SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                            SET_CAR_ENGINE_ON( l_U677, 0, 0 );
                        }
                    }
                }
                l_U598 = 4;
                sub_64430();;
            }
        }
        if ((IS_CHAR_INJURED( l_U699 )) || (IS_CHAR_DEAD( l_U699 )))
        {
            l_U598 = 1;
            sub_64430();
        }
        if (l_U1157)
        {
            if (l_U1159)
            {
                if (DOES_VEHICLE_EXIST( l_U675 ))
                {
                    if (sub_67006( l_U675 ))
                    {
                        l_U598 = 2;
                        sub_64430();
                    }
                }
                if (DOES_VEHICLE_EXIST( l_U676 ))
                {
                    if (sub_67006( l_U676 ))
                    {
                        l_U598 = 3;
                        sub_64430();
                    }
                }
            }
        }
    }
    if (l_U354 == 13)
    {
        if (NOT l_U1157)
        {
            if (DOES_VEHICLE_EXIST( l_U695[1] ))
            {
                if (IS_VEH_DRIVEABLE( l_U695[1] ))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U695[1] )))
                    {
                        GET_CAR_COORDINATES( l_U695[1], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                        GET_CHAR_COORDINATES( sub_5671(), ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                        GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar9._fU0, uVar9._fU4, uVar9._fU8, ref fVar28 );
                        if (fVar28 >= 100.00000000)
                        {
                            GET_GAME_VIEWPORT_ID( ref uVar29 );
                            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar29, uVar6._fU0, uVar6._fU4, uVar6._fU8, 3.00000000 )))
                            {
                                SET_ENGINE_HEALTH( l_U695[1], 0 );
                            }
                        }
                    }
                }
            }
            if ((IS_CHAR_INJURED( l_U699 )) || (IS_CHAR_DEAD( l_U699 )))
            {
                l_U598 = 1;
                sub_64430();
            }
            if (l_U1012)
            {
                if (sub_67006( l_U677 ))
                {
                    for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                    {
                        if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                            {
                                if (l_U1021[l_U597])
                                {
                                    if (DOES_VEHICLE_EXIST( l_U677 ))
                                    {
                                        if (IS_CAR_DEAD( l_U677 ))
                                        {
                                            SET_ENGINE_HEALTH( l_U678[l_U597], 0.00000000 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U677 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U677 )))
                        {
                            if (IS_CAR_ON_FIRE( l_U677 ))
                            {
                                l_U607 = 10;
                                STOP_CAR_BREAKING( l_U677, 0 );
                                SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                                SET_CAR_ENGINE_ON( l_U677, 0, 0 );
                            }
                        }
                    }
                    l_U598 = 4;
                    sub_64430();
                }
            }
            if (sub_67006( l_U695[0] ))
            {
                l_U598 = 5;
                sub_64430();
            }
            if (sub_67006( l_U695[1] ))
            {
                l_U598 = 5;
                sub_64430();
            }
        }
        else if (DOES_VEHICLE_EXIST( l_U676 ))
        {
            if (IS_VEH_DRIVEABLE( l_U676 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U676 )))
                {
                    GET_CAR_COORDINATES( l_U676, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                    GET_CHAR_COORDINATES( sub_5671(), ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar9._fU0, uVar9._fU4, uVar9._fU8, ref fVar28 );
                    if (fVar28 >= 100.00000000)
                    {
                        GET_GAME_VIEWPORT_ID( ref uVar29 );
                        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar29, uVar6._fU0, uVar6._fU4, uVar6._fU8, 3.00000000 )))
                        {
                            SET_ENGINE_HEALTH( l_U676, 0 );
                        }
                    }
                }
            }
        }
        if ((IS_CHAR_INJURED( l_U699 )) || (IS_CHAR_DEAD( l_U699 )))
        {
            l_U598 = 1;
            sub_64430();
        }
        if (l_U1012)
        {
            if (sub_67006( l_U677 ))
            {
                for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                {
                    if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                        {
                            if (l_U1021[l_U597])
                            {
                                if (DOES_VEHICLE_EXIST( l_U677 ))
                                {
                                    if (IS_CAR_DEAD( l_U677 ))
                                    {
                                        SET_ENGINE_HEALTH( l_U678[l_U597], 0.00000000 );
                                    }
                                }
                            }
                        }
                    }
                }
                if (DOES_VEHICLE_EXIST( l_U677 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U677 )))
                    {
                        if (IS_CAR_ON_FIRE( l_U677 ))
                        {
                            l_U607 = 10;
                            STOP_CAR_BREAKING( l_U677, 0 );
                            SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                            SET_CAR_ENGINE_ON( l_U677, 0, 0 );
                        }
                    }
                }
                l_U598 = 4;
                sub_64430();
            }
        }
        if (sub_67006( l_U675 ))
        {
            l_U598 = 2;
            sub_64430();
        }
        if (sub_67006( l_U676 ))
        {
            l_U598 = 3;
            sub_64430();
        }
    }
    return;
}

void sub_64430()
{
    CLEAR_PRINTS();
    if (l_U1048)
    {
        sub_5492( 0, 0 );
    }
    sub_435();
    if (l_U1126)
    {
        for ( l_U597 = 0; l_U597 < 5; l_U597++ )
        {
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                        {
                            if (IS_CAR_ATTACHED( l_U678[l_U597] ))
                            {
                                SET_ENGINE_HEALTH( l_U678[l_U597], 0.00000000 );
                            }
                        }
                    }
                }
                else if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                    {
                        if (IS_CAR_ATTACHED( l_U678[l_U597] ))
                        {
                            SET_ENGINE_HEALTH( l_U678[l_U597], -1000.00000000 );
                        }
                    }
                }
            }
        }
    }
    if (l_U1046)
    {
        if (NOT l_U1047)
        {
            if (NOT l_U1103)
            {
                sub_64781( ref l_U762 );
                l_U1103 = 1;
            }
        }
    }
    if (l_U1103)
    {
        for ( l_U597 = 0; l_U597 < 4; l_U597++ )
        {
            if (DOES_CHAR_EXIST( l_U727[l_U597 + 4] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U727[l_U597 + 4] )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U727[l_U597 + 4] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U727[l_U597 + 4], 25, ref l_U1194[l_U597 + 4] );
                        if ((l_U1194[l_U597 + 4]) == 7)
                        {
                            if (l_U1037[l_U597 + 4])
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U727[l_U597 + 4], 1 );
                                l_U1037[l_U597 + 4] = 0;
                            }
                            TASK_SMART_FLEE_CHAR( l_U727[l_U597 + 4], sub_5671(), 200.00000000, -1 );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U727[l_U597 + 4] );
                        }
                    }
                    else if (l_U1037[l_U597 + 4])
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U727[l_U597 + 4], 1 );
                        l_U1037[l_U597 + 4] = 0;
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U727[l_U597 + 4] );
                    }
                }
            }
        }
    }
    if (DOES_BLIP_EXIST( l_U1225 ))
    {
        REMOVE_BLIP( l_U1225 );
    }
    if (DOES_BLIP_EXIST( l_U1226 ))
    {
        REMOVE_BLIP( l_U1226 );
    }
    if (DOES_BLIP_EXIST( l_U1227 ))
    {
        REMOVE_BLIP( l_U1227 );
    }
    if (DOES_BLIP_EXIST( l_U1235 ))
    {
        REMOVE_BLIP( l_U1235 );
    }
    if (DOES_BLIP_EXIST( l_U1236 ))
    {
        REMOVE_BLIP( l_U1236 );
    }
    if (DOES_BLIP_EXIST( l_U1248 ))
    {
        REMOVE_BLIP( l_U1248 );
    }
    for ( l_U597 = 0; l_U597 < 2; l_U597++ )
    {
        if (DOES_BLIP_EXIST( l_U1229[l_U597] ))
        {
            REMOVE_BLIP( l_U1229[l_U597] );
        }
        if (DOES_BLIP_EXIST( l_U1232[l_U597] ))
        {
            REMOVE_BLIP( l_U1232[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 5; l_U597++ )
    {
        if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
        {
            REMOVE_BLIP( l_U1237[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 3; l_U597++ )
    {
        if (DOES_BLIP_EXIST( l_U1244[l_U597] ))
        {
            REMOVE_BLIP( l_U1244[l_U597] );
        }
    }
    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
    {
        if (DOES_BLIP_EXIST( l_U1249[l_U597] ))
        {
            REMOVE_BLIP( l_U1249[l_U597] );
        }
    }
    if (DOES_BLIP_EXIST( l_U1228 ))
    {
        REMOVE_BLIP( l_U1228 );
    }
    if ((((l_U598 == 2) || (l_U598 == 4)) || (l_U598 == 5)) || (l_U598 == 6))
    {
        l_U359 = 0;
        l_U1069 = 1;
    }
    else if (l_U598 == 1)
    {
        l_U359 = 5;
        l_U1069 = 1;
    }
    if (NOT (IS_CHAR_INJURED( l_U699 )))
    {
        CLEAR_CHAR_TASKS( l_U699 );
    }
    if (sub_5787( l_U1265 ))
    {
        sub_5971( ref l_U1265, 0 );
    }
    if (sub_5787( l_U1271 ))
    {
        sub_5971( ref l_U1271, 0 );
    }
    if (sub_5787( l_U1277 ))
    {
        sub_5971( ref l_U1277, 0 );
    }
    if (l_U598 == 1)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "J1_F1", 7500, 1 );
    }
    if (l_U598 == 2)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "J1_F2", 7500, 1 );
        l_U637 = "E1J1_DROP2";
    }
    if (l_U598 == 3)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "J1_F3", 7500, 1 );
        l_U637 = "E1J1_DROP2";
    }
    if (l_U598 == 4)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "J1_F4", 7500, 1 );
        l_U637 = "E1J1_DROP";
    }
    if (l_U598 == 5)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "J1_F5", 7500, 1 );
        l_U637 = "E1J1_DROP2";
    }
    if (l_U598 == 6)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "J1_F6", 7500, 1 );
        l_U637 = "E1J1_DROP2";
    }
    l_U354 = 19;
    return;
}

void sub_64781(unknown uParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    for ( I = 0; I < (uParam0^); I++ )
    {
        sub_64812( ref (uParam0^)[I], ref uVar4, ref uVar5 );
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            bVar7 = true;
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( uVar5, 0 );
                if (sub_44701( (uParam0^)[I]._fU0, uVar5 ))
                {
                    if (IS_PLAYER_PLAYING( sub_5742() ))
                    {
                        TASK_CAR_MISSION_PED_TARGET( (uParam0^)[I]._fU0, uVar5, sub_5671(), 8, 25.00000000, 2, 200, -1 );
                    }
                    else
                    {
                        uVar8 = {sub_36325( (uParam0^)[I]._fU0, 1 )};
                        TASK_CAR_MISSION_COORS_TARGET( (uParam0^)[I]._fU0, uVar5, uVar8._fU0, uVar8._fU4, uVar8._fU8, 8, 25.00000000, 2, 200, -1 );
                    }
                    bVar7 = false;
                }
            }
            if (bVar7)
            {
                OPEN_SEQUENCE_TASK( ref uVar6 );
                if (IS_CHAR_IN_ANY_CAR( (uParam0^)[I]._fU0 ))
                {
                    TASK_PAUSE( 0, 10000 );
                }
                SET_NEXT_DESIRED_MOVE_STATE( 3 );
                TASK_WANDER_STANDARD( 0 );
                CLOSE_SEQUENCE_TASK( uVar6 );
                TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar6 );
                CLEAR_SEQUENCE_TASK( uVar6 );
            }
        }
        sub_65317( ref (uParam0^)[I], 1 );
    }
    return;
}

void sub_64812(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_36067( iParam0 ) ))
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
        {
            g_U11114 = 1;
        }
        TASK_STAND_STILL( iParam0->_fU0, -2 );
    }
    return;
}

void sub_65317(int iParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((DOES_VEHICLE_EXIST( iParam0->_fU4 )) AND (uParam1))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
    }
    if (DOES_CHAR_EXIST( iParam0->_fU0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            SET_CHAR_KEEP_TASK( iParam0->_fU0, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( iParam0 + 0 );
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

int sub_67006(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if ((((((NOT (IS_VEH_DRIVEABLE( uParam0 ))) || (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))) || (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))) || (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))) || (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))) || (IS_CAR_IN_WATER( uParam0 )))
        {
            l_U607 = 10;
            return 1;
        }
    }
    return 0;
}

void sub_70925()
{
    if (DOES_VEHICLE_EXIST( l_U677 ))
    {
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (IS_CAR_ON_FIRE( l_U677 ))
            {
                if (NOT (l_U607 == 100))
                {
                    SET_ENGINE_HEALTH( l_U677, -1.00000000 );
                    l_U607 = 100;
                }
            }
            GET_CAR_HEALTH( l_U677, ref l_U606 );
            if (l_U606 < 0.00000000)
            {
                l_U607 = 10;
            }
            else if (NOT (l_U607 > 5))
            {
                if (l_U606 < 800)
                {
                    l_U606 = 1000;
                    l_U607++;
                }
            }
        }
    }
    return;
}

void sub_71130()
{
    int iVar2;

    if (l_U634 == 0)
    {
        iVar2 = 20000;
    }
    else
    {
        iVar2 = 15000;
    }
    if (NOT (l_U634 > 1))
    {
        GET_GAME_TIMER( ref l_U631 );
        l_U632 = l_U631 - l_U630;
        if (l_U632 > iVar2)
        {
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (DOES_VEHICLE_EXIST( l_U675 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U675 ))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( l_U699, l_U675 ))
                            {
                                if (DOES_VEHICLE_EXIST( l_U676 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U676 ))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( sub_5671(), l_U676 ))
                                        {
                                            if (LOCATE_CHAR_IN_CAR_CAR_3D( sub_5671(), l_U675, 20.00000000, 20.00000000, 20.00000000, 0 ))
                                            {
                                                l_U1155 = 1;
                                                GET_GAME_TIMER( ref l_U629 );
                                            }
                                            else
                                            {
                                                sub_5971( ref l_U1265, 1 );
                                                l_U1155 = 0;
                                            }
                                        }
                                        else
                                        {
                                            sub_5971( ref l_U1265, 0 );
                                            l_U1155 = 0;
                                        }
                                    }
                                    else
                                    {
                                        sub_5971( ref l_U1265, 0 );
                                        l_U1155 = 0;
                                    }
                                }
                            }
                            else
                            {
                                sub_5971( ref l_U1265, 0 );
                                l_U1155 = 0;
                            }
                        }
                        else
                        {
                            sub_5971( ref l_U1265, 0 );
                            l_U1155 = 0;
                        }
                    }
                }
                else
                {
                    sub_5971( ref l_U1265, 0 );
                    l_U1155 = 0;
                }
            }
        }
        if (l_U1155 == 1)
        {
            if (NOT l_U1160)
            {
                l_U1160 = 1;
            }
        }
        if (l_U1155)
        {
            GET_GAME_TIMER( ref l_U628 );
            l_U627 = l_U628 - l_U629;
            if (l_U629 > 2000)
            {
                if (DOES_CHAR_EXIST( l_U699 ))
                {
                    if (DOES_VEHICLE_EXIST( l_U675 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U675 ))
                        {
                            if (IS_CHAR_IN_CAR( l_U699, l_U675 ))
                            {
                                if (DOES_VEHICLE_EXIST( l_U676 ))
                                {
                                    if (IS_CHAR_IN_CAR( sub_5671(), l_U676 ))
                                    {
                                        if (NOT (sub_5787( l_U1265 )))
                                        {
                                            if (NOT l_U1139[1])
                                            {
                                                TASK_LOOK_AT_CHAR( l_U699, sub_5671(), -2, 0 );
                                                TASK_LOOK_AT_CHAR( sub_5671(), l_U699, -2, 128 );
                                                if (g_U39246 == 0)
                                                {
                                                    if (l_U634 == 0)
                                                    {
                                                        sub_20503( "E1J1_B1V1", ref l_U1265, 6, 1 );
                                                        l_U1139[1] = 1;
                                                    }
                                                    else
                                                    {
                                                        sub_20503( "E1J1_RIDE", ref l_U1265, 6, 1 );
                                                        l_U1139[1] = 1;
                                                    }
                                                }
                                                else if (l_U634 == 0)
                                                {
                                                    sub_20503( "E1J1_RIDE2", ref l_U1265, 6, 1 );
                                                    l_U1139[1] = 1;
                                                }
                                                else
                                                {
                                                    sub_20503( "E1J1_B1V2", ref l_U1265, 6, 1 );
                                                    l_U1139[1] = 1;
                                                }
                                            }
                                            else
                                            {
                                                sub_5971( ref l_U1265, 1 );
                                                l_U1155 = 0;
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
        if (NOT l_U1155)
        {
            if (l_U1139[1])
            {
                GET_GAME_TIMER( ref l_U630 );
                l_U1139[1] = 0;
                if (DOES_CHAR_EXIST( l_U699 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        TASK_CLEAR_LOOK_AT( l_U699 );
                    }
                }
                TASK_CLEAR_LOOK_AT( sub_5671() );
                l_U634++;
            }
        }
    }
    return;
}

void sub_72172()
{
    if ((l_U1124) AND (NOT l_U1125))
    {
        l_U1127 = 1;
    }
    else
    {
        g_U15862[6]._fU8[0]._fU0[0] = 0;
        g_U15862[7]._fU8[0]._fU0[0] = 0;
        l_U1127 = 0;
    }
    if (l_U1127)
    {
        if (l_U1049[1])
        {
            if (l_U971[11])
            {
                if (l_U1161[0])
                {
                    if (NOT (sub_5787( l_U1265 )))
                    {
                        if (NOT sub_56049())
                        {
                            if (NOT l_U1048)
                            {
                                if (NOT l_U971[27])
                                {
                                    PRINT_NOW( "J1_27", 7500, 1 );
                                    l_U971[27] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (l_U971[11])
        {
            if (l_U1161[0])
            {
                if (NOT l_U1049[1])
                {
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                if (NOT (sub_5787( l_U1265 )))
                                {
                                    sub_20503( "E1J1_CALL3", ref l_U1265, 6, 1 );
                                    l_U1049[1] = 1;
                                    GET_GAME_TIMER( ref l_U630 );
                                }
                            }
                        }
                    }
                }
            }
        }
        if (l_U971[11])
        {
            if (NOT l_U1049[1])
            {
                if (NOT l_U1161[0])
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (NOT (sub_5787( l_U1265 )))
                        {
                            sub_20503( "E1J1_REPLY", ref l_U1265, 6, 1 );
                            l_U1161[0] = 1;
                        }
                    }
                }
            }
        }
        if (NOT l_U971[11])
        {
            if (DOES_CHAR_EXIST( l_U717[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U717[0] )))
                {
                    sub_6651( 2, l_U717[0], "Angel", 0 );
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (NOT (sub_5787( l_U1265 )))
                        {
                            sub_20503( "E1J1_ARRV", ref l_U1265, 6, 1 );
                            l_U971[11] = 1;
                        }
                    }
                }
            }
        }
        if (l_U971[11])
        {
            if (l_U1049[1])
            {
                if (NOT l_U1048)
                {
                    sub_72820();
                }
                if (NOT l_U1107)
                {
                    sub_76985( 6 );
                    sub_77120( 6 );
                    GET_GAME_TIMER( ref l_U615 );
                    g_U15862[6]._fU8[0]._fU0[0] = 1;
                    l_U1107 = 1;
                }
                if (NOT l_U1106)
                {
                    GET_GAME_TIMER( ref l_U616 );
                    l_U617 = l_U616 - l_U615;
                    if (l_U617 > 10000)
                    {
                        sub_76985( 7 );
                        g_U15862[7]._fU8[0]._fU0[0] = 1;
                        l_U1106 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_72820()
{
    switch (l_U360)
    {
        case 0:
        if (((sub_72867( 6, 0 )) AND (g_U15862[6]._fU4)) AND (g_U15862[6]._fU8[1]._fU0[0]))
        {
            l_U971[27] = 1;
            if (sub_73242( "E1J2_TERRBK", "E1J1AUD", 0 ))
            {
                l_U360 = 1;
            }
            g_U15862[6]._fU4 = 0;
            g_U15862[6]._fU8[1]._fU0[0] = 0;
        }
        if (((sub_72867( 7, 0 )) AND (g_U15862[7]._fU4)) AND (g_U15862[7]._fU8[1]._fU0[0]))
        {
            l_U971[27] = 1;
            if (sub_73242( "E1J2_CLAYBK", "E1J1AUD", 0 ))
            {
                l_U360 = 1;
            }
            g_U15862[7]._fU4 = 0;
            g_U15862[7]._fU8[1]._fU0[0] = 0;
        }
        break;
        case 1:
        if ((sub_76415( 0 )) || (sub_76676() == 2))
        {
            l_U360 = 2;
        }
        break;
        case 2:
        if (NOT l_U1048)
        {
            sub_76767();
            l_U1048 = 1;
            g_U15862[6]._fU8[0]._fU0[0] = 0;
            g_U15862[7]._fU8[0]._fU0[0] = 0;
            l_U971[27] = 1;
        }
        break;
    }
    return;
}

int sub_72867(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_5899( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_5899( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U94._fU0 == 1005) AND (g_U94._fU60 == iParam0))
    {
        if (bParam1)
        {
            if ((g_U94._fU508 >= 4) AND (NOT g_U94._fU372))
            {
                return 1;
            }
        }
        else if (NOT g_U94._fU368)
        {
            return 1;
        }
    }
    return 0;
}

int sub_73242(unknown uParam0, unknown uParam1, boolean bParam2)
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
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U94._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_73350( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U94._fU368) == 1)
        {
            StrCopy( ref g_U94._fU224[0], uParam1, 16 );
            StrCopy( ref g_U94._fU224[1], uParam0, 16 );
            sub_75237( uVar23, ref g_U94._fU176 );
            g_U94._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_73350(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_5899( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_5899( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_5742() )))
    {
        sub_5899( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_5671() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5671() ))))
    {
        sub_5899( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_5899( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_73865()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU48 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
        case 1:
        if (g_U94._fU368)
        {
            if ((g_U94._fU372) || (NOT bParam8))
            {
                sub_5899( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U94._fU60 != -1)
        {
            if ((g_U15862[g_U94._fU60]._fU196._fU24 != 5) AND (g_U15862[g_U94._fU60]._fU196._fU24 != 4))
            {
                g_U15862[g_U94._fU60]._fU196._fU24 = 0;
            }
        }
        g_U94._fU368 = 1;
        g_U94._fU372 = bParam8;
        uParam0 = g_U94._fU60;
        break;
        case 2:
        if ((NOT sub_73865()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU52 = 1;
        g_U94._fU56 = 1;
        g_U94._fU372 = 1;
        g_U94._fU368 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_75237( uParam0, ref g_U94._fU176 );
    sub_75633( ref g_U94._fU160 );
    g_U94._fU380 = uParam10;
    g_U94._fU376 = bParam11;
    g_U94._fU420 = uParam12;
    g_U94._fU424 = -1;
    g_U94._fU364 = uParam3;
    StrCopy( ref g_U94._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U9051[I] = {(uParam1^)[I]};
        sub_6771( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U94._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U94._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U94._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U94._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U94._fU208, uParam6, 16 );
    g_U94._fU80 = uParam7;
    g_U94._fU384 = 0;
    g_U94._fU532 = uParam13;
    g_U8946 = 4;
    return 1;
}

int sub_73865()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_73922())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_73922()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_5742() )))
    {
        sub_5899( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_5899( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_5899( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_5899( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_5742() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_5671() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_5671(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_5899( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_5671() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_5899( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_5899( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5742() )))
    {
        sub_5899( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_75237(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "BILLY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "JIM", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "STUBBS", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ASHLEY", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "RAY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "TERRY", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "CLAY", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "ANGUS", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "MALC", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FED", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_75633(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

int sub_76415(boolean bParam0)
{
    unknown uVar3;

    if (g_U94._fU60 != -1)
    {
        switch (g_U15862[g_U94._fU60]._fU196._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U94._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_5671(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_5899( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_76676()
{
    if (g_U94._fU60 != -1)
    {
        return g_U15862[g_U94._fU60]._fU196._fU24;
    }
    return 6;
}

void sub_76767()
{
    REQUEST_SCRIPT( "ability_backup" );
    while (NOT (HAS_SCRIPT_LOADED( "ability_backup" )))
    {
        REQUEST_SCRIPT( "ability_backup" );
        WAIT( 0 );
    }
    START_NEW_SCRIPT( "ability_backup", 1828 );
    return;
}

void sub_76985(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15862[uParam0]._fU196._fU0)
    {
        if (g_U94._fU0 == 1012)
        {
            g_U94._fU92 = 1;
        }
        g_U15862[uParam0]._fU196._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15862[uParam0]._fU196._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U94._fU520 = 0;
    }
    return;
}

void sub_77120(unknown uParam0)
{
    if (g_U15862[uParam0]._fU196._fU0)
    {
        g_U94._fU72 = uParam0;
    }
    else
    {
        g_U94._fU72 = -1;
    }
    return;
}

void sub_77316()
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
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    float[2] fVar24;
    unknown[2] uVar27;

    array(ref vVar2, 2);
    array(ref vVar9, 2);
    array(ref uVar16, 2);
    array(ref fVar24, 2);
    array(ref uVar27, 2);
    fVar24[0] = 36.47290000;
    fVar24[1] = 6.59980000;
    vVar2[0] = {-1487.19900000, -42.57000000, 5.55600000};
    vVar2[1] = {-1481.41700000, -41.39020000, 5.50600000};
    vVar9[0] = {-1483.45600000, -51.58230000, 5.42100000};
    vVar9[1] = {-1481.89000000, -54.23670000, 6.56200000};
    if (l_U1048)
    {
        if (NOT l_U1161[1])
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT (sub_5787( l_U1265 )))
                {
                    if (NOT sub_56049())
                    {
                        if (NOT l_U1161[1])
                        {
                            sub_20503( "E1J1_TANDC", ref l_U1265, 6, 1 );
                            l_U1161[1] = 1;
                        }
                    }
                }
            }
        }
        if (l_U354 == 8)
        {
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (NOT l_U1053[l_U597])
                {
                    if (NOT l_U1100[l_U597])
                    {
                        if (IS_VEH_DRIVEABLE( g_U11087[l_U597] ))
                        {
                            LOCK_CAR_DOORS( g_U11087[l_U597], 3 );
                            if (NOT (IS_CHAR_INJURED( g_U11081[l_U597] )))
                            {
                                if (IS_CHAR_IN_CAR( g_U11081[l_U597], g_U11087[l_U597] ))
                                {
                                    if ((LOCATE_CHAR_ANY_MEANS_3D( g_U11081[l_U597], vVar2[l_U597]._fU0, vVar2[l_U597]._fU4, vVar2[l_U597]._fU8, 15.00000000, 15.00000000, 15.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U11081[l_U597], sub_5671(), 20.00000000, 20.00000000, 20.00000000, 0 )))
                                    {
                                        sub_77876( g_U11081[l_U597], 1 );
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[l_U597], 1 );
                                        GET_PLAYER_GROUP( sub_5742(), ref l_U1264 );
                                        if (IS_GROUP_MEMBER( g_U11081[l_U597], l_U1264 ))
                                        {
                                            REMOVE_CHAR_FROM_GROUP( g_U11081[l_U597] );
                                        }
                                        REMOVE_CHAR_DEFENSIVE_AREA( g_U11081[l_U597] );
                                        SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U1304, 1 );
                                        SET_CHAR_DECISION_MAKER( g_U11081[l_U597], l_U1303 );
                                        SET_COMBAT_DECISION_MAKER( g_U11081[l_U597], l_U1304 );
                                        SET_CHAR_RELATIONSHIP( g_U11081[l_U597], 5, 25 );
                                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( g_U11081[l_U597], 1 );
                                        SET_SENSE_RANGE( g_U11081[l_U597], 100.00000000 );
                                        l_U1053[l_U597] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (l_U1053[l_U597])
                {
                    if (NOT l_U1100[l_U597])
                    {
                        if (NOT l_U1125)
                        {
                            if (IS_VEH_DRIVEABLE( g_U11087[l_U597] ))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11081[l_U597] )))
                                {
                                    if (NOT (LOCATE_CHAR_IN_CAR_3D( g_U11081[l_U597], vVar2[l_U597]._fU0, vVar2[l_U597]._fU4, vVar2[l_U597]._fU8, 3.00000000, 3.00000000, 3.00000000, 0 )))
                                    {
                                        GET_SCRIPT_TASK_STATUS( g_U11081[l_U597], 15, ref l_U1181[l_U597] );
                                        if (l_U1181[l_U597] == 7)
                                        {
                                            TASK_CAR_DRIVE_TO_COORD( g_U11081[l_U597], g_U11087[l_U597], vVar2[l_U597]._fU0, vVar2[l_U597]._fU4, vVar2[l_U597]._fU8, 10.00000000, 0, -408052231, 2, 2.50000000, 20 );
                                        }
                                    }
                                    else if (IS_CHAR_IN_CAR( g_U11081[l_U597], g_U11087[l_U597] ))
                                    {
                                        GET_SCRIPT_TASK_STATUS( g_U11081[l_U597], 13, ref l_U1181[l_U597] );
                                        if (l_U1181[l_U597] == 7)
                                        {
                                            TASK_LEAVE_CAR( g_U11081[l_U597], g_U11087[l_U597] );
                                            l_U1100[l_U597] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (l_U1100[l_U597])
                {
                    if (NOT l_U1125)
                    {
                        if (NOT (IS_CHAR_INJURED( g_U11081[l_U597] )))
                        {
                            if (NOT (LOCATE_CHAR_ON_FOOT_3D( g_U11081[l_U597], vVar9[l_U597]._fU0, vVar9[l_U597]._fU4, vVar9[l_U597]._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
                            {
                                GET_SCRIPT_TASK_STATUS( g_U11081[l_U597], 27, ref l_U1181[l_U597] );
                                if (l_U1181[l_U597] == 7)
                                {
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( g_U11081[l_U597], vVar9[l_U597]._fU0, vVar9[l_U597]._fU4, vVar9[l_U597]._fU8, 3, 100000, 1.00000000 );
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( g_U11081[l_U597], 123, ref l_U1181[l_U597] );
                                if (l_U1181[l_U597] == 7)
                                {
                                    TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( g_U11081[l_U597], 100.00000000 );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[l_U597], 0 );
                                }
                            }
                        }
                    }
                }
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (l_U1125)
                {
                    if (l_U1100[l_U597])
                    {
                        if (DOES_CHAR_EXIST( g_U11081[l_U597] ))
                        {
                            if (NOT (IS_CHAR_INJURED( g_U11081[l_U597] )))
                            {
                                if (DOES_VEHICLE_EXIST( g_U11087[l_U597] ))
                                {
                                    if (IS_VEH_DRIVEABLE( g_U11087[l_U597] ))
                                    {
                                        if (NOT (IS_CHAR_IN_CAR( g_U11081[l_U597], g_U11087[l_U597] )))
                                        {
                                            GET_SCRIPT_TASK_STATUS( g_U11081[l_U597], 12, ref l_U1181[l_U597] );
                                            if (l_U1181[l_U597] == 7)
                                            {
                                                TASK_ENTER_CAR_AS_DRIVER( g_U11081[l_U597], g_U11087[l_U597], -2 );
                                            }
                                        }
                                        else
                                        {
                                            l_U1100[l_U597] = 0;
                                        }
                                    }
                                    else
                                    {
                                        l_U1100[l_U597] = 0;
                                    }
                                }
                                else
                                {
                                    l_U1100[l_U597] = 0;
                                }
                            }
                            else
                            {
                                l_U1100[l_U597] = 0;
                            }
                        }
                    }
                }
            }
            if (l_U1125)
            {
                if (NOT l_U1100[0])
                {
                    if (NOT l_U1100[1])
                    {
                        if (NOT l_U1077)
                        {
                            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                            {
                                l_U1104 = 1;
                            }
                            else
                            {
                                l_U1104 = 0;
                            }
                            if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                            {
                                l_U1105 = 1;
                            }
                            else
                            {
                                l_U1105 = 0;
                            }
                            sub_5492( 0, 0 );
                            l_U1077 = 1;
                        }
                    }
                }
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (l_U1100[l_U597])
                {
                    GET_GAME_VIEWPORT_ID( ref uVar23 );
                    if (DOES_VEHICLE_EXIST( g_U11087[l_U597] ))
                    {
                        if (IS_VEH_DRIVEABLE( g_U11087[l_U597] ))
                        {
                            if (NOT l_U1134[l_U597])
                            {
                                GET_CAR_COORDINATES( g_U11087[l_U597], ref uVar16[l_U597]._fU0, ref uVar16[l_U597]._fU4, ref uVar16[l_U597]._fU8 );
                                if (NOT (CAM_IS_SPHERE_VISIBLE( uVar23, uVar16[l_U597]._fU0, uVar16[l_U597]._fU4, uVar16[l_U597]._fU8, 2.00000000 )))
                                {
                                    SET_CAR_HEADING( g_U11087[l_U597], fVar24[l_U597] );
                                    SET_CAR_ON_GROUND_PROPERLY( g_U11087[l_U597] );
                                    l_U1134[l_U597] = 1;
                                }
                            }
                        }
                    }
                }
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (NOT l_U1049[2])
                {
                    if (sub_77950())
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "J1_H2" )))
                        {
                            PRINT_HELP( "J1_H2" );
                            l_U1049[2] = 1;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_77876(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (bParam1)
    {
        if (sub_77892())
        {
            if (NOT sub_77950())
            {
                sub_77993();
            }
        }
    }
    if (DOES_CHAR_EXIST( iParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            for ( I = 0; I < 2; I++ )
            {
                if (g_U11028[I]._fU0 == iParam0)
                {
                    iVar5 = I;
                }
            }
            if (bParam1)
            {
                sub_64812( ref g_U11028[iVar5], ref g_U11081[iVar5], ref g_U11087[iVar5] );
            }
            else if (IS_PLAYER_PLAYING( sub_5742() ))
            {
                CLEAR_CHAR_TASKS( g_U11028[iVar5]._fU0 );
                sub_44581( ref g_U11028[iVar5], sub_5671() );
                if (g_U11090)
                {
                    sub_13297( ref g_U11028[iVar5], 4 );
                }
            }
            g_U11117[iVar5] = bParam1;
        }
    }
    return;
}

int sub_77892()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_77950()
{
    if (NOT sub_77892())
    {
        return 0;
    }
    return g_U11090;
}

void sub_77993()
{
    g_U11090 = 1;
    return;
}

void sub_80327()
{
    string sVar2;

    if (l_U354 == 6)
    {
        if (NOT l_U1139[0])
        {
            if (g_U39243 == 0)
            {
                sVar2 = "E1J1_2V1";
            }
            else
            {
                sVar2 = "E1J1_2V2";
            }
        }
        if (NOT l_U1143[0])
        {
            if (l_U971[6])
            {
                GET_GAME_TIMER( ref l_U624 );
                l_U625 = l_U624 - l_U623;
                if (l_U625 >= 9000)
                {
                    if (DOES_VEHICLE_EXIST( l_U677 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U677 ))
                        {
                            if (DOES_CHAR_EXIST( l_U699 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U699 )))
                                {
                                    if ((IS_CHAR_SITTING_IN_CAR( sub_5671(), l_U677 )) AND (IS_CHAR_SITTING_IN_CAR( l_U699, l_U677 )))
                                    {
                                        if (NOT (sub_5787( l_U1271 )))
                                        {
                                            if (NOT (sub_80607( l_U1271 )))
                                            {
                                                if (NOT l_U1139[0])
                                                {
                                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                                    {
                                                        sub_20503( sVar2, ref l_U1271, 6, 1 );
                                                        l_U1139[0] = 1;
                                                        if (g_U39243 == 0)
                                                        {
                                                            g_U39243 = 1;
                                                        }
                                                        else
                                                        {
                                                            g_U39243 = 0;
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    sub_5971( ref l_U1271, 1 );
                                                    l_U1143[0] = 1;
                                                }
                                            }
                                            else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                            {
                                                sub_80769( sVar2, ref l_U1271, 6, 1 );
                                            }
                                        }
                                    }
                                    else if (sub_5787( l_U1271 ))
                                    {
                                        sub_80905( ref l_U1271 );
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

void sub_80607(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_80769(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_80790( uParam0, ref l_U22._fU0, uParam1, uParam2, uParam3 );
}

int sub_80790(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_20578( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_80905(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_5899( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (iParam0->_fU4 == g_U8945)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_5899( "\n CONVERSATION PAUSED AT LINE " );
            sub_81061( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_5899( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_5899( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_5899( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_81061(unknown uParam0)
{
    return;
}

void sub_81343()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (l_U354 == 6)
    {
        if (l_U1079)
        {
            if (NOT l_U1149)
            {
                if ((((sub_81403( sub_5671(), "Bada_room1" )) || (sub_81403( sub_5671(), "Bada-Private" ))) || (sub_81403( sub_5671(), "Bada_room2" ))) || (sub_81403( sub_5671(), "Bada_room1a" )))
                {
                    GET_GAME_TIMER( ref l_U629 );
                    l_U1150 = 1;
                }
                else if (l_U1150)
                {
                    GET_GAME_TIMER( ref l_U628 );
                    l_U627 = l_U628 - l_U629;
                    if (l_U627 > 3000)
                    {
                        l_U1150 = 0;
                        l_U1149 = 1;
                    }
                }
            }
            if (NOT l_U1149)
            {
                for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), l_U575[l_U597]._fU0, l_U575[l_U597]._fU4, l_U575[l_U597]._fU8, 190.00000000, 190.00000000, 190.00000000, 0 )))
                    {
                        l_U1149 = 1;
                    }
                }
            }
            if (l_U1149)
            {
                for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), l_U575[l_U597]._fU0, l_U575[l_U597]._fU4, l_U575[l_U597]._fU8, 190.00000000, 190.00000000, 190.00000000, 0 ))
                    {
                        l_U626++;
                    }
                }
                if (l_U626 > 4)
                {
                    if (NOT l_U1150)
                    {
                        CLEAR_AREA( -1496.94900000, -70.11190000, 5.29640000, 60.00000000, 0 );
                        sub_81920();
                        for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                        {
                            CREATE_RANDOM_CAR_FOR_CAR_PARK( l_U575[l_U597]._fU0, l_U575[l_U597]._fU4, l_U575[l_U597]._fU8, l_U667[l_U597] );
                        }
                        l_U1149 = 0;
                    }
                }
                else
                {
                    l_U626 = 0;
                }
            }
        }
    }
    return;
}

boolean sub_81403(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

void sub_81920()
{
    for ( l_U597 = 0; l_U597 < 5; l_U597++ )
    {
        if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
        {
            if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
            {
                if (LOCATE_CAR_3D( l_U678[l_U597], l_U396._fU0, l_U396._fU4, l_U396._fU8, 12.50000000, 12.50000000, 15.00000000, 0 ))
                {
                    SET_CAR_HEADING( l_U678[l_U597], l_U643[l_U597] );
                    SET_CAR_COORDINATES( l_U678[l_U597], l_U377[l_U597]._fU0, l_U377[l_U597]._fU4, l_U377[l_U597]._fU8 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U678[l_U597] );
                }
                if (NOT (LOCATE_CAR_3D( l_U678[l_U597], l_U377[l_U597]._fU0, l_U377[l_U597]._fU4, l_U377[l_U597]._fU8, 90.00000000, 90.00000000, 90.00000000, 0 )))
                {
                    SET_CAR_HEADING( l_U678[l_U597], l_U643[l_U597] );
                    SET_CAR_COORDINATES( l_U678[l_U597], l_U377[l_U597]._fU0, l_U377[l_U597]._fU4, l_U377[l_U597]._fU8 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U678[l_U597] );
                }
                if (((((LOCATE_CAR_3D( l_U678[l_U597], l_U575[0]._fU0, l_U575[0]._fU4, l_U575[0]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CAR_3D( l_U678[l_U597], l_U575[1]._fU0, l_U575[1]._fU4, l_U575[1]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))) || (LOCATE_CAR_3D( l_U678[l_U597], l_U575[2]._fU0, l_U575[2]._fU4, l_U575[2]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))) || (LOCATE_CAR_3D( l_U678[l_U597], l_U575[3]._fU0, l_U575[3]._fU4, l_U575[3]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))) || (LOCATE_CAR_3D( l_U678[l_U597], l_U575[4]._fU0, l_U575[4]._fU4, l_U575[4]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )))
                {
                    SET_CAR_HEADING( l_U678[l_U597], l_U643[l_U597] );
                    SET_CAR_COORDINATES( l_U678[l_U597], l_U377[l_U597]._fU0, l_U377[l_U597]._fU4, l_U377[l_U597]._fU8 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U678[l_U597] );
                }
            }
        }
    }
    return;
}

void sub_82971()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U1013)
    {
        if (DOES_BLIP_EXIST( l_U1236 ))
        {
            REMOVE_BLIP( l_U1236 );
        }
        if ((sub_5787( l_U1271 )) || (sub_80607( l_U1271 )))
        {
            sub_5971( ref l_U1271, 0 );
        }
        if (l_U356 > 1)
        {
            if (sub_83069())
            {
                if (NOT l_U1069)
                {
                    if (sub_5787( l_U1265 ))
                    {
                        sub_5971( ref l_U1265, 0 );
                    }
                    CLEAR_PRINTS();
                    INCREMENT_INT_STAT( 372, 1 );
                    l_U356 = 12;
                }
            }
            else
            {
                l_U1069 = 0;
            }
        }
        switch (l_U356)
        {
            case 0:
            SET_PLAYER_CONTROL( sub_5742(), 0 );
            if (sub_5787( l_U1265 ))
            {
                sub_5971( ref l_U1265, 0 );
            }
            if (NOT IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                    while (IS_SCREEN_FADING())
                    {
                        WAIT( 0 );
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    FIX_CAR( l_U677 );
                }
            }
            SET_WANTED_MULTIPLIER( 0.00000000 );
            CLEAR_PRINTS();
            CLEAR_AREA( l_U396._fU0, l_U396._fU4, l_U396._fU8, 50.00000000, 0 );
            l_U356 = 2;;
            break;
            case 2:
            CLEAR_AREA( -1496.94900000, -70.11190000, 5.29640000, 60.00000000, 0 );
            sub_81920();
            if (g_U39149[5] == 2)
            {
                for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                {
                    CREATE_RANDOM_CAR_FOR_CAR_PARK( l_U575[l_U597]._fU0, l_U575[l_U597]._fU4, l_U575[l_U597]._fU8, l_U667[l_U597] );
                }
            }
            if (IS_VEH_DRIVEABLE( l_U675 ))
            {
                DELETE_CAR( ref l_U675 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1204 );
            }
            if (IS_VEH_DRIVEABLE( l_U676 ))
            {
                DELETE_CAR( ref l_U676 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U676 );
            }
            l_U1121[0] = 0;
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    GET_PLAYER_GROUP( sub_5742(), ref l_U1264 );
                    if (IS_GROUP_MEMBER( l_U699, l_U1264 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U699 );
                    }
                }
            }
            l_U356 = 1;
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                    {
                        if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                        {
                            SET_CAR_HEADING( l_U677, l_U650 );
                            SET_CAR_COORDINATES( l_U677, l_U396._fU0, l_U396._fU4, l_U396._fU8 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U677 );
                            SET_GAME_CAM_HEADING( 0.00000000 );
                            l_U356 = 3;
                        }
                    }
                }
            }
            break;
            case 3:
            if (NOT l_U1064)
            {
                BEGIN_CAM_COMMANDS( ref l_U1218 );
                CREATE_CAM( 14, ref l_U1222 );
                CREATE_CAM( 14, ref l_U1223 );
                CREATE_CAM( 3, ref l_U1224 );
                SET_CAM_POS( l_U1222, -1439.02800000, -45.28244000, 7.64119000 );
                SET_CAM_ROT( l_U1222, -3.45190700, 0.00000000, 59.74511000 );
                SET_CAM_FOV( l_U1222, 21.00006000 );
                SET_CAM_POS( l_U1224, -1439.02800000, -45.28244000, 7.64119000 );
                SET_CAM_ROT( l_U1224, -2.62624300, -0.00000000, 123.60890000 );
                SET_CAM_FOV( l_U1224, 21.00006000 );
                SET_CAM_POS( l_U1223, -1439.09300000, -39.94488000, 7.64119000 );
                SET_CAM_ROT( l_U1223, -2.62624300, -0.00000000, 123.60890000 );
                SET_CAM_FOV( l_U1223, 21.00006000 );
                SET_CAM_ACTIVE( l_U1222, 1 );
                SET_CAM_ACTIVE( l_U1223, 1 );
                SET_CAM_ACTIVE( l_U1224, 1 );
                SET_CAM_PROPAGATE( l_U1222, 1 );
                SET_CAM_PROPAGATE( l_U1223, 0 );
                SET_CAM_PROPAGATE( l_U1224, 0 );
                SET_USE_HIGHDOF( 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_WIDESCREEN_BORDERS( 1 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 1 );
                l_U1064 = 1;
                APPLY_FORCE_TO_CAR( l_U677, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
                l_U356 = 4;
            }
            break;
            case 4:
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                    {
                        TASK_LOOK_AT_CHAR( l_U699, sub_5671(), 999999, 0 );
                        TASK_LOOK_AT_CHAR( sub_5671(), l_U699, 999999, 0 );
                    }
                }
            }
            l_U356 = 5;
            break;
            case 5:
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (NOT (IS_CAR_DOOR_FULLY_OPEN( l_U677, 5 )))
                    {
                        POP_CAR_BOOT( l_U677 );
                    }
                    else
                    {
                        l_U1121[1] = 1;
                        l_U356 = 6;
                    }
                }
            }
            break;
            case 6:
            if (NOT IS_SCREEN_FADED_IN())
            {
                if (NOT IS_SCREEN_FADING_IN())
                {
                    DO_SCREEN_FADE_IN_UNHACKED( 500 );
                    while (IS_SCREEN_FADING())
                    {
                        WAIT( 0 );
                    }
                }
            }
            if (NOT l_U1164)
            {
                SET_CAM_PROPAGATE( l_U1222, 0 );
                SET_CAM_PROPAGATE( l_U1224, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U1224, l_U1222, l_U1223, 20000, 0 );
                l_U1164 = 1;
            }
            if (sub_20503( "E1J1_DO", ref l_U1265, 6, 1 ))
            {
                GET_GAME_TIMER( ref l_U629 );
                l_U356 = 9;
            }
            break;
            case 7:
            if (sub_20503( "E1J1_DO", ref l_U1265, 6, 1 ))
            {
                l_U356 = 9;
            }
            break;
            case 9:
            GET_GAME_TIMER( ref l_U628 );
            l_U627 = l_U628 - l_U629;
            if (l_U627 > 1000)
            {
                OPEN_SEQUENCE_TASK( ref l_U1165 );
                TASK_CLEAR_LOOK_AT( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1450.57700000, -44.72840000, 5.29730000, 2, -2, 1.50000000 );
                CLOSE_SEQUENCE_TASK( l_U1165 );
                if (DOES_CHAR_EXIST( l_U699 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        if (DOES_VEHICLE_EXIST( l_U677 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U677 ))
                            {
                                TASK_PERFORM_SEQUENCE( l_U699, l_U1165 );
                                CLEAR_SEQUENCE_TASK( l_U1165 );
                            }
                        }
                    }
                }
            }
            if (l_U627 > 2000)
            {
                if (DOES_VEHICLE_EXIST( l_U677 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U677 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1166 );
                        TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U677 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1443.79000000, -39.97570000, 5.29730000, 2, 40000, 1.00000000 );
                        TASK_ACHIEVE_HEADING( 0, 98.56550000 );
                        CLOSE_SEQUENCE_TASK( l_U1166 );
                        TASK_PERFORM_SEQUENCE( sub_5671(), l_U1166 );
                        CLEAR_SEQUENCE_TASK( l_U1166 );
                        l_U356 = 11;
                    }
                }
            }
            break;
            case 11:
            LOCK_CAR_DOORS( l_U677, 3 );
            INCREMENT_INT_STAT( 373, 1 );
            l_U356 = 10;
            break;
            case 10:
            if (LOCATE_CHAR_ON_FOOT_3D( sub_5671(), -1443.79000000, -39.97570000, 5.29730000, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                GET_GAME_TIMER( ref l_U628 );
                l_U627 = l_U628 - l_U629;
                if (l_U627 > 4000)
                {
                    l_U356 = 12;
                }
            }
            break;
            case 12:
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if ((IS_CHAR_IN_CAR( l_U699, l_U677 )) || (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                            {
                                if (sub_5787( l_U1265 ))
                                {
                                    sub_5971( ref l_U1265, 0 );
                                }
                                if (DOES_CHAR_EXIST( l_U699 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                                    {
                                        CLEAR_CHAR_TASKS( l_U699 );
                                    }
                                }
                                CLEAR_CHAR_TASKS( sub_5671() );
                                if (IS_SCREEN_FADED_IN())
                                {
                                    DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                                    while (IS_SCREEN_FADING())
                                    {
                                        WAIT( 0 );
                                    }
                                }
                                else if (DOES_CAM_EXIST( l_U1219 ))
                                {
                                    if (IS_CAM_ACTIVE( l_U1219 ))
                                    {
                                        SET_CAM_ACTIVE( l_U1219, 0 );
                                    }
                                    if (IS_CAM_PROPAGATING( l_U1219 ))
                                    {
                                        SET_CAM_PROPAGATE( l_U1219, 0 );
                                    }
                                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                    if (DOES_CAM_EXIST( l_U1219 ))
                                    {
                                        DESTROY_CAM( l_U1219 );
                                    }
                                    SET_USE_HIGHDOF( 0 );
                                    END_CAM_COMMANDS( ref l_U1218 );
                                    SET_GAME_CAM_HEADING( 0.00000000 );
                                }
                                if (DOES_VEHICLE_EXIST( l_U677 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U677 ))
                                    {
                                        if (NOT (IS_CAR_DOOR_FULLY_OPEN( l_U677, 5 )))
                                        {
                                            POP_CAR_BOOT( l_U677 );
                                            if (DOES_VEHICLE_EXIST( l_U677 ))
                                            {
                                                if (IS_VEH_DRIVEABLE( l_U677 ))
                                                {
                                                    if (NOT (IS_CAR_DEAD( l_U677 )))
                                                    {
                                                        l_U1128 = 0;
                                                        while (NOT l_U1128)
                                                        {
                                                            if (IS_VEH_DRIVEABLE( l_U677 ))
                                                            {
                                                                if (IS_CAR_DOOR_FULLY_OPEN( l_U677, 5 ))
                                                                {
                                                                    l_U1128 = 1;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                l_U1128 = 1;
                                                            }
                                                            WAIT( 0 );
                                                        }
                                                    }
                                                }
                                            }
                                            l_U1121[1] = 1;
                                        }
                                    }
                                }
                                if (DOES_VEHICLE_EXIST( l_U677 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U677 ))
                                    {
                                        if (DOES_CHAR_EXIST( l_U699 ))
                                        {
                                            if (NOT (IS_CHAR_INJURED( l_U699 )))
                                            {
                                                if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                                                {
                                                    WARP_CHAR_FROM_CAR_TO_COORD( l_U699, -1450.57700000, -44.72840000, 5.29730000 );
                                                    SET_CHAR_HEADING( l_U699, 87.56870000 );
                                                }
                                            }
                                        }
                                    }
                                }
                                if (DOES_VEHICLE_EXIST( l_U677 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U677 ))
                                    {
                                        if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                                        {
                                            WARP_CHAR_FROM_CAR_TO_COORD( sub_5671(), -1443.66200000, -40.48850000, 5.29730000 );
                                            SET_CHAR_HEADING( sub_5671(), 98.56550000 );
                                            WAIT( 0 );
                                            SET_CHAR_COORDINATES( sub_5671(), -1443.66200000, -40.48850000, 5.29730000 );
                                            SET_CAM_BEHIND_PED( sub_5671() );
                                            SET_GAME_CAM_HEADING( 0.00000000 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if ((NOT (IS_CHAR_IN_CAR( l_U699, l_U677 ))) AND (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))))
                            {
                                SET_CHAR_HEADING( sub_5671(), 98.56550000 );
                                SET_CHAR_COORDINATES( sub_5671(), -1443.66200000, -40.48850000, 5.29730000 );
                                SHUT_CAR_DOOR( l_U677, 0 );
                                SHUT_CAR_DOOR( l_U677, 1 );
                                if (l_U1064)
                                {
                                    if (DOES_CAM_EXIST( l_U1224 ))
                                    {
                                        if (IS_CAM_ACTIVE( l_U1224 ))
                                        {
                                            SET_CAM_ACTIVE( l_U1224, 0 );
                                        }
                                        if (IS_CAM_PROPAGATING( l_U1224 ))
                                        {
                                            SET_CAM_PROPAGATE( l_U1224, 0 );
                                        }
                                        DESTROY_CAM( l_U1224 );
                                    }
                                    if (DOES_CAM_EXIST( l_U1222 ))
                                    {
                                        if (IS_CAM_ACTIVE( l_U1222 ))
                                        {
                                            SET_CAM_ACTIVE( l_U1222, 0 );
                                        }
                                        if (IS_CAM_PROPAGATING( l_U1222 ))
                                        {
                                            SET_CAM_PROPAGATE( l_U1222, 0 );
                                        }
                                        DESTROY_CAM( l_U1222 );
                                    }
                                    if (DOES_CAM_EXIST( l_U1223 ))
                                    {
                                        if (IS_CAM_ACTIVE( l_U1223 ))
                                        {
                                            SET_CAM_ACTIVE( l_U1223, 0 );
                                        }
                                        if (IS_CAM_PROPAGATING( l_U1223 ))
                                        {
                                            SET_CAM_PROPAGATE( l_U1223, 0 );
                                        }
                                        DESTROY_CAM( l_U1223 );
                                    }
                                    SET_USE_HIGHDOF( 0 );
                                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                    END_CAM_COMMANDS( ref l_U1218 );
                                    SET_GAME_CAM_HEADING( 0.00000000 );
                                }
                                l_U1164 = 0;
                                l_U1064 = 0;
                                if (DOES_VEHICLE_EXIST( l_U677 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U677 ))
                                    {
                                        if (DOES_CHAR_EXIST( l_U699 ))
                                        {
                                            if (NOT (IS_CHAR_INJURED( l_U699 )))
                                            {
                                                if ((NOT (IS_CHAR_IN_CAR( l_U699, l_U677 ))) AND (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))))
                                                {
                                                    LOCK_CAR_DOORS( l_U677, 3 );
                                                    SET_WIDESCREEN_BORDERS( 0 );
                                                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 0 );
                                                    FREEZE_CAR_POSITION( l_U677, 1 );
                                                }
                                            }
                                        }
                                    }
                                }
                                if (NOT l_U1129)
                                {
                                    if (DOES_OBJECT_EXIST( l_U1215 ))
                                    {
                                        PLAY_AUDIO_EVENT_FROM_OBJECT( "J1_STEAL_BIKES_LOWER_TAILGATE", l_U1215 );
                                        l_U1129 = 1;
                                    }
                                }
                                if (NOT IS_SCREEN_FADED_IN())
                                {
                                    if (NOT IS_SCREEN_FADING_IN())
                                    {
                                        DO_SCREEN_FADE_IN_UNHACKED( 500 );
                                        while (IS_SCREEN_FADING())
                                        {
                                            WAIT( 0 );
                                        }
                                    }
                                }
                                else if (DOES_VEHICLE_EXIST( l_U677 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U677 ))
                                    {
                                        for ( l_U597 = 0; l_U597 < 5; l_U597++ )
                                        {
                                            if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                                            {
                                                if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                                                {
                                                    LOCK_CAR_DOORS( l_U678[l_U597], 1 );
                                                }
                                            }
                                        }
                                        SET_CAM_BEHIND_PED( sub_5671() );
                                        SET_GAME_CAM_HEADING( 0.00000000 );
                                        FREEZE_CAR_POSITION( l_U677, 1 );
                                        SET_PLAYER_CONTROL( sub_5742(), 1 );
                                        STOP_CAR_BREAKING( l_U677, 0 );
                                        sub_87381();
                                        l_U354 = 8;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
    }
    return;
}

int sub_83069()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_87381()
{
    if (IS_VEH_DRIVEABLE( l_U677 ))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
        {
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U677, l_U413[l_U597]._fU0, l_U413[l_U597]._fU4, l_U413[l_U597]._fU8, ref l_U399[l_U597]._fU0, ref l_U399[l_U597]._fU4, ref l_U399[l_U597]._fU8 );
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U677, l_U420[l_U597]._fU0, l_U420[l_U597]._fU4, l_U420[l_U597]._fU8, ref l_U406[l_U597]._fU0, ref l_U406[l_U597]._fU4, ref l_U406[l_U597]._fU8 );
            }
        }
    }
    return;
}

void sub_87748()
{
    return;
}

void sub_87814()
{
    if (NOT l_U1124)
    {
        if (NOT (HAS_MODEL_LOADED( l_U1209 )))
        {
            REQUEST_MODEL( l_U1209 );
            while (NOT (HAS_MODEL_LOADED( l_U1209 )))
            {
                WAIT( 0 );
            }
        }
        for ( l_U597 = 0; l_U597 < 9; l_U597++ )
        {
            if (NOT (DOES_CHAR_EXIST( l_U717[l_U597] )))
            {
                CREATE_CHAR( 26, l_U1209, l_U544[l_U597]._fU0, l_U544[l_U597]._fU4, l_U544[l_U597]._fU8, ref l_U717[l_U597], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U717[l_U597] );
                SET_CHAR_RELATIONSHIP_GROUP( l_U717[l_U597], 25 );
                SET_CHAR_RELATIONSHIP( l_U717[l_U597], 1, 25 );
                SET_CHAR_RELATIONSHIP( l_U717[l_U597], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U717[l_U597], l_U1291 );
                SET_COMBAT_DECISION_MAKER( l_U717[l_U597], l_U1292 );
                if (l_U597 == 0)
                {
                    SET_CHAR_ACCURACY( l_U717[l_U597], 28 );
                    GIVE_WEAPON_TO_CHAR( l_U717[l_U597], 26, 60, 0 );
                    SET_CHAR_MAX_HEALTH( l_U717[l_U597], 210 );
                    SET_CHAR_HEALTH( l_U717[l_U597], 210 );
                }
                else if (l_U597 == 1)
                {
                    SET_CHAR_ACCURACY( l_U717[l_U597], 25 );
                    GIVE_WEAPON_TO_CHAR( l_U717[l_U597], 26, 60, 0 );
                    SET_CHAR_MAX_HEALTH( l_U717[l_U597], 210 );
                    SET_CHAR_HEALTH( l_U717[l_U597], 210 );
                }
                else if (l_U597 == 2)
                {
                    SET_CHAR_ACCURACY( l_U717[l_U597], 28 );
                    GIVE_WEAPON_TO_CHAR( l_U717[l_U597], 26, 60, 0 );
                    SET_CHAR_MAX_HEALTH( l_U717[l_U597], 210 );
                    SET_CHAR_HEALTH( l_U717[l_U597], 210 );
                }
                else if (l_U597 == 5)
                {
                    SET_CHAR_ACCURACY( l_U717[l_U597], 25 );
                    GIVE_WEAPON_TO_CHAR( l_U717[l_U597], 26, 60, 0 );
                    SET_CHAR_MAX_HEALTH( l_U717[l_U597], 210 );
                    SET_CHAR_HEALTH( l_U717[l_U597], 210 );
                }
                else if (l_U597 == 9)
                {
                    GIVE_WEAPON_TO_CHAR( l_U717[l_U597], 26, 60, 0 );
                    SET_CHAR_ACCURACY( l_U717[l_U597], 28 );
                    SET_CHAR_MAX_HEALTH( l_U717[l_U597], 210 );
                    SET_CHAR_HEALTH( l_U717[l_U597], 210 );
                }
                else
                {
                    GIVE_WEAPON_TO_CHAR( l_U717[l_U597], l_U1212, 250, 0 );
                    SET_CHAR_ACCURACY( l_U717[l_U597], 70 );
                };;;;;
                SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U717[l_U597], 0 );
                SET_CHAR_AS_ENEMY( l_U717[l_U597], 1 );
                SET_PED_DIES_WHEN_INJURED( l_U717[l_U597], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[l_U597], 1 );
                GET_GAME_TIMER( ref l_U608 );
            }
        }
        l_U1124 = 1;
    }
    return;
}

void sub_88848()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    for ( l_U597 = 0; l_U597 < 9; l_U597++ )
    {
        if (NOT l_U1090[l_U597])
        {
            if (DOES_CHAR_EXIST( l_U717[l_U597] ))
            {
                if (IS_CHAR_INJURED( l_U717[l_U597] ))
                {
                    l_U635++;
                    l_U1090[l_U597] = 1;
                }
            }
        }
    }
    for ( l_U597 = 0; l_U597 < 9; l_U597++ )
    {
        if (NOT l_U1090[l_U597])
        {
            if (DOES_CHAR_EXIST( l_U717[l_U597] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U717[l_U597] )))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5671(), l_U717[l_U597], 12.50000000, 12.50000000, 12.50000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U717[l_U597], sub_5671(), 0 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[l_U597], 0 );
                        if (NOT l_U1080[l_U597])
                        {
                            l_U1080[l_U597] = 1;
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U699, l_U717[l_U597], 12.50000000, 12.50000000, 12.50000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U717[l_U597], l_U699, 0 )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[l_U597], 0 );
                                if (NOT l_U1080[l_U597])
                                {
                                    l_U1080[l_U597] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for ( l_U597 = 0; l_U597 < 9; l_U597++ )
    {
        if (DOES_CHAR_EXIST( l_U717[l_U597] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U717[l_U597] )))
            {
                if (NOT l_U1090[l_U597])
                {
                    if (NOT l_U1080[l_U597])
                    {
                        GET_GAME_TIMER( ref l_U609 );
                        l_U610 = l_U609 - l_U608;
                        if (l_U610 > 9000)
                        {
                            if (NOT l_U1080[l_U597])
                            {
                                l_U1080[l_U597] = 1;
                                GET_GAME_TIMER( ref l_U608 );
                            }
                        }
                        else
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 4000, 8000, ref iVar2 );
                            if (iVar2 < l_U610)
                            {
                                if (NOT l_U1080[l_U597])
                                {
                                    l_U1080[l_U597] = 1;
                                    GET_GAME_TIMER( ref l_U608 );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U1090[0])
    {
        if (l_U1090[1])
        {
            if (l_U1090[2])
            {
                if (l_U1090[3])
                {
                    if (l_U1090[4])
                    {
                        if (l_U1090[5])
                        {
                            if (l_U1090[6])
                            {
                                if (l_U1090[7])
                                {
                                    if (l_U1090[8])
                                    {
                                        for ( l_U597 = 0; l_U597 < 9; l_U597++ )
                                        {
                                            if (DOES_BLIP_EXIST( l_U1254[l_U597] ))
                                            {
                                                REMOVE_BLIP( l_U1254[l_U597] );
                                            }
                                        }
                                        l_U1125 = 1;
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

void sub_89850()
{
    vector[9] vVar2;
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

    array(ref vVar2, 9);
    vVar2[0] = {-1490.75700000, -69.41750000, 5.29640000};
    vVar2[1] = {-1504.46800000, -61.94830000, 5.29640000};
    vVar2[2] = {-1504.81100000, -58.81530000, 5.29640000};
    vVar2[3] = {-1490.14900000, -78.24570000, 5.29640000};
    vVar2[4] = {-1497.84000000, -85.21700000, 5.28760000};
    vVar2[5] = {-1499.52100000, -85.39570000, 5.28570000};
    vVar2[6] = {-1507.47700000, -75.45230000, 5.29640000};
    vVar2[7] = {-1488.35700000, -68.76280000, 5.29640000};
    vVar2[8] = {-1483.12200000, -73.81200000, 5.42050000};
    for ( l_U597 = 0; l_U597 < 9; l_U597++ )
    {
        if (NOT l_U1090[l_U597])
        {
            if (l_U1080[l_U597])
            {
                if (DOES_CHAR_EXIST( l_U717[l_U597] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U717[l_U597] )))
                    {
                        if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U717[l_U597], vVar2[l_U597]._fU0, vVar2[l_U597]._fU4, vVar2[l_U597]._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U717[l_U597], 27, ref l_U1184[l_U597] );
                            if (l_U1184[l_U597] == 7)
                            {
                                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U717[l_U597], vVar2[l_U597]._fU0, vVar2[l_U597]._fU4, vVar2[l_U597]._fU8, 3, 100000, 2.50000000 );
                            }
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U717[l_U597], 117, ref l_U1184[l_U597] );
                            if (l_U1184[l_U597] == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[l_U597], 0 );
                                TASK_GUARD_CURRENT_POSITION( l_U717[l_U597], 3.00000000, 4.00000000, 1 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_90632()
{
    if (l_U354 == 8)
    {
        if (NOT l_U1154)
        {
            if (l_U1049[1])
            {
                if (l_U971[11])
                {
                    if (NOT l_U1125)
                    {
                        SET_PED_IS_BLIND_RAGING( sub_5671(), 1 );
                        l_U1154 = 1;
                    }
                }
            }
        }
    }
    if (l_U1125)
    {
        if (l_U1154)
        {
            SET_PED_IS_BLIND_RAGING( sub_5671(), 0 );
            l_U1154 = 0;
        }
    }
    return;
}

void sub_90767()
{
    int iVar2;

    if (NOT l_U1125)
    {
        if (l_U1049[1])
        {
            GET_GAME_TIMER( ref l_U631 );
            l_U632 = l_U631 - l_U630;
            if (l_U632 > 4000)
            {
                if (NOT (sub_5787( l_U1265 )))
                {
                    if (NOT (sub_5787( l_U1277 )))
                    {
                        if (NOT sub_36654())
                        {
                            if (l_U633 == 4)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref iVar2 );
                                if (NOT (l_U635 > 7))
                                {
                                    if (DOES_CHAR_EXIST( l_U717[iVar2] ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U717[iVar2] )))
                                        {
                                            if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U717[iVar2] )))
                                            {
                                                if (g_U39244 == 0)
                                                {
                                                    sub_6651( 3, l_U717[iVar2], "AOD_1", 0 );
                                                    sub_20503( "E1J2_AOD2", ref l_U1277, 5, 0 );
                                                    l_U633++;
                                                    GET_GAME_TIMER( ref l_U630 );
                                                }
                                                else
                                                {
                                                    sub_6651( 4, l_U717[iVar2], "AOD_2", 0 );
                                                    sub_20503( "E1B2_AOD3", ref l_U1277, 5, 0 );
                                                    l_U633++;
                                                    GET_GAME_TIMER( ref l_U630 );
                                                }
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    l_U633++;
                                    GET_GAME_TIMER( ref l_U630 );
                                }
                            }
                            else if (l_U633 == 8)
                            {
                                if (DOES_CHAR_EXIST( l_U699 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                                    {
                                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U699 )))
                                        {
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref iVar2 );
                                            if (iVar2 < 5)
                                            {
                                                sub_20503( "E1J1_FIGHT", ref l_U1277, 5, 0 );
                                                l_U633 = 0;
                                                GET_GAME_TIMER( ref l_U630 );
                                            }
                                            else if (g_U39245 == 0)
                                            {
                                                sub_20503( "E1J1_BIKE2", ref l_U1277, 5, 0 );
                                                l_U633 = 0;
                                                GET_GAME_TIMER( ref l_U630 );
                                            }
                                            else
                                            {
                                                sub_20503( "E1J1_BIKE3", ref l_U1277, 5, 0 );
                                                l_U633 = 0;
                                                GET_GAME_TIMER( ref l_U630 );
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref iVar2 );
                                if (DOES_CHAR_EXIST( l_U717[iVar2] ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U717[iVar2] )))
                                    {
                                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U717[iVar2] )))
                                        {
                                            if (iVar2 < 5)
                                            {
                                                if (NOT (l_U635 > 7))
                                                {
                                                    SAY_AMBIENT_SPEECH( l_U717[iVar2], "ANGELS_OF_DEATH_TAUNT_LOST", 1, 1, 2 );
                                                }
                                                else
                                                {
                                                    SAY_AMBIENT_SPEECH( l_U717[iVar2], "ANGELS_OF_DEATH_TAUNT_LOST", 0, 0, 2 );
                                                }
                                                GET_GAME_TIMER( ref l_U630 );
                                                l_U633++;
                                            }
                                            else if (NOT (l_U635 > 7))
                                            {
                                                SAY_AMBIENT_SPEECH( l_U717[iVar2], "ANGELS_OF_DEATH_TAUNT_LOST", 1, 1, 2 );
                                            }
                                            else
                                            {
                                                SAY_AMBIENT_SPEECH( l_U717[iVar2], "ANGELS_OF_DEATH_TAUNT_LOST", 0, 0, 2 );
                                            }
                                            GET_GAME_TIMER( ref l_U630 );
                                            l_U633++;;
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
    else if (g_U39245 == 0)
    {
        g_U39245 = 1;
    }
    else
    {
        g_U39245 = 0;
    }
    if (g_U39244 == 0)
    {
        g_U39244 = 1;
    }
    else
    {
        g_U39244 = 0;
    }
    return;
}

void sub_91870()
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

    switch (l_U357)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_5742(), 0 );
        l_U357 = 1;
        break;
        case 1:
        if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
        {
            GET_CAR_CHAR_IS_USING( sub_5671(), ref uVar11 );
            TASK_LEAVE_ANY_CAR( sub_5671() );
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                ;
            }
        }
        else
        {
            l_U357 = 6;
        }
        break;
        case 2:
        if (NOT l_U1065)
        {
            BEGIN_CAM_COMMANDS( ref l_U1218 );
            CREATE_CAM( 14, ref l_U1220 );
            SET_CAM_POS( l_U1220, -1475.46300000, -35.13162000, 6.57343100 );
            SET_CAM_ROT( l_U1220, 5.65165100, 0.00000000, -151.56740000 );
            SET_CAM_FOV( l_U1220, 45.00000000 );
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                ATTACH_CAM_TO_VEHICLE( l_U1220, l_U677 );
                SET_CAM_ATTACH_OFFSET( l_U1220, -2.72438500, -4.40000000, -0.32000000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1220, 1 );
            }
            SET_CAM_ACTIVE( l_U1220, 1 );
            SET_CAM_PROPAGATE( l_U1220, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U1065 = 1;
            l_U357 = 3;
        }
        break;
        case 3:
        if (NOT IS_SCREEN_FADED_IN())
        {
            if (NOT IS_SCREEN_FADING_IN())
            {
                DO_SCREEN_FADE_IN_UNHACKED( 50 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else
        {
            l_U357 = 5;
        }
        break;
        case 4:
        if (NOT l_U1067)
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_5671(), "missjim_1", "jump" )))
            {
                TASK_PLAY_ANIM_WITH_FLAGS( sub_5671(), "jump", "missjim_1", 12.00000000, -1, 64 );
                l_U1067 = 1;
                l_U357 = 5;
            }
        }
        break;
        case 5:
        if (l_U1067)
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_5671(), "missjim_1", "jump" )))
            {
                SET_CHAR_HEADING( sub_5671(), 53.25830000 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U357 = 6;
            }
        }
        break;
        case 6:
        if (l_U1065 == 1)
        {
            SET_CAM_ACTIVE( l_U1220, 0 );
            SET_CAM_PROPAGATE( l_U1220, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U1220 );
            END_CAM_COMMANDS( ref l_U1218 );
            l_U1065 = 0;
        }
        if (NOT IS_SCREEN_FADED_IN())
        {
            if (NOT IS_SCREEN_FADING_IN())
            {
                DO_SCREEN_FADE_IN_UNHACKED( 50 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        l_U599++;
        SET_CAR_ENGINE_ON( l_U685, 0, 0 );
        SET_PLAYER_CONTROL( sub_5742(), 1 );
        l_U354 = 8;
        break;
    }
    return;
}

void sub_92803()
{
    if (l_U354 == 15)
    {
        l_U463[0] = {-1355.19700000, 764.09540000, 18.55990000};
        l_U463[1] = {-1351.35500000, 764.72780000, 18.55990000};
        l_U463[2] = {-1471.15900000, 739.21500000, 23.18690000};
        l_U463[3] = {-1473.68900000, 736.97030000, 23.35450000};
        l_U653[0] = 40.64970000;
        l_U653[1] = 37.62010000;
        l_U653[2] = 311.64080000;
        l_U653[3] = 311.58950000;
    }
    for ( l_U597 = 0; l_U597 < 8; l_U597++ )
    {
        if (l_U597 < 4)
        {
            sub_93053( l_U463[l_U597], l_U653[l_U597], l_U1209, l_U1207, ref l_U762[l_U597], 1 );
            sub_44581( ref l_U762[l_U597], sub_5671() );
            SET_CHAR_RELATIONSHIP_GROUP( l_U762[l_U597]._fU0, 25 );
            SET_CHAR_RELATIONSHIP( l_U762[l_U597]._fU0, 5, 0 );
            SET_CHAR_DECISION_MAKER( l_U762[l_U597]._fU0, l_U1295 );
            SET_COMBAT_DECISION_MAKER( l_U762[l_U597]._fU0, l_U1296 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U762[l_U597]._fU0, 1 );
            SET_CHAR_HEALTH( l_U762[l_U597]._fU0, 200 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U762[l_U597]._fU0, 1 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U762[l_U597]._fU0, 0 );
            SET_PED_DIES_WHEN_INJURED( l_U762[l_U597]._fU0, 1 );
            if (l_U597 == 0)
            {
                sub_45256( ref l_U762[l_U597], 0 );
            }
            if (l_U597 == 1)
            {
                sub_45256( ref l_U762[l_U597], 1 );
            }
            if (l_U597 == 2)
            {
                sub_45256( ref l_U762[l_U597], 2 );
            }
            if (l_U597 == 3)
            {
                sub_45256( ref l_U762[l_U597], 3 );
            }
        }
        else
        {
            CREATE_CHAR_AS_PASSENGER( l_U762[l_U597 - 4]._fU4, 26, l_U1209, 0, ref l_U727[l_U597] );
            SET_CHAR_RELATIONSHIP_GROUP( l_U727[l_U597], 25 );
            SET_CHAR_RELATIONSHIP( l_U727[l_U597], 5, 0 );
            SET_CHAR_DECISION_MAKER( l_U727[l_U597], l_U1299 );
            SET_COMBAT_DECISION_MAKER( l_U727[l_U597], l_U1300 );
            GIVE_WEAPON_TO_CHAR( l_U727[l_U597], l_U1212, 3000, 0 );
            TASK_SWAP_WEAPON( l_U727[l_U597], 1 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U727[l_U597], 1 );
            SET_CHAR_HEALTH( l_U727[l_U597], 200 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U727[l_U597], 1 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U727[l_U597], 1 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U727[l_U597], 0 );
            if ((l_U597 == 3) || (l_U597 == 2))
            {
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U727[l_U597], 1 );
            }
            else
            {
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U727[l_U597], 3 );
            }
            SET_CHAR_ACCURACY( l_U727[l_U597], 10 );
        }
    }
    return;
}

void sub_93053(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_93087( vParam0 + (vector( 2.00000000, 0.00000000, 0.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_50138( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_93087(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_93102( sub_32389( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_93230( iParam5 );
    return;
}

int sub_93102(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 9;
        break;
        case 2:
        return 8;
        break;
    }
    return 25;
}

void sub_93230(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_32349( iParam0 + 0 );
    if (iVar3 == 1)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 0, 0 );
        SET_CHAR_NEVER_TARGETTED( iParam0->_fU0, 1 );
    }
    else if (iVar3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 1, 0 );
    }
    else if (iVar3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_93387( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_93387( iVar3 ) );
    };;;
    SET_CHAR_PROOFS( iParam0->_fU0, 0, 0, 0, 1, 0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam0->_fU0, 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( iParam0->_fU0, 0 );
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU92 = 0;
    iParam0->_fU16 = {0, 0, 0};
    iParam0->_fU28 = 18.00000000;
    iParam0->_fU32 = 0;
    iParam0->_fU36 = 4;
    iParam0->_fU40 = 2;
    iParam0->_fU88 = 12;
    iParam0->_fU96 = 5;
    if (iVar3 == 1)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) == 0)
        {
            sub_20225( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_6878( 6 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_6878( 7 ) ))))
        {
            sub_20225( iParam0 );
        }
    }
    return;
}

int sub_93387(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 6;
        break;
        case 2:
        return 5;
        break;
    }
    return 22;
}

void sub_94614()
{
    if (l_U1046)
    {
        sub_94637( ref l_U762 );
    }
    if (l_U1046)
    {
        if (l_U1047)
        {
            if (NOT l_U1103)
            {
                sub_64781( ref l_U762 );
                l_U1103 = 1;
            }
        }
    }
    if (l_U1103)
    {
        for ( l_U597 = 0; l_U597 < 4; l_U597++ )
        {
            if (DOES_CHAR_EXIST( l_U727[l_U597 + 4] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U727[l_U597 + 4] )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U727[l_U597 + 4] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U727[l_U597 + 4], 25, ref l_U1194[l_U597 + 4] );
                        if ((l_U1194[l_U597 + 4]) == 7)
                        {
                            if (l_U1037[l_U597 + 4])
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U727[l_U597 + 4], 1 );
                                l_U1037[l_U597 + 4] = 0;
                            }
                            TASK_SMART_FLEE_CHAR( l_U727[l_U597 + 4], sub_5671(), 200.00000000, -1 );
                        }
                    }
                    else if (l_U1037[l_U597 + 4])
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U727[l_U597 + 4], 1 );
                        l_U1037[l_U597 + 4] = 0;
                    }
                }
            }
        }
    }
    if (l_U1046)
    {
        if (NOT l_U1047)
        {
            if (NOT l_U1103)
            {
                for ( l_U597 = 0; l_U597 < 4; l_U597++ )
                {
                    if (DOES_VEHICLE_EXIST( l_U762[l_U597]._fU4 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U762[l_U597]._fU4 ))
                        {
                            if (DOES_CHAR_EXIST( l_U762[l_U597]._fU0 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U762[l_U597]._fU0 )))
                                {
                                    if (DOES_CHAR_EXIST( l_U727[l_U597 + 4] ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U727[l_U597 + 4] )))
                                        {
                                            if (IS_CHAR_IN_CAR( l_U727[l_U597 + 4], l_U762[l_U597]._fU4 ))
                                            {
                                                GET_SCRIPT_TASK_STATUS( l_U727[l_U597 + 4], 52, ref l_U1194[l_U597 + 4] );
                                                if ((l_U1194[l_U597 + 4]) == 7)
                                                {
                                                    if (NOT (l_U1037[l_U597 + 4]))
                                                    {
                                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U727[l_U597 + 4], 0 );
                                                        l_U1037[l_U597 + 4] = 1;
                                                    }
                                                    TASK_DRIVE_BY( l_U727[l_U597 + 4], 0, l_U677, 0.00000000, 0.00000000, 0.00000000, 150.00000000, 8, 0, 100 );
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if (DOES_CHAR_EXIST( l_U762[l_U597]._fU0 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U762[l_U597]._fU0 )))
                                {
                                    if (DOES_CHAR_EXIST( l_U727[l_U597 + 4] ))
                                    {
                                        if (IS_CHAR_INJURED( l_U727[l_U597 + 4] ))
                                        {
                                            if (NOT l_U1037[l_U597])
                                            {
                                                sub_64812( ref l_U762[l_U597], ref l_U727[l_U597], ref l_U686[l_U597] );
                                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U727[l_U597], 1 );
                                                l_U1037[l_U597] = 1;
                                            }
                                            if (NOT (IS_CHAR_IN_CAR( l_U727[l_U597], l_U762[l_U597]._fU4 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( l_U727[l_U597], 25, ref l_U1194[l_U597] );
                                                if (l_U1194[l_U597] == 7)
                                                {
                                                    TASK_SMART_FLEE_CHAR( l_U727[l_U597], sub_5671(), 200.00000000, -1 );
                                                }
                                            }
                                            else
                                            {
                                                GET_SCRIPT_TASK_STATUS( l_U727[l_U597], 49, ref l_U1194[l_U597] );
                                                if (l_U1194[l_U597] == 7)
                                                {
                                                    TASK_CAR_MISSION_PED_TARGET( l_U727[l_U597], l_U762[l_U597]._fU4, sub_5671(), 8, 25.00000000, 2, 200, 10 );
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if (DOES_CHAR_EXIST( l_U762[l_U597]._fU0 ))
                            {
                                if (IS_CHAR_INJURED( l_U762[l_U597]._fU0 ))
                                {
                                    if (DOES_CHAR_EXIST( l_U727[l_U597 + 4] ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U727[l_U597 + 4] )))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U727[l_U597 + 4], 25, ref l_U1194[l_U597 + 4] );
                                            if ((l_U1194[l_U597 + 4]) == 7)
                                            {
                                                TASK_SMART_FLEE_CHAR( l_U727[l_U597 + 4], sub_5671(), 200.00000000, -1 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (DOES_CHAR_EXIST( l_U762[l_U597]._fU0 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U762[l_U597]._fU0 )))
                            {
                                if (NOT l_U1037[l_U597])
                                {
                                    sub_64812( ref l_U762[l_U597], ref l_U727[l_U597], ref l_U686[l_U597] );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U727[l_U597], 1 );
                                    l_U1037[l_U597] = 1;
                                }
                                if (NOT (IS_CHAR_IN_CAR( l_U727[l_U597], l_U762[l_U597]._fU4 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U727[l_U597], 25, ref l_U1194[l_U597] );
                                    if (l_U1194[l_U597] == 7)
                                    {
                                        TASK_SMART_FLEE_CHAR( l_U727[l_U597], sub_5671(), 200.00000000, -1 );
                                    }
                                }
                                else
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U727[l_U597], 49, ref l_U1194[l_U597] );
                                    if (l_U1194[l_U597] == 7)
                                    {
                                        TASK_CAR_MISSION_PED_TARGET( l_U727[l_U597], l_U762[l_U597]._fU4, sub_5671(), 8, 25.00000000, 2, 200, 10 );
                                    }
                                }
                            }
                        }
                        if (DOES_CHAR_EXIST( l_U727[l_U597 + 4] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U727[l_U597 + 4] )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U727[l_U597 + 4], 25, ref l_U1194[l_U597 + 4] );
                                if ((l_U1194[l_U597 + 4]) == 7)
                                {
                                    TASK_SMART_FLEE_CHAR( l_U727[l_U597 + 4], sub_5671(), 200.00000000, -1 );
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

void sub_94637(unknown uParam0)
{
    int iVar3;
    int I;

    if ((l_U211 >= (uParam0^)) || (l_U211 < 0))
    {
        l_U211 = 0;
    }
    sub_94676( uParam0 );
    if (NOT (IS_CHAR_INJURED( (uParam0^)[l_U211]._fU0 )))
    {
        sub_31773( ref (uParam0^)[l_U211], 1 );
        if (DOES_CHAR_EXIST( (uParam0^)[l_U211]._fU8 ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[l_U211]._fU8 ))
            {
                iVar3 = sub_95056( uParam0, (uParam0^)[l_U211]._fU8 );
                if (iVar3 >= 0)
                {
                    (uParam0^)[l_U211]._fU8 = (uParam0^)[iVar3]._fU8;
                    (uParam0^)[l_U211]._fU40 = (uParam0^)[iVar3]._fU40;
                    PRINTSTRING( "BIKER_BUDDIES_AI_TICK: Biker " );
                    PRINTINT( l_U211 );
                    PRINTSTRING( " is changing leader to " );
                    PRINTINT( iVar3 );
                    PRINTSTRING( "'s leader\n" );
                }
            }
        }
    }
    l_U211++;
    for ( I = 0; I < (uParam0^); I++ )
    {
        sub_55394( ref (uParam0^)[I] );
    }
    return;
}

void sub_94676(unknown uParam0)
{
    int[5] iVar3;
    int I;
    unknown uVar10;
    unknown uVar11;

    array(ref iVar3, 5);
    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( (uParam0^)[I]._fU0 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( (uParam0^)[I]._fU0, ref uVar10 );
                iVar3[sub_33425( uVar10 )] = 1;
            }
        }
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_5671() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5671(), ref uVar10 );
        iVar3[sub_33425( uVar10 )] = 1;
    }
    for ( I = 0; I < iVar3; I++ )
    {
        uVar11 = sub_33702( I );
        if (iVar3[I])
        {
            if (NOT (HAVE_ANIMS_LOADED( uVar11 )))
            {
                REQUEST_ANIMS( uVar11 );
            }
        }
        else if (HAVE_ANIMS_LOADED( uVar11 ))
        {
            REMOVE_ANIMS( uVar11 );
        }
    }
    return;
}

int sub_95056(unknown uParam0, int iParam1)
{
    int Result;

    for ( Result = 0; Result < (uParam0^); Result++ )
    {
        if ((uParam0^)[Result]._fU0 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_97318()
{
    if (l_U1158)
    {
        for ( l_U597 = 0; l_U597 < 5; l_U597++ )
        {
            if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
            {
                if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                {
                    if (IS_CAR_ATTACHED( l_U678[l_U597] ))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U678[l_U597] );
                        DELETE_CAR( ref l_U678[l_U597] );
                    }
                    else
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U678[l_U597] );
                        DELETE_CAR( ref l_U678[l_U597] );
                    }
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U675 ))
        {
            if (IS_VEH_DRIVEABLE( l_U675 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675 );
                DELETE_CAR( ref l_U675 );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U677 );
                DELETE_CAR( ref l_U677 );
            }
        }
    }
    return;
}

void sub_97653(unknown uParam0)
{
    vector[10] vVar3;
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
    unknown[9] uVar34;
    unknown uVar44;

    array(ref vVar3, 10);
    vVar3[0] = {-1699.61800000, 351.86190000, 24.44400000};
    vVar3[1] = {-1700.69100000, 352.45200000, 24.44400000};
    vVar3[2] = {-1701.75300000, 353.03630000, 24.44400000};
    vVar3[3] = {-1703.25100000, 353.85280000, 24.44400000};
    vVar3[4] = {-1704.71300000, 354.65020000, 24.44400000};
    vVar3[5] = {-1706.36200000, 355.54770000, 24.44400000};
    vVar3[6] = {-1708.22900000, 356.67890000, 24.44400000};
    vVar3[7] = {-1709.34600000, 357.71160000, 24.44400000};
    vVar3[8] = {-1711.50900000, 358.62260000, 24.44400000};
    vVar3[9] = {-1714.87500000, 360.48620000, 24.44400000};
    array(ref uVar34, 9);
    for ( l_U597 = 0; l_U597 < 9; l_U597++ )
    {
        uVar34[l_U597] = GET_CLOSEST_CAR( vVar3[l_U597], 3.00000000, 0, 4 );
        if (NOT (uVar34[l_U597] == nil))
        {
            PRINTNL();
            PRINTSTRING( "CAR" );
            PRINTNL();
            SET_CAR_VISIBLE( uVar34[l_U597], uParam0 );
        }
    }
    return;
}

void sub_98254()
{
    if (l_U1158)
    {
        l_U591 = {-1295.34100000, 690.12040000, 14.62300000};
        l_U594 = {-1298.45500000, 690.71510000, 14.78330000};
        l_U673 = 344.12260000;
        l_U674 = 305.64490000;
    }
    if (l_U1159)
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U676 )))
        {
            while (NOT (sub_13403( ref l_U676, l_U591, l_U673 )))
            {
                WAIT( 0 );
            }
        }
        if (NOT (DOES_VEHICLE_EXIST( l_U675 )))
        {
            CLEAR_AREA( l_U594._fU0, l_U594._fU4, l_U594._fU8, 10.00000000, 0 );
            while (NOT (sub_10612( ref l_U675, l_U594, l_U674 )))
            {
                WAIT( 0 );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U675 ))
        {
            if (IS_VEH_DRIVEABLE( l_U675 ))
            {
                LOCK_CAR_DOORS( l_U675, 3 );
            }
        }
    }
    return;
}

void sub_98600()
{
    l_U642 = 250.10510000;
    if (DOES_BLIP_EXIST( l_U1235 ))
    {
        REMOVE_BLIP( l_U1235 );
    }
    if (DOES_BLIP_EXIST( l_U1226 ))
    {
        REMOVE_BLIP( l_U1226 );
    }
    if (DOES_BLIP_EXIST( l_U1227 ))
    {
        REMOVE_BLIP( l_U1227 );
    }
    if (l_U361 > 0)
    {
        if (sub_83069())
        {
            if (NOT l_U1069)
            {
                if (sub_5787( l_U1265 ))
                {
                    sub_5971( ref l_U1265, 0 );
                }
                CLEAR_PRINTS();
                INCREMENT_INT_STAT( 372, 1 );
                l_U361 = 8;
            }
        }
        else
        {
            l_U1069 = 0;
        }
    }
    switch (l_U361)
    {
        case 0:
        CLEAR_PRINTS();
        SET_PLAYER_CONTROL( sub_5742(), 0 );
        if (sub_5787( l_U1265 ))
        {
            sub_5971( ref l_U1265, 0 );
        }
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else if (l_U1046)
        {
            if (l_U1047)
            {
                for ( l_U597 = 0; l_U597 < 4; l_U597++ )
                {
                    if (DOES_CHAR_EXIST( l_U727[l_U597 + 4] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U727[l_U597 + 4] )))
                        {
                            DELETE_CHAR( ref l_U727[l_U597 + 4] );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U727[l_U597 + 4] );
                            l_U727[l_U597 + 4] = nil;
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U762[l_U597]._fU0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U762[l_U597]._fU0 )))
                        {
                            DELETE_CHAR( ref l_U762[l_U597]._fU0 );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U762[l_U597]._fU0 );
                            l_U762[l_U597]._fU0 = nil;
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U762[l_U597]._fU4 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U762[l_U597]._fU4 ))
                        {
                            DELETE_CAR( ref l_U762[l_U597]._fU4 );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U762[l_U597]._fU4 );
                            l_U762[l_U597]._fU4 = nil;
                        }
                    }
                }
            }
        }
        if (l_U1046)
        {
            l_U1046 = 0;
        }
        if (l_U1047)
        {
            l_U1047 = 0;
        }
        if (l_U1103)
        {
            l_U1103 = 0;
        }
        for ( l_U597 = 0; l_U597 < 8; l_U597++ )
        {
            if (l_U1037[l_U597])
            {
                l_U1037[l_U597] = 0;
            }
        }
        CLEAR_AREA( l_U368._fU0, l_U368._fU4, l_U368._fU8, 75.00000000, 1 );
        CLEAR_AREA_OF_COPS( l_U368._fU0, l_U368._fU4, l_U368._fU8, 75.00000000 );
        l_U361 = 1;;
        break;
        case 1:
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                {
                    if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                    {
                        SET_CAR_COORDINATES( l_U677, l_U368._fU0, l_U368._fU4, l_U368._fU8 );
                        SET_CAR_HEADING( l_U677, l_U642 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U677 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        if (DOES_CHAR_EXIST( l_U699 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U699 )))
                            {
                                GET_PLAYER_GROUP( sub_5742(), ref l_U1264 );
                                if (IS_GROUP_MEMBER( l_U699, l_U1264 ))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U699 );
                                }
                            }
                        }
                        l_U361 = 2;
                    }
                }
            }
        }
        break;
        case 2:
        if (NOT l_U1064)
        {
            BEGIN_CAM_COMMANDS( ref l_U1218 );
            CREATE_CAM( 14, ref l_U1219 );
            SET_CAM_POS( l_U1219, -1312.82100000, 714.65590000, 18.32680000 );
            SET_CAM_ROT( l_U1219, -0.06621600, 0.00000000, 71.12321000 );
            SET_CAM_FOV( l_U1219, 21.00006000 );
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                ATTACH_CAM_TO_VEHICLE( l_U1219, l_U677 );
                SET_CAM_ATTACH_OFFSET( l_U1219, 0, 5.81000000, 1.15000000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1219, 1 );
            }
            SET_CAM_ACTIVE( l_U1219, 1 );
            SET_CAM_PROPAGATE( l_U1219, 1 );
            SET_USE_HIGHDOF( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 1 );
            l_U1064 = 1;
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    FREEZE_CAR_POSITION( l_U677, 0 );
                }
            }
            APPLY_FORCE_TO_CAR( l_U677, 1, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
            l_U361 = 3;
        }
        break;
        case 3:
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                {
                    TASK_LOOK_AT_CHAR( sub_5671(), l_U699, 999999, 0 );
                }
            }
        }
        sub_100251();
        l_U361 = 4;
        break;
        case 4:
        if (NOT IS_SCREEN_FADED_IN())
        {
            if (NOT IS_SCREEN_FADING_IN())
            {
                DO_SCREEN_FADE_IN_UNHACKED( 500 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else
        {
            l_U361 = 5;
        }
        break;
        case 5:
        if (sub_20503( "E1B2_ARRV", ref l_U1265, 6, 1 ))
        {
            GET_GAME_TIMER( ref l_U629 );
            l_U361 = 6;
        }
        break;
        case 6:
        GET_GAME_TIMER( ref l_U628 );
        l_U627 = l_U628 - l_U629;
        if (l_U627 >= 2000)
        {
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (DOES_VEHICLE_EXIST( l_U677 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U677 ))
                        {
                            if (DOES_VEHICLE_EXIST( l_U675 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U675 ))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( l_U699, l_U675 )))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( l_U699, l_U677 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U699, 13, ref l_U1167 );
                                            if (l_U1167 == 7)
                                            {
                                                TASK_LEAVE_CAR( l_U699, l_U677 );
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U699, 12, ref l_U1167 );
                                            if (l_U1167 == 7)
                                            {
                                                TASK_ENTER_CAR_AS_DRIVER( l_U699, l_U675, -1 );
                                                l_U1033[0] = 1;
                                            }
                                        }
                                    }
                                    else if (NOT (sub_5787( l_U1265 )))
                                    {
                                        INCREMENT_INT_STAT( 373, 1 );
                                        l_U361 = 8;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 8:
        if (NOT l_U1073[1])
        {
            if (NOT (sub_5787( l_U1265 )))
            {
                if (DOES_CHAR_EXIST( l_U699 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        if (DOES_VEHICLE_EXIST( l_U675 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U675 ))
                            {
                                if (IS_CHAR_IN_CAR( l_U699, l_U675 ))
                                {
                                    if (NOT IS_SCREEN_FADED_IN())
                                    {
                                        if (NOT IS_SCREEN_FADING_IN())
                                        {
                                            DO_SCREEN_FADE_IN_UNHACKED( 1500 );
                                            while (IS_SCREEN_FADING())
                                            {
                                                WAIT( 0 );
                                            }
                                        }
                                    }
                                    if (l_U1064 == 1)
                                    {
                                        if (DOES_CAM_EXIST( l_U1219 ))
                                        {
                                            if (IS_CAM_ACTIVE( l_U1219 ))
                                            {
                                                SET_CAM_ACTIVE( l_U1219, 0 );
                                            }
                                            if (IS_CAM_PROPAGATING( l_U1219 ))
                                            {
                                                SET_CAM_PROPAGATE( l_U1219, 0 );
                                            }
                                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                            if (DOES_CAM_EXIST( l_U1219 ))
                                            {
                                                DESTROY_CAM( l_U1219 );
                                            }
                                            SET_USE_HIGHDOF( 0 );
                                            END_CAM_COMMANDS( ref l_U1218 );
                                        }
                                    }
                                    if (DOES_CHAR_EXIST( l_U699 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                                        {
                                            TASK_CLEAR_LOOK_AT( sub_5671() );
                                        }
                                    }
                                    l_U1073[1] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (NOT l_U1073[1])
        {
            if (DOES_VEHICLE_EXIST( l_U675 ))
            {
                if (IS_VEH_DRIVEABLE( l_U675 ))
                {
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if ((NOT (IS_CHAR_IN_CAR( l_U699, l_U675 ))) || (sub_5787( l_U1265 )))
                            {
                                sub_5971( ref l_U1265, 0 );
                                if (NOT IS_SCREEN_FADED_OUT())
                                {
                                    if (NOT IS_SCREEN_FADING_OUT())
                                    {
                                        DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                                        while (IS_SCREEN_FADING())
                                        {
                                            WAIT( 0 );
                                        }
                                    }
                                }
                                if (DOES_CHAR_EXIST( l_U699 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                                    {
                                        TASK_CLEAR_LOOK_AT( sub_5671() );
                                    }
                                }
                                if (l_U1064 == 1)
                                {
                                    if (DOES_CAM_EXIST( l_U1219 ))
                                    {
                                        if (IS_CAM_ACTIVE( l_U1219 ))
                                        {
                                            SET_CAM_ACTIVE( l_U1219, 0 );
                                        }
                                        if (IS_CAM_PROPAGATING( l_U1219 ))
                                        {
                                            SET_CAM_PROPAGATE( l_U1219, 0 );
                                        }
                                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                        if (DOES_CAM_EXIST( l_U1219 ))
                                        {
                                            DESTROY_CAM( l_U1219 );
                                        }
                                        SET_USE_HIGHDOF( 0 );
                                        END_CAM_COMMANDS( ref l_U1218 );
                                    }
                                }
                                l_U1073[1] = 1;
                            }
                        }
                    }
                }
            }
        }
        if (NOT l_U1073[2])
        {
            if (DOES_BLIP_EXIST( l_U1225 ))
            {
                REMOVE_BLIP( l_U1225 );
            }
            if (DOES_BLIP_EXIST( l_U1226 ))
            {
                REMOVE_BLIP( l_U1226 );
            }
            if (DOES_BLIP_EXIST( l_U1227 ))
            {
                REMOVE_BLIP( l_U1227 );
            }
            if (DOES_BLIP_EXIST( l_U1235 ))
            {
                REMOVE_BLIP( l_U1235 );
            }
            if (DOES_BLIP_EXIST( l_U1236 ))
            {
                REMOVE_BLIP( l_U1236 );
            }
            if (DOES_BLIP_EXIST( l_U1248 ))
            {
                REMOVE_BLIP( l_U1248 );
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1229[l_U597] ))
                {
                    REMOVE_BLIP( l_U1229[l_U597] );
                }
                if (DOES_BLIP_EXIST( l_U1232[l_U597] ))
                {
                    REMOVE_BLIP( l_U1232[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
                {
                    REMOVE_BLIP( l_U1237[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 3; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1244[l_U597] ))
                {
                    REMOVE_BLIP( l_U1244[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 4; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1249[l_U597] ))
                {
                    REMOVE_BLIP( l_U1249[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 3; l_U597++ )
            {
                if (DOES_CHAR_EXIST( l_U700[l_U597] ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U700[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (DOES_CHAR_EXIST( l_U714[l_U597] ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U714[l_U597] );
                }
            }
            l_U1073[2] = 1;
        }
        if (NOT l_U1033[0])
        {
            if (DOES_VEHICLE_EXIST( l_U675 ))
            {
                if (IS_VEH_DRIVEABLE( l_U675 ))
                {
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if (DOES_VEHICLE_EXIST( l_U677 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U677 ))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U699, l_U675 )))
                                    {
                                        if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U699, 13, ref l_U1167 );
                                            if (l_U1167 == 7)
                                            {
                                                TASK_LEAVE_CAR( l_U699, l_U677 );
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U699, 12, ref l_U1167 );
                                            if (l_U1167 == 7)
                                            {
                                                TASK_ENTER_CAR_AS_DRIVER( l_U699, l_U675, -1 );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        SET_GAME_CAM_HEADING( 0.00000000 );
                                        SET_PLAYER_CONTROL( sub_5742(), 1 );
                                        SET_WIDESCREEN_BORDERS( 0 );
                                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 0 );
                                        if (NOT IS_SCREEN_FADED_IN())
                                        {
                                            if (NOT IS_SCREEN_FADING_IN())
                                            {
                                                DO_SCREEN_FADE_IN_UNHACKED( 2000 );
                                                while (IS_SCREEN_FADING())
                                                {
                                                    WAIT( 0 );
                                                }
                                            }
                                        }
                                        APPLY_FORCE_TO_CAR( l_U677, 1, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                                        l_U354 = 13;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_5742(), 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 0 );
            if (NOT IS_SCREEN_FADED_IN())
            {
                if (NOT IS_SCREEN_FADING_IN())
                {
                    DO_SCREEN_FADE_IN_UNHACKED( 2000 );
                    while (IS_SCREEN_FADING())
                    {
                        WAIT( 0 );
                    }
                }
            }
            APPLY_FORCE_TO_CAR( l_U677, 1, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
            l_U354 = 13;
        }
        break;
        case 7: break;
    }
    return;
}

void sub_100251()
{
    if (DOES_VEHICLE_EXIST( l_U676 ))
    {
        if (IS_VEH_DRIVEABLE( l_U676 ))
        {
            if (NOT (LOCATE_CAR_3D( l_U676, l_U591._fU0, l_U591._fU4, l_U591._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
            {
                SET_CAR_HEADING( l_U676, l_U673 );
                SET_CAR_COORDINATES( l_U676, l_U591._fU0, l_U591._fU4, l_U591._fU8 );
                SET_CAR_ON_GROUND_PROPERLY( l_U676 );
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U675 ))
    {
        if (IS_VEH_DRIVEABLE( l_U675 ))
        {
            if (NOT (LOCATE_CAR_3D( l_U675, l_U594._fU0, l_U594._fU4, l_U594._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
            {
                SET_CAR_HEADING( l_U675, l_U674 );
                SET_CAR_COORDINATES( l_U675, l_U594._fU0, l_U594._fU4, l_U594._fU8 );
                SET_CAR_ON_GROUND_PROPERLY( l_U675 );
            }
        }
    }
    return;
}

void sub_103155()
{
    l_U368 = {-1281.29100000, 689.62350000, 14.39700000};
    l_U642 = 237.24570000;
    if (DOES_BLIP_EXIST( l_U1235 ))
    {
        REMOVE_BLIP( l_U1235 );
    }
    if (DOES_BLIP_EXIST( l_U1226 ))
    {
        REMOVE_BLIP( l_U1226 );
    }
    if (DOES_BLIP_EXIST( l_U1227 ))
    {
        REMOVE_BLIP( l_U1227 );
    }
    if (l_U361 > 1)
    {
        if (sub_83069())
        {
            if (NOT l_U1069)
            {
                if (sub_5787( l_U1265 ))
                {
                    sub_5971( ref l_U1265, 0 );
                }
                CLEAR_PRINTS();
                INCREMENT_INT_STAT( 372, 1 );
                l_U361 = 8;
            }
        }
        else
        {
            l_U1069 = 0;
        }
    }
    switch (l_U361)
    {
        case 0:
        CLEAR_PRINTS();
        SET_PLAYER_CONTROL( sub_5742(), 0 );
        if (sub_5787( l_U1265 ))
        {
            sub_5971( ref l_U1265, 0 );
        }
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else if (l_U1046)
        {
            if (l_U1047)
            {
                for ( l_U597 = 0; l_U597 < 4; l_U597++ )
                {
                    if (DOES_CHAR_EXIST( l_U727[l_U597 + 4] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U727[l_U597 + 4] )))
                        {
                            DELETE_CHAR( ref l_U727[l_U597 + 4] );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U727[l_U597 + 4] );
                            l_U727[l_U597 + 4] = nil;
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U762[l_U597]._fU0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U762[l_U597]._fU0 )))
                        {
                            DELETE_CHAR( ref l_U762[l_U597]._fU0 );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U762[l_U597]._fU0 );
                            l_U762[l_U597]._fU0 = nil;
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U762[l_U597]._fU4 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U762[l_U597]._fU4 ))
                        {
                            DELETE_CAR( ref l_U762[l_U597]._fU4 );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U762[l_U597]._fU4 );
                            l_U762[l_U597]._fU4 = nil;
                        }
                    }
                }
            }
        }
        if (l_U1046)
        {
            l_U1046 = 0;
        }
        if (l_U1047)
        {
            l_U1047 = 0;
        }
        if (l_U1103)
        {
            l_U1103 = 0;
        }
        for ( l_U597 = 0; l_U597 < 8; l_U597++ )
        {
            if (l_U1037[l_U597])
            {
                l_U1037[l_U597] = 0;
            }
        }
        CLEAR_AREA( l_U368._fU0, l_U368._fU4, l_U368._fU8, 75.00000000, 1 );
        CLEAR_AREA_OF_COPS( l_U368._fU0, l_U368._fU4, l_U368._fU8, 75.00000000 );
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                {
                    CLEAR_CHAR_TASKS( l_U699 );
                    TASK_LOOK_AT_CHAR( l_U699, sub_5671(), 999999, 0 );
                    CLEAR_CHAR_TASKS( sub_5671() );
                    TASK_LOOK_AT_CHAR( sub_5671(), l_U699, 999999, 0 );
                }
            }
        }
        l_U361 = 1;;
        break;
        case 1:
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                {
                    if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                    {
                        SET_CAR_COORDINATES( l_U677, l_U368._fU0, l_U368._fU4, l_U368._fU8 );
                        SET_CAR_HEADING( l_U677, l_U642 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U677 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        if (DOES_CHAR_EXIST( l_U699 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U699 )))
                            {
                                GET_PLAYER_GROUP( sub_5742(), ref l_U1264 );
                                if (IS_GROUP_MEMBER( l_U699, l_U1264 ))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U699 );
                                }
                            }
                        }
                        l_U361 = 2;
                    }
                }
            }
        }
        break;
        case 2:
        if (NOT l_U1064)
        {
            BEGIN_CAM_COMMANDS( ref l_U1218 );
            CREATE_CAM( 14, ref l_U1222 );
            CREATE_CAM( 14, ref l_U1223 );
            CREATE_CAM( 3, ref l_U1224 );
            SET_CAM_POS( l_U1222, -1277.63800000, 686.06490000, 16.72890000 );
            SET_CAM_ROT( l_U1222, -2.86168100, 0.00000000, 46.82384000 );
            SET_CAM_FOV( l_U1222, 21.00006000 );
            SET_CAM_POS( l_U1224, -1277.63800000, 686.06490000, 16.72890000 );
            SET_CAM_ROT( l_U1224, -2.86168100, 0.00000000, 46.82384000 );
            SET_CAM_FOV( l_U1224, 21.00006000 );
            SET_CAM_POS( l_U1223, -1277.22800000, 688.12400000, 16.72890000 );
            SET_CAM_ROT( l_U1223, -2.86168100, 0.00000000, 77.68887000 );
            SET_CAM_FOV( l_U1223, 21.00006000 );
            SET_CAM_ACTIVE( l_U1222, 1 );
            SET_CAM_ACTIVE( l_U1223, 1 );
            SET_CAM_ACTIVE( l_U1224, 1 );
            SET_CAM_PROPAGATE( l_U1222, 1 );
            SET_CAM_PROPAGATE( l_U1223, 0 );
            SET_CAM_PROPAGATE( l_U1224, 0 );
            SET_USE_HIGHDOF( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 1 );
            l_U1064 = 1;
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    FREEZE_CAR_POSITION( l_U677, 0 );
                }
            }
            l_U361 = 3;
        }
        break;
        case 3:
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                {
                    CLEAR_CHAR_TASKS( l_U699 );
                    TASK_LOOK_AT_CHAR( l_U699, sub_5671(), 999999, 0 );
                    CLEAR_CHAR_TASKS( sub_5671() );
                    TASK_LOOK_AT_CHAR( sub_5671(), l_U699, 999999, 0 );
                }
            }
        }
        if (NOT l_U1164)
        {
            SET_CAM_PROPAGATE( l_U1222, 0 );
            SET_CAM_PROPAGATE( l_U1224, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U1224, l_U1222, l_U1223, 20000, 0 );
            l_U1164 = 1;
        }
        sub_100251();
        l_U361 = 4;
        break;
        case 4:
        if (NOT IS_SCREEN_FADED_IN())
        {
            if (NOT IS_SCREEN_FADING_IN())
            {
                DO_SCREEN_FADE_IN_UNHACKED( 500 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else
        {
            l_U361 = 5;
        }
        break;
        case 5:
        if (sub_20503( "E1B2_ARRV", ref l_U1265, 6, 1 ))
        {
            GET_GAME_TIMER( ref l_U629 );
            l_U361 = 6;
        }
        break;
        case 6:
        GET_GAME_TIMER( ref l_U628 );
        l_U627 = l_U628 - l_U629;
        if (l_U627 >= 2000)
        {
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U699 );
                    if (DOES_VEHICLE_EXIST( l_U677 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U677 ))
                        {
                            if (DOES_VEHICLE_EXIST( l_U675 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U675 ))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( l_U699, l_U675 )))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( l_U699, l_U677 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U699, 13, ref l_U1167 );
                                            if (l_U1167 == 7)
                                            {
                                                TASK_LEAVE_CAR( l_U699, l_U677 );
                                                TASK_CLEAR_LOOK_AT( sub_5671() );
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U699, 27, ref l_U1167 );
                                            if (l_U1167 == 7)
                                            {
                                                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U699, -1285.48600000, 689.92720000, 14.39700000, 2, 99999, 1.00000000 );
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
        if (l_U627 >= 5000)
        {
            l_U361 = 7;
        }
        break;
        case 7:
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_5671(), 13, ref l_U1203 );
                    if (l_U1203 == 7)
                    {
                        TASK_LEAVE_CAR( sub_5671(), l_U677 );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( sub_5671(), 27, ref l_U1203 );
                    if (l_U1203 == 7)
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( sub_5671(), -1283.18200000, 693.62790000, 14.39700000, 2, 99999, 1.00000000 );
                    }
                    l_U361 = 8;
                }
            }
        }
        break;
        case 8:
        if (l_U1069)
        {
            sub_5971( ref l_U1265, 0 );
        }
        if (NOT (sub_5787( l_U1265 )))
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                    while (IS_SCREEN_FADING())
                    {
                        WAIT( 0 );
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (NOT (IS_VEH_DRIVEABLE( l_U677 )))
                {
                    POP_CAR_BOOT( l_U677 );
                }
            }
            sub_106011();
            if (DOES_VEHICLE_EXIST( l_U695[0] ))
            {
                if (IS_VEH_DRIVEABLE( l_U695[0] ))
                {
                    DELETE_CAR( ref l_U695[0] );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U695[0] );
                }
            }
            if (DOES_VEHICLE_EXIST( l_U695[1] ))
            {
                if (IS_VEH_DRIVEABLE( l_U695[1] ))
                {
                    DELETE_CAR( ref l_U695[1] );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U695[1] );
                }
            }
            if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_5671(), -1285.74500000, 687.58730000, 14.39700000 );
                SET_CHAR_COORDINATES( sub_5671(), -1285.74500000, 687.58730000, 14.39700000 );
                SET_CHAR_HEADING( sub_5671(), 35.93620000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_5671(), -1285.74500000, 687.58730000, 14.39700000 );
                SET_CHAR_HEADING( sub_5671(), 35.93620000 );
            }
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U699 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U699, -1285.48600000, 689.92720000, 14.39700000 );
                        SET_CHAR_COORDINATES( l_U699, -1285.48600000, 689.92720000, 14.39700000 );
                        SET_CHAR_HEADING( l_U699, 35.93620000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( l_U699, -1285.48600000, 689.92720000, 14.39700000 );
                        SET_CHAR_HEADING( l_U699, 35.93620000 );
                    }
                }
            }
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    SET_CAR_IN_CUTSCENE( l_U677, 1 );
                }
            }
            if (DOES_VEHICLE_EXIST( l_U676 ))
            {
                if (IS_VEH_DRIVEABLE( l_U676 ))
                {
                    SET_CAR_IN_CUTSCENE( l_U676, 1 );
                }
            }
            if (DOES_VEHICLE_EXIST( l_U675 ))
            {
                if (IS_VEH_DRIVEABLE( l_U675 ))
                {
                    SET_CAR_IN_CUTSCENE( l_U675, 1 );
                }
            }
            if (l_U1064)
            {
                if (DOES_CAM_EXIST( l_U1224 ))
                {
                    if (IS_CAM_ACTIVE( l_U1224 ))
                    {
                        SET_CAM_ACTIVE( l_U1224, 0 );
                    }
                    if (IS_CAM_PROPAGATING( l_U1224 ))
                    {
                        SET_CAM_PROPAGATE( l_U1224, 0 );
                    }
                    DESTROY_CAM( l_U1224 );
                }
                if (DOES_CAM_EXIST( l_U1222 ))
                {
                    if (IS_CAM_ACTIVE( l_U1222 ))
                    {
                        SET_CAM_ACTIVE( l_U1222, 0 );
                    }
                    if (IS_CAM_PROPAGATING( l_U1222 ))
                    {
                        SET_CAM_PROPAGATE( l_U1222, 0 );
                    }
                    DESTROY_CAM( l_U1222 );
                }
                if (DOES_CAM_EXIST( l_U1223 ))
                {
                    if (IS_CAM_ACTIVE( l_U1223 ))
                    {
                        SET_CAM_ACTIVE( l_U1223, 0 );
                    }
                    if (IS_CAM_PROPAGATING( l_U1223 ))
                    {
                        SET_CAM_PROPAGATE( l_U1223, 0 );
                    }
                    DESTROY_CAM( l_U1223 );
                }
                SET_USE_HIGHDOF( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U1218 );
                SET_GAME_CAM_HEADING( 0.00000000 );
            }
            l_U1164 = 0;
            l_U1064 = 0;
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U699 );
                    TASK_CLEAR_LOOK_AT( sub_5671() );
                }
            }
            if (DOES_BLIP_EXIST( l_U1225 ))
            {
                REMOVE_BLIP( l_U1225 );
            }
            if (DOES_BLIP_EXIST( l_U1226 ))
            {
                REMOVE_BLIP( l_U1226 );
            }
            if (DOES_BLIP_EXIST( l_U1227 ))
            {
                REMOVE_BLIP( l_U1227 );
            }
            if (DOES_BLIP_EXIST( l_U1235 ))
            {
                REMOVE_BLIP( l_U1235 );
            }
            if (DOES_BLIP_EXIST( l_U1236 ))
            {
                REMOVE_BLIP( l_U1236 );
            }
            if (DOES_BLIP_EXIST( l_U1248 ))
            {
                REMOVE_BLIP( l_U1248 );
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1229[l_U597] ))
                {
                    REMOVE_BLIP( l_U1229[l_U597] );
                }
                if (DOES_BLIP_EXIST( l_U1232[l_U597] ))
                {
                    REMOVE_BLIP( l_U1232[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
                {
                    REMOVE_BLIP( l_U1237[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 3; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1244[l_U597] ))
                {
                    REMOVE_BLIP( l_U1244[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 4; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1249[l_U597] ))
                {
                    REMOVE_BLIP( l_U1249[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 3; l_U597++ )
            {
                if (DOES_CHAR_EXIST( l_U700[l_U597] ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U700[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (DOES_CHAR_EXIST( l_U714[l_U597] ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U714[l_U597] );
                }
            }
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U699 );
                    DELETE_CHAR( ref l_U699 );
                }
            }
            if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_5671(), -1285.74500000, 687.58730000, 14.39700000 );
                SET_CHAR_COORDINATES( sub_5671(), -1285.74500000, 687.58730000, 14.39700000 );
                SET_CHAR_HEADING( sub_5671(), 35.93620000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_5671(), -1285.74500000, 687.58730000, 14.39700000 );
                SET_CHAR_HEADING( sub_5671(), 35.93620000 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_5742(), 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 0 );
            if ((l_U1105) || (l_U1104))
            {
                REQUEST_SCRIPT( "ability_stats" );
                while (NOT (HAS_SCRIPT_LOADED( "ability_stats" )))
                {
                    WAIT( 0 );
                }
            }
            CLEAR_AREA( l_U368._fU0, l_U368._fU4, l_U368._fU8, 75.00000000, 1 );
            l_U355 = 0;
            l_U354 = 16;;
        }
        break;
    }
    return;
}

void sub_106011()
{
    int iVar2;

    for ( l_U597 = 0; l_U597 < 5; l_U597++ )
    {
        if (NOT (l_U605 > 1))
        {
            if (l_U1021[l_U597])
            {
                if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                {
                    GET_CAR_MODEL( l_U678[l_U597], ref iVar2 );
                    if (iVar2 == -77769032)
                    {
                        if (IS_CAR_ATTACHED( l_U678[l_U597] ))
                        {
                            DETACH_CAR( l_U678[l_U597] );
                            if (l_U1158 == 1)
                            {
                                l_U695[l_U605] = l_U678[l_U597];
                                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U695[l_U605] );
                                DELETE_CAR( ref l_U695[l_U605] );
                            }
                            else
                            {
                                SET_CAR_HEADING( l_U678[l_U597], l_U663[l_U605] );
                                SET_CAR_COORDINATES( l_U678[l_U597], l_U531[l_U605]._fU0, l_U531[l_U605]._fU4, l_U531[l_U605]._fU8 );
                                LOCK_CAR_DOORS( l_U678[l_U597], 1 );
                                SET_CAR_CAN_BE_DAMAGED( l_U678[l_U597], 1 );
                                APPLY_FORCE_TO_CAR( l_U678[l_U597], 1, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                                l_U695[l_U605] = l_U678[l_U597];
                                l_U605++;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_108543()
{
    l_U642 = 250.10510000;
    if (DOES_BLIP_EXIST( l_U1235 ))
    {
        REMOVE_BLIP( l_U1235 );
    }
    if (DOES_BLIP_EXIST( l_U1226 ))
    {
        REMOVE_BLIP( l_U1226 );
    }
    if (DOES_BLIP_EXIST( l_U1227 ))
    {
        REMOVE_BLIP( l_U1227 );
    }
    if (l_U361 > 0)
    {
        if (sub_83069())
        {
            if (NOT l_U1069)
            {
                if (sub_5787( l_U1265 ))
                {
                    sub_5971( ref l_U1265, 0 );
                }
                CLEAR_PRINTS();
                INCREMENT_INT_STAT( 372, 1 );
                l_U361 = 8;
            }
        }
        else
        {
            l_U1069 = 0;
        }
    }
    switch (l_U361)
    {
        case 0:
        CLEAR_PRINTS();
        SET_PLAYER_CONTROL( sub_5742(), 0 );
        if (sub_5787( l_U1265 ))
        {
            sub_5971( ref l_U1265, 0 );
        }
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else if (l_U1046)
        {
            if (l_U1047)
            {
                for ( l_U597 = 0; l_U597 < 4; l_U597++ )
                {
                    if (DOES_CHAR_EXIST( l_U727[l_U597 + 4] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U727[l_U597 + 4] )))
                        {
                            DELETE_CHAR( ref l_U727[l_U597 + 4] );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U727[l_U597 + 4] );
                            l_U727[l_U597 + 4] = nil;
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U762[l_U597]._fU0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U762[l_U597]._fU0 )))
                        {
                            DELETE_CHAR( ref l_U762[l_U597]._fU0 );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U762[l_U597]._fU0 );
                            l_U762[l_U597]._fU0 = nil;
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U762[l_U597]._fU4 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U762[l_U597]._fU4 ))
                        {
                            DELETE_CAR( ref l_U762[l_U597]._fU4 );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U762[l_U597]._fU4 );
                            l_U762[l_U597]._fU4 = nil;
                        }
                    }
                }
            }
        }
        if (l_U1046)
        {
            l_U1046 = 0;
        }
        if (l_U1047)
        {
            l_U1047 = 0;
        }
        if (l_U1103)
        {
            l_U1103 = 0;
        }
        for ( l_U597 = 0; l_U597 < 8; l_U597++ )
        {
            if (l_U1037[l_U597])
            {
                l_U1037[l_U597] = 0;
            }
        }
        CLEAR_AREA( l_U368._fU0, l_U368._fU4, l_U368._fU8, 75.00000000, 1 );
        CLEAR_AREA_OF_COPS( l_U368._fU0, l_U368._fU4, l_U368._fU8, 75.00000000 );
        l_U361 = 1;;
        break;
        case 1:
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                {
                    if (IS_CHAR_IN_CAR( sub_5671(), l_U677 ))
                    {
                        SET_CAR_COORDINATES( l_U677, l_U368._fU0, l_U368._fU4, l_U368._fU8 );
                        SET_CAR_HEADING( l_U677, l_U642 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U677 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        sub_106011();
                        POP_CAR_BOOT( l_U677 );
                        if (DOES_CHAR_EXIST( l_U699 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U699 )))
                            {
                                GET_PLAYER_GROUP( sub_5742(), ref l_U1264 );
                                if (IS_GROUP_MEMBER( l_U699, l_U1264 ))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U699 );
                                }
                            }
                        }
                        l_U361 = 2;
                    }
                }
            }
        }
        break;
        case 2:
        if (NOT l_U1064)
        {
            BEGIN_CAM_COMMANDS( ref l_U1218 );
            CREATE_CAM( 14, ref l_U1219 );
            SET_CAM_POS( l_U1219, -1312.82100000, 714.65590000, 18.32680000 );
            SET_CAM_ROT( l_U1219, -0.06621600, 0.00000000, 71.12321000 );
            SET_CAM_FOV( l_U1219, 21.00006000 );
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                ATTACH_CAM_TO_VEHICLE( l_U1219, l_U677 );
                SET_CAM_ATTACH_OFFSET( l_U1219, 0, 5.81000000, 1.15000000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1219, 1 );
            }
            SET_CAM_ACTIVE( l_U1219, 1 );
            SET_CAM_PROPAGATE( l_U1219, 1 );
            SET_USE_HIGHDOF( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 1 );
            l_U1064 = 1;
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    FREEZE_CAR_POSITION( l_U677, 0 );
                }
            }
            APPLY_FORCE_TO_CAR( l_U677, 1, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
            l_U361 = 3;
        }
        break;
        case 3:
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                {
                    TASK_LOOK_AT_CHAR( sub_5671(), l_U699, 999999, 0 );
                }
            }
        }
        l_U361 = 4;
        break;
        case 4:
        if (NOT IS_SCREEN_FADED_IN())
        {
            if (NOT IS_SCREEN_FADING_IN())
            {
                DO_SCREEN_FADE_IN_UNHACKED( 500 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else
        {
            l_U361 = 5;
        }
        break;
        case 5:
        if (sub_20503( "E1B2_ARRV", ref l_U1265, 6, 1 ))
        {
            GET_GAME_TIMER( ref l_U629 );
            l_U361 = 6;
        }
        break;
        case 6:
        GET_GAME_TIMER( ref l_U628 );
        l_U627 = l_U628 - l_U629;
        if (l_U627 >= 2000)
        {
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (DOES_VEHICLE_EXIST( l_U677 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U677 ))
                        {
                            if (DOES_VEHICLE_EXIST( l_U695[0] ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U695[0] ))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( l_U699, l_U695[0] )))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( l_U699, l_U677 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U699, 13, ref l_U1167 );
                                            if (l_U1167 == 7)
                                            {
                                                TASK_LEAVE_CAR( l_U699, l_U677 );
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U699, 12, ref l_U1167 );
                                            if (l_U1167 == 7)
                                            {
                                                TASK_ENTER_CAR_AS_DRIVER( l_U699, l_U695[0], -1 );
                                                l_U1033[0] = 1;
                                            }
                                        }
                                    }
                                    else if (NOT (sub_5787( l_U1265 )))
                                    {
                                        INCREMENT_INT_STAT( 373, 1 );
                                        l_U361 = 8;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 8:
        if (NOT l_U1073[1])
        {
            if (NOT (sub_5787( l_U1265 )))
            {
                if (DOES_CHAR_EXIST( l_U699 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        if (DOES_VEHICLE_EXIST( l_U695[0] ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U695[0] ))
                            {
                                if (IS_CHAR_IN_CAR( l_U699, l_U695[0] ))
                                {
                                    if (NOT IS_SCREEN_FADED_IN())
                                    {
                                        if (NOT IS_SCREEN_FADING_IN())
                                        {
                                            DO_SCREEN_FADE_IN_UNHACKED( 1500 );
                                            while (IS_SCREEN_FADING())
                                            {
                                                WAIT( 0 );
                                            }
                                        }
                                    }
                                    if (l_U1064 == 1)
                                    {
                                        if (DOES_CAM_EXIST( l_U1219 ))
                                        {
                                            if (IS_CAM_ACTIVE( l_U1219 ))
                                            {
                                                SET_CAM_ACTIVE( l_U1219, 0 );
                                            }
                                            if (IS_CAM_PROPAGATING( l_U1219 ))
                                            {
                                                SET_CAM_PROPAGATE( l_U1219, 0 );
                                            }
                                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                            if (DOES_CAM_EXIST( l_U1219 ))
                                            {
                                                DESTROY_CAM( l_U1219 );
                                            }
                                            SET_USE_HIGHDOF( 0 );
                                            END_CAM_COMMANDS( ref l_U1218 );
                                        }
                                    }
                                    if (DOES_CHAR_EXIST( l_U699 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                                        {
                                            TASK_CLEAR_LOOK_AT( sub_5671() );
                                        }
                                    }
                                    l_U1073[1] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (NOT l_U1073[1])
        {
            if (DOES_VEHICLE_EXIST( l_U695[0] ))
            {
                if (IS_VEH_DRIVEABLE( l_U695[0] ))
                {
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if ((NOT (IS_CHAR_IN_CAR( l_U699, l_U695[0] ))) || (sub_5787( l_U1265 )))
                            {
                                sub_5971( ref l_U1265, 0 );
                                if (NOT IS_SCREEN_FADED_OUT())
                                {
                                    if (NOT IS_SCREEN_FADING_OUT())
                                    {
                                        DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                                        while (IS_SCREEN_FADING())
                                        {
                                            WAIT( 0 );
                                        }
                                    }
                                }
                                if (DOES_CHAR_EXIST( l_U699 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                                    {
                                        TASK_CLEAR_LOOK_AT( sub_5671() );
                                    }
                                }
                                if (l_U1064 == 1)
                                {
                                    if (DOES_CAM_EXIST( l_U1219 ))
                                    {
                                        if (IS_CAM_ACTIVE( l_U1219 ))
                                        {
                                            SET_CAM_ACTIVE( l_U1219, 0 );
                                        }
                                        if (IS_CAM_PROPAGATING( l_U1219 ))
                                        {
                                            SET_CAM_PROPAGATE( l_U1219, 0 );
                                        }
                                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                        if (DOES_CAM_EXIST( l_U1219 ))
                                        {
                                            DESTROY_CAM( l_U1219 );
                                        }
                                        SET_USE_HIGHDOF( 0 );
                                        END_CAM_COMMANDS( ref l_U1218 );
                                    }
                                }
                                l_U1073[1] = 1;
                            }
                        }
                    }
                }
            }
        }
        if (NOT l_U1073[2])
        {
            if (DOES_BLIP_EXIST( l_U1225 ))
            {
                REMOVE_BLIP( l_U1225 );
            }
            if (DOES_BLIP_EXIST( l_U1226 ))
            {
                REMOVE_BLIP( l_U1226 );
            }
            if (DOES_BLIP_EXIST( l_U1227 ))
            {
                REMOVE_BLIP( l_U1227 );
            }
            if (DOES_BLIP_EXIST( l_U1235 ))
            {
                REMOVE_BLIP( l_U1235 );
            }
            if (DOES_BLIP_EXIST( l_U1236 ))
            {
                REMOVE_BLIP( l_U1236 );
            }
            if (DOES_BLIP_EXIST( l_U1248 ))
            {
                REMOVE_BLIP( l_U1248 );
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1229[l_U597] ))
                {
                    REMOVE_BLIP( l_U1229[l_U597] );
                }
                if (DOES_BLIP_EXIST( l_U1232[l_U597] ))
                {
                    REMOVE_BLIP( l_U1232[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
                {
                    REMOVE_BLIP( l_U1237[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 3; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1244[l_U597] ))
                {
                    REMOVE_BLIP( l_U1244[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 4; l_U597++ )
            {
                if (DOES_BLIP_EXIST( l_U1249[l_U597] ))
                {
                    REMOVE_BLIP( l_U1249[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 3; l_U597++ )
            {
                if (DOES_CHAR_EXIST( l_U700[l_U597] ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U700[l_U597] );
                }
            }
            for ( l_U597 = 0; l_U597 < 2; l_U597++ )
            {
                if (DOES_CHAR_EXIST( l_U714[l_U597] ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U714[l_U597] );
                }
            }
            if (DOES_VEHICLE_EXIST( l_U676 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U676 );
            }
            if (DOES_VEHICLE_EXIST( l_U675 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675 );
            }
            l_U1073[2] = 1;
        }
        if (NOT l_U1033[0])
        {
            if (DOES_VEHICLE_EXIST( l_U695[0] ))
            {
                if (IS_VEH_DRIVEABLE( l_U695[0] ))
                {
                    if (DOES_CHAR_EXIST( l_U699 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            if (DOES_VEHICLE_EXIST( l_U677 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U677 ))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U699, l_U695[0] )))
                                    {
                                        if (IS_CHAR_IN_CAR( l_U699, l_U677 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U699, 13, ref l_U1167 );
                                            if (l_U1167 == 7)
                                            {
                                                TASK_LEAVE_CAR( l_U699, l_U677 );
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U699, 12, ref l_U1167 );
                                            if (l_U1167 == 7)
                                            {
                                                TASK_ENTER_CAR_AS_DRIVER( l_U699, l_U695[0], -1 );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        SET_GAME_CAM_HEADING( 0.00000000 );
                                        SET_PLAYER_CONTROL( sub_5742(), 1 );
                                        SET_WIDESCREEN_BORDERS( 0 );
                                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 0 );
                                        if (NOT IS_SCREEN_FADED_IN())
                                        {
                                            if (NOT IS_SCREEN_FADING_IN())
                                            {
                                                DO_SCREEN_FADE_IN_UNHACKED( 2000 );
                                                while (IS_SCREEN_FADING())
                                                {
                                                    WAIT( 0 );
                                                }
                                            }
                                        }
                                        APPLY_FORCE_TO_CAR( l_U677, 1, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                                        l_U354 = 13;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_5742(), 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 0 );
            if (NOT IS_SCREEN_FADED_IN())
            {
                if (NOT IS_SCREEN_FADING_IN())
                {
                    DO_SCREEN_FADE_IN_UNHACKED( 2000 );
                    while (IS_SCREEN_FADING())
                    {
                        WAIT( 0 );
                    }
                }
            }
            APPLY_FORCE_TO_CAR( l_U677, 1, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
            l_U354 = 13;
        }
        break;
        case 7: break;
    }
    return;
}

void sub_112882()
{
    vector vVar2;
    float fVar5;

    vVar2 = {-1701.70800000, 351.93290000, 24.44440000};
    fVar5 = 327.84630000;
    if (NOT l_U1152)
    {
        SET_PLAYER_CONTROL( sub_5742(), 0 );
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        if (NOT l_U1158)
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_5671(), vVar2.x, vVar2.y, vVar2.z );
            SET_CHAR_HEADING( sub_5671(), fVar5 );
            WAIT( 0 );
            SET_CHAR_COORDINATES( sub_5671(), vVar2.x, vVar2.y, vVar2.z );
            SET_CAM_BEHIND_PED( sub_5671() );
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
        if (NOT (IS_CHAR_DEAD( l_U699 )))
        {
            DELETE_CHAR( ref l_U699 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U699 );
        }
        if (DOES_BLIP_EXIST( l_U1225 ))
        {
            REMOVE_BLIP( l_U1225 );
        }
        if (DOES_BLIP_EXIST( l_U1226 ))
        {
            REMOVE_BLIP( l_U1226 );
        }
        if (DOES_BLIP_EXIST( l_U1227 ))
        {
            REMOVE_BLIP( l_U1227 );
        }
        if (DOES_BLIP_EXIST( l_U1235 ))
        {
            REMOVE_BLIP( l_U1235 );
        }
        if (DOES_BLIP_EXIST( l_U1236 ))
        {
            REMOVE_BLIP( l_U1236 );
        }
        if (DOES_BLIP_EXIST( l_U1248 ))
        {
            REMOVE_BLIP( l_U1248 );
        }
        for ( l_U597 = 0; l_U597 < 2; l_U597++ )
        {
            if (DOES_BLIP_EXIST( l_U1229[l_U597] ))
            {
                REMOVE_BLIP( l_U1229[l_U597] );
            }
            if (DOES_BLIP_EXIST( l_U1232[l_U597] ))
            {
                REMOVE_BLIP( l_U1232[l_U597] );
            }
        }
        for ( l_U597 = 0; l_U597 < 5; l_U597++ )
        {
            if (DOES_BLIP_EXIST( l_U1237[l_U597] ))
            {
                REMOVE_BLIP( l_U1237[l_U597] );
            }
        }
        for ( l_U597 = 0; l_U597 < 3; l_U597++ )
        {
            if (DOES_BLIP_EXIST( l_U1244[l_U597] ))
            {
                REMOVE_BLIP( l_U1244[l_U597] );
            }
        }
        for ( l_U597 = 0; l_U597 < 4; l_U597++ )
        {
            if (DOES_BLIP_EXIST( l_U1249[l_U597] ))
            {
                REMOVE_BLIP( l_U1249[l_U597] );
            }
        }
        for ( l_U597 = 0; l_U597 < 3; l_U597++ )
        {
            if (DOES_CHAR_EXIST( l_U700[l_U597] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U700[l_U597] );
            }
        }
        for ( l_U597 = 0; l_U597 < 4; l_U597++ )
        {
            if (DOES_CHAR_EXIST( l_U704[l_U597] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U704[l_U597] );
            }
        }
        for ( l_U597 = 0; l_U597 < 4; l_U597++ )
        {
            if (DOES_CHAR_EXIST( l_U709[l_U597] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U709[l_U597] );
            }
        }
        for ( l_U597 = 0; l_U597 < 2; l_U597++ )
        {
            if (DOES_CHAR_EXIST( l_U714[l_U597] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U714[l_U597] );
            }
        }
        if (NOT l_U1158)
        {
            if (DOES_VEHICLE_EXIST( l_U676 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U676 );
            }
        }
        if (NOT l_U1158)
        {
            if (DOES_VEHICLE_EXIST( l_U675 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675 );
            }
        }
        for ( l_U597 = 0; l_U597 < 5; l_U597++ )
        {
            if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U678[l_U597] );
            }
        }
        for ( l_U597 = 0; l_U597 < 4; l_U597++ )
        {
            if (DOES_VEHICLE_EXIST( l_U686[l_U597] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U686[l_U597] );
            }
        }
        for ( l_U597 = 0; l_U597 < 2; l_U597++ )
        {
            if (DOES_VEHICLE_EXIST( l_U695[l_U597] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U695[l_U597] );
            }
        }
        CLEAR_SEQUENCE_TASK( l_U1165 );
        CLEAR_SEQUENCE_TASK( l_U1166 );
        REMOVE_DECISION_MAKER( l_U1287 );
        REMOVE_DECISION_MAKER( l_U1288 );
        REMOVE_DECISION_MAKER( l_U1291 );
        REMOVE_DECISION_MAKER( l_U1292 );
        REMOVE_DECISION_MAKER( l_U1296 );
        REMOVE_DECISION_MAKER( l_U1299 );
        REMOVE_DECISION_MAKER( l_U1300 );
        REMOVE_DECISION_MAKER( l_U1303 );
        REMOVE_DECISION_MAKER( l_U1304 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1204 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1205 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1206 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1207 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1208 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1210 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1211 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL( sub_5742(), 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 0 );
        if (NOT l_U1158)
        {
            sub_97653( 0 );
        }
        if (NOT l_U1158)
        {
            if ((l_U1105) || (l_U1104))
            {
                REQUEST_SCRIPT( "ability_stats" );
                while (NOT (HAS_SCRIPT_LOADED( "ability_stats" )))
                {
                    WAIT( 0 );
                }
            }
        }
        if (NOT l_U1158)
        {
            CLEAR_AREA( l_U447._fU0, l_U447._fU4, l_U447._fU8, 75.00000000, 1 );
        }
        l_U1152 = 1;
    }
    return;
}

void sub_114769()
{
    if ((l_U359 > 1) AND (NOT (l_U359 == 5)))
    {
        if (sub_83069())
        {
            if (NOT l_U1069)
            {
                if (sub_5787( l_U1265 ))
                {
                    sub_5971( ref l_U1265, 0 );
                }
                sub_114846();
                l_U359 = 5;
            }
        }
        else
        {
            l_U1069 = 0;
        }
    }
    if (l_U1148)
    {
        if (IS_PLAYER_CONTROL_ON( sub_5742() ))
        {
            SET_PLAYER_CONTROL( sub_5742(), 0 );
        }
    }
    switch (l_U359)
    {
        case 0:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if ((sub_116099( 1, 0 )) AND (IS_SCREEN_FADED_IN()))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        if (sub_116099( 1, 0 ))
                        {
                            if (sub_116440())
                            {
                                if (IS_PLAYER_CONTROL_ON( sub_5742() ))
                                {
                                    SET_PLAYER_CONTROL( sub_5742(), 0 );
                                    l_U1148 = 1;
                                    l_U359 = 1;
                                    DO_SCREEN_FADE_OUT( 4000 );
                                }
                            }
                        }
                    }
                }
                else
                {
                    l_U598 = 1;
                    l_U359 = 4;
                }
            }
        }
        break;
        case 1:
        if (NOT IS_SCREEN_FADING())
        {
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (IS_CHAR_INJURED( l_U699 ))
                {
                    l_U598 = 1;
                    l_U359 = 4;
                }
                else
                {
                    SET_PLAYER_CONTROL( sub_5742(), 0 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    BEGIN_CAM_COMMANDS( ref l_U1218 );
                    CREATE_CAM( 14, ref l_U1221 );
                    SET_CAM_POS( l_U1221, -1715.30400000, 362.48370000, 24.85537000 );
                    SET_CAM_ROT( l_U1221, 11.16576000, -0.00000000, 32.93025000 );
                    SET_CAM_ACTIVE( l_U1221, 1 );
                    SET_CAM_PROPAGATE( l_U1221, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    l_U1066 = 1;
                    sub_116803();
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 1 );
                    GET_PLAYER_GROUP( sub_5742(), ref l_U1264 );
                    if (NOT (IS_CHAR_DEAD( l_U699 )))
                    {
                        if (IS_GROUP_MEMBER( l_U699, l_U1264 ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U699 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U699 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U699, sub_5671(), 99999, 0 );
                        TASK_LOOK_AT_CHAR( sub_5671(), l_U699, 99999, 0 );
                    }
                    WAIT( 0 );
                    CLEAR_AREA( -1721.90100000, 366.48040000, 24.44420000, 50.00000000, 0 );
                    DO_SCREEN_FADE_IN_UNHACKED( 5000 );
                    l_U359 = 2;
                }
            }
        }
        break;
        case 2:
        if (NOT IS_SCREEN_FADING())
        {
            if (DOES_CHAR_EXIST( l_U699 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (NOT (sub_5787( l_U1265 )))
                    {
                        sub_20503( l_U637, ref l_U1265, 6, 1 );
                    }
                    else
                    {
                        l_U359 = 3;
                    }
                }
            }
        }
        else
        {
            SET_CHAR_HEADING( sub_5671(), 322.02310000 );
            SET_CHAR_COORDINATES( sub_5671(), -1718.22500000, 365.17730000, 24.32460000 );
        }
        break;
        case 3:
        if (NOT (sub_5787( l_U1265 )))
        {
            if ((((l_U598 == 4) || (l_U598 == 2)) || (l_U598 == 6)) || (l_U598 == 3))
            {
                if (DOES_VEHICLE_EXIST( l_U675 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U675 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1165 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U675, -1699.18100000, 361.22300000, 24.47510000, 20.00000000, 0, 0, 2, -1, -1 );
                        CLOSE_SEQUENCE_TASK( l_U1165 );
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            TASK_CLEAR_LOOK_AT( l_U699 );
                            TASK_PERFORM_SEQUENCE( l_U699, l_U1165 );
                            CLEAR_SEQUENCE_TASK( l_U1165 );
                        }
                    }
                }
            }
            if (l_U598 == 5)
            {
                if (DOES_VEHICLE_EXIST( l_U677 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U677 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1165 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U677, -1699.18100000, 361.22300000, 24.47510000, 20.00000000, 0, 0, 2, -1, -1 );
                        CLOSE_SEQUENCE_TASK( l_U1165 );
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            TASK_CLEAR_LOOK_AT( l_U699 );
                            TASK_PERFORM_SEQUENCE( l_U699, l_U1165 );
                            CLEAR_SEQUENCE_TASK( l_U1165 );
                        }
                    }
                }
                if (DOES_VEHICLE_EXIST( l_U675 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U675 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U1165 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U675, -1699.18100000, 361.22300000, 24.47510000, 20.00000000, 0, 0, 2, -1, -1 );
                        CLOSE_SEQUENCE_TASK( l_U1165 );
                        if (NOT (IS_CHAR_INJURED( l_U699 )))
                        {
                            TASK_CLEAR_LOOK_AT( l_U699 );
                            TASK_PERFORM_SEQUENCE( l_U699, l_U1165 );
                            CLEAR_SEQUENCE_TASK( l_U1165 );
                        }
                    }
                }
            }
            INCREMENT_INT_STAT( 373, 1 );
            l_U359 = 4;
            GET_GAME_TIMER( ref l_U613 );
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U612 );
        l_U611 = l_U612 - l_U613;
        if (NOT (IS_CHAR_INJURED( l_U699 )))
        {
            if ((l_U611 > 6000) || (NOT (IS_CHAR_ON_SCREEN( l_U699 ))))
            {
                sub_114846();
                l_U359 = 5;
            }
        }
        else
        {
            sub_114846();
            l_U359 = 5;
        }
        break;
        case 5:
        if (g_U10991 > 1)
        {
            if (IS_PLAYER_PLAYING( sub_5742() ))
            {
                SET_PLAYER_MOOD_PISSED_OFF( sub_5742(), 150 );
                SAY_AMBIENT_SPEECH( sub_5671(), "MISSION_FAIL_RAGE", 1, 1, 0 );
            }
        }
        sub_121212( 1, l_U699, 1 );
        sub_121323();
        l_U1070 = 0;
        break;
    }
    return;
}

void sub_114846()
{
    if (NOT (l_U598 == 1))
    {
        CLEAR_CHAR_TASKS( sub_5671() );
        if (NOT (IS_CHAR_DEAD( l_U699 )))
        {
            DELETE_CHAR( ref l_U699 );
        }
        if (DOES_VEHICLE_EXIST( l_U675 ))
        {
            if (NOT (IS_CAR_DEAD( l_U675 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U675 )))
                {
                    DELETE_CAR( ref l_U675 );
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (NOT (IS_CAR_DEAD( l_U677 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_5671(), l_U677 )))
                {
                    DELETE_CAR( ref l_U677 );
                }
            }
        }
    }
    else if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN_UNHACKED( 500 );
    }
    if (((l_U598 == 4) || (l_U598 == 2)) || (l_U598 == 6))
    {
        if (l_U1126)
        {
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (l_U1021[l_U597])
                {
                    if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U678[l_U597] )))
                        {
                            if (IS_CAR_ATTACHED( l_U678[l_U597] ))
                            {
                                DETACH_CAR( l_U678[l_U597] );
                                DELETE_CAR( ref l_U678[l_U597] );
                                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U678[l_U597] );
                            }
                        }
                        else
                        {
                            DELETE_CAR( ref l_U678[l_U597] );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U678[l_U597] );
                        }
                    }
                }
            }
        }
        if (DOES_CAM_EXIST( l_U1221 ))
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            if (DOES_CAM_EXIST( l_U1221 ))
            {
                DESTROY_CAM( l_U1221 );
            }
            END_CAM_COMMANDS( ref l_U1218 );
        }
        l_U1066 = 0;
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_BEHIND_PED( sub_5671() );
        if (l_U1148)
        {
            if (NOT (IS_PLAYER_CONTROL_ON( sub_5742() )))
            {
                SET_PLAYER_CONTROL( sub_5742(), 1 );
            }
            l_U1148 = 0;
        }
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 0 );
    }
    if (l_U598 == 5)
    {
        if (l_U1126)
        {
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (l_U1021[l_U597])
                {
                    if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U678[l_U597] )))
                        {
                            if (IS_CAR_ATTACHED( l_U678[l_U597] ))
                            {
                                DETACH_CAR( l_U678[l_U597] );
                                DELETE_CAR( ref l_U678[l_U597] );
                                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U678[l_U597] );
                            }
                        }
                        else
                        {
                            DELETE_CAR( ref l_U678[l_U597] );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U678[l_U597] );
                        }
                    }
                }
            }
        }
        if (DOES_CAM_EXIST( l_U1221 ))
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            if (DOES_CAM_EXIST( l_U1221 ))
            {
                DESTROY_CAM( l_U1221 );
            }
            END_CAM_COMMANDS( ref l_U1218 );
        }
        l_U1066 = 0;
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_BEHIND_PED( sub_5671() );
        if (l_U1148)
        {
            if (NOT (IS_PLAYER_CONTROL_ON( sub_5742() )))
            {
                SET_PLAYER_CONTROL( sub_5742(), 1 );
            }
            l_U1148 = 0;
        }
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5671(), 0 );
    }
    if (l_U1148)
    {
        if (NOT (IS_PLAYER_CONTROL_ON( sub_5742() )))
        {
            SET_PLAYER_CONTROL( sub_5742(), 1 );
        }
        l_U1148 = 0;
    }
    SET_WIDESCREEN_BORDERS( 0 );
    return;
}

int sub_116099(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5671(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5671(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_5671()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5671() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5671() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5742() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5742() )))
    {
        return 0;
    }
    return 1;
}

void sub_116440()
{
    return sub_116451( 1, 1 );
}

int sub_116451(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

void sub_116803()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    float fVar11;
    float fVar12;
    float fVar13;

    vVar2 = {-1718.22500000, 365.17730000, 24.32460000};
    vVar5 = {-1722.55600000, 362.20500000, 24.43120000};
    vVar8 = {-1717.69200000, 367.31470000, 24.34030000};
    fVar11 = 322.02310000;
    fVar12 = 304.16760000;
    fVar13 = 257.54610000;
    SWITCH_ROADS_OFF( l_U518[0]._fU0, l_U518[0]._fU4, l_U518[0]._fU8, l_U518[1]._fU0, l_U518[1]._fU4, l_U518[1]._fU8 );
    CLEAR_AREA( vVar2.x, vVar2.y, vVar2.z, 50.00000000, 0 );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5671(), vVar2.x, vVar2.y, vVar2.z, 1.50000000, 1.50000000, 1.50000000, 0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_5671() )))
        {
            SET_CHAR_COORDINATES( sub_5671(), vVar2.x, vVar2.y, vVar2.z );
            SET_CHAR_HEADING( sub_5671(), fVar11 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5671() );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_5671(), vVar2.x, vVar2.y, vVar2.z );
            SET_CHAR_HEADING( sub_5671(), fVar11 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5671() );
        }
    }
    if (DOES_CHAR_EXIST( l_U699 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U699 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U699, vVar5.x, vVar5.y, vVar5.z, 1.50000000, 1.50000000, 1.50000000, 0 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U699 )))
                {
                    SET_CHAR_COORDINATES( l_U699, vVar5.x, vVar5.y, vVar5.z );
                    SET_CHAR_HEADING( l_U699, fVar12 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U699, vVar5.x, vVar5.y, vVar5.z );
                    SET_CHAR_HEADING( l_U699, fVar12 );
                }
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U676 ))
    {
        if (IS_VEH_DRIVEABLE( l_U676 ))
        {
            DELETE_CAR( ref l_U676 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U676 );
        }
        else
        {
            DELETE_CAR( ref l_U676 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U676 );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U675 ))
    {
        if (IS_VEH_DRIVEABLE( l_U675 ))
        {
            DELETE_CAR( ref l_U675 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675 );
        }
        else
        {
            DELETE_CAR( ref l_U675 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675 );
        }
    }
    for ( l_U597 = 0; l_U597 < 5; l_U597++ )
    {
        if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
        {
            if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
            {
                if (NOT (IS_CAR_ATTACHED( l_U678[l_U597] )))
                {
                    DELETE_CAR( ref l_U678[l_U597] );
                }
                else
                {
                    DETACH_CAR( l_U678[l_U597] );
                    DELETE_CAR( ref l_U678[l_U597] );
                }
            }
            else
            {
                DELETE_CAR( ref l_U678[l_U597] );
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U677 ))
    {
        if (IS_VEH_DRIVEABLE( l_U677 ))
        {
            DELETE_CAR( ref l_U677 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U677 );
        }
        else
        {
            DELETE_CAR( ref l_U677 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U677 );
        }
    }
    for ( l_U597 = 0; l_U597 < 2; l_U597++ )
    {
        if (DOES_VEHICLE_EXIST( l_U695[l_U597] ))
        {
            if (IS_VEH_DRIVEABLE( l_U695[l_U597] ))
            {
                DELETE_CAR( ref l_U695[l_U597] );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U695[l_U597] );
            }
            else
            {
                DELETE_CAR( ref l_U695[l_U597] );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U695[l_U597] );
            }
        }
    }
    for ( l_U597 = 0; l_U597 < 4; l_U597++ )
    {
        if (DOES_CHAR_EXIST( l_U704[l_U597] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U704[l_U597] )))
            {
                DELETE_CHAR( ref l_U704[l_U597] );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U704[l_U597] );
            }
            else
            {
                DELETE_CHAR( ref l_U704[l_U597] );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U704[l_U597] );
            }
        }
        if (DOES_CHAR_EXIST( l_U709[l_U597] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U709[l_U597] )))
            {
                DELETE_CHAR( ref l_U709[l_U597] );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U709[l_U597] );
            }
            else
            {
                DELETE_CHAR( ref l_U704[l_U597] );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U709[l_U597] );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U686[l_U597] ))
        {
            if (IS_VEH_DRIVEABLE( l_U686[l_U597] ))
            {
                DELETE_CAR( ref l_U686[l_U597] );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U686[l_U597] );
            }
            else
            {
                DELETE_CAR( ref l_U686[l_U597] );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U686[l_U597] );
            }
        }
        if (NOT l_U1037[l_U597])
        {
            l_U1037[l_U597] = 1;
        }
    }
    CLEAR_AREA( vVar2.x, vVar2.y, vVar2.z, 50.00000000, 0 );
    if ((((l_U598 == 4) || (l_U598 == 2)) || (l_U598 == 6)) || (l_U598 == 3))
    {
        if (l_U1126)
        {
            for ( l_U597 = 0; l_U597 < 5; l_U597++ )
            {
                if (DOES_VEHICLE_EXIST( l_U678[l_U597] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U678[l_U597] ))
                    {
                        if (IS_CAR_ATTACHED( l_U678[l_U597] ))
                        {
                            DETACH_CAR( l_U678[l_U597] );
                            DELETE_CAR( ref l_U678[l_U597] );
                        }
                    }
                    else
                    {
                        DELETE_CAR( ref l_U678[l_U597] );
                    }
                }
            }
        }
        if (DOES_OBJECT_EXIST( l_U1216 ))
        {
            DELETE_OBJECT( ref l_U1216 );
        }
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                DELETE_CAR( ref l_U677 );
            }
            else
            {
                DELETE_CAR( ref l_U677 );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U675 ))
        {
            if (IS_VEH_DRIVEABLE( l_U675 ))
            {
                if (NOT (LOCATE_CAR_3D( l_U675, vVar8.x, vVar8.y, vVar8.z, 2.50000000, 2.50000000, 2.50000000, 0 )))
                {
                    SET_CAR_HEADING( l_U675, fVar13 );
                    SET_CAR_COORDINATES( l_U675, vVar8.x, vVar8.y, vVar8.z );
                }
            }
            else
            {
                DELETE_CAR( ref l_U675 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675 );
                l_U675 = nil;
                while (NOT (sub_10612( ref l_U675, vVar8, fVar13 )))
                {
                    WAIT( 0 );
                }
            }
        }
        else
        {
            while (NOT (sub_10612( ref l_U675, vVar8, fVar13 )))
            {
                WAIT( 0 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U699 )))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U699, l_U675 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U699 )))
                {
                    WARP_CHAR_INTO_CAR( l_U699, l_U675 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_CAR( l_U699, l_U675, -1 );
                }
            }
        }
        CLEAR_AREA( vVar2.x, vVar2.y, vVar2.z, 50.00000000, 0 );
    }
    if (l_U598 == 5)
    {
        if (DOES_VEHICLE_EXIST( l_U677 ))
        {
            if (IS_VEH_DRIVEABLE( l_U677 ))
            {
                DELETE_CAR( ref l_U677 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U677 );
                l_U677 = nil;
                if (DOES_VEHICLE_EXIST( l_U675 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U675 ))
                    {
                        if (NOT (LOCATE_CAR_3D( l_U675, vVar8.x, vVar8.y, vVar8.z, 2.50000000, 2.50000000, 2.50000000, 0 )))
                        {
                            SET_CAR_HEADING( l_U675, fVar13 );
                            SET_CAR_COORDINATES( l_U675, vVar8.x, vVar8.y, vVar8.z );
                        }
                    }
                    else
                    {
                        DELETE_CAR( ref l_U675 );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675 );
                        l_U675 = nil;
                        while (NOT (sub_10612( ref l_U675, vVar8, fVar13 )))
                        {
                            WAIT( 0 );
                        }
                    }
                }
                else
                {
                    while (NOT (sub_10612( ref l_U675, vVar8, fVar13 )))
                    {
                        WAIT( 0 );
                    }
                }
            }
        }
        else if (DOES_VEHICLE_EXIST( l_U675 ))
        {
            if (IS_VEH_DRIVEABLE( l_U675 ))
            {
                if (NOT (LOCATE_CAR_3D( l_U675, vVar8.x, vVar8.y, vVar8.z, 2.50000000, 2.50000000, 2.50000000, 0 )))
                {
                    SET_CAR_HEADING( l_U675, fVar13 );
                    SET_CAR_COORDINATES( l_U675, vVar8.x, vVar8.y, vVar8.z );
                }
            }
            else
            {
                DELETE_CAR( ref l_U675 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675 );
                l_U675 = nil;
                while (NOT (sub_10612( ref l_U675, vVar8, fVar13 )))
                {
                    WAIT( 0 );
                }
            }
        }
        else
        {
            while (NOT (sub_10612( ref l_U675, vVar8, fVar13 )))
            {
                WAIT( 0 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U699 )))
        {
            if (DOES_VEHICLE_EXIST( l_U677 ))
            {
                if (IS_VEH_DRIVEABLE( l_U677 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U699, l_U677 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U699 )))
                        {
                            WARP_CHAR_INTO_CAR( l_U699, l_U677 );
                        }
                        else
                        {
                            WARP_CHAR_FROM_CAR_TO_CAR( l_U699, l_U677, 0 );
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U699 )))
                {
                    if (DOES_VEHICLE_EXIST( l_U675 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U675 ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U699, l_U675 )))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( l_U699 )))
                                {
                                    WARP_CHAR_INTO_CAR( l_U699, l_U675 );
                                }
                                else
                                {
                                    WARP_CHAR_FROM_CAR_TO_CAR( l_U699, l_U675, -1 );
                                }
                            }
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U699 )))
            {
                if (DOES_VEHICLE_EXIST( l_U675 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U675 ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U699, l_U675 )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U699 )))
                            {
                                WARP_CHAR_INTO_CAR( l_U699, l_U675 );
                            }
                            else
                            {
                                WARP_CHAR_FROM_CAR_TO_CAR( l_U699, l_U675, -1 );
                            }
                        }
                    }
                }
            }
        }
        CLEAR_AREA( vVar2.x, vVar2.y, vVar2.z, 50.00000000, 0 );
    }
    LOAD_SCENE( vVar8.x, vVar8.y, vVar8.z );
    CLEAR_AREA( vVar2.x, vVar2.y, vVar2.z, 50.00000000, 0 );
    return;
}

void sub_121212(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam1 )))
    {
        return;
    }
    g_U38680._fU0 = uParam0;
    g_U38680._fU4 = iParam1;
    g_U38680._fU8 = uParam2;
    g_U38680._fU12 = 0;
    if (g_U12303)
    {
        g_U38680._fU12 = 1;
    }
    return;
}

void sub_121323()
{
    sub_121332();
    return;
}

void sub_121332()
{
    int iVar2;

    iVar2 = 1;
    sub_121346( iVar2 );
    sub_1782( iVar2 );
    return;
}

void sub_121346(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5742(), 150 );
    CLEAR_HELP();
    sub_641( uParam0 );
    return;
}

void sub_121460()
{
    CLEAR_PRINTS();
    CLEAR_WANTED_LEVEL( sub_5742() );
    g_U24 = 82;
    sub_121494();
    if (l_U1105)
    {
        sub_12924( 7 );
    }
    if (l_U1104)
    {
        sub_12924( 6 );
    }
    sub_128283();
    INCREMENT_INT_STAT( 275, 4 );
    l_U1070 = 0;
    return;
}

void sub_121494()
{
    sub_121503();
    return;
}

void sub_121503()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_121521();
    sub_121580( iVar2, iVar3, iVar4 );
    return;
}

void sub_121521()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_121580(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_121611( iVar5, uParam0, uParam1, uParam2, "Friend_2" );
    return;
}

void sub_121611(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14838[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_121707( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_121707( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14838[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_121707( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_121707( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_121707( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_121707( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_122284( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12306[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14838[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12306[uParam0]._fU144[I]._fU8++;
            if ((NOT g_U12306[uParam0]._fU144[I]._fU12) AND (g_U12306[uParam0]._fU144[I]._fU8 >= g_U12306[uParam0]._fU144[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12306[uParam0]._fU144[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_122732( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_5742() );
    sub_1791();
    bVar28 = true;
    uVar29 = sub_122284( uParam0, iVar7 );
    uVar30 = sub_1415( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14838[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U20913[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10982 );
                sub_127186( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_127620();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_127705( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_127784( uParam0 );
                sub_127823( 0 );
                sub_1691( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_128012();
        }
    }
    if (bParam2)
    {
        sub_127620();
        sub_128111();
        sub_127823( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_127620();
        sub_128163();
        sub_127823( 0 );
        sub_1691( uVar30, 0 );
    }
    sub_1302();
    return;
}

void sub_121707(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_122284(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_1646( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_122732(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_122828( uParam1 );
        break;
        case 1:
        bVar8 = sub_123523( uParam1 );
        break;
        case 2:
        bVar8 = sub_124256( uParam1 );
        break;
        case 3:
        bVar8 = sub_124493( uParam1 );
        break;
        case 4:
        bVar8 = sub_124659( uParam1 );
        break;
        case 5:
        bVar8 = sub_124858( uParam1 );
        break;
        case 6:
        bVar8 = sub_125053( uParam1 );
        break;
        case 7:
        bVar8 = sub_125258( uParam1 );
        break;
        case 8:
        bVar8 = sub_125463( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_123871( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_122284( uParam0, uParam1 );
    if (bParam3)
    {
        sub_125749( uVar9, uParam0 );
    }
    return 1;
}

int sub_122828(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_122925( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_122925( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_122925( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_122925( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_122925( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_122925( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_123430( "Contact 1", 1 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_123430( "Contact 1", 0 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_122925(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_122936( uParam1 );
    sub_123110( uParam0, 0, uParam2 );
    sub_123110( uParam0, 1, uParam3 );
    sub_123110( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_121521();
    return;
}

void sub_122936(unknown uParam0)
{
    ADD_SCORE( sub_5742(), uParam0 );
    sub_122961( uParam0 );
    return;
}

void sub_122961(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1646( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_123110(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_123430(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_123523(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_122925( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_122925( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_122925( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_122925( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_122925( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_122925( iVar3, 0, sub_123749(), sub_124015(), 0, 0 );
        break;
        default:
        sub_123430( "Contact 2", 1 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_123430( "Contact 2", 0 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_123749()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_123871( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_123871(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_124015()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_123871( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_124256(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_122925( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_122925( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_122925( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_122925( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_123430( "Contact 3", 1 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_123430( "Contact 3", 0 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_124493(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_122925( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_122925( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_123430( "Friend 4", 1 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_123430( "Friend 4", 0 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_124659(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_122925( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_122925( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_122925( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_123430( "Contact 5", 1 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_123430( "Contact 5", 0 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_124858(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_122925( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_122925( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_122925( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_123430( "Contact 6", 1 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_123430( "Contact 6", 0 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_125053(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
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
        sub_122925( iVar3, 0, sub_123749(), sub_124015(), 0, 0 );
        break;
        default:
        sub_123430( "Friend 7", 1 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_123430( "Friend 7", 0 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_125258(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
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
        sub_122925( iVar3, 0, sub_123749(), sub_124015(), 0, 0 );
        break;
        default:
        sub_123430( "Friend 8", 1 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_123430( "Friend 8", 0 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_125463(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_122925( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_123430( "Contact 9", 1 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_123430( "Contact 9", 0 );
        sub_122925( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_125749(int iParam0, int iParam1)
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
    if (g_U10993)
    {
        return;
    }
    if (sub_125810( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_126528( iParam1 );
    }
    return;
}

int sub_125810(int iParam0, int iParam1)
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
    iVar4 = g_U14838[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U20913[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U20913[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_125950( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_125950(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_126120( 0 );
    return;
}

void sub_126120(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_126365();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_126365()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_126528(int iParam0)
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
    if (g_U14815[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14815[iParam0]._fU4 == g_U14815[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14815[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14815[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_126759( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_126759( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_126759( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_126759( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_126759( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_126759( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_126759(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_127186(unknown uParam0, unknown uParam1)
{
    sub_127205( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_127205(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_127620()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

int sub_127705(int iParam0, int iParam1)
{
    if (iParam0 == 2)
    {
        if (iParam1 == 3)
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

void sub_127784(unknown uParam0)
{
    sub_1163();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_127823(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_127874( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_127874(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_128012()
{
    sub_128021();
    return;
}

void sub_128021()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_128111()
{
    sub_128021();
    return;
}

void sub_128163()
{
    sub_128021();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_128283()
{
    sub_128292();
    return;
}

void sub_128292()
{
    int I;
    boolean bVar3;

    I = 0;
    bVar3 = false;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        sub_128358();
        sub_128443();
        sub_128761();
    }
    bVar3 = false;
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            g_U39058[I]._fU4 = 0;
            g_U39058[I]._fU12++;
            g_U39058[I]._fU20 = -2;
            if (sub_129999( g_U39058[I]._fU16 ))
            {
                g_U39104 = 1;
            }
            if (sub_130683( g_U39058[I]._fU16 ))
            {
                g_U39105 = 1;
            }
            bVar3 = true;
        }
    }
    return;
}

void sub_128358()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U39042[I]._fU0 = -1;
        g_U39042[I]._fU4 = 0;
        g_U39042[I]._fU8 = 0;
    }
    return;
}

void sub_128443()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            if (g_U38937[I]._fU0)
            {
                g_U38937[I]._fU12++;
            }
            if (iVar3 >= 5)
            {
                SCRIPT_ASSERT( "Prepare_Recurring_Lost_Stats_For_Display: Trying to store too many sets of display stats" );
                return;
            }
            g_U39042[iVar3]._fU0 = g_U38937[I]._fU16;
            g_U39042[iVar3]._fU4 = g_U38937[I]._fU0;
            g_U39042[iVar3]._fU8 = g_U38937[I]._fU12;
            iVar3++;
            g_U38937[I]._fU4 = 0;
        }
    }
    return;
}

void sub_128761()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    boolean bVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    bVar9 = false;
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    while (iVar12 < 13)
    {
        bVar9 = false;
        if (NOT g_U38937[iVar12]._fU0)
        {
            uVar2 = {g_U38937[iVar12]};
            iVar10 = iVar12 + 1;
            iVar11 = iVar12;
            while (iVar10 < 13)
            {
                g_U38937[iVar11] = {g_U38937[iVar10]};
                iVar11++;
                iVar10++;
            }
            g_U38937[iVar11] = {uVar2};
            sub_128926( iVar11 );
            sub_129348( iVar11 );
            bVar9 = true;
        }
        if (NOT bVar9)
        {
            iVar12++;
        }
    }
    return;
}

void sub_128926(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    iVar3 = g_U38937[uParam0]._fU20;
    if (g_U38937[uParam0]._fU8)
    {
        iVar3 += 13;
    }
    uVar4 = g_U38937[uParam0]._fU16;
    uVar5 = g_U38937[uParam0]._fU12;
    sub_129010( iVar3, uVar4, uVar5 );
    return;
}

void sub_129010(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (g_U9592[uParam1]._fU12 == 0)
    {
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "-------------------------------------------------------------" );
        PRINTNL();
        PRINTSTRING( "Memorial - Keith returned number = " );
        PRINTINT( uParam1 );
        PRINTNL();
        PRINTSTRING( "-------------------------------------------------------------" );
        PRINTNL();
        PRINTNL();
        g_U9592[uParam1]._fU4 = uParam0;
        g_U9592[uParam1]._fU0 = uParam1;
        g_U9592[uParam1]._fU8 = uParam2;
        g_U9592[uParam1]._fU12 = 1;
        return;
    }
    return;
}

void sub_129348(unknown uParam0)
{
    unknown uVar3;

    g_U38937[uParam0]._fU0 = 1;
    g_U38937[uParam0]._fU4 = 0;
    g_U38937[uParam0]._fU12 = 1;
    g_U38937[uParam0]._fU16 = sub_129399();
    uVar3 = g_U38937[uParam0]._fU24;
    g_U38937[uParam0]._fU24 = -1;
    sub_129588( uVar3 );
    if (g_U38937[uParam0]._fU8)
    {
        g_U38937[uParam0]._fU8 = 0;
    }
    else
    {
        g_U38937[uParam0]._fU8 = 1;
    }
    return;
}

void sub_129399()
{
    int Result;
    boolean bVar3;
    int I;

    Result = -1;
    bVar3 = true;
    while (bVar3)
    {
        bVar3 = false;
        if (g_U38936 >= 24)
        {
            g_U38936 = 0;
        }
        Result = g_U38936;
        I = 0;
        for ( I = 0; I < 13; I++ )
        {
            if (NOT bVar3)
            {
                if (g_U38937[I]._fU16 == Result)
                {
                    bVar3 = true;
                }
            }
        }
        g_U38936++;
    }
    return Result;
}

void sub_129588(int iParam0)
{
    int I;

    if (iParam0 == -1)
    {
        SCRIPT_ASSERT( "Reuse_VoiceID: VoiceID being re-used is UNKNOWN" );
        return;
    }
    I = 0;
    for ( I = 0; I < 12; I++ )
    {
        if (g_U39029[I] == -1)
        {
            g_U39029[I] = iParam0;
            return;
        }
    }
    SCRIPT_ASSERT( "Reuse_VoiceID: Failed to find an unused slot for the VoiceID" );
    return;
}

int sub_129999(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_130010( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Terry" ))
    {
        return 1;
    }
    return 0;
}

void sub_130010(int iParam0)
{
    int iVar3;
    char[16] Result;
    int iVar8;

    iVar3 = 30;
    StrCopy( ref Result, "RECLOST_", 16 );
    if ((iParam0 < 0) || (iParam0 >= iVar3))
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: NameID out of range" );
        return Result;
    }
    iVar8 = iParam0;
    if (iVar8 >= 40)
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: more than 40 Lost Member names?" );
        return Result;
    }
    if (iVar8 >= 30)
    {
        ConcatString(ref Result, "3", 16);
        iVar8 -= 30;
    }
    if (iVar8 >= 20)
    {
        ConcatString(ref Result, "2", 16);
        iVar8 -= 20;
    }
    if (iVar8 >= 10)
    {
        ConcatString(ref Result, "1", 16);
        iVar8 -= 10;
    }
    switch (iVar8)
    {
        case 0:
        ConcatString(ref Result, "0", 16);
        break;
        case 1:
        ConcatString(ref Result, "1", 16);
        break;
        case 2:
        ConcatString(ref Result, "2", 16);
        break;
        case 3:
        ConcatString(ref Result, "3", 16);
        break;
        case 4:
        ConcatString(ref Result, "4", 16);
        break;
        case 5:
        ConcatString(ref Result, "5", 16);
        break;
        case 6:
        ConcatString(ref Result, "6", 16);
        break;
        case 7:
        ConcatString(ref Result, "7", 16);
        break;
        case 8:
        ConcatString(ref Result, "8", 16);
        break;
        case 9:
        ConcatString(ref Result, "9", 16);
        break;
        default: SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: array position not in range 0 - 9" );
    }
    return Result;
}

int sub_130683(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_130010( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Clay" ))
    {
        return 1;
    }
    return 0;
}