void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
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
    l_U369 = 0;
    l_U373 = 0.00000000;
    l_U375 = 0;
    l_U376 = 0;
    l_U377 = 0;
    l_U378 = 0;
    l_U379 = 0;
    l_U380 = 1;
    l_U381 = 0;
    l_U382 = 0;
    l_U383 = 0;
    l_U385 = 0;
    l_U386 = 0;
    l_U387 = 0;
    l_U388 = 0;
    l_U389 = 1;
    l_U390 = 0;
    l_U417 = 0;
    l_U421 = 0;
    l_U422 = -1;
    l_U423 = 1;
    l_U424 = "NONE";
    l_U451 = 0;
    l_U452 = 0;
    l_U453 = {0.00000000, 0.00000000, 0.00000000};
    l_U456 = 0.00000000;
    l_U457 = nil;
    l_U458 = 0;
    l_U459 = nil;
    l_U460 = nil;
    l_U461 = 0;
    l_U462 = 0;
    l_U463 = 0;
    l_U464 = 0;
    l_U471 = 0;
    l_U472 = 0;
    l_U500 = g_U23;
    l_U501 = 0;
    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 12;
    l_U507 = 0;
    l_U512 = 0;
    l_U514 = -1;
    l_U515 = 4;
    l_U536 = 0;
    l_U548 = 0;
    l_U549 = 0;
    l_U554 = 0;
    l_U555 = "";
    l_U556 = 0;
    l_U569 = 0;
    l_U573 = 0;
    l_U574 = 1;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = "JOHNNY";
    l_U605 = 0.00000000;
    l_U609 = 0;
    l_U610 = 0;
    l_U639 = 0;
    l_U640 = -1;
    l_U1107 = 0;
    l_U1108 = 0;
    l_U1109 = -1;
    l_U1110 = 0;
    l_U1111 = 0;
    l_U1173 = 0.00000000;
    l_U1174 = 0;
    l_U1175 = nil;
    l_U1176 = 0;
    l_U1177 = 0;
    l_U1178 = 22;
    l_U1179 = 0;
    l_U1180 = 0;
    l_U1181 = 22;
    l_U1182 = 8;
    l_U1183 = 22;
    l_U1184 = 22;
    l_U1185 = 0;
    l_U1186 = 0;
    l_U1187 = 0;
    l_U1188 = -1;
    l_U1196 = 0;
    l_U1197 = 0;
    l_U1198 = 0;
    l_U1199 = 22;
    l_U1200 = 0;
    l_U1201 = 0;
    l_U1202 = 0;
    l_U1203 = 0;
    l_U1204 = 0;
    l_U1205 = 0;
    l_U1206 = 0;
    l_U1207 = 0;
    l_U1210 = 0;
    l_U1211 = 0;
    l_U1235 = -1;
    l_U1236 = 0;
    l_U1241 = 0;
    l_U1242 = -1;
    l_U1243 = 0;
    l_U1244 = 0;
    l_U1249 = 1;
    l_U1250 = 1;
    l_U1375 = 8;
    l_U1376 = 0;
    l_U1377 = 0;
    sub_996();
    sub_1358();
    sub_3133();
    sub_3613();
    l_U516 = 0;
    l_U1376 = 0;
    while (NOT l_U507)
    {
        if (NOT sub_4111())
        {
            sub_5181( "JimStrip: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        sub_166552();
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "******************** JIM STRIP CLUB DEATHARREST\n" );
        PRINTNL();
        sub_12779();
    }
    WAIT( 0 );
    while (sub_4111())
    {
        sub_166552();
        WAIT( 0 );
    }
    PRINTSTRING( "quitting JIM STRIP CLUB without PASS or FAIL\n" );
    sub_12779();
    sub_30714( "JIM STRIP CLUB: should never reach ENDSCRIPT" );
    return;
}

void sub_996()
{
    sub_1005();
    sub_1297();
    sub_1321();
    l_U501 = 1;
    l_U502 = 0;
    return;
}

void sub_1005()
{
    l_U501 = 0;
    l_U502 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 12;
    l_U507 = 0;
    l_U609 = 0;
    sub_1056();
    return;
}

void sub_1056()
{
    l_U521._fU0 = 1;
    l_U521._fU4 = 0;
    l_U521._fU8 = 0;
    l_U521._fU12 = 0;
    l_U521._fU16 = 1;
    l_U521._fU20 = 0;
    l_U521._fU24 = 0;
    l_U521._fU28 = 0;
    l_U521._fU32 = 0;
    l_U521._fU36 = 0;
    l_U521._fU40 = 0;
    l_U521._fU44 = 0;
    l_U521._fU48 = 0;
    l_U521._fU52 = 64537;
    l_U521._fU56 = 64537;
    sub_1203();
    l_U536 = 0;
    return;
}

void sub_1203()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        g_U39174[I] = nil;
    }
    g_U39172 = 0;
    g_U39173 = 0;
    return;
}

void sub_1297()
{
    l_U513 = nil;
    return;
}

void sub_1321()
{
    return;
}

void sub_1358()
{
    int iVar2;
    vector vVar3;
    float fVar6;
    unknown uVar7;

    iVar2 = 1;
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    fVar6 = 0.00000000;
    uVar7 = sub_1397( 0, 14 );
    g_U18635[iVar2]._fU180 = uVar7;
    vVar3 = {g_U10789[uVar7]._fU4};
    fVar6 = g_U10789[uVar7]._fU16;
    sub_2073( vVar3.x, vVar3.y, vVar3.z, fVar6, 1 );
    if (g_U10789[uVar7]._fU20)
    {
        sub_3067( g_U10789[uVar7]._fU24, g_U10789[uVar7]._fU28, g_U10789[uVar7]._fU40 );
    }
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    return;
}

void sub_1397(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[15] iVar8;
    float fVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    float fVar31;
    int iVar32;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 15);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U10789[I]._fU0)
        {
            iVar8[I] = 1;
            iVar7++;
        }
    }
    if (iVar7 == 0)
    {
        return Result;
    }
    if (iVar7 == 1)
    {
        for ( I = iVar4; I <= iVar5; I++ )
        {
            if (iVar8[I])
            {
                return I;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_1568() )))
    {
        fVar24 = 100.00000000 + 20.00000000;
        GET_CHAR_COORDINATES( sub_1568(), ref uVar25._fU0, ref uVar25._fU4, ref uVar25._fU8 );
        for ( I = iVar4; I <= iVar5; I++ )
        {
            if (iVar8[I])
            {
                uVar28 = {g_U10789[I]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar25._fU0, uVar25._fU4, uVar25._fU8, uVar28._fU0, uVar28._fU4, uVar28._fU8, ref fVar31 );
                if (fVar31 < fVar24)
                {
                    iVar8[I] = 0;
                    iVar7--;
                }
            }
        }
        if (iVar7 == 0)
        {
            return Result;
        }
        if (iVar7 == 1)
        {
            for ( I = iVar4; I <= iVar5; I++ )
            {
                if (iVar8[I])
                {
                    return I;
                }
            }
        }
    }
    iVar32 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar32 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar32 == 0)
            {
                return I;
            }
            iVar32--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Pickup_Point: code should never reach this point" );
    return Result;
}

void sub_1568()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2073(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;
    unknown uVar8;

    # -sub_C1FFC0-0xc214c8( 0, ref l_U391 );
    iVar7 = 1;
    uVar8 = sub_2099( 0, 0 );
    g_U18635[iVar7]._fU184 = uVar8;
    l_U475 = {g_U10767[uVar8]._fU4};
    l_U478 = {g_U10767[uVar8]._fU16};
    sub_2496( uParam0, uParam1, uParam2, uParam3 );
    l_U473 = nil;
    l_U474 = nil;
    l_U481 = nil;
    sub_2562( g_U20751[iVar7] );
    sub_2593( 1 );
    sub_2796( l_U424, l_U424, l_U424, l_U424 );
    return;
}

void sub_2099(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[3] iVar8;
    int iVar12;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 3);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U10767[I]._fU0)
        {
            iVar8[I] = 1;
            iVar7++;
        }
    }
    if (iVar7 == 0)
    {
        return Result;
    }
    if (iVar7 == 1)
    {
        for ( I = iVar4; I <= iVar5; I++ )
        {
            if (iVar8[I])
            {
                return I;
            }
        }
    }
    iVar12 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar12 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar12 == 0)
            {
                return I;
            }
            iVar12--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Dropoff_Point: code should never reach this point" );
    return Result;
}

void sub_2496(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U370 = {uParam0, uParam1, uParam2};
    l_U373 = uParam3;
    return;
}

void sub_2562(unknown uParam0)
{
    l_U385 = 1;
    l_U384 = uParam0;
    return;
}

void sub_2593(boolean bParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( l_U374 )))
    {
        ADD_BLIP_FOR_CONTACT( l_U370._fU0, l_U370._fU4, l_U370._fU8, ref l_U374 );
        CHANGE_BLIP_DISPLAY( l_U374, 2 );
        CHANGE_BLIP_PRIORITY( l_U374, 1 );
        if (l_U385)
        {
            CHANGE_BLIP_SPRITE( l_U374, l_U384 );
            if (bParam0)
            {
                iVar3 = 0;
                GET_GAME_TIMER( ref iVar3 );
                CHANGE_BLIP_PRIORITY( l_U374, l_U4 );
                FLASH_BLIP( l_U374, 1 );
                l_U386 = iVar3 + 10000;
                l_U387 = 1;
            }
        }
    }
    return;
}

void sub_2796(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( ref l_U425._fU0, uParam0, 32 );
    StrCopy( ref l_U425._fU32, uParam1, 16 );
    StrCopy( ref l_U425._fU48, uParam2, 16 );
    StrCopy( ref l_U425._fU64, uParam3, 16 );
    l_U425._fU80 = 0;
    l_U425._fU84 = 0;
    l_U425._fU88 = 0;
    l_U425._fU92 = 0;
    l_U425._fU100 = 1;
    l_U425._fU96 = 1;
    if (COMPARE_STRING( uParam0, l_U424 ))
    {
        l_U425._fU96 = 0;
    }
    sub_2940();
    return;
}

void sub_2940()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref iVar3 );
    l_U425._fU84 = iVar2 + iVar3;
    return;
}

void sub_3067(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U451 = 1;
    l_U452 = uParam0;
    l_U453 = {uParam1};
    l_U456 = uParam4;
    return;
}

void sub_3133()
{
    sub_3142();
    return;
}

void sub_3142()
{
    sub_3151();
    sub_3218( 0, "FAjmA_1" );
    sub_3218( 1, "FAjmB_1" );
    sub_3218( 2, "FAlmH" );
    sub_3299( "E1FCJ3A" );
    sub_3420( 0, sub_1568(), "JOHNNY", 0 );
    StrCopy( ref l_U411, "JIM", 16 );
    l_U415 = 1;
    l_U416 = 1;
    g_U39119 = 0;
    return;
}

void sub_3151()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        StrCopy( ref l_U392[I], "", 16 );
    }
    return;
}

void sub_3218(int iParam0, unknown uParam1)
{
    if (iParam0 >= 3)
    {
        return;
    }
    StrCopy( ref l_U392[iParam0], uParam1, 16 );
    return;
}

void sub_3299(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_3316();
    return;
}

void sub_3316()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_3420(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3500( "\n PED NUMBER ", uParam0 );
    sub_3540( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3500(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3540(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3613()
{
    sub_3622();
    if ((NOT g_U15728[8]) AND (NOT g_U18635[1]._fU4))
    {
        sub_3782( 1 );
    }
    if ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_gun_car" )) > 0)) AND (NOT g_U18635[6]._fU4))
    {
        sub_3782( 6 );
    }
    if ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)) AND (NOT g_U18635[7]._fU4))
    {
        sub_3782( 7 );
    }
    return;
}

void sub_3622()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        g_U38847[I]._fU0 = 0;
        g_U38847[I]._fU4 = 0;
        if (DOES_BLIP_EXIST( g_U38847[I]._fU8 ))
        {
            REMOVE_BLIP( g_U38847[I]._fU8 );
        }
        g_U38847[I]._fU8 = nil;
    }
    return;
}

void sub_3782(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_3793( uParam0 );
    if (iVar3 == 3)
    {
        SCRIPT_ASSERT( "Minigames_Set_Biker_Friend_Active: Unknown Biker Friend Phone Contact ID" );
        return;
    }
    g_U38847[iVar3]._fU0 = 1;
    return;
}

int sub_3793(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 6: return 1;
        case 7: return 2;
    }
    return 3;
}

int sub_4111()
{
    boolean bVar2;

    if ((l_U507) AND (IS_KEYBOARD_KEY_PRESSED( 31 )))
    {
        l_U515 = 1;
        sub_4145();
        return 0;
    }
    if ((l_U507) AND (IS_KEYBOARD_KEY_PRESSED( 33 )))
    {
        l_U506 = 11;
        sub_22384();
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4214() )))
    {
        return 1;
    }
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 12;
    l_U1197 = 0;
    switch (l_U501)
    {
        case 0:
        sub_30714( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_33220();
        break;
        case 2:
        sub_66285();
        break;
        case 3:
        sub_69641();
        break;
        case 4:
        sub_71317();
        break;
        case 5:
        sub_75534();
        break;
        case 6:
        l_U504 = 1;
        break;
        default:
        sub_30714( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    if (l_U504)
    {
        sub_4145();
        return 0;
    }
    if (l_U505)
    {
        sub_22384();
        return 0;
    }
    sub_87758();
    if (NOT l_U464)
    {
        bVar2 = sub_87792();
        if (bVar2)
        {
            l_U505 = 1;
            l_U506 = 7;
            sub_22384();
            return 0;
        }
    }
    sub_88706();
    if (l_U464)
    {
        sub_124480();
        sub_4145();
    }
    sub_124617( l_U473 );
    if (NOT (IS_CHAR_DEAD( sub_1568() )))
    {
        sub_138368( ref g_U38857 );
        sub_158369( ref g_U38857 );
    }
    if (l_U1376)
    {
        sub_160478( ref g_U38857 );
    }
    if ((l_U507) AND (g_U15728[22]))
    {
        sub_163408( 0 );
    }
    return 1;
}

void sub_4145()
{
    PRINTSTRING( "******************** JIM STRIP CLUB PASSED\n" );
    PRINTNL();
    CLEAR_WANTED_LEVEL( sub_4214() );
    sub_4257( l_U515 );
    g_U24 = l_U500;
    l_U1377 = 1;
    sub_12779();
    return;
}

void sub_4214()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4257(unknown uParam0)
{
    sub_4268( uParam0 );
    return;
}

void sub_4268(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 1;
    sub_4286();
    sub_4341( uParam0 );
    sub_4370( uParam0 );
    sub_4403( iVar3, iVar4, iVar5 );
    iVar6 = 1;
    uVar7 = g_U18635[iVar6]._fU144;
    sub_12283( iVar6, uVar7 );
    return;
}

void sub_4286()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U1369[I] = 4;
    }
    return;
}

void sub_4341(unknown uParam0)
{
    l_U1369[1] = uParam0;
    return;
}

void sub_4370(unknown uParam0)
{
    l_U1369[0] = uParam0;
    return;
}

void sub_4403(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_4434( iVar5, uParam0, uParam1, uParam2, "Friend_2" );
    return;
}

void sub_4434(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_4530( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_4530( ref cVar9 );
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
            sub_4530( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_4530( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_4530( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_4530( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_5107( uParam0, iVar7 );;;
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
    if (NOT (sub_5576( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_4214() );
    sub_9884();
    bVar28 = true;
    uVar29 = sub_5107( uParam0, iVar7 );
    uVar30 = sub_10526( uParam0 );
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
                sub_10894( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_11328();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_11413( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_11492( uParam0 );
                sub_11665( 0 );
                sub_11807( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_11930();
        }
    }
    if (bParam2)
    {
        sub_11328();
        sub_12029();
        sub_11665( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_11328();
        sub_12081();
        sub_11665( 0 );
        sub_11807( uVar30, 0 );
    }
    sub_12132();
    return;
}

void sub_4530(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_5107(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_5181( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_5181(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_5576(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_5672( uParam1 );
        break;
        case 1:
        bVar8 = sub_6367( uParam1 );
        break;
        case 2:
        bVar8 = sub_7100( uParam1 );
        break;
        case 3:
        bVar8 = sub_7337( uParam1 );
        break;
        case 4:
        bVar8 = sub_7503( uParam1 );
        break;
        case 5:
        bVar8 = sub_7702( uParam1 );
        break;
        case 6:
        bVar8 = sub_7897( uParam1 );
        break;
        case 7:
        bVar8 = sub_8102( uParam1 );
        break;
        case 8:
        bVar8 = sub_8307( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_6715( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_5107( uParam0, uParam1 );
    if (bParam3)
    {
        sub_8593( uVar9, uParam0 );
    }
    return 1;
}

int sub_5672(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5769( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5769( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_5769( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_5769( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5769( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_5769( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_6274( "Contact 1", 1 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6274( "Contact 1", 0 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_5769(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_5780( uParam1 );
    sub_5954( uParam0, 0, uParam2 );
    sub_5954( uParam0, 1, uParam3 );
    sub_5954( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_4286();
    return;
}

void sub_5780(unknown uParam0)
{
    ADD_SCORE( sub_4214(), uParam0 );
    sub_5805( uParam0 );
    return;
}

void sub_5805(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_5181( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_5954(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_6274(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_6367(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5769( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5769( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_5769( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5769( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_5769( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_5769( iVar3, 0, sub_6593(), sub_6859(), 0, 0 );
        break;
        default:
        sub_6274( "Contact 2", 1 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6274( "Contact 2", 0 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6593()
{
    switch (l_U1369[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6715( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_6715(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_6859()
{
    switch (l_U1369[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6715( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_7100(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5769( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5769( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_5769( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5769( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_6274( "Contact 3", 1 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6274( "Contact 3", 0 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7337(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5769( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5769( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_6274( "Friend 4", 1 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6274( "Friend 4", 0 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7503(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5769( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5769( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5769( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_6274( "Contact 5", 1 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6274( "Contact 5", 0 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7702(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5769( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5769( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5769( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_6274( "Contact 6", 1 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6274( "Contact 6", 0 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7897(unknown uParam0)
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
        sub_5769( iVar3, 0, sub_6593(), sub_6859(), 0, 0 );
        break;
        default:
        sub_6274( "Friend 7", 1 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6274( "Friend 7", 0 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8102(unknown uParam0)
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
        sub_5769( iVar3, 0, sub_6593(), sub_6859(), 0, 0 );
        break;
        default:
        sub_6274( "Friend 8", 1 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6274( "Friend 8", 0 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8307(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5769( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_6274( "Contact 9", 1 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6274( "Contact 9", 0 );
        sub_5769( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_8593(int iParam0, int iParam1)
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
    if (sub_8654( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_9372( iParam1 );
    }
    return;
}

int sub_8654(int iParam0, int iParam1)
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
            sub_8794( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_8794(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_8964( 0 );
    return;
}

void sub_8964(boolean bParam0)
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
        sub_9209();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_9209()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_9372(int iParam0)
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
        sub_9603( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_9603( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_9603( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_9603( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_9603( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_9603( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_9603(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_9884()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_9922( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_9922( 1, g_U572[I] )) != 0)
            {
                sub_10208( I );
            }
        }
    }
    if (NOT sub_10374())
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

int sub_9922(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_10208(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_10293( g_U572 - 1 );
    return;
}

void sub_10293(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_10374()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_9922( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_10526(unknown uParam0)
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
    sub_5181( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_10894(unknown uParam0, unknown uParam1)
{
    sub_10913( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_10913(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_11328()
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

int sub_11413(int iParam0, int iParam1)
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

void sub_11492(unknown uParam0)
{
    sub_11501();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_11501()
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

void sub_11665(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_11716( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_11716(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_11807(int iParam0, boolean bParam1)
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

void sub_11930()
{
    sub_11939();
    return;
}

void sub_11939()
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

void sub_12029()
{
    sub_11939();
    return;
}

void sub_12081()
{
    sub_11939();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_12132()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_12154();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_12154()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_12283(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown uVar5;
    int I;
    int iVar7;

    if (g_U0)
    {
        return;
    }
    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar4 = 0;
        break;
        default: return;
    }
    switch (uParam1)
    {
        case 6:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 18:
        case 19:
        case 20:
        case 21: break;
        case 17: return;
    }
    return;
    uVar5 = uParam1;
    if (NOT (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU0), uVar5 )))
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU4), uVar5 ))
    {
        return;
    }
    SET_BIT( 1, uVar5 );
    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        if (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU0), I ))
        {
            if (NOT (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU4), I )))
            {
                return;
            }
        }
    }
    iVar7 = 0;
    if (NOT g_U38801[iVar4]._fU0)
    {
        iVar7 = ProtectedGet(g_U38808[iVar4]._fU8);
        if (iVar7 > 0)
        {
            sub_8794( 3, iVar7 );
            g_U38801[iVar4]._fU0 = 1;
            return;
        }
    }
    return;
    break;
    2;
    1;
    ref g_U38805[iVar4]._fU4;
    1;
    ref g_U38805[iVar4]._fU4;
    break;
}

void sub_12779()
{
    sub_12798( l_U549, l_U1375 );
    sub_15127( l_U473 );
    sub_17069( 0 );
    sub_17978();
    sub_20283();
    sub_20606( 1, 21, l_U507 );
    sub_20770();
    sub_20890();
    if (l_U1377)
    {
        sub_21001( ref l_U473 );
    }
    sub_3622();
    sub_21458();
    g_U2771 = 0;
    if (g_U15728[22])
    {
        sub_21829();
    }
    sub_21886();
    PRINTSTRING( "NOTE:                     ^^^^^^^^^^^^^^^^^^^^^\n" );
    PRINTSTRING( "---------> Always Marking Main Lost as failed for Friend Activities\n" );
    PRINTSTRING( "---------> The stats don't change when passing a friend activity - they are only there to allow them to be checked\n" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_12798(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int I;
    int[22] iVar6;
    boolean bVar29;
    int iVar30;
    boolean bVar31;
    boolean bVar32;
    unknown uVar33;
    int iVar34;

    if (g_U816)
    {
        return;
    }
    switch (uParam1)
    {
        case 4:
        case 5: return;
    }
    iVar4 = 0;
    if (l_U1196 == 0)
    {
        if (bParam0)
        {
            iVar4 = 2;
            sub_12875( iVar4 );
        }
        return;
    }
    I = 0;
    array(ref iVar6, 22);
    for ( I = 0; I < 22; I++ )
    {
        iVar6[I] = 0;
    }
    bVar29 = true;
    if ((l_U1178 < 0) || (l_U1178 >= 22))
    {
        bVar29 = false;
    }
    if (bVar29)
    {
        iVar6[l_U1178] = 1;
    }
    iVar30 = g_U12306[l_U1235]._fU40[1];
    bVar31 = false;
    for ( I = 0; I < l_U1196; I++ )
    {
        if ((l_U1189[I]._fU0 < 22) AND (l_U1189[I]._fU0 >= 0))
        {
            bVar31 = iVar6[l_U1189[I]._fU0];
            sub_13358( I, bVar31 );
            iVar6[l_U1189[I]._fU0] = 1;
        }
    }
    if (IS_PLAYER_PLAYING( sub_4214() ))
    {
        if (bParam0)
        {
            sub_12923( l_U1235, 1, 1 );
        }
    }
    if (l_U1196 == 3)
    {
        sub_12923( l_U1235, 1, 1 );
    }
    if ((l_U1196 == 3) AND (bParam0))
    {
        bVar32 = true;
        for ( I = 0; I < 22; I++ )
        {
            iVar6[I] = 0;
        }
        if (bVar29)
        {
            iVar6[l_U1178] = 1;
        }
        for ( I = 0; I < l_U1196; I++ )
        {
            bVar31 = iVar6[l_U1189[I]._fU0];
            if (bVar31)
            {
                bVar32 = false;
            }
            iVar6[l_U1189[I]._fU0] = 1;
        }
        if (bVar32)
        {
            sub_12923( l_U1235, 1, 1 );
        }
    }
    uVar33 = sub_10526( l_U1235 );
    for ( I = 0; I < l_U1196; I++ )
    {
        sub_12283( uVar33, l_U1189[I]._fU0 );
    }
    if (l_U1211)
    {
        g_U18635[uVar33]._fU172 = 1;
    }
    iVar34 = g_U12306[l_U1235]._fU40[1];
    iVar4 = iVar34 - iVar30;
    if (iVar4 > 0)
    {
        iVar4 *= 75;
        iVar4 = iVar4 / 100;
        if (bParam0)
        {
            iVar4 += 2;
        }
        sub_12875( iVar4 );
    }
    return;
}

void sub_12875(unknown uParam0)
{
    int iVar3;

    iVar3 = 1;
    if (NOT (iVar3 == l_U1235))
    {
        if (g_U38847[0]._fU0)
        {
            sub_12923( iVar3, 1, uParam0 );
        }
    }
    iVar3 = 6;
    if (NOT (iVar3 == l_U1235))
    {
        if (g_U38847[1]._fU0)
        {
            sub_12923( iVar3, 1, uParam0 );
        }
    }
    iVar3 = 7;
    if (NOT (iVar3 == l_U1235))
    {
        if (g_U38847[2]._fU0)
        {
            sub_12923( iVar3, 1, uParam0 );
        }
    }
    return;
}

void sub_12923(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_13358(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;

    if (iParam0 >= l_U1196)
    {
        SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: array pos greater than max activities performed" );
        return;
    }
    uVar4 = l_U1189[iParam0]._fU0;
    uVar5 = l_U1189[iParam0]._fU4;
    iVar6 = 4;
    switch (uVar4)
    {
        case 6:
        iVar6 = sub_13597( uVar5 );
        break;
        case 7:
        iVar6 = sub_13677( uVar5 );
        break;
        case 10:
        iVar6 = sub_13757( uVar5 );
        break;
        case 11:
        iVar6 = sub_13837( uVar5 );
        break;
        case 12:
        iVar6 = sub_13909( uVar5 );
        break;
        case 16:
        iVar6 = sub_13981( uVar5 );
        break;
        case 18:
        iVar6 = sub_14061( uVar5 );
        break;
        case 20:
        iVar6 = sub_14141( uVar5 );
        break;
        case 21:
        iVar6 = sub_14217( uVar5 );
        break;
        case 9:
        iVar6 = sub_14301( uVar5 );
        break;
        default: SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: Unknown phone activity ID" );
    }
    uVar7 = sub_14455( iVar6, uParam1 );
    PRINTSTRING( "KGMSTAT ************* --> ADD ACT: " );
    PRINTINT( iParam0 );
    PRINTNL();
    sub_12923( l_U1235, 1, uVar7 );
    return;
}

int sub_13597(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_13677(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_13757(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_13837(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_13909(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_13981(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_14061(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_14141(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_14217(unknown uParam0)
{
    switch (uParam0)
    {
        case 7:
        case 1:
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_14301(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_14455(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        switch (uParam0)
        {
            case 0: return 5;
            case 1: return 3;
            case 2: return 1;
            case 3: return 0;
        }
        return 0;
    }
    switch (uParam0)
    {
        case 0: return 3;
        case 1: return 1;
        case 2: return 1;
        case 3: return 0;
    }
    return 0;
    return 0;
}

void sub_15127(unknown uParam0)
{
    int iVar3;

    if (l_U1207)
    {
        SET_CAM_ACTIVE( l_U1208, 0 );
        SET_CAM_PROPAGATE( l_U1208, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar3 = 0;
        END_CAM_COMMANDS( ref iVar3 );
        if (NOT (iVar3 == 0))
        {
            SCRIPT_ASSERT( "Camera Scopes should now be 0 when ending camera use" );
        }
        l_U1207 = 0;
    }
    if (l_U1210)
    {
        sub_15288( 1 );
    }
    g_U10509 = 1;
    g_U10648 = 1;
    sub_16737( l_U1178 );
    sub_17023( l_U1235 );
    if (l_U1203)
    {
        g_U10507 = l_U1202;
    }
    return;
}

void sub_15288(unknown uParam0)
{
    int I;

    if ((uParam0) AND (g_U10499))
    {
        sub_15311( 6 );
    }
    else
    {
        sub_15311( 0 );
    }
    sub_15631( -1, 0 );
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 )))
            {
                sub_15631( I, 0 );
            }
        }
    }
    g_U10499 = 0;
    if (IS_CHAR_DEAD( sub_1568() ))
    {
        return;
    }
    sub_16563();
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 )))
            {
                SET_PED_IS_DRUNK( g_U38857[I]._fU0, 0 );
            }
        }
    }
    return;
}

void sub_15311(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    GET_ROOT_CAM( ref uVar3 );
    iVar4 = 0;
    switch (uParam0)
    {
        case 0:
        iVar4 = 0;
        SET_DRUNK_CAM( uVar3, 0.00000000, iVar4 );
        break;
        case 1:
        iVar4 = 300000;
        SET_DRUNK_CAM( uVar3, 0.20000000, iVar4 );
        break;
        case 2:
        iVar4 = 240000;
        SET_DRUNK_CAM( uVar3, 0.30000000, iVar4 );
        break;
        case 3:
        iVar4 = 210000;
        SET_DRUNK_CAM( uVar3, 0.45000000, iVar4 );
        break;
        case 4:
        iVar4 = 180000;
        SET_DRUNK_CAM( uVar3, 0.60000000, iVar4 );
        break;
        case 5:
        iVar4 = 180000;
        SET_DRUNK_CAM( uVar3, 0.70000000, iVar4 );
        break;
        case 6:
        iVar4 = 60000;
        SET_DRUNK_CAM( uVar3, 0.00000000, -iVar4 );
        break;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    l_U1110 = iVar5 + iVar4;
    return;
}

void sub_15631(unknown uParam0, unknown uParam1)
{
    int Result;

    Result = sub_15642( uParam1 );
    if (Result == 0)
    {
        sub_15774( uParam0 );
        return Result;
    }
    sub_15989( uParam0, Result );
    return Result;
}

int sub_15642(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 60000;
        case 2: return 90000;
        case 3: return 120000;
        case 4: return 140000;
        case 5: return 180000;
    }
    return 0;
}

void sub_15774(unknown uParam0)
{
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
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    uVar3 = sub_15785( uParam0 );
    if (IS_CHAR_INJURED( uVar3 ))
    {
        return;
    }
    if (NOT (IS_PED_RAGDOLL( uVar3 )))
    {
        return;
    }
    uVar4 = {sub_15871( uParam0 )};
    if (uVar4._fU20)
    {
        return;
    }
    CREATE_NM_MESSAGE( 0, 79 );
    SEND_NM_MESSAGE( uVar3 );
    SWITCH_PED_TO_ANIMATED( uVar3, 0 );
    return;
}

void sub_15785(int iParam0)
{
    if (iParam0 == -1)
    {
        return sub_1568();
    }
    return g_U38857[iParam0]._fU0;
}

void sub_15871(int iParam0)
{
    unknown Result;
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
    unknown uVar16;
    unknown uVar17;

    if (iParam0 == -1)
    {
        Result = {l_U1112};
    }
    else
    {
        Result = {l_U1127[iParam0]};
    }
    return Result;
}

void sub_15989(int iParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    uVar4 = sub_15785( iParam0 );
    if (IS_CHAR_INJURED( uVar4 ))
    {
        return;
    }
    if (IS_CHAR_IN_ANY_CAR( uVar4 ))
    {
        return;
    }
    iVar5 = uParam1;
    if (iVar5 > 65534)
    {
        iVar5 = 65534;
    }
    SWITCH_PED_TO_RAGDOLL( uVar4, 0, iVar5, 1, 1, 1, 0 );
    if (NOT (IS_PED_RAGDOLL( uVar4 )))
    {
        return;
    }
    CREATE_NM_MESSAGE( 1, 79 );
    SET_NM_MESSAGE_FLOAT( 89, 8.70000000 );
    SET_NM_MESSAGE_FLOAT( 98, 0.60000000 );
    SET_NM_MESSAGE_FLOAT( 81, 8.40000000 );
    SET_NM_MESSAGE_FLOAT( 82, 0.70000000 );
    SET_NM_MESSAGE_INT( 85, 65535 );
    SET_NM_MESSAGE_BOOL( 95, 1 );
    SET_NM_MESSAGE_FLOAT( 101, 0.80000000 );
    SET_NM_MESSAGE_FLOAT( 102, 999.00000000 );
    SET_NM_MESSAGE_FLOAT( 84, 1.40000000 );
    SET_NM_MESSAGE_FLOAT( 83, 1.95000000 );
    SET_NM_MESSAGE_FLOAT( 94, 1.00000000 );
    SET_NM_MESSAGE_FLOAT( 110, 0.00000000 );
    SET_NM_MESSAGE_FLOAT( 111, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 112, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 108, 0.00000000 );
    SET_NM_MESSAGE_FLOAT( 113, 0.60000000 );
    SET_NM_MESSAGE_FLOAT( 109, 0.20000000 );
    SET_NM_MESSAGE_FLOAT( 91, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 93, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 106, -0.30000000 );
    SEND_NM_MESSAGE( uVar4 );
    if (iParam0 == -1)
    {
        GIVE_PLAYER_RAGDOLL_CONTROL( sub_4214(), 1 );
    }
    return;
}

void sub_16563()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar2 );
        SET_VEHICLE_STEER_BIAS( uVar2, 0.00000000 );
    }
    return;
}

void sub_16737(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 65; I++ )
    {
        if (sub_16765( I ))
        {
            if (DOES_BLIP_EXIST( g_U12169[I]._fU4 ))
            {
                sub_16948( ref g_U12169[I]._fU4 );
            }
        }
    }
    return;
}

int sub_16765(int iParam0)
{
    boolean bVar3;
    int iVar4;
    unknown uVar5;

    bVar3 = false;
    iVar4 = 0;
    switch (g_U11583[iParam0]._fU12)
    {
        case 11:
        bVar3 = true;
        break;
        case 8: return 1;
    }
    return 0;
    if (bVar3)
    {
        uVar5 = g_U11583[iParam0]._fU16;
        switch (uVar5)
        {
            case 20:
            case 15: return 0;
        }
        if ((iParam0 == 2) || (iParam0 == 30))
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

void sub_16948(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_17023(unknown uParam0)
{
    return;
}

void sub_17069(boolean bParam0)
{
    sub_17078();
    sub_17273();
    sub_17314();
    sub_17344( 1 );
    REMOVE_DECISION_MAKER( l_U391 );
    if (NOT (COMPARE_STRING( ref l_U425._fU0, l_U424 )))
    {
        REMOVE_ANIMS( ref l_U425._fU0 );
    }
    l_U375 = 0;
    if ((NOT (l_U473 == nil)) AND (NOT (IS_CHAR_DEAD( l_U473 ))))
    {
        if (IS_GROUP_MEMBER( l_U473, sub_17788() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U473 );
        }
        if (bParam0)
        {
            if (IS_CHAR_INJURED( l_U473 ))
            {
                SET_PED_DIES_WHEN_INJURED( l_U473, 1 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U473 );
            }
            else
            {
                DELETE_CHAR( ref l_U473 );
            }
        }
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_17078()
{
    if (g_U38847[0]._fU0)
    {
        sub_17104();
        return;
    }
    sub_17183( ref l_U474 );
    return;
}

void sub_17104()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (DOES_BLIP_EXIST( g_U38847[I]._fU8 ))
            {
                sub_17183( ref g_U38847[I]._fU8 );
            }
        }
    }
    return;
}

void sub_17183(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_17273()
{
    REMOVE_BLIP( l_U374 );
    l_U386 = 0;
    l_U387 = 0;
    return;
}

void sub_17314()
{
    REMOVE_BLIP( l_U481 );
    return;
}

void sub_17344(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_17367( uParam0 ) );
    return;
}

int sub_17367(unknown uParam0)
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
    sub_5181( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_17788()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_17978()
{
    sub_17987();
    sub_18460();
    return;
}

void sub_17987()
{
    int iVar2;

    if (l_U516)
    {
        DELETE_WIDGET_GROUP( l_U517 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U513 );
    if (l_U512)
    {
        SET_CAM_ACTIVE( l_U508[1], 0 );
        SET_CAM_PROPAGATE( l_U508[1], 0 );
        sub_18071();
    }
    if (IS_PLAYER_PLAYING( sub_4214() ))
    {
        SET_PLAYER_CONTROL( sub_4214(), 1 );
    }
    CLEAR_HELP();
    sub_18166();
    iVar2 = 0;
    sub_18312( iVar2 );
    return;
}

void sub_18071()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    SET_USE_HIGHDOF( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    l_U512 = 0;
    return;
}

void sub_18166()
{
    int I;

    g_U26739._fU0 = 19;
    g_U26739._fU4 = 12;
    g_U26739._fU8 = 12;
    g_U26739._fU12 = 12;
    g_U26739._fU16 = 8;
    g_U26739._fU20 = 8;
    g_U26739._fU24 = 0;
    g_U26739._fU28 = 0;
    g_U26739._fU32 = 0;
    g_U26739._fU84 = 0;
    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        g_U26739._fU36[I] = 0;
    }
    return;
}

void sub_18312(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 >= 4) AND (g_U8944 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_18460()
{
    sub_18471( 20, 0 );
    return;
}

void sub_18471(unknown uParam0, unknown uParam1)
{
    g_U11370._fU96[uParam0] = uParam1;
    sub_18495();
    return;
}

void sub_18495()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_18523( 16 );
        if ((sub_18568( 16, iVar3 )) AND (g_U10994[g_U11236[I]._fU0]._fU0))
        {
            sub_18669( ref g_U11236[I]._fU20, g_U11236[I]._fU4, 4, 60 );
        }
        else
        {
            sub_16948( ref g_U11236[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_18523( 14 );
        if ((sub_18568( 14, iVar3 )) AND (g_U10994[g_U11327[I]._fU0]._fU0))
        {
            sub_18669( ref g_U11327[I]._fU20, g_U11327[I]._fU4, 4, 62 );
        }
        else
        {
            sub_16948( ref g_U11327[I]._fU20 );
        }
    }
    for ( I = 0; I < 65; I++ )
    {
        iVar3 = sub_19001( I );
        if ((sub_18568( g_U11583[I]._fU12, iVar3 )) AND (g_U10994[g_U11583[I]._fU28]._fU0))
        {
            sub_18669( ref g_U11583[I]._fU32, g_U11583[I]._fU0, g_U11583[I]._fU24, g_U11583[I]._fU20 );
            sub_19309( I );
        }
        else
        {
            sub_16948( ref g_U11583[I]._fU32 );
            g_U11370._fU584[I] = 0;
        }
    }
    sub_19538();
    return;
}

int sub_18523(unknown uParam0)
{
    if (g_U11370._fU96[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_18568(unknown uParam0, boolean bParam1)
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

void sub_18669(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U2 );
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

int sub_19001(unknown uParam0)
{
    unknown uVar3;

    if (g_U11370._fU320[uParam0])
    {
        return 1;
    }
    if (sub_19043( g_U11583[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_18523( g_U11583[uParam0]._fU12 ))
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

int sub_19043(unknown uParam0)
{
    if (g_U11370._fU192[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_19309(unknown uParam0)
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

void sub_19538()
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
    bVar3 = sub_18523( 16 );
    for ( I = 0; I < 15; I++ )
    {
        sub_19583( g_U11236[I]._fU20, bVar3 );
    }
    bVar3 = sub_18523( 14 );
    for ( I = 0; I < 7; I++ )
    {
        sub_19583( g_U11327[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 65; I++ )
    {
        if ((sub_19001( I )) AND (g_U10994[g_U11583[I]._fU28]._fU0))
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
        bVar3 = sub_19001( I );
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
        sub_19583( g_U11583[I]._fU32, bVar3 );
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
        sub_19583( g_U11005[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_1568() )))
        {
            GET_CHAR_COORDINATES( sub_1568(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 2; I++ )
            {
                if (g_U11005[I]._fU0)
                {
                    fVar11 = sub_20074( uVar7, g_U11005[I]._fU8 );
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
                sub_19583( g_U11005[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_19583(unknown uParam0, boolean bParam1)
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

void sub_20074(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_20283()
{
    sub_20292();
    return;
}

void sub_20292()
{
    sub_20301();
    return;
}

void sub_20301()
{
    g_U12303 = 0;
    if (g_U816)
    {
        sub_20326();
        return;
    }
    sub_20452();
    return;
}

void sub_20326()
{
    if (COMPARE_STRING( ref g_U10987, "FPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_20371();
    return;
}

void sub_20371()
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

void sub_20452()
{
    if (COMPARE_STRING( ref g_U10987, "FPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_20497();
    return;
}

void sub_20497()
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

void sub_20606(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_U816)
    {
        return;
    }
    iVar5 = 300000;
    if (g_U0)
    {
        iVar5 = 30000;
    }
    iVar6 = 60000;
    if (g_U0)
    {
        iVar6 = 20000;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    g_U18635[uParam0]._fU152 = iVar7 + iVar5;
    g_U18635[uParam0]._fU156 = iVar7 + iVar6;
    if (bParam2)
    {
        g_U18635[uParam0]._fU148 = uParam1;
        return;
    }
    g_U18635[uParam0]._fU148 = 22;
    return;
}

void sub_20770()
{
    PRINTSTRING( "..................REMOVE: NULLify BLIP and VEHICLE INDEX\n" );
    if (DOES_BLIP_EXIST( l_U459 ))
    {
        REMOVE_BLIP( l_U459 );
        l_U459 = nil;
    }
    return;
}

void sub_20890()
{
    PRINTSTRING( "..................CLEAR: NULLify BLIP and VEHICLE INDEX\n" );
    l_U460 = nil;
    l_U459 = nil;
    return;
}

void sub_21001(unknown uParam0)
{
    int I;

    if (NOT (IS_PLAYER_PLAYING( sub_4214() )))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            sub_21189( ref g_U38857[I], 1 );
        }
    }
    (uParam0^) = nil;
    return;
}

void sub_21048(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Is_Biker_Friend_Active: Minigame Biker Index out of range" );
        return 0;
    }
    return g_U38847[iParam0]._fU0;
}

void sub_21189(int iParam0, boolean bParam1)
{
    int iVar4;

    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((DOES_CHAR_EXIST( iParam0->_fU0 )) AND (iParam0->_fU0 != sub_1568()))
    {
        DELETE_CHAR( iParam0 + 0 );
    }
    if (DOES_VEHICLE_EXIST( iParam0->_fU4 ))
    {
        if (bParam1)
        {
            iVar4 = nil;
            if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref iVar4 );
            }
            if (iVar4 == iParam0->_fU4)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
            }
            else
            {
                DELETE_CAR( iParam0 + 4 );
            }
        }
        else
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
        }
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

void sub_21458()
{
    sub_21467();
    sub_21618();
    return;
}

void sub_21467()
{
    if (l_U108)
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
    l_U106 = 0;
    l_U105 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_21618()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U109 ))
    {
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 != 1)
        {
            ;
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_PROPAGATE( l_U109, 0 );
            SET_CAM_ACTIVE( l_U109, 0 );
            DESTROY_CAM( l_U109 );
            l_U109 = nil;
            l_U110 = -1;
            l_U122 = 0;
            if (IS_CONTROL_PRESSED( 0, 51 ))
            {
                GET_GAME_TIMER( ref l_U122 );
            }
            else
            {
                l_U122 = 0;
            }
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 1 );
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
        }
        END_CAM_COMMANDS( ref iVar2 );
    }
    return;
}

void sub_21829()
{
    g_U11081[0] = nil;
    g_U11087[0] = nil;
    g_U11081[1] = nil;
    g_U11087[1] = nil;
    return;
}

void sub_21886()
{
    sub_21895();
    return;
}

void sub_21895()
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

void sub_22384()
{
    int iVar2;

    PRINTSTRING( ".................... JIM STRIP CLUB FAILED" );
    iVar2 = 0;
    switch (l_U506)
    {
        case 0:
        case 1:
        case 2:
        iVar2 = sub_22508();
        break;
        case 7:
        sub_28258( l_U473, 1 );
        break;
        case 11:
        PRINTSTRING( ".......................(forced failure)\n" );
        break;
        case 12:
        sub_30714( "Unknown reason for failure" );
        break;
        default: sub_30714( "Unrecognised Fail ID" );
    }
    PRINTNL();
    sub_30918( iVar2 );
    sub_31294();
    l_U1377 = 0;
    sub_12779();
    return;
}

void sub_22508()
{
    int Result;
    int I;

    Result = 0;
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (IS_CHAR_INJURED( g_U38857[I]._fU0 ))
            {
                if (sub_22591( g_U38857[I]._fU0 ))
                {
                    Result = 1;
                }
                switch (I)
                {
                    case 0:
                    sub_22719( Result, g_U38857[I]._fU0 );
                    PRINTSTRING( ".......................(Jim Dead)\n" );
                    break;
                    case 1:
                    sub_27952( Result, g_U38857[I]._fU0 );
                    PRINTSTRING( ".......................(Terry Dead)\n" );
                    break;
                    case 2:
                    sub_28096( Result, g_U38857[I]._fU0 );
                    PRINTSTRING( ".......................(Clay Dead)\n" );
                    break;
                }
            }
        }
    }
    return Result;
}

void sub_22591(unknown uParam0)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_1568() )))
        {
            Result = HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_1568(), 0 );
        }
    }
    return Result;
}

void sub_22719(unknown uParam0, unknown uParam1)
{
    sub_22732( uParam0, uParam1 );
    return;
}

void sub_22732(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 1;
    iVar5 = 1;
    sub_22751( iVar4, uParam1 );
    sub_27558( iVar4, uParam1, iVar5 );
    if (bParam0)
    {
        sub_27678( iVar5 );
    }
    return;
}

void sub_22751(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT g_U18635[uParam0]._fU704._fU0)
    {
        return;
    }
    if (g_U18635[uParam0]._fU704._fU4)
    {
        return;
    }
    uVar4 = sub_22813( uParam0 );
    if (g_U14838[uVar4]._fU80._fU0 == 1)
    {
        sub_23042( uVar4 );
    }
    if (g_U14838[uVar4]._fU0._fU0 == 1)
    {
        sub_27021( uVar4 );
    }
    if (g_U14838[uVar4]._fU160._fU0)
    {
        if (g_U14838[uVar4]._fU160._fU8)
        {
            g_U15862[uParam0]._fU8[0]._fU0[5] = 0;
        }
        g_U14838[uVar4]._fU160._fU108._fU0 = 0;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U18635[uParam0]._fU704._fU4 = 1;
    g_U18635[uParam0]._fU704._fU168 = iVar5 + g_U18635[uParam0]._fU704._fU164;
    g_U18635[uParam0]._fU704._fU184 = uParam1;
    sub_27527( "CONTACT HOSPITALISED\n" );
    return;
}

int sub_22813(unknown uParam0)
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
    sub_5181( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 11;
}

void sub_23042(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14838[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14838[uParam0]._fU80._fU0 = 0;
        sub_23163( uParam0 );
        sub_25156( uParam0, 0 );
        break;
        case 2:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_25442( uParam0, iVar4 );
        break;
        case 3:
        g_U14838[uParam0]._fU80._fU0 = 6;
        sub_25442( uParam0, iVar4 );
        break;
        case 6:
        sub_25442( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_25889( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_5181( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_23163(unknown uParam0)
{
    if ((NOT (g_U14838[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U14838[uParam0]._fU80._fU0 == 1)))
    {
        sub_23220( uParam0 );
        sub_23370( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 1)
    {
        sub_23220( uParam0 );
        sub_23564( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 0)
    {
        sub_23370( uParam0 );
    }
    if ((NOT (g_U14838[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U14838[uParam0]._fU0._fU0 == 1)))
    {
        sub_23220( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 1)
    {
        sub_24388( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        sub_23220( uParam0 );
    }
    return;
}

void sub_23220(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U14838[uParam0]._fU0._fU64 );
    g_U14838[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U14838[uParam0]._fU0._fU68;
    g_U14838[uParam0]._fU0._fU68 = 17;
    CLEAR_BIT( ref g_U10686[uVar3]._fU0, 3 );
    return;
}

void sub_23370(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U14838[uParam0]._fU80._fU64 );
    g_U14838[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U14838[uParam0]._fU80._fU68;
    g_U14838[uParam0]._fU80._fU68 = 17;
    CLEAR_BIT( ref g_U10686[uVar3]._fU0, 3 );
    return;
}

void sub_23564(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_23370( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10685;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14838[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14838[uParam0]._fU80._fU4;
        iVar8 = sub_5107( uParam0, iVar7 );
        iVar9 = g_U20913[iVar8]._fU16;
        vVar3 = {g_U10686[iVar9]._fU4};
        uVar6 = g_U10686[iVar9]._fU16;
        bVar10 = true;
        g_U14838[uParam0]._fU80._fU68 = iVar9;
        SET_BIT( ref g_U10686[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_5181( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14838[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14838[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U3 );
        if ((NOT g_U26737._fU4) || (NOT g_U14838[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14838[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U14838[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U4 );
        sub_24246( g_U14838[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_24246(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    return;
}

void sub_24388(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_23220( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10685;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14838[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14838[uParam0]._fU0._fU4;
        iVar8 = sub_5107( uParam0, iVar7 );
        iVar9 = g_U20913[iVar8]._fU16;
        vVar3 = {g_U10686[iVar9]._fU4};
        uVar6 = g_U10686[iVar9]._fU16;
        bVar10 = true;
        g_U14838[uParam0]._fU0._fU68 = iVar9;
        SET_BIT( ref g_U10686[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_5181( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14838[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14838[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U3 );
        if ((NOT g_U26737._fU4) || (NOT g_U14838[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14838[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U4 );
        if (l_U1250)
        {
            FLASH_BLIP( g_U14838[uParam0]._fU0._fU64, 1 );
            l_U1250 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U14838[uParam0]._fU0._fU64, 1 );
            l_U1250 = 1;
        }
        sub_24246( g_U14838[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_25156(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U14838[uParam0]._fU80._fU64 );
        }
    }
    g_U14838[uParam0]._fU80._fU0 = 0;
    g_U14838[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U14838[uParam0]._fU80._fU24, "", 32 );
    g_U14838[uParam0]._fU80._fU56 = 10;
    g_U14838[uParam0]._fU80._fU60 = nil;
    g_U14838[uParam0]._fU80._fU64 = nil;
    g_U14838[uParam0]._fU80._fU68 = 17;
    g_U14838[uParam0]._fU80._fU72 = 1;
    g_U14838[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_25442(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU80._fU24 );
        sub_25156( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU0._fU24 );
    sub_25580( uParam0, 0 );;
    sub_23163( uParam0 );
    return;
}

void sub_25580(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U14838[uParam0]._fU0._fU64 );
        }
    }
    g_U14838[uParam0]._fU0._fU0 = 0;
    g_U14838[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U14838[uParam0]._fU0._fU24, "", 32 );
    g_U14838[uParam0]._fU0._fU56 = 10;
    g_U14838[uParam0]._fU0._fU60 = nil;
    g_U14838[uParam0]._fU0._fU64 = nil;
    g_U14838[uParam0]._fU0._fU68 = 17;
    g_U14838[uParam0]._fU0._fU72 = 1;
    g_U14838[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_25889(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U14838[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U14838[iParam0]._fU80._fU60 );
        }
        sub_25156( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U14838[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U14838[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U14838[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U12306[iParam0]._fU28 = 1;
    }
    sub_25580( iParam0, 0 );
    if (bVar4)
    {
        sub_26098();
    }
    g_U12306[iParam0]._fU12 = 0;;
    if (iParam0 == 9)
    {
        sub_26154();
        return;
    }
    sub_23163( iParam0 );
    if (bVar4)
    {
        g_U12303 = 0;
    }
    if (bVar4)
    {
        sub_26819( iParam0 );
    }
    if (g_U3)
    {
        if (g_U4)
        {
            WAIT( 1500 );
            g_U5 = 1;
        }
    }
    return;
}

void sub_26098()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_26154()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_4214() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
        {
            if (NOT (g_U15852._fU24 == -1))
            {
                uVar3 = g_U26538[g_U15852._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_1568(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15852._fU24;
    sub_26266();
    if (bVar2)
    {
        g_U15852._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref g_U15852._fU32 );
        g_U15852._fU24 = uVar4;
    }
    l_U1249 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_4214(), 0 );
    sub_26421();
    if (IS_PLAYER_PLAYING( sub_4214() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )))
        {
            SET_PLAYER_CONTROL( sub_4214(), 1 );
        }
    }
    return;
}

void sub_26266()
{
    g_U15852._fU0 = 0;
    g_U15852._fU4 = 0;
    g_U15852._fU8 = 0;
    g_U15852._fU12 = 0;
    g_U15852._fU16 = 0;
    g_U15852._fU20 = 0;
    g_U15852._fU24 = -1;
    g_U15852._fU32 = nil;
    g_U15852._fU28 = 0;
    return;
}

void sub_26421()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4214() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_1568() ))
    {
        l_U1249 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_4214(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_1568() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_1568(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_1568(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15852._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U1249)
        {
            return;
        }
        l_U1249 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_4214(), 1 );
    }
    else if (NOT l_U1249)
    {
        return;
    }
    l_U1249 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_4214(), 0 );;
    return;
}

void sub_26819(int iParam0)
{
    if (NOT (g_U20901 == iParam0))
    {
        return;
    }
    g_U20900 = 1;
    return;
}

void sub_27021(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14838[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14838[uParam0]._fU0._fU0 = 0;
        sub_23163( uParam0 );
        sub_25580( uParam0, 0 );
        break;
        case 2:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_25442( uParam0, iVar4 );
        break;
        case 3:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_25442( uParam0, iVar4 );
        break;
        case 6:
        sub_25442( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_25889( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_5181( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_27527(unknown uParam0)
{
    return;
}

void sub_27558(unknown uParam0, int iParam1, unknown uParam2)
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

void sub_27678(unknown uParam0)
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
        sub_5769( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_4530( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_27952(unknown uParam0, unknown uParam1)
{
    sub_27965( uParam0, uParam1 );
    return;
}

void sub_27965(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 6;
    iVar5 = 6;
    sub_22751( iVar4, uParam1 );
    sub_27558( iVar4, uParam1, iVar5 );
    if (bParam0)
    {
        sub_27678( iVar5 );
    }
    return;
}

void sub_28096(unknown uParam0, unknown uParam1)
{
    sub_28109( uParam0, uParam1 );
    return;
}

void sub_28109(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 7;
    iVar5 = 7;
    sub_22751( iVar4, uParam1 );
    sub_27558( iVar4, uParam1, iVar5 );
    if (bParam0)
    {
        sub_27678( iVar5 );
    }
    return;
}

void sub_28258(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = g_U18635[uParam1]._fU104;
    uVar5 = g_U18635[uParam1]._fU136;
    sub_28303( uVar4 );
    sub_28407( uVar4, uParam1, uVar5, 0 );
    uVar6 = sub_22813( uParam1 );
    sub_30446( uVar6 );
    return;
}

void sub_28303(unknown uParam0)
{
    g_U38472._fU12[uParam0]._fU0 = 0;
    g_U38472._fU12[uParam0]._fU4 = 0;
    g_U38472._fU12[uParam0]._fU12 = 22;
    g_U38472._fU12[uParam0]._fU16 = 0;
    g_U38472._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_28407(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 6;
    sub_28432( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_28432(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 19;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_28544( uParam1, uParam2 );
        return;
    }
    if (g_U38472._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U38472._fU12[iParam0]._fU0 = 1;
    g_U38472._fU12[iParam0]._fU4 = 0;
    g_U38472._fU12[iParam0]._fU8 = 0;
    g_U38472._fU12[iParam0]._fU12 = uParam1;
    g_U38472._fU12[iParam0]._fU16 = uParam2;
    g_U38472._fU12[iParam0]._fU20 = iVar9 + iParam3;
    g_U38472._fU12[iParam0]._fU28 = uParam4;
    g_U38472._fU12[iParam0]._fU32 = uParam5;
    sub_30253( iParam0, iParam3 );
    return;
}

void sub_28544(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_28567( uParam0 );
    sub_28814( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_29158( ref uVar4, 1 );
    sub_29186( ref uVar4, 0 );
    sub_29214( ref uVar4, 2 );
    sub_29244( ref uVar4 );
    return;
}

int sub_28567(unknown uParam0)
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
    sub_5181( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_28814(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_28836( uParam0, 0, iParam4 + 0 );
    sub_28836( uParam1, 1, iParam4 + 0 );
    sub_28836( uParam2, 2, iParam4 + 0 );
    sub_28836( uParam3, 3, iParam4 + 0 );
    sub_28836( 0, 4, iParam4 + 0 );
    sub_28836( 1, 5, iParam4 + 0 );
    sub_28836( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_28836(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_29158(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_29186(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_29214(int iParam0, unknown uParam1)
{
    sub_28836( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_29244(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "T1_NAME_", 16 );
    if (g_U94._fU540)
    {
        return 0;
    }
    if ((g_U572[g_U572 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_29314())
        {
            sub_10208( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_29441( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_10208( iVar9 );
    }
    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (g_U572[I]._fU0[0] == -1)
        {
            g_U572[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U572;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_9922( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U94._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U558 == 9)
            {
                g_U94._fU404 = 1016;
            }
            else if (g_U94._fU0 == 1015)
            {
                g_U94._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15728[2] = 1;
        }
        else if ((sub_9922( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_29314()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_9922( 1, g_U572[I] )) != 0) AND (g_U572[I]._fU20))
        {
            sub_10208( I );
            return 1;
        }
    }
    return 0;
}

int sub_29441(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_29506( uParam0, g_U572[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U572;
        }
    }
    return -1;
}

int sub_29506(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_9922( 0, uParam0 );
        if (iVar14 == (sub_9922( 0, uParam6 )))
        {
            iVar15 = sub_9922( 3, uParam0 );
            if (iVar15 == (sub_9922( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_30253(unknown uParam0, int iParam1)
{
    g_U38472._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_30292( iParam1 ))
    {
        g_U38472._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_30292(int iParam0)
{
    int iVar3;

    iVar3 = sub_12154();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_30322();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_30322()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_30446(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = -5;
        break;
        default:
        sub_5181( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_12923( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_12923( uParam0, 0, iVar4 );
    return;
}

void sub_30714(unknown uParam0)
{
    sub_30751( "ERROR: JIM STRIP CLUB: ", uParam0 );
    return;
}

void sub_30751(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_30918(boolean bParam0)
{
    switch (l_U506)
    {
        case 0:
        case 1:
        case 2:
        if (bParam0)
        {
            PRINT_NOW( "FAFUKIL", 7000, 1 );
        }
        else
        {
            PRINT_NOW( "FAFDEAD", 7000, 1 );
        }
        break;
        case 3: break;
        case 4:
        case 5:
        if (bParam0)
        {
            PRINT_NOW( "FAFVKIL", 7000, 1 );
        }
        else
        {
            PRINT_NOW( "FAFVDED", 7000, 1 );
        }
        break;
        case 6:
        PRINT_NOW( "FAFABAN", 7000, 1 );
        break;
        case 9: break;
        case 10: break;
        case 7:
        PRINT_NOW( "BIKELEFT", 7000, 1 );
        break;
        case 8: break;
        case 11:
        PRINT_NOW( "FAFFORC", 7000, 1 );
        break;
        case 12:
        PRINT_NOW( "FAFNONE", 7000, 1 );
        break;
    }
    return;
}

void sub_31294()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int I;
    int[3] iVar6;
    boolean bVar10;
    int iVar11;
    int iVar12;

    if (IS_CHAR_INJURED( sub_1568() ))
    {
        return;
    }
    if (IS_CHAR_IN_ANY_TRAIN( sub_1568() ))
    {
        uVar2 = nil;
        sub_21001( ref uVar2 );
        return;
    }
    uVar3 = nil;
    uVar4 = nil;
    I = 0;
    array(ref iVar6, 3);
    for ( I = 0; I < 3; I++ )
    {
        iVar6[I] = 0;
    }
    bVar10 = false;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar3 );
        for ( I = 0; I < 3; I++ )
        {
            iVar6[I] = 0;
            if (g_U38847[I]._fU0)
            {
                if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
                {
                    if (IS_CHAR_IN_CAR( g_U38857[I]._fU0, uVar3 ))
                    {
                        iVar6[I] = 1;
                        bVar10 = true;
                        OPEN_SEQUENCE_TASK( ref uVar4 );
                        TASK_LEAVE_CAR( 0, uVar3 );
                        TASK_SMART_FLEE_CHAR( 0, sub_1568(), 300.00000000, -2 );
                        CLOSE_SEQUENCE_TASK( uVar4 );
                        TASK_PERFORM_SEQUENCE( g_U38857[I]._fU0, uVar4 );
                        CLEAR_SEQUENCE_TASK( uVar4 );
                    }
                }
            }
        }
        if (bVar10)
        {
            SET_PLAYER_CONTROL( sub_4214(), 0 );
            iVar11 = 0;
            GET_GAME_TIMER( ref iVar11 );
            iVar12 = iVar11 + 3000;
            while (bVar10)
            {
                WAIT( 0 );
                bVar10 = false;
                GET_GAME_TIMER( ref iVar11 );
                if (NOT (IS_CHAR_INJURED( sub_1568() )))
                {
                    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )) || (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1568() )))
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (g_U38847[I]._fU0)
                            {
                                if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
                                {
                                    if (iVar6[I])
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( g_U38857[I]._fU0 ))
                                        {
                                            if (iVar11 > iVar12)
                                            {
                                                OPEN_SEQUENCE_TASK( ref uVar4 );
                                                TASK_LEAVE_ANY_CAR( 0 );
                                                TASK_SMART_FLEE_CHAR( 0, sub_1568(), 300.00000000, -2 );
                                                CLOSE_SEQUENCE_TASK( uVar4 );
                                                TASK_PERFORM_SEQUENCE( g_U38857[I]._fU0, uVar4 );
                                                CLEAR_SEQUENCE_TASK( uVar4 );
                                            }
                                            else
                                            {
                                                bVar10 = true;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (iVar11 > iVar12)
                {
                    bVar10 = false;
                }
            }
            if (IS_PLAYER_PLAYING( sub_4214() ))
            {
                SET_PLAYER_CONTROL( sub_4214(), 1 );
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            REMOVE_BLIP( g_U38847[I]._fU8 );
            if ((NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 ))) AND (NOT iVar6[I]))
            {
                if (NOT g_U38847[I]._fU4)
                {
                    if (NOT (IS_VEH_DRIVEABLE( g_U38857[I]._fU4 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( g_U38857[I]._fU0 ))
                        {
                            if (IS_CHAR_IN_CAR( g_U38857[I]._fU0, g_U38857[I]._fU4 ))
                            {
                                TASK_SMART_FLEE_CHAR( g_U38857[I]._fU0, sub_1568(), 300.00000000, -2 );
                            }
                            else
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U38857[I]._fU0, ref uVar3 );
                                if (IS_VEH_DRIVEABLE( uVar3 ))
                                {
                                    TASK_CAR_MISSION_PED_TARGET( g_U38857[I]._fU0, uVar3, sub_1568(), 8, 40.00000000, 2, 300, 5 );
                                }
                                else
                                {
                                    TASK_SMART_FLEE_CHAR( g_U38857[I]._fU0, sub_1568(), 300.00000000, -2 );
                                }
                            }
                        }
                        else
                        {
                            TASK_SMART_FLEE_CHAR( g_U38857[I]._fU0, sub_1568(), 300.00000000, -2 );
                        }
                    }
                    else if (IS_CHAR_IN_ANY_CAR( g_U38857[I]._fU0 ))
                    {
                        if (IS_CHAR_IN_CAR( g_U38857[I]._fU0, g_U38857[I]._fU4 ))
                        {
                            TASK_CAR_MISSION_PED_TARGET( g_U38857[I]._fU0, g_U38857[I]._fU4, sub_1568(), 8, 40.00000000, 2, 300, 5 );
                        }
                        else
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U38857[I]._fU0, ref uVar3 );
                            if (IS_VEH_DRIVEABLE( uVar3 ))
                            {
                                TASK_CAR_MISSION_PED_TARGET( g_U38857[I]._fU0, uVar3, sub_1568(), 8, 40.00000000, 2, 300, 5 );
                            }
                            else
                            {
                                TASK_SMART_FLEE_CHAR( g_U38857[I]._fU0, sub_1568(), 300.00000000, -2 );
                            }
                        }
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_CAR_3D( g_U38857[I]._fU0, g_U38857[I]._fU4, 30.00000000, 30.00000000, 10.00000000, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar4 );
                        TASK_ENTER_CAR_AS_DRIVER( 0, g_U38857[I]._fU4, -2 );
                        TASK_CAR_MISSION_PED_TARGET( 0, uVar3, sub_1568(), 8, 40.00000000, 2, 300, 5 );
                        CLOSE_SEQUENCE_TASK( uVar4 );
                        TASK_PERFORM_SEQUENCE( g_U38857[I]._fU0, uVar4 );
                        CLEAR_SEQUENCE_TASK( uVar4 );
                    }
                    else
                    {
                        TASK_SMART_FLEE_CHAR( g_U38857[I]._fU0, sub_1568(), 300.00000000, -2 );
                    };;;
                }
            }
            sub_32798( ref g_U38857[I], 1 );
        }
    }
    return;
}

void sub_32798(int iParam0, unknown uParam1)
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

void sub_33220()
{
    l_U520 = 0;
    if (NOT (sub_33242( 1, l_U473, 0 )))
    {
        return;
    }
    if (NOT l_U505)
    {
        sub_55246();
        g_U2771 = 1;
    }
    sub_18166();
    sub_59884( 1, 9 );
    sub_60110( 1 );
    sub_20890();
    sub_66195();
    l_U1376 = 1;
    return;
}

int sub_33242(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    if (l_U502 == 0)
    {
        l_U573 = iVar5 + 3000;
        l_U574 = 0;
        l_U502++;
    }
    if (NOT (iParam1 == nil))
    {
        if ((sub_33314()) || (IS_CHAR_INJURED( iParam1 )))
        {
            l_U505 = 1;
            l_U506 = 0;
            g_U15862[uParam0]._fU8[0]._fU0[2] = 0;
            return 1;
        }
    }
    if (NOT l_U574)
    {
        if (l_U573 < iVar5)
        {
            l_U574 = sub_33509( uParam0 );
            if (NOT l_U574)
            {
                l_U573 = iVar5 + 3000;
            }
        }
    }
    if (l_U502 == 1)
    {
        if (sub_33942( uParam0, bParam2 ))
        {
            l_U502 = 99;
        }
    }
    if (l_U502 == 99)
    {
        l_U501 = 2;
        l_U502 = 0;
        if (NOT bParam2)
        {
            sub_54961( uParam0 );
        }
        g_U15862[uParam0]._fU8[0]._fU0[2] = 0;
        if (NOT (IS_CHAR_DEAD( sub_1568() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1568(), 0 );
        }
        return 1;
    }
    return 0;
}

int sub_33314()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (DOES_CHAR_EXIST( g_U38857[I]._fU0 ))
            {
                if (IS_CHAR_INJURED( g_U38857[I]._fU0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_33509(unknown uParam0)
{
    if ((g_U10493) AND (g_U10495))
    {
        return 1;
    }
    if (g_U18635[uParam0]._fU704._fU4)
    {
        return 1;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    if (NOT g_U10493)
    {
        if (g_U18635[uParam0]._fU144 == 17)
        {
            return 1;
        }
        sub_33619( uParam0 );
        g_U10493 = 1;
        return 1;
    }
    if (NOT g_U10495)
    {
        sub_33761( uParam0 );
        g_U10495 = 1;
        return 1;
    }
    return 1;
}

void sub_33619(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRPICKJm" );
        break;
        case 6:
        PRINT_HELP( "FRPICKTr" );
        break;
        case 7:
        PRINT_HELP( "FRPICKCl" );
        break;
    }
    return;
}

void sub_33761(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRQUITJm" );
        break;
        case 6:
        PRINT_HELP( "FRQUITTr" );
        break;
        case 7:
        PRINT_HELP( "FRQUITCl" );
        break;
    }
    return;
}

int sub_33942(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1: return sub_33986( uParam1 );
        case 6: return sub_54636( uParam1 );
        case 7: return sub_54696( uParam1 );
    }
    sub_5181( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Not a friend" );
    sub_5181( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Should never reach here" );
    return 0;
}

void sub_33986(boolean bParam0)
{
    if (bParam0)
    {
        return sub_34011( 1, ref l_U473, ref l_U474 );
    }
    return sub_44123( 1, ref l_U473, ref l_U474 );
}

int sub_34011(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_4214() )))
    {
        return 0;
    }
    sub_34044( uParam0 );
    sub_34079();
    sub_34409( (uParam1^) );
    sub_35189();
    if (l_U369 == 0)
    {
        sub_35304( uParam0, uParam1 );
        return 0;
    }
    if (l_U369 == 1)
    {
        sub_37157( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U369 == 2)
    {
        sub_38049( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U369 == 3)
    {
        sub_38324();
        return 0;
    }
    if (l_U369 == 4)
    {
        if (sub_38795( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_4214(), 1 );
    g_U18635[uParam0]._fU20 = 1;
    return 1;
}

void sub_34044(unknown uParam0)
{
    l_U376 = g_U18635[uParam0]._fU28;
    return;
}

void sub_34079()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4214() )))
    {
        return;
    }
    if (g_U12303)
    {
        return;
    }
    if (IS_BIT_SET( g_U10959._fU0, 4 ))
    {
        return;
    }
    if (sub_34164() < 20.00000000)
    {
        return;
    }
    if (NOT (GET_CLOSEST_CAR_NODE( l_U370._fU0, l_U370._fU4, l_U370._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 )))
    {
        return;
    }
    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    SET_CHAR_COORDINATES( sub_1568(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    return;
}

void sub_34164()
{
    vector vVar2;
    float Result;

    if (IS_CHAR_DEAD( sub_1568() ))
    {
        return 9999.90000000;
    }
    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    GET_CHAR_COORDINATES( sub_1568(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_DISTANCE_BETWEEN_COORDS_3D( vVar2.x, vVar2.y, vVar2.z, l_U370._fU0, l_U370._fU4, l_U370._fU8, ref Result );
    return Result;
}

void sub_34409(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U425._fU0, l_U424 ))
    {
        return;
    }
    if (NOT l_U425._fU96)
    {
        return;
    }
    sub_34464( uParam0 );
    l_U425._fU80 = l_U369;
    return;
}

void sub_34464(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    boolean bVar9;

    if (l_U369 == 0)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( ref l_U425._fU0 )))
    {
        REQUEST_ANIMS( ref l_U425._fU0 );
        return;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        return;
    }
    GET_SCRIPT_TASK_STATUS( uParam0, 80, ref iVar3 );
    if (iVar3 == 0)
    {
        return;
    }
    bVar4 = iVar3 == 1;
    iVar5 = 0;
    GET_CHAR_HEALTH( uParam0, ref iVar5 );
    if (iVar5 < 200)
    {
        return;
    }
    if (NOT bVar4)
    {
        CLEAR_CHAR_TASKS( uParam0 );
        TASK_PLAY_ANIM( uParam0, ref l_U425._fU32, ref l_U425._fU0, 8.00000000, 1, 0, 0, 0, -2 );
        l_U425._fU88 = 0;
        l_U425._fU92 = 0;
        return;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = 0;
    if ((((l_U425._fU80 == 1) AND (l_U369 == 2)) AND (NOT (COMPARE_STRING( ref l_U425._fU48, l_U424 )))) AND (NOT l_U425._fU88))
    {
        iVar7 = 1;
    }
    bVar8 = false;
    if (l_U425._fU100)
    {
        bVar9 = sub_34763();
        if (NOT bVar9)
        {
            bVar9 = IS_CHAR_ON_FOOT( sub_1568() );
        }
        if (((((l_U425._fU80 == 1) AND (l_U369 == 2)) AND (bVar9)) AND (NOT (COMPARE_STRING( ref l_U425._fU64, l_U424 )))) AND (NOT l_U425._fU92))
        {
            iVar7 = 1;
            bVar8 = true;
        }
    }
    else if (l_U369 == 1)
    {
        l_U425._fU100 = 1;
    }
    if ((iVar6 > l_U425._fU84) || (iVar7))
    {
        CLEAR_CHAR_TASKS( uParam0 );
        if (bVar8)
        {
            TASK_PLAY_ANIM( uParam0, ref l_U425._fU64, ref l_U425._fU0, 8.00000000, 0, 0, 0, 0, -2 );
            l_U425._fU100 = 0;
            l_U425._fU92 = 1;
        }
        else if (NOT (COMPARE_STRING( ref l_U425._fU48, l_U424 )))
        {
            TASK_PLAY_ANIM( uParam0, ref l_U425._fU48, ref l_U425._fU0, 8.00000000, 0, 0, 0, 0, -2 );
        }
        l_U425._fU88 = 1;
        sub_2940();
        return;
    }
    return;
}

boolean sub_34763()
{
    unknown uVar2;
    float fVar3;

    if (IS_CHAR_DEAD( sub_1568() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    return fVar3 > 0.02000000;
}

void sub_35189()
{
    int iVar2;

    if (NOT l_U387)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U386))
    {
        return;
    }
    CHANGE_BLIP_PRIORITY( l_U374, l_U3 );
    FLASH_BLIP( l_U374, 0 );
    l_U386 = 0;
    l_U387 = 0;
    return;
}

void sub_35304(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_34164();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((g_U12303) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        return;
    }
    if (NOT (sub_35367( uParam0 )))
    {
        sub_35406( uParam0 );
        return;
    }
    if (NOT sub_35440())
    {
        return;
    }
    sub_35546( uParam0, uParam1, l_U370._fU0, l_U370._fU4, l_U370._fU8, l_U373 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U391 );
    g_U18635[uParam0]._fU24 = 1;
    sub_3420( l_U415, (uParam1^), ref l_U411, 0 );
    sub_36828( uParam0, (uParam1^) );
    sub_36942();
    l_U369 = 1;
    l_U378 = 0;
    return;
}

void sub_35367(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_17367( uParam0 ) );
}

void sub_35406(unknown uParam0)
{
    REQUEST_MODEL( sub_17367( uParam0 ) );
    return;
}

int sub_35440()
{
    if (NOT l_U451)
    {
        return 1;
    }
    REQUEST_MODEL( l_U452 );
    if (NOT (HAS_MODEL_LOADED( l_U452 )))
    {
        return 0;
    }
    return 1;
}

void sub_35546(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_35557( uParam0 ), sub_17367( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_35664( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_35770( uParam0, (uParam1^) );
    return;
}

int sub_35557(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_35664(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_35770(unknown uParam0, unknown uParam1)
{
    sub_35782( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_35782(unknown uParam0, int iParam1)
{
    sub_35793( uParam0 );
    if (iParam1 == 22)
    {
        sub_35893( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_36552( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_35793(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_35893(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_1568()) AND (g_U15728[19]))
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

void sub_36552(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_35893( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_35893( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_36828(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_36552( uParam1, uParam0, l_U421 );
    CLEAR_CHAR_PROP( uParam1, 0 );
    iVar4 = -1;
    if (NOT (iVar4 == l_U422))
    {
        if (l_U422 == -1)
        {
            CLEAR_CHAR_PROP( uParam1, 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( uParam1, 1, l_U422 );
        }
    }
    ENABLE_PED_HELMET( uParam1, l_U423 );
    return;
}

void sub_36942()
{
    if (NOT l_U451)
    {
        return;
    }
    if (DOES_VEHICLE_EXIST( l_U457 ))
    {
        return;
    }
    CLEAR_AREA( l_U453._fU0, l_U453._fU4, l_U453._fU8, 5.00000000, 0 );
    CREATE_CAR( l_U452, l_U453._fU0, l_U453._fU4, l_U453._fU8, ref l_U457, 1 );
    SET_CAR_HEADING( l_U457, l_U456 );
    SET_CAR_ON_GROUND_PROPERLY( l_U457 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U452 );
    }
    return;
}

void sub_37157(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_34164();
    if (((fVar5 > 100.00000000) || (g_U12303)) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        sub_37210( uParam1 );
        sub_17344( uParam0 );
        sub_37248();
        l_U369 = 0;
        g_U18635[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_1568() )))
    {
        if (sub_37512( sub_1568() ))
        {
            return;
        }
    }
    if (fVar5 < 18.00000000)
    {
        l_U369 = 2;
        if (NOT IS_HINT_RUNNING())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
            {
                GET_CHAR_COORDINATES( (uParam1^), ref l_U418._fU0, ref l_U418._fU4, ref l_U418._fU8 );
                l_U418._fU8 += 1.50000000;
                HINT_CAM( l_U418._fU0, l_U418._fU4, l_U418._fU8, 0, 0, 0, 30000 );
            }
        }
        l_U377 = 0;
        sub_17273();
        sub_37926( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_1568(), -2, 0 );
        return;
    }
    return;
}

void sub_37210(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_37248()
{
    float fVar2;

    if (NOT (DOES_VEHICLE_EXIST( l_U457 )))
    {
        return;
    }
    if (IS_CHAR_INJURED( sub_1568() ))
    {
        return;
    }
    if (IS_CAR_DEAD( l_U457 ))
    {
        return;
    }
    fVar2 = 98.00000000 - 5.00000000;
    if ((IS_CHAR_IN_CAR( sub_1568(), l_U457 )) || (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_1568(), l_U457, fVar2, fVar2, 30.00000000, 0 )))
    {
        sub_37381();
        return;
    }
    DELETE_CAR( ref l_U457 );
    l_U457 = nil;
    return;
}

void sub_37381()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U457 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U457 );
    l_U457 = nil;
    return;
}

int sub_37512(int iParam0)
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
                if (sub_37576( uVar3 ))
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

int sub_37576(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2784))
    {
        return 1;
    }
    return 0;
}

void sub_37926(unknown uParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        return;
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        return;
    }
    ADD_BLIP_FOR_CHAR( uParam0, uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    return;
}

void sub_38049(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_34164();
    if (sub_38071( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_38251( uVar4 ))
    {
        return;
    }
    return;
}

int sub_38071(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_1568() )))
    {
        if (sub_37512( sub_1568() ))
        {
            bVar5 = true;
        }
    }
    if (((NOT g_U12303) AND (NOT (IS_BIT_SET( g_U10959._fU0, 4 )))) AND (NOT bVar5))
    {
        if (fParam0 <= 20.00000000)
        {
            return 0;
        }
    }
    l_U369 = 1;
    CLEAR_HELP();
    sub_17183( uParam1 );
    sub_2593( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    return 1;
}

int sub_38251(float fParam0)
{
    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U369 = 3;
    return 1;
}

void sub_38324()
{
    float fVar2;

    fVar2 = sub_34164();
    if (sub_38342( fVar2 ))
    {
        return;
    }
    if (fVar2 < 5.00000000)
    {
        if (NOT sub_38481())
        {
            return;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
        {
            TASK_LEAVE_ANY_CAR( sub_1568() );
        }
        l_U369 = 4;
    }
    return;
}

int sub_38342(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_1568() )))
    {
        if (sub_37512( sub_1568() ))
        {
            bVar3 = true;
        }
    }
    if (((NOT g_U12303) AND (NOT (IS_BIT_SET( g_U10959._fU0, 4 )))) AND (NOT bVar3))
    {
        if (fParam0 <= 9.00000000)
        {
            return 0;
        }
    }
    l_U369 = 2;
    l_U377 = 0;
    return 1;
}

int sub_38481()
{
    int iVar2;
    unknown uVar3;
    float fVar4;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U471 == 0)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1568() )))
        {
            return 1;
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )))
        {
            return 0;
        }
        SET_PLAYER_CONTROL( sub_4214(), 0 );
        l_U463 = iVar2 + 4000;
        l_U471 = 1;
    }
    if (l_U471 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1568() )))
        {
            l_U471 = 0;
            return 1;
        }
        if (sub_37512( sub_1568() ))
        {
            return 0;
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar4 );
        if ((fVar4 < 0.04000000) || (l_U463 < iVar2))
        {
            SET_PLAYER_CONTROL( sub_4214(), 1 );
            l_U471 = 0;
            return 1;
        }
    }
    return 0;
}

int sub_38795(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    bVar4 = g_U12303;
    if (NOT bVar4)
    {
        if (IS_BIT_SET( g_U10959._fU0, 4 ))
        {
            bVar4 = true;
        }
    }
    if ((NOT l_U375) AND (bVar4))
    {
        l_U369 = 3;
        return 1;
    }
    iVar5 = 0;
    iVar6 = 0;
    if (NOT l_U375)
    {
        GET_GROUP_SIZE( sub_17788(), ref iVar5, ref iVar6 );
        if (iVar6 > 0)
        {
            if (NOT sub_38906())
            {
                sub_5181( "Check_If_Still_Joining_Group: Player has group members, but not Dwayne Backup" );
            }
            sub_39015();
            return 1;
        }
    }
    uVar7 = nil;
    iVar8 = 0;
    iVar9 = 1;
    if (NOT l_U375)
    {
        if (NOT l_U380)
        {
            iVar9 = 3;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar7 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar8 );
            if ((iVar8 < iVar9) || (l_U381))
            {
                TASK_LEAVE_CAR( sub_1568(), uVar7 );
                l_U382 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( (uParam0^), 80, ref iVar10 );
        if ((NOT (iVar10 == 1)) AND (NOT (iVar10 == 7)))
        {
            return 1;
        }
        if (NOT (COMPARE_STRING( ref l_U425._fU0, l_U424 )))
        {
            CLEAR_CHAR_TASKS( (uParam0^) );
            REMOVE_ANIMS( ref l_U425._fU0 );
            l_U425._fU96 = 0;
        }
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        SET_GROUP_MEMBER( sub_17788(), (uParam0^) );
        l_U375 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_39286();
        g_U12303 = 1;
    }
    iVar11 = 0;
    if ((IS_CHAR_IN_ANY_CAR( sub_1568() )) AND (NOT l_U382))
    {
        MODIFY_CHAR_MOVE_STATE( (uParam0^), 2 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar7 );
        if (NOT (IS_CHAR_IN_CAR( (uParam0^), uVar7 )))
        {
            if (NOT (l_U417 == 0))
            {
                iVar12 = 0;
                GET_GAME_TIMER( ref iVar12 );
                if ((l_U417 < iVar12) || (NOT (IS_VEH_DRIVEABLE( uVar7 ))))
                {
                    SET_PLAYER_CONTROL( sub_4214(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U417 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_17788() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_17788(), (uParam0^) );
                }
            }
            else if (sub_34164() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U376)
        {
            sub_39937( l_U416, ref l_U405 );
            iVar11 = sub_22813( l_U416 );
            sub_41927( iVar11 );
        }
        else
        {
            sub_42105( l_U416, ref l_U405 );
        }
        sub_17183( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U376)
    {
        if (l_U383)
        {
            sub_42908( l_U416, ref l_U405 );
        }
        else
        {
            sub_43213( l_U416, ref l_U405 );
        }
        iVar11 = sub_22813( l_U416 );
        sub_41927( iVar11 );
    }
    else if (l_U383)
    {
        sub_43606( l_U416, ref l_U405 );
    }
    else
    {
        sub_43922( l_U416, ref l_U405 );
    }
    if ((IS_HINT_RUNNING()) AND (NOT l_U382))
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_37381();
    return 0;
}

int sub_38906()
{
    return 0;
}

void sub_39015()
{
    return;
}

void sub_39286()
{
    sub_39295();
    sub_39440( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_39514();
    return;
}

void sub_39295()
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

void sub_39440(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_39514()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_9922( 1, g_U572[I] )) == 0)
        {
            sub_10208( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_10374())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

void sub_39937(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_39972( uParam0, uParam1 );
        return;
    }
    if (g_U39119)
    {
        switch (uParam0)
        {
            case 1:
            sub_40031( "E1FCJ3_BLRA", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
            case 6:
            sub_40031( "E1FCT3_LRC", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
            case 7:
            sub_40031( "E1FCC3_LR", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 1:
            sub_40031( "E1FCJ3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
            case 6:
            sub_40031( "E1FCT3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
            case 7:
            sub_40031( "E1FCC3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
        }
    }
    sub_40031( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_39972(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_40031(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_40052( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_40052(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_40106( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_40106(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_40128( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
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
    sub_40816( ref g_U8947, ref l_U6 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_40128(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_40205( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_40205( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_40205( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_40205(unknown uParam0)
{
    return;
}

void sub_40816(int iParam0, int iParam1)
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

void sub_41927(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = 0;
        break;
        default:
        sub_5181( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_12923( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_12923( uParam0, 0, iVar4 );
    return;
}

void sub_42105(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_39972( uParam0, uParam1 );
        return;
    }
    if (IS_CHAR_DEAD( sub_1568() ))
    {
        return;
    }
    if (g_U39119)
    {
        switch (uParam0)
        {
            case 1:
            sub_40031( "E1FCJ3_NLR", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
            case 6:
            sub_40031( "E1FCT3_BNLC", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
            case 7:
            sub_40031( "E1FCC3_NLR", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 1:
            sub_40031( "E1FCJ3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
            case 6:
            sub_40031( "E1FCT3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
            case 7:
            sub_40031( "E1FCC3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
        }
    }
    sub_40031( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_42908(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_MTAL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: MEET AT ACTIVITY - LATE\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_ACTL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: MEET AT ACTIVITY - LATE\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: MEET AT ACTIVITY - LATE\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_43213(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_43248( uParam0, uParam1 );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_43248(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_ANB", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED NOT ON BIKE\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_NB", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED NOT ON BIKE\n" );
        return;
        case 7:
        sub_40031( "PLACEHOLDER", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED NOT ON BIKE\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_43606(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_MTNL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: MEET AT ACTIVITY - NOT LATE\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_NL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: MEET AT ACTIVITY - NOT LATE\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_ANL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: MEET AT ACTIVITY - NOT LATE\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_43922(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_43248( uParam0, uParam1 );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

int sub_44123(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_4214() )))
    {
        return 0;
    }
    sub_34044( uParam0 );
    sub_34079();
    sub_35189();
    if (l_U369 == 0)
    {
        sub_44187( uParam0, uParam1 );
        return 0;
    }
    if (l_U369 == 1)
    {
        sub_48530( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U369 == 2)
    {
        sub_49062( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U369 == 3)
    {
        l_U369 = 2;
    }
    if (l_U369 == 4)
    {
        if (sub_49816( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_4214(), 1 );
    g_U18635[uParam0]._fU20 = 1;
    return 1;
}

void sub_44187(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_34164();
    if (fVar4 > 198.00000000)
    {
        return;
    }
    if ((g_U12303) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        return;
    }
    if ((NOT sub_44248()) || (NOT sub_35440()))
    {
        return;
    }
    sub_36942();
    switch (uParam0)
    {
        case 1:
        (uParam1^) = g_U38857[0]._fU0;
        break;
        case 6:
        (uParam1^) = g_U38857[1]._fU0;
        break;
        case 7:
        (uParam1^) = g_U38857[2]._fU0;
        break;
    }
    g_U18635[uParam0]._fU24 = 1;
    sub_3420( l_U415, (uParam1^), ref l_U411, 0 );
    sub_36828( uParam0, (uParam1^) );
    l_U369 = 1;
    l_U378 = 0;
    return;
}

int sub_44248()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 0;
    if (NOT (sub_44263( 0, ref iVar2, ref uVar3 )))
    {
        return 0;
    }
    if (NOT (sub_44263( 1, ref iVar2, ref uVar3 )))
    {
        return 0;
    }
    if (NOT (sub_44263( 2, ref iVar2, ref uVar3 )))
    {
        return 0;
    }
    return 1;
}

int sub_44263(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (sub_21048( uParam0 )))
    {
        return 1;
    }
    if ((DOES_CHAR_EXIST( g_U38857[uParam0]._fU0 )) AND (DOES_VEHICLE_EXIST( g_U38857[uParam0]._fU4 )))
    {
        if ((uParam1^) == 0)
        {
            (uParam2^) = g_U38857[uParam0]._fU4;
        }
        (uParam1^)++;
        return 1;
    }
    uVar5 = {sub_44379( (uParam1^), (uParam2^) )};
    uVar8 = sub_44626( uParam0 );
    if (NOT (sub_44811( uVar8, uVar5, l_U373, ref g_U38857[uParam0] )))
    {
        return 0;
    }
    if ((uParam1^) == 0)
    {
        (uParam2^) = g_U38857[uParam0]._fU4;
    }
    (uParam1^)++;
    if (IS_CHAR_IN_CAR( g_U38857[uParam0]._fU0, g_U38857[uParam0]._fU4 ))
    {
        LOCK_CAR_DOORS( g_U38857[uParam0]._fU4, 3 );
    }
    return 1;
}

void sub_44379(unknown uParam0, unknown uParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    Result = {l_U370};
    switch (uParam0)
    {
        case 0: break;
        case 1:
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 2.00000000, -3.50000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            Result._fU0 += 2.00000000;
            Result._fU4 -= 3.50000000;
        }
        break;
        case 2:
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, -2.00000000, -3.50000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            Result._fU0 += 2.00000000;
            Result._fU4 -= 3.50000000;
        }
        break;
    }
    return Result;
}

int sub_44626(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 1;
        case 1: return 6;
        case 2: return 7;
    }
    SCRIPT_ASSERT( "Minigames_Return_Biker_Friend_ContactID: Phone Contact ID is not a possible biker friend" );
    return 22;
}

int sub_44811(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if ((NOT (sub_35367( uParam0 ))) || (NOT (HAS_MODEL_LOADED( sub_44830( uParam0 ) ))))
    {
        sub_35406( uParam0 );
        REQUEST_MODEL( sub_44830( uParam0 ) );
        return 0;
    }
    sub_45109( uParam1, uParam4, sub_17367( uParam0 ), sub_44830( uParam0 ), iParam5, 1 );
    sub_46616( iParam5->_fU4, sub_44830( uParam0 ), uParam0 );
    SUPPRESS_CAR_MODEL( sub_44830( uParam0 ) );
    sub_35770( uParam0, iParam5->_fU0 );
    sub_17344( uParam0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_44830( uParam0 ) );
    }
    return 1;
}

int sub_44830(unknown uParam0)
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

void sub_45109(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_45143( vParam0 + (vector( 2.00000000, 0.00000000, 0.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_46568( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_45143(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_45741( sub_45153( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_45869( iParam5 );
    return;
}

void sub_45153(unknown uParam0)
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
        if (((((((uParam0^) == (sub_17367( 0 ))) || ((uParam0^) == (sub_17367( 1 )))) || ((uParam0^) == (sub_17367( 6 )))) || ((uParam0^) == (sub_17367( 7 )))) || ((uParam0^) == (sub_17367( 13 )))) || ((uParam0^) == (sub_17367( 16 ))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_17367( 15 ))) || ((uParam0^) == (sub_17367( 17 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_45741(unknown uParam0)
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

void sub_45869(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_45908( iParam0 + 0 );
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
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_46078( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_46078( iVar3 ) );
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
            sub_46365( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_17367( 6 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_17367( 7 ) ))))
        {
            sub_46365( iParam0 );
        }
    }
    return;
}

void sub_45908(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_45153( ref uVar3 );
    }
    return Result;
}

int sub_46078(unknown uParam0)
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

void sub_46365(int iParam0)
{
    if (l_U143)
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

void sub_46568(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_46616( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_46616(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_48530(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_34164();
    if (((fVar5 > 200.00000000) || (g_U12303)) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        if (g_U12303)
        {
            sub_48593( uParam1 );
        }
        else
        {
            sub_21001( uParam1 );
        }
        sub_37248();
        l_U369 = 0;
        g_U18635[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_1568() )))
    {
        if (sub_37512( sub_1568() ))
        {
            return;
        }
    }
    if (fVar5 < 18.00000000)
    {
        l_U369 = 2;
        l_U377 = 0;
        sub_17273();
        sub_48870();
        TASK_LOOK_AT_CHAR( (uParam1^), sub_1568(), -2, 0 );
        return;
    }
    return;
}

void sub_48593(unknown uParam0)
{
    int I;

    if (NOT (IS_PLAYER_PLAYING( sub_4214() )))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            if (IS_VEH_DRIVEABLE( g_U38857[I]._fU4 ))
            {
                TASK_CAR_MISSION_PED_TARGET( g_U38857[I]._fU0, g_U38857[I]._fU4, sub_1568(), 8, 40.00000000, 2, 300, 5 );
            }
            sub_32798( ref g_U38857[I], 1 );
        }
    }
    (uParam0^) = nil;
    return;
}

void sub_48870()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (DOES_BLIP_EXIST( g_U38847[I]._fU8 )))
            {
                if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
                {
                    sub_37926( g_U38857[I]._fU0, ref g_U38847[I]._fU8 );
                }
            }
        }
    }
    return;
}

void sub_49062(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_34164();
    if (sub_38071( uVar4, uParam0, uParam1 ))
    {
        sub_17104();
        l_U458 = 0;
        return;
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_1568() ))
    {
        PRINT_HELP_FOREVER( ref l_U392[1] );
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_1568() ))
    {
        if (sub_49156())
        {
            return;
        }
    }
    else if (NOT l_U458)
    {
        if (sub_49284())
        {
            sub_49454( l_U416, ref l_U405 );
            l_U458 = 1;
        }
    }
    return;
}

int sub_49156()
{
    unknown uVar2;
    float fVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1568() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if (fVar3 < 18.00000000)
    {
        l_U369 = 4;
        CLEAR_HELP();
        return 1;
    }
    return 0;
}

int sub_49284()
{
    unknown uVar2;
    float fVar3;
    float fVar4;

    if (IS_CHAR_ON_ANY_BIKE( sub_1568() ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
    {
        if (IS_PLAYER_PRESSING_HORN( sub_4214() ))
        {
            return 1;
        }
        uVar2 = nil;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar2 );
        fVar3 = 0.00000000;
        GET_CAR_SPEED( uVar2, ref fVar3 );
        if (fVar3 < 0.01000000)
        {
            return 1;
        }
        return 0;
    }
    fVar4 = sub_34164();
    if (fVar4 < 5.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_49454(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_43248( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_ANB", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED NOT ON BIKE\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_NB", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED NOT ON BIKE\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_NB", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED NOT ON BIKE\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

int sub_49816(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    unknown uVar5;

    bVar4 = g_U12303;
    if (NOT bVar4)
    {
        if (IS_BIT_SET( g_U10959._fU0, 4 ))
        {
            bVar4 = true;
        }
    }
    if ((NOT l_U375) AND (bVar4))
    {
        l_U369 = 2;
        return 1;
    }
    if (NOT l_U375)
    {
        l_U375 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_39286();
        g_U12303 = 1;
    }
    sub_49925();
    if (l_U376)
    {
        sub_39937( l_U416, ref l_U405 );
        uVar5 = sub_22813( l_U416 );
        sub_41927( uVar5 );
    }
    else
    {
        sub_42105( l_U416, ref l_U405 );
    }
    sub_17104();
    sub_51758( sub_1568(), sub_51418( 1 ), (uParam0^), 39 );
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_54450();
    sub_37381();
    return 0;
}

void sub_49925()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int I;

    iVar2 = 0;
    iVar3 = 3;
    iVar4 = 3;
    iVar5 = 3;
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            switch (iVar2)
            {
                case 0:
                iVar3 = I;
                break;
                case 1:
                iVar4 = I;
                break;
                case 2:
                iVar5 = I;
                break;
            }
            iVar2++;
        }
    }
    if (iVar2 == 0)
    {
        return;
    }
    switch (iVar2)
    {
        case 1:
        sub_50110( ref g_U38857[iVar3], sub_1568() );
        sub_50806( ref g_U38857[iVar3], 3 );
        break;
        case 2:
        sub_50110( ref g_U38857[iVar3], sub_1568() );
        sub_50806( ref g_U38857[iVar3], 0 );
        sub_50110( ref g_U38857[iVar4], sub_1568() );
        sub_50806( ref g_U38857[iVar4], 1 );
        break;
        case 3:
        sub_50110( ref g_U38857[iVar3], sub_1568() );
        sub_50806( ref g_U38857[iVar3], 0 );
        sub_50110( ref g_U38857[iVar4], sub_1568() );
        sub_50806( ref g_U38857[iVar4], 1 );
        sub_50110( ref g_U38857[iVar5], g_U38857[iVar3]._fU0 );
        sub_50806( ref g_U38857[iVar5], 1 );
        break;
    }
    return;
}

void sub_50110(int iParam0, int iParam1)
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
                if (sub_50206( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_1568()) AND (iParam1 != sub_1568()))
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
        sub_50691( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_1568())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_50806( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_50806( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_50806( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_50806( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_50806( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_50206(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_50230( uParam0, uParam1 )));
}

boolean sub_50230(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_50691(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_50806(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_1568())
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

void sub_51418(boolean bParam0)
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

void sub_51758(int iParam0, unknown uParam1, int iParam2, int iParam3)
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
        uVar7 = sub_52248( sub_51918( iParam0 ) );
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
        l_U167 = iParam0;
        l_U168 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_52592( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_1568())
            {
                iVar8 = sub_45908( ref iParam0 );
                if ((iVar8 == 1) AND (iParam2 != sub_1568()))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_1568(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_1568(), iParam2, sub_52592( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_1568(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_1568(), iParam0, sub_52592( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((iParam3 == 38) AND (IS_CHAR_MODEL( iParam0, sub_17367( 0 ) )))
            {
                if (l_U172)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_52856( iParam3 ), 1, 1, 2 );
            }
            l_U166 = iParam3;
        }
        GET_GAME_TIMER( ref l_U165 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U170, 2 );
            case 36: SET_BIT( ref l_U170, 1 );
            case 24:
            SET_BIT( ref l_U170, 0 );
            break;
            case 38:
            SET_BIT( ref l_U170, 6 );
            break;
        }
    }
    return Result;
}

void sub_51918(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_51971( uVar3 );
        }
    }
    return Result;
}

void sub_51971(unknown uParam0)
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

void sub_52248(unknown uParam0)
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

void sub_52592(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_52856(unknown uParam0)
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

void sub_54450()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (IS_VEH_DRIVEABLE( g_U38857[I]._fU4 ))
            {
                LOCK_CAR_DOORS( g_U38857[I]._fU4, 1 );
            }
        }
    }
    return;
}

void sub_54636(boolean bParam0)
{
    if (bParam0)
    {
        return sub_34011( 6, ref l_U482, ref l_U483 );
    }
    return sub_44123( 6, ref l_U482, ref l_U483 );
}

void sub_54696(boolean bParam0)
{
    if (bParam0)
    {
        return sub_34011( 7, ref l_U491, ref l_U492 );
    }
    return sub_44123( 7, ref l_U491, ref l_U492 );
}

void sub_54961(unknown uParam0)
{
    if (g_U10494)
    {
        return;
    }
    if (g_U18635[uParam0]._fU704._fU4)
    {
        return;
    }
    if (NOT g_U10494)
    {
        if (sub_55021( uParam0 ))
        {
            g_U10494 = 1;
        }
        return;
    }
    return;
}

int sub_55021(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRLOCJm" );
        break;
        case 6:
        PRINT_HELP( "FRLOCTr" );
        break;
        case 7:
        PRINT_HELP( "FRLOCCl" );
        break;
    }
    return 1;
}

void sub_55246()
{
    vector vVar2;
    vector vVar5;

    SET_MISSION_FLAG( 1 );
    sub_55263();
    l_U507 = 1;
    sub_56051();
    sub_57023( "Jim Friend Activity: Strip CLub" );
    vVar2 = {-1.00000000, -1.00000000, -1.00000000};
    vVar5 = {1.00000000, 1.00000000, 1.00000000};
    vVar2 = {(vector( 16.81840000, 1698.27500000, 1176.32200000)) + vVar2};
    vVar5 = {(vector( 16.81840000, 1698.27500000, 1176.32200000)) + vVar5};
    ADD_SCENARIO_BLOCKING_AREA( vVar2, vVar5 );
    sub_57139( 66 );
    sub_57163();
    sub_59628();
    return;
}

void sub_55263()
{
    sub_55272();
    return;
}

void sub_55272()
{
    int iVar2;

    iVar2 = 1;
    sub_55286( iVar2 );
    return;
}

void sub_55286(unknown uParam0)
{
    unknown uVar3;

    g_U12303 = 1;
    uVar3 = sub_10526( uParam0 );
    sub_55312( uVar3 );
    return;
}

void sub_55312(unknown uParam0)
{
    unknown uVar3;
    char[16] cVar4;

    uVar3 = g_U18635[uParam0]._fU144;
    StrCopy( ref cVar4, "", 16 );
    switch (uVar3)
    {
        case 6:
        StrCopy( ref cVar4, "AIRHOCKEY", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "ARMWRESTLING", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "BOATING", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "BOWLING", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "DARTS", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "DRINKING", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "EATING", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "GANGWAR", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "HANGOUT", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "HELIRIDES", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "HILOCARDS", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "LIFTS", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "POOL", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "RACES", 16 );
        break;
        case 20:
        StrCopy( ref cVar4, "SHOW", 16 );
        break;
        case 21:
        StrCopy( ref cVar4, "STRIPCLUB", 16 );
        break;
        case 22: return;
    }
    SCRIPT_ASSERT( "Flow_Player_Stats_Friend_Activity_Started: Unknown Activity ID" );
    return;
    sub_55859( cVar4 );
    return;
}

void sub_55859(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10987, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U10987 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10987 );
    return;
}

void sub_56051()
{
    int I;
    int[65] iVar3;

    l_U634 = 0;
    I = 0;
    array(ref iVar3, 65);
    for ( I = 0; I < 65; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 65; I++ )
    {
        if (g_U11583[I]._fU12 == 20)
        {
            if (l_U634 >= 2)
            {
                sub_5181( "InfoStripClub: Initialise_StripClub_Destinations: Increase MAX_STRIP_CLUB_DESTINATIONS" );
            }
            l_U611[l_U634]._fU0 = I;
            iVar3[I] = l_U634;
            l_U634++;
        }
    }
    for ( I = 0; I < l_U634; I++ )
    {
        l_U635[I] = 0;
    }
    sub_56388( iVar3[21], 1213.31000000, 1717.37500000, 18.01600000, 0.00000000, 1226.37100000, 1700.91000000, 30.70050000, -41.66920000, 0.00000000, 94.95740000 );
    sub_56388( iVar3[63], -1596.04900000, 19.57230000, 11.44500000, 89.03420000, -1605.50400000, 32.53180000, 15.81510000, -13.81120000, 0.00000000, -126.06430000 );
    for ( I = 0; I < l_U634; I++ )
    {
        if (NOT l_U635[I])
        {
            sub_5181( "InfoStripClub: Initialise_StripClub_Destinations: There is missing additional data - are there new STRIP CLUB Map Blips?" );
        }
    }
    return;
}

void sub_56388(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (iParam0 < 0)
    {
        sub_5181( "InfoStripClub: Store_Additional_StripClub_Info: ID less than 0" );
    }
    if (iParam0 >= l_U634)
    {
        sub_5181( "InfoStripClub: Store_Additional_StripClub_Info: ID out of range" );
    }
    if (l_U635[iParam0])
    {
        sub_5181( "InfoStripClub: Store_Additional_StripClub_Info: Duplicate additional data" );
    }
    l_U611[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U611[iParam0]._fU16 = uParam4;
    l_U611[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U611[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U635[iParam0] = 1;
    return;
}

void sub_57023(unknown uParam0)
{
    return;
}

void sub_57139(unknown uParam0)
{
    g_U2767 = uParam0;
    return;
}

void sub_57163()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (g_U15728[22])
    {
        uVar2 = nil;
        uVar3 = nil;
        uVar4 = nil;
        uVar5 = nil;
        if (g_U38847[1]._fU0)
        {
            uVar2 = g_U38857[1]._fU0;
            uVar4 = g_U38857[1]._fU4;
        }
        if (g_U38847[2]._fU0)
        {
            uVar3 = g_U38857[2]._fU0;
            uVar5 = g_U38857[2]._fU4;
        }
        sub_57295( ref uVar2, ref uVar4, ref uVar3, ref uVar5 );
        sub_59591();
    }
    return;
}

void sub_57295(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        g_U11081[0] = (uParam0^);
        g_U11028[0]._fU0 = (uParam0^);
        g_U11084[0] = (uParam0^);
    }
    if (NOT (IS_CHAR_INJURED( (uParam2^) )))
    {
        g_U11081[1] = (uParam2^);
        g_U11084[1] = (uParam2^);
        g_U11028[1]._fU0 = (uParam2^);
    }
    if (IS_VEH_DRIVEABLE( (uParam1^) ))
    {
        g_U11087[0] = (uParam1^);
        g_U11028[0]._fU4 = (uParam1^);
    }
    if (IS_VEH_DRIVEABLE( (uParam3^) ))
    {
        g_U11087[1] = (uParam3^);
        g_U11028[1]._fU4 = (uParam3^);
    }
    sub_57484();
    sub_57621( 0 );
    sub_57621( 1 );
    sub_58799( 1 );
    sub_59559( 1 );
    return;
}

void sub_57484()
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

void sub_57621(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11081[uParam0] )))
    {
        SET_CHAR_MAX_HEALTH( g_U11081[uParam0], FLOOR( g_U11144[uParam0] ) );
        GET_CHAR_HEALTH( g_U11081[uParam0], ref iVar3 );
        iVar3 += FLOOR( g_U11165[uParam0] );
        SET_CHAR_HEALTH( g_U11081[uParam0], iVar3 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_57760( g_U11147[uParam0], uParam0 ), 30000, 0 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_58414( g_U11147[uParam0], uParam0 ), 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( g_U11081[uParam0], sub_58414( g_U11147[uParam0], uParam0 ), 0 );
        SET_CHAR_ACCURACY( g_U11081[uParam0], FLOOR( g_U11150[uParam0] ) );
        SET_CHAR_SHOOT_RATE( g_U11081[uParam0], FLOOR( g_U11153[uParam0] ) );
        SET_CHAR_FIRE_DAMAGE_MULTIPLIER( g_U11081[uParam0], g_U11156[uParam0] );
    }
    return;
}

int sub_57760(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned PISTOL \n" );
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned EPISODIC_7 \n" );
            return 27;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned UZI \n" );
            return 12;
        }
        break;
        case 1:
        if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned PISTOL \n" );
            return 7;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned EPISODIC 6 \n" );
            return 26;
        }
        break;
    }
    PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - returned default value \n" );
    return 7;
}

int sub_58414(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 27;
        }
        else if (fParam0 < 8.00000000)
        {
            return 12;
        }
        else if (fParam0 < 13.00000000)
        {
            return 14;
        }
        else
        {
            return 15;
        };;;;
        break;
        case 1:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 10;
        }
        else if (fParam0 < 8.00000000)
        {
            return 26;
        }
        else if (fParam0 < 13.00000000)
        {
            return 11;
        }
        else
        {
            return 22;
        };;;;
        break;
    }
    return 7;
}

void sub_58799(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_58831( g_U11081[I], uParam0 );
    }
    return;
}

void sub_58831(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (bParam1)
    {
        if (sub_58847())
        {
            if (NOT sub_58905())
            {
                sub_58948();
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
                sub_59077( ref g_U11028[iVar5], ref g_U11081[iVar5], ref g_U11087[iVar5] );
            }
            else if (IS_PLAYER_PLAYING( sub_4214() ))
            {
                CLEAR_CHAR_TASKS( g_U11028[iVar5]._fU0 );
                sub_50110( ref g_U11028[iVar5], sub_1568() );
                if (g_U11090)
                {
                    sub_59446( ref g_U11028[iVar5], 4 );
                }
            }
            g_U11117[iVar5] = bParam1;
        }
    }
    return;
}

int sub_58847()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_58905()
{
    if (NOT sub_58847())
    {
        return 0;
    }
    return g_U11090;
}

void sub_58948()
{
    g_U11090 = 1;
    return;
}

void sub_59077(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_59142( iParam0 ) ))
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

void sub_59142(int iParam0)
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

void sub_59446(int iParam0, int iParam1)
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

void sub_59559(unknown uParam0)
{
    g_U11100 = uParam0;
    return;
}

void sub_59591()
{
    sub_57621( 0 );
    sub_57621( 1 );
    return;
}

void sub_59628()
{
    if (g_U38847[0]._fU0)
    {
        sub_59655( 1 );
    }
    if (g_U38847[1]._fU0)
    {
        sub_59655( 6 );
    }
    if (g_U38847[2]._fU0)
    {
        sub_59655( 7 );
    }
    return;
}

void sub_59655(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_59666( uParam0 );
    if (iVar3 == 6)
    {
        return;
    }
    g_U39058[iVar3]._fU4 = 1;
    g_U39102 = 1;
    return;
}

int sub_59666(unknown uParam0)
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

void sub_59884(unknown uParam0, unknown uParam1)
{
    sub_59895( uParam0 );
    sub_60028( uParam1 );
    return;
}

void sub_59895(unknown uParam0)
{
    if (NOT (g_U26739._fU0 == 19))
    {
        return;
    }
    if (NOT (sub_59924( uParam0 )))
    {
        return;
    }
    g_U26739._fU0 = uParam0;
    g_U26739._fU8 = 12;
    g_U26739._fU12 = 12;
    return;
}

int sub_59924(int iParam0)
{
    if (iParam0 < 9)
    {
        return 1;
    }
    if (sub_59948( iParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_59948(unknown uParam0)
{
    return 0;
}

void sub_60028(int iParam0)
{
    if (NOT (g_U26739._fU4 == 12))
    {
        return;
    }
    if (iParam0 == 12)
    {
        return;
    }
    if (g_U26739._fU0 == 19)
    {
        return;
    }
    g_U26739._fU4 = iParam0;
    return;
}

void sub_60110(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        l_U1212[I] = 0;
    }
    l_U1178 = g_U18635[uParam0]._fU144;
    sub_60179( uParam0, 6, 1 );
    sub_60179( uParam0, 7, 1 );
    sub_60179( uParam0, 10, 1 );
    sub_60179( uParam0, 11, 1 );
    sub_60179( uParam0, 12, 1 );
    sub_60179( uParam0, 16, 1 );
    sub_60179( uParam0, 18, 1 );
    sub_60179( uParam0, 20, 1 );
    sub_60179( uParam0, 21, 1 );
    sub_60179( uParam0, 9, 0 );
    sub_60586();
    sub_63836();
    sub_64983();
    sub_65816( 3 );
    l_U1180 = 0;
    l_U1235 = sub_22813( uParam0 );
    sub_65867( l_U1178 );
    l_U1185 = 0;
    if (NOT l_U1203)
    {
        l_U1202 = g_U10507;
        g_U10507 = 1;
        l_U1203 = 1;
    }
    return;
}

void sub_60179(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    if (NOT g_U15862[uParam0]._fU8[0]._fU0[iParam1])
    {
        if (NOT (sub_60220( uParam0, iParam1 )))
        {
            return;
        }
    }
    iVar5 = sub_60275( iParam1 );
    if (iVar5 == 12)
    {
        if (NOT (iParam1 == l_U1178))
        {
            l_U1212[iParam1] = uParam2;
        }
        return;
    }
    sub_60465( iVar5, uParam2 );
    return;
}

int sub_60220(unknown uParam0, int iParam1)
{
    if (iParam1 == 16)
    {
        return 1;
    }
    if (iParam1 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_60275(unknown uParam0)
{
    switch (uParam0)
    {
        case 6: return 0;
        case 7: return 1;
        case 8: return 2;
        case 9: return 10;
        case 10: return 3;
        case 15: return 4;
        case 16: return 5;
        case 18: return 6;
        case 20: return 8;
        case 21: return 9;
    }
    return 12;
}

void sub_60465(unknown uParam0, unknown uParam1)
{
    g_U26739._fU36[uParam0] = uParam1;
    return;
}

void sub_60586()
{
    int I;
    int[65] iVar3;

    l_U978 = 0;
    I = 0;
    array(ref iVar3, 65);
    for ( I = 0; I < 65; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 65; I++ )
    {
        if (g_U11583[I]._fU12 == 11)
        {
            if (l_U978 >= 16)
            {
                sub_5181( "InfoEat: Initialise_Eat_Destinations: Increase MAX_EAT_DESTINATIONS" );
            }
            l_U641[l_U978]._fU0 = I;
            iVar3[I] = l_U978;
            l_U978++;
        }
    }
    for ( I = 0; I < l_U978; I++ )
    {
        l_U979[I] = 0;
        l_U996[I] = 0;
    }
    sub_60920( iVar3[0], 1186.03200000, 381.45840000, 25.89440000, 273.88000000, 1175.87300000, 392.51750000, 29.59400000, -13.69880000, 0.00000000, -147.50740000, 1112014848 );
    sub_60920( iVar3[1], 1643.65800000, 245.58400000, 25.50000000, 243.86450000, 1670.37300000, 252.74060000, 27.71511000, 0.69950600, 0.00000000, 130.74310000, 1112014848 );
    sub_60920( iVar3[2], 882.92200000, -473.00300000, 16.30900000, 270.12920000, 876.81410000, -460.09550000, 15.35026000, 11.67727000, -0.00000000, -161.68270000, 1112014848 );
    sub_60920( iVar3[18], 443.42000000, 1526.31400000, 17.50700000, 268.88550000, 423.45340000, 1529.01700000, 34.79707000, -36.57798000, -11.22095000, -114.45570000, 1112014848 );
    sub_60920( iVar3[19], 1096.24500000, 1599.80300000, 18.02700000, 316.12340000, 1108.09200000, 1625.32100000, 21.56322000, -1.15058200, -0.00000000, 174.86560000, 1112014848 );
    sub_60920( iVar3[23], -146.61000000, 72.23300000, 16.02500000, 191.93320000, -172.63120000, 61.32870000, 55.90245000, -51.17967000, -0.00000000, -102.22700000, 1112014848 );
    sub_60920( iVar3[24], -619.91990000, 161.67230000, 6.02700000, 91.38610000, -645.24320000, 125.56240000, 22.66623000, -32.12400000, -0.00000000, -56.49996000, 1112014848 );
    sub_60920( iVar3[25], -174.31000000, 272.46700000, 15.98500000, 90.06450000, -206.20180000, 261.43610000, 35.89857000, -34.11337000, -0.00000000, -46.99197000, 1112014848 );
    sub_60920( iVar3[26], -433.07940000, 1178.45900000, 14.39740000, 91.17450000, -423.18860000, 1174.36700000, 24.29361000, -39.14743000, 6.24956800, 45.26580000, 1112014848 );
    sub_60920( iVar3[27], -136.81900000, -276.97200000, 14.53500000, 179.94550000, -123.23390000, -275.37620000, 12.44489000, 3.61987600, -0.00000000, 92.21399000, 1112014848 );
    sub_60920( iVar3[28], -394.37900000, 250.15800000, 15.55600000, 91.12110000, -410.06970000, 251.82990000, 20.99272000, -11.35220000, 0.00000000, -107.25360000, 1112014848 );
    sub_60920( iVar3[29], 118.72730000, 636.46600000, 16.10430000, 181.62540000, 126.37460000, 628.77320000, 20.18756000, -20.45377000, 0.00000000, 51.15732000, 1112014848 );
    sub_60920( iVar3[30], 33.67200000, 974.29800000, 15.96700000, 0.00000000, 37.68074000, 1005.61400000, 22.87771000, -23.27425000, 0.00000100, 145.58120000, 1112014848 );
    sub_60920( iVar3[51], -1002.54900000, 1604.37000000, 25.21300000, 214.78020000, -992.73790000, 1583.80300000, 36.61912000, -19.68591000, 0.00000100, 26.11061000, 1112014848 );
    sub_60920( iVar3[52], -1250.08700000, 1070.77300000, 21.16600000, 2.24760000, -1258.48500000, 1055.73500000, 25.37512000, -4.82664000, 0.00000000, -37.46955000, 1112014848 );
    sub_60920( iVar3[53], -1155.57900000, 1389.54100000, 25.63000000, 89.35540000, -1173.21800000, 1372.00600000, 22.45787000, 10.71952000, -0.00000000, -29.54759000, 45.00000000 );
    for ( I = 0; I < l_U978; I++ )
    {
        if (NOT l_U979[I])
        {
            sub_5181( "InfoEat: Initialise_Eat_Destinations: There is missing additional data - are there new FOOD Map Blips?" );
        }
    }
    sub_62489( iVar3[0], 1190.88800000, 377.97630000, 22.99430000, 1192.66900000, 380.07240000, 22.80760000, 1199.55100000, 378.34750000, 22.14610000 );
    sub_62489( iVar3[1], 1647.85500000, 237.53700000, 23.59960000, 1650.38400000, 239.51570000, 23.67850000, 1656.71000000, 235.95590000, 24.03360000 );
    sub_62489( iVar3[2], 881.32170000, -478.59920000, 14.02390000, 880.96580000, -476.32940000, 14.03240000, 872.43070000, -476.56120000, 13.75210000 );
    sub_62489( iVar3[18], 440.97420000, 1520.30900000, 15.37440000, 442.17310000, 1522.82200000, 15.23160000, 430.21190000, 1522.47900000, 15.65150000 );
    sub_62489( iVar3[19], 1099.11500000, 1596.27700000, 15.71580000, 1096.33900000, 1596.88800000, 15.71540000, 1089.31000000, 1588.39100000, 15.71540000 );
    sub_62489( iVar3[23], -139.76190000, 72.06730000, 13.75790000, -142.36840000, 73.33570000, 13.75790000, -143.59300000, 83.87050000, 13.75790000 );
    sub_62489( iVar3[24], -618.24940000, 149.04600000, 3.81270000, -619.85540000, 150.61060000, 3.81270000, -628.95990000, 149.64940000, 3.81270000 );
    sub_62489( iVar3[25], -174.20310000, 276.77800000, 13.81320000, -176.70890000, 274.19620000, 13.81320000, -186.13620000, 276.34440000, 13.81860000 );
    sub_62489( iVar3[26], -429.96930000, 1183.50600000, 12.05390000, -427.68120000, 1181.30100000, 12.16880000, -414.22730000, 1183.68000000, 12.81370000 );
    sub_62489( iVar3[27], -140.75110000, -278.08280000, 12.41860000, -139.00030000, -281.15140000, 12.82390000, -140.91290000, -291.95790000, 13.76250000 );
    sub_62489( iVar3[28], -393.03260000, 245.99450000, 13.39040000, -391.13880000, 248.59180000, 13.49290000, -381.94700000, 246.83300000, 13.75370000 );
    sub_62489( iVar3[29], 114.91250000, 640.95900000, 13.71340000, 116.64570000, 639.25250000, 13.71330000, 113.40200000, 629.90410000, 13.66730000 );
    sub_62489( iVar3[30], 29.85950000, 980.51480000, 13.66350000, 32.71410000, 982.65520000, 13.66330000, 30.02770000, 994.23700000, 13.68900000 );
    sub_62489( iVar3[51], -1006.38000000, 1609.67400000, 23.01270000, -1003.73300000, 1607.31800000, 23.01270000, -993.22520000, 1610.06000000, 22.96360000 );
    sub_62489( iVar3[52], -1244.90300000, 1070.48900000, 18.74650000, -1246.81000000, 1067.58300000, 18.70840000, -1245.11300000, 1055.32400000, 18.77390000 );
    sub_62489( iVar3[53], -1157.79600000, 1397.05500000, 23.41630000, -1160.04400000, 1392.25500000, 23.19830000, -1173.15100000, 1393.90200000, 21.29680000 );
    for ( I = 0; I < l_U978; I++ )
    {
        if (NOT l_U996[I])
        {
            sub_5181( "InfoEat: Initialise_Eat_Destinations: There is missing leave immediately data - are there new FOOD Map Blips?" );
        }
    }
    return;
}

void sub_60920(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (iParam0 < 0)
    {
        sub_5181( "InfoEat: Store_Additional_Eat_Info: ID less than 0" );
    }
    if (iParam0 >= l_U978)
    {
        sub_5181( "InfoEat: Store_Additional_Eat_Info: ID out of range" );
    }
    if (l_U979[iParam0])
    {
        sub_5181( "InfoEat: Store_Additional_Eat_Info: Duplicate additional data" );
    }
    l_U641[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U641[iParam0]._fU16 = uParam4;
    l_U641[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U641[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U641[iParam0]._fU44 = uParam11;
    l_U979[iParam0] = 1;
    return;
}

void sub_62489(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0 < 0)
    {
        sub_5181( "InfoEat: Store_Leave_Immediately_Info: ID less than 0" );
    }
    if (iParam0 >= l_U978)
    {
        sub_5181( "InfoEat: Store_Leave_Immediately_Info: ID out of range" );
    }
    if (l_U996[iParam0])
    {
        sub_5181( "InfoEat: Store_Leave_Immediately_Info: Duplicate Leave Immediately data" );
    }
    l_U641[iParam0]._fU48 = {uParam1};
    l_U641[iParam0]._fU60 = {uParam4};
    l_U641[iParam0]._fU72 = {uParam7};
    l_U996[iParam0] = 1;
    return;
}

void sub_63836()
{
    int I;
    int[65] iVar3;

    l_U1081 = 0;
    I = 0;
    array(ref iVar3, 65);
    for ( I = 0; I < 65; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 65; I++ )
    {
        if (g_U11583[I]._fU12 == 8)
        {
            if (l_U1081 >= 6)
            {
                sub_5181( "InfoDrink: Initialise_Drink_Destinations: Increase MAX_DRINK_DESTINATIONS" );
            }
            l_U1014[l_U1081]._fU0 = I;
            iVar3[I] = l_U1081;
            l_U1081++;
        }
    }
    for ( I = 0; I < l_U1081; I++ )
    {
        l_U1082[I] = 0;
    }
    sub_64164( iVar3[3], 920.89200000, -489.48600000, 16.62500000, 359.20360000, 912.35260000, -480.41450000, 19.36200000, -7.81876100, -0.00000000, -137.45620000 );
    sub_64164( iVar3[4], 1157.61500000, 736.30880000, 36.89920000, 264.94570000, 1190.61600000, 721.34830000, 46.09572000, -12.26530000, 0.00000000, 54.47784000 );
    sub_64164( iVar3[31], 118.11700000, 565.07100000, 15.97500000, 181.45510000, 128.69340000, 539.74560000, 20.18760000, -3.03840000, 0.00000000, 43.11860000 );
    sub_64164( iVar3[32], -477.32300000, 1414.07100000, 16.73800000, 270.89310000, -466.49520000, 1426.17700000, 14.79384000, 16.12449000, -0.00000000, 130.86440000 );
    sub_64164( iVar3[54], -1378.11200000, 510.59840000, 13.97960000, 95.79300000, -1382.08400000, 528.18770000, 16.99844000, -11.86755000, -0.00000000, -132.35800000 );
    sub_64164( iVar3[55], -994.40110000, 917.45700000, 15.12010000, 60.82650000, -1013.51600000, 891.85650000, 26.70177000, -7.98437500, -0.00000000, -53.09180000 );
    for ( I = 0; I < l_U1081; I++ )
    {
        if (NOT l_U1082[I])
        {
            sub_5181( "InfoDrink: Initialise_Drink_Destinations: There is missing additional data - are there new DRINK Map Blips?" );
        }
    }
    return;
}

void sub_64164(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (iParam0 < 0)
    {
        sub_5181( "InfoDrink: Store_Additional_Drink_Info: ID less than 0" );
    }
    if (iParam0 >= l_U1081)
    {
        sub_5181( "InfoDrink: Store_Additional_Drink_Info: ID out of range" );
    }
    if (l_U1082[iParam0])
    {
        sub_5181( "InfoDrink: Store_Additional_Drink_Info: Duplicate additional data" );
    }
    l_U1014[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U1014[iParam0]._fU16 = uParam4;
    l_U1014[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U1014[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U1082[iParam0] = 1;
    return;
}

void sub_64983()
{
    int I;
    int[65] iVar3;

    l_U1103 = 0;
    I = 0;
    array(ref iVar3, 65);
    for ( I = 0; I < 65; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 65; I++ )
    {
        if (g_U11583[I]._fU16 == 25)
        {
            if (l_U1103 >= 1)
            {
                sub_5181( "InfoShow: Initialise_Show_Destinations: Increase MAX_SHOW_DESTINATIONS" );
            }
            l_U1090[l_U1103]._fU0 = I;
            iVar3[I] = l_U1103;
            l_U1103++;
        }
    }
    for ( I = 0; I < l_U1103; I++ )
    {
        l_U1104[I] = 0;
    }
    sub_65310( iVar3[44], -352.57100000, 182.69200000, 16.05700000, 0.43160000, -365.76050000, 178.55880000, 17.75000000, 1.22540000, -0.00000000, -86.48420000, 0 );
    for ( I = 0; I < l_U1103; I++ )
    {
        if (NOT l_U1104[I])
        {
            sub_5181( "InfoShow: Initialise_Show_Destinations: There is missing additional data - are there new SHOW Map Blips?" );
        }
    }
    return;
}

void sub_65310(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (iParam0 < 0)
    {
        sub_5181( "InfoShow: Store_Additional_Show_Info: ID less than 0" );
    }
    if (iParam0 >= l_U1103)
    {
        sub_5181( "InfoShow: Store_Additional_Show_Info: ID out of range" );
    }
    if (l_U1104[iParam0])
    {
        sub_5181( "InfoShow: Store_Additional_Show_Info: Duplicate additional data" );
    }
    l_U1090[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U1090[iParam0]._fU16 = uParam4;
    l_U1090[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U1090[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U1090[iParam0]._fU44 = uParam11;
    l_U1104[iParam0] = 1;
    return;
}

void sub_65816(unknown uParam0)
{
    g_U26739._fU32 = uParam0;
    return;
}

void sub_65867(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 65; I++ )
    {
        if (sub_16765( I ))
        {
            if (NOT (sub_65909( I, uParam0 )))
            {
                if (g_U12169[I]._fU0)
                {
                    if (NOT (DOES_BLIP_EXIST( g_U12169[I]._fU4 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( g_U11583[I]._fU32 )))
                        {
                            sub_18669( ref g_U12169[I]._fU4, g_U11583[I]._fU0, g_U11583[I]._fU24, g_U11583[I]._fU20 );
                            SET_BLIP_AS_SHORT_RANGE( g_U12169[I]._fU4, 1 );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_65909(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 12: return g_U11583[uParam0]._fU12 == 11;
        case 11: return g_U11583[uParam0]._fU12 == 8;
    }
    return 0;
}

void sub_66195()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            sub_59446( ref g_U38857[I], 1 );
        }
    }
    return;
}

void sub_66285()
{
    int iVar2;
    int iVar3;

    l_U520 = 0;
    iVar2 = 1;
    iVar3 = 1;
    if (NOT (sub_66315( iVar2, l_U473, iVar3 )))
    {
        l_U1197 = 1;
        sub_68785();
        return;
    }
    return;
}

int sub_66315(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int I;
    int iVar7;
    float fVar8;
    int iVar9;

    if (l_U502 == 0)
    {
        sub_66336();
        l_U502++;
    }
    if (sub_33314())
    {
        l_U505 = 1;
        l_U506 = 0;
        return 1;
    }
    if (l_U548)
    {
        sub_18460();
        l_U501 = 5;
        l_U502 = 0;
        return 1;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    I = 0;
    iVar7 = 0;
    fVar8 = 0.00000000;
    iVar9 = 0;
    if (l_U502 == 1)
    {
        l_U520 = 1;
        sub_66478( uParam0 );
        for ( I = 0; I < 2; I++ )
        {
            if (l_U514 == -1)
            {
                if (sub_67162( I ))
                {
                    iVar7 = l_U611[I]._fU0;
                    iVar9 = g_U11583[iVar7]._fU28 == g_U10999;
                    fVar8 = l_U611[I]._fU4._fU8 + 0.00000000;
                    if (((LOCATE_CHAR_ANY_MEANS_3D( sub_1568(), l_U611[I]._fU4._fU0, l_U611[I]._fU4._fU4, fVar8, 2.50000000, 2.50000000, 2.50000000, iVar9 )) AND (NOT (sub_37512( sub_1568() )))) AND (sub_67373( 1, 1 )))
                    {
                        if ((uParam2) AND (NOT (IS_CHAR_ON_FOOT( sub_1568() ))))
                        {
                            SET_PLAYER_CONTROL( sub_4214(), 0 );
                            if (l_U639 == 0)
                            {
                                l_U639 = iVar5 + 4000;
                            }
                            l_U640 = I;
                            l_U502 = 2;
                            return 0;
                        }
                        if (sub_67882( uParam0 ))
                        {
                            l_U514 = I;
                            l_U502 = 3;
                        }
                    }
                }
            }
        }
    }
    if (l_U502 == 2)
    {
        if ((sub_67882( uParam0 )) || (iVar5 > l_U639))
        {
            l_U514 = l_U640;
            l_U502 = 3;
        }
    }
    if (l_U502 == 3)
    {
        sub_66478( uParam0 );
        if (sub_38481())
        {
            l_U549 = 1;
            l_U502 = 99;
        }
    }
    if (sub_68663())
    {
        l_U502 = 99;
    }
    if (l_U502 == 99)
    {
        l_U501 = 3;
        l_U502 = 0;
        return 1;
    }
    return 0;
}

void sub_66336()
{
    sub_18471( 20, 1 );
    return;
}

void sub_66478(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_66520();
        return;
        case 6:
        sub_66833();
        return;
        case 7:
        sub_66892();
        return;
    }
    sub_5181( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Not a friend" );
    sub_5181( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Should never reach here" );
    return;
}

void sub_66520()
{
    if (g_U38847[0]._fU0)
    {
        sub_66546();
        return;
    }
    sub_66775( l_U473, ref l_U474 );
    return;
}

void sub_66546()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT g_U38847[I]._fU4)
            {
                sub_17183( ref g_U38847[I]._fU8 );
            }
            else
            {
                PRINTSTRING( "---------------------> Being Left, so add blip for friend: " );
                PRINTINT( I );
                PRINTNL();
                sub_37926( g_U38857[I]._fU0, ref g_U38847[I]._fU8 );
            }
        }
    }
    return;
}

void sub_66775(unknown uParam0, unknown uParam1)
{
    if (NOT l_U390)
    {
        sub_17183( uParam1 );
        return;
    }
    sub_37926( uParam0, uParam1 );
    return;
}

void sub_66833()
{
    if (g_U38847[1]._fU0)
    {
        sub_66546();
        return;
    }
    sub_66775( l_U482, ref l_U483 );
    return;
}

void sub_66892()
{
    if (g_U38847[2]._fU0)
    {
        sub_66546();
        return;
    }
    sub_66775( l_U491, ref l_U492 );
    return;
}

int sub_67162(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U611[uParam0]._fU0;
    if (NOT g_U10994[g_U11583[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    if (NOT (sub_19001( uVar3 )))
    {
        return 0;
    }
    return 1;
}

int sub_67373(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar6 );
            if (NOT (IS_CAR_DEAD( uVar6 )))
            {
                GET_CAR_MODEL( uVar6, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    GET_CAR_UPRIGHT_VALUE( uVar6, ref fVar5 );
                    if (fVar5 < 0.80000000)
                    {
                        return 0;
                    }
                    else
                    {
                        bParam1 = false;
                    }
                }
            }
        }
    }
    if (sub_67497( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_67497(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1568()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4214() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4214() )))
    {
        return 0;
    }
    return 1;
}

int sub_67882(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return sub_67924();
        case 6: return sub_68298();
        case 7: return sub_68328();
    }
    sub_5181( "FriendDistribute_GTA4: Friend_Distribute_Check_Friend_Nearby: Not a friend" );
    sub_5181( "FriendDistribute_GTA4: Friend_Distribute_Check_Friend_Nearby: Should never reach here" );
    return 0;
}

void sub_67924()
{
    return sub_67938( l_U473 );
}

int sub_67938(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;
    float fVar9;
    vector vVar10;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 0;
    }
    iVar3 = 0;
    bVar4 = false;
    if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref iVar5 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_1568(), iVar5 )))
        {
            return 0;
        }
        iVar3 = 1;
        if (IS_CHAR_ON_ANY_BIKE( sub_1568() ))
        {
            bVar4 = true;
        }
    }
    iVar6 = 0;
    bVar7 = false;
    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref iVar8 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( uParam0, iVar8 )))
        {
            return 0;
        }
        iVar6 = 1;
        if (IS_CHAR_ON_ANY_BIKE( uParam0 ))
        {
            bVar7 = true;
        }
    }
    if ((iVar3) AND (iVar6))
    {
        if (iVar5 == iVar8)
        {
            return 1;
        }
        if ((NOT bVar4) AND (NOT bVar7))
        {
            return 0;
        }
    }
    fVar9 = 12.00000000;
    if (bVar7)
    {
        fVar9 = l_U124 + 2.00000000;
    }
    vVar10 = {0.00000000, 0.00000000, 0.00000000};
    GET_CHAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1568(), vVar10.x, vVar10.y, vVar10.z, fVar9, fVar9, fVar9, 0 )))
    {
        return 0;
    }
    return 1;
}

void sub_68298()
{
    return sub_67938( l_U482 );
}

void sub_68328()
{
    return sub_67938( l_U491 );
}

int sub_68663()
{
    boolean bVar2;

    bVar2 = g_U26739._fU24;
    if (NOT bVar2)
    {
        return 0;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        return 0;
    }
    return 1;
}

void sub_68785()
{
    if (IS_CHAR_ON_ANY_BIKE( sub_1568() ))
    {
        if (DOES_BLIP_EXIST( l_U459 ))
        {
            REMOVE_BLIP( l_U459 );
            l_U459 = nil;
            PRINTSTRING( "..................MAINTAIN: Player On Bike, Blip Exists - REMOVE BLIP\n" );
        }
        if (l_U460 == nil)
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref l_U460 );
            PRINTSTRING( "..................MAINTAIN: Player On Bike, RECORD VEHICLE INDEX\n" );
        }
        return;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
    {
        l_U460 = nil;
        if (DOES_BLIP_EXIST( l_U459 ))
        {
            REMOVE_BLIP( l_U459 );
            l_U459 = nil;
            PRINTSTRING( "..................MAINTAIN: Player In Car, REMOVE BLIP\n" );
        }
        PRINTSTRING( "..................MAINTAIN: Player In Car, REMOVE VEHICLE INDEX\n" );
        return;
    }
    if (l_U460 == nil)
    {
        return;
    }
    if (NOT (IS_VEH_DRIVEABLE( l_U460 )))
    {
        l_U460 = nil;
        if (DOES_BLIP_EXIST( l_U459 ))
        {
            REMOVE_BLIP( l_U459 );
            l_U459 = nil;
            PRINTSTRING( "..................MAINTAIN: Player Bike Not Driveable, REMOVE BLIP\n" );
        }
        PRINTSTRING( "..................MAINTAIN: Player Bike Not Driveable, REMOVE VEHICLE INDEX\n" );
        return;
    }
    if (NOT (DOES_BLIP_EXIST( l_U459 )))
    {
        ADD_BLIP_FOR_CAR( l_U460, ref l_U459 );
        SET_BLIP_AS_FRIENDLY( l_U459, 1 );
        CHANGE_BLIP_SCALE( l_U459, 0.60000000 );
        PRINTSTRING( "..................MAINTAIN: Player has Driveable Bike, ADD BLIP\n" );
    }
    return;
}

void sub_69641()
{
    boolean bVar2;
    int iVar3;

    bVar2 = true;
    if (l_U514 == -1)
    {
        bVar2 = false;
    }
    l_U520 = 0;
    iVar3 = 1;
    if (l_U502 == 0)
    {
        l_U1376 = 0;
        sub_21458();
        sub_69700();
        sub_20770();
        l_U502++;
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (sub_33314())
        {
            l_U505 = 1;
            l_U506 = 0;
            return;
        }
    }
    if (NOT g_U12304)
    {
        sub_66520();
    }
    else
    {
        sub_17078();
        sub_18460();
    }
    if (l_U502 == 1)
    {
        if (bVar2)
        {
            sub_69978();
        }
        l_U502++;
    }
    if (l_U502 == 2)
    {
        if (bVar2)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref l_U513 );
            }
            TASK_LEAVE_ANY_CAR( sub_1568() );
        }
        l_U502++;
    }
    if (l_U502 == 3)
    {
        if (NOT sub_70997())
        {
            SET_PLAYER_CONTROL( sub_4214(), 1 );
            l_U502++;
        }
    }
    if (l_U502 == 4)
    {
        if (g_U12304)
        {
            sub_17078();
            sub_71112();
            l_U502 = 99;
        }
    }
    if (l_U502 == 99)
    {
        l_U501 = 4;
        l_U502 = 0;
    }
    return;
}

void sub_69700()
{
    int iVar2;

    iVar2 = 0;
    sub_69718( ref l_U465, iVar2 );
    g_U18635[l_U416]._fU892._fU44 = -1;
    return;
}

void sub_69718(int iParam0, unknown uParam1)
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

void sub_69978()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;

    if ((l_U514 < 0) || (l_U514 >= 2))
    {
        sub_30714( "JimStripClub: Play Arrival Speech: Chosen Destination out of range" );
    }
    uVar2 = l_U611[l_U514]._fU0;
    uVar3 = g_U11583[uVar2]._fU16;
    iVar4 = 0;
    sub_69718( ref l_U405, iVar4 );
    sub_3299( "E1FCJ3A" );
    sub_3420( 0, sub_1568(), "JOHNNY", 0 );
    sub_3420( l_U415, l_U473, ref l_U411, 0 );
    switch (uVar3)
    {
        case 28:
        case 29:
        sub_70214( l_U416, ref l_U405 );
        break;
        default:
        sub_30714( "JimStripClub: Play Arrival Speech: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_70214(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_70237( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AST", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: STRIP CLUB\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_ST", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: STRIP CLUB\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AST", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: STRIP CLUB\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_70237(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_ASTD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: STRIP CLUB - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_STD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: STRIP CLUB - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_STD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: STRIP CLUB - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_70997()
{
    if (NOT (IS_CHAR_DEAD( sub_1568() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_71112()
{
    if (sub_21048( 0 ))
    {
        sub_59077( ref g_U38857[0], ref g_U38857[0]._fU0, ref g_U38857[0]._fU4 );
    }
    if (sub_21048( 1 ))
    {
        sub_59077( ref g_U38857[1], ref g_U38857[1]._fU0, ref g_U38857[1]._fU4 );
    }
    if (sub_21048( 2 ))
    {
        sub_59077( ref g_U38857[2], ref g_U38857[2]._fU0, ref g_U38857[2]._fU4 );
    }
    return;
}

void sub_71317()
{
    boolean bVar2;

    bVar2 = true;
    if (l_U514 == -1)
    {
        bVar2 = false;
    }
    l_U520 = 0;
    if (l_U502 == 0)
    {
        l_U502++;
    }
    if (l_U502 == 1)
    {
        if (sub_71386())
        {
            l_U502++;
        }
    }
    if (l_U502 == 2)
    {
        sub_71439();
        sub_72053( 1, 21 );
        if (l_U464)
        {
            l_U502 = 99;
            return;
        }
        sub_73566();
        sub_66520();
        sub_49925();
        l_U502++;
    }
    if (l_U502 == 3)
    {
        if (bVar2)
        {
            sub_73663();
        }
        sub_66520();
        l_U502++;
    }
    if (l_U502 == 4)
    {
        l_U502 = 99;
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (sub_33314())
        {
            l_U505 = 1;
            l_U506 = 0;
            return;
        }
    }
    if (NOT g_U12304)
    {
        sub_68785();
    }
    if (l_U502 == 99)
    {
        sub_74957( 1, 21 );
        l_U1179 = 1;
        sub_75086( 21, l_U1179, g_U26739._fU32 );
        g_U10502 = 1;
        l_U501 = 5;
        l_U502 = 0;
    }
    return;
}

void sub_71386()
{
    return g_U26739._fU28;
}

void sub_71439()
{
    l_U464 = 0;
    l_U1375 = sub_71454();
    switch (l_U1375)
    {
        case 7:
        l_U515 = 1;
        l_U464 = 1;
        sub_71633( "PASS LEVEL: GOOD (Friend stayed behind)" );
        break;
        case 0:
        l_U515 = 1;
        sub_71633( "PASS LEVEL: GOOD" );
        break;
        case 3:
        l_U515 = 3;
        sub_71633( "PASS LEVEL: MINIMAL" );
        break;
        case 1:
        l_U515 = 4;
        sub_71633( "PASS LEVEL: NONE (Thrown out for fighting?)" );
        break;
        case 4:
        l_U505 = 1;
        l_U506 = 1;
        return;
        case 5:
        l_U505 = 1;
        l_U506 = 2;
        return;
    }
    sub_71868( "Calculate_Pass_Level: Unknown minigame result" );
    return;
}

void sub_71454()
{
    unknown Result;

    Result = g_U26739._fU16;
    g_U26739._fU4 = 12;
    g_U26739._fU16 = 8;
    g_U26739._fU24 = 0;
    g_U26739._fU28 = 0;
    return Result;
}

void sub_71633(unknown uParam0)
{
    return;
}

void sub_71868(unknown uParam0)
{
    sub_71916( "WARNING: JIM STRIP CLUB (KEITHM): ", uParam0 );
    return;
}

void sub_71916(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "WARNING: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_72053(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_72064( uParam0 );
    g_U27961._fU0[uVar4]._fU0[uParam1]++;
    g_U27961._fU0[uVar4]._fU92++;
    sub_72264( uParam1 );
    sub_73154( uParam0, uParam1 );
    return;
}

int sub_72064(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 6: return 1;
        case 7: return 2;
    }
    sub_5181( "Convert_Friend_To_Friend_Stats_ID: Unrecognised Friend ID" );
    return 3;
}

void sub_72264(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    char[64] cVar6;

    g_U27961._fU304[iParam0]++;
    g_U27961._fU396++;
    iVar3 = g_U27961._fU400;
    if (iVar3 == iParam0)
    {
        return;
    }
    iVar4 = g_U27961._fU304[iVar3];
    iVar5 = g_U27961._fU304[iParam0];
    if (iVar5 < iVar4)
    {
        return;
    }
    g_U27961._fU400 = iParam0;
    StrCopy( ref cVar6, "", 64 );
    sub_72408( iParam0, ref cVar6 );
    if (CAN_THE_STAT_HAVE_STRING( 662 ))
    {
        sub_9603( 662 );
        REGISTER_STRING_FOR_FRONTEND_STAT( 662, ref cVar6 );
    }
    return;
}

void sub_72408(unknown uParam0, unknown uParam1)
{
    char[64] cVar4;

    switch (uParam0)
    {
        case 6:
        StrCopy( (uParam1^), "statAct_air", 64 );
        break;
        case 7:
        StrCopy( (uParam1^), "statAct_armw", 64 );
        break;
        case 8:
        StrCopy( (uParam1^), "statAct_0", 64 );
        break;
        case 9:
        StrCopy( (uParam1^), "statAct_1", 64 );
        break;
        case 10:
        StrCopy( (uParam1^), "statAct_2", 64 );
        break;
        case 11:
        StrCopy( (uParam1^), "statAct_3", 64 );
        break;
        case 12:
        StrCopy( (uParam1^), "statAct_4", 64 );
        break;
        case 13:
        StrCopy( (uParam1^), "statAct_war", 64 );
        break;
        case 14:
        StrCopy( (uParam1^), "statAct_hang", 64 );
        break;
        case 15:
        StrCopy( (uParam1^), "statAct_5", 64 );
        break;
        case 16:
        StrCopy( (uParam1^), "statAct_hilo", 64 );
        break;
        case 17:
        StrCopy( (uParam1^), "statAct_6", 64 );
        break;
        case 18:
        StrCopy( (uParam1^), "statAct_7", 64 );
        break;
        case 19:
        StrCopy( (uParam1^), "statAct_race", 64 );
        break;
        case 20:
        StrCopy( (uParam1^), "statAct_8", 64 );
        break;
        case 21:
        StrCopy( (uParam1^), "statAct_9", 64 );
        break;
        default: sub_5181( "Friend_Achievement_Fill_Activity_String: Unknown activity" );
    }
    StrCopy( ref cVar4, GET_STRING_FROM_TEXT_FILE( uParam1 ), 64 );
    PRINTSTRING( "**********************\n" );
    PRINTSTRING( uParam1 );
    PRINTNL();
    PRINTSTRING( "For Info: " );
    PRINTSTRING( ref cVar4 );
    PRINTNL();
    PRINTSTRING( "**********************\n" );
    return;
}

void sub_73154(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    char[64] cVar8;

    uVar4 = sub_72064( uParam0 );
    iVar5 = g_U27961._fU0[uVar4]._fU96;
    if (iVar5 == iParam1)
    {
        return;
    }
    iVar6 = g_U27961._fU0[uVar4]._fU0[iVar5];
    iVar7 = g_U27961._fU0[uVar4]._fU0[iParam1];
    if (iVar7 < iVar6)
    {
        return;
    }
    g_U27961._fU0[uVar4]._fU96 = iParam1;
    StrCopy( ref cVar8, "", 64 );
    sub_72408( iParam1, ref cVar8 );
    switch (uParam0)
    {
        case 1:
        if (CAN_THE_STAT_HAVE_STRING( 671 ))
        {
            sub_9603( 671 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 671, ref cVar8 );
        }
        break;
        case 6:
        if (CAN_THE_STAT_HAVE_STRING( 672 ))
        {
            sub_9603( 672 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 672, ref cVar8 );
        }
        break;
        case 7:
        if (CAN_THE_STAT_HAVE_STRING( 673 ))
        {
            sub_9603( 673 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 673, ref cVar8 );
        }
        break;
        default: sub_5181( "Friend_Achievement_Check_For_New_Favourite_Activity_With_Friend: Unknown friend ID" );
    }
    return;
}

void sub_73566()
{
    if (g_U38847[0]._fU0)
    {
        sub_48870();
        return;
    }
    sub_37926( l_U473, ref l_U474 );
    return;
}

void sub_73663()
{
    unknown uVar2;
    unknown uVar3;

    if ((l_U514 < 0) || (l_U514 >= 2))
    {
        sub_30714( "JimStrip: Play Leaving Speech: Chosen Destination out of range" );
    }
    uVar2 = l_U611[l_U514]._fU0;
    uVar3 = g_U11583[uVar2]._fU16;
    sub_3299( "E1FCJ3A" );
    sub_3420( 0, sub_1568(), "JOHNNY", 0 );
    sub_3420( l_U415, l_U473, ref l_U411, 0 );
    sub_73861( l_U1375, l_U416, ref l_U405 );
    return;
}

void sub_73861(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 1)
    {
        return;
    }
    if (iParam0 == 3)
    {
        sub_73895( uParam1, uParam2 );
    }
    else
    {
        sub_74535( uParam1, uParam2 );
    }
    return;
}

void sub_73895(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_73918( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_SLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: STRIP CLUB (Abandoned)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_STLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: STRIP CLUB (Abandoned)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_STLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: STRIP CLUB (Abandoned)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_73918(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_SLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: STRIP CLUB - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_STLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: STRIP CLUB - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_STLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: STRIP CLUB - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_74535(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_73918( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_SLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: STRIP CLUB\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_STLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: STRIP CLUB\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_STLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: STRIP CLUB\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_74957(unknown uParam0, unknown uParam1)
{
    int iVar4;

    l_U556 = 0;
    return;
    switch (uParam1)
    {
        case 12: break;
        default: return;
    }
    if (NOT g_U18635[uParam0]._fU172)
    {
        return;
    }
    iVar4 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
    if (iVar4 >= 20)
    {
        return;
    }
    l_U556 = 1;
    return;
}

void sub_75086(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;

    sub_49925();
    if (l_U556)
    {
        return;
    }
    if (iParam0 == 12)
    {
        sub_75122();
        return;
    }
    if (iParam0 == 11)
    {
        sub_75179();
        return;
    }
    if (sub_75237( l_U465 ))
    {
        return;
    }
    iVar5 = uParam2;
    if (NOT bParam1)
    {
        iVar5++;
    }
    if (NOT (iVar5 == 1))
    {
        return;
    }
    sub_75438();
    return;
}

void sub_75122()
{
    if (l_U556)
    {
        sub_69700();
        return;
    }
    l_U521._fU32 = 0;
    return;
}

void sub_75179()
{
    l_U521._fU0 = 1;
    l_U521._fU4 = 0;
    l_U521._fU8 = 1;
    l_U521._fU12 = 0;
    return;
}

int sub_75237(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_40205( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_40205( "\n speech is not playing" );
    }
    return 0;
}

void sub_75438()
{
    l_U521._fU0 = 1;
    l_U521._fU4 = 0;
    l_U521._fU8 = 0;
    l_U521._fU12 = 0;
    l_U521._fU16 = 0;
    return;
}

void sub_75534()
{
    int iVar2;

    iVar2 = 1;
    if (sub_75563( iVar2, l_U473, "E1FCJ3A" ))
    {
        return;
    }
    l_U1197 = 1;
    sub_68785();
    sub_66546();
    if (sub_33314())
    {
        l_U505 = 1;
        l_U506 = 0;
        return;
    }
    return;
}

int sub_75563(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    boolean bVar6;
    boolean bVar7;
    int iVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    int[3] iVar18;
    int[3] iVar22;
    int I;
    int iVar27;
    int iVar28;
    int iVar29;
    int J;
    boolean bVar31;
    float fVar32;
    float fVar33;
    vector vVar34;
    int iVar37;
    boolean bVar38;
    int iVar39;
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
    int iVar55;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    if (l_U502 == 0)
    {
        l_U610 = iVar5 + 30000;
        g_U10509 = 0;
        l_U502++;
    }
    bVar6 = false;
    if (l_U502 == 1)
    {
        bVar6 = true;
        if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )) AND (NOT (sub_37512( sub_1568() ))))
        {
            if ((((NOT (IS_CHAR_IN_ANY_BOAT( sub_1568() ))) AND (NOT (IS_CHAR_IN_ANY_TRAIN( sub_1568() )))) AND (NOT (IS_CHAR_IN_FLYING_VEHICLE( sub_1568() )))) AND (NOT (IS_CHAR_IN_MODEL( sub_1568(), -960289747 ))))
            {
                if ((IS_MINIGAME_IN_PROGRESS()) AND (NOT g_U12304))
                {
                    PRINTSTRING( "---> Friends Goodbye cutscene delayed because non-activity Minigame In Progress (ie: atm, etc)\n" );
                    bVar6 = false;
                }
                else if (NOT PLAYER_IS_INTERACTING_WITH_GARAGE())
                {
                    l_U502++;
                }
                else
                {
                    PRINTSTRING( "---> Friends Goodbye cutscene delayed because player using pay n spray\n" );
                    bVar6 = false;
                }
            }
            else
            {
                PRINTSTRING( "---> Friends Goodbye cutscene delayed because using in boat, train, flying vehicle, or cable car\n" );
            }
        }
        if (NOT (l_U502 == 1))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ACTQUIT" ))
            {
                CLEAR_HELP();
            }
            l_U610 = 0;
        }
        else if (iVar5 > l_U610)
        {
            if (bVar6)
            {
                if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT g_U39169))
                {
                    PRINT_HELP( "ACTQUIT" );
                    l_U610 = iVar5 + 90000;
                }
                else
                {
                    bVar6 = false;
                }
            }
            if (NOT bVar6)
            {
                if (g_U39169)
                {
                    l_U610 = iVar5 + 30000;
                }
                else
                {
                    l_U610 = iVar5 + 5000;
                }
            }
        }
    }
    if (l_U502 == 2)
    {
        SET_PLAYER_CONTROL( sub_4214(), 0 );
        SETTIMERA( 0 );
        l_U502++;
    }
    if (l_U502 == 3)
    {
        if (TIMERA() > 1000)
        {
            DO_SCREEN_FADE_OUT( 500 );
            SETTIMERA( 0 );
            l_U502++;
        }
    }
    if (l_U502 == 4)
    {
        if (IS_SCREEN_FADED_OUT())
        {
            l_U609 = 1;
            if ((NOT g_U10499) || (TIMERA() > 1000))
            {
                l_U502++;
            }
        }
    }
    bVar7 = false;
    iVar8 = 1;
    if (l_U502 == 5)
    {
        GET_CHAR_COORDINATES( sub_1568(), ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
        uVar12 = {uVar9};
        bVar7 = false;
        while (NOT bVar7)
        {
            bVar7 = GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar9._fU0, uVar9._fU4, uVar9._fU8, iVar8, g_U10999, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8, ref uVar15, ref uVar16 );
            iVar8++;
        }
        CLEAR_AREA( uVar12._fU0, uVar12._fU4, uVar12._fU8, 50.00000000, 0 );
        SET_CHAR_COORDINATES( sub_1568(), uVar12._fU0, uVar12._fU4, uVar12._fU8 );
        SET_CHAR_HEADING( sub_1568(), uVar15 );
        l_U605 = uVar15;
        if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar17 );
            SET_CAR_ON_GROUND_PROPERLY( uVar17 );
            CLOSE_ALL_CAR_DOORS( uVar17 );
        }
        l_U502++;
        return 0;
    }
    array(ref iVar18, 3);
    array(ref iVar22, 3);
    I = 0;
    iVar27 = 0;
    iVar28 = 0;
    iVar29 = 0;
    if (l_U502 == 6)
    {
        PRINTSTRING( "\n\n***********************************\n" );
        PRINTSTRING( "Setting Up The Friends For Cutscene\n" );
        sub_71112();
        PRINTSTRING( "---> Checking which friends and bikes are available\n" );
        for ( I = 0; I < 3; I++ )
        {
            iVar18[I] = 0;
            iVar22[I] = 0;
            if (g_U38847[I]._fU0)
            {
                if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
                {
                    iVar22[I] = 1;
                    PRINTSTRING( "...friend available: " );
                    PRINTINT( I );
                    PRINTNL();
                }
                if (DOES_VEHICLE_EXIST( g_U38857[I]._fU4 ))
                {
                    if (IS_VEH_DRIVEABLE( g_U38857[I]._fU4 ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_1568(), g_U38857[I]._fU4 )))
                        {
                            iVar18[I] = 1;
                            PRINTSTRING( "...bike available: " );
                            PRINTINT( I );
                            PRINTNL();
                        }
                    }
                }
            }
        }
        PRINTSTRING( "---> Removing duplicate bikes from the availability list\n" );
        J = 0;
        for ( I = 0; I < 3; I++ )
        {
            if (iVar18[I])
            {
                for ( J = I + 1; J < 3; J++ )
                {
                    if (iVar18[J])
                    {
                        if (g_U38857[I]._fU4 == g_U38857[J]._fU4)
                        {
                            iVar18[J] = 0;
                            PRINTSTRING( "...bike no longer available: " );
                            PRINTINT( J );
                            PRINTNL();
                        }
                    }
                }
            }
        }
        PRINTSTRING( "---> Clearing Out the Creation Structure\n" );
        for ( I = 0; I < 3; I++ )
        {
            l_U580[I]._fU0 = nil;
            l_U580[I]._fU4 = nil;
            l_U580[I]._fU8 = 0;
            l_U580[I]._fU12 = 3;
            l_U580[I]._fU16 = {0.00000000, 0.00000000, 0.00000000};
            l_U580[I]._fU28 = 0;
        }
        PRINTSTRING( "---> Filling the Creation Order Array\n" );
        PRINTSTRING( "---> Step 1: The main friend and his bike\n" );
        iVar28 = sub_3793( uParam0 );
        iVar27 = 0;
        PRINTSTRING( "...main friend: " );
        PRINTINT( iVar28 );
        PRINTNL();
        if (g_U38847[iVar28]._fU0)
        {
            PRINTSTRING( "------> Main Friend is active\n" );
            if (iVar22[iVar28])
            {
                PRINTSTRING( "------> Main Friend is available\n" );
                l_U580[iVar27]._fU0 = g_U38857[iVar28]._fU0;
                l_U580[iVar27]._fU12 = iVar28;
                iVar22[iVar28] = 0;
                PRINTSTRING( "...creationOrder PED: " );
                PRINTINT( iVar27 );
                PRINTSTRING( " is the main friend" );
                PRINTNL();
                if (iVar18[iVar28])
                {
                    PRINTSTRING( "------> Main Friend Bike is available\n" );
                    l_U580[iVar27]._fU4 = g_U38857[iVar28]._fU4;
                    l_U580[iVar27]._fU8 = 1;
                    iVar18[iVar28] = 0;
                    PRINTSTRING( "...creationOrder BIKE: " );
                    PRINTINT( iVar27 );
                    PRINTSTRING( " is the main friend bike" );
                    PRINTNL();
                    PRINTSTRING( "...creationOrder IS DRIVER?: " );
                    PRINTINT( iVar27 );
                    PRINTSTRING( " is DRIVER\n" );
                }
                iVar27++;
            }
        }
        PRINTSTRING( "---> Step 2: All friends that still have their own bikes\n" );
        for ( I = 0; I < 3; I++ )
        {
            if ((iVar22[I]) AND (iVar18[I]))
            {
                PRINTSTRING( "...friend with bike: " );
                PRINTINT( I );
                PRINTNL();
                l_U580[iVar27]._fU0 = g_U38857[I]._fU0;
                l_U580[iVar27]._fU4 = g_U38857[I]._fU4;
                l_U580[iVar27]._fU8 = 1;
                l_U580[iVar27]._fU12 = I;
                PRINTSTRING( "...creationOrder PED: " );
                PRINTINT( iVar27 );
                PRINTSTRING( " is buddy with bike: " );
                PRINTINT( I );
                PRINTNL();
                PRINTSTRING( "...creationOrder BIKE: " );
                PRINTINT( iVar27 );
                PRINTSTRING( " is buddy with bike: " );
                PRINTINT( I );
                PRINTNL();
                PRINTSTRING( "...creationOrder IS DRIVER?: " );
                PRINTINT( iVar27 );
                PRINTSTRING( " is DRIVER\n" );
                iVar27++;
                iVar22[I] = 0;
                iVar18[I] = 0;
            }
        }
        PRINTSTRING( "---> Step 3: Remaining friends that don't have their own bike\n" );
        for ( I = 0; I < 3; I++ )
        {
            if (iVar22[I])
            {
                PRINTSTRING( "...friend without bike: " );
                PRINTINT( I );
                PRINTNL();
                l_U580[iVar27]._fU0 = g_U38857[I]._fU0;
                l_U580[iVar27]._fU12 = I;
                PRINTSTRING( "...creationOrder PED: " );
                PRINTINT( iVar27 );
                PRINTSTRING( " is buddy without bike: " );
                PRINTINT( I );
                PRINTNL();
                iVar27++;
                iVar22[I] = 0;
            }
        }
        PRINTSTRING( "---> Step 4: Friend Bikes that no longer have Friends (unlikely)\n" );
        bVar31 = false;
        for ( I = 0; I < 3; I++ )
        {
            if (iVar18[I])
            {
                PRINTSTRING( "...bike without friend: " );
                PRINTINT( I );
                PRINTNL();
                iVar27 = 0;
                bVar31 = true;
                while (bVar31)
                {
                    if (l_U580[iVar27]._fU4 == nil)
                    {
                        l_U580[iVar27]._fU4 = g_U38857[I]._fU4;
                        PRINTSTRING( "...creationOrder BIKE: " );
                        PRINTINT( iVar27 );
                        PRINTSTRING( " is empty, so give it bike for friend: " );
                        PRINTINT( I );
                        PRINTNL();
                        if (NOT (l_U580[iVar27]._fU0 == nil))
                        {
                            l_U580[iVar27]._fU8 = 1;
                            PRINTSTRING( "...creationOrder IS DRIVER?: " );
                            PRINTINT( iVar27 );
                            PRINTSTRING( " is changed to DRIVER now that this ped has been given a bike\n" );
                        }
                        iVar18[I] = 0;
                        bVar31 = false;
                    }
                    iVar27++;
                    if (bVar31)
                    {
                        if (iVar27 == 3)
                        {
                            bVar31 = false;
                        }
                    }
                }
            }
        }
        PRINTSTRING( "---> Step 5: If there are more friends than bikes then give friends Backies\n" );
        if (l_U580[1]._fU8)
        {
            if (NOT l_U580[0]._fU8)
            {
                l_U580[0]._fU4 = l_U580[1]._fU4;
                PRINTSTRING( "...creationOrder BIKE: 0 is given BIKE: 1, so ped in 0 will get a backie\n" );
            }
            else if (NOT l_U580[2]._fU8)
            {
                l_U580[2]._fU4 = l_U580[1]._fU4;
                PRINTSTRING( "...creationOrder BIKE: 2 is given BIKE: 1, so ped in 2 will get a backie\n" );
            }
        }
        else if (l_U580[0]._fU8)
        {
            l_U580[1]._fU4 = l_U580[0]._fU4;
            PRINTSTRING( "...creationOrder BIKE: 1 is given BIKE: 0, so ped in 1 will get a backie\n" );
        }
        else if (l_U580[2]._fU8)
        {
            l_U580[1]._fU4 = l_U580[2]._fU4;
            PRINTSTRING( "...creationOrder BIKE: 1 is given BIKE: 2, so ped in 1 will get a backie\n" );
        };;;
        PRINTSTRING( "---> Step 5.5: Mark Peds without Bikes as Drivers\n" );
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (l_U580[I]._fU0 == nil))
            {
                if (l_U580[I]._fU4 == nil)
                {
                    l_U580[I]._fU8 = 1;
                    PRINTSTRING( "...ped with no Bike being marked as Driver for creationOrder PED: " );
                    PRINTINT( I );
                    PRINTNL();
                }
            }
        }
        PRINTSTRING( "---> Step 6: Immediately stop Friend tasks\n" );
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (l_U580[I]._fU0 == nil))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U580[I]._fU0 );
                PRINTSTRING( "...clearing tasks for CreationOrder PED: " );
                PRINTINT( I );
                PRINTNL();
            }
        }
        PRINTSTRING( "---> Debug Output step, contents of CreationOrder array\n" );
        for ( I = 0; I < 3; I++ )
        {
            PRINTINT( I );
            PRINTSTRING( "  " );
            if (NOT (l_U580[I]._fU0 == nil))
            {
                PRINTSTRING( "PED   " );
            }
            else
            {
                PRINTSTRING( "no ped" );
            }
            PRINTSTRING( "    " );
            if (NOT (l_U580[I]._fU4 == nil))
            {
                PRINTSTRING( "BIKE   " );
            }
            else
            {
                PRINTSTRING( "no bike" );
            }
            PRINTSTRING( "    " );
            if (l_U580[I]._fU8)
            {
                PRINTSTRING( "DRIVER" );
            }
            else
            {
                PRINTSTRING( "PASSENGER" );
            }
            PRINTSTRING( "    " );
            PRINTINT( l_U580[I]._fU12 );
            PRINTNL();
        }
        PRINTSTRING( "---> Step 7: Attach any bikers to their bikes\n" );
        for ( I = 0; I < 3; I++ )
        {
            PRINTSTRING( "CreationOrder " );
            PRINTINT( I );
            PRINTSTRING( ": " );
            if (NOT (l_U580[I]._fU0 == nil))
            {
                PRINTSTRING( "[PED] " );
                if (NOT (l_U580[I]._fU4 == nil))
                {
                    PRINTSTRING( "[BIKE] " );
                    if (NOT (IS_CHAR_IN_CAR( l_U580[I]._fU0, l_U580[I]._fU4 )))
                    {
                        PRINTSTRING( "[PED NOT ON BIKE] " );
                        if (l_U580[I]._fU8)
                        {
                            PRINTSTRING( "[MAKE DRIVER]" );
                            WARP_CHAR_INTO_CAR( l_U580[I]._fU0, l_U580[I]._fU4 );
                        }
                        else
                        {
                            PRINTSTRING( "[MAKE PASSENGER]" );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U580[I]._fU0, l_U580[I]._fU4, 0 );
                        }
                    }
                }
            }
            PRINTNL();
        }
        l_U502++;
    }
    fVar32 = 0.00000000;
    fVar33 = 0.00000000;
    if (l_U502 == 7)
    {
        PRINTSTRING( "---> Step 8: Gather Offset Coords\n" );
        iVar37 = 0;
        if (NOT (IS_CHAR_INJURED( sub_1568() )))
        {
            if (NOT (IS_CHAR_ON_ANY_BIKE( sub_1568() )))
            {
                fVar32 = 2.00000000;
                fVar33 = -1.00000000;
                PRINTSTRING( "...using additional offset since player in a car\n" );
            }
            for ( I = 0; I < 3; I++ )
            {
                if (l_U580[I]._fU8)
                {
                    switch (iVar37)
                    {
                        case 0:
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), -1.50000000 + fVar33, -0.20000000, 0.00000000, ref vVar34.x, ref vVar34.y, ref vVar34.z );
                        PRINTSTRING( "...offset 0 for Friend PED: " );
                        PRINTINT( l_U580[I]._fU12 );
                        PRINTSTRING( "   CreationOrder PED: " );
                        PRINTINT( I );
                        PRINTNL();
                        break;
                        case 1:
                        sub_81903( fVar32, ref vVar34 );
                        PRINTSTRING( "...offset 1 for Friend PED: " );
                        PRINTINT( l_U580[I]._fU12 );
                        PRINTSTRING( "   CreationOrder PED: " );
                        PRINTINT( I );
                        PRINTNL();
                        break;
                        case 2:
                        sub_82564( fVar32, fVar33, ref vVar34 );
                        PRINTSTRING( "...offset 2 for Friend PED: " );
                        PRINTINT( l_U580[I]._fU12 );
                        PRINTSTRING( "   CreationOrder PED: " );
                        PRINTINT( I );
                        PRINTNL();
                        break;
                        default:
                        SCRIPT_ASSERT( "Gathering offset coordinates for Buddy bikes for Pass cutscene - too many offsets" );
                        vVar34 = {0.00000000, 0.00000000, 0.00000000};
                    }
                    l_U580[I]._fU16 = {vVar34};
                    iVar37++;
                }
            }
        }
        l_U502++;
    }
    if (l_U502 == 8)
    {
        PRINTSTRING( "---> Step 9: Move existing bikes into position\n" );
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (l_U580[I]._fU0 == nil))
            {
                if (NOT (l_U580[I]._fU4 == nil))
                {
                    if (l_U580[I]._fU8)
                    {
                        PRINTSTRING( "...moving BIKE into position for Friend PED: " );
                        PRINTINT( l_U580[I]._fU12 );
                        PRINTSTRING( "   CreationOrder PED: " );
                        PRINTINT( I );
                        PRINTNL();
                        vVar34 = {l_U580[I]._fU16};
                        CLEAR_AREA( vVar34.x, vVar34.y, vVar34.z, 5.00000000, 0 );
                        SET_CAR_COORDINATES( l_U580[I]._fU4, vVar34.x, vVar34.y, vVar34.z );
                        SET_CAR_HEADING( l_U580[I]._fU4, l_U605 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U580[I]._fU4 );
                    }
                }
            }
        }
        l_U502++;
    }
    bVar38 = true;
    if (l_U502 == 9)
    {
        PRINTSTRING( "---> Step 10: Request any required bikes\n" );
        bVar38 = true;
        iVar39 = 19;
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (l_U580[I]._fU0 == nil))
            {
                if (l_U580[I]._fU4 == nil)
                {
                    if (l_U580[I]._fU8)
                    {
                        iVar39 = sub_44626( l_U580[I]._fU12 );
                        if (NOT (HAS_MODEL_LOADED( sub_44830( iVar39 ) )))
                        {
                            REQUEST_MODEL( sub_44830( iVar39 ) );
                            bVar38 = false;
                            PRINTSTRING( "...request bike model for Friend PED: " );
                            PRINTINT( l_U580[I]._fU12 );
                            PRINTSTRING( "   CreationOrder PED: " );
                            PRINTINT( I );
                            PRINTNL();
                        }
                    }
                }
            }
        }
        if (bVar38)
        {
            l_U502++;
        }
    }
    if (l_U502 == 10)
    {
        PRINTSTRING( "---> Step 11: Create any required bikes\n" );
        bVar38 = true;
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (l_U580[I]._fU0 == nil))
            {
                if (l_U580[I]._fU4 == nil)
                {
                    iVar39 = sub_44626( l_U580[I]._fU12 );
                    vVar34 = {l_U580[I]._fU16};
                    if (NOT (sub_84745( ref l_U580[I]._fU4, sub_44830( iVar39 ), vVar34, l_U605, iVar39 )))
                    {
                        SCRIPT_ASSERT( "Creating extra friend bikes needed for cutscene returned FALSE but all models were pre-loaded" );
                        bVar38 = false;
                    }
                    else
                    {
                        WARP_CHAR_INTO_CAR( l_U580[I]._fU0, l_U580[I]._fU4 );
                        l_U580[I]._fU28 = 1;
                        PRINTSTRING( "...created bike for Friend PED: " );
                        PRINTINT( l_U580[I]._fU12 );
                        PRINTSTRING( "   CreationOrder PED: " );
                        PRINTINT( I );
                        PRINTNL();
                    }
                }
            }
        }
        if (bVar38)
        {
            l_U502++;
        }
    }
    if (l_U502 == 11)
    {
        PRINTSTRING( "---> Setup Camera Offsets\n" );
        GET_CHAR_COORDINATES( sub_1568(), ref uVar43._fU0, ref uVar43._fU4, ref uVar43._fU8 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), 2.00000000, 8.00000000, 3.00000000, ref uVar40._fU0, ref uVar40._fU4, ref uVar40._fU8 );
        sub_85342();
        CREATE_CAM( 14, ref l_U508[1] );
        SET_CAM_POS( l_U508[1], uVar40._fU0, uVar40._fU4, uVar40._fU8 );
        POINT_CAM_AT_COORD( l_U508[1], uVar43._fU0, uVar43._fU4, uVar43._fU8 );
        SET_CAM_FOV( l_U508[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U508[1], 1 );
        SET_CAM_PROPAGATE( l_U508[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U502++;
    }
    if (l_U502 == 12)
    {
        PRINTSTRING( "---> Chars Look at each other\n" );
        if ((NOT (IS_CHAR_DEAD( sub_1568() ))) AND (NOT (IS_CHAR_DEAD( uParam1 ))))
        {
            TASK_LOOK_AT_CHAR( sub_1568(), uParam1, -2, 0 );
            TASK_LOOK_AT_CHAR( uParam1, sub_1568(), -2, 0 );
        }
        l_U502++;
    }
    if (l_U502 == 13)
    {
        PRINTSTRING( "---> Fade in\n" );
        DO_SCREEN_FADE_IN( 500 );
        l_U502++;
    }
    if (l_U502 == 14)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U502++;
        }
    }
    if (l_U502 == 15)
    {
        iVar55 = 0;
        sub_18312( iVar55 );
        sub_3299( uParam2 );
        sub_3420( 0, sub_1568(), l_U579, 0 );
        sub_3420( l_U415, uParam1, ref l_U411, 0 );
        sub_85882( l_U416, ref l_U405 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), -1.00000000, 40.00000000, 0.00000000, ref l_U606._fU0, ref l_U606._fU4, ref l_U606._fU8 );
        l_U502++;
    }
    if (l_U502 == 16)
    {
        if (NOT (sub_75237( l_U405 )))
        {
            l_U502++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( uParam1, 1 );
        }
    }
    if (l_U502 == 17)
    {
        bVar31 = true;
        I = 0;
        while (bVar31)
        {
            if (NOT (l_U580[I]._fU0 == nil))
            {
                if (l_U580[I]._fU8)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U580[I]._fU0 ))) AND (IS_VEH_DRIVEABLE( l_U580[I]._fU4 )))
                    {
                        TASK_CAR_DRIVE_TO_COORD( l_U580[I]._fU0, l_U580[I]._fU4, l_U606._fU0, l_U606._fU4, l_U606._fU8, 15.00000000, 0, 0, 2, 5.00000000, 50 );
                        bVar31 = false;
                    }
                    l_U580[I]._fU8 = 0;
                }
            }
            if (bVar31)
            {
                I++;
                if (I == 3)
                {
                    bVar31 = false;
                }
            }
        }
        SETTIMERA( 0 );
        l_U502++;
    }
    if (l_U502 == 18)
    {
        if (TIMERA() > 750)
        {
            bVar31 = true;
            I = 0;
            while (bVar31)
            {
                if (NOT (l_U580[I]._fU0 == nil))
                {
                    if (l_U580[I]._fU8)
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U580[I]._fU0 ))) AND (IS_VEH_DRIVEABLE( l_U580[I]._fU4 )))
                        {
                            TASK_CAR_DRIVE_TO_COORD( l_U580[I]._fU0, l_U580[I]._fU4, l_U606._fU0, l_U606._fU4, l_U606._fU8, 17.00000000, 0, 0, 2, 5.00000000, 40 );
                            bVar31 = false;
                        }
                        l_U580[I]._fU8 = 0;
                    }
                }
                if (bVar31)
                {
                    I++;
                    if (I == 3)
                    {
                        bVar31 = false;
                    }
                }
            }
            SETTIMERA( 0 );
            l_U502++;
        }
    }
    if (l_U502 == 19)
    {
        if (TIMERA() > 550)
        {
            bVar31 = true;
            I = 0;
            while (bVar31)
            {
                if (NOT (l_U580[I]._fU0 == nil))
                {
                    if (l_U580[I]._fU8)
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U580[I]._fU0 ))) AND (IS_VEH_DRIVEABLE( l_U580[I]._fU4 )))
                        {
                            TASK_CAR_DRIVE_TO_COORD( l_U580[I]._fU0, l_U580[I]._fU4, l_U606._fU0, l_U606._fU4, l_U606._fU8, 20.00000000, 0, 0, 2, 5.00000000, 40 );
                            bVar31 = false;
                        }
                        l_U580[I]._fU8 = 0;
                    }
                }
                if (bVar31)
                {
                    I++;
                    if (I == 3)
                    {
                        bVar31 = false;
                    }
                }
            }
            SETTIMERA( 0 );
            l_U502++;
        }
    }
    if (l_U502 == 20)
    {
        if (TIMERA() > 3500)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (l_U580[I]._fU28)
                {
                    if (DOES_VEHICLE_EXIST( l_U580[I]._fU4 ))
                    {
                        DELETE_CAR( ref l_U580[I]._fU4 );
                        l_U580[I]._fU28 = 0;
                    }
                }
            }
            l_U502++;
        }
    }
    if (l_U502 == 21)
    {
        sub_18071();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U502++;
    }
    if (l_U502 == 22)
    {
        SET_PLAYER_CONTROL( sub_4214(), 1 );
        l_U502 = 99;
    }
    if (l_U502 == 99)
    {
        l_U501 = 6;
        l_U502 = 0;
        return 1;
    }
    return 0;
}

void sub_81903(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;

    fVar7 = 0.00000000;
    GET_CHAR_COORDINATES( sub_1568(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    GET_GROUND_Z_FOR_3D_COORD( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref fVar7 );
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), 1.50000000 + uParam0, -1.00000000, 0.00000000, iParam1 + 0, iParam1 + 4, iParam1 + 8 );
    if (sub_82010( fVar7, (iParam1^) ))
    {
        PRINTSTRING( "...Accept First Attempt at coordinates for Bike2\n" );
        return;
    }
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), 1.50000000 + uParam0, 0.50000000, 0.00000000, iParam1 + 0, iParam1 + 4, iParam1 + 8 );
    PRINTSTRING( "...Go with Final Attempt at coordinates for Bike2\n" );
    return;
}

int sub_82010(float fParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    float fVar6;
    float fVar7;
    float fVar8;

    fVar6 = uParam1._fU8 + 2.00000000;
    fVar7 = 0.00000000;
    GET_GROUND_Z_FOR_3D_COORD( uParam1._fU0, uParam1._fU4, fVar6, ref fVar7 );
    fVar8 = fVar7 - fParam0;
    if (fParam0 > fVar7)
    {
        fVar8 = fParam0 - fVar7;
    }
    PRINTSTRING( "Comparing Ground Zs: 1) " );
    PRINTFLOAT( fParam0 );
    PRINTSTRING( "   2) " );
    PRINTFLOAT( fVar7 );
    PRINTSTRING( "    DIFF: " );
    PRINTFLOAT( fVar8 );
    if (fVar8 <= 0.25000000)
    {
        PRINTSTRING( "    ACCEPTABLE\n" );
        return 1;
    }
    PRINTSTRING( "    not acceptable\n" );
    return 0;
}

void sub_82564(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    fVar8 = 0.00000000;
    GET_CHAR_COORDINATES( sub_1568(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    GET_GROUND_Z_FOR_3D_COORD( uVar5._fU0, uVar5._fU4, uVar5._fU8, ref fVar8 );
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), -3.00000000 + uParam1, -3.00000000, 0.00000000, iParam2 + 0, iParam2 + 4, iParam2 + 8 );
    if (sub_82010( fVar8, (iParam2^) ))
    {
        PRINTSTRING( "...Accept First Attempt at coordinates for Bike3\n" );
        return;
    }
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), -3.00000000 + uParam1, 1.00000000, 0.00000000, iParam2 + 0, iParam2 + 4, iParam2 + 8 );
    if (sub_82010( fVar8, (iParam2^) ))
    {
        PRINTSTRING( "...Accept Second Attempt at coordinates for Bike3\n" );
        return;
    }
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), -1.50000000 + uParam1, -4.00000000, 0.00000000, iParam2 + 0, iParam2 + 4, iParam2 + 8 );
    if (sub_82010( fVar8, (iParam2^) ))
    {
        PRINTSTRING( "...Accept Third Attempt at coordinates for Bike3\n" );
        return;
    }
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), 3.50000000 + uParam0, 1.00000000, 0.00000000, iParam2 + 0, iParam2 + 4, iParam2 + 8 );
    if (sub_82010( fVar8, (iParam2^) ))
    {
        PRINTSTRING( "...Accept Fourth Attempt at coordinates for Bike3\n" );
        return;
    }
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), 3.00000000 + uParam0, -3.00000000, 0.00000000, iParam2 + 0, iParam2 + 4, iParam2 + 8 );
    if (sub_82010( fVar8, (iParam2^) ))
    {
        PRINTSTRING( "...Accept Fifth Attempt at coordinates for Bike3\n" );
        return;
    }
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), 1.50000000 + uParam0, -5.00000000, 0.00000000, iParam2 + 0, iParam2 + 4, iParam2 + 8 );
    if (sub_82010( fVar8, (iParam2^) ))
    {
        PRINTSTRING( "...Accept Sixth Attempt at coordinates for Bike3\n" );
        return;
    }
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1568(), 0.00000000, 4.50000000, 0.00000000, iParam2 + 0, iParam2 + 4, iParam2 + 8 );
    PRINTSTRING( "...Go with Final Attempt at coordinates for Bike3\n" );
    return;
}

int sub_84745(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    sub_46616( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_85342()
{
    int iVar2;

    l_U512 = 1;
    iVar2 = 0;
    BEGIN_CAM_COMMANDS( ref iVar2 );
    if (iVar2 == 1)
    {
        return;
    }
    while (iVar2 > 0)
    {
        END_CAM_COMMANDS( ref iVar2 );
    }
    BEGIN_CAM_COMMANDS( ref iVar2 );
    return;
}

void sub_85882(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_85905( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_QAL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - QUIT AND LEAVE\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_QL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - QUIT AND LEAVE\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_QL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - QUIT AND LEAVE\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85905(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_QALD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - QUIT AND LEAVE - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_QLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - QUIT AND LEAVE - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_QLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - QUIT AND LEAVE - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87758()
{
    l_U638 = -1;
    return;
}

int sub_87792()
{
    boolean bVar2;
    boolean bVar3;
    boolean bVar4;
    int I;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;

    if (IS_CHAR_DEAD( sub_1568() ))
    {
        return 0;
    }
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    l_U390 = 0;
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (IS_CHAR_INJURED( g_U38857[I]._fU0 ))
            {
                return 0;
            }
            if (NOT l_U375)
            {
                return 0;
            }
            if (IS_MINIGAME_IN_PROGRESS())
            {
                return 0;
            }
            if (NOT l_U389)
            {
                return 0;
            }
            GET_CHAR_COORDINATES( sub_1568(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            GET_CHAR_COORDINATES( g_U38857[I]._fU0, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            fVar12 = sub_20074( uVar6, uVar9 );
            if (fVar12 > 400.00000000)
            {
                return 1;
            }
            if (fVar12 > 200.00000000)
            {
                sub_59446( ref g_U38857[I], 2 );
                PRINTSTRING( "KGMBUDDY ******************** ALLOW_FIND_NEW_VEHICLE: " );
                PRINTINT( I );
                PRINTNL();
            }
            if (fVar12 > 300.00000000)
            {
                g_U38847[I]._fU4 = 1;
            }
            if (g_U38847[I]._fU4)
            {
                if (fVar12 < 20.00000000)
                {
                    g_U38847[I]._fU4 = 0;
                    sub_88226( ref g_U38857[I], 2 );
                }
            }
            if (g_U38847[I]._fU4)
            {
                l_U390 = 1;
                switch (I)
                {
                    case 0:
                    bVar2 = true;
                    break;
                    case 1:
                    bVar3 = true;
                    break;
                    case 2:
                    bVar4 = true;
                    break;
                }
            }
        }
    }
    if (NOT l_U390)
    {
        return 0;
    }
    if (bVar2)
    {
        if (bVar3)
        {
            if (bVar4)
            {
                PRINT_NOW( "LB_JmTrCl", 500, 1 );
            }
            else
            {
                PRINT_NOW( "LB_JmTr", 500, 1 );
            }
        }
        else if (bVar4)
        {
            PRINT_NOW( "LB_JmCl", 500, 1 );
        }
    }
    else if (bVar3)
    {
        if (bVar4)
        {
            PRINT_NOW( "LB_TrCl", 500, 1 );
        }
        else
        {
            PRINT_NOW( "LB_Tr", 500, 1 );
        }
    }
    else if (bVar4)
    {
        PRINT_NOW( "LB_Cl", 500, 1 );
    }
    else
    {
        PRINT_NOW( "LB_Jm", 500, 1 );
    };;;
    return 0;
}

void sub_88226(int iParam0, int iParam1)
{
    if (sub_88239( iParam0, iParam1 ))
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

boolean sub_88239(int iParam0, unknown uParam1)
{
    return ((iParam0->_fU88) AND (uParam1)) > 0;
}

void sub_88706()
{
    int iVar2;
    int iVar3;

    if (NOT l_U1197)
    {
        return;
    }
    iVar2 = sub_88739( 1, l_U473, ref l_U405 );
    if (NOT (iVar2 == 22))
    {
        sub_104717( iVar2 );
        l_U1186 = sub_104932( iVar2 );
        sub_105086( 1, iVar2, "E1FCJ3A", l_U415, l_U473, ref l_U411, ref l_U405 );
    }
    iVar2 = sub_109324();
    if (NOT (iVar2 == 22))
    {
        l_U464 = sub_109370( iVar2 );
        sub_109601( 1, iVar2, "E1FCJ3A", l_U415, l_U473, ref l_U411, ref l_U405 );
        sub_122254( iVar2, ref l_U557, ref l_U560, ref l_U563 );
        l_U556 = l_U1186;
        sub_75086( iVar2, l_U1179, g_U26739._fU32 );
    }
    iVar3 = sub_122377();
    if (iVar3 == 12)
    {
        iVar2 = 22;
    }
    else
    {
        iVar2 = sub_122434( iVar3 );
    }
    if (sub_122695( iVar2, l_U473 ))
    {
        sub_123651( 1, "E1FCJ3A", l_U415, l_U473, ref l_U411, ref l_U405 );
    }
    if (l_U1200)
    {
        l_U389 = 0;
        l_U1200 = 0;
    }
    if (l_U1201)
    {
        l_U389 = 1;
        l_U1201 = 0;
    }
    return;
}

int sub_88739(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    int Result;

    if (l_U1210)
    {
        uVar5 = sub_88760( uParam0 );
        sub_88867( uParam0, uParam1, uVar5 );
    }
    if (l_U1198)
    {
        sub_94487( uParam0, uParam1, uParam2 );
        return 22;
    }
    Result = 22;
    Result = 6;
    if (sub_103250( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 7;
    if (sub_103250( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 10;
    if (sub_103250( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 11;
    if (sub_103469( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 12;
    if (sub_103469( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 16;
    if (sub_103250( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 18;
    if (sub_103250( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 20;
    if (sub_103250( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 21;
    if (sub_103250( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 9;
    if (sub_103250( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    return 22;
}

int sub_88760(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: return 2;
    }
    SCRIPT_ASSERT( "Get_Drunk_Level: Unknown Friend ID" );
    return 0;
}

void sub_88867(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    if (NOT l_U1111)
    {
        sub_88891( uParam0, uParam2 );
        g_U10502 = 0;
        l_U1177 = 0;
        return;
    }
    if (NOT g_U10499)
    {
        sub_16563();
        return;
    }
    if (g_U10502)
    {
        sub_15288( 1 );
        g_U10502 = 0;
        return;
    }
    I = -1;
    sub_90036( I );
    sub_90181( I );
    sub_90356( I );
    sub_91028();
    sub_92009( I );
    sub_92147( uParam2 );
    sub_92310( I );
    sub_92637();
    if ((NOT (IS_CHAR_DEAD( sub_1568() ))) AND (l_U1112._fU8))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1568(), 0, 0 );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                sub_90036( I );
                sub_90181( I );
                sub_93095( I );
                sub_93737( I );
                sub_92310( I );
                sub_90356( I );
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )))
                {
                    sub_92009( I );
                }
                if ((NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 ))) AND (l_U1127[I]._fU8))
                {
                    SET_CURRENT_CHAR_WEAPON( g_U38857[I]._fU0, 0, 0 );
                }
            }
        }
    }
    if (l_U1177)
    {
        return;
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                if (l_U1127[I]._fU8)
                {
                    return;
                }
            }
        }
    }
    sub_49925();
    l_U1177 = 1;
    return;
}

void sub_88891(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;

    sub_88904( ref l_U1112 );
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        sub_88904( ref l_U1127[I] );
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    l_U1112._fU8 = 0;
    iVar6 = sub_15631( -1, uParam1 );
    l_U1112._fU48 = iVar5 + iVar6;
    iVar7 = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            l_U1127[I]._fU8 = 0;
            iVar7 = sub_15631( I, uParam1 );
            l_U1127[I]._fU48 = iVar5 + iVar6;
        }
    }
    if (iVar6 > 0)
    {
        l_U1112._fU8 = 1;
        for ( I = 0; I < 3; I++ )
        {
            if (g_U38847[I]._fU0)
            {
                l_U1127[I]._fU8 = 1;
            }
        }
    }
    sub_15311( uParam1 );
    sub_89270( uParam1 );
    sub_89709( ref l_U1112 );
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            sub_89709( ref l_U1127[I] );
        }
    }
    l_U1111 = 1;
    g_U10499 = 1;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 )))
            {
                SET_PED_IS_DRUNK( g_U38857[I]._fU0, 1 );
            }
        }
    }
    if (g_U10501)
    {
        DO_SCREEN_FADE_IN( 500 );
        g_U10501 = 0;
    }
    g_U10502 = 0;
    return;
}

void sub_88904(int iParam0)
{
    iParam0->_fU0 = 0;
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU20 = 0;
    iParam0->_fU24 = 0;
    iParam0->_fU28 = {0.00000000, 0.00000000, 0.00000000};
    iParam0->_fU40 = 0;
    iParam0->_fU44 = 0;
    iParam0->_fU48 = 0;
    iParam0->_fU52 = 0;
    iParam0->_fU56 = 0;
    return;
}

void sub_89270(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_DEAD( sub_1568() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar3 );
            fVar4 = 0.00000000;
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 < 0.04000000)
            {
                l_U1173 = 0.00000000;
                return;
            }
        }
    }
    switch (uParam0)
    {
        case 0:
        l_U1173 = 0.00000000;
        break;
        case 1:
        l_U1173 = sub_89452( 0.05000000, 0.02000000 );
        break;
        case 2:
        l_U1173 = sub_89452( 0.07000000, 0.03000000 );
        break;
        case 3:
        l_U1173 = sub_89452( 0.09000000, 0.04000000 );
        break;
        case 4:
        l_U1173 = sub_89452( 0.10000000, 0.05000000 );
        break;
        case 5:
        l_U1173 = sub_89452( 0.13000000, 0.06000000 );
        break;
    }
    return;
}

void sub_89452(unknown uParam0, unknown uParam1)
{
    float Result;
    float fVar5;

    Result = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( -uParam0, uParam0, ref Result );
    fVar5 = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, uParam1, ref fVar5 );
    if (Result < 0.00000000)
    {
        Result -= fVar5;
    }
    else
    {
        Result += fVar5;
    }
    if (Result < -1.00000000)
    {
        Result = -1.00000000;
    }
    if (Result > 1.00000000)
    {
        Result = 1.00000000;
    }
    return Result;
}

void sub_89709(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar3 = 3;
    iVar4 = 7;
    iVar5 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( iVar3, iVar4, ref iVar5 );
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar5 *= 100;
    iParam0->_fU40 = iVar6 + iVar5;
    return;
}

void sub_90036(unknown uParam0)
{
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
    unknown uVar16;
    unknown uVar17;
    int iVar18;

    uVar3 = {sub_15871( uParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (uVar3._fU4)
    {
        return;
    }
    iVar18 = 0;
    GET_GAME_TIMER( ref iVar18 );
    if (uVar3._fU48 < iVar18)
    {
        uVar3._fU8 = 0;
    }
    sub_90116( uParam0, ref uVar3 );
    return;
}

void sub_90116(int iParam0, unknown uParam1)
{
    if (iParam0 == -1)
    {
        l_U1112 = {(uParam1^)};
    }
    else
    {
        l_U1127[iParam0] = {(uParam1^)};
    }
    return;
}

void sub_90181(int iParam0)
{
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
    unknown uVar16;
    unknown uVar17;
    int iVar18;
    unknown uVar19;
    int iVar20;

    uVar3 = {sub_15871( iParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if ((uVar3._fU0) || (uVar3._fU4))
    {
        return;
    }
    if (uVar3._fU20)
    {
        return;
    }
    iVar18 = 0;
    GET_GAME_TIMER( ref iVar18 );
    if (iVar18 > uVar3._fU48)
    {
        if (iParam0 == -1)
        {
            g_U10499 = 0;
        }
        sub_15774( iParam0 );
        return;
    }
    uVar19 = sub_15785( iParam0 );
    if (IS_PED_RAGDOLL( uVar19 ))
    {
        return;
    }
    iVar20 = uVar3._fU48 - iVar18;
    sub_15989( iParam0, iVar20 );
    return;
}

void sub_90356(unknown uParam0)
{
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
    unknown uVar16;
    unknown uVar17;
    int iVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    int iVar26;
    int iVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    boolean bVar31;

    uVar3 = {sub_15871( uParam0 )};
    iVar18 = 0;
    GET_GAME_TIMER( ref iVar18 );
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (uVar3._fU4)
    {
        return;
    }
    if (uVar3._fU20)
    {
        return;
    }
    uVar19 = sub_15785( uParam0 );
    GET_PED_BONE_POSITION( uVar19, 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar20 );
    fVar23 = uVar20._fU8 + 2.00000000;
    fVar24 = 0.00000000;
    GET_GROUND_Z_FOR_3D_COORD( uVar20._fU0, uVar20._fU4, fVar23, ref fVar24 );
    fVar25 = uVar20._fU8 - fVar24;
    if (fVar25 < 0)
    {
        fVar25 *= -1.00000000;
    }
    iVar26 = 0;
    if (NOT (fVar25 > 1.20000000))
    {
        iVar26 = 1;
    }
    if (uVar3._fU0)
    {
        if (fVar25 > 1.20000000)
        {
            if (uVar3._fU48 > iVar18)
            {
                iVar27 = uVar3._fU48 - iVar18;
                sub_15989( uParam0, iVar27 );
            }
            uVar3._fU52 = 0;
            uVar3._fU0 = 0;
        }
        sub_90116( uParam0, ref uVar3 );
        return;
    }
    if (uVar3._fU16)
    {
        if (iVar18 > uVar3._fU52)
        {
            uVar3._fU16 = 0;
            uVar3._fU0 = 1;
            sub_15774( uParam0 );
            uVar3._fU52 = 0;
        }
        sub_90116( uParam0, ref uVar3 );
        return;
    }
    if (uVar3._fU12)
    {
        if (uVar3._fU56 < iVar18)
        {
            uVar3._fU56 = 0;
            uVar3._fU52 = iVar18 + 100;
            uVar3._fU12 = 0;
            uVar3._fU16 = 1;
        }
        else
        {
            GET_CHAR_VELOCITY( uVar19, ref uVar28._fU0, ref uVar28._fU4, ref uVar28._fU8 );
            if ((VMAG( uVar28 )) < 0.10000000)
            {
                if (uVar3._fU52 == 0)
                {
                    uVar3._fU52 = iVar18 + 1000;
                }
                else if (uVar3._fU52 < iVar18)
                {
                    uVar3._fU56 = 0;
                    uVar3._fU52 = iVar18 + 100;
                    uVar3._fU12 = 0;
                    uVar3._fU16 = 1;
                }
            }
            else
            {
                uVar3._fU52 = 0;
            }
        }
        sub_90116( uParam0, ref uVar3 );
        return;
    }
    bVar31 = true;
    if (IS_PED_RAGDOLL( uVar19 ))
    {
        if (CHECK_NM_FEEDBACK( uVar19, 80, 1 ))
        {
            bVar31 = false;
        }
    }
    if ((NOT bVar31) || (iVar26))
    {
        uVar3._fU12 = 1;
        uVar3._fU52 = 0;
        uVar3._fU56 = iVar18 + 3000;
        sub_90116( uParam0, ref uVar3 );
        return;
    }
    uVar3._fU52 = 0;
    sub_90116( uParam0, ref uVar3 );
    return;
}

void sub_91028()
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
    unknown uVar16;
    boolean bVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    int iVar21;
    int iVar22;
    boolean bVar23;
    float fVar24;
    float fVar25;
    boolean bVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    int iVar31;
    boolean bVar32;
    unknown uVar33;
    int iVar34;
    int iVar35;
    unknown uVar36;
    unknown uVar37;

    uVar2 = {sub_15871( -1 )};
    if (NOT uVar2._fU8)
    {
        return;
    }
    if (uVar2._fU0)
    {
        return;
    }
    if (uVar2._fU20)
    {
        return;
    }
    if ((uVar2._fU16) || (uVar2._fU12))
    {
        return;
    }
    bVar17 = true;
    if (NOT (l_U1175 == nil))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U1175 )))
        {
            l_U1175 = nil;
        }
    }
    if (l_U1175 == nil)
    {
        GET_CHAR_COORDINATES( sub_1568(), ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
        iVar21 = 70;
        l_U1175 = GET_CLOSEST_CAR( uVar18, 7.00000000, 0, iVar21 );
        l_U1176 = 0;
    }
    if (l_U1175 == nil)
    {
        bVar17 = false;
    }
    iVar22 = 1;
    bVar23 = false;
    if (bVar17)
    {
        fVar24 = -1.00000000;
        fVar25 = 2.00000000;
        bVar26 = false;
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1175, fVar24, 0.00000000, 0.00000000, ref uVar27._fU0, ref uVar27._fU4, ref uVar27._fU8 );
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1568(), uVar27._fU0, uVar27._fU4, uVar27._fU8, fVar25, fVar25, fVar25, 0 ))
        {
            bVar26 = true;
            iVar22 = 1;
        }
        if ((NOT bVar26) AND (NOT bVar23))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1175, 1.00000000, 0.00000000, 0.00000000, ref uVar27._fU0, ref uVar27._fU4, ref uVar27._fU8 );
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1568(), uVar27._fU0, uVar27._fU4, uVar27._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                bVar26 = true;
                iVar22 = 0;
            }
        }
        if (NOT bVar26)
        {
            bVar17 = false;
            l_U1175 = nil;
        }
    }
    iVar30 = 0;
    GET_GAME_TIMER( ref iVar30 );
    iVar31 = nil;
    if (uVar2._fU4)
    {
        bVar32 = false;
        if (sub_37512( sub_1568() ))
        {
            bVar32 = true;
        }
        if (NOT bVar32)
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar33 );
                GET_DRIVER_OF_CAR( uVar33, ref iVar31 );
                if (iVar31 == sub_1568())
                {
                    bVar32 = true;
                }
                else if (NOT l_U1176)
                {
                    TASK_SHUFFLE_TO_NEXT_CAR_SEAT( sub_1568(), uVar33 );
                    l_U1176 = 1;
                    uVar2._fU56 = iVar30 + 1000;
                }
                else if (iVar30 > uVar2._fU56)
                {
                    GET_SCRIPT_TASK_STATUS( sub_1568(), 39, ref iVar34 );
                    if (NOT (iVar34 == 7))
                    {
                        uVar2._fU56 = iVar30 + 1000;
                    }
                    else
                    {
                        l_U1176 = 0;
                    }
                };;;
            }
        }
        if (bVar32)
        {
            uVar2._fU4 = 0;
            uVar2._fU20 = 1;
            l_U1176 = 0;
        }
        else if (NOT bVar17)
        {
            CLEAR_CHAR_TASKS( sub_1568() );
            uVar2._fU4 = 0;
            if (uVar2._fU48 > iVar30)
            {
                iVar35 = uVar2._fU48 - iVar30;
                sub_15989( -1, iVar35 );
            }
        }
        sub_90116( -1, ref uVar2 );
        return;
    }
    if (NOT bVar17)
    {
        return;
    }
    if (NOT (IS_CONTROL_PRESSED( 2, 3 )))
    {
        return;
    }
    sub_15774( -1 );
    SET_NEXT_DESIRED_MOVE_STATE( 2 );
    GET_CAR_MODEL( l_U1175, ref uVar36 );
    uVar37 = IS_THIS_MODEL_A_BIKE( uVar36 );
    if ((iVar22) || (uVar37))
    {
        TASK_ENTER_CAR_AS_DRIVER( sub_1568(), l_U1175, -1 );
    }
    else
    {
        TASK_ENTER_CAR_AS_PASSENGER( sub_1568(), l_U1175, -1, 0 );
    }
    uVar2._fU4 = 1;
    sub_90116( -1, ref uVar2 );
    return;
}

void sub_92009(unknown uParam0)
{
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
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    int iVar19;
    int iVar20;

    uVar3 = {sub_15871( uParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (NOT uVar3._fU20)
    {
        return;
    }
    uVar18 = sub_15785( uParam0 );
    if (IS_CHAR_IN_ANY_CAR( uVar18 ))
    {
        return;
    }
    iVar19 = 0;
    GET_GAME_TIMER( ref iVar19 );
    iVar20 = uVar3._fU48 - iVar19;
    sub_15989( uParam0, iVar20 );
    uVar3._fU20 = 0;
    l_U1176 = 0;
    sub_90116( uParam0, ref uVar3 );
    return;
}

void sub_92147(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    boolean bVar5;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1568() )))
    {
        return;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U1110 < iVar3)
    {
        sub_16563();
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar4 );
    bVar5 = false;
    if (l_U1174 == 0)
    {
        bVar5 = true;
    }
    else if (iVar3 > l_U1174)
    {
        bVar5 = true;
    }
    if (bVar5)
    {
        sub_89270( uParam0 );
        l_U1174 = iVar3 + 1000;
    }
    SET_VEHICLE_STEER_BIAS( uVar4, l_U1173 );
    return;
}

void sub_92310(unknown uParam0)
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
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    int iVar19;
    unknown uVar20;
    int iVar21;
    float fVar22;
    int iVar23;
    float fVar24;
    vector vVar25;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U1110 < iVar3)
    {
        return;
    }
    uVar4 = {sub_15871( uParam0 )};
    if (iVar3 < uVar4._fU40)
    {
        return;
    }
    sub_89709( ref uVar4 );
    sub_90116( uParam0, ref uVar4 );
    iVar19 = sub_15785( uParam0 );
    if (IS_CHAR_INJURED( iVar19 ))
    {
        return;
    }
    if (NOT (IS_CHAR_ON_ANY_BIKE( iVar19 )))
    {
        return;
    }
    uVar20 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iVar19, ref uVar20 );
    iVar21 = nil;
    GET_DRIVER_OF_CAR( uVar20, ref iVar21 );
    if (NOT (iVar21 == iVar19))
    {
        return;
    }
    fVar22 = 0.00000000;
    GET_CAR_SPEED( uVar20, ref fVar22 );
    if (fVar22 < 0.04000000)
    {
        return;
    }
    iVar23 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref iVar23 );
    fVar24 = TO_FLOAT( iVar23 );
    fVar24 /= 2;
    fVar24 -= 2.00000000;
    vVar25 = {0.00000000, 0.21000000, 0.00000000};
    uVar28 = {fVar24, 0.00000000, 0.00000000};
    APPLY_FORCE_TO_CAR( uVar20, 1, uVar28, vVar25, 0, 1, 1, 1 );
    return;
}

void sub_92637()
{
    int iVar2;
    unknown uVar3;
    float fVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_PLAYER_PLAYING( sub_4214() )))
    {
        return;
    }
    if (sub_37512( sub_1568() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )))
    {
        return;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_4214(), 0 ))
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U1110 < iVar2)
    {
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar3 );
    GET_CAR_SPEED( uVar3, ref fVar4 );
    if (fVar4 < 0.50000000)
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_1568(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    uVar8._fU0 = uVar5._fU0 - 30.00000000;
    uVar8._fU4 = uVar5._fU4 - 30.00000000;
    uVar8._fU8 = uVar5._fU8 - 3.00000000;
    uVar11._fU0 = uVar5._fU0 + 30.00000000;
    uVar11._fU4 = uVar5._fU4 + 30.00000000;
    uVar11._fU8 = uVar5._fU8 + 3.00000000;
    if (NOT (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar11._fU0, uVar11._fU4, uVar11._fU8 )))
    {
        return;
    }
    ALTER_WANTED_LEVEL_NO_DROP( sub_4214(), 1 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_4214() );
    return;
}

void sub_93095(unknown uParam0)
{
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
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    int iVar19;
    boolean bVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    float fVar30;
    int iVar31;

    uVar3 = sub_15785( uParam0 );
    if (IS_CHAR_DEAD( uVar3 ))
    {
        return;
    }
    uVar4 = {sub_15871( uParam0 )};
    if (NOT uVar4._fU8)
    {
        return;
    }
    if (uVar4._fU20)
    {
        return;
    }
    if ((uVar4._fU0) || (uVar4._fU4))
    {
        return;
    }
    if ((uVar4._fU12) || (uVar4._fU16))
    {
        return;
    }
    if (NOT (IS_PED_RAGDOLL( uVar3 )))
    {
        return;
    }
    iVar19 = 0;
    GET_GAME_TIMER( ref iVar19 );
    bVar20 = false;
    if (uVar4._fU44 == 0)
    {
        bVar20 = true;
    }
    else if (uVar4._fU44 < iVar19)
    {
        bVar20 = true;
    }
    if (NOT bVar20)
    {
        return;
    }
    if (IS_CHAR_INJURED( sub_1568() ))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_1568(), ref uVar21._fU0, ref uVar21._fU4, ref uVar21._fU8 );
    uVar4._fU24 = 0;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() ))
    {
        if (IS_VEH_DRIVEABLE( g_U38857[uParam0]._fU4 ))
        {
            GET_CAR_COORDINATES( g_U38857[uParam0]._fU4, ref uVar24._fU0, ref uVar24._fU4, ref uVar24._fU8 );
            GET_CHAR_COORDINATES( g_U38857[uParam0]._fU0, ref uVar27._fU0, ref uVar27._fU4, ref uVar27._fU8 );
            fVar30 = 0.00000000;
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar24._fU0, uVar24._fU4, uVar24._fU8, uVar27._fU0, uVar27._fU4, uVar27._fU8, ref fVar30 );
            if (fVar30 < 75.00000000)
            {
                uVar21 = {uVar24};
                uVar4._fU24 = 1;
                uVar4._fU28 = {uVar21};
            }
        }
    }
    iVar31 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar31 );
    if (iVar31 < 50)
    {
        uVar21._fU0 += 1.00000000;
    }
    else
    {
        uVar21._fU0 -= 1.00000000;
    }
    iVar31 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar31 );
    if (iVar31 < 50)
    {
        uVar21._fU4 += 1.00000000;
    }
    else
    {
        uVar21._fU4 -= 1.00000000;
    }
    CREATE_NM_MESSAGE( 1, 119 );
    SET_NM_MESSAGE_VEC3( 121, uVar21 );
    SET_NM_MESSAGE_FLOAT( 122, 0.20000000 );
    SEND_NM_MESSAGE( uVar3 );
    uVar4._fU44 = iVar19 + 5000;
    sub_90116( uParam0, ref uVar4 );
    return;
}

void sub_93737(int iParam0)
{
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
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    float fVar25;
    boolean bVar26;
    unknown uVar27;
    int iVar28;

    uVar3 = {sub_15871( iParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (uVar3._fU0)
    {
        return;
    }
    if (uVar3._fU20)
    {
        return;
    }
    if ((uVar3._fU16) || (uVar3._fU12))
    {
        return;
    }
    uVar18 = sub_15785( iParam0 );
    if (uVar3._fU4)
    {
        if (IS_CHAR_IN_ANY_CAR( uVar18 ))
        {
            uVar3._fU4 = 0;
            uVar3._fU20 = 1;
        }
        sub_90116( iParam0, ref uVar3 );
        return;
    }
    if (IS_CHAR_DEAD( sub_1568() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )))
    {
        return;
    }
    if (uVar3._fU24)
    {
        uVar19 = {uVar3._fU28};
    }
    else
    {
        GET_CHAR_COORDINATES( sub_1568(), ref uVar19._fU0, ref uVar19._fU4, ref uVar19._fU8 );
    }
    GET_CHAR_COORDINATES( uVar18, ref uVar22._fU0, ref uVar22._fU4, ref uVar22._fU8 );
    fVar25 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar19._fU0, uVar19._fU4, uVar19._fU8, uVar22._fU0, uVar22._fU4, uVar22._fU8, ref fVar25 );
    if (NOT (fVar25 < 3.00000000))
    {
        return;
    }
    bVar26 = false;
    if (uVar3._fU24)
    {
        uVar27 = g_U38857[iParam0]._fU4;
        if (IS_VEH_DRIVEABLE( uVar27 ))
        {
            bVar26 = true;
        }
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar27 );
        iVar28 = 0;
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar27, ref iVar28 );
        if (iParam0 <= iVar28)
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( uVar27, iParam0 ))
            {
                bVar26 = true;
            }
        }
    }
    if (bVar26)
    {
        sub_15774( iParam0 );
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        if (uVar3._fU24)
        {
            TASK_ENTER_CAR_AS_DRIVER( uVar18, uVar27, -2 );
        }
        else
        {
            TASK_ENTER_CAR_AS_PASSENGER( uVar18, uVar27, -2, iParam0 );
        }
        uVar3._fU4 = 1;
    }
    sub_90116( iParam0, ref uVar3 );
    return;
}

void sub_94487(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (l_U1205)
    {
        case 0:
        sub_94548();
        break;
        case 1:
        sub_97455();
        break;
        case 2:
        sub_97800( uParam0, uParam1, uParam2 );
        break;
        case 3:
        sub_99300( uParam0, uParam1, uParam2 );
        break;
        case 4:
        sub_101691( uParam0 );
        break;
    }
    return;
}

void sub_94548()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U1206 == 0)
    {
        sub_94580();
        l_U1204 = iVar2 + 3000;
        if (l_U1199 == 18)
        {
            sub_71112();
        }
        l_U1206++;
    }
    if (l_U1206 == 1)
    {
        if (l_U1199 == 20)
        {
            if ((IS_SCREEN_FADED_OUT()) || (iVar2 > l_U1204))
            {
                sub_71112();
                uVar3 = {l_U1090[0]._fU4};
                uVar6 = l_U1090[0]._fU16;
                sub_94730( uVar3, uVar6 );
                l_U1206++;
            }
        }
        else
        {
            l_U1206++;
        }
    }
    if (l_U1206 == 2)
    {
        if (sub_71386())
        {
            if (l_U1199 == 20)
            {
                sub_97343();
            }
            l_U1206++;
        }
    }
    if (l_U1206 == 3)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U1206 = 99;
        }
    }
    if (l_U1206 == 99)
    {
        l_U1205 = 1;
        l_U1206 = 0;
    }
    return;
}

void sub_94580()
{
    g_U10509 = 1;
    g_U10648 = 0;
    return;
}

void sub_94730(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;

    iVar6 = 0;
    iVar7 = 0;
    iVar8 = nil;
    PRINTSTRING( "\nKGMBIKES..........Warp_Friend_Bikes_To_Activity\n" );
    if (sub_21048( 0 ))
    {
        PRINTSTRING( "KGMBIKES..........JIM ACTIVE\n" );
        iVar8 = g_U38857[0]._fU4;
        if ((NOT (iVar8 == nil)) AND (IS_VEH_DRIVEABLE( iVar8 )))
        {
            PRINTSTRING( "KGMBIKES.............start search at bike location: " );
            PRINTINT( iVar6 );
            PRINTNL();
            iVar7 = sub_94985( iVar6, iVar8, uParam0, uParam3 );
            if (NOT (iVar7 == iVar6))
            {
                if (iVar7 < 0)
                {
                    PRINTSTRING( "KGMBIKES.............ran out of potential bike locations\n" );
                    return;
                }
                PRINTSTRING( "KGMBIKES.............found a valid bike location\n" );
            }
            else
            {
                PRINTSTRING( "KGMBIKES.............search conditions failed\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES.............but no bike\n" );
        }
    }
    iVar6 = iVar7;
    if (sub_21048( 1 ))
    {
        PRINTSTRING( "\nKGMBIKES..........TERRY ACTIVE\n" );
        iVar8 = g_U38857[1]._fU4;
        if ((NOT (iVar8 == nil)) AND (IS_VEH_DRIVEABLE( iVar8 )))
        {
            PRINTSTRING( "KGMBIKES.............start search at bike location: " );
            PRINTINT( iVar6 );
            PRINTNL();
            iVar7 = sub_94985( iVar6, iVar8, uParam0, uParam3 );
            if (NOT (iVar7 == iVar6))
            {
                if (iVar7 < 0)
                {
                    PRINTSTRING( "KGMBIKES.............ran out of potential bike locations\n" );
                    return;
                }
                PRINTSTRING( "KGMBIKES.............found a valid bike location\n" );
            }
            else
            {
                PRINTSTRING( "KGMBIKES.............search conditions failed\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES.............but no bike\n" );
        }
    }
    iVar6 = iVar7;
    if (sub_21048( 2 ))
    {
        PRINTSTRING( "\nKGMBIKES..........CLAY ACTIVE\n" );
        iVar8 = g_U38857[2]._fU4;
        if ((NOT (iVar8 == nil)) AND (IS_VEH_DRIVEABLE( iVar8 )))
        {
            PRINTSTRING( "KGMBIKES.............start search at bike location: " );
            PRINTINT( iVar6 );
            PRINTNL();
            iVar7 = sub_94985( iVar6, iVar8, uParam0, uParam3 );
            if (NOT (iVar7 == iVar6))
            {
                if (iVar7 < 0)
                {
                    PRINTSTRING( "KGMBIKES.............ran out of potential bike locations\n" );
                    return;
                }
                PRINTSTRING( "KGMBIKES.............found a valid bike location\n" );
            }
            else
            {
                PRINTSTRING( "KGMBIKES.............search conditions failed\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES.............but no bike\n" );
        }
    }
    return;
}

int sub_94985(int Result, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector vVar8;
    float fVar11;
    boolean bVar12;

    vVar8 = {0.00000000, 0.00000000, 0.00000000};
    fVar11 = 0.00000000;
    bVar12 = true;
    while (bVar12)
    {
        PRINTSTRING( "KGMBIKES................testing potential bike location: " );
        PRINTINT( Result );
        PRINTNL();
        if (sub_95123( Result, uParam2, ref vVar8 ))
        {
            PRINTSTRING( "KGMBIKES................possible potential location\n" );
            Result++;
            GET_GROUND_Z_FOR_3D_COORD( uParam2._fU0, uParam2._fU4, uParam2._fU8 + 2.00000000, ref fVar11 );
            if (sub_82010( fVar11, vVar8 ))
            {
                CLEAR_AREA( vVar8.x, vVar8.y, vVar8.z, 1.00000000, 0 );
                SET_CAR_HEADING( uParam1, sub_95668( uParam5 ) );
                SET_CAR_COORDINATES( uParam1, vVar8.x, vVar8.y, vVar8.z + 1.00000000 );
                SET_CAR_ON_GROUND_PROPERLY( uParam1 );
                PRINTSTRING( "KGMBIKES................potential location - VALID\n" );
                return Result;
            }
            else
            {
                PRINTSTRING( "KGMBIKES................ground Zs are too far apart - NOT VALID\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES................RUN OUT OF POTENTIAL LOCATIONS\n" );
            return -1;
        }
    }
    PRINTSTRING( "KGMBIKES................RUN OUT OF POTENTIAL LOCATIONS\n" );
    return -1;
}

int sub_95123(unknown uParam0, vector vParam1, unknown uParam4)
{
    vector vVar7;

    vVar7 = {0.00000000, 0.00000000, 0.00000000};
    switch (uParam0)
    {
        case 0:
        vVar7 = {-3.00000000, 0.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 1:
        vVar7 = {-2.00000000, 3.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 2:
        vVar7 = {1.50000000, 1.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 3:
        vVar7 = {2.50000000, -0.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 4:
        vVar7 = {2.00000000, -4.00000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 5:
        vVar7 = {-1.00000000, -2.00000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 6:
        vVar7 = {-4.00000000, -4.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 7:
        vVar7 = {-6.00000000, -1.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        default: return 0;
    }
    return 1;
}

void sub_95668(unknown uParam0)
{
    float fVar3;
    float fVar4;
    float Result;

    fVar3 = uParam0 - 30.00000000;
    fVar4 = uParam0 + 30.00000000;
    Result = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( fVar3, fVar4, ref Result );
    if (Result < 0.00000000)
    {
        Result += 360.00000000;
    }
    if (Result > 360.00000000)
    {
        Result -= 360.00000000;
    }
    return Result;
}

void sub_97343()
{
    g_U10509 = 0;
    g_U10648 = 0;
    return;
}

void sub_97455()
{
    unknown uVar2;

    l_U1182 = sub_97464();
    sub_97539( l_U1199, l_U1182 );
    uVar2 = sub_10526( l_U1235 );
    sub_72053( uVar2, l_U1199 );
    l_U1198 = 0;
    l_U1181 = l_U1199;
    l_U1199 = 22;
    if (l_U1179)
    {
        l_U1185 = 1;
    }
    g_U10502 = 1;
    l_U1205 = 5;
    return;
}

void sub_97464()
{
    unknown Result;

    Result = g_U26739._fU20;
    g_U26739._fU8 = 12;
    g_U26739._fU20 = 8;
    g_U26739._fU24 = 0;
    g_U26739._fU28 = 0;
    return Result;
}

void sub_97539(unknown uParam0, unknown uParam1)
{
    if (l_U1196 == 3)
    {
        SCRIPT_ASSERT( "Store_Alternative_Result: All allowed alternative activities have already been played" );
    }
    l_U1189[l_U1196]._fU0 = uParam0;
    l_U1189[l_U1196]._fU4 = uParam1;
    l_U1196++;
    return;
}

void sub_97800(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    if (l_U1206 == 0)
    {
        if (NOT (IS_CHAR_ON_FOOT( sub_1568() )))
        {
            SET_PLAYER_CONTROL( sub_4214(), 0 );
            l_U1236 = iVar5 + 4000;
        }
        l_U1206++;
    }
    if (l_U1206 == 1)
    {
        if (NOT (IS_CHAR_ON_FOOT( sub_1568() )))
        {
            if ((sub_97923( uParam1, 20.00000000 )) || (iVar5 > l_U1236))
            {
                l_U1206++;
            }
            else
            {
                return;
            }
        }
        else
        {
            l_U1206++;
        }
    }
    if (l_U1206 == 2)
    {
        SET_PLAYER_CONTROL( sub_4214(), 0 );
        sub_94580();
        sub_98099();
        l_U1206++;
    }
    if (l_U1206 == 3)
    {
        if (sub_38481())
        {
            sub_98446( uParam1 );
            l_U1236 = iVar5 + 4000;
            SETTIMERA( 0 );
            l_U1206++;
        }
    }
    iVar6 = 1;
    if (l_U1206 == 4)
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam1 ))
            {
                iVar6 = 0;
            }
        }
        if (NOT (IS_CHAR_DEAD( sub_1568() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
            {
                iVar6 = 0;
            }
        }
        if ((iVar6) || (iVar5 > l_U1236))
        {
            l_U1206 = 99;
        }
    }
    if (l_U1206 == 99)
    {
        l_U1205 = 3;
        l_U1206 = 0;
    }
    return;
}

int sub_97923(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1568(), uVar4._fU0, uVar4._fU4, uVar4._fU8, uParam1, uParam1, uParam1, 0 )))
    {
        return 0;
    }
    return 1;
}

void sub_98099()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    l_U1207 = 1;
    iVar2 = 0;
    BEGIN_CAM_COMMANDS( ref iVar2 );
    switch (l_U1199)
    {
        case 11:
        uVar3 = {l_U1014[l_U1188]._fU20};
        uVar6 = {l_U1014[l_U1188]._fU32};
        break;
        case 12:
        uVar3 = {l_U641[l_U1188]._fU20};
        uVar6 = {l_U641[l_U1188]._fU32};
        break;
        default: SCRIPT_ASSERT( "Start_NonMission_Camera_Move_Before_Fade: Unknown activity" );
    }
    CREATE_CAM( 14, ref l_U1208 );
    SET_CAM_POS( l_U1208, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
    SET_CAM_ROT( l_U1208, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
    SET_CAM_ACTIVE( l_U1208, 1 );
    SET_CAM_PROPAGATE( l_U1208, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

void sub_98446(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;
    unknown uVar11;

    iVar3 = -1;
    switch (l_U1199)
    {
        case 11:
        iVar3 = l_U1014[l_U1188]._fU0;
        break;
        case 12:
        iVar3 = l_U641[l_U1188]._fU0;
        break;
        default: SCRIPT_ASSERT( "Start_NonMission_Walk_Towards_Destination: Unknown activity" );
    }
    sub_71112();
    bVar4 = false;
    if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref l_U1209 );
        bVar4 = true;
    }
    OPEN_SEQUENCE_TASK( ref uVar5 );
    if (bVar4)
    {
        if (IS_CHAR_IN_CAR( sub_1568(), l_U1209 ))
        {
            TASK_LEAVE_CAR( 0, l_U1209 );
        }
    }
    uVar6 = {g_U11583[iVar3]._fU0};
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar6._fU0, uVar6._fU4, uVar6._fU8, 2, -2, 2.00000000 );
    CLOSE_SEQUENCE_TASK( uVar5 );
    TASK_PERFORM_SEQUENCE( sub_1568(), uVar5 );
    CLEAR_SEQUENCE_TASK( uVar5 );
    I = 0;
    iVar10 = 0;
    uVar11 = nil;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            if (IS_GROUP_MEMBER( g_U38857[I]._fU0, sub_17788() ))
            {
                l_U1200 = 1;
                REMOVE_CHAR_FROM_GROUP( g_U38857[I]._fU0 );
            }
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                bVar4 = false;
                if (IS_CHAR_IN_ANY_CAR( g_U38857[I]._fU0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U38857[I]._fU0, ref uVar11 );
                    bVar4 = true;
                }
                GENERATE_RANDOM_INT_IN_RANGE( 500, 1500, ref iVar10 );
                OPEN_SEQUENCE_TASK( ref uVar5 );
                if (bVar4)
                {
                    if (IS_CHAR_IN_CAR( g_U38857[I]._fU0, uVar11 ))
                    {
                        TASK_PAUSE( 0, iVar10 );
                        TASK_LEAVE_CAR( 0, uVar11 );
                    }
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar6._fU0, uVar6._fU4, uVar6._fU8, 2, -2, 2.00000000 );
                CLOSE_SEQUENCE_TASK( uVar5 );
                TASK_PERFORM_SEQUENCE( g_U38857[I]._fU0, uVar5 );
                CLEAR_SEQUENCE_TASK( uVar5 );
            }
        }
    }
    return;
}

void sub_99300(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    int iVar18;

    iVar13 = 0;
    switch (l_U1199)
    {
        case 11:
        uVar5 = l_U1014[l_U1188]._fU0;
        uVar6 = {g_U11583[uVar5]._fU0};
        uVar9 = {l_U1014[l_U1188]._fU4};
        uVar12 = l_U1014[l_U1188]._fU16;
        iVar13 = 1;
        break;
        case 12:
        uVar5 = l_U641[l_U1188]._fU0;
        uVar6 = {g_U11583[uVar5]._fU0};
        uVar9 = {l_U641[l_U1188]._fU4};
        uVar12 = l_U641[l_U1188]._fU16;
        break;
        default: SCRIPT_ASSERT( "Has_NonMission_Cutscene_Ended: Unknown activity" );
    }
    if (l_U1206 == 0)
    {
        g_U10501 = 0;
        SETTIMERA( 0 );
        l_U1206++;
    }
    if (l_U1206 == 1)
    {
        if (NOT (sub_75237( (uParam2^) )))
        {
            l_U1206++;
        }
    }
    if (l_U1206 == 2)
    {
        if (TIMERA() >= 1500)
        {
            DO_SCREEN_FADE_OUT( 1000 );
            SETTIMERA( 0 );
            l_U1206++;
        }
    }
    if (l_U1206 == 3)
    {
        if ((TIMERA() > 1200) AND (IS_SCREEN_FADED_OUT()))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1568() );
            CLEAR_CHAR_TASKS_IMMEDIATELY( uParam1 );
            l_U1206++;
        }
    }
    if (l_U1206 == 4)
    {
        if (IS_VEH_DRIVEABLE( l_U1209 ))
        {
            SET_CAR_HEADING( l_U1209, uVar12 );
            SET_CAR_COORDINATES( l_U1209, uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( l_U1209 );
        }
        if (NOT l_U1186)
        {
            SET_CHAR_COORDINATES( uParam1, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            uVar14 = {sub_99873( uVar6, uVar9 )};
            SET_CHAR_COORDINATES( sub_1568(), uVar14._fU0, uVar14._fU4, uVar14._fU8 );
            sub_100092( uVar6, uVar9, uParam0 );
            uVar17 = sub_101072( uVar9, uVar6 );
            SET_CHAR_HEADING( uParam1, uVar17 );
            uVar17 = sub_101072( uVar9, uVar14 );
            SET_CHAR_HEADING( sub_1568(), uVar17 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_94730( uVar9, uVar12 );
            SET_CURRENT_CHAR_WEAPON( sub_1568(), 0, 0 );
        }
        SETTIMERA( 0 );
        l_U1206++;
    }
    if (l_U1206 == 5)
    {
        SET_CAM_ACTIVE( l_U1208, 0 );
        SET_CAM_PROPAGATE( l_U1208, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar18 = 0;
        END_CAM_COMMANDS( ref iVar18 );
        l_U1207 = 0;
        l_U1206++;
    }
    if (l_U1206 == 6)
    {
        if (l_U1186)
        {
            g_U10502 = 1;
            l_U1206 = 99;
        }
        else if (l_U1199 == 11)
        {
            g_U10501 = 1;
            l_U1206++;
        }
        else
        {
            g_U10502 = 1;
            if (TIMERA() >= 1000)
            {
                DO_SCREEN_FADE_IN( 1000 );
                SETTIMERA( 0 );
                l_U1206++;
            }
        }
    }
    if (l_U1206 == 7)
    {
        if (g_U10501)
        {
            l_U1206++;
        }
        else if ((TIMERA() > 1200) AND (IS_SCREEN_FADED_IN()))
        {
            l_U1206++;
        }
    }
    if (l_U1206 == 8)
    {
        SET_PLAYER_CONTROL( sub_4214(), 1 );
        SET_GROUP_MEMBER( sub_17788(), uParam1 );
        l_U1201 = 1;
        sub_49925();
        l_U1206++;
    }
    if (l_U1206 == 9)
    {
        if (l_U1199 == 11)
        {
            if (NOT g_U10491)
            {
                PRINT_HELP( "FRDRUNK" );
                g_U10491 = 1;
            }
        }
        l_U1206 = 99;
    }
    if (l_U1206 == 99)
    {
        l_U1205 = 4;
        l_U1206 = 0;
    }
    return;
}

void sub_99873(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;
    unknown uVar9;
    unknown uVar10;

    Result = {uParam0};
    if ((uParam3._fU0 - uParam0._fU0) > 0)
    {
        Result._fU0 += 2.00000000;
    }
    else
    {
        Result._fU0 -= 2.00000000;
    }
    if ((uParam3._fU4 - uParam0._fU4) > 0)
    {
        Result._fU4 += 2.00000000;
    }
    else
    {
        Result._fU4 -= 2.00000000;
    }
    Result._fU8 += 2.00000000;
    GET_GROUND_Z_FOR_3D_COORD( Result._fU0, Result._fU4, Result._fU8, ref Result._fU8 );
    return Result;
}

void sub_100092(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6)
{
    int iVar9;
    int I;
    boolean bVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    iVar9 = 0;
    I = 0;
    bVar11 = false;
    for ( I = 0; I < 3; I++ )
    {
        bVar11 = false;
        if (sub_21048( I ))
        {
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                switch (I)
                {
                    case 0:
                    if (NOT (iParam6 == 1))
                    {
                        bVar11 = true;
                    }
                    break;
                    case 1:
                    if (NOT (iParam6 == 6))
                    {
                        bVar11 = true;
                    }
                    break;
                    case 2:
                    if (NOT (iParam6 == 7))
                    {
                        bVar11 = true;
                    }
                    break;
                }
                if (bVar11)
                {
                    uVar12 = {sub_99873( uParam0, uParam3 )};
                    uVar15 = {sub_100295( uVar12, uParam0, iVar9 )};
                    if (IS_CHAR_IN_ANY_CAR( g_U38857[I]._fU0 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( g_U38857[I]._fU0, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( g_U38857[I]._fU0, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                    }
                    iVar9++;
                }
            }
        }
    }
    return;
}

void sub_100295(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;
    int iVar10;
    float fVar11;
    float fVar12;
    unknown Result;
    unknown uVar14;
    unknown uVar15;

    iVar9 = uParam6;
    iVar10 = 0;
    fVar11 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar11 );
    fVar12 = 0.00000000;
    PRINTSTRING( "... Get Offset for other friend: " );
    PRINTSTRING( "+x, " );
    Result = {uParam0};
    Result._fU0 += 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( "+y, " );
    Result = {uParam0};
    Result._fU4 += 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( "-x, " );
    Result = {uParam0};
    Result._fU0 -= 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( "-y " );
    Result = {uParam0};
    Result._fU4 -= 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( " NO\n" );
    return uParam0;
}

void sub_101072(vector vParam0, vector vParam3)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float Result;

    uVar8 = {vParam0 - vParam3};
    Result = 0.00000000;
    GET_HEADING_FROM_VECTOR_2D( uVar8._fU0, uVar8._fU4, ref Result );
    return Result;
}

void sub_101691(unknown uParam0)
{
    unknown uVar3;

    l_U1182 = sub_101707( l_U1199, uParam0 );
    sub_97539( l_U1199, l_U1182 );
    uVar3 = sub_10526( l_U1235 );
    sub_72053( uVar3, l_U1199 );
    switch (l_U1199)
    {
        case 11:
        sub_102570( uVar3 );
        sub_102864();
        break;
        case 12:
        sub_102899( uVar3 );
        sub_102978();
        if (NOT (IS_CHAR_DEAD( sub_1568() )))
        {
            SET_CHAR_HEALTH( sub_1568(), 200 );
            RESET_VISIBLE_PED_DAMAGE( sub_1568() );
        }
        break;
        default: SCRIPT_ASSERT( "Perform_Alternative_NonMinigame_Complete: Unknown non-minigame ID" );
    }
    l_U1198 = 0;
    l_U1181 = l_U1199;
    l_U1199 = 22;
    if (l_U1179)
    {
        l_U1185 = 1;
    }
    if (l_U1181 == 11)
    {
        l_U1210 = 1;
    }
    if (l_U1181 == 12)
    {
        l_U1211 = 1;
    }
    l_U1205 = 5;
    return;
}

int sub_101707(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 11: return sub_101748( uParam1, l_U1188 );
        case 12: return sub_102084( uParam1, l_U1188 );
    }
    SCRIPT_ASSERT( "Return_Alternative_NonMinigame_Result_For_Activity: unknown activity" );
    return 8;
}

int sub_101748(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: return sub_101792( uParam1 );
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Friend: unknown friend" );
    return 8;
}

int sub_101792(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U1014[uParam0]._fU0;
    uVar4 = g_U11583[uVar3]._fU16;
    switch (uVar4)
    {
        case 10: return 0;
        case 8:
        case 12: return 2;
        case 11:
        case 9:
        case 13: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Roman: Unknown Map Blip Subgroup" );
    return 8;
}

int sub_102084(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: return sub_102128( uParam1 );
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Friend: unknown friend" );
    return 8;
}

int sub_102128(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U641[uParam0]._fU0;
    uVar4 = g_U11583[uVar3]._fU16;
    switch (uVar4)
    {
        case 18:
        case 19: return 0;
        case 20:
        case 15: return 2;
        case 17:
        case 16: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Roman: Unknown Food Map Blip Subgroup" );
    return 8;
}

void sub_102570(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_102581( uParam0 );
    fVar4 = 50;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_102677( fVar5 );
    sub_102827( uVar6 );
    return;
}

float sub_102581(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 1.00000000;
        case 6: return 1.00000000;
        case 7: return 1.00000000;
    }
    return 1.00000000;
}

void sub_102677(unknown uParam0)
{
    int iVar3;
    int Result;
    int iVar5;

    iVar3 = sub_102686();
    if (iVar3 < 0)
    {
        iVar3 = 0;
    }
    Result = FLOOR( uParam0 );
    if (Result > iVar3)
    {
        Result = iVar3;
    }
    iVar5 = Result * -1;
    sub_102782( iVar5 );
    return Result;
}

void sub_102686()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_4214() ))
    {
        STORE_SCORE( sub_4214(), ref Result );
    }
    return Result;
}

void sub_102782(unknown uParam0)
{
    ADD_SCORE( sub_4214(), uParam0 );
    return;
}

void sub_102827(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 94, uParam0 );
    return;
}

void sub_102864()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 283, 1 );
    return;
}

void sub_102899(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_102581( uParam0 );
    fVar4 = 100;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_102677( fVar5 );
    sub_102941( uVar6 );
    return;
}

void sub_102941(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 97, uParam0 );
    return;
}

void sub_102978()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 306, 1 );
    return;
}

int sub_103250(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = sub_60275( uParam0 );
    if (iVar6 == 12)
    {
        return 0;
    }
    if (NOT (sub_103283( iVar6 )))
    {
        return 0;
    }
    l_U1205 = 0;
    l_U1206 = 0;
    l_U1198 = 1;
    l_U1199 = uParam0;
    sub_94487( uParam1, uParam2, uParam3 );
    return 1;
}

int sub_103283(int iParam0)
{
    boolean bVar3;

    bVar3 = g_U26739._fU24;
    if (NOT bVar3)
    {
        return 0;
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_103469(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    if (sub_103478() <= 0)
    {
        return 0;
    }
    iVar6 = -1;
    switch (uParam0)
    {
        case 11:
        iVar6 = sub_103545( uParam2 );
        break;
        case 12:
        iVar6 = sub_103972( uParam2 );
        break;
        default: SCRIPT_ASSERT( "Check_If_New_Alternative_NonMinigame_Activity_Started: Unknown Activity ID" );
    }
    if (iVar6 == -1)
    {
        return 0;
    }
    sub_104399();
    l_U1212[uParam0]--;
    l_U1205 = 2;
    l_U1206 = 0;
    l_U1198 = 1;
    l_U1199 = uParam0;
    l_U1188 = iVar6;
    sub_94487( uParam1, uParam2, uParam3 );
    return 1;
}

void sub_103478()
{
    return g_U26739._fU32;
}

int sub_103545(unknown uParam0)
{
    int Result;
    int iVar4;
    int iVar5;
    float fVar6;

    if (NOT (l_U1212[11] > 0))
    {
        return -1;
    }
    Result = 0;
    iVar4 = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    for ( Result = 0; Result < 6; Result++ )
    {
        iVar4 = l_U1014[Result]._fU0;
        if ((sub_103617( Result )) AND (NOT (sub_103680( iVar4 ))))
        {
            iVar5 = g_U11583[iVar4]._fU28 == g_U10999;
            fVar6 = l_U1014[Result]._fU4._fU8;
            if (((LOCATE_CHAR_ANY_MEANS_3D( sub_1568(), l_U1014[Result]._fU4._fU0, l_U1014[Result]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar5 )) AND (NOT (sub_37512( sub_1568() )))) AND (sub_67373( 1, 1 )))
            {
                if (IS_CHAR_ON_FOOT( sub_1568() ))
                {
                    if (sub_97923( uParam0, 1092616192 ))
                    {
                        return Result;
                    }
                }
                else
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_103617(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U1014[uParam0]._fU0;
    if (NOT g_U10994[g_U11583[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    return 1;
}

int sub_103680(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 4:
        if (l_U1178 == 10)
        {
            if (NOT l_U1179)
            {
                return 1;
            }
            else if (NOT l_U1185)
            {
                return 1;
            }
        }
        break;
        default:
    }
    return 0;
}

int sub_103972(unknown uParam0)
{
    int Result;
    int iVar4;
    int iVar5;
    float fVar6;

    if (NOT (l_U1212[12] > 0))
    {
        return -1;
    }
    Result = 0;
    iVar4 = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (sub_104031( Result ))
        {
            iVar4 = l_U641[Result]._fU0;
            iVar5 = g_U11583[iVar4]._fU28 == g_U10999;
            fVar6 = l_U641[Result]._fU4._fU8;
            if (((LOCATE_CHAR_ANY_MEANS_3D( sub_1568(), l_U641[Result]._fU4._fU0, l_U641[Result]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar5 )) AND (NOT (sub_37512( sub_1568() )))) AND (sub_67373( 1, 1 )))
            {
                if (IS_CHAR_ON_FOOT( sub_1568() ))
                {
                    if (sub_97923( uParam0, 1092616192 ))
                    {
                        return Result;
                    }
                }
                else
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_104031(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U641[uParam0]._fU0;
    if (NOT g_U10994[g_U11583[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    return 1;
}

void sub_104399()
{
    if (NOT (g_U26739._fU32 > 0))
    {
        return;
    }
    g_U26739._fU32--;
    return;
}

void sub_104717(int iParam0)
{
    if (iParam0 == 12)
    {
        sub_104735();
        return;
    }
    sub_69700();
    return;
}

void sub_104735()
{
    if (l_U521._fU8)
    {
        sub_69700();
        return;
    }
    l_U521._fU32 = 1;
    sub_104774();
    return;
}

void sub_104774()
{
    unknown uVar2;

    if (l_U521._fU24)
    {
        return;
    }
    uVar2 = sub_104804( l_U465 );
    g_U18635[l_U416]._fU892._fU44 = uVar2;
    return;
}

void sub_104804(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_75237( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

boolean sub_104932(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    return 0;
    switch (uParam0)
    {
        case 12: break;
        default: return 0;
    }
    uVar3 = sub_10526( l_U1235 );
    if (NOT g_U18635[uVar3]._fU172)
    {
        return 0;
    }
    if (NOT l_U1179)
    {
        return 0;
    }
    iVar4 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
    return iVar4 < 20;
}

void sub_105086(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if (l_U1180)
    {
        return;
    }
    if (iParam1 == l_U1178)
    {
        return;
    }
    iVar9 = 0;
    sub_69718( uParam6, iVar9 );
    sub_3299( uParam2 );
    sub_3420( 0, sub_1568(), "JOHNNY", 0 );
    sub_3420( uParam3, uParam4, uParam5, 0 );
    sub_105184( iParam1, uParam0, uParam6 );
    return;
}

void sub_105184(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 6:
        sub_105286( uParam1, uParam2 );
        l_U1180 = 1;
        return;
        case 7: return;
        case 10:
        sub_105945( uParam1, uParam2 );
        l_U1180 = 1;
        return;
        case 11:
        sub_106570( uParam1, uParam2 );
        l_U1180 = 1;
        return;
        case 12:
        sub_106892( uParam1, uParam2 );
        l_U1180 = 1;
        return;
        case 16: return;
        case 18:
        sub_107506( uParam1, uParam2 );
        l_U1180 = 1;
        return;
        case 20:
        if (g_U10999 == 2)
        {
            sub_108136( uParam1, uParam2 );
        }
        l_U1180 = 1;
        return;
        case 21:
        sub_108760( uParam1, uParam2 );
        l_U1180 = 1;
        return;
        case 9:
        sub_109120( uParam1, uParam2 );
        l_U1180 = 1;
        return;
    }
    SCRIPT_ASSERT( "Play_Alternative_Activity_Started_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_105286(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_105309( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AHY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: AIR HOCKEY UNEXPECTED YES\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AHY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: AIR HOCKEY UNEXPECTED YES\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AHY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: AIR HOCKEY UNEXPECTED YES\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_105309(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AHD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AHD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AHDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: AIR HOCKEY - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_105945(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_105968( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DDY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: DARTS UNEXPECTED YES\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: DARTS UNEXPECTED YES\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_ADY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: DARTS UNEXPECTED YES\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_105968(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_ADDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: DARTS - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: DARTS - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_ADDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: DARTS - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_106570(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DDRY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: DRINK UNEXPECTED YES\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DRY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: DRINK UNEXPECTED YES\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DDY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: DRINK UNEXPECTED YES\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_106892(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_106915( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DFY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: EAT UNEXPECTED YES\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_FY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: EAT UNEXPECTED YES\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DFY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: EAT UNEXPECTED YES\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_106915(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AFD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: EAT - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_FD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: EAT - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AFD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: EAT - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_107506(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_107529( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DPY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: POOL UNEXPECTED YES\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_PY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: POOL UNEXPECTED YES\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DPY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: POOL UNEXPECTED YES\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_107529(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_APDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: POOL - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_PD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: POOL - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_APD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: POOL - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_108136(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_108159( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_ASHY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: SHOW UNEXPECTED YES\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DSHY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: SHOW UNEXPECTED YES\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DSHY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: SHOW UNEXPECTED YES\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_108159(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_ASHD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: SHOW - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_SHD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: SHOW - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_ASHD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: SHOW - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_108760(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_70237( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DSTY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: STRIP CLUB UNEXPECTED YES\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_STY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: STRIP CLUB UNEXPECTED YES\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DSTY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: STRIP CLUB UNEXPECTED YES\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_109120(unknown uParam0, unknown uParam1)
{
    PRINTSTRING( "***** ARRIVE: BOWLING UNEXPECTED YES\n" );
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_109324()
{
    unknown Result;

    Result = l_U1181;
    l_U1181 = 22;
    return Result;
}

int sub_109370(unknown uParam0)
{
    l_U1187 = 0;
    switch (uParam0)
    {
        case 21: break;
        default: return 0;
    }
    if (l_U1182 == 8)
    {
        SCRIPT_ASSERT( "m_altResultForSpeech = MGR_NOT_SET: Make sure this function called before Activity_Finished_Speech()" );
    }
    if (NOT (l_U1182 == 7))
    {
        return 0;
    }
    l_U1187 = 1;
    return 1;
}

void sub_109601(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if ((NOT l_U1186) AND (NOT l_U1187))
    {
        iVar9 = 0;
        sub_69718( uParam6, iVar9 );
        sub_3299( uParam2 );
        sub_3420( 0, sub_1568(), "JOHNNY", 0 );
        sub_3420( uParam3, uParam4, uParam5, 0 );
        sub_109693( uParam1, l_U1182, uParam0, uParam6 );
    }
    l_U1182 = 8;
    return;
}

void sub_109693(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 6:
        sub_109797( uParam1, uParam2, uParam3 );
        return;
        case 7:
        sub_111615( uParam1, uParam2, uParam3 );
        return;
        case 10:
        sub_113625( uParam1, uParam2, uParam3 );
        return;
        case 11:
        sub_115355( uParam2, uParam3, l_U1188 );
        return;
        case 12:
        sub_116369( uParam2, uParam3, l_U1188 );
        return;
        case 16:
        sub_117529( uParam1, uParam2, uParam3 );
        return;
        case 18:
        sub_119006( uParam1, uParam2, uParam3 );
        return;
        case 20:
        if (g_U10999 == 2)
        {
            sub_120729( uParam1, uParam2, uParam3 );
        }
        else
        {
            sub_121658( uParam1, uParam2, uParam3 );
        }
        return;
        case 21:
        sub_73861( uParam1, uParam2, uParam3 );
        return;
        case 9:
        sub_121802( uParam1, uParam2, uParam3 );
        return;
    }
    SCRIPT_ASSERT( "Play_Activity_Ended_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_109797(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_109851( uParam1, uParam2 );
        break;
        case 2:
        sub_110496( uParam1, uParam2 );
        break;
        case 1:
        sub_110826( uParam1, uParam2 );
        break;
        case 3:
        sub_111177( uParam1, uParam2 );
        break;
        default: sub_5181( "Ended_AirHockey_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_109851(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_109874( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_109874(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AHDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_ALDR", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_ALDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_110496(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_109874( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Draw)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Draw)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Draw)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_110826(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_109874( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AHLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AHLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AHLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_111177(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_109874( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_111615(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_111669( uParam1, uParam2 );
        break;
        case 1:
        sub_112332( uParam1, uParam2 );
        break;
        case 2:
        sub_112692( uParam1, uParam2 );
        break;
        case 3:
        sub_113109( uParam1, uParam2 );
        break;
        default: sub_5181( "Ended_ArmWrestling_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_111669(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_111692( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AWLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Player Won)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AWLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Player Won)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AWLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Player Won)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_111692(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AWLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AWLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AWLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_112332(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_111692( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AWLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Player Lost)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AWLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Player Lost)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AWLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Player Lost)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_112692(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_111692( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AWLF", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Forfeited - Quit while playing)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AWLF", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Forfeited - Quit while playing)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AWLF", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Forfeited - Quit while playing)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_113109(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_111692( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_AWLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Abandoned - Quit before playing)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_AWLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Abandoned - Quit before playing)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_AWLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Abandoned - Quit before playing)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_113625(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_113679( uParam1, uParam2 );
        break;
        case 2:
        sub_114291( uParam1, uParam2 );
        break;
        case 1:
        sub_114603( uParam1, uParam2 );
        break;
        case 3:
        sub_114936( uParam1, uParam2 );
        break;
        default: sub_5181( "Ended_Darts_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_113679(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_113702( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Player Won)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Player Won)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Player Won)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_113702(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_114291(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_113702( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Draw)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Draw)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Draw)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_114603(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_113702( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Player Lost)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Player Lost)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Player Lost)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_114936(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_113702( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Abandoned)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Abandoned)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Abandoned)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_115355(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        sub_115403( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Friend: Unknown friend ID" );
    SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Friend: Needs to be uncommented for E1" );
    return;
}

void sub_115403(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U1014[uParam2]._fU0;
    uVar6 = g_U11583[uVar5]._fU16;
    switch (uVar6)
    {
        case 10:
        sub_115499( uParam0, uParam1 );
        break;
        case 8:
        case 12:
        sub_115698( uParam0, uParam1 );
        break;
        case 11:
        case 9:
        case 13:
        sub_115896( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Jim_Terry_Or_Clay: Unknown Drink Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_115499(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_LPF", uParam1, 7, 1 );
        return;
        case 6:
        sub_40031( "E1FCT3_LPF", uParam1, 7, 1 );
        return;
        case 7:
        sub_40031( "E1FCC3_LPFA", uParam1, 7, 1 );
        return;
    }
    PRINTSTRING( "***** LEAVE: PUB FAVOURITE\n" );
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_115698(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_LPG", uParam1, 7, 1 );
        return;
        case 6:
        sub_40031( "E1FCT3_LPG", uParam1, 7, 1 );
        return;
        case 7:
        sub_40031( "E1FCC3_LPG", uParam1, 7, 1 );
        return;
    }
    PRINTSTRING( "***** ARRIVE: PUB STANDARD\n" );
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_115896(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_LPA", uParam1, 7, 1 );
        return;
        case 6:
        sub_40031( "E1FCT3_LPA", uParam1, 7, 1 );
        return;
        case 7:
        sub_40031( "E1FCC3_LPA", uParam1, 7, 1 );
        return;
    }
    PRINTSTRING( "***** ARRIVE: CLUB STANDARD\n" );
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_116369(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        sub_116417( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_116417(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U641[uParam2]._fU0;
    uVar6 = g_U11583[uVar5]._fU16;
    switch (uVar6)
    {
        case 18:
        case 19:
        sub_116513( uParam0, uParam1 );
        break;
        case 17:
        case 16:
        sub_116978( uParam0, uParam1 );
        break;
        case 15:
        case 20:
        sub_117161( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Jim_Terry_Or_Clay: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_116513(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_116536( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_LEA", uParam1, 7, 1 );
        return;
        case 6:
        sub_40031( "E1FCT3_LEA", uParam1, 7, 1 );
        return;
        case 7:
        sub_40031( "E1FCC3_LEA", uParam1, 7, 1 );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_116536(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_ELD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: EATING - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_ELD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: EATING - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_ELD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: EATING - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_116978(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_116536( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_LEF", uParam1, 7, 1 );
        return;
        case 6:
        sub_40031( "E1FCT3_LEF", uParam1, 7, 1 );
        return;
        case 7:
        sub_40031( "E1FCC3_LEF", uParam1, 7, 1 );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_117161(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_116536( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_LEG", uParam1, 7, 1 );
        return;
        case 6:
        sub_40031( "E1FCT3_LEG", uParam1, 7, 1 );
        return;
        case 7:
        sub_40031( "E1FCC3_LEG", uParam1, 7, 1 );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_117529(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_117575( uParam1, uParam2 );
        break;
        case 1:
        sub_118217( uParam1, uParam2 );
        break;
        case 3:
        sub_118568( uParam1, uParam2 );
        break;
        default: sub_5181( "Ended_HiLoCards_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_117575(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_117598( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_CLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HI-LO CARDS (Player Won)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_CLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HI-LO CARDS (Player Won)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_CLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HI-LO CARDS (Player Won)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_117598(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_CLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HILO CARDS - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_CLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HILO CARDS - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_CLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HILO CARDS - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_118217(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_117598( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_CLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HI-LO CARDS (Player Lost)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_CLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HI-LO CARDS (Player Lost)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_CLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HI-LO CARDS (Player Lost)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_118568(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_117598( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_CLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HI-LO CARDS (Abandoned)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_CLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HI-LO CARDS (Abandoned)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_CLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HI-LO CARDS (Abandoned)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_119006(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_119060( uParam1, uParam2 );
        break;
        case 2:
        sub_119666( uParam1, uParam2 );
        break;
        case 1:
        sub_119975( uParam1, uParam2 );
        break;
        case 3:
        sub_120305( uParam1, uParam2 );
        break;
        default: sub_5181( "Ended_Pool_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_119060(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_119083( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_PLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Player Won)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_PLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Player Won)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_PLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Player Won)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_119083(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_PLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_PLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_PLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_119666(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_119083( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_PLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Draw)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_PLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Draw)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_PLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Draw)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_119975(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_119083( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_PLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Player Lost)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_PLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Player Lost)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_PLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Player Lost)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_120305(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_119083( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_PLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Abandoned)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_PLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Abandoned)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_PLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Abandoned)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_120729(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        sub_120751( uParam1, uParam2 );
    }
    else
    {
        sub_121357( uParam1, uParam2 );
    }
    return;
}

void sub_120751(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_120774( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_SHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: SHOW (Abandoned)\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_SHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: SHOW (Abandoned)\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_SHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: SHOW (Abandoned)\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_120774(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_SHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: SHOW - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_SHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: SHOW - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_SHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: SHOW - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_121357(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_120774( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_SHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: SHOW\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_SHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: SHOW\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_SHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: SHOW\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_121658(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        sub_121680( uParam1, uParam2 );
    }
    else
    {
        sub_121730( uParam1, uParam2 );
    }
    return;
}

void sub_121680(unknown uParam0, unknown uParam1)
{
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_121730(unknown uParam0, unknown uParam1)
{
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_121802(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_121856( uParam1, uParam2 );
        break;
        case 2:
        sub_121906( uParam1, uParam2 );
        break;
        case 1:
        sub_121956( uParam1, uParam2 );
        break;
        case 3:
        sub_122006( uParam1, uParam2 );
        break;
        default: sub_5181( "Ended_Bowling_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_121856(unknown uParam0, unknown uParam1)
{
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_121906(unknown uParam0, unknown uParam1)
{
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_121956(unknown uParam0, unknown uParam1)
{
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_122006(unknown uParam0, unknown uParam1)
{
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_122254(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (iParam0 == 12)
    {
        (uParam1^) = {l_U641[l_U1188]._fU48};
        (uParam2^) = {l_U641[l_U1188]._fU60};
        (uParam3^) = {l_U641[l_U1188]._fU72};
        return;
    }
    return;
}

void sub_122377()
{
    unknown Result;

    Result = g_U26739._fU12;
    g_U26739._fU12 = 12;
    return Result;
}

int sub_122434(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 6;
        case 1: return 7;
        case 2: return 8;
        case 10: return 9;
        case 3: return 10;
        case 4: return 15;
        case 5: return 16;
        case 6: return 18;
        case 8: return 20;
        case 9: return 21;
    }
    SCRIPT_ASSERT( "Convert_Minigame_Activity_To_Phone_Activity: Minigame activity doesn't have a phone activity ID" );
    return 22;
}

int sub_122695(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == 22))
    {
        l_U1184 = iParam0;
    }
    if (l_U1184 == 22)
    {
        return 0;
    }
    if (l_U1184 == l_U1178)
    {
        return 0;
    }
    if (l_U1184 == l_U1183)
    {
        return 0;
    }
    switch (l_U1184)
    {
        case 6: return sub_122855( uParam1 );
        case 10: return sub_123046( uParam1 );
        case 18: return sub_123105( uParam1 );
        case 20: return 0;
        case 21: return sub_123149( uParam1 );
        case 9: return sub_123506( uParam1 );
        case 7:
        case 16: return 0;
    }
    SCRIPT_ASSERT( "Check_If_Issue_No_To_Alternative_Activity: Unrecognised activity ID" );
    return 0;
}

int sub_122855(unknown uParam0)
{
    if (sub_122867( uParam0, 8 ))
    {
        return 1;
    }
    if (sub_122867( uParam0, 39 ))
    {
        return 1;
    }
    return 0;
}

void sub_122867(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = {g_U11583[uParam1]._fU0};
    return sub_122896( uParam0, uVar4 );
}

void sub_122896(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_CHAR_DEAD( sub_1568() ))
    {
        return 0;
    }
    if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_1568(), uParam1._fU0, uParam1._fU4, uParam1._fU8, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return sub_97923( uParam0, 1092616192 );
}

int sub_123046(unknown uParam0)
{
    if (sub_122867( uParam0, 11 ))
    {
        return 1;
    }
    if (sub_122867( uParam0, 43 ))
    {
        return 1;
    }
    return 0;
}

int sub_123105(unknown uParam0)
{
    if (sub_122867( uParam0, 10 ))
    {
        return 1;
    }
    return 0;
}

int sub_123149(unknown uParam0)
{
    int iVar3;

    if (IS_CHAR_DEAD( sub_1568() ))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    GET_INTERIOR_FROM_CHAR( sub_1568(), ref iVar3 );
    if (iVar3 == nil)
    {
        return 0;
    }
    if ((((sub_123239( uParam0, "Bada_room1" )) || (sub_123239( uParam0, "Bada-Private" ))) || (sub_123239( uParam0, "Bada_room2" ))) || (sub_123239( uParam0, "Bada_room1" )))
    {
        return 1;
    }
    if ((((sub_123239( uParam0, "clammainroom" )) || (sub_123239( uParam0, "clampalbkrm" ))) || (sub_123239( uParam0, "clamfronrm" ))) || (sub_123239( uParam0, "clammainroom" )))
    {
        return 1;
    }
    return 0;
}

int sub_123239(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = GET_HASH_KEY( uParam1 );
    GET_KEY_FOR_CHAR_IN_ROOM( sub_1568(), ref iVar5 );
    if (NOT (iVar5 == iVar4))
    {
        return 0;
    }
    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar5 );
    if (NOT (iVar5 == iVar4))
    {
        return 0;
    }
    return 1;
}

int sub_123506(unknown uParam0)
{
    return 0;
}

void sub_123651(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    sub_69718( uParam5, iVar8 );
    sub_3299( uParam1 );
    sub_3420( 0, sub_1568(), "JOHNNY", 0 );
    sub_3420( uParam2, uParam3, uParam4, 0 );
    sub_123718( uParam0, uParam5 );
    l_U1183 = l_U1184;
    return;
}

void sub_123718(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_123741( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: NO TO DIFFERENT ACTIVITY\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: NO TO DIFFERENT ACTIVITY\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: NO TO DIFFERENT ACTIVITY\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_123741(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_40031( "E1FCJ3_DAND", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: NO TO DIFFERENT ACTIVITY - DRUNK\n" );
        return;
        case 6:
        sub_40031( "E1FCT3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: NO TO DIFFERENT ACTIVITY - DRUNK\n" );
        return;
        case 7:
        sub_40031( "E1FCC3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: NO TO DIFFERENT ACTIVITY - DRUNK\n" );
        return;
    }
    sub_40031( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_124480()
{
    sub_124494( 1, 35, 2 );
    return;
}

void sub_124494(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    iVar5 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, uParam2, ref iVar5 );
    iVar5 += iParam1;
    array(ref uVar6._fU0._fU0, 3);
    ref uVar6._fU0;
    ref uVar6;
    uVar13 = sub_28567( uParam0 );
    sub_28814( uVar13, iVar5, 16383, 16383, ref uVar6 );
    sub_29158( ref uVar6, 1 );
    sub_29186( ref uVar6, 0 );
    sub_29214( ref uVar6, 2 );
    sub_29244( ref uVar6 );
    return;
}

void sub_124617(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown uVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U521._fU0)
    {
        l_U536 = 0;
        if (sub_75237( l_U405 ))
        {
            return;
        }
        if (IS_PLAYER_PLAYING( sub_4214() ))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( sub_1568() ))
            {
                return;
            }
            STOP_PED_SPEAKING( sub_1568(), 1 );
        }
        l_U521._fU0 = 0;
        l_U521._fU4 = 1;
        l_U521._fU12 = 0;
        l_U521._fU20 = 0;
        l_U521._fU24 = 0;
        l_U521._fU28 = 0;
        sub_1203();
        return;
    }
    sub_124782( uParam0 );
    if (l_U521._fU4)
    {
        sub_126295( uParam0 );
        if (sub_126522( uParam0 ))
        {
            l_U521._fU4 = 0;
            if (l_U521._fU8)
            {
                l_U521._fU20 = iVar3 + 10000;
            }
            else
            {
                l_U521._fU20 = iVar3 + 15000;
            }
            return;
        }
    }
    if (NOT (l_U521._fU20 == 0))
    {
        if (NOT (sub_126522( uParam0 )))
        {
            l_U521._fU4 = 1;
            l_U521._fU20 = 0;
            return;
        }
        if (iVar3 > l_U521._fU20)
        {
            REQUEST_ANIMS( "Gestures@Niko" );
            if (NOT (HAVE_ANIMS_LOADED( "Gestures@Niko" )))
            {
                return;
            }
            bVar4 = false;
            if (NOT l_U521._fU8)
            {
                sub_127213( l_U416 );
                sub_3420( 0, sub_1568(), l_U579, 0 );
                if (NOT (sub_127547( l_U416, ref l_U465, l_U521._fU16 )))
                {
                    bVar4 = true;
                }
            }
            else
            {
                sub_133133( l_U416 );
                sub_3420( 0, sub_1568(), l_U579, 0 );
                sub_133460( l_U416, ref l_U465 );
            }
            if (bVar4)
            {
                ;
            }
            l_U521._fU20 = 0;
            l_U521._fU12 = 1;
            g_U18635[l_U416]._fU892._fU44 = -1;
        }
        return;
    }
    if (sub_137431( uParam0 ))
    {
        return;
    }
    if (l_U521._fU12)
    {
        if (g_U18635[l_U416]._fU892._fU40 >= 0)
        {
            bVar5 = false;
            if (NOT l_U521._fU24)
            {
                if ((sub_138093( ref l_U465 )) || ((sub_104804( l_U465 )) > 5))
                {
                    bVar5 = true;
                }
            }
            if (bVar5)
            {
                l_U521._fU12 = 0;
                uVar6 = g_U18635[l_U416]._fU892._fU40;
                sub_128073( l_U416, uVar6 );
                if (IS_PLAYER_PLAYING( sub_4214() ))
                {
                    STOP_PED_SPEAKING( sub_1568(), 0 );
                }
                l_U536 = 1;
            }
            return;
        }
    }
    if (l_U536)
    {
        if (sub_138093( ref l_U465 ))
        {
            if (HAVE_ANIMS_LOADED( "Gestures@Niko" ))
            {
                REMOVE_ANIMS( "Gestures@Niko" );
            }
            l_U536 = 0;
        }
    }
    return;
}

void sub_124782(unknown uParam0)
{
    sub_124793( uParam0 );
    sub_125479( uParam0 );
    sub_125894( uParam0 );
    return;
}

void sub_124793(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if ((IS_CHAR_DEAD( sub_1568() )) || (sub_124816( uParam0 )))
    {
        return;
    }
    if ((IS_CHAR_ON_ANY_BIKE( sub_1568() )) || (sub_125057( uParam0 )))
    {
        sub_125197( uParam0 );
        return;
    }
    GET_CHAR_COORDINATES( sub_1568(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_20074( uVar3, uVar6 );
    if (l_U521._fU36)
    {
        if (fVar9 < 6.00000000)
        {
            l_U521._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 12.00000000)
    {
        return;
    }
    l_U521._fU36 = 1;
    sub_104774();
    return;
}

int sub_124816(unknown uParam0)
{
    int I;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 1;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            if (IS_CHAR_INJURED( sub_124872( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_124872(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

int sub_125057(unknown uParam0)
{
    int I;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_ON_ANY_BIKE( uParam0 ))
        {
            return 1;
        }
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            if (NOT (IS_CHAR_INJURED( sub_124872( I ) )))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_124872( I ) ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_125197(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    GET_CHAR_COORDINATES( sub_1568(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_20074( uVar3, uVar6 );
    if (l_U521._fU36)
    {
        if (fVar9 < 15.00000000)
        {
            l_U521._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 80.00000000)
    {
        return;
    }
    l_U521._fU36 = 1;
    sub_104774();
    return;
}

void sub_125479(unknown uParam0)
{
    boolean bVar3;
    int iVar4;
    int iVar5;

    if ((IS_CHAR_DEAD( sub_1568() )) || (sub_125502( uParam0 )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_INJURED( sub_1568() ))
    {
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        iVar4 = 0;
        iVar5 = 0;
        GET_CHAR_HEALTH( sub_1568(), ref iVar4 );
        GET_CHAR_HEALTH( uParam0, ref iVar5 );
        if (l_U521._fU52 == 64537)
        {
            l_U521._fU52 = iVar4;
        }
        if (l_U521._fU56 == 64537)
        {
            l_U521._fU56 = iVar5;
        }
        if (iVar4 < l_U521._fU52)
        {
            bVar3 = true;
        }
        if (iVar5 < l_U521._fU56)
        {
            bVar3 = true;
        }
        l_U521._fU52 = iVar4;
        l_U521._fU56 = iVar5;
    }
    if (l_U521._fU40)
    {
        if (NOT bVar3)
        {
            l_U521._fU40 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    if (l_U521._fU8)
    {
        return;
    }
    l_U521._fU40 = 1;
    sub_104774();
    return;
}

int sub_125502(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_INJURED( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (g_U39174[I] == nil))
        {
            if (IS_CHAR_INJURED( g_U39174[I] ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_125894(unknown uParam0)
{
    boolean bVar3;

    if ((IS_CHAR_DEAD( sub_1568() )) || (sub_124816( uParam0 )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_SHOOTING( sub_1568() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_1568() ))
    {
        bVar3 = true;
    }
    if (sub_125976( uParam0 ))
    {
        bVar3 = true;
    }
    if (sub_126091( uParam0 ))
    {
        bVar3 = true;
    }
    if (l_U521._fU44)
    {
        if (NOT bVar3)
        {
            l_U521._fU44 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    l_U521._fU44 = 1;
    sub_104774();
    return;
}

int sub_125976(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_SHOOTING( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            if (IS_CHAR_SHOOTING( sub_124872( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_126091(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_IN_MELEE_COMBAT( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            if (IS_CHAR_IN_MELEE_COMBAT( sub_124872( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_126295(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (NOT (g_U39172 == 0))
    {
        return;
    }
    if ((l_U501 == 0) || (l_U501 == 1))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            g_U39174[I] = sub_124872( I );
        }
        else
        {
            g_U39174[I] = nil;
        }
        if (NOT (g_U39174[I] == nil))
        {
            SET_BIT( ref g_U39172, I );
        }
    }
    if (NOT (g_U39172 == 0))
    {
        return;
    }
    uVar4 = sub_3793( l_U416 );
    SET_BIT( ref g_U39172, uVar4 );
    g_U39174[uVar4] = uParam0;
    return;
}

int sub_126522(unknown uParam0)
{
    unknown uVar3;

    if ((sub_126531()) || (l_U521._fU24))
    {
        return 0;
    }
    if ((l_U501 == 0) || (l_U501 == 1))
    {
        return 0;
    }
    if (NOT l_U521._fU8)
    {
        if (sub_126663( uParam0 ))
        {
            return 1;
        }
        if ((NOT (IS_CHAR_DEAD( sub_1568() ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar3 );
                if (IS_CHAR_IN_CAR( uParam0, uVar3 ))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 1;
}

int sub_126531()
{
    if (((((l_U521._fU32) || (l_U521._fU36)) || (l_U521._fU40)) || (l_U521._fU44)) || (l_U521._fU48))
    {
        return 1;
    }
    return 0;
}

int sub_126663(unknown uParam0)
{
    if ((sub_126531()) || (l_U521._fU24))
    {
        return 0;
    }
    if (NOT l_U521._fU8)
    {
        if ((NOT (IS_CHAR_DEAD( sub_1568() ))) AND (NOT (sub_124816( uParam0 ))))
        {
            if (IS_CHAR_ON_ANY_BIKE( sub_1568() ))
            {
                if (sub_126753( uParam0 ))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 1;
}

int sub_126753(unknown uParam0)
{
    int I;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_ON_ANY_BIKE( uParam0 )))
    {
        return 0;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_21048( I ))
        {
            if (IS_CHAR_INJURED( sub_124872( I ) ))
            {
                return 0;
            }
            if (NOT (IS_CHAR_ON_ANY_BIKE( sub_124872( I ) )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_127213(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_3299( "E12WA" );
        return;
        case 6:
        sub_3299( "E12WA" );
        return;
        case 7:
        sub_3299( "E12WA" );
        return;
    }
    sub_5181( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Not a friend" );
    sub_5181( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Should never reach here" );
    return;
}

int sub_127547(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    boolean bVar9;
    int iVar10;

    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: Unrecognised friend ID" );
        return 0;
    }
    sub_127670();
    g_U18635[uParam0]._fU892._fU40 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_128638( uParam0 );
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if ((NOT g_U18635[uParam0]._fU892._fU28) AND (uParam2))
    {
        iVar6 = g_U18635[uParam0]._fU892._fU24;
        I = 0;
        for ( I = 0; I < iVar6; I++ )
        {
            if ((sub_127716( uParam0, I )) AND (NOT (sub_127981( uParam0, I ))))
            {
                sub_127897( uParam0, I );
            }
        }
    }
    sub_129193( uParam0 );
    iVar5 = 0;
    iVar6 = g_U18635[uParam0]._fU892._fU24;
    I = 0;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT (sub_127716( uParam0, I )))
        {
            iVar5++;
        }
    }
    if ((iVar5 == 0) AND (uParam2))
    {
        for ( I = 0; I < iVar6; I++ )
        {
            if (NOT (sub_127981( uParam0, I )))
            {
                sub_127897( uParam0, I );
                iVar5++;
            }
        }
    }
    if (iVar5 == 0)
    {
        return 0;
    }
    iVar8 = 0;
    if (g_U18635[uParam0]._fU892._fU28)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar5, ref iVar8 );
    }
    bVar9 = false;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT bVar9)
        {
            if (NOT (sub_127716( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    if (sub_129450( I ))
                    {
                        g_U18635[uParam0]._fU892._fU40 = I;
                        sub_127808( uParam0, I );
                        bVar9 = true;
                    }
                }
                else
                {
                    iVar8--;
                }
            }
        }
    }
    if (NOT bVar9)
    {
        return 0;
    }
    PRINTSTRING( "AFTER\n" );
    sub_128638( uParam0 );
    iVar10 = 0;
    switch (uParam0)
    {
        case 1:
        sub_130905( uParam1, iVar10 );
        return 1;
        case 6:
        sub_132175( uParam1, iVar10 );
        return 1;
        case 7:
        sub_132591( uParam1, iVar10 );
        return 1;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: must have forgotten to update friend ID when added speech" );
    return 0;
}

void sub_127670()
{
    int iVar2;
    int I;
    int iVar4;
    int iVar5;

    iVar2 = g_U18635[1]._fU892._fU24;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (((sub_127716( 1, I )) || (sub_127716( 6, I ))) || (sub_127716( 7, I )))
        {
            sub_127808( 1, I );
            sub_127808( 6, I );
            sub_127808( 7, I );
        }
        else
        {
            sub_127897( 1, I );
            sub_127897( 6, I );
            sub_127897( 7, I );
        }
        if (((sub_127981( 1, I )) || (sub_127981( 6, I ))) || (sub_127981( 7, I )))
        {
            sub_128073( 1, I );
            sub_128073( 6, I );
            sub_128073( 7, I );
        }
        else
        {
            sub_128162( 1, I );
            sub_128162( 6, I );
            sub_128162( 7, I );
        }
    }
    iVar4 = g_U18635[1]._fU892._fU24;
    iVar5 = (g_U18635[1]._fU892._fU32 + iVar4) - 1;
    I = 0;
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (((sub_127716( 1, I )) || (sub_127716( 6, I ))) || (sub_127716( 7, I )))
        {
            sub_127808( 1, I );
            sub_127808( 6, I );
            sub_127808( 7, I );
        }
        else
        {
            sub_127897( 1, I );
            sub_127897( 6, I );
            sub_127897( 7, I );
        }
        if (((sub_127981( 1, I )) || (sub_127981( 6, I ))) || (sub_127981( 7, I )))
        {
            sub_128073( 1, I );
            sub_128073( 6, I );
            sub_128073( 7, I );
        }
        else
        {
            sub_128162( 1, I );
            sub_128162( 6, I );
            sub_128162( 7, I );
        }
    }
    return;
}

void sub_127716(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
}

void sub_127808(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
    return;
}

void sub_127897(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
    return;
}

void sub_127981(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
}

void sub_128073(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
    return;
}

void sub_128162(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
    return;
}

void sub_128638(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    char[64] cVar7;

    iVar3 = g_U18635[uParam0]._fU892._fU24;
    iVar4 = iVar3 + g_U18635[uParam0]._fU892._fU32;
    I = 0;
    iVar6 = 0;
    StrCopy( ref cVar7, "", 64 );
    for ( I = 0; I < iVar4; I++ )
    {
        if (I == iVar3)
        {
            ConcatString(ref cVar7, " ", 64);
            iVar6++;
            if (iVar6 == 64)
            {
                PRINTSTRING( ref cVar7 );
                StrCopy( ref cVar7, "", 64 );
                iVar6 = 0;
            }
        }
        if (sub_127716( uParam0, I ))
        {
            ConcatString(ref cVar7, "1", 64);
        }
        else
        {
            ConcatString(ref cVar7, "0", 64);
        }
        iVar6++;
        if (iVar6 == 64)
        {
            PRINTSTRING( ref cVar7 );
            StrCopy( ref cVar7, "", 64 );
            iVar6 = 0;
        }
    }
    if (iVar6 < 64)
    {
        ConcatString(ref cVar7, " ", 64);
    }
    PRINTSTRING( ref cVar7 );
    PRINTNL();
    iVar6 = 0;
    StrCopy( ref cVar7, "", 64 );
    for ( I = 0; I < iVar4; I++ )
    {
        if (I == iVar3)
        {
            ConcatString(ref cVar7, " ", 64);
            iVar6++;
            if (iVar6 == 64)
            {
                PRINTSTRING( ref cVar7 );
                StrCopy( ref cVar7, "", 64 );
                iVar6 = 0;
            }
        }
        if (sub_127981( uParam0, I ))
        {
            ConcatString(ref cVar7, "1", 64);
        }
        else
        {
            ConcatString(ref cVar7, "0", 64);
        }
        iVar6++;
        if (iVar6 == 64)
        {
            PRINTSTRING( ref cVar7 );
            StrCopy( ref cVar7, "", 64 );
            iVar6 = 0;
        }
    }
    if (iVar6 < 64)
    {
        ConcatString(ref cVar7, " ", 64);
    }
    PRINTSTRING( ref cVar7 );
    PRINTNL();
    PRINTNL();
    return;
}

void sub_129193(unknown uParam0)
{
    return;
}

int sub_129450(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    g_U39173 = 0;
    switch (uParam0)
    {
        case 0:
        case 2:
        case 6:
        case 10:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 1 )))
        {
            sub_129833( "E13WA" );
            sub_3420( 1, g_U39174[0], "JIM", 0 );
            sub_3420( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
        }
        break;
        case 1:
        case 3:
        case 7:
        case 11:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_129833( "E13WA" );
            sub_3420( 1, g_U39174[0], "JIM", 0 );
            sub_3420( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar5 = true;
        }
        break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 20:
        case 23:
        case 26:
        if (IS_BIT_SET( g_U39172, 0 ))
        {
            sub_129833( "E12WA" );
            sub_3420( 1, g_U39174[0], "JIM", 0 );
            g_U39173 = 1;
            bVar3 = true;
        }
        break;
        case 18:
        case 21:
        case 24:
        case 27:
        case 30:
        case 33:
        case 36:
        if (IS_BIT_SET( g_U39172, 2 ))
        {
            sub_129833( "E12WA" );
            sub_3420( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar5 = true;
        }
        break;
        case 19:
        case 22:
        case 25:
        case 28:
        case 31:
        case 34:
        case 37:
        if (IS_BIT_SET( g_U39172, 1 ))
        {
            sub_129833( "E12WA" );
            sub_3420( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar4 = true;
        }
        break;
        case 4:
        case 8:
        case 12:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_129833( "E12WA" );
            sub_3420( 1, g_U39174[0], "JIM", 0 );
            sub_3420( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 0;
            bVar3 = true;
            bVar5 = true;
        }
        break;
        case 5:
        case 9:
        case 13:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 1 )))
        {
            sub_129833( "E12WA" );
            sub_3420( 1, g_U39174[0], "JIM", 0 );
            sub_3420( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 0;
            bVar3 = true;
            bVar4 = true;
        }
        break;
        case 29:
        case 32:
        case 35:
        if ((IS_BIT_SET( g_U39172, 2 )) AND (IS_BIT_SET( g_U39172, 1 )))
        {
            sub_129833( "E12WA" );
            sub_3420( 3, g_U39174[2], "CLAY", 0 );
            sub_3420( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 0;
            bVar5 = true;
            bVar4 = true;
        }
        break;
    }
    if (((NOT bVar3) AND (NOT bVar4)) AND (NOT bVar5))
    {
        return 0;
    }
    if (NOT bVar3)
    {
        CLEAR_BIT( ref g_U39172, 0 );
        g_U39174[0] = nil;
    }
    if (NOT bVar4)
    {
        CLEAR_BIT( ref g_U39172, 1 );
        g_U39174[1] = nil;
    }
    if (NOT bVar5)
    {
        CLEAR_BIT( ref g_U39172, 2 );
        g_U39174[2] = nil;
    }
    return 1;
}

int sub_129833(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U6._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_130905(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 1;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_5181( "FA_Jim Speech_Generic_Conversations: inconsistent number of Jim conversations - see Jim Flow" );
        return;
    }
    sub_131047();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_129450( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Jim_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_132031( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_40031( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_131047()
{
    StrCopy( ref l_U216[0], "E13W_JT1", 16 );
    StrCopy( ref l_U216[2], "E13W_JT2", 16 );
    StrCopy( ref l_U216[6], "E13W_JT3", 16 );
    StrCopy( ref l_U216[10], "E13W_JT4", 16 );
    StrCopy( ref l_U216[1], "E13W_JC1", 16 );
    StrCopy( ref l_U216[3], "E13W_JC2", 16 );
    StrCopy( ref l_U216[7], "E13W_JC3", 16 );
    StrCopy( ref l_U216[11], "E13W_JC4", 16 );
    StrCopy( ref l_U216[14], "E12W_J1", 16 );
    StrCopy( ref l_U216[15], "E12W_J2", 16 );
    StrCopy( ref l_U216[16], "E12W_J3", 16 );
    StrCopy( ref l_U216[17], "E12W_J4", 16 );
    StrCopy( ref l_U216[20], "E12W_J5", 16 );
    StrCopy( ref l_U216[23], "E12W_J6", 16 );
    StrCopy( ref l_U216[26], "E12W_J7", 16 );
    StrCopy( ref l_U216[18], "E12W_C1", 16 );
    StrCopy( ref l_U216[21], "E12W_C2", 16 );
    StrCopy( ref l_U216[24], "E12W_C3", 16 );
    StrCopy( ref l_U216[27], "E12W_C4", 16 );
    StrCopy( ref l_U216[30], "E12W_C5", 16 );
    StrCopy( ref l_U216[33], "E12W_C6", 16 );
    StrCopy( ref l_U216[36], "E12W_C7", 16 );
    StrCopy( ref l_U216[19], "E12W_T1", 16 );
    StrCopy( ref l_U216[22], "E12W_T2", 16 );
    StrCopy( ref l_U216[25], "E12W_T3", 16 );
    StrCopy( ref l_U216[28], "E12W_T4", 16 );
    StrCopy( ref l_U216[31], "E12W_T5", 16 );
    StrCopy( ref l_U216[34], "E12W_T6", 16 );
    StrCopy( ref l_U216[37], "E12W_T7", 16 );
    StrCopy( ref l_U216[4], "E12W_CJ1", 16 );
    StrCopy( ref l_U216[8], "E12W_CJ2", 16 );
    StrCopy( ref l_U216[12], "E12W_CJ3", 16 );
    StrCopy( ref l_U216[5], "E12W_TJ1", 16 );
    StrCopy( ref l_U216[9], "E12W_TJ2", 16 );
    StrCopy( ref l_U216[13], "E12W_TJ3", 16 );
    StrCopy( ref l_U216[29], "E12W_CT1", 16 );
    StrCopy( ref l_U216[32], "E12W_CT2", 16 );
    StrCopy( ref l_U216[35], "E12W_CT3", 16 );
    return;
}

void sub_132031(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_132056( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_132056(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_40106( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_132175(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 6;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_5181( "FA_Terry_Speech_Generic_Conversations: inconsistent number of Terry conversations - see Terry Flow" );
        return;
    }
    sub_131047();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_129450( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Terry_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_132031( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_40031( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_132591(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_5181( "FA_Clay_Speech_Generic_Conversations: inconsistent number of Clay conversations - see Clay Flow" );
        return;
    }
    sub_131047();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_129450( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Clay_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_132031( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_40031( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_133133(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_3299( "E1DRA" );
        return;
        case 6:
        sub_3299( "E1DRA" );
        return;
        case 7:
        sub_3299( "E1DRA" );
        return;
    }
    sub_5181( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Not a friend" );
    sub_5181( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_133460(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    boolean bVar9;
    int iVar10;
    int iVar11;

    PRINTSTRING( "DRUNK TALK..........................FA_Friend_Speech_Drunken_Conversations\n" );
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: Unrecognised friend ID" );
        return;
    }
    g_U18635[uParam0]._fU892._fU40 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_128638( uParam0 );
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if (NOT g_U18635[uParam0]._fU892._fU36)
    {
        iVar5 = g_U18635[uParam0]._fU892._fU24;
        iVar6 = (g_U18635[uParam0]._fU892._fU32 + iVar5) - 1;
        I = 0;
        for ( I = iVar5; I <= iVar6; I++ )
        {
            if ((sub_127716( uParam0, I )) AND (NOT (sub_127981( uParam0, I ))))
            {
                sub_127897( uParam0, I );
            }
        }
    }
    iVar4 = 0;
    iVar5 = g_U18635[uParam0]._fU892._fU24;
    iVar6 = (g_U18635[uParam0]._fU892._fU32 + iVar5) - 1;
    PRINTSTRING( ".......FIRST DRUNKEN: " );
    PRINTINT( iVar5 );
    PRINTSTRING( "       LAST DRUNKEN: " );
    PRINTINT( iVar6 );
    PRINTNL();
    I = 0;
    for ( I = iVar5; I <= iVar6; I++ )
    {
        if (NOT (sub_127716( uParam0, I )))
        {
            iVar4++;
        }
    }
    PRINTSTRING( "......TO BE TRIGGERED: " );
    PRINTINT( iVar4 );
    PRINTNL();
    if (iVar4 == 0)
    {
        for ( I = iVar5; I <= iVar6; I++ )
        {
            if (NOT (sub_127981( uParam0, I )))
            {
                sub_127897( uParam0, I );
                iVar4++;
            }
        }
    }
    if (iVar4 == 0)
    {
        return;
    }
    iVar8 = 0;
    if (g_U18635[uParam0]._fU892._fU36)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref iVar8 );
    }
    bVar9 = false;
    iVar10 = 0;
    for ( I = iVar5; I <= iVar6; I++ )
    {
        if (NOT bVar9)
        {
            if (NOT (sub_127716( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    PRINTSTRING( "......CHECKING FRIENDS AVAILABLE\n" );
                    iVar10 = I - iVar5;
                    if (sub_134411( iVar10 ))
                    {
                        g_U18635[uParam0]._fU892._fU40 = I;
                        sub_127808( uParam0, I );
                        bVar9 = true;
                    }
                }
                else
                {
                    iVar8--;
                }
            }
        }
    }
    if (NOT bVar9)
    {
        return;
    }
    PRINTSTRING( "AFTER\n" );
    sub_128638( uParam0 );
    iVar11 = 0;
    switch (uParam0)
    {
        case 1:
        sub_135594( uParam1, iVar11 );
        return;
        case 6:
        sub_136398( uParam1, iVar11 );
        return;
        case 7:
        sub_136837( uParam1, iVar11 );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: must have forgotten to update friend ID when added speech" );
    return;
}

int sub_134411(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    g_U39173 = 0;
    switch (uParam0)
    {
        case 0:
        case 1:
        if (((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 1 ))) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_129833( "E1DRA" );
            sub_3420( 1, g_U39174[0], "JIM", 0 );
            sub_3420( 2, g_U39174[1], "TERRY", 0 );
            sub_3420( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
            bVar5 = true;
        }
        break;
        case 2:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 1 )))
        {
            sub_129833( "E1DRA" );
            sub_3420( 1, g_U39174[0], "JIM", 0 );
            sub_3420( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
        }
        break;
        case 3:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_129833( "E1DRA" );
            sub_3420( 1, g_U39174[0], "JIM", 0 );
            sub_3420( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar5 = true;
        }
        break;
        case 4:
        case 8:
        case 13:
        if ((IS_BIT_SET( g_U39172, 1 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_129833( "E1DRA" );
            sub_3420( 2, g_U39174[1], "TERRY", 0 );
            sub_3420( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar4 = true;
            bVar5 = true;
        }
        break;
        case 6:
        case 9:
        case 11:
        case 14:
        case 16:
        if (IS_BIT_SET( g_U39172, 2 ))
        {
            sub_129833( "E1DRA" );
            sub_3420( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar5 = true;
        }
        break;
        case 7:
        case 10:
        case 12:
        case 15:
        case 17:
        if (IS_BIT_SET( g_U39172, 1 ))
        {
            sub_129833( "E1DRA" );
            sub_3420( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar4 = true;
        }
        break;
        case 5:
        if (IS_BIT_SET( g_U39172, 0 ))
        {
            sub_129833( "E1DRA" );
            sub_3420( 1, g_U39174[0], "JIM", 0 );
            g_U39173 = 1;
            bVar3 = true;
        }
        break;
    }
    if (((NOT bVar3) AND (NOT bVar4)) AND (NOT bVar5))
    {
        return 0;
    }
    if (NOT bVar3)
    {
        CLEAR_BIT( ref g_U39172, 0 );
        g_U39174[0] = nil;
    }
    if (NOT bVar4)
    {
        CLEAR_BIT( ref g_U39172, 1 );
        g_U39174[1] = nil;
    }
    if (NOT bVar5)
    {
        CLEAR_BIT( ref g_U39172, 2 );
        g_U39174[2] = nil;
    }
    return 1;
}

void sub_135594(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 1;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_5181( "FA_Jim_Speech_Drunk_Conversations: inconsistent number of Jim drunk conversations - see Jim Flow" );
        return;
    }
    sub_135740();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar6 -= g_U18635[iVar4]._fU892._fU24;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_134411( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Jim_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_132031( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_40031( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_135740()
{
    StrCopy( ref l_U216[0], "E1DR_4W1", 16 );
    StrCopy( ref l_U216[1], "E1DR_4W2", 16 );
    StrCopy( ref l_U216[2], "E1DR_4W3", 16 );
    StrCopy( ref l_U216[3], "E1DR_4W4", 16 );
    StrCopy( ref l_U216[4], "E1DR_4W5", 16 );
    StrCopy( ref l_U216[8], "E1DR_JTC1", 16 );
    StrCopy( ref l_U216[13], "E1DR_JTC2", 16 );
    StrCopy( ref l_U216[6], "E1DR_JC1", 16 );
    StrCopy( ref l_U216[9], "E1DR_JC2", 16 );
    StrCopy( ref l_U216[11], "E1DR_JC3", 16 );
    StrCopy( ref l_U216[14], "E1DR_JC4", 16 );
    StrCopy( ref l_U216[16], "E1DR_JC5", 16 );
    StrCopy( ref l_U216[7], "E1DR_JT1", 16 );
    StrCopy( ref l_U216[10], "E1DR_JT2", 16 );
    StrCopy( ref l_U216[12], "E1DR_JT3", 16 );
    StrCopy( ref l_U216[15], "E1DR_JT4", 16 );
    StrCopy( ref l_U216[17], "E1DR_JT5", 16 );
    StrCopy( ref l_U216[5], "E12W_JJ", 16 );
    return;
}

void sub_136398(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 6;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_5181( "FA_Terry_Speech_Drunk_Conversations: inconsistent number of Terry drunk conversations - see Terry Flow" );
        return;
    }
    sub_135740();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar6 -= g_U18635[iVar4]._fU892._fU24;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_134411( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Terry_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_132031( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_40031( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_136837(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_5181( "FA_Clay_Speech_Drunk_Conversations: inconsistent number of Clay drunk conversations - see Clay Flow" );
        return;
    }
    sub_135740();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar6 -= g_U18635[iVar4]._fU892._fU24;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_134411( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Clay_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_132031( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_40031( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

int sub_137431(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if ((sub_125502( uParam0 )) || (IS_CHAR_DEAD( sub_1568() )))
    {
        return l_U521._fU24;
    }
    if (l_U521._fU24)
    {
        if (NOT sub_126531())
        {
            if (g_U18635[l_U416]._fU892._fU44 == -1)
            {
                l_U521._fU24 = 0;
                return 0;
            }
            iVar3 = 0;
            GET_GAME_TIMER( ref iVar3 );
            if (l_U521._fU28 == 0)
            {
                l_U521._fU28 = iVar3 + 3000;
            }
            if (sub_137577())
            {
                l_U521._fU28 = 0;
            }
            if ((NOT (l_U521._fU28 == 0)) AND (iVar3 > l_U521._fU28))
            {
                l_U521._fU28 = 0;
                if (l_U521._fU8)
                {
                    sub_133133( l_U416 );
                    sub_3420( 0, sub_1568(), l_U579, 0 );
                    sub_137696( l_U416, ref l_U465 );
                }
                else
                {
                    sub_127213( l_U416 );
                    sub_3420( 0, sub_1568(), l_U579, 0 );
                    sub_137832( l_U416, ref l_U465 );
                }
                l_U521._fU24 = 0;
                return 0;
            }
            return 1;
        }
        l_U521._fU28 = 0;
        return 1;
    }
    if (sub_126531())
    {
        if (sub_75237( l_U465 ))
        {
            iVar4 = 0;
            sub_69718( ref l_U465, iVar4 );
        }
        l_U521._fU24 = 1;
        l_U521._fU28 = 0;
        return 1;
    }
    return 0;
}

void sub_137577()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_137696(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        sub_135594( uParam1, iVar4 );
        break;
        case 6:
        sub_136398( uParam1, iVar4 );
        break;
        case 7:
        sub_136837( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_137832(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        sub_130905( uParam1, iVar4 );
        break;
        case 6:
        sub_132175( uParam1, iVar4 );
        break;
        case 7:
        sub_132591( uParam1, iVar4 );
        break;
    }
    return;
}

int sub_138093(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            return 0;
        }
    }
    return 1;
}

void sub_138368(unknown uParam0)
{
    int iVar3;
    int I;

    if ((l_U215 >= (uParam0^)) || (l_U215 < 0))
    {
        l_U215 = 0;
    }
    sub_138407( uParam0 );
    if (NOT (IS_CHAR_INJURED( (uParam0^)[l_U215]._fU0 )))
    {
        sub_138720( ref (uParam0^)[l_U215], 1 );
        if (DOES_CHAR_EXIST( (uParam0^)[l_U215]._fU8 ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[l_U215]._fU8 ))
            {
                iVar3 = sub_158072( uParam0, (uParam0^)[l_U215]._fU8 );
                if (iVar3 >= 0)
                {
                    (uParam0^)[l_U215]._fU8 = (uParam0^)[iVar3]._fU8;
                    (uParam0^)[l_U215]._fU40 = (uParam0^)[iVar3]._fU40;
                    PRINTSTRING( "BIKER_BUDDIES_AI_TICK: Biker " );
                    PRINTINT( l_U215 );
                    PRINTSTRING( " is changing leader to " );
                    PRINTINT( iVar3 );
                    PRINTSTRING( "'s leader\n" );
                }
            }
        }
    }
    l_U215++;
    for ( I = 0; I < (uParam0^); I++ )
    {
        sub_157521( ref (uParam0^)[I] );
    }
    return;
}

void sub_138407(unknown uParam0)
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
                iVar3[sub_51971( uVar10 )] = 1;
            }
        }
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_1568() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar10 );
        iVar3[sub_51971( uVar10 )] = 1;
    }
    for ( I = 0; I < iVar3; I++ )
    {
        uVar11 = sub_52248( I );
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

void sub_138720(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_138767( iParam0->_fU92 );
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
        if ((sub_139162( iParam0 )) == 2)
        {
            return;
        }
        sub_140134( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_141750( iParam0 );
        }
        if (sub_88239( iParam0, 1 ))
        {
            sub_146247( iParam0 + 0, 0 );
        }
        else
        {
            sub_146247( iParam0 + 0, 1 );
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
        iVar5 = sub_146538( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_88239( iParam0, 32 ))
            {
                sub_50691( iParam0, 3 );
            }
            else if (sub_88239( iParam0, 64 ))
            {
                if (sub_88239( iParam0, 1 ))
                {
                    sub_50691( iParam0, 5 );
                }
                else
                {
                    sub_50691( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_147589( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_147846( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_148978( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_149092( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_149213( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_149513( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_149869( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_147589( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_147846( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_148978( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_149092( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10956 != 0) || (g_U10958 != 0))
        {
            if ((sub_139740( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_150128( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_150285( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_139740( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_147589( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_147846( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_148978( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_149092( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_146635( iParam0 )) > 30.00000000)
        {
            sub_157436( iParam0 );
        }
        else if ((sub_150128( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_139578( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_157521( iParam0 );
    }
    return;
}

void sub_138767(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_138778( uParam0 );
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

int sub_138778(int iParam0)
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

int sub_139162(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_1568(), ref iVar4 );
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
        if (NOT (((sub_45908( iParam0 + 0 )) == 3) AND ((sub_139305( iVar3 )) == sub_139334())))
        {
            if ((((sub_45908( iParam0 + 0 )) != 1) || ((sub_139380( iParam0->_fU0 )) == (sub_17367( 0 )))) || ((sub_139422( sub_1568() )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1568() )))))
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
        if ((sub_45908( iParam0 + 0 )) == 3)
        {
            sub_51758( iParam0->_fU0, "", sub_1568(), 26 );
        }
        else
        {
            sub_51758( sub_1568(), "", iParam0->_fU0, 37 );
        }
        return sub_139578( iParam0, 1, 1 );
    }
    return 0;
}

void sub_139305(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

int sub_139334()
{
    return 301427732;
}

void sub_139380(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_139422(unknown uParam0)
{
    return (IS_CHAR_IN_ANY_CAR( uParam0 )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )));
}

int sub_139578(int iParam0, unknown uParam1, boolean bParam2)
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
    else if ((sub_139422( iParam0->_fU0 )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))))
    {
        return 2;
    }
    else if ((uParam1) || (sub_88239( iParam0, 1 )))
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
                return sub_139740( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_139923( sub_1568(), 1 )};
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

int sub_139740(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_59142( iParam0 );
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

void sub_139923(unknown uParam0, boolean bParam1)
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

void sub_140134(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_140165( (iParam0^) )))
        {
            if (((sub_140200( (iParam0^) )) AND (NOT l_U154)) AND (NOT l_U155))
            {
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_137577()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_ON_ANY_BIKE( sub_1568() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1568(), iParam0->_fU0, l_U144, l_U144, l_U144, 0 ))
                        {
                            if (sub_140332())
                            {
                                if (iParam0->_fU0 == l_U153)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_40031( (iParam0 + 44) + 12, ref l_U147, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_40031( (iParam0 + 44) + 28, ref l_U147, 7, 1 );
                                    }
                                    sub_140458( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_1568() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_1568(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_1568(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U130 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_1568(), ref l_U159._fU0, ref l_U159._fU4, ref l_U159._fU8 );
                                    GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U162._fU0, ref l_U162._fU4, ref l_U162._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U159._fU0, l_U159._fU4, l_U159._fU8, l_U162._fU0, l_U162._fU4, l_U162._fU8, ref l_U158 );
                                    if (iParam0->_fU0 == l_U153)
                                    {
                                        l_U157 += 1.00000000 * TIMESTEP();
                                        l_U156 = l_U158;
                                    }
                                    else if ((l_U158 <= l_U156) || (IS_CHAR_INJURED( l_U153 )))
                                    {
                                        l_U153 = iParam0->_fU0;
                                        l_U156 = l_U158;
                                        l_U157 = 0.00000000;
                                    }
                                }
                            }
                            else if (NOT sub_140886())
                            {
                                sub_140914();
                            }
                            else if (sub_140971())
                            {
                                sub_140935();
                            }
                            GET_CHAR_COORDINATES( sub_1568(), ref l_U159._fU0, ref l_U159._fU4, ref l_U159._fU8 );
                            GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U162._fU0, ref l_U162._fU4, ref l_U162._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( l_U159._fU0, l_U159._fU4, l_U159._fU8, l_U162._fU0, l_U162._fU4, l_U162._fU8, ref l_U158 );
                            if (iParam0->_fU0 == l_U153)
                            {
                                l_U157 += 1.00000000 * TIMESTEP();
                                l_U156 = l_U158;
                            }
                            else if ((l_U158 <= l_U156) || (IS_CHAR_INJURED( l_U153 )))
                            {
                                l_U153 = iParam0->_fU0;
                                l_U156 = l_U158;
                                l_U157 = 0.00000000;
                            };;;;
                        }
                        else if (NOT sub_141235())
                        {
                            sub_141286( (iParam0^) );
                        }
                    }
                    else if (NOT sub_141235())
                    {
                        sub_141286( (iParam0^) );
                    }
                }
                else if (NOT sub_141235())
                {
                    sub_141286( (iParam0^) );
                }
            }
            else if (NOT sub_141235())
            {
                sub_141286( (iParam0^) );
            }
        }
        else if (NOT sub_141235())
        {
            if ((((((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1568(), iParam0->_fU0, l_U145, l_U145, l_U145, 0 ))) || (NOT (IS_CHAR_ON_ANY_BIKE( sub_1568() )))) || (NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() )))) || (NOT (sub_75237( l_U147 ))))
            {
                sub_141587( iParam0 );
            }
        }
    }
    else if (sub_140165( (iParam0^) ))
    {
        sub_69718( ref l_U147, 0 );
        sub_141587( iParam0 );
    }
    return;
}

void sub_140165(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_140200(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

int sub_140332()
{
    if (NOT l_U131)
    {
        if (l_U130)
        {
            return 1;
        }
    }
    return 0;
}

void sub_140458(int iParam0)
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
    l_U153 = nil;
    l_U157 = 0.00000000;
    l_U154 = 1;
    return;
}

void sub_140886()
{
    return l_U129;
}

void sub_140914()
{
    l_U129 = 1;
    l_U130 = 0;
    sub_140935();
    return;
}

void sub_140935()
{
    l_U131 = 0;
    return;
}

void sub_140971()
{
    return l_U131;
}

void sub_141235()
{
    int Result;

    Result = 0;
    if (sub_75237( l_U137 ))
    {
        Result = 1;
    }
    return Result;
}

void sub_141286(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U153)
    {
        l_U153 = nil;
        l_U157 = 0.00000000;
        sub_141327();
    }
    return;
}

void sub_141327()
{
    if (l_U128 == 1)
    {
        l_U132 = 0.00000000;
        l_U131 = 1;
        l_U130 = 0;
    }
    return;
}

void sub_141587(int iParam0)
{
    sub_69718( ref l_U147, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_1568() )))
    {
        TASK_CLEAR_LOOK_AT( sub_1568() );
    }
    l_U154 = 0;
    return;
}

void sub_141750(int iParam0)
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
    if ((NOT l_U169) || (iParam0->_fU36 == 0))
    {
        return;
    }
    if ((sub_140165( (iParam0^) )) AND (sub_137577()))
    {
        if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
        {
            if (((IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) AND (IS_CHAR_ON_ANY_BIKE( sub_1568() )))
            {
                GET_CHAR_COORDINATES( sub_1568(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U167 != iParam0->_fU0) || (l_U168 != sub_1568()))
                    {
                        sub_51758( iParam0->_fU0, sub_142024( uVar8._fU0 < 0.00000000, sub_51971( iParam0->_fU4 ) ), sub_1568(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_1568() ))
                {
                    l_U167 = sub_1568();
                    l_U168 = iParam0->_fU0;
                }
            }
        }
    }
    if (((sub_137577()) || (sub_140165( (iParam0^) ))) || ((iVar4 - l_U165) < 33))
    {
        return;
    }
    if (l_U165 <= 0)
    {
        l_U165 = iVar4;
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
            if (sub_142677( uVar12 ))
            {
                fVar21 = sub_142720( iParam0 );
                if (((NOT (sub_140165( (iParam0^) ))) AND (((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) AND (fVar21 < 19)) || (fVar21 < 15))) AND (iParam0->_fU0 != l_U167))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((l_U104) AND ((iParam0->_fU36 != 1) || ((sub_52592( 0, 10 )) == 0)))
                    {
                        l_U104 = 0;
                        iVar15 = 17;
                        iVar11 = sub_1568();
                    }
                    else if ((((sub_142914( iParam0 )) AND (iParam0->_fU36 == 2)) AND ((sub_45908( iParam0 + 0 )) == 1)) AND (NOT (IS_BIT_SET( l_U170, 6 ))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_143028( bVar16 );
                        iVar11 = sub_1568();
                    }
                    else if (((IS_CAR_IN_AIR_PROPER( uVar12 )) AND ((ABSF( uVar22 )) < 20.00000000)) AND (sub_143116( 8 )))
                    {
                        uVar13 = sub_51418( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_1568() )) AND (sub_143116( 12 )))
                    {
                        uVar13 = sub_143028( bVar16 );
                        iVar11 = sub_1568();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if (((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 )) || (IS_PED_RAGDOLL( iParam0->_fU0 ))) AND (sub_143116( 13 )))
                    {
                        uVar13 = sub_143028( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if (((((sub_45908( iParam0 + 0 )) == 1) AND (NOT (IS_PLAYER_PRESSING_HORN( sub_4214() )))) AND (IS_BIT_SET( l_U170, 7 ))) AND (sub_143116( 20 )))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_51418( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_1568();
                        CLEAR_BIT( ref l_U170, 7 );
                    }
                    else if ((((IS_WANTED_LEVEL_GREATER( sub_4214(), 0 )) AND (NOT (IS_BIT_SET( l_U170, 0 )))) AND (sub_143116( 24 ))) AND ((sub_45908( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 24;
                        iVar11 = sub_1568();
                    }
                    else if ((((NOT (IS_WANTED_LEVEL_GREATER( sub_4214(), 0 ))) AND (IS_BIT_SET( l_U170, 0 ))) AND (sub_143116( 30 ))) AND ((sub_45908( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_139923( sub_1568(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U170, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_1568() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_1568() ))
                                    {
                                        if (sub_143116( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_1568();
                                            if ((sub_52592( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_51418( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_143028( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U170, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_1568() ))
                                    {
                                        CLEAR_BIT( ref l_U170, 3 );
                                        CLEAR_BIT( ref l_U170, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_1568() ))
                            {
                                if (((sub_143116( 33 )) AND (NOT (IS_BIT_SET( l_U170, 4 )))) AND ((sub_45908( iParam0 + 0 )) == 1))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_51971( uVar23 );
                                        if ((NOT (IS_CAR_A_MISSION_CAR( uVar23 ))) AND ((iVar24 == 1) || (iVar24 == 0)))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U170, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U170, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1568() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_143116( 31 )) AND (NOT (IS_BIT_SET( l_U170, 4 )))) AND ((sub_45908( iParam0 + 0 )) == 1))
                                    {
                                        if (NOT (IS_CAR_A_MISSION_CAR( uVar23 )))
                                        {
                                            iVar15 = 31;
                                            SET_BIT( ref l_U170, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U170, 3 );
                            }
                            else if ((IS_CHAR_ON_FOOT( sub_1568() )) AND (NOT (IS_PED_RAGDOLL( sub_1568() ))))
                            {
                                CLEAR_BIT( ref l_U170, 3 );
                                CLEAR_BIT( ref l_U170, 4 );
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
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U168))
                                {
                                    iVar11 = nil;
                                }
                                else if ((sub_143116( 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_4214(), 0 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_52592( 0, 10 )) == 0;
                                    }
                                }
                                else if (((sub_143116( 36 )) AND (IS_WANTED_LEVEL_GREATER( sub_4214(), 0 ))) AND (NOT (IS_BIT_SET( l_U170, 1 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((IS_WANTED_LEVEL_GREATER( sub_4214(), 2 )) AND (sub_143116( 23 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((sub_143116( 2 )) AND (iVar15 == 39))
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 1 );
                            END_CHAR_SEARCH_CRITERIA();
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U168))
                                {
                                    iVar11 = nil;
                                }
                                else if ((IS_CHAR_MODEL( iVar11, 552542187 )) || (IS_CHAR_MODEL( iVar11, 996267216 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 2;
                                    bVar18 = (sub_52592( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((IS_WANTED_LEVEL_GREATER( sub_4214(), 0 )) AND (NOT (IS_BIT_SET( l_U170, 2 ))))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_144930( uVar5, 25.00000000, 4 );
                            if (IS_VEH_DRIVEABLE( uVar23 ))
                            {
                                GET_DRIVER_OF_CAR( uVar23, ref iVar11 );
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U168))
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
                                    uVar25 = sub_45908( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if ((sub_143116( 28 )) AND ((sub_45908( iParam0 + 0 )) == 1))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_45908( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_143116( 3 )) AND (sub_143116( 4 )))
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
                                        else if ((sub_45908( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_143116( 30 ))
                                            {
                                                uVar13 = sub_145531( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_143116( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_1568(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if (((sub_45908( iParam0 + 0 )) == 1) AND (fVar26 < 5))
                            {
                                if ((sub_143116( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_4214(), 0 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_143116( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U170, 5 ))) AND (fVar26 > 30))
                            {
                                if ((sub_143116( 30 )) AND ((sub_45908( iParam0 + 0 )) == 1))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_143116( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_52592( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((iVar15 != 39) || (NOT (IS_STRING_NULL( uVar13 ))))
                    {
                        if (sub_51758( iParam0->_fU0, uVar13, iVar11, iVar15 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if (((iVar4 - l_U165) > 10000) AND (IS_BIT_SET( l_U170, 6 )))
    {
        CLEAR_BIT( ref l_U170, 6 );
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_4214() )) AND (NOT (IS_BIT_SET( l_U170, 7 ))))
    {
        SET_BIT( ref l_U170, 7 );
    }
    if (((iVar4 - l_U165) > 28000) AND (l_U167 != nil))
    {
        if ((sub_45908( iParam0 + 0 )) == 1)
        {
            sub_51758( iParam0->_fU0, "", sub_1568(), 30 );
        }
        else
        {
            sub_51758( iParam0->_fU0, "", sub_1568(), 20 );
        }
        l_U167 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_4214(), 0 )))
        {
            CLEAR_BIT( ref l_U170, 0 );
            CLEAR_BIT( ref l_U170, 2 );
            CLEAR_BIT( ref l_U170, 1 );
        }
        CLEAR_BIT( ref l_U170, 7 );
    }
    return;
}

void sub_142024(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 1) || (iParam1 == 0))
    {
        if (bParam0)
        {
            switch (sub_52592( 0, 3 ))
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
            switch (sub_52592( 0, 3 ))
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

void sub_142677(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_142720(int iParam0)
{
    return sub_142740( iParam0->_fU0, sub_1568(), 1 );
}

void sub_142740(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_139923( uParam0, uParam2 ), sub_139923( uParam1, uParam2 ) );
}

void sub_142914(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_1568(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_143028(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_143116(int iParam0)
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
    return (iVar4 - l_U165) > iVar3;
}

void sub_144930(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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

void sub_145531(boolean bParam0)
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

void sub_146247(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_45908( uParam0 )) == 1)
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

int sub_146538(int iParam0)
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
    else if ((sub_59142( iParam0 )) != iParam0->_fU4)
    {
        if (sub_142677( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_146635( iParam0 )) < l_U175)
    {
        return 1;
    };;;
    if (sub_142677( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if ((iVar3 == 7) || ((iParam0->_fU96 != 4) AND (iParam0->_fU96 != 14)))
    {
        if (sub_88239( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_88239( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_88239( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U174, l_U173 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U174, l_U173 );
        }
    }
    else if (sub_88239( iParam0, 64 ))
    {
        fVar4 = (sub_146635( iParam0 )) / 3.00000000;
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
    if (sub_147163( iParam0->_fU4 ))
    {
        uVar6 = {sub_147313( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_146635(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_142740( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_139923( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_147163(unknown uParam0)
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

void sub_147313(unknown uParam0, boolean bParam1)
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

int sub_147589(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_88239( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_59142( iParam0 );
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
                if (((sub_45908( ref iVar4 )) == (sub_45908( iParam0 + 0 ))) || ((iVar4 == sub_1568()) AND ((sub_45908( iParam0 + 0 )) == 1)))
                {
                    sub_50110( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

int sub_147846(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_147884( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_139422( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_59142( iParam0 )) == iParam0->_fU4)
        {
            if (sub_142677( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_142677( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if ((iVar3 == sub_1568()) || ((iVar3 == iParam0->_fU8) AND (NOT (IS_CHAR_INJURED( iVar3 )))))
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
            if ((sub_45908( iParam0 + 0 )) == (sub_45908( ref iVar3 )))
            {
                return 0;
            }
        }
        if ((((IS_CHAR_IN_CAR( sub_1568(), iParam0->_fU4 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((sub_142740( iParam0->_fU0, sub_1568(), 1 )) < 90.00000000))
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
        sub_148568( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_142677( iParam0->_fU4 ))
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

void sub_147884(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_147914( ref uVar5, uParam2 );
}

int sub_147914(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_147939( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_147939( (uParam0^)[I], ref uVar5[1], uParam1 ))
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

int sub_147939(unknown uParam0, unknown uParam1, boolean bParam2)
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

int sub_148568(int iParam0)
{
    if (sub_148582( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_148582(unknown uParam0)
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
                if (((iVar4 < 1) || (iVar5 < 2)) AND (iVar3 != sub_17788()))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar5 < 1) AND (iVar3 != sub_17788()))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

int sub_148978(int iParam0)
{
    unknown uVar3;

    if ((NOT (sub_88239( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = sub_144930( sub_139923( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_149092(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((NOT (sub_88239( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_139923( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_149213(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_146635( iParam0 );
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

int sub_149513(int iParam0)
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
    if ((sub_146635( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if ((((sub_146635( iParam0 )) > 90.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND ((sub_142740( iParam0->_fU0, sub_1568(), 1 )) > 90.00000000))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 )) || (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 ))) || ((VDIST( sub_139923( sub_1568(), 1 ), uVar4 )) < 30.00000000))
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

int sub_149869(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_59142( iParam0 )) != iParam0->_fU4)
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

int sub_150128(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((iVar3 == 7) AND (NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_1568(), 45.00000000 ))))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_1568(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_1568() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_150285(int iParam0)
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
        if (sub_50206( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_IN_CAR( sub_1568(), iVar4 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1568() ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_147884( sub_1568(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_45908( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_1568(), ref uVar7 );
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
                return sub_139578( iParam0, 1, 0 );
            }
        }
    }
    if ((sub_88239( iParam0, 1 )) AND ((sub_146635( iParam0 )) < 30.00000000))
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
    GET_CAR_CHAR_IS_USING( sub_1568(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_1568())
    {
        if ((IS_CHAR_ON_FOOT( iParam0->_fU0 )) AND (IS_CHAR_ON_FOOT( sub_1568() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_1568(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))) AND ((((IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 )) || (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 ))) || (DOES_VEHICLE_EXIST( iVar4 ))) || ((sub_142740( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8)))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((sub_50230( iParam0->_fU8, iParam0->_fU4 )) || (iParam0->_fU4 == iVar4))
            {
                if ((sub_150971( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_147589( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_148978( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_152038( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_152449( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_149213( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_150128( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if ((sub_50230( sub_1568(), iParam0->_fU4 )) AND ((sub_45908( iParam0 + 0 )) == 1))
            {
                if ((sub_147589( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_148978( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_152038( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_152449( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_149213( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_150128( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_153275( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_153424( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_147846( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_147589( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_148978( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_152449( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_150971( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_152038( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_149213( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_150128( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_153275( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_147846( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_147589( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_150971( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_148978( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_149092( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_152038( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_152449( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_149213( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_150128( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_147884( sub_1568(), iParam0->_fU0, 1 )) AND (iParam0->_fU8 != sub_1568())) AND ((sub_45908( iParam0 + 0 )) == 1))
    {
        sub_50110( iParam0, sub_1568() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_139740( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_147846( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_147589( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_152449( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_151310( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_149213( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_148978( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_149092( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_152038( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((NOT (sub_88239( iParam0, 1 ))) || (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
        {
            if ((sub_139740( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_147846( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_147589( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_152449( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_153275( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_151310( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_149213( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_150128( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((sub_88239( iParam0, 1 )) AND (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))))
    {
        if ((sub_153275( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_151310( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_149213( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_139578( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_139740( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_153275( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_139740( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_147846( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_147589( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_150971( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_148978( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_152449( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_152038( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_151310( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_149213( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_150128( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_150971(int iParam0)
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
            iVar4 = sub_151100( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_147313( uVar3, 1 )};
    uVar8 = {sub_139923( iParam0->_fU0, 1 )};
    uVar11 = {sub_139923( sub_1568(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_146635( iParam0 )) > 30.00000000)
        {
            sub_148568( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_146635( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_151310( iParam0 );
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

int sub_151100(unknown uParam0)
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

int sub_151310(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_148582( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_147884( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_142740( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
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

int sub_152038(int iParam0)
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

    if (NOT (sub_88239( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_139305( iParam0->_fU4 );
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
    else if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_142720( iParam0 )) > 30.00000000))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_46568( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_142677( uVar11 ))
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

int sub_152449(int iParam0)
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
                sub_50110( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_139923( sub_1568(), 1 )};
        uVar7 = {sub_139923( iParam0->_fU0, 1 )};
        uVar10 = {sub_147313( iParam0->_fU4, 1 )};
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
            else if ((iVar3 == sub_1568()) || ((sub_45908( ref iVar3 )) == (sub_45908( iParam0 + 0 ))))
            {
                iVar14 = sub_151100( iParam0->_fU4 );
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
                if (sub_142677( iParam0->_fU4 ))
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

int sub_153275(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if ((((IS_PED_IN_COMBAT( iParam0->_fU0 )) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 ))) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 ))) AND ((sub_146635( iParam0 )) < 30.00000000))
    {
        return 2;
    }
    return 0;
}

int sub_153424(int iParam0)
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
    else if ((sub_59142( iParam0 )) != iParam0->_fU4)
    {
        if (sub_142677( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_142677( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_142677( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )) AND (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_148568( iParam0 );
    iVar8 = 2;
    if (sub_88239( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_146635( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((iParam0->_fU8 == sub_1568()) AND (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1568() )))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_4214(), ref uVar10 );
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
            uVar12 = {sub_139923( sub_1568(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_153942( iParam0, uVar12 );
            }
            else
            {
                return sub_139740( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar4 < 2.50000000) AND (fVar6 < 9.00000000))
        {
            return sub_139740( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_139740( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_1568())
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
                else if (sub_154354())
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
        else if (((sub_147163( iParam0->_fU4 )) || (sub_88239( iParam0, 4 ))) AND ((sub_142720( iParam0 )) >= l_U125))
        {
            bVar9 = sub_154624( iParam0, l_U125, l_U126, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_88239( iParam0, 128 ))
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
            if (sub_88239( iParam0, 128 ))
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
            return sub_139740( iParam0 );
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
            if (sub_88239( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_156068( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_153942(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_59446( iParam0, 64 );
    Result = sub_146538( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

boolean sub_154354()
{
    return ((IS_CONTROL_PRESSED( 0, 41 )) || (IS_CONTROL_PRESSED( 0, 44 ))) || (IS_CONTROL_PRESSED( 0, 45 ));
}

int sub_154624(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
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
                    if (((NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 ))) AND ((VDIST( uVar15, sub_139923( sub_1568(), 1 ) )) > fParam2)) AND ((VDIST2( uVar15, vVar6 )) > 9.00000000))
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

int sub_156068(unknown uParam0, float fParam1, float fParam2)
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

void sub_157436(unknown uParam0)
{
    sub_50691( uParam0, 2 );
    return;
}

void sub_157521(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_88239( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_147884( sub_1568(), iParam0->_fU0, 1 )))
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
                if (NOT (IS_CHAR_IN_CAR( sub_1568(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_59446( iParam0, 256 );
        }
    }
    else if (sub_88239( iParam0, 256 ))
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
                sub_88226( iParam0, 256 );
            }
        }
    }
    return;
}

int sub_158072(unknown uParam0, int iParam1)
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

void sub_158369(unknown uParam0)
{
    int I;
    int iVar4;
    int J;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown[10] uVar10;
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
    unknown uVar39;
    unknown uVar40;
    int[10] iVar41;
    int iVar52;
    unknown uVar53;
    unknown uVar54;
    int iVar55;
    float fVar56;
    float fVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;

    if (l_U127 >= 1.20000000)
    {
        array(ref uVar10, 10);
        array(ref iVar41, 10);
        for ( I = 0; I < (uParam0^); I++ )
        {
            if ((NOT ((uParam0^)[I]._fU8 == nil)) AND ((uParam0^)[I]._fU36 == 1))
            {
                if ((NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU8 ))) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU8 ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( (uParam0^)[I]._fU8, ref uVar6 );
                    }
                    else
                    {
                        uVar6 = nil;
                    }
                    if (((IS_VEH_DRIVEABLE( uVar6 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( (uParam0^)[I]._fU8, (uParam0^)[I]._fU0, 30, 30, 30, 0 )))
                    {
                        GET_CHAR_COORDINATES( (uParam0^)[I]._fU0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                        GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar6, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref uVar10[I]._fU0, ref uVar10[I]._fU4, ref uVar10[I]._fU8 );
                        if (uVar10[I]._fU4 < 0)
                        {
                            iVar41[I] = 1;
                        }
                    }
                }
            }
        }
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (iVar41[I])
            {
                if ((((uParam0^)[I]._fU40 == 0) AND (uVar10[I]._fU0 > 0)) || (((uParam0^)[I]._fU40 == 1) AND (uVar10[I]._fU0 < 0)))
                {
                    for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                    {
                        if ((((NOT (I == iVar4)) AND ((uParam0^)[I]._fU8 == (uParam0^)[iVar4]._fU8)) AND (iVar41[iVar4])) AND ((((uParam0^)[I]._fU40 == 0) AND ((uParam0^)[iVar4]._fU40 == 1)) || (((uParam0^)[I]._fU40 == 1) AND ((uParam0^)[iVar4]._fU40 == 0))))
                        {
                            if ((((uParam0^)[I]._fU40 == 0) AND (uVar10[I]._fU0 > uVar10[iVar4]._fU0)) || (((uParam0^)[I]._fU40 == 1) AND (uVar10[I]._fU0 < uVar10[iVar4]._fU0)))
                            {
                                uVar53 = (uParam0^)[I]._fU40;
                                (uParam0^)[I]._fU40 = (uParam0^)[iVar4]._fU40;
                                (uParam0^)[iVar4]._fU40 = uVar53;
                                for ( J = 0; J < (uParam0^); J++ )
                                {
                                    if ((NOT (J == I)) AND (NOT (J == iVar4)))
                                    {
                                        if ((uParam0^)[J]._fU8 == (uParam0^)[I]._fU0)
                                        {
                                            sub_50110( ref (uParam0^)[J], (uParam0^)[iVar4]._fU0 );
                                            iVar41[J] = 0;
                                        }
                                        else if ((uParam0^)[J]._fU8 == (uParam0^)[iVar4]._fU0)
                                        {
                                            sub_50110( ref (uParam0^)[J], (uParam0^)[I]._fU0 );
                                            iVar41[J] = 0;
                                        }
                                    }
                                }
                                iVar41[I] = 0;
                                iVar41[iVar4] = 0;
                            }
                        }
                    }
                }
            }
        }
        for ( I = 0; I < iVar41; I++ )
        {
            iVar41[I] = 1;
            if (I < (uParam0^))
            {
                if ((uParam0^)[I]._fU36 != 1)
                {
                    iVar41[I] = 0;
                }
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar41[I] = 0;
                }
                else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 )))
                {
                    iVar41[I] = 0;
                }
            }
        }
        for ( I = 0; I < (uParam0^); I++ )
        {
            if ((uParam0^)[I]._fU8 == nil)
            {
                if (NOT ((uParam0^)[I]._fU12 == nil))
                {
                    (uParam0^)[I]._fU8 = (uParam0^)[I]._fU12;
                }
            }
            if ((((NOT ((uParam0^)[I]._fU8 == nil)) AND (iVar41[I])) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))) AND (NOT ((uParam0^)[I]._fU8 == sub_1568())))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 ))
                {
                    iVar55 = -1;
                    for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                    {
                        if (((uParam0^)[iVar4]._fU0 == (uParam0^)[I]._fU8) AND (iVar41[iVar4]))
                        {
                            iVar55 = iVar4;
                        }
                    }
                    if (NOT (iVar55 == -1))
                    {
                        if (NOT ((uParam0^)[iVar55]._fU0 == nil))
                        {
                            if (NOT ((uParam0^)[iVar55]._fU8 == nil))
                            {
                                if (NOT (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU8 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU0 )))
                                    {
                                        GET_CHAR_COORDINATES( (uParam0^)[I]._fU0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_CHAR_COORDINATES( (uParam0^)[iVar55]._fU0, ref uVar58._fU0, ref uVar58._fU4, ref uVar58._fU8 );
                                        GET_CHAR_COORDINATES( (uParam0^)[iVar55]._fU8, ref uVar61._fU0, ref uVar61._fU4, ref uVar61._fU8 );
                                    }
                                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar61._fU0, uVar61._fU4, uVar61._fU8, ref fVar56 );
                                    if (fVar56 < 0)
                                    {
                                        fVar56 *= -1;
                                    }
                                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar58._fU0, uVar58._fU4, uVar58._fU8, uVar61._fU0, uVar61._fU4, uVar61._fU8, ref fVar57 );
                                    if (fVar57 < 0)
                                    {
                                        fVar57 *= -1;
                                    }
                                    iVar52 = 0;
                                    if (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU0 ))
                                    {
                                        iVar52 = 1;
                                    }
                                    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[iVar55]._fU0 )))
                                    {
                                        iVar52 = 1;
                                    }
                                    if ((iVar52) || (fVar56 < fVar57))
                                    {
                                        iVar41[I] = 0;
                                        iVar41[iVar55] = 0;
                                        for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                                        {
                                            if (((((NOT ((uParam0^)[iVar4]._fU8 == nil)) AND (NOT (I == iVar4))) AND (NOT (iVar4 == iVar55))) AND ((uParam0^)[iVar4]._fU8 == (uParam0^)[I]._fU8)) AND (iVar41[iVar4]))
                                            {
                                                sub_50110( ref (uParam0^)[iVar4], (uParam0^)[I]._fU0 );
                                                iVar41[iVar4] = 0;
                                            }
                                        }
                                        uVar53 = (uParam0^)[I]._fU40;
                                        uVar54 = (uParam0^)[iVar55]._fU40;
                                        sub_50110( ref (uParam0^)[I], (uParam0^)[iVar55]._fU8 );
                                        sub_50110( ref (uParam0^)[iVar55], (uParam0^)[I]._fU0 );
                                        (uParam0^)[I]._fU40 = uVar54;
                                        (uParam0^)[iVar55]._fU40 = uVar53;
                                        for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                                        {
                                            if ((((uParam0^)[iVar4]._fU8 == (uParam0^)[I]._fU0) AND (NOT (iVar4 == iVar55))) AND (iVar41[iVar4]))
                                            {
                                                sub_50110( ref (uParam0^)[iVar4], (uParam0^)[iVar55]._fU0 );
                                                iVar41[iVar4] = 0;
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
        l_U127 = 0;
    }
    else
    {
        l_U127 += 1.00000000 * TIMESTEP();
    }
    return;
}

void sub_160478(unknown uParam0)
{
    int I;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    float fVar10;
    float fVar11;
    int iVar12;
    unknown uVar13;
    int iVar14;

    bVar4 = true;
    bVar5 = false;
    bVar6 = false;
    if (l_U110 < 0)
    {
        bVar4 = false;
    }
    GET_GAME_TIMER( ref iVar7 );
    iVar8 = -1;
    iVar9 = -1;
    fVar10 = 0.00000000;
    if (l_U110 >= 0)
    {
        if (g_U39213)
        {
            if ((NOT g_U39212) AND ((uParam0^) > 1))
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP( "BKR_CAM_HLP1" );
                    g_U39212 = 1;
                }
            }
        }
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar13, ref uVar13, ref iVar12, ref uVar13 );
        if (iVar12 == 0)
        {
            GET_MOUSE_INPUT( ref iVar12, ref uVar13 );
        }
        if (l_U111)
        {
            if ((iVar12 < 80) AND (iVar12 > 65456))
            {
                l_U111 = 0;
            }
        }
        else if (iVar12 >= 80)
        {
            iVar9 = sub_160713( uParam0 );
        }
        else if (iVar12 <= 65456)
        {
            iVar9 = sub_161232( uParam0 );
        };;;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (sub_160749( uParam0, I ))
            {
                if (iVar9 < 0)
                {
                    fVar11 = sub_142740( (uParam0^)[I]._fU0, sub_1568(), 1 );
                    if (fVar11 > fVar10)
                    {
                        fVar10 = fVar11;
                        iVar8 = I;
                    }
                }
                if (l_U110 == I)
                {
                    bVar5 = true;
                }
            }
        }
    }
    if (bVar5)
    {
        if (iVar9 < 0)
        {
            bVar4 = false;
            sub_161545( ref (uParam0^)[l_U110] );
        }
        else
        {
            iVar8 = iVar9;
            if (DOES_CAM_EXIST( l_U109 ))
            {
                bVar6 = true;
            }
        }
    }
    else if (iVar8 >= 0)
    {
        if (DOES_CAM_EXIST( l_U109 ))
        {
            bVar6 = true;
        }
    }
    if (l_U110 >= 0)
    {
        if ((((l_U122 + 2500) > iVar7) AND (IS_VEH_DRIVEABLE( (uParam0^)[l_U110]._fU4 ))) AND (NOT bVar6))
        {
            bVar4 = false;
        }
    }
    else if ((l_U122 + 2500) > iVar7)
    {
        bVar4 = true;
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar14 );
    if ((((((((IS_CONTROL_PRESSED( 0, 51 )) AND (NOT (IS_CONTROL_PRESSED( 0, 38 )))) AND (NOT (IS_CONTROL_PRESSED( 0, 39 )))) AND (IS_CHAR_ON_ANY_BIKE( sub_1568() ))) AND (NOT sub_162824())) AND (NOT (iVar14 == 4))) AND (iVar8 >= 0)) AND (NOT bVar4))
    {
        sub_162887( uParam0, iVar8 );
    }
    else
    {
        sub_21618();
        if (bVar6)
        {
            sub_162887( uParam0, iVar8 );
        }
    }
    return;
}

void sub_160713(unknown uParam0)
{
    int I;
    int Result;

    Result = -1;
    for ( I = l_U110; I <= ((uParam0^) - 1); I++ )
    {
        if (((sub_160749( uParam0, I )) AND (I != l_U110)) AND (Result < 0))
        {
            Result = I;
        }
    }
    if (Result == -1)
    {
        for ( I = 0; I <= l_U110; I++ )
        {
            if (((sub_160749( uParam0, I )) AND (I != l_U110)) AND (Result < 0))
            {
                Result = I;
            }
        }
    }
    return Result;
}

int sub_160749(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    unknown uVar11;

    if (((NOT (IS_CHAR_INJURED( (uParam0^)[iParam1]._fU0 ))) AND (IS_VEH_DRIVEABLE( (uParam0^)[iParam1]._fU4 ))) AND (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_1568() ))))
    {
        if (((NOT (IS_CHAR_IN_CAR( sub_1568(), (uParam0^)[iParam1]._fU4 ))) AND (IS_CHAR_IN_CAR( (uParam0^)[iParam1]._fU0, (uParam0^)[iParam1]._fU4 ))) AND (IS_CHAR_ON_ANY_BIKE( (uParam0^)[iParam1]._fU0 )))
        {
            uVar4 = {sub_139923( (uParam0^)[iParam1]._fU0, 1 )};
            uVar7 = {sub_139923( sub_1568(), 1 )};
            fVar10 = VDIST( uVar4, uVar7 );
            if (fVar10 < 4.50000000)
            {
                return 0;
            }
            if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( (uParam0^)[iParam1]._fU0, sub_1568() ))
            {
                return 1;
            }
            if ((iParam1 == l_U110) AND (DOES_CAM_EXIST( l_U109 )))
            {
                if (IS_CAM_ACTIVE( l_U109 ))
                {
                    if ((fVar10 < 38.00000000) AND (fVar10 > 29.00000000))
                    {
                        GET_GAME_VIEWPORT_ID( ref uVar11 );
                        if (CAM_IS_SPHERE_VISIBLE( uVar11, uVar7._fU0, uVar7._fU4, uVar7._fU8, 0.20000000 ))
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

void sub_161232(unknown uParam0)
{
    int I;
    int Result;

    Result = -1;
    for ( I = l_U110; I >= 0; I += -1 )
    {
        if (((sub_160749( uParam0, I )) AND (I != l_U110)) AND (Result < 0))
        {
            Result = I;
        }
    }
    if (Result == -1)
    {
        for ( I = (uParam0^) - 1; I >= l_U110; I += -1 )
        {
            if (((sub_160749( uParam0, I )) AND (I != l_U110)) AND (Result < 0))
            {
                Result = I;
            }
        }
    }
    return Result;
}

void sub_161545(int iParam0)
{
    vector vVar3;
    vector vVar6;
    float fVar9;
    int iVar10;
    float fVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    vector vVar16;
    float fVar19;
    vector vVar20;
    unknown uVar23;
    vector vVar24;

    vVar3 = {sub_139923( sub_1568(), 1 )};
    vVar6 = {sub_139923( iParam0->_fU0, 1 )};
    fVar9 = VDIST( vVar3, vVar6 );
    GET_GAME_TIMER( ref iVar10 );
    if ((ABSF( fVar9 - l_U112 )) < 3.00000000)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 500, ref l_U115 );
        l_U115 += iVar10;
    }
    if (iVar10 > (l_U115 + 1000))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1568() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref uVar12 );
            GET_CAR_SPEED_VECTOR( uVar12, ref uVar13, 0 );
            vVar16 = {vVar3 - vVar6};
            vVar16 = {vVar16 / (VMAG( vVar16 ))};
            fVar11 = ((vVar16.x * uVar13._fU0) + (vVar16.y * uVar13._fU4)) + (vVar16.z * uVar13._fU8);
        }
        l_U112 = fVar9 + ((5.00000000 * fVar11) * TIMESTEP());
    }
    if ((ABSF( l_U113 - l_U112 )) < 2.00000000)
    {
        l_U114 *= 0.70000000;
    }
    else if (l_U112 > l_U113)
    {
        l_U114 += 0.20000000;
    }
    else if (l_U112 < l_U113)
    {
        l_U114 -= 0.20000000;
    };;;
    if (l_U114 > 1.00000000)
    {
        l_U114 = 1.00000000;
    }
    else if (l_U114 < -1.00000000)
    {
        l_U114 = -1.00000000;
    }
    l_U113 += l_U114;
    GET_CHAR_SPEED( iParam0->_fU0, ref fVar19 );
    fVar19 -= 15.00000000;
    if (fVar19 < 0.00000000)
    {
        fVar19 = 0.00000000;
    }
    SET_CAM_FOV( l_U109, sub_162077( l_U113 - fVar19 ) );
    SET_CAM_MOTION_BLUR( l_U109, fVar19 / 185.00000000 );
    vVar20 = {vVar3 - vVar6};
    vVar20 = {vVar20 * (l_U113 / (VMAG( vVar20 )))};
    vVar20 = {vVar20 + vVar6};
    SET_CAM_DOF_FOCUSPOINT( l_U109, vVar20.x, vVar20.y, vVar20.z, 1.50000000 );
    GET_CHAR_SPEED( sub_1568(), ref uVar23 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( -1.00000000, 1.00000000, ref vVar24.x );
    GENERATE_RANDOM_FLOAT_IN_RANGE( (-10.00000000 * uVar23) / fVar9, 0.00000000, ref vVar24.y );
    GENERATE_RANDOM_FLOAT_IN_RANGE( -0.50000000, 0.50000000, ref vVar24.z );
    vVar24 = {vVar24 * (0.00400000 * fVar9)};
    if (fVar9 < 20.00000000)
    {
        vVar24.z += 0.60000000 + ((0.75000000 * fVar9) / 20.00000000);
    }
    else
    {
        vVar24.z += 1.35000000;
    }
    l_U119 = {l_U119 + (((vVar24 - l_U116) * 0.50000000) / fVar9)};
    if ((VMAG2( l_U119 )) > 1.00000000)
    {
        l_U119 = {l_U119 / (VMAG( l_U119 ))};
    }
    else
    {
        l_U119 = {l_U119 * (0.98000000 - (0.10000000 / fVar9))};
    }
    l_U116 = {l_U116 + l_U119};
    SET_CAM_POINT_OFFSET( l_U109, l_U116._fU0, l_U116._fU4, l_U116._fU8 );
    return;
}

void sub_162077(float fParam0)
{
    if (fParam0 < 4.55000000)
    {
        fParam0 = 4.55000000;
    }
    else if (fParam0 > 90.00000000)
    {
        fParam0 = 90.00000000;
    }
    return ATAN2( 6.50000000, fParam0 );
}

int sub_162824()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_162887(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    GET_KEY_FOR_CHAR_IN_ROOM( (uParam0^)[uParam1]._fU0, ref iVar4 );
    if (NOT (DOES_CAM_EXIST( l_U109 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_1568(), ref iVar6 );
        if (iVar4 != iVar6)
        {
            return;
        }
        BEGIN_CAM_COMMANDS( ref iVar5 );
        if (iVar5 != 1)
        {
            ;
        }
        else
        {
            CREATE_CAM( 14, ref l_U109 );
            ATTACH_CAM_TO_VEHICLE( l_U109, (uParam0^)[uParam1]._fU4 );
            SET_CAM_ATTACH_OFFSET( l_U109, 0.00000000, 0.45000000, 0.70000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U109, 1 );
            POINT_CAM_AT_PED( l_U109, sub_1568() );
            SET_CAM_ACTIVE( l_U109, 1 );
            SET_CAM_PROPAGATE( l_U109, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U123 = 0;
            l_U111 = 1;
            l_U110 = uParam1;
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 0 );
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            l_U112 = sub_142740( (uParam0^)[l_U110]._fU0, sub_1568(), 1 );
            l_U113 = l_U112;
            l_U114 = 0.00000000;
            l_U116 = {0, 0, 1.35000000};
            if (l_U112 < 20.00000000)
            {
                l_U116._fU8 = 0.60000000 + ((0.75000000 * l_U112) / 20.00000000);
            }
            l_U119 = {0, 0, 0};
            GET_GAME_TIMER( ref l_U115 );
            sub_161545( ref (uParam0^)[l_U110] );
            GET_GAME_TIMER( ref l_U122 );
        }
        END_CAM_COMMANDS( ref iVar5 );
    }
    else if (NOT l_U123)
    {
        GET_GAME_VIEWPORT_ID( ref uVar7 );
        SET_ROOM_FOR_VIEWPORT_BY_KEY( uVar7, iVar4 );
        l_U123 = 1;
    }
    return;
}

void sub_163408(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    float fVar6;
    boolean bVar7;
    boolean bVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    int iVar13;
    int iVar14;
    boolean bVar15;

    bVar7 = uParam0;
    fVar9 = 5.00000000;
    fVar10 = 30000.00000000;
    fVar11 = 14.00000000;
    fVar12 = 0.12500000;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        if (g_U11090)
        {
            bVar5 = true;
        }
    }
    else
    {
        bVar5 = true;
    }
    if (bVar5)
    {
        if (NOT IS_MINIGAME_IN_PROGRESS())
        {
            if (IS_PLAYER_PLAYING( sub_4214() ))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_1568() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1568(), ref iVar4 );
                    if ((NOT (iVar4 == g_U11087[0])) AND (NOT (iVar4 == g_U11087[1])))
                    {
                        if (IS_VEH_DRIVEABLE( iVar4 ))
                        {
                            GET_CAR_SPEED( iVar4, ref fVar6 );
                            if (fVar6 > fVar9)
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                                {
                                    if (IS_VEH_DRIVEABLE( g_U11087[0] ))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( g_U11081[0], g_U11087[0] ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1568(), g_U11081[0], fVar11, fVar11, 3.00000000, 0 ))
                                            {
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U11081[0], ref iVar4 );
                                                GET_CAR_SPEED( iVar4, ref fVar6 );
                                                if (fVar6 > fVar9)
                                                {
                                                    if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                                                    {
                                                        if (IS_VEH_DRIVEABLE( g_U11087[1] ))
                                                        {
                                                            if (IS_CHAR_SITTING_IN_CAR( g_U11081[1], g_U11087[1] ))
                                                            {
                                                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1568(), g_U11081[1], fVar11, fVar11, 3.00000000, 0 ))
                                                                {
                                                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U11081[1], ref iVar4 );
                                                                    GET_CAR_SPEED( iVar4, ref fVar6 );
                                                                    if (fVar6 > fVar9)
                                                                    {
                                                                        GET_FRAME_TIME( ref fVar6 );
                                                                        l_U1246 += fVar6 * 1000.00000000;
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
            }
            if (l_U1246 > fVar10)
            {
                bVar8 = true;
                l_U1246 = 0.00000000;
            }
        }
        bVar15 = false;
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
        {
            if (NOT g_U12303)
            {
                bVar15 = true;
            }
        }
        else
        {
            bVar15 = true;
        }
        if (bVar15)
        {
            if (NOT PLAYER_IS_INTERACTING_WITH_GARAGE())
            {
                STORE_WANTED_LEVEL( sub_4214(), ref iVar13 );
                if (iVar13 < l_U1247)
                {
                    iVar14 = l_U1247 - iVar13;
                    if ((NOT (CHEAT_HAPPENED_RECENTLY( 4, 5000 ))) AND (NOT (CHEAT_HAPPENED_RECENTLY( 3, 300000 ))))
                    {
                        bVar7 = true;
                    }
                    else
                    {
                        PRINTSTRING( "ABILITY_BACKUP - wanted level down cheat activated recently! \n" );
                    }
                }
                l_U1247 = iVar13;
            }
        }
        if (NOT sub_164218())
        {
            if (g_U11093)
            {
                g_U11109 = 1;
                g_U11093 = 0;
                sub_164295( 1.00000000 );
                sub_165237( 0, 1 );
                PRINTSTRING( "Dissmiss Backup - g_bBuddyBackupMissionPassed \n" );
            }
            if (g_U11095)
            {
                g_U11095 = 0;
                sub_165237( 0, 1 );
                PRINTSTRING( "Dissmiss Backup - g_bBuddyBackupMissionFailed \n" );
            }
            if (g_U11094)
            {
                g_U11094 = 0;
                g_U11109 = 1;
                sub_164295( 0.50000000 );
                sub_165237( 0, 1 );
                PRINTSTRING( "Dissmiss Backup - g_bBuddyBackupProceduralMissionPassed \n" );
            }
            if (bVar7)
            {
                g_U11110 = 1;
                if (iVar14 == 0)
                {
                    iVar14 = 1;
                }
                fVar6 = TO_FLOAT( iVar14 - 1 );
                sub_164295( 0.08000000 * (TO_FLOAT( sub_165602( 2, FLOOR( fVar6 ) ) )) );
                bVar7 = false;
            }
            if (bVar8)
            {
                g_U11111 = 1;
                sub_164295( fVar12 );
                bVar8 = false;
            }
        }
    }
    if (HAS_SCRIPT_LOADED( "ability_stats" ))
    {
        if (NOT g_U39103)
        {
            if ((((((NOT sub_162824()) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_stats" )) == 0)) AND (NOT sub_165896())) AND (NOT IS_MINIGAME_IN_PROGRESS())) AND (NOT g_U11112)) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
            {
                if (NOT l_U1248)
                {
                    if (((IS_USING_CONTROLLER()) AND (IS_BUTTON_PRESSED( 0, 9 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 99 ))))
                    {
                        if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                        {
                            g_U11129[0] = 1;
                        }
                        else
                        {
                            g_U11129[0] = 0;
                        }
                        if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                        {
                            g_U11129[1] = 1;
                        }
                        else
                        {
                            g_U11129[1] = 0;
                        }
                        if ((g_U11129[0]) || (g_U11129[1]))
                        {
                            g_U11109 = 0;
                            g_U11110 = 0;
                            g_U11111 = 0;
                            g_U11101 = 1;
                        }
                        l_U1248 = 1;
                    }
                }
                else if (((IS_USING_CONTROLLER()) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) || ((NOT IS_USING_CONTROLLER()) AND (NOT (IS_CONTROL_PRESSED( 2, 99 )))))
                {
                    l_U1248 = 0;
                }
            }
            if (g_U11101)
            {
                if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_stats" )) == 0)
                {
                    START_NEW_SCRIPT( "ability_stats", 512 );
                    g_U11101 = 0;
                }
                else
                {
                    g_U11109 = 0;
                    g_U11110 = 0;
                    g_U11111 = 0;
                    g_U11101 = 0;
                }
            }
        }
    }
    else
    {
        REQUEST_SCRIPT( "ability_stats" );
    }
    return;
}

int sub_164218()
{
    if (sub_140886())
    {
        if (l_U128 >= 1)
        {
            return 1;
        }
    }
    return 0;
}

void sub_164295(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_164321( I, uParam0, 0 );
    }
    g_U11101 = 1;
    return;
}

void sub_164321(int iParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if ((NOT (IS_CHAR_INJURED( g_U11081[iParam0] ))) || (uParam2))
    {
        if (iParam0 == 0)
        {
            fVar5 = 20.00000000;
        }
        else
        {
            fVar5 = 20.00000000;
        }
        fVar7 = g_U11141[iParam0] + (((100.00000000 - fVar5) / 10.00000000) * uParam1);
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11180[iParam0] = fVar7 - g_U11141[iParam0];
        g_U11141[iParam0] = fVar7;
        fVar8 = (g_U11141[iParam0] - fVar5) / (100.00000000 - fVar5);
        fVar9 = (-1.00000000 * ((fVar8 - 1.00000000) * (fVar8 - 1.00000000))) + 1.00000000;
        if (iParam0 == 0)
        {
            fVar5 = 350.00000000;
        }
        else
        {
            fVar5 = 475.00000000;
        }
        fVar7 = ((1000.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 1000.00000000)
        {
            fVar7 = 1000.00000000;
        }
        g_U11165[iParam0] = fVar7 - g_U11144[iParam0];
        g_U11144[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 0.00000000;
        }
        else
        {
            fVar5 = 0.00000000;
        }
        fVar7 = ((13.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 13.00000000)
        {
            fVar7 = 13.00000000;
        }
        g_U11168[iParam0] = fVar7 - g_U11147[iParam0];
        g_U11147[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 38.00000000;
        }
        else
        {
            fVar5 = 28.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11171[iParam0] = fVar7 - g_U11150[iParam0];
        g_U11150[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 33.00000000;
        }
        else
        {
            fVar5 = 23.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11174[iParam0] = fVar7 - g_U11153[iParam0];
        g_U11153[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 1.00000000;
        }
        else
        {
            fVar5 = 1.00000000;
        }
        fVar7 = ((5.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 5.00000000)
        {
            fVar7 = 5.00000000;
        }
        g_U11177[iParam0] = fVar7 - g_U11156[iParam0];
        g_U11156[iParam0] = fVar7;
        if ((g_U11141[0] >= 100.00000000) AND (g_U11141[1] >= 100.00000000))
        {
            AWARD_ACHIEVEMENT( 55 );
        }
        SET_FLOAT_STAT( 168, g_U11141[0] );
        SET_FLOAT_STAT( 169, g_U11141[1] );
        sub_57621( iParam0 );
        g_U11129[iParam0] = 1;
        GET_GAME_TIMER( ref g_U11140 );
    }
    else
    {
        g_U11165[iParam0] = 0.00000000;
        g_U11168[iParam0] = 0.00000000;
        g_U11171[iParam0] = 0.00000000;
        g_U11174[iParam0] = 0.00000000;
        g_U11177[iParam0] = 0.00000000;
        g_U11129[iParam0] = 0;
    }
    return;
}

void sub_165237(boolean bParam0, unknown uParam1)
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

int sub_165602(int Result, int iParam1)
{
    int I;
    int iVar5;

    iVar5 = Result;
    if (iParam1 < 0)
    {
        SCRIPT_ASSERT( "POWER_OF() - script function doesn't do negative powers." );
    }
    if (iParam1 >= 2)
    {
        for ( I = 2; I <= iParam1; I++ )
        {
            Result *= iVar5;
        }
        return Result;
    }
    else if (iParam1 == 1)
    {
        return Result;
    }
    else if (iParam1 == 0)
    {
        return 1;
    };;;
    return 0;
}

int sub_165896()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_4214() )))
    {
        if ((ARE_WIDESCREEN_BORDERS_ACTIVE()) AND (sub_165930()))
        {
            return 1;
        }
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT HAS_CUTSCENE_FINISHED())
            {
                return 1;
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            return 1;
        }
    }
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        return 1;
    }
    return 0;
}

int sub_165930()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_166552()
{
    return;
}