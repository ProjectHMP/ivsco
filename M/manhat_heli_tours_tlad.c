void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U100 = 0;
    l_U101 = 1;
    l_U102 = 3;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U110 = -1;
    l_U124 = 15.00000000;
    l_U125 = 35.00000000;
    l_U126 = 16.00000000;
    l_U127 = 0.00000000;
    l_U133 = 1000.00000000;
    l_U134 = 7500.00000000;
    l_U143 = 1;
    l_U144 = 30.00000000;
    l_U145 = 30.00000000;
    l_U146 = 2.00000000;
    l_U156 = 0.00000000;
    l_U157 = 0.00000000;
    l_U169 = 1;
    l_U170 = 0;
    l_U171 = -1;
    l_U172 = 1;
    l_U173 = -1;
    l_U174 = -1;
    l_U175 = 15.00000000;
    l_U202 = 0;
    l_U203 = -1949702649;
    l_U204 = 2075870698;
    l_U209 = 0.12000000;
    ProtectedSet(l_U220, 150);
    l_U221 = 0;
    l_U222 = 0;
    l_U229 = 1;
    l_U233 = 0;
    l_U234 = 0;
    l_U235 = 0;
    l_U280 = 0;
    l_U281 = 1;
    l_U282 = 2027357303;
    l_U283 = -778316080;
    l_U284 = -1464712858;
    l_U447 = 2;
    l_U459 = 0;
    l_U466 = 5;
    l_U467 = 60;
    l_U468 = 60000.00000000;
    l_U469 = 60000.00000000;
    l_U470 = 245.00000000;
    l_U541 = "missheli_tour";
    l_U554 = 0;
    l_U555 = 0;
    WAIT( 0 );
    uVar2 = {l_U556._fU4[0]};
    sub_474();
    if (IS_PLAYER_PLAYING( sub_1490() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_1533() )))
        {
            GET_CHAR_COORDINATES( sub_1533(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref fVar8 );
            if (fVar8 > 75.00000000)
            {
                if (sub_1655())
                {
                    sub_1772();
                }
                else
                {
                    l_U229 = 0;
                }
            }
            else
            {
                l_U229 = 0;
            }
        }
    }
    if (l_U229)
    {
        sub_1887( 13 );
    }
    while (l_U229)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_1490() ))
        {
            if (NOT (IS_CHAR_DEAD( sub_1533() )))
            {
                if (sub_1655())
                {
                    if ((l_U221 > 1) AND (l_U221 < 8))
                    {
                        sub_3811();
                    }
                    switch (l_U221)
                    {
                        case 0:
                        sub_11827();
                        break;
                        case 1:
                        sub_11968();
                        break;
                        case 2:
                        sub_13157();
                        break;
                        case 3:
                        sub_17297();
                        break;
                        case 4:
                        REQUEST_CAR_RECORDING( l_U451 );
                        if (HAS_THIS_ADDITIONAL_TEXT_LOADED( "HT1AUD", 7 ))
                        {
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U451 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U325 ))
                                {
                                    CLOSE_ALL_CAR_DOORS( l_U325 );
                                    SET_CAR_ENGINE_ON( l_U325, 1, 0 );
                                    FREEZE_CAR_POSITION( l_U325, 0 );
                                    START_PLAYBACK_RECORDED_CAR( l_U325, l_U451 );
                                    l_U221 = 5;
                                }
                                else if (l_U280)
                                {
                                    SET_PLAYER_CONTROL( sub_1490(), 1 );
                                    SET_PLAYER_CAN_DO_DRIVE_BY( sub_1490(), 1 );
                                    sub_18899();
                                    l_U280 = 0;
                                }
                            }
                        }
                        else
                        {
                            LOAD_ADDITIONAL_TEXT( "HT1AUD", 7 );
                        }
                        break;
                        case 5:
                        sub_19891();
                        break;
                        case 6:
                        sub_26276();
                        break;
                        case 7:
                        sub_27058();
                        break;
                        case 8:
                        sub_27161();
                        break;
                        case 9:
                        sub_27183();
                        break;
                        default: break;
                    }
                }
                else
                {
                    l_U229 = 0;
                }
            }
            else
            {
                l_U229 = 0;
            }
        }
        else
        {
            l_U229 = 0;
        }
        sub_27243();
    }
    sub_27265();
    return;
}

void sub_474()
{
    l_U335[0] = {345.68060000, -717.56760000, 4.19180000};
    l_U351[0] = 327.00000000;
    l_U335[1] = {366.79550000, -731.30100000, 4.15270000};
    l_U351[1] = 327.00000000;
    l_U335[2] = {389.55100000, -744.59860000, 4.19190000};
    l_U351[2] = 327.00000000;
    l_U335[3] = {387.11090000, -703.74890000, 4.19190000};
    l_U351[3] = 327.00000000;
    l_U335[4] = {401.05450000, -678.90960000, 4.19190000};
    l_U351[4] = 327.00000000;
    l_U357[0] = {336.26040000, -700.87640000, 4.69180000};
    l_U373[0] = 28.36760000;
    l_U357[1] = {349.66240000, -701.66820000, 3.69210000};
    l_U373[1] = 146.18140000;
    l_U357[2] = {370.29630000, -712.47020000, 3.69210000};
    l_U373[2] = 139.14320000;
    l_U357[3] = {389.43380000, -726.55320000, 3.69190000};
    l_U373[3] = 80.68730000;
    l_U357[4] = {410.95940000, -682.81460000, 3.69200000};
    l_U373[4] = 123.49320000;
    l_U379[0] = {334.94290000, -698.08830000, 3.69190000};
    l_U389[0] = 243.55540000;
    l_U379[1] = {333.54860000, -697.44450000, 3.69190000};
    l_U389[1] = 235.12950000;
    l_U379[2] = {332.39820000, -696.61680000, 3.69190000};
    l_U389[2] = 246.77140000;
    l_U397[0] = {345.78330000, -703.75600000, 4.69190000};
    l_U397[1] = {360.03200000, -712.45720000, 4.69190000};
    l_U397[2] = {378.68210000, -721.63070000, 4.69190000};
    l_U397[3] = {385.66610000, -726.54300000, 4.69190000};
    l_U397[4] = {393.45010000, -711.33580000, 4.69190000};
    l_U397[5] = {407.10180000, -686.68010000, 4.69200000};
    l_U393 = {311.65440000, -685.56080000, 3.67770000};
    l_U396 = 242.72750000;
    l_U434 = {0.45000000, 1.75000000, 0.80000000};
    l_U437 = {0.90000000, -0.10300000, 0.05000000};
    l_U452[0] = 610;
    l_U452[1] = 611;
    l_U452[2] = 612;
    l_U452[3] = 613;
    l_U452[4] = 614;
    l_U451 = 610;
    sub_1265();
    l_U458 = 999999;
    return;
}

void sub_1265()
{
    int[5] iVar2;
    int I;
    int iVar9;
    unknown uVar10;
    int J;

    array(ref iVar2, 5);
    iVar9 = 5;
    for ( I = 0; I < 5; I++ )
    {
        l_U274[I] = 0;
        iVar2[I] = I;
    }
    for ( I = 0; I < 3; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar9, ref uVar10 );
        l_U274[iVar2[uVar10]] = 1;
        if (I == 0)
        {
            l_U459 = iVar2[uVar10];
        }
        for ( J = uVar10; J < (iVar9 - 1); J++ )
        {
            iVar2[J] = iVar2[J + 1];
        }
        iVar9--;
    }
    return;
}

void sub_1490()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1533()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1655()
{
    if (IS_PLAYER_PLAYING( sub_1490() ))
    {
        if (g_U10994[2]._fU0)
        {
            if ((IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()) || (l_U221 == 5))
            {
                if (sub_1716())
                {
                    if (NOT g_U12303)
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_1716()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_1772()
{
    REQUEST_MODEL( l_U282 );
    REQUEST_MODEL( l_U283 );
    REQUEST_MODEL( l_U284 );
    REQUEST_ANIMS( l_U541 );
    LOAD_ADDITIONAL_TEXT( "HT1AUD", 7 );
    return;
}

void sub_1887(unknown uParam0)
{
    g_U11370._fU0[uParam0] = 1;
    sub_1908();
    return;
}

void sub_1908()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_1936( 16 );
        if ((sub_1981( 16, iVar3 )) AND (g_U10994[g_U11236[I]._fU0]._fU0))
        {
            sub_2082( ref g_U11236[I]._fU20, g_U11236[I]._fU4, 4, 60 );
        }
        else
        {
            sub_2268( ref g_U11236[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_1936( 14 );
        if ((sub_1981( 14, iVar3 )) AND (g_U10994[g_U11327[I]._fU0]._fU0))
        {
            sub_2082( ref g_U11327[I]._fU20, g_U11327[I]._fU4, 4, 62 );
        }
        else
        {
            sub_2268( ref g_U11327[I]._fU20 );
        }
    }
    for ( I = 0; I < 65; I++ )
    {
        iVar3 = sub_2462( I );
        if ((sub_1981( g_U11583[I]._fU12, iVar3 )) AND (g_U10994[g_U11583[I]._fU28]._fU0))
        {
            sub_2082( ref g_U11583[I]._fU32, g_U11583[I]._fU0, g_U11583[I]._fU24, g_U11583[I]._fU20 );
            sub_2770( I );
        }
        else
        {
            sub_2268( ref g_U11583[I]._fU32 );
            g_U11370._fU584[I] = 0;
        }
    }
    sub_2999();
    return;
}

int sub_1936(unknown uParam0)
{
    if (g_U11370._fU96[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_1981(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U11370._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_2082(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U100 );
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

void sub_2268(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_2462(unknown uParam0)
{
    unknown uVar3;

    if (g_U11370._fU320[uParam0])
    {
        return 1;
    }
    if (sub_2504( g_U11583[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_1936( g_U11583[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U12303)
    {
        uVar3 = g_U11583[uParam0]._fU12;
        if (g_U11370._fU0[uVar3])
        {
            if (g_U11583[uParam0]._fU24 == 1)
            {
                if (g_U10999 == g_U11583[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_2504(unknown uParam0)
{
    if (g_U11370._fU192[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_2770(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U11583[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11583[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11583[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11583[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_2999()
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
    bVar3 = sub_1936( 16 );
    for ( I = 0; I < 15; I++ )
    {
        sub_3044( g_U11236[I]._fU20, bVar3 );
    }
    bVar3 = sub_1936( 14 );
    for ( I = 0; I < 7; I++ )
    {
        sub_3044( g_U11327[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 65; I++ )
    {
        if ((sub_2462( I )) AND (g_U10994[g_U11583[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 65; I++ )
    {
        bVar3 = sub_2462( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U10999 == g_U11583[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_3044( g_U11583[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 2; I++ )
    {
        bVar3 = false;
        if (g_U11005[I]._fU0)
        {
            if (g_U10999 == g_U11005[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_3044( g_U11005[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_1533() )))
        {
            GET_CHAR_COORDINATES( sub_1533(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 2; I++ )
            {
                if (g_U11005[I]._fU0)
                {
                    fVar11 = sub_3535( uVar7, g_U11005[I]._fU8 );
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
            for ( I = 0; I < 2; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_3044( g_U11005[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_3044(unknown uParam0, boolean bParam1)
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

void sub_3535(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_3811()
{
    int J;
    int I;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    boolean bVar13;
    string sVar14;
    unknown uVar15;
    string sVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;

    GET_GAME_VIEWPORT_ID( ref uVar15 );
    l_U450 = 0;
    for ( l_U448 = 0; l_U448 < 5; l_U448++ )
    {
        if (NOT (l_U448 == l_U459))
        {
            bVar13 = false;
            if (l_U221 > 2)
            {
                if (l_U448 == l_U458)
                {
                    bVar13 = true;
                }
            }
            if (NOT bVar13)
            {
                if (IS_VEH_DRIVEABLE( l_U326[l_U448] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U285[l_U448] )))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( l_U285[l_U448], l_U326[l_U448] ))
                        {
                            switch (l_U223[l_U448])
                            {
                                case 0:
                                l_U450 = 0;
                                iVar4 = 0;
                                while (l_U450 < 3)
                                {
                                    if (NOT l_U248[l_U448][l_U450])
                                    {
                                        for ( J = 0; J < 3; J++ )
                                        {
                                            if (l_U269[J])
                                            {
                                                if (NOT (IS_CHAR_INJURED( l_U312[J] )))
                                                {
                                                    l_U291[l_U448][l_U450] = l_U312[J];
                                                    if (l_U448 == 0)
                                                    {
                                                        sVar16 = "passenger 0";
                                                    }
                                                    if (l_U448 == 1)
                                                    {
                                                        sVar16 = "passenger 1";
                                                    }
                                                    if (l_U448 == 2)
                                                    {
                                                        sVar16 = "passenger 2";
                                                    }
                                                    if (l_U448 == 3)
                                                    {
                                                        sVar16 = "passenger 3";
                                                    }
                                                    if (l_U448 == 4)
                                                    {
                                                        sVar16 = "passenger 4";
                                                    }
                                                    if (l_U448 == 5)
                                                    {
                                                        sVar16 = "passenger 5";
                                                    }
                                                    SET_CHAR_NAME_DEBUG( l_U291[l_U448][l_U450], sVar16 );
                                                    TASK_FLUSH_ROUTE();
                                                    for ( I = 0; I <= (l_U448 + 1); I++ )
                                                    {
                                                        TASK_EXTEND_ROUTE( l_U397[I]._fU0, l_U397[I]._fU4, l_U397[I]._fU8 );
                                                    }
                                                    CLEAR_CHAR_TASKS( l_U291[l_U448][l_U450] );
                                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U326[l_U448], 2.50000000, 0.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                                    TASK_EXTEND_ROUTE( uVar7._fU0, uVar7._fU4, uVar7._fU8 );
                                                    OPEN_SEQUENCE_TASK( ref l_U323 );
                                                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U326[l_U448], -1, l_U450 );
                                                    CLOSE_SEQUENCE_TASK( l_U323 );
                                                    TASK_PERFORM_SEQUENCE( l_U291[l_U448][l_U450], l_U323 );
                                                    CLEAR_SEQUENCE_TASK( l_U323 );
                                                    l_U248[l_U448][l_U450] = 1;
                                                    l_U269[J] = 0;
                                                    J = 99999;
                                                }
                                            }
                                        }
                                    }
                                    else if (NOT (IS_CHAR_INJURED( l_U291[l_U448][l_U450] )))
                                    {
                                        GET_SCRIPT_TASK_STATUS( l_U291[l_U448][l_U450], 29, ref l_U324 );
                                        if (l_U324 == 7)
                                        {
                                            if (IS_CHAR_IN_CAR( l_U291[l_U448][l_U450], l_U326[l_U448] ))
                                            {
                                                iVar4++;
                                            }
                                            else
                                            {
                                                CLEAR_CHAR_TASKS( l_U291[l_U448][l_U450] );
                                                TASK_FLUSH_ROUTE();
                                                for ( J = 0; J <= (l_U448 + 1); J++ )
                                                {
                                                    TASK_EXTEND_ROUTE( l_U397[J]._fU0, l_U397[J]._fU4, l_U397[J]._fU8 );
                                                }
                                                OPEN_SEQUENCE_TASK( ref l_U323 );
                                                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U326[l_U448], -1, l_U450 );
                                                CLOSE_SEQUENCE_TASK( l_U323 );
                                                TASK_PERFORM_SEQUENCE( l_U291[l_U448][l_U450], l_U323 );
                                                CLEAR_SEQUENCE_TASK( l_U323 );
                                            }
                                        }
                                        else
                                        {
                                            for ( J = 0; J < 5; J++ )
                                            {
                                                if (NOT (IS_CHAR_INJURED( l_U316[J] )))
                                                {
                                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U291[l_U448][l_U450], l_U316[J], 3.50000000, 3.50000000, 2.00000000, 0 ))
                                                    {
                                                        GET_SCRIPT_TASK_STATUS( l_U316[J], 80, ref l_U324 );
                                                        if (l_U324 == 7)
                                                        {
                                                            if (J == 0)
                                                            {
                                                                sVar14 = "indicate_right_a";
                                                            }
                                                            else if (J < 3)
                                                            {
                                                                sVar14 = "indicate_left_a";
                                                            }
                                                            else if (J > 3)
                                                            {
                                                                sVar14 = "indicate_right_a";
                                                            }
                                                            else if (l_U448 == 2)
                                                            {
                                                                sVar14 = "indicate_left_a";
                                                            }
                                                            else
                                                            {
                                                                sVar14 = "indicate_right_a";
                                                            };;;;
                                                            CLEAR_CHAR_TASKS( l_U316[J] );
                                                            TASK_PLAY_ANIM( l_U316[J], sVar14, l_U541, 12.00000000, 0, 0, 0, 0, -1 );
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291[l_U448][l_U450] );
                                        l_U248[l_U448][l_U450] = 0;
                                    }
                                    l_U450++;
                                }
                                if (iVar4 == 3)
                                {
                                    l_U223[l_U448] = 1;
                                }
                                break;
                                case 1:
                                REQUEST_CAR_RECORDING( l_U452[l_U448] );
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U452[l_U448] ))
                                {
                                    CLOSE_ALL_CAR_DOORS( l_U326[l_U448] );
                                    FREEZE_CAR_POSITION( l_U326[l_U448], 0 );
                                    SET_CAR_ENGINE_ON( l_U326[l_U448], 1, 0 );
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U452[l_U448], l_U469, ref uVar10 );
                                    if (uVar10._fU8 > l_U467)
                                    {
                                        uVar10._fU8 = l_U467 - 5.00000000;
                                    }
                                    OPEN_SEQUENCE_TASK( ref l_U323 );
                                    TASK_HELI_MISSION( 0, l_U326[l_U448], 0, 0, uVar10._fU0, uVar10._fU4, uVar10._fU8, 4, 20.00000000, 10, -1, l_U467, l_U466 );
                                    CLOSE_SEQUENCE_TASK( l_U323 );
                                    TASK_PERFORM_SEQUENCE( l_U285[l_U448], l_U323 );
                                    CLEAR_SEQUENCE_TASK( l_U323 );
                                    l_U223[l_U448] = 2;
                                    l_U542[l_U448] = 0;
                                }
                                break;
                                case 2:
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U452[l_U448] ))
                                {
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U452[l_U448], l_U469, ref uVar10 );
                                    if (uVar10._fU8 > l_U467)
                                    {
                                        uVar10._fU8 = l_U467 - 5.00000000;
                                    }
                                    GET_SCRIPT_TASK_STATUS( l_U285[l_U448], 29, ref l_U324 );
                                    if ((l_U324 == 7) || (sub_5945( l_U326[l_U448], l_U448 )))
                                    {
                                        if ((LOCATE_CAR_3D( l_U326[l_U448], uVar10._fU0, uVar10._fU4, uVar10._fU8, 15.00000000, 15.00000000, 15.00000000, 0 )) || (sub_5945( l_U326[l_U448], l_U448 )))
                                        {
                                            if (sub_5945( l_U326[l_U448], l_U448 ))
                                            {
                                                CLEAR_CHAR_TASKS( l_U285[l_U448] );
                                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U326[l_U448] ))
                                                {
                                                    STOP_PLAYBACK_RECORDED_CAR( l_U326[l_U448] );
                                                }
                                                FREEZE_CAR_POSITION( l_U326[l_U448], 1 );
                                                for ( l_U450 = 0; l_U450 < 3; l_U450++ )
                                                {
                                                    if (NOT (IS_CHAR_DEAD( l_U291[l_U448][l_U450] )))
                                                    {
                                                        SET_CHAR_VISIBLE( l_U291[l_U448][l_U450], 0 );
                                                    }
                                                }
                                                SET_CHAR_VISIBLE( l_U285[l_U448], 0 );
                                                SET_CAR_VISIBLE( l_U326[l_U448], 0 );
                                                SET_CAR_ENGINE_ON( l_U326[l_U448], 0, 1 );
                                                SET_CAR_COLLISION( l_U326[l_U448], 0 );
                                                GET_GAME_TIMER( ref l_U460[l_U448] );
                                                l_U223[l_U448] = 3;
                                            }
                                        }
                                        else if (NOT (sub_5945( l_U326[l_U448], l_U448 )))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U323 );
                                            TASK_HELI_MISSION( 0, l_U326[l_U448], 0, 0, uVar10._fU0, uVar10._fU4, uVar10._fU8, 4, 20.00000000, 10, -1, l_U467, l_U466 );
                                            CLOSE_SEQUENCE_TASK( l_U323 );
                                            TASK_PERFORM_SEQUENCE( l_U285[l_U448], l_U323 );
                                            CLEAR_SEQUENCE_TASK( l_U323 );
                                        }
                                    }
                                }
                                else
                                {
                                    REQUEST_CAR_RECORDING( l_U452[l_U448] );
                                }
                                break;
                                case 3:
                                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U452[l_U448] )))
                                {
                                    REQUEST_CAR_RECORDING( l_U452[l_U448] );
                                }
                                else
                                {
                                    uVar6 = GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U452[l_U448] );
                                    GET_GAME_TIMER( ref l_U537 );
                                    l_U538 = l_U537 - l_U460[l_U448];
                                    if (l_U538 >= (uVar6 - l_U468))
                                    {
                                        REQUEST_CAR_RECORDING( l_U452[l_U448] );
                                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U452[l_U448] ))
                                        {
                                            GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U452[l_U448], uVar6 - l_U468, ref uVar10 );
                                            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar15, uVar10._fU0, uVar10._fU4, uVar10._fU8, 4.00000000 )))
                                            {
                                                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U326[l_U448] )))
                                                {
                                                    SET_CAR_COORDINATES( l_U326[l_U448], uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                                                    SET_CAR_ENGINE_ON( l_U326[l_U448], 1, 1 );
                                                    SET_HELI_BLADES_FULL_SPEED( l_U326[l_U448] );
                                                    START_PLAYBACK_RECORDED_CAR( l_U326[l_U448], l_U452[l_U448] );
                                                    FREEZE_CAR_POSITION( l_U326[l_U448], 0 );
                                                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U326[l_U448], uVar6 - l_U468 );
                                                }
                                                else
                                                {
                                                    for ( l_U450 = 0; l_U450 < 3; l_U450++ )
                                                    {
                                                        if (NOT (IS_CHAR_DEAD( l_U291[l_U448][l_U450] )))
                                                        {
                                                            SET_CHAR_VISIBLE( l_U291[l_U448][l_U450], 1 );
                                                        }
                                                    }
                                                    SET_CHAR_VISIBLE( l_U285[l_U448], 1 );
                                                    SET_CAR_VISIBLE( l_U326[l_U448], 1 );
                                                    SET_CAR_ENGINE_ON( l_U326[l_U448], 1, 1 );
                                                    SET_HELI_BLADES_FULL_SPEED( l_U326[l_U448] );
                                                    SET_CAR_COLLISION( l_U326[l_U448], 1 );
                                                    l_U223[l_U448] = 4;
                                                }
                                            }
                                        }
                                    }
                                }
                                break;
                                case 4:
                                if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U326[l_U448] ))) || (LOCATE_CAR_3D( l_U326[l_U448], l_U335[l_U448]._fU0, l_U335[l_U448]._fU4, l_U335[l_U448]._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                                {
                                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U326[l_U448] )))
                                    {
                                        l_U223[l_U448] = 5;
                                        TASK_HELI_MISSION( l_U285[l_U448], l_U326[l_U448], 0, 0, l_U335[l_U448]._fU0, l_U335[l_U448]._fU4, l_U335[l_U448]._fU8, 19, 50, 5, -1, l_U467, l_U466 );
                                    }
                                    else if ((FIND_TIME_POSITION_IN_RECORDING( l_U326[l_U448] )) > 10000)
                                    {
                                        STOP_PLAYBACK_RECORDED_CAR( l_U326[l_U448] );
                                    }
                                }
                                break;
                                case 5:
                                GET_SCRIPT_TASK_STATUS( l_U285[l_U448], 49, ref l_U324 );
                                if (l_U324 == 7)
                                {
                                    SET_CAR_ENGINE_ON( l_U326[l_U448], 0, 0 );
                                    if (IS_VEH_DRIVEABLE( l_U326[l_U448] ))
                                    {
                                        FREEZE_CAR_POSITION( l_U326[l_U448], 0 );
                                    }
                                    TASK_FLUSH_ROUTE();
                                    for ( I = l_U448; I >= 0; I-- )
                                    {
                                        TASK_EXTEND_ROUTE( l_U397[I]._fU0, l_U397[I]._fU4, l_U397[I]._fU8 );
                                    }
                                    for ( l_U450 = 0; l_U450 < 3; l_U450++ )
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U291[l_U448][l_U450] )))
                                        {
                                            GENERATE_RANDOM_INT_IN_RANGE( 500, 3000, ref uVar5 );
                                            CLEAR_CHAR_TASKS( l_U291[l_U448][l_U450] );
                                            OPEN_SEQUENCE_TASK( ref l_U323 );
                                            TASK_PAUSE( 0, uVar5 );
                                            if (IS_CHAR_IN_ANY_CAR( l_U291[l_U448][l_U450] ))
                                            {
                                                TASK_LEAVE_ANY_CAR( 0 );
                                            }
                                            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                                            CLOSE_SEQUENCE_TASK( l_U323 );
                                            TASK_PERFORM_SEQUENCE( l_U291[l_U448][l_U450], l_U323 );
                                            CLEAR_SEQUENCE_TASK( l_U323 );
                                            SET_CHAR_KEEP_TASK( l_U291[l_U448][l_U450], 1 );
                                        }
                                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291[l_U448][l_U450] );
                                        l_U248[l_U448][l_U450] = 0;
                                    }
                                    l_U236[l_U448] = 0;
                                    l_U223[l_U448] = 6;
                                }
                                break;
                                case 6:
                                l_U223[l_U448] = 0;
                                break;
                            }
                        }
                        else
                        {
                            l_U450 = 0;
                            iVar4 = 0;
                            while (l_U450 < 3)
                            {
                                if (l_U248[l_U448][l_U450])
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U291[l_U448][l_U450] )))
                                    {
                                        CLEAR_CHAR_TASKS( l_U291[l_U448][l_U450] );
                                        OPEN_SEQUENCE_TASK( ref l_U323 );
                                        if (IS_CHAR_IN_ANY_CAR( l_U291[l_U448][l_U450] ))
                                        {
                                            TASK_LEAVE_ANY_CAR( 0 );
                                        }
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                                        CLOSE_SEQUENCE_TASK( l_U323 );
                                        TASK_PERFORM_SEQUENCE( l_U291[l_U448][l_U450], l_U323 );
                                        CLEAR_SEQUENCE_TASK( l_U323 );
                                        SET_CHAR_KEEP_TASK( l_U291[l_U448][l_U450], 1 );
                                    }
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291[l_U448][l_U450] );
                                    l_U248[l_U448][l_U450] = 0;
                                }
                                l_U450++;
                            }
                        }
                    }
                    else
                    {
                        l_U450 = 0;
                        iVar4 = 0;
                        while (l_U450 < 3)
                        {
                            if (l_U248[l_U448][l_U450])
                            {
                                if (NOT (IS_CHAR_INJURED( l_U291[l_U448][l_U450] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U291[l_U448][l_U450] );
                                    OPEN_SEQUENCE_TASK( ref l_U323 );
                                    if (IS_CHAR_IN_ANY_CAR( l_U291[l_U448][l_U450] ))
                                    {
                                        TASK_LEAVE_ANY_CAR( 0 );
                                    }
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                                    CLOSE_SEQUENCE_TASK( l_U323 );
                                    TASK_PERFORM_SEQUENCE( l_U291[l_U448][l_U450], l_U323 );
                                    CLEAR_SEQUENCE_TASK( l_U323 );
                                    SET_CHAR_KEEP_TASK( l_U291[l_U448][l_U450], 1 );
                                }
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291[l_U448][l_U450] );
                                l_U248[l_U448][l_U450] = 0;
                            }
                            l_U450++;
                        }
                    }
                }
                else
                {
                    l_U450 = 0;
                    iVar4 = 0;
                    while (l_U450 < 3)
                    {
                        if (l_U248[l_U448][l_U450])
                        {
                            if (NOT (IS_CHAR_INJURED( l_U291[l_U448][l_U450] )))
                            {
                                CLEAR_CHAR_TASKS( l_U291[l_U448][l_U450] );
                                OPEN_SEQUENCE_TASK( ref l_U323 );
                                if (IS_CHAR_IN_ANY_CAR( l_U291[l_U448][l_U450] ))
                                {
                                    TASK_LEAVE_ANY_CAR( 0 );
                                }
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                                CLOSE_SEQUENCE_TASK( l_U323 );
                                TASK_PERFORM_SEQUENCE( l_U291[l_U448][l_U450], l_U323 );
                                CLEAR_SEQUENCE_TASK( l_U323 );
                                SET_CHAR_KEEP_TASK( l_U291[l_U448][l_U450], 1 );
                            }
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291[l_U448][l_U450] );
                            l_U248[l_U448][l_U450] = 0;
                        }
                        l_U450++;
                    }
                }
            }
        }
    }
    for ( J = 0; J < 3; J++ )
    {
        if (l_U269[J])
        {
            if (IS_CHAR_INJURED( l_U312[J] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U312[J] );
                l_U269[J] = 0;
            }
        }
        else
        {
            I = J + 1;
            if (I < 3)
            {
                if (l_U269[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U312[I] )))
                    {
                        l_U312[J] = l_U312[I];
                        CLEAR_CHAR_TASKS( l_U312[I] );
                        OPEN_SEQUENCE_TASK( ref l_U323 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U379[J]._fU0, l_U379[J]._fU4, l_U379[J]._fU8, 2, -1, -1 );
                        TASK_ACHIEVE_HEADING( 0, l_U389[J] );
                        CLOSE_SEQUENCE_TASK( l_U323 );
                        TASK_PERFORM_SEQUENCE( l_U312[J], l_U323 );
                        CLEAR_SEQUENCE_TASK( l_U323 );
                        l_U269[J] = 1;
                        l_U269[I] = 0;
                    }
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U537 );
                l_U538 = l_U537 - l_U539;
                if (l_U538 > 5000)
                {
                    if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar15, l_U393._fU0, l_U393._fU4, l_U393._fU8, 2.00000000 )))
                        {
                            CREATE_RANDOM_CHAR( l_U393._fU0, l_U393._fU4, l_U393._fU8, ref l_U312[J] );
                            SET_CHAR_HEADING( l_U312[J], l_U396 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U312[J], 1 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U312[J], 0 );
                            OPEN_SEQUENCE_TASK( ref l_U323 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U379[J]._fU0, l_U379[J]._fU4, l_U379[J]._fU8, 2, -1, -1 );
                            TASK_ACHIEVE_HEADING( 0, l_U389[J] );
                            CLOSE_SEQUENCE_TASK( l_U323 );
                            TASK_PERFORM_SEQUENCE( l_U312[J], l_U323 );
                            CLEAR_SEQUENCE_TASK( l_U323 );
                            l_U269[J] = 1;
                            GET_GAME_TIMER( ref l_U539 );
                        }
                    }
                }
            }
        }
    }
    for ( J = 0; J < 5; J++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U316[J] )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U316[J], l_U357[J]._fU0, l_U357[J]._fU4, l_U357[J]._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U316[J], 29, ref l_U324 );
                if ((l_U324 == 7) AND (NOT (IS_PED_IN_COMBAT( l_U316[J] ))))
                {
                    CLEAR_CHAR_TASKS( l_U316[J] );
                    OPEN_SEQUENCE_TASK( ref l_U323 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U357[J]._fU0, l_U357[J]._fU4, l_U357[J]._fU8, 2, 10000, 1.00000000 );
                    TASK_ACHIEVE_HEADING( 0, l_U373[J] );
                    CLOSE_SEQUENCE_TASK( l_U323 );
                    TASK_PERFORM_SEQUENCE( l_U316[J], l_U323 );
                    CLEAR_SEQUENCE_TASK( l_U323 );
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_1533() )))
    {
        GET_CHAR_COORDINATES( sub_1533(), ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar17._fU0, uVar17._fU4, uVar17._fU8, l_U335[0]._fU0, l_U335[0]._fU4, l_U335[0]._fU8, ref fVar20 );
    }
    if (fVar20 >= 250.00000000)
    {
        if (l_U273)
        {
            sub_10376();
            l_U273 = 0;
        }
    }
    else if (fVar20 <= 150.00000000)
    {
        if (NOT l_U273)
        {
            sub_10833();
            l_U273 = 1;
        }
    }
    return;
}

int sub_5945(unknown uParam0, unknown uParam1)
{
    float fVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    GET_GAME_VIEWPORT_ID( ref uVar11 );
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_1533() )))
        {
            GET_CAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_CHAR_COORDINATES( sub_1533(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            fVar4 = VDIST( uVar8, uVar5 );
            if (fVar4 >= l_U470)
            {
                if (NOT (CAM_IS_SPHERE_VISIBLE( uVar11, uVar5._fU0, uVar5._fU4, uVar5._fU8, 2.00000000 )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_10376()
{
    for ( l_U448 = 0; l_U448 < 5; l_U448++ )
    {
        if (NOT (l_U448 == l_U458))
        {
            if (NOT (IS_CHAR_DEAD( l_U285[l_U448] )))
            {
                ;
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U285[l_U448] );
            for ( l_U449 = 0; l_U449 < 3; l_U449++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U291[l_U448][l_U449] )))
                {
                    ;
                }
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291[l_U448][l_U449] );
            }
            if (IS_VEH_DRIVEABLE( l_U326[l_U448] ))
            {
                ;
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U326[l_U448] );
            REMOVE_CAR_RECORDING( l_U452[l_U448] );
        }
    }
    for ( l_U448 = 0; l_U448 < 5; l_U448++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U316[l_U448] )))
        {
            ;
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U316[l_U448] );
    }
    for ( l_U448 = 0; l_U448 < 3; l_U448++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U312[l_U448] )))
        {
            ;
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U312[l_U448] );
    }
    return;
}

void sub_10833()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    for ( l_U448 = 0; l_U448 < 5; l_U448++ )
    {
        if (NOT (l_U448 == l_U458))
        {
            if (l_U274[l_U448])
            {
                CREATE_CAR( l_U282, l_U335[l_U448]._fU0, l_U335[l_U448]._fU4, l_U335[l_U448]._fU8, ref l_U326[l_U448], 1 );
                fVar2 = l_U351[l_U448];
                GENERATE_RANDOM_FLOAT_IN_RANGE( -10.00000000, 10.00000000, ref uVar3 );
                fVar2 += uVar3;
                SET_CAR_HEADING( l_U326[l_U448], fVar2 );
                CREATE_CHAR_INSIDE_CAR( l_U326[l_U448], 26, l_U283, ref l_U285[l_U448] );
                SET_CHAR_RELATIONSHIP_GROUP( l_U285[l_U448], 24 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U285[l_U448], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U285[l_U448] );
                for ( l_U449 = 0; l_U449 < 3; l_U449++ )
                {
                    l_U248[l_U448][l_U449] = 0;
                }
                SET_CAR_ENGINE_ON( l_U326[l_U448], 0, 1 );
                l_U236[l_U448] = 0;
                l_U242[l_U448] = 0;
                l_U223[l_U448] = 0;
            }
        }
    }
    for ( l_U448 = 0; l_U448 < 5; l_U448++ )
    {
        CREATE_CHAR( 26, l_U284, l_U357[l_U448]._fU0, l_U357[l_U448]._fU4, l_U357[l_U448]._fU8, ref l_U316[l_U448], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U316[l_U448] );
        SET_CHAR_HEADING( l_U316[l_U448], l_U373[l_U448] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U316[l_U448], 24 );
    }
    GET_GAME_VIEWPORT_ID( ref uVar4 );
    for ( l_U448 = 0; l_U448 < 3; l_U448++ )
    {
        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
        {
            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar4, l_U379[l_U448]._fU0, l_U379[l_U448]._fU4, l_U379[l_U448]._fU8, 2.00000000 )))
            {
                CREATE_RANDOM_CHAR( l_U379[l_U448]._fU0, l_U379[l_U448]._fU4, l_U379[l_U448]._fU8, ref l_U312[l_U448] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U312[l_U448] );
                SET_CHAR_HEADING( l_U312[l_U448], l_U389[l_U448] );
                SET_CHAR_RELATIONSHIP_GROUP( l_U312[l_U448], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U312[l_U448], 0 );
                l_U269[l_U448] = 1;
            }
        }
    }
    GET_GAME_TIMER( ref l_U539 );
    return;
}

void sub_11827()
{
    if ((((NOT (HAS_MODEL_LOADED( l_U282 ))) || (NOT (HAS_MODEL_LOADED( l_U283 )))) || (NOT (HAS_MODEL_LOADED( l_U284 )))) || (NOT (HAVE_ANIMS_LOADED( l_U541 ))))
    {
        REQUEST_MODEL( l_U282 );
        REQUEST_MODEL( l_U283 );
        REQUEST_MODEL( l_U284 );
        REQUEST_ANIMS( l_U541 );
    }
    else
    {
        l_U221 = 1;
    }
    return;
}

void sub_11968()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    for ( l_U448 = 0; l_U448 < 5; l_U448++ )
    {
        if (l_U274[l_U448])
        {
            CREATE_CAR( l_U282, l_U335[l_U448]._fU0, l_U335[l_U448]._fU4, l_U335[l_U448]._fU8, ref l_U326[l_U448], 1 );
            fVar2 = l_U351[l_U448];
            GENERATE_RANDOM_FLOAT_IN_RANGE( -10.00000000, 10.00000000, ref uVar3 );
            fVar2 += uVar3;
            SET_CAR_HEADING( l_U326[l_U448], fVar2 );
            CREATE_CHAR_INSIDE_CAR( l_U326[l_U448], 26, l_U283, ref l_U285[l_U448] );
            SET_CHAR_RELATIONSHIP_GROUP( l_U285[l_U448], 24 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U285[l_U448], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U285[l_U448] );
            SET_CHAR_PROP_INDEX( l_U285[l_U448], 0, 0 );
            if (l_U448 == 0)
            {
                SET_AMBIENT_VOICE_NAME( l_U285[l_U448], "HELICOPTER_PILOT_1" );
            }
            if (l_U448 == 1)
            {
                SET_AMBIENT_VOICE_NAME( l_U285[l_U448], "HELICOPTER_PILOT_3" );
            }
            if (l_U448 == 2)
            {
                SET_AMBIENT_VOICE_NAME( l_U285[l_U448], "HELICOPTER_PILOT_3" );
            }
            if (l_U448 == 3)
            {
                SET_AMBIENT_VOICE_NAME( l_U285[l_U448], "HELICOPTER_PILOT_1" );
            }
            if (l_U448 == 4)
            {
                SET_AMBIENT_VOICE_NAME( l_U285[l_U448], "HELICOPTER_PILOT_2" );
            }
            for ( l_U449 = 0; l_U449 < 3; l_U449++ )
            {
                l_U248[l_U448][l_U449] = 0;
            }
            LOCK_CAR_DOORS( l_U326[l_U448], 1 );
            SET_CAR_ENGINE_ON( l_U326[l_U448], 0, 1 );
            l_U236[l_U448] = 0;
            l_U242[l_U448] = 0;
            l_U223[l_U448] = 0;
        }
    }
    for ( l_U448 = 0; l_U448 < 5; l_U448++ )
    {
        CREATE_CHAR( 26, l_U284, l_U357[l_U448]._fU0, l_U357[l_U448]._fU4, l_U357[l_U448]._fU8, ref l_U316[l_U448], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U316[l_U448] );
        SET_CHAR_HEADING( l_U316[l_U448], l_U373[l_U448] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U316[l_U448], 24 );
    }
    GET_GAME_VIEWPORT_ID( ref uVar4 );
    for ( l_U448 = 0; l_U448 < 3; l_U448++ )
    {
        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
        {
            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar4, l_U379[l_U448]._fU0, l_U379[l_U448]._fU4, l_U379[l_U448]._fU8, 2.00000000 )))
            {
                CREATE_RANDOM_CHAR( l_U379[l_U448]._fU0, l_U379[l_U448]._fU4, l_U379[l_U448]._fU8, ref l_U312[l_U448] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U312[l_U448] );
                SET_CHAR_HEADING( l_U312[l_U448], l_U389[l_U448] );
                SET_CHAR_RELATIONSHIP_GROUP( l_U312[l_U448], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U312[l_U448], 0 );
                l_U269[l_U448] = 1;
            }
        }
    }
    GET_GAME_TIMER( ref l_U539 );
    l_U273 = 1;
    l_U221 = 2;
    return;
}

void sub_13157()
{
    boolean bVar2;

    bVar2 = false;
    for ( l_U448 = 0; l_U448 < 5; l_U448++ )
    {
        if ((IS_VEH_DRIVEABLE( l_U326[l_U448] )) AND (NOT l_U242[l_U448]))
        {
            if (NOT (IS_CHAR_INJURED( l_U285[l_U448] )))
            {
                if (IS_CHAR_SITTING_IN_CAR( l_U285[l_U448], l_U326[l_U448] ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U326[l_U448] )))
                    {
                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U326[l_U448], 0 ))
                        {
                            if (NOT l_U236[l_U448])
                            {
                                if (NOT (IS_CHAR_DEAD( sub_1533() )))
                                {
                                    if ((LOCATE_CHAR_ON_FOOT_CAR_3D( sub_1533(), l_U326[l_U448], 3.50000000, 3.50000000, 2.00000000, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_1490(), 0 ))))
                                    {
                                        if ((IS_SCORE_GREATER( sub_1490(), ProtectedGet(l_U220) - 1 )) AND (sub_13451()))
                                        {
                                            if (IS_CONTROL_PRESSED( 2, 3 ))
                                            {
                                                sub_13519( 0, 0 );
                                                GET_GAME_TIMER( ref l_U537 );
                                                l_U538 = l_U537 - l_U540;
                                                if (l_U538 >= 500)
                                                {
                                                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HETR_01" ))
                                                    {
                                                        CLEAR_HELP();
                                                    }
                                                    l_U458 = l_U448;
                                                    l_U451 = l_U452[l_U448];
                                                    l_U325 = l_U326[l_U448];
                                                    l_U322 = l_U285[l_U448];
                                                    for ( l_U450 = 0; l_U450 < 3; l_U450++ )
                                                    {
                                                        if (l_U248[l_U448][l_U450])
                                                        {
                                                            if (NOT (IS_CHAR_INJURED( l_U291[l_U448][l_U450] )))
                                                            {
                                                                CLEAR_CHAR_TASKS( l_U291[l_U448][l_U450] );
                                                                OPEN_SEQUENCE_TASK( ref l_U323 );
                                                                if (IS_CHAR_IN_ANY_CAR( l_U291[l_U448][l_U450] ))
                                                                {
                                                                    TASK_LEAVE_ANY_CAR( 0 );
                                                                }
                                                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                                                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                                                                CLOSE_SEQUENCE_TASK( l_U323 );
                                                                TASK_PERFORM_SEQUENCE( l_U291[l_U448][l_U450], l_U323 );
                                                                CLEAR_SEQUENCE_TASK( l_U323 );
                                                                SET_CHAR_KEEP_TASK( l_U291[l_U448][l_U450], 1 );
                                                            }
                                                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291[l_U448][l_U450] );
                                                            l_U248[l_U448][l_U450] = 1;
                                                        }
                                                    }
                                                    l_U236[l_U448] = 1;
                                                    l_U450 = 0;
                                                    switch (l_U451)
                                                    {
                                                        case 610:
                                                        StrCopy( ref l_U488[0], "HT1_P1A2", 16 );
                                                        StrCopy( ref l_U488[1], "HT1_P1B2", 16 );
                                                        StrCopy( ref l_U488[2], "HT1_P1C2", 16 );
                                                        StrCopy( ref l_U488[3], "HT1_P1D2", 16 );
                                                        StrCopy( ref l_U488[4], "HT1_P1E2", 16 );
                                                        StrCopy( ref l_U488[5], "HT1_P1F2", 16 );
                                                        StrCopy( ref l_U488[6], "HT1_P1H2", 16 );
                                                        StrCopy( ref l_U488[7], "HT1_P1I2", 16 );
                                                        StrCopy( ref l_U488[8], "HT1_P1J2", 16 );
                                                        StrCopy( ref l_U488[9], "HT1_P1K2", 16 );
                                                        StrCopy( ref l_U488[10], "HT1_P1L2", 16 );
                                                        l_U472[0] = 0;
                                                        l_U472[1] = 30000;
                                                        l_U472[2] = 60000;
                                                        l_U472[3] = 98000;
                                                        l_U472[4] = 130000;
                                                        l_U472[5] = 148000;
                                                        l_U472[6] = 180000;
                                                        l_U472[7] = 245000;
                                                        l_U472[8] = 257000;
                                                        l_U472[9] = 296000;
                                                        l_U472[10] = 340000;
                                                        l_U485 = 11;
                                                        l_U486 = 2;
                                                        l_U487 = 8;
                                                        sub_14553( 1, l_U285[l_U448], "HELICOPTER_PILOT_1", 0 );
                                                        break;
                                                        case 611:
                                                        StrCopy( ref l_U488[0], "HT1_P3A2", 16 );
                                                        StrCopy( ref l_U488[1], "HT1_P3B2", 16 );
                                                        StrCopy( ref l_U488[2], "HT1_P3C2", 16 );
                                                        StrCopy( ref l_U488[3], "HT1_P3D2", 16 );
                                                        StrCopy( ref l_U488[4], "HT1_P3E2", 16 );
                                                        StrCopy( ref l_U488[5], "HT1_P3F2", 16 );
                                                        StrCopy( ref l_U488[6], "HT1_P3G2", 16 );
                                                        StrCopy( ref l_U488[7], "HT1_P3H2", 16 );
                                                        StrCopy( ref l_U488[8], "HT1_P3I2", 16 );
                                                        StrCopy( ref l_U488[9], "HT1_P3J2", 16 );
                                                        StrCopy( ref l_U488[10], "HT1_P3K2", 16 );
                                                        StrCopy( ref l_U488[11], "HT1_P3L2", 16 );
                                                        l_U472[0] = 0;
                                                        l_U472[1] = 59000;
                                                        l_U472[2] = 99000;
                                                        l_U472[3] = 111000;
                                                        l_U472[4] = 148000;
                                                        l_U472[5] = 156000;
                                                        l_U472[6] = 165000;
                                                        l_U472[7] = 215000;
                                                        l_U472[8] = 230000;
                                                        l_U472[9] = 252000;
                                                        l_U472[10] = 295000;
                                                        l_U472[11] = 338000;
                                                        l_U485 = 12;
                                                        l_U486 = 1;
                                                        l_U487 = 10;
                                                        sub_14553( 4, l_U285[l_U448], "HELICOPTER_PILOT_3", 0 );
                                                        break;
                                                        case 612:
                                                        StrCopy( ref l_U488[0], "HT1_P3A", 16 );
                                                        StrCopy( ref l_U488[1], "HT1_P3B", 16 );
                                                        StrCopy( ref l_U488[2], "HT1_P3C", 16 );
                                                        StrCopy( ref l_U488[3], "HT1_P3D", 16 );
                                                        StrCopy( ref l_U488[4], "HT1_P3E", 16 );
                                                        StrCopy( ref l_U488[5], "HT1_P3F", 16 );
                                                        StrCopy( ref l_U488[6], "HT1_P3G", 16 );
                                                        StrCopy( ref l_U488[7], "HT1_P3H", 16 );
                                                        StrCopy( ref l_U488[8], "HT1_P3I", 16 );
                                                        StrCopy( ref l_U488[9], "HT1_P3J", 16 );
                                                        StrCopy( ref l_U488[10], "HT1_P3K", 16 );
                                                        StrCopy( ref l_U488[11], "HT1_P3L", 16 );
                                                        l_U472[0] = 0;
                                                        l_U472[1] = 25000;
                                                        l_U472[2] = 34000;
                                                        l_U472[3] = 45000;
                                                        l_U472[4] = 60000;
                                                        l_U472[5] = 73000;
                                                        l_U472[6] = 85000;
                                                        l_U472[7] = 107000;
                                                        l_U472[8] = 126000;
                                                        l_U472[9] = 140000;
                                                        l_U472[10] = 156000;
                                                        l_U472[11] = 205000;
                                                        l_U485 = 12;
                                                        l_U486 = 1;
                                                        l_U487 = 10;
                                                        sub_14553( 3, l_U285[l_U448], "HELICOPTER_PILOT_3", 0 );
                                                        break;
                                                        case 613:
                                                        StrCopy( ref l_U488[0], "HT1_P1A", 16 );
                                                        StrCopy( ref l_U488[1], "HT1_P1B", 16 );
                                                        StrCopy( ref l_U488[2], "HT1_P1C", 16 );
                                                        StrCopy( ref l_U488[3], "HT1_P1D", 16 );
                                                        StrCopy( ref l_U488[4], "HT1_P1E", 16 );
                                                        StrCopy( ref l_U488[5], "HT1_P1F", 16 );
                                                        StrCopy( ref l_U488[6], "HT1_P1G", 16 );
                                                        StrCopy( ref l_U488[7], "HT1_P1H", 16 );
                                                        StrCopy( ref l_U488[8], "HT1_P1I", 16 );
                                                        StrCopy( ref l_U488[9], "HT1_P1K", 16 );
                                                        StrCopy( ref l_U488[10], "HT1_P1J", 16 );
                                                        StrCopy( ref l_U488[11], "HT1_P1L", 16 );
                                                        l_U472[0] = 0;
                                                        l_U472[1] = 23000;
                                                        l_U472[2] = 63000;
                                                        l_U472[3] = 99000;
                                                        l_U472[4] = 140000;
                                                        l_U472[5] = 186000;
                                                        l_U472[6] = 216000;
                                                        l_U472[7] = 240000;
                                                        l_U472[8] = 253000;
                                                        l_U472[9] = 301000;
                                                        l_U472[10] = 322000;
                                                        l_U472[11] = 365000;
                                                        l_U485 = 12;
                                                        l_U486 = 1;
                                                        l_U487 = 10;
                                                        sub_14553( 1, l_U285[l_U448], "HELICOPTER_PILOT_1", 0 );
                                                        break;
                                                        case 614:
                                                        StrCopy( ref l_U488[0], "HT1_P2A2", 16 );
                                                        StrCopy( ref l_U488[1], "HT1_P2B2", 16 );
                                                        StrCopy( ref l_U488[2], "HT1_P2C2", 16 );
                                                        StrCopy( ref l_U488[3], "HT1_P2D2", 16 );
                                                        StrCopy( ref l_U488[4], "HT1_P2F2", 16 );
                                                        StrCopy( ref l_U488[5], "HT1_P2G2", 16 );
                                                        StrCopy( ref l_U488[6], "HT1_P2H2", 16 );
                                                        StrCopy( ref l_U488[7], "HT1_P2J2", 16 );
                                                        StrCopy( ref l_U488[8], "HT1_P2I2", 16 );
                                                        StrCopy( ref l_U488[9], "HT1_P2L2", 16 );
                                                        l_U472[0] = 0;
                                                        l_U472[1] = 35000;
                                                        l_U472[2] = 52000;
                                                        l_U472[3] = 70000;
                                                        l_U472[4] = 126000;
                                                        l_U472[5] = 149000;
                                                        l_U472[6] = 202000;
                                                        l_U472[7] = 289000;
                                                        l_U472[8] = 335000;
                                                        l_U472[9] = 395000;
                                                        l_U485 = 10;
                                                        l_U486 = 1;
                                                        l_U487 = 8;
                                                        sub_14553( 2, l_U285[l_U448], "HELICOPTER_PILOT_2", 0 );
                                                        break;
                                                        default:
                                                        l_U485 = 0;
                                                        break;
                                                    }
                                                    l_U471 = 0;
                                                    sub_14553( 0, sub_1533(), "JOHNNY", 0 );
                                                    l_U230 = 1;
                                                    l_U222 = 0;
                                                    l_U221 = 3;
                                                }
                                                else
                                                {
                                                    bVar2 = true;
                                                }
                                            }
                                            else
                                            {
                                                bVar2 = true;
                                                GET_GAME_TIMER( ref l_U540 );
                                            }
                                        }
                                        else
                                        {
                                            bVar2 = true;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else if (NOT (IS_CHAR_DEAD( sub_1533() )))
                {
                    TASK_SMART_FLEE_CHAR( l_U285[l_U448], sub_1533(), 1000.00000000, -1 );
                    SET_CHAR_KEEP_TASK( l_U285[l_U448], 1 );
                }
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U285[l_U448] );
                for ( l_U450 = 0; l_U450 < 3; l_U450++ )
                {
                    if (l_U248[l_U448][l_U450])
                    {
                        if (NOT (IS_CHAR_INJURED( l_U291[l_U448][l_U450] )))
                        {
                            CLEAR_CHAR_TASKS( l_U291[l_U448][l_U450] );
                            OPEN_SEQUENCE_TASK( ref l_U323 );
                            if (IS_CHAR_IN_ANY_CAR( l_U291[l_U448][l_U450] ))
                            {
                                TASK_LEAVE_ANY_CAR( 0 );
                            }
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                            CLOSE_SEQUENCE_TASK( l_U323 );
                            TASK_PERFORM_SEQUENCE( l_U291[l_U448][l_U450], l_U323 );
                            CLEAR_SEQUENCE_TASK( l_U323 );
                            SET_CHAR_KEEP_TASK( l_U291[l_U448][l_U450], 1 );
                        }
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291[l_U448][l_U450] );
                        l_U248[l_U448][l_U450] = 1;
                    }
                }
                l_U242[l_U448] = 1;;
            }
        }
        if (NOT (IS_CHAR_DEAD( sub_1533() )))
        {
            if (IS_VEH_DRIVEABLE( l_U326[l_U448] ))
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_1533(), l_U326[l_U448] ))
                {
                    l_U458 = l_U448;
                    l_U325 = l_U326[l_U448];
                    if (IS_VEH_DRIVEABLE( l_U326[l_U448] ))
                    {
                        FREEZE_CAR_POSITION( l_U326[l_U448], 0 );
                    }
                    l_U221 = 7;
                    bVar2 = false;
                }
            }
        }
    }
    if (bVar2)
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
        if (IS_SCORE_GREATER( sub_1490(), ProtectedGet(l_U220) - 1 ))
        {
            PRINT_HELP_FOREVER( "HETR_01" );
        }
        else
        {
            PRINT_HELP_FOREVER( "HETR_BROKE" );
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HETR_01" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HETR_BROKE" )))
    {
        CLEAR_HELP();
    }
    return;
}

int sub_13451()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U20912)
    {
        return 0;
    }
    return 1;
}

void sub_13519(boolean bParam0, unknown uParam1)
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

void sub_14553(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_14633( "\n PED NUMBER ", uParam0 );
    sub_14673( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_14633(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_14673(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_17297()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    iVar5 = 0;
    if (IS_VEH_DRIVEABLE( l_U325 ))
    {
        switch (l_U222)
        {
            case 0:
            CLEAR_PRINTS();
            SET_PLAYER_CONTROL( sub_1490(), 0 );
            l_U280 = 1;
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1533() );
            SET_NEXT_DESIRED_MOVE_STATE( 2 );
            OPEN_SEQUENCE_TASK( ref l_U323 );
            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U325, -1, 0 );
            CLOSE_SEQUENCE_TASK( l_U323 );
            TASK_PERFORM_SEQUENCE( sub_1533(), l_U323 );
            CLEAR_SEQUENCE_TASK( l_U323 );
            GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U447 );
            if ((l_U447 <= -1) || (l_U447 > 6))
            {
                l_U447 = 2;
            }
            l_U222 = 1;
            break;
            case 1:
            if (NOT sub_17523())
            {
                GET_SCRIPT_TASK_STATUS( sub_1533(), 29, ref l_U324 );
                if ((l_U324 == 7) AND (sub_18647()))
                {
                    SET_FOLLOW_VEHICLE_CAM_SUBMODE( 0 );
                    SET_FOLLOW_VEHICLE_CAM_OFFSET( 1, l_U437._fU0, l_U437._fU4, l_U437._fU8 );
                    l_U222 = 2;
                }
            }
            else if (IS_PLAYER_PLAYING( sub_1490() ))
            {
                CLEAR_CHAR_TASKS( sub_1533() );
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1533() )))
                {
                    CLEAR_CHAR_TASKS( sub_1533() );
                }
                if (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1533() ))
                {
                    CLEAR_CHAR_TASKS( sub_1533() );
                    TASK_LEAVE_ANY_CAR( sub_1533() );
                }
                SET_PLAYER_CONTROL( sub_1490(), 1 );
                l_U280 = 0;
                sub_18899();
            }
            l_U236[l_U458] = 0;
            l_U223[l_U458] = 0;
            for ( l_U450 = 0; l_U450 < 3; l_U450++ )
            {
                l_U248[l_U458][l_U450] = 0;
            }
            l_U221 = 2;
            l_U458 = 999999;;
            break;
            case 2:
            if (NOT (IS_CHAR_IN_CAR( sub_1533(), l_U325 )))
            {
                CLEAR_CHAR_TASKS( sub_1533() );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_1533(), l_U325, 0 );
            }
            CLOSE_ALL_CAR_DOORS( l_U325 );
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_1490(), 0 );
            SET_PLAYER_CONTROL( sub_1490(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (NOT l_U430)
            {
                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 0 );
                SET_FOLLOW_VEHICLE_CAM_OFFSET( 1, l_U437._fU0, l_U437._fU4, l_U437._fU8 );
                BEGIN_CAM_COMMANDS( ref l_U431 );
                GET_GAME_CAM_CHILD( ref l_U429 );
                if (DOES_CAM_EXIST( l_U429 ))
                {
                    GET_CAM_POS( l_U429, ref l_U440._fU0, ref l_U440._fU4, ref l_U440._fU8 );
                    GET_CAM_ROT( l_U429, ref l_U443._fU0, ref l_U443._fU4, ref l_U443._fU8 );
                }
                CREATE_CAM( 14, ref l_U428 );
                SET_CAM_POS( l_U428, l_U440._fU0, l_U440._fU4, l_U440._fU8 );
                SET_CAM_ROT( l_U428, l_U443._fU0, l_U443._fU4, l_U443._fU8 );
                if (IS_VEH_DRIVEABLE( l_U325 ))
                {
                    ATTACH_CAM_TO_VEHICLE( l_U428, l_U325 );
                }
                SET_CAM_ATTACH_OFFSET( l_U428, l_U434._fU0, l_U434._fU4, l_U434._fU8 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U428, 1 );
                SET_CAM_ACTIVE( l_U428, 1 );
                SET_CAM_PROPAGATE( l_U428, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (IS_FOLLOW_VEHICLE_CAM_OFFSET_ACTIVE())
                {
                    SET_FOLLOW_VEHICLE_CAM_OFFSET( 0, 0.00000000, 0.00000000, 0.00000000 );
                }
                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 4 );
                l_U432 = 0;
                l_U433 = 0;
                l_U430 = 1;
                l_U232 = 1;
            }
            if (IS_SCORE_GREATER( sub_1490(), ProtectedGet(l_U220) - 1 ))
            {
                ADD_SCORE( sub_1490(), -1 * ProtectedGet(l_U220) );
            }
            l_U230 = 1;
            l_U231 = 1;
            l_U430 = 0;
            l_U232 = 0;
            l_U233 = 0;
            l_U234 = 0;
            l_U235 = 0;
            l_U542[l_U458] = 0;
            l_U281 = 1;
            l_U446 = 4;
            l_U221 = 4;
            break;
        }
    }
    return;
}

int sub_17523()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    int iVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    unknown uVar17;
    vector vVar18;
    unknown uVar21;
    float fVar22;

    if (IS_CONTROL_PRESSED( 2, 3 ))
    {
        return 0;
    }
    GET_GAME_CAM( ref uVar5 );
    GET_CAM_ROT( uVar5, ref uVar2._fU0, ref uVar2._fU4, ref uVar6 );
    vVar7 = {0.00000000, 1.00000000, 0.00000000};
    vVar7 = {sub_17607( vVar7, 0.00000000, 0.00000000, uVar6 )};
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar10, ref iVar11, ref uVar12, ref uVar13 );
    if ((iVar10 == 0) AND (iVar11 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar10, ref iVar11 );
    }
    uVar2._fU0 = iVar10 / 128.00000000;
    uVar2._fU4 = iVar11 / -128.00000000;
    uVar2._fU8 = 0.00000000;
    if ((VMAG( uVar2 )) < 0.50000000)
    {
        return 0;
    }
    GET_HEADING_FROM_VECTOR_2D( uVar2._fU0, uVar2._fU4, ref uVar17 );
    vVar14 = {0.00000000, 1.00000000, 0.00000000};
    vVar14 = {sub_17607( vVar14, 0.00000000, 0.00000000, uVar6 )};
    vVar14 = {sub_17607( vVar14, 0.00000000, 0.00000000, uVar17 )};
    if (IS_PLAYER_PLAYING( sub_1490() ))
    {
        GET_CHAR_HEADING( sub_1533(), ref uVar21 );
        vVar18 = {0.00000000, 1.00000000, 0.00000000};
        vVar18 = {sub_17607( vVar18, 0.00000000, 0.00000000, uVar21 )};
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( vVar18.x, vVar18.y, vVar14.x, vVar14.y, ref fVar22 );
    if (fVar22 > 60.00000000)
    {
        if (NOT (sub_18234( sub_1533() )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_17607(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = {uParam0};
    uVar8 = COS( uParam3._fU0 );
    uVar9 = SIN( uParam3._fU0 );
    uVar13._fU0 = uParam0._fU0;
    uVar13._fU4 = (uVar8 * Result._fU4) - (uVar9 * Result._fU8);
    uVar13._fU8 = (uVar9 * Result._fU4) + (uVar8 * Result._fU8);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU4 );
    uVar9 = SIN( uParam3._fU4 );
    uVar13._fU0 = (uVar8 * Result._fU0) + (uVar9 * Result._fU8);
    uVar13._fU4 = uParam0._fU4;
    uVar13._fU8 = (uVar8 * Result._fU8) - (uVar9 * Result._fU0);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU8 );
    uVar9 = SIN( uParam3._fU8 );
    uVar13._fU0 = (uVar8 * Result._fU0) - (uVar9 * Result._fU4);
    uVar13._fU4 = (uVar9 * Result._fU0) + (uVar8 * Result._fU4);
    uVar13._fU8 = uParam0._fU8;
    Result = {uVar13};
    return Result;
}

int sub_18234(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))
        {
            if (HAVE_ANIMS_LOADED( "VEH@STD" ))
            {
                if (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_open_out_ds" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, "VEH@STD", "d_open_out_ds", ref fVar3 );
                    if (fVar3 > 0.10000000)
                    {
                        return 1;
                    }
                }
                if (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_open_out_ps" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, "VEH@STD", "d_open_out_ps", ref fVar3 );
                    if (fVar3 > 0.10000000)
                    {
                        return 1;
                    }
                }
                if (((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_ds" )) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_jack_ps" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_ps" )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_18647()
{
    return sub_18658( 1, 1 );
}

int sub_18658(boolean bParam0, unknown uParam1)
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

void sub_18899()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_19891()
{
    unknown uVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    sub_19900();
    if (l_U280)
    {
        sub_18647();
    }
    else
    {
        sub_18899();
    }
    if (NOT l_U430)
    {
        BEGIN_CAM_COMMANDS( ref l_U431 );
        GET_GAME_CAM_CHILD( ref l_U429 );
        if (DOES_CAM_EXIST( l_U429 ))
        {
            GET_CAM_POS( l_U429, ref l_U440._fU0, ref l_U440._fU4, ref l_U440._fU8 );
            GET_CAM_ROT( l_U429, ref l_U443._fU0, ref l_U443._fU4, ref l_U443._fU8 );
        }
        CREATE_CAM( 14, ref l_U428 );
        SET_CAM_POS( l_U428, l_U440._fU0, l_U440._fU4, l_U440._fU8 );
        SET_CAM_ROT( l_U428, l_U443._fU0, l_U443._fU4, l_U443._fU8 );
        if (IS_VEH_DRIVEABLE( l_U325 ))
        {
            ATTACH_CAM_TO_VEHICLE( l_U428, l_U325 );
        }
        SET_CAM_ATTACH_OFFSET( l_U428, l_U434._fU0, l_U434._fU4, l_U434._fU8 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U428, 1 );
        SET_CAM_ACTIVE( l_U428, 1 );
        SET_CAM_PROPAGATE( l_U428, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (IS_FOLLOW_VEHICLE_CAM_OFFSET_ACTIVE())
        {
            SET_FOLLOW_VEHICLE_CAM_OFFSET( 0, 0.00000000, 0.00000000, 0.00000000 );
        }
        SET_FOLLOW_VEHICLE_CAM_SUBMODE( 4 );
        l_U432 = 0;
        l_U433 = 0;
        l_U430 = 1;
        l_U232 = 1;
    }
    if (IS_VEH_DRIVEABLE( l_U325 ))
    {
        if ((NOT (IS_CHAR_INJURED( l_U322 ))) AND (IS_CHAR_SITTING_IN_CAR( sub_1533(), l_U325 )))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_1490(), 0 );
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U325 ))
            {
                if (NOT sub_20498())
                {
                    if (sub_20538())
                    {
                        if (NOT l_U230)
                        {
                            DO_SCREEN_FADE_OUT( 1000 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            if (sub_20693( l_U548 ))
                            {
                                sub_20877( ref l_U548, 0 );
                            }
                            if (IS_VEH_DRIVEABLE( l_U325 ))
                            {
                                SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U325 );
                                SET_CAR_COORDINATES( l_U325, l_U335[l_U458]._fU0, l_U335[l_U458]._fU4, l_U335[l_U458]._fU8 );
                                SET_CAR_HEADING( l_U325, l_U351[l_U458] );
                                LOAD_SCENE( l_U335[l_U458]._fU0, l_U335[l_U458]._fU4, l_U335[l_U458]._fU8 );
                            }
                        }
                    }
                    else
                    {
                        l_U230 = 0;
                    }
                }
                else
                {
                    l_U230 = 1;
                }
                GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U446 );
                if ((l_U446 == 0) || (l_U446 == 4))
                {
                    if (l_U430)
                    {
                        if (NOT l_U232)
                        {
                            if (DOES_CAM_EXIST( l_U428 ))
                            {
                                SET_CAM_ACTIVE( l_U428, 1 );
                                SET_CAM_PROPAGATE( l_U428, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            }
                            l_U432 = 0;
                            l_U433 = 0;
                            l_U232 = 1;
                        }
                    }
                }
                else if (l_U430)
                {
                    if (l_U232)
                    {
                        if (DOES_CAM_EXIST( l_U428 ))
                        {
                            SET_CAM_ACTIVE( l_U428, 0 );
                            SET_CAM_PROPAGATE( l_U428, 0 );
                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        }
                        l_U232 = 0;
                    }
                }
                if (l_U430)
                {
                    if (NOT l_U233)
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        PRINT_HELP( "HETR_02" );
                        l_U233 = 1;
                    }
                    else if (l_U232)
                    {
                        if (NOT l_U234)
                        {
                            if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (l_U235))
                            {
                                CLEAR_HELP();
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                PRINT_HELP( "HETR_03" );
                                l_U234 = 1;
                            }
                        }
                        else if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U235)
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                PRINT_HELP( "HETR_04" );
                                l_U235 = 1;
                            }
                        }
                    }
                    else
                    {
                        l_U234 = 0;
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U235)
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                PRINT_HELP( "HETR_04" );
                                l_U235 = 1;
                            }
                        }
                    }
                    if (l_U232)
                    {
                        if (l_U430)
                        {
                            if (IS_VEH_DRIVEABLE( l_U325 ))
                            {
                                GET_CAR_HEADING( l_U325, ref fVar4 );
                                GET_CAR_ROLL( l_U325, ref uVar6 );
                                GET_CAR_PITCH( l_U325, ref fVar5 );
                            }
                            fVar5 += TO_FLOAT( l_U433 );
                            fVar4 += TO_FLOAT( l_U432 );
                            if (DOES_CAM_EXIST( l_U428 ))
                            {
                                SET_CAM_ROT( l_U428, fVar5, uVar6, fVar4 );
                                sub_21790();
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U325 ))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U325 ))
                    {
                        fVar3 = FIND_TIME_POSITION_IN_RECORDING( l_U325 );
                    }
                }
                if (l_U471 < l_U485)
                {
                    if (fVar3 > l_U472[l_U471])
                    {
                        if (NOT (sub_20693( l_U548 )))
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                if (HAS_THIS_ADDITIONAL_TEXT_LOADED( "HT1AUD", 7 ))
                                {
                                    sub_22847( ref l_U488[l_U471], ref l_U548, 6, 1 );
                                    l_U471++;
                                    l_U281 = 0;
                                }
                                else
                                {
                                    LOAD_ADDITIONAL_TEXT( "HT1AUD", 7 );
                                }
                            }
                        }
                    }
                    else if ((l_U471 > l_U486) AND ((l_U471 - 1) <= l_U487))
                    {
                        if (NOT l_U281)
                        {
                            if (NOT (sub_20693( l_U548 )))
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (sub_22847( "E1JA_RESP", ref l_U548, 6, 1 ))
                                    {
                                        l_U281 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
                if (LOCATE_CAR_3D( l_U325, l_U335[l_U458]._fU0, l_U335[l_U458]._fU4, l_U335[l_U458]._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U325 ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U325 ))
                        {
                            if ((FIND_TIME_POSITION_IN_RECORDING( l_U325 )) > 10000)
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U325 );
                            }
                        }
                    }
                }
            }
            else if (NOT (sub_24099( l_U458 )))
            {
                if (sub_20538())
                {
                    if (NOT sub_20498())
                    {
                        if (NOT l_U230)
                        {
                            DO_SCREEN_FADE_OUT( 1000 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            if (sub_20693( l_U548 ))
                            {
                                sub_20877( ref l_U548, 0 );
                            }
                            if (IS_VEH_DRIVEABLE( l_U325 ))
                            {
                                SET_CAR_COORDINATES( l_U325, l_U335[l_U458]._fU0, l_U335[l_U458]._fU4, l_U335[l_U458]._fU8 );
                                SET_CAR_HEADING( l_U325, l_U351[l_U458] );
                                LOAD_SCENE( l_U335[l_U458]._fU0, l_U335[l_U458]._fU4, l_U335[l_U458]._fU8 );
                            }
                        }
                    }
                    else
                    {
                        l_U230 = 1;
                    }
                }
                else
                {
                    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U446 );
                    if ((l_U446 == 0) || (l_U446 == 4))
                    {
                        if (l_U430)
                        {
                            if (NOT l_U232)
                            {
                                if (DOES_CAM_EXIST( l_U428 ))
                                {
                                    SET_CAM_ACTIVE( l_U428, 1 );
                                    SET_CAM_PROPAGATE( l_U428, 1 );
                                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    l_U432 = 0;
                                    l_U433 = 0;
                                    l_U232 = 1;
                                }
                            }
                        }
                    }
                    else if (l_U430)
                    {
                        if (l_U232)
                        {
                            if (DOES_CAM_EXIST( l_U428 ))
                            {
                                SET_CAM_ACTIVE( l_U428, 0 );
                                SET_CAM_PROPAGATE( l_U428, 0 );
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                l_U232 = 0;
                            }
                        }
                    }
                    SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U446 );;
                    if (l_U232)
                    {
                        if (l_U430)
                        {
                            if (IS_VEH_DRIVEABLE( l_U325 ))
                            {
                                GET_CAR_HEADING( l_U325, ref fVar4 );
                                GET_CAR_ROLL( l_U325, ref uVar6 );
                                GET_CAR_PITCH( l_U325, ref fVar5 );
                            }
                            fVar5 += TO_FLOAT( l_U433 );
                            fVar4 += TO_FLOAT( l_U432 );
                            if (DOES_CAM_EXIST( l_U428 ))
                            {
                                SET_CAM_ROT( l_U428, fVar5, uVar6, fVar4 );
                                sub_21790();
                            }
                        }
                    }
                }
            }
            else if (IS_VEH_DRIVEABLE( l_U325 ))
            {
                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 2 );
                SET_CAM_BEHIND_PED( sub_1533() );
                if (l_U232)
                {
                    if (l_U430)
                    {
                        if (DOES_CAM_EXIST( l_U428 ))
                        {
                            SET_CAM_ACTIVE( l_U428, 0 );
                            SET_CAM_PROPAGATE( l_U428, 0 );
                            DESTROY_CAM( l_U428 );
                        }
                        l_U430 = 0;
                    }
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                }
                END_CAM_COMMANDS( ref l_U431 );
                CLEAR_HELP();
                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 2 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_CAM_BEHIND_PED( sub_1533() );
                if (IS_SCREEN_FADED_OUT())
                {
                    LOAD_SCENE( l_U335[l_U458]._fU0, l_U335[l_U458]._fU4, l_U335[l_U458]._fU8 );
                    DO_SCREEN_FADE_IN( 1000 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                }
                l_U221 = 6;
                l_U230 = 1;
                l_U222 = 0;
            };;;
        }
        else
        {
            sub_25896();
        }
    }
    else
    {
        l_U221 = 6;
        l_U230 = 1;
        l_U222 = 0;
    }
    return;
}

void sub_19900()
{
    if ((g_U558 == 1) || (g_U8946 == 4))
    {
        if (g_U94._fU60 != -1)
        {
            g_U15862[g_U94._fU60]._fU196._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U94._fU376 = 0;
        g_U94._fU100 = 1;
    }
    return;
}

int sub_20498()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_20538()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_20693(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_20805( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_20805( "\n speech is not playing" );
    }
    return 0;
}

void sub_20805(unknown uParam0)
{
    return;
}

void sub_20877(int iParam0, unknown uParam1)
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

void sub_21790()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    float fVar14;
    int iVar15;
    float fVar16;
    float fVar17;
    int iVar18;

    iVar9 = 45;
    iVar10 = 65491;
    iVar11 = 45;
    iVar12 = 65491;
    iVar13 = 2;
    fVar14 = 2.00000000;
    iVar15 = 2;
    fVar16 = 2.00000000;
    fVar17 = 1.00000000 + ((8.00000000 - 1.00000000) * GET_MOUSE_SENSITIVITY());
    iVar18 = ROUND( fVar17 );
    if (DOES_CAM_EXIST( l_U428 ))
    {
        GET_CAM_ROT( l_U428, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar5, ref uVar6, ref iVar7, ref iVar8 );
    if ((iVar7 == 0) AND (iVar8 == 0))
    {
        GET_MOUSE_INPUT( ref iVar7, ref iVar8 );
        iVar15 *= iVar18;
        iVar13 *= iVar18;
        fVar16 *= fVar17;
        fVar14 *= fVar17;
    }
    if (iVar8 > 50)
    {
        if (IS_LOOK_INVERTED())
        {
            if (l_U433 < iVar11)
            {
                l_U433 += iVar15;
                uVar2._fU0 += fVar16;
            }
        }
        else if (l_U433 > iVar12)
        {
            l_U433 -= iVar15;
            uVar2._fU0 -= fVar16;
        }
    }
    if (iVar8 < 65486)
    {
        if (IS_LOOK_INVERTED())
        {
            if (l_U433 > iVar12)
            {
                l_U433 -= iVar15;
                uVar2._fU0 -= fVar16;
            }
        }
        else if (l_U433 < iVar11)
        {
            l_U433 += iVar15;
            uVar2._fU0 += fVar16;
        }
    }
    if (iVar7 > 50)
    {
        if (l_U432 > iVar10)
        {
            l_U432 -= iVar13;
            uVar2._fU8 -= fVar14;
        }
    }
    if (iVar7 < 65486)
    {
        if (l_U432 < iVar9)
        {
            l_U432 += iVar13;
            uVar2._fU8 += fVar14;
        }
    }
    if (iVar8 > 110)
    {
        if (IS_LOOK_INVERTED())
        {
            if (l_U433 < iVar11)
            {
                l_U433 += iVar15;
                uVar2._fU0 += fVar16;
            }
        }
        else if (l_U433 > iVar12)
        {
            l_U433 -= iVar15;
            uVar2._fU0 -= fVar16;
        }
    }
    if (iVar8 < 65426)
    {
        if (IS_LOOK_INVERTED())
        {
            if (l_U433 > iVar12)
            {
                l_U433 -= iVar15;
                uVar2._fU0 -= fVar16;
            }
        }
        else if (l_U433 < iVar11)
        {
            l_U433 += iVar15;
            uVar2._fU0 += fVar16;
        }
    }
    if (iVar7 > 110)
    {
        if (l_U432 > iVar10)
        {
            l_U432 -= iVar13;
            uVar2._fU8 -= fVar14;
        }
    }
    if (iVar7 < 65426)
    {
        if (l_U432 < iVar9)
        {
            l_U432 += iVar13;
            uVar2._fU8 += fVar14;
        }
    }
    if (DOES_CAM_EXIST( l_U428 ))
    {
        SET_CAM_ROT( l_U428, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    }
    return;
}

void sub_22847(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22868( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_22868(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_22922( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_22922(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_22944( iParam1 )))
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_23620( ref g_U8947, ref l_U2 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_22944(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_20805( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_20805( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_20805( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_23620(int iParam0, int iParam1)
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

int sub_24099(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    vector vVar10;
    unknown uVar13;
    float fVar14;
    unknown uVar15;
    unknown uVar16;

    if (IS_VEH_DRIVEABLE( l_U326[uParam0] ))
    {
        if (NOT l_U542[uParam0])
        {
            FREEZE_CAR_POSITION( l_U326[uParam0], 1 );
            l_U542[uParam0] = 1;
        }
        else if (LOCATE_CAR_3D( l_U326[uParam0], l_U335[uParam0]._fU0, l_U335[uParam0]._fU4, l_U335[uParam0]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
        {
            FREEZE_CAR_POSITION( l_U326[uParam0], 0 );
            SET_CAR_COORDINATES( l_U326[uParam0], l_U335[uParam0]._fU0, l_U335[uParam0]._fU4, l_U335[uParam0]._fU8 );
            return 1;
        }
        else if (NOT (LOCATE_CAR_3D( l_U326[uParam0], l_U335[uParam0]._fU0, l_U335[uParam0]._fU4, l_U335[uParam0]._fU8, 20.00000000, 20.00000000, 20.00000000, 0 )))
        {
            SET_CAR_COORDINATES( l_U326[uParam0], l_U335[uParam0]._fU0, l_U335[uParam0]._fU4, l_U335[uParam0]._fU8 );
        }
        else
        {
            GET_CAR_COORDINATES( l_U326[uParam0], ref vVar3.x, ref vVar3.y, ref vVar3.z );
            vVar6 = {vVar3 - l_U335[uParam0]};
            uVar9 = VMAG( vVar6 );
            vVar10 = {vVar6 / uVar9};
            GET_FRAME_TIME( ref uVar13 );
            vVar3 = {vVar3 - ((vVar10 * uVar13) * 1.00000000)};
            SET_CAR_COORDINATES_NO_OFFSET( l_U326[uParam0], vVar3.x, vVar3.y, vVar3.z );
            GET_CAR_HEADING( l_U326[uParam0], ref fVar14 );
            GET_CAR_ROLL( l_U326[uParam0], ref uVar15 );
            GET_CAR_PITCH( l_U326[uParam0], ref uVar16 );
            if (NOT (fVar14 == l_U351[uParam0]))
            {
                if (((l_U351[uParam0] - fVar14) < 1.00000000) AND ((l_U351[uParam0] - fVar14) > -1.00000000))
                {
                    fVar14 = l_U351[uParam0];
                }
                else if (fVar14 < l_U351[uParam0])
                {
                    if ((l_U351[uParam0] - fVar14) > 180)
                    {
                        fVar14 -= 1.00000000;
                        if (fVar14 < 0.00000000)
                        {
                            fVar14 += 360.00000000;
                        }
                    }
                    else
                    {
                        fVar14 += 1.00000000;
                        if (fVar14 > 360.00000000)
                        {
                            fVar14 -= 360.00000000;
                        }
                    }
                }
                else if ((fVar14 - l_U351[uParam0]) > 180)
                {
                    fVar14 += 1.00000000;
                    if (fVar14 > 360.00000000)
                    {
                        fVar14 -= 360.00000000;
                    }
                }
                else
                {
                    fVar14 -= 1.00000000;
                    if (fVar14 < 0.00000000)
                    {
                        fVar14 += 360.00000000;
                    }
                };;;
                SET_CAR_HEADING( l_U326[uParam0], fVar14 );
            }
        };;;
    }
    return 0;
}

void sub_25896()
{
    CLEAR_HELP();
    if (l_U232)
    {
        if (l_U430)
        {
            if (DOES_CAM_EXIST( l_U428 ))
            {
                SET_CAM_ACTIVE( l_U428, 0 );
                SET_CAM_PROPAGATE( l_U428, 0 );
                DESTROY_CAM( l_U428 );
            }
            l_U430 = 0;
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    END_CAM_COMMANDS( ref l_U431 );
    if ((l_U447 > -1) AND (l_U447 < 6))
    {
        SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U447 );
    }
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_CAM_BEHIND_PED( sub_1533() );
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_1490(), 1 );
    sub_18899();
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 1000 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    l_U236[l_U458] = 0;
    l_U223[l_U458] = 2;
    for ( l_U450 = 0; l_U450 < 3; l_U450++ )
    {
        l_U248[l_U458][l_U450] = 0;
    }
    l_U221 = 2;
    l_U458 = 999999;
    return;
}

void sub_26276()
{
    if (IS_VEH_DRIVEABLE( l_U325 ))
    {
        switch (l_U222)
        {
            case 0:
            SET_CAR_ENGINE_ON( l_U325, 0, 0 );
            CLEAR_PRINTS();
            SET_PLAYER_CONTROL( sub_1490(), 0 );
            CLEAR_CHAR_TASKS( sub_1533() );
            LOCK_CAR_DOORS( l_U325, 1 );
            OPEN_SEQUENCE_TASK( ref l_U323 );
            TASK_PAUSE( 0, 2000 );
            TASK_LEAVE_ANY_CAR( 0 );
            CLOSE_SEQUENCE_TASK( l_U323 );
            TASK_PERFORM_SEQUENCE( sub_1533(), l_U323 );
            CLEAR_SEQUENCE_TASK( l_U323 );
            l_U222 = 1;
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( sub_1533(), 29, ref l_U324 );
            if (l_U324 == 7)
            {
                l_U222 = 2;
            }
            break;
            case 2:
            SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U447 );
            SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U447 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CAM_BEHIND_PED( sub_1533() );
            SET_PLAYER_CONTROL( sub_1490(), 1 );
            l_U280 = 0;
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_1490(), 1 );
            sub_18899();
            CLOSE_ALL_CAR_DOORS( l_U325 );
            switch (l_U451)
            {
                case 610:
                g_U9250 = 1;
                break;
                case 611:
                g_U9251 = 1;
                break;
                case 612:
                g_U9252 = 1;
                break;
                case 613:
                g_U9253 = 1;
                break;
                case 614:
                g_U9254 = 1;
                break;
            }
            if (((((g_U9250) AND (g_U9251)) AND (g_U9252)) AND (g_U9253)) AND (g_U9254))
            {
                AWARD_ACHIEVEMENT( 22 );
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 267, 1 );
            l_U236[l_U458] = 0;
            l_U223[l_U458] = 0;
            for ( l_U450 = 0; l_U450 < 3; l_U450++ )
            {
                l_U248[l_U458][l_U450] = 0;
            }
            l_U221 = 2;
            l_U458 = 999999;
            break;
        }
    }
    else
    {
        l_U236[l_U458] = 0;
        l_U223[l_U458] = 0;
        for ( l_U450 = 0; l_U450 < 3; l_U450++ )
        {
            l_U248[l_U458][l_U450] = 0;
        }
        l_U221 = 2;
        l_U458 = 999999;
        if (l_U280)
        {
            if (IS_PLAYER_PLAYING( sub_1490() ))
            {
                SET_PLAYER_CONTROL( sub_1490(), 1 );
                SET_PLAYER_CAN_DO_DRIVE_BY( sub_1490(), 1 );
                l_U280 = 0;
            }
            sub_18899();
        }
    }
    return;
}

void sub_27058()
{
    if (IS_VEH_DRIVEABLE( l_U325 ))
    {
        if (IS_CHAR_IN_CAR( sub_1533(), l_U325 ))
        {
            ;
        }
        else
        {
            l_U221 = 2;
            l_U458 = 999999;
        }
    }
    else
    {
        l_U221 = 2;
        l_U458 = 999999;
    }
    return;
}

void sub_27161()
{
    return;
}

void sub_27183()
{
    return;
}

void sub_27243()
{
    return;
}

void sub_27265()
{
    vector vVar2;
    unknown uVar5;

    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HETR_01" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HETR_BROKE" )))
    {
        CLEAR_HELP();
    }
    if (l_U280)
    {
        SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U447 );
        if (IS_PLAYER_PLAYING( sub_1490() ))
        {
            SET_PLAYER_CONTROL( sub_1490(), 1 );
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_1490(), 1 );
        }
        sub_18899();
        l_U280 = 0;
    }
    for ( l_U448 = 0; l_U448 < 5; l_U448++ )
    {
        if (IS_VEH_DRIVEABLE( l_U326[l_U448] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U285[l_U448] )))
            {
                if (IS_CHAR_IN_CAR( l_U285[l_U448], l_U326[l_U448] ))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar5 );
                    switch (uVar5)
                    {
                        case 0:
                        vVar2 = {3000.00000000, -800.00000000, 250.00000000};
                        break;
                        case 1:
                        vVar2 = {-3000.00000000, -800.00000000, 250.00000000};
                        break;
                        case 2:
                        vVar2 = {-3000.00000000, 2000.00000000, 250.00000000};
                        break;
                        case 3:
                        vVar2 = {3000.00000000, 2000.00000000, 250.00000000};
                        break;
                        default: break;
                    }
                    TASK_HELI_MISSION( l_U285[l_U448], l_U326[l_U448], 0, 0, vVar2.x, vVar2.y, vVar2.z, 4, 15.00000000, 10, -1, (ROUND( vVar2.z )) + 1, 60 );
                    for ( l_U449 = 0; l_U449 < 3; l_U449++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U291[l_U448][l_U449] )))
                        {
                            if (IS_CHAR_IN_CAR( l_U291[l_U448][l_U449], l_U326[l_U448] ))
                            {
                                TASK_STAND_STILL( l_U291[l_U448][l_U449], -2 );
                                SET_CHAR_KEEP_TASK( l_U291[l_U448][l_U449], 1 );
                            }
                        }
                    }
                    SET_CHAR_KEEP_TASK( l_U285[l_U448], 1 );
                }
            }
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U285[l_U448] );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U326[l_U448] );
        REMOVE_CAR_RECORDING( l_U452[l_U448] );
        for ( l_U449 = 0; l_U449 < 3; l_U449++ )
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291[l_U448][l_U449] );
        }
    }
    for ( l_U448 = 0; l_U448 < 5; l_U448++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U316[l_U448] );
    }
    for ( l_U448 = 0; l_U448 < 3; l_U448++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U312[l_U448] );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U322 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U325 );
    REMOVE_BLIP( l_U333 );
    REMOVE_BLIP( l_U334 );
    CLEAR_SEQUENCE_TASK( l_U323 );
    REMOVE_CAR_RECORDING( l_U451 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U282 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U283 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U284 );
    REMOVE_ANIMS( l_U541 );
    TERMINATE_THIS_SCRIPT();
    return;
}