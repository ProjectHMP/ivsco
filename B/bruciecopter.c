void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U106 = 0.00000000;
    l_U108 = 0;
    l_U109 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 1;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 1;
    l_U124 = 0;
    l_U125 = 0;
    l_U126 = 0;
    l_U159 = 0;
    l_U160 = -1;
    l_U161 = 1;
    l_U165 = 0;
    l_U166 = "NONE";
    l_U193 = 0;
    l_U194 = 0;
    l_U204 = 0;
    l_U205 = 1;
    l_U206 = 2;
    l_U213 = 0;
    l_U214 = 999999.90000000;
    l_U215 = 0.00000000;
    l_U216 = 0.26000000;
    l_U217 = 0.65000000;
    l_U219 = 5000.00000000;
    l_U220 = 5000.00000000;
    l_U222 = 0.00000000;
    l_U224 = 0;
    l_U235 = "amb@smoking_spliff";
    l_U236 = "create_spliff";
    l_U237 = "partial_smoke";
    l_U238 = "partial_smoke_car";
    l_U239 = {0.13700000, 0.03100000, 0.03500000};
    l_U242 = {2.21400000, -0.12100000, 0.00000000};
    l_U245 = {0.00000000, 0.00000000, 0.13600000};
    l_U248 = {0.00000000, 0.00000000, 0.00000000};
    l_U251 = {-0.48300000, -0.28500000, 0.62000000};
    l_U254 = {-0.48300000, -1.30000000, 0.62000000};
    l_U257 = {0.00000000, 0.00000000, 90.00000000};
    l_U260 = {0.00000000, -0.28500000, 0.50000000};
    l_U263 = {0.00000000, 0.00000000, 0.00000000};
    l_U285 = 0;
    l_U286 = 1;
    l_U287 = 2;
    l_U288 = "missrandom_idle";
    l_U289 = "female_ilde";
    l_U290 = "female_ilde2";
    l_U291 = 1;
    l_U292 = 0;
    l_U293 = 0;
    l_U323 = 54;
    l_U324 = 0;
    l_U325 = 0;
    l_U326 = 0;
    l_U327 = 0;
    l_U328 = 0;
    l_U329 = 12;
    l_U330 = 0;
    l_U335 = 0;
    l_U337 = -1;
    l_U338 = 4;
    l_U370 = 0;
    l_U371 = 0;
    l_U376 = 0;
    l_U377 = "";
    l_U378 = 0;
    l_U391 = 0;
    l_U395 = 0;
    l_U396 = 1;
    l_U397 = 0;
    l_U398 = 0;
    l_U399 = 0;
    l_U400 = 0;
    l_U412 = 0;
    l_U429 = -1;
    l_U433 = 0;
    l_U434 = 1;
    l_U435 = 1;
    l_U443 = 150.00000000;
    l_U533 = 0;
    l_U534 = 150.00000000;
    l_U584 = 0;
    l_U787 = 0;
    l_U788 = 0;
    l_U790 = 8;
    l_U792 = 1;
    l_U793 = 0;
    sub_913();
    sub_1202( l_U286 );
    sub_3243();
    sub_3715();
    l_U339 = 0;
    l_U329 = 12;
    while (NOT l_U330)
    {
        if (NOT sub_4626())
        {
            sub_5695( "BrucieCopter: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        sub_52181();
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "******************** BRUCIE COPTER DEATHARREST\n" );
        PRINTNL();
        sub_18370();
    }
    WAIT( 0 );
    while (sub_4626())
    {
        sub_52181();
        sub_52315();
        WAIT( 0 );
    }
    PRINTSTRING( "quitting BRUCIE COPTER without PASS or FAIL\n" );
    sub_18370();
    sub_29912( "BRUCIE COPTER: should never reach ENDSCRIPT" );
    return;
}

void sub_913()
{
    sub_922();
    sub_1130();
    l_U792 = 1;
    sub_1160();
    l_U324 = 1;
    l_U325 = 0;
    return;
}

void sub_922()
{
    l_U324 = 0;
    l_U325 = 0;
    l_U327 = 0;
    l_U328 = 0;
    l_U329 = 12;
    l_U330 = 0;
    sub_967();
    return;
}

void sub_967()
{
    l_U344._fU0 = 1;
    l_U344._fU4 = 0;
    l_U344._fU8 = 0;
    l_U344._fU12 = 0;
    l_U344._fU16 = 1;
    l_U344._fU20 = 0;
    l_U344._fU24 = 0;
    l_U344._fU28 = 0;
    l_U344._fU32 = 0;
    l_U344._fU36 = 0;
    l_U344._fU40 = 0;
    l_U344._fU44 = 0;
    l_U344._fU48 = 0;
    l_U344._fU52 = 64537;
    l_U344._fU56 = 64537;
    return;
}

void sub_1130()
{
    l_U336 = nil;
    return;
}

void sub_1160()
{
    return;
}

void sub_1202(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;
    int iVar8;
    boolean bVar9;

    iVar3 = 8;
    vVar4 = {0.00000000, 0.00000000, 0.00000000};
    fVar7 = 0.00000000;
    iVar8 = 11;
    bVar9 = false;
    if ((g_U22274[iVar3]._fU144 == 4) || (g_U22274[iVar3]._fU144 == 9))
    {
        bVar9 = true;
    }
    if (bVar9)
    {
        iVar8 = sub_1299();
    }
    else
    {
        iVar8 = sub_1545( 11, 14 );
    }
    g_U22274[iVar3]._fU180 = iVar8;
    vVar4 = {g_U9788[iVar8]._fU4};
    fVar7 = g_U9788[iVar8]._fU16;
    sub_2203( vVar4.x, vVar4.y, vVar4.z, fVar7, uParam0, 1 );
    return;
}

int sub_1299()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    g_U64643 = 1;
    if (g_U0)
    {
        return 11;
    }
    if (IS_CHAR_DEAD( sub_1328() ))
    {
        return 11;
    }
    fVar2 = 100.00000000 + 5.00000000;
    GET_CHAR_COORDINATES( sub_1328(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    uVar6 = {g_U9788[11]._fU4};
    fVar9 = sub_1439( uVar3, uVar6 );
    if (fVar9 < fVar2)
    {
        g_U64643 = 0;
        return 15;
    }
    return 11;
}

void sub_1328()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1439(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_1545(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[20] iVar8;
    float fVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    float fVar36;
    int iVar37;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 20);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U9788[I]._fU0)
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
    if (NOT (IS_CHAR_DEAD( sub_1328() )))
    {
        fVar29 = 100.00000000 + 20.00000000;
        GET_CHAR_COORDINATES( sub_1328(), ref uVar30._fU0, ref uVar30._fU4, ref uVar30._fU8 );
        for ( I = iVar4; I <= iVar5; I++ )
        {
            if (iVar8[I])
            {
                uVar33 = {g_U9788[I]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar30._fU0, uVar30._fU4, uVar30._fU8, uVar33._fU0, uVar33._fU4, uVar33._fU8, ref fVar36 );
                if (fVar36 < fVar29)
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
    iVar37 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar37 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar37 == 0)
            {
                return I;
            }
            iVar37--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Pickup_Point: code should never reach this point" );
    return Result;
}

void sub_2203(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    int iVar8;
    unknown uVar9;

    iVar8 = 8;
    # -sub_C1FFC0-0xc214c8( 0, ref l_U127 );
    uVar9 = sub_2230( 5, 6 );
    g_U22274[iVar8]._fU184 = uVar9;
    l_U278 = {g_U9731[uVar9]._fU4};
    l_U281 = {g_U9731[uVar9]._fU16};
    sub_2628( uParam0, uParam1, uParam2, uParam3 );
    l_U276 = nil;
    l_U277 = nil;
    l_U284 = nil;
    sub_2695( g_U26415[iVar8] );
    sub_2726( 1 );
    sub_2911( uParam4 );
    if (bParam5)
    {
        sub_2986( "MISSPICKUP_BRUCIE", "idle01", "preen", "wave" );
    }
    else
    {
        sub_2986( l_U166, l_U166, l_U166, l_U166 );
    }
    return;
}

void sub_2230(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[8] iVar8;
    int iVar17;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 8);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U9731[I]._fU0)
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
    iVar17 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar17 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar17 == 0)
            {
                return I;
            }
            iVar17--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Dropoff_Point: code should never reach this point" );
    return Result;
}

void sub_2628(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U103 = {uParam0, uParam1, uParam2};
    l_U106 = uParam3;
    return;
}

void sub_2695(unknown uParam0)
{
    l_U109 = 1;
    l_U110 = uParam0;
    return;
}

void sub_2726(boolean bParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( l_U107 )))
    {
        ADD_BLIP_FOR_CONTACT( l_U103._fU0, l_U103._fU4, l_U103._fU8, ref l_U107 );
        CHANGE_BLIP_DISPLAY( l_U107, 2 );
        CHANGE_BLIP_PRIORITY( l_U107, 1 );
        if (l_U109)
        {
            CHANGE_BLIP_SPRITE( l_U107, l_U110 );
            if (bParam0)
            {
                iVar3 = 0;
                GET_GAME_TIMER( ref iVar3 );
                CHANGE_BLIP_PRIORITY( l_U107, l_U2 );
                FLASH_BLIP( l_U107, 1 );
                l_U124 = iVar3 + 10000;
                l_U125 = 1;
            }
        }
    }
    return;
}

void sub_2911(unknown uParam0)
{
    l_U159 = uParam0;
    return;
}

void sub_2986(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( ref l_U167._fU0, uParam0, 32 );
    StrCopy( ref l_U167._fU32, uParam1, 16 );
    StrCopy( ref l_U167._fU48, uParam2, 16 );
    StrCopy( ref l_U167._fU64, uParam3, 16 );
    l_U167._fU80 = 0;
    l_U167._fU84 = 0;
    l_U167._fU88 = 0;
    l_U167._fU92 = 0;
    l_U167._fU100 = 1;
    l_U167._fU96 = 1;
    if (COMPARE_STRING( uParam0, l_U166 ))
    {
        l_U167._fU96 = 0;
    }
    sub_3130();
    return;
}

void sub_3130()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref iVar3 );
    l_U167._fU84 = iVar2 + iVar3;
    return;
}

void sub_3243()
{
    sub_3252();
    return;
}

void sub_3252()
{
    sub_3261();
    sub_3328( 0, "FAbrA_1" );
    sub_3328( 1, "FAbrB_1" );
    sub_3328( 2, "FAbrH" );
    sub_3408( "FCB2AU" );
    sub_3527( 0, sub_1328(), "NIKO", 0 );
    StrCopy( ref l_U153, "BRUCIE", 16 );
    l_U157 = 1;
    l_U158 = 8;
    return;
}

void sub_3261()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        StrCopy( ref l_U128[I], "", 16 );
    }
    return;
}

void sub_3328(int iParam0, unknown uParam1)
{
    if (iParam0 >= 3)
    {
        return;
    }
    StrCopy( ref l_U128[iParam0], uParam1, 16 );
    return;
}

void sub_3408(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_3425();
    return;
}

void sub_3425()
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

void sub_3527(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3607( "\n PED NUMBER ", uParam0 );
    sub_3647( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3607(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3647(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3715()
{
    int iVar2;
    int I;
    int iVar4;
    boolean bVar5;
    boolean bVar6;

    iVar2 = 0;
    if (g_U9130[0]._fU0 == 0)
    {
        l_U294[0]._fU0 = 1670568326;
        g_U9130[0]._fU4 = 1670568326;
        l_U294[1]._fU0 = -1523915823;
        g_U9130[0]._fU8 = -1523915823;
    }
    else if (g_U9130[1]._fU0 == 0)
    {
        l_U294[0]._fU0 = 1872110126;
        g_U9130[1]._fU4 = 1872110126;
        l_U294[1]._fU0 = -952185135;
        g_U9130[1]._fU8 = -952185135;
    }
    else if (g_U9130[2]._fU0 == 0)
    {
        l_U294[0]._fU0 = -1523915823;
        g_U9130[2]._fU4 = -1523915823;
        l_U294[1]._fU0 = -1780385799;
        g_U9130[2]._fU8 = -1780385799;
    }
    else if (g_U9130[3]._fU0 == 0)
    {
        l_U294[0]._fU0 = 1872110126;
        g_U9130[3]._fU4 = 1872110126;
        l_U294[1]._fU0 = 1670568326;
        g_U9130[3]._fU8 = 1670568326;
    }
    else if (g_U9130[4]._fU0 == 0)
    {
        l_U294[0]._fU0 = -952185135;
        g_U9130[4]._fU4 = -952185135;
        l_U294[1]._fU0 = 1670568326;
        g_U9130[4]._fU8 = 1670568326;
    }
    else if (g_U9130[5]._fU0 == 0)
    {
        l_U294[0]._fU0 = -1780385799;
        g_U9130[5]._fU4 = -1780385799;
        l_U294[1]._fU0 = -1523915823;
        g_U9130[5]._fU8 = -1523915823;
    }
    else
    {
        I = 0;
        iVar4 = -1;
        bVar5 = true;
        bVar6 = true;
        for ( I = 0; I < 2; I++ )
        {
            bVar6 = true;
            while (bVar6)
            {
                bVar6 = false;
                GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref iVar2 );
                if (NOT bVar5)
                {
                    if (iVar2 == iVar4)
                    {
                        bVar6 = true;
                    }
                }
                else
                {
                    bVar5 = false;
                    iVar4 = iVar2;
                }
            }
            switch (iVar2)
            {
                case 0:
                l_U294[I]._fU0 = 1182843182;
                break;
                case 1:
                l_U294[I]._fU0 = 1848013291;
                break;
                case 2:
                l_U294[I]._fU0 = -1702036227;
                break;
                case 3:
                l_U294[I]._fU0 = 286007875;
                break;
                case 4:
                l_U294[I]._fU0 = 824245375;
                break;
                case 5:
                l_U294[I]._fU0 = 1872110126;
                break;
            }
            l_U294[I]._fU4 = nil;
            l_U294[I]._fU8 = nil;
            l_U294[I]._fU12 = 0;
            l_U294[I]._fU16 = 0;
        }
    };;;;;;
    REQUEST_ANIMS( l_U288 );
    l_U291 = 1;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar2 );
    if (iVar2 < 50)
    {
        l_U291 = 0;
    }
    return;
}

int sub_4626()
{
    boolean bVar2;

    if ((l_U330) AND (IS_KEYBOARD_KEY_PRESSED( 31 )))
    {
        l_U338 = 1;
        sub_4660();
        return 0;
    }
    if ((l_U330) AND (IS_KEYBOARD_KEY_PRESSED( 33 )))
    {
        l_U329 = 11;
        sub_20703();
        return 0;
    }
    l_U327 = 0;
    l_U328 = 0;
    switch (l_U324)
    {
        case 0:
        sub_29912( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_30665();
        break;
        case 2:
        l_U324 = 3;
        break;
        case 3:
        sub_45189();
        break;
        case 4:
        sub_47122();
        break;
        case 5:
        sub_49714();
        l_U123 = 0;
        break;
        case 6:
        l_U327 = 1;
        break;
        case 7:
        sub_50128();
        l_U123 = 0;
        break;
        default:
        sub_29912( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    if (l_U327)
    {
        sub_4660();
        return 0;
    }
    if (l_U328)
    {
        sub_20703();
        return 0;
    }
    sub_50706();
    if (l_U324 != 7)
    {
        if (l_U792)
        {
            bVar2 = sub_50756( l_U276 );
            if (bVar2)
            {
                l_U328 = 1;
                l_U329 = 7;
                sub_20703();
                return 0;
            }
            bVar2 = sub_51072();
            if (bVar2)
            {
                l_U328 = 1;
                l_U329 = 8;
                sub_20703();
                return 0;
            }
        }
    }
    return 1;
}

void sub_4660()
{
    PRINTSTRING( "******************** BRUCIE COPTER PASSED\n" );
    PRINTNL();
    CLEAR_WANTED_LEVEL( sub_4728() );
    sub_4771( l_U338 );
    g_U21 = l_U323;
    sub_18370();
    return;
}

void sub_4728()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4771(unknown uParam0)
{
    sub_4782( uParam0 );
    return;
}

void sub_4782(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 1;
    sub_4800();
    sub_4855( uParam0 );
    sub_4884( uParam0 );
    sub_4917( iVar3, iVar4, iVar5 );
    iVar6 = 8;
    uVar7 = g_U22274[iVar6]._fU144;
    sub_17756( iVar6, uVar7 );
    return;
}

void sub_4800()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U781[I] = 4;
    }
    return;
}

void sub_4855(unknown uParam0)
{
    l_U781[1] = uParam0;
    return;
}

void sub_4884(unknown uParam0)
{
    l_U781[0] = uParam0;
    return;
}

void sub_4917(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 8;
    sub_4948( iVar5, uParam0, uParam1, uParam2, "Friend_9" );
    return;
}

void sub_4948(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_5044( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_5044( ref cVar9 );
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
            sub_5044( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_5044( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_5044( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_5044( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_5621( iParam0, iVar7 );;;
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
                sub_6039( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_6039( 0, 4 );
            }
        }
    }
    if (NOT (sub_6128( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4728(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_4728() );
    }
    sub_15360();
    bVar27 = true;
    uVar28 = sub_5621( iParam0, iVar7 );
    uVar29 = sub_16002( iParam0 );
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
                sub_16533( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_16963();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_17048( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_17105( iParam0 );
                sub_17240( 0 );
                sub_17321( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_17426();
        }
    }
    if (bParam2)
    {
        sub_16963();
        sub_17514();
        sub_17240( 0 );
    }
    if (bParam3)
    {
        sub_16963();
        sub_17554();
        sub_17240( 0 );
        sub_17321( uVar29, 0 );
    }
    sub_17605();
    return;
}

void sub_5044(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_5621(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_5695( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_5695(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_6039(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_6128(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_6336( uParam1 );
        break;
        case 1:
        bVar8 = sub_8414( uParam1 );
        break;
        case 2:
        bVar8 = sub_8640( uParam1 );
        break;
        case 3:
        bVar8 = sub_8790( uParam1 );
        break;
        case 4:
        bVar8 = sub_9068( uParam1 );
        break;
        case 5:
        bVar8 = sub_9371( uParam1 );
        break;
        case 6:
        bVar8 = sub_9570( uParam1 );
        break;
        case 7:
        bVar8 = sub_9796( uParam1 );
        break;
        case 8:
        bVar8 = sub_10031( uParam1 );
        break;
        case 9:
        bVar8 = sub_10406( uParam1 );
        break;
        case 10:
        bVar8 = sub_10653( uParam1 );
        break;
        case 11:
        bVar8 = sub_10792( uParam1 );
        break;
        case 12:
        bVar8 = sub_11091( uParam1 );
        break;
        case 13:
        bVar8 = sub_11319( uParam1 );
        break;
        case 14:
        bVar8 = sub_11606( uParam1 );
        break;
        case 15:
        bVar8 = sub_11888( uParam1 );
        break;
        case 16:
        bVar8 = sub_12170( uParam1 );
        break;
        case 17:
        bVar8 = sub_12371( uParam1 );
        break;
        case 18:
        bVar8 = sub_12444( uParam1 );
        break;
        case 19:
        bVar8 = sub_12658( uParam1 );
        break;
        case 20:
        bVar8 = sub_12911( uParam1 );
        break;
        case 21:
        bVar8 = sub_13158( uParam1 );
        break;
        case 22:
        bVar8 = sub_13359( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_8019( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_5621( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_13682( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_6336(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_6615( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_6615( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_6615( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_6615( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_6615( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_6615( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_6615( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_6615( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_6615( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_6615( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_6615( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_6615( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_6615( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_6615( iVar3, 0, 3, 1, 0, 0 );
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
        sub_6615( iVar3, 0, sub_7897(), sub_8163(), 0, 0 );
        break;
        default:
        sub_8322( "Friend 1", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Friend 1", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_6615(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_6626( uParam1 );
    sub_6800( uParam0, 0, uParam2 );
    sub_6800( uParam0, 1, uParam3 );
    sub_6800( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_4800();
    return;
}

void sub_6626(unknown uParam0)
{
    ADD_SCORE( sub_4728(), uParam0 );
    sub_6651( uParam0 );
    return;
}

void sub_6651(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_5695( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_6800(unknown uParam0, int iParam1, int iParam2)
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
        sub_6957( uParam0 );
    }
    return;
}

void sub_6957(unknown uParam0)
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

int sub_7897()
{
    switch (l_U781[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_8019( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_8019(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_8163()
{
    switch (l_U781[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_8019( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_8322(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_8414(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6615( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_8322( "Contact 2", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 2", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8640(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_6615( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_8322( "Girl 3", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Girl 3", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8790(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_6615( iVar3, 0, sub_7897(), sub_8163(), 0, 0 );
        break;
        default:
        sub_8322( "Friend 4", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Friend 4", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9068(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6615( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_6615( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_6615( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_6615( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_8322( "Contact 5", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 5", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9371(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_8322( "Contact 7", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 7", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9570(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6615( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_8322( "Contact 7b", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 7b", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9796(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_6615( iVar3, 0, sub_7897(), sub_8163(), 0, 0 );
        break;
        default:
        sub_8322( "Friend 8", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Friend 8", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10031(unknown uParam0)
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
        sub_6615( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_6615( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_6615( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_6615( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_6615( iVar3, 0, sub_7897(), sub_8163(), 0, 0 );
        break;
        default:
        sub_8322( "Friend 9", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Friend 9", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10406(unknown uParam0)
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
        sub_6615( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_6615( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_6615( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_8322( "Contact 10", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_8322( "Contact 10", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10653(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_8322( "Girl 11", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Girl 11", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10792(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6615( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_6615( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_6615( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_6615( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_6615( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_8322( "Contact 12", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 12", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11091(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6615( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_8322( "Contact 13", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 13", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11319(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_6615( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_6615( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_6615( iVar3, 0, sub_7897(), sub_8163(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_8322( "Friend 15", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Friend 15", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11606(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6615( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_6615( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_6615( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_8322( "Contact 16", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 16", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11888(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_6615( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_6615( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_6615( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_8322( "Contact 18", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 18", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12170(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_8322( "Contact 19", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 19", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12371(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_8322( "Girl 20", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12444(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_8322( "Contact 21", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 21", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12658(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6615( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_6615( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_8322( "Contact 22", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 22", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12911(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_6615( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6615( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_6615( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_8322( "Contact 24", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 24", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13158(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6615( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6615( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6615( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_8322( "Contact 25", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8322( "Contact 25", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13359(unknown uParam0)
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
        sub_6615( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_8322( "Girl 26", 1 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_8322( "Girl 26", 0 );
        sub_6615( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_13682(int iParam0, int iParam1)
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
    if (sub_13730( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_14461( iParam1 );
    }
    return;
}

int sub_13730(int iParam0, int iParam1)
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
            sub_13870( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_13870(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_14052( 0 );
    return;
}

void sub_14052(boolean bParam0)
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
        sub_14307();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_14307()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_14461(int iParam0)
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
        sub_14794( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_14794( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_14794( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_14794( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_14794( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_14794( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_14794( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_14794( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_14794( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_14794( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_14794( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_14794( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_14794( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_14794( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_14794( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_14794( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_14794( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_14794( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_14794( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_14794(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_15360()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_15398( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_15398( 1, g_U569[I] )) != 0)
            {
                sub_15684( I );
            }
        }
    }
    if (NOT sub_15850())
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

int sub_15398(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_15684(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_15769( g_U569 - 1 );
    return;
}

void sub_15769(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_15850()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_15398( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_16002(unknown uParam0)
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
    sub_5695( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_16533(unknown uParam0, unknown uParam1)
{
    sub_16552( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_16552(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_16963()
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

int sub_17048(int iParam0, int iParam1)
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

void sub_17105(unknown uParam0)
{
    sub_17114();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_17114()
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

void sub_17240(unknown uParam0)
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

void sub_17321(int iParam0, boolean bParam1)
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

void sub_17426()
{
    sub_17435();
    return;
}

void sub_17435()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_17514()
{
    sub_17435();
    return;
}

void sub_17554()
{
    sub_17435();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_17605()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_17627();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_17627()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_17756(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown uVar5;
    int I;
    int iVar7;

    if (g_U0)
    {
        return;
    }
    iVar4 = 3;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        iVar4 = 0;
        break;
        case 7: return;
        case 8:
        iVar4 = 1;
        break;
        case 13:
        iVar4 = 2;
        break;
        default: return;
    }
    switch (uParam1)
    {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 11:
        case 12:
        case 13: break;
        case 10: return;
    }
    return;
    uVar5 = uParam1;
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU0), uVar5 )))
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU4), uVar5 ))
    {
        return;
    }
    SET_BIT( 1, uVar5 );
    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU0), I ))
        {
            if (NOT (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU4), I )))
            {
                return;
            }
        }
    }
    iVar7 = 0;
    if (NOT g_U64821[iVar4]._fU0)
    {
        iVar7 = ProtectedGet(g_U64838[iVar4]._fU8);
        if (iVar7 > 0)
        {
            sub_13870( 3, iVar7 );
            g_U64821[iVar4]._fU0 = 1;
            sub_18219( uParam0 );
            return;
        }
    }
    return;
    break;
    2;
    1;
    ref g_U64831[iVar4]._fU4;
    1;
    ref g_U64831[iVar4]._fU4;
    break;
}

void sub_18219(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRDOK_J" );
        break;
        case 8:
        PRINT_HELP( "FRDOK_B" );
        break;
        case 13:
        PRINT_HELP( "FRDOK_P" );
        break;
    }
    return;
}

void sub_18370()
{
    sub_18379();
    sub_18556();
    sub_19634();
    sub_20148();
    sub_20449( 8, 9, l_U330 );
    if (IS_THREAD_ACTIVE( l_U791 ))
    {
        DESTROY_THREAD( l_U791 );
        l_U791 = nil;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_18379()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        if ((NOT (l_U294[I]._fU4 == nil)) AND (NOT (IS_CHAR_DEAD( l_U294[I]._fU4 ))))
        {
            if (IS_GROUP_MEMBER( l_U294[I]._fU4, sub_18454() ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U294[I]._fU4 );
            }
        }
    }
    REMOVE_ANIMS( l_U288 );
    return;
}

void sub_18454()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_18556()
{
    sub_18565();
    sub_18637();
    sub_18678();
    sub_18708( 8 );
    REMOVE_DECISION_MAKER( l_U127 );
    if (NOT (COMPARE_STRING( ref l_U167._fU0, l_U166 )))
    {
        REMOVE_ANIMS( ref l_U167._fU0 );
    }
    l_U108 = 0;
    if ((NOT (l_U276 == nil)) AND (NOT (IS_CHAR_DEAD( l_U276 ))))
    {
        if (IS_GROUP_MEMBER( l_U276, sub_18454() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U276 );
        }
        if (IS_CHAR_INJURED( l_U276 ))
        {
            SET_PED_DIES_WHEN_INJURED( l_U276, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U276 );
        }
        else
        {
            DELETE_CHAR( ref l_U276 );
        }
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    return;
}

void sub_18565()
{
    sub_18578( ref l_U277 );
    return;
}

void sub_18578(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_18637()
{
    REMOVE_BLIP( l_U107 );
    l_U124 = 0;
    l_U125 = 0;
    return;
}

void sub_18678()
{
    REMOVE_BLIP( l_U284 );
    return;
}

void sub_18708(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_18719( uParam0 ) );
    return;
}

int sub_18719(unknown uParam0)
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
    sub_5695( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_19634()
{
    sub_19643();
    return;
}

void sub_19643()
{
    int iVar2;

    if (l_U339)
    {
        DELETE_WIDGET_GROUP( l_U340 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U336 );
    if (l_U335)
    {
        SET_CAM_ACTIVE( l_U331[1], 0 );
        SET_CAM_PROPAGATE( l_U331[1], 0 );
        sub_19727();
    }
    if (IS_PLAYER_PLAYING( sub_4728() ))
    {
        SET_PLAYER_CONTROL( sub_4728(), 1 );
    }
    CLEAR_HELP();
    sub_19822();
    iVar2 = 0;
    sub_19992( iVar2 );
    return;
}

void sub_19727()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    SET_USE_HIGHDOF( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    l_U335 = 0;
    return;
}

void sub_19822()
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

void sub_19992(unknown uParam0)
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

void sub_20148()
{
    sub_20157();
    return;
}

void sub_20157()
{
    sub_20166();
    return;
}

void sub_20166()
{
    g_U10978 = 0;
    if (g_U813)
    {
        sub_20191();
        return;
    }
    sub_20306();
    return;
}

void sub_20191()
{
    if (COMPARE_STRING( ref g_U9926, "FPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_20236();
    return;
}

void sub_20236()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_20306()
{
    if (COMPARE_STRING( ref g_U9926, "FPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_20351();
    return;
}

void sub_20351()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_20449(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_U813)
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
    g_U22274[uParam0]._fU152 = iVar7 + iVar5;
    g_U22274[uParam0]._fU156 = iVar7 + iVar6;
    if (bParam2)
    {
        g_U22274[uParam0]._fU148 = uParam1;
        return;
    }
    g_U22274[uParam0]._fU148 = 14;
    return;
}

void sub_20703()
{
    int iVar2;

    PRINTSTRING( ".................... BRUCIE COPTER FAILED" );
    iVar2 = 0;
    switch (l_U329)
    {
        case 2:
        PRINTSTRING( ".......................(Brucie killed by player)\n" );
        iVar2 = sub_20922( l_U276 );
        sub_21003( iVar2, l_U276 );
        break;
        case 1:
        case 0:
        PRINTSTRING( ".......................(Brucie or a girl killed)\n" );
        if (IS_CHAR_INJURED( l_U276 ))
        {
            iVar2 = sub_20922( l_U276 );
            sub_21003( iVar2, l_U276 );
        }
        break;
        case 3:
        PRINTSTRING( ".......................(Brucie's girl killed)\n" );
        PRINT_NOW( "GIRLDED", 7000, 1 );
        sub_26798( 8, 1, -3 );
        break;
        case 5:
        PRINTSTRING( ".......................(vehicle destroyed by player)\n" );
        iVar2 = 1;
        sub_26798( 8, 1, -5 );
        break;
        case 6:
        PRINTSTRING( ".......................(game abandoned)\n" );
        break;
        case 7:
        sub_27113( l_U276, 8 );
        break;
        case 8:
        PRINTSTRING( ".......................(Brucie's girl left behind)\n" );
        PRINT_NOW( "FAFGLFT", 7000, 1 );
        break;
        case 11:
        PRINTSTRING( ".......................(forced failure)\n" );
        break;
        case 12:
        sub_29912( "Unknown reason for failure" );
        break;
        default: sub_29912( "Unrecognised Fail ID" );
    }
    PRINTNL();
    sub_30124( iVar2 );
    sub_18370();
    return;
}

void sub_20922(unknown uParam0)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_1328() )))
        {
            Result = HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_1328(), 0 );
        }
    }
    return Result;
}

void sub_21003(unknown uParam0, unknown uParam1)
{
    sub_21016( uParam0, uParam1 );
    return;
}

void sub_21016(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 8;
    iVar5 = 8;
    sub_21035( iVar4, uParam1 );
    if (bParam0)
    {
        sub_26286( iVar5 );
    }
    return;
}

void sub_21035(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT g_U22274[uParam0]._fU500._fU0)
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    uVar4 = sub_21097( uParam0 );
    if (g_U13391[uVar4]._fU80._fU0 == 1)
    {
        sub_21494( uVar4 );
    }
    if (g_U13391[uVar4]._fU0._fU0 == 1)
    {
        sub_25746( uVar4 );
    }
    if (g_U13391[uVar4]._fU160._fU0)
    {
        if (g_U13391[uVar4]._fU160._fU8)
        {
            g_U15946[uParam0]._fU8[0]._fU0[3] = 0;
        }
        g_U13391[uVar4]._fU160._fU108._fU0 = 0;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U22274[uParam0]._fU500._fU4 = 1;
    g_U22274[uParam0]._fU500._fU168 = iVar5 + g_U22274[uParam0]._fU500._fU164;
    g_U22274[uParam0]._fU500._fU184 = uParam1;
    sub_26252( "CONTACT HOSPITALISED\n" );
    return;
}

int sub_21097(unknown uParam0)
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
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_5695( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

void sub_21494(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU80._fU0 = 0;
        sub_21615( uParam0 );
        sub_23895( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_24183( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_24183( uParam0, iVar4 );
        break;
        case 6:
        sub_24183( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_24632( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_5695( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_21615(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 1)))
    {
        sub_21672( uParam0 );
        sub_21818( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_21672( uParam0 );
        sub_22008( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_21818( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 1)))
    {
        sub_21672( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_23131( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_21672( uParam0 );
    }
    return;
}

void sub_21672(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
    g_U13391[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU0._fU68;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_21818(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
    g_U13391[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU80._fU68;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_22008(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_21818( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU80._fU4;
        iVar8 = sub_5621( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU80._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_5695( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U1 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U2 );
        sub_22686( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_22686(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_22778( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_22778( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_22778( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_22778( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_22778( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_22778( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_22778(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_23131(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_21672( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU0._fU4;
        iVar8 = sub_5621( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU0._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_5695( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U1 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U2 );
        if (l_U435)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U435 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U435 = 1;
        }
        sub_22686( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_23895(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
        }
    }
    g_U13391[uParam0]._fU80._fU0 = 0;
    g_U13391[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU80._fU24, "", 32 );
    g_U13391[uParam0]._fU80._fU56 = 10;
    g_U13391[uParam0]._fU80._fU60 = nil;
    g_U13391[uParam0]._fU80._fU64 = nil;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U13391[uParam0]._fU80._fU72 = 1;
    g_U13391[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_24183(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_23895( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_24321( uParam0, 0 );;
    sub_21615( uParam0 );
    return;
}

void sub_24321(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
        }
    }
    g_U13391[uParam0]._fU0._fU0 = 0;
    g_U13391[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU0._fU24, "", 32 );
    g_U13391[uParam0]._fU0._fU56 = 10;
    g_U13391[uParam0]._fU0._fU60 = nil;
    g_U13391[uParam0]._fU0._fU64 = nil;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U13391[uParam0]._fU0._fU72 = 1;
    g_U13391[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_24632(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U13391[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U13391[iParam0]._fU80._fU60 );
        }
        sub_23895( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U13391[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U13391[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U13391[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    sub_24321( iParam0, 0 );
    if (bVar4)
    {
        sub_24841();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_24897();
        return;
    }
    sub_21615( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_25544( iParam0 );
    }
    if (g_U2)
    {
        if (g_U3)
        {
            WAIT( 1500 );
            g_U4 = 1;
        }
    }
    return;
}

void sub_24841()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_24897()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_4728() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1328() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_1328(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_25009();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1328(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U434 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_4728(), 0 );
    sub_25164();
    if (IS_PLAYER_PLAYING( sub_4728() ))
    {
        SET_PLAYER_CONTROL( sub_4728(), 1 );
    }
    return;
}

void sub_25009()
{
    g_U15936._fU0 = 0;
    g_U15936._fU4 = 0;
    g_U15936._fU8 = 0;
    g_U15936._fU12 = 0;
    g_U15936._fU16 = 0;
    g_U15936._fU20 = 0;
    g_U15936._fU24 = -1;
    g_U15936._fU32 = nil;
    g_U15936._fU28 = 0;
    return;
}

void sub_25164()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4728() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_1328() ))
    {
        l_U434 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_4728(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_1328() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1328(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_1328(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_1328(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15936._fU20)
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
        if (l_U434)
        {
            return;
        }
        l_U434 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_4728(), 1 );
    }
    else if (NOT l_U434)
    {
        return;
    }
    l_U434 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_4728(), 0 );;
    return;
}

void sub_25544(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_25746(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU0._fU0 = 0;
        sub_21615( uParam0 );
        sub_24321( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_24183( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_24183( uParam0, iVar4 );
        break;
        case 6:
        sub_24183( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_24632( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_5695( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_26252(unknown uParam0)
{
    return;
}

void sub_26286(unknown uParam0)
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
        sub_6615( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_5044( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_26798(unknown uParam0, int iParam1, int iParam2)
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
        sub_6957( uParam0 );
    }
    return;
}

void sub_27113(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = g_U22274[uParam1]._fU104;
    uVar5 = g_U22274[uParam1]._fU136;
    sub_27158( uVar4 );
    sub_27264( uVar4, uParam1, uVar5, 0 );
    uVar6 = sub_21097( uParam1 );
    sub_29525( uVar6 );
    return;
}

void sub_27158(unknown uParam0)
{
    g_U63988._fU12[uParam0]._fU0 = 0;
    g_U63988._fU12[uParam0]._fU4 = 0;
    g_U63988._fU12[uParam0]._fU12 = 57;
    g_U63988._fU12[uParam0]._fU16 = 0;
    g_U63988._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_27264(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_27286( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_27286(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_27398( uParam1, uParam2 );
        return;
    }
    if (g_U63988._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar8 = 0;
    GET_GAME_TIMER( ref iVar8 );
    g_U63988._fU12[iParam0]._fU0 = 1;
    g_U63988._fU12[iParam0]._fU4 = 0;
    g_U63988._fU12[iParam0]._fU8 = 0;
    g_U63988._fU12[iParam0]._fU12 = uParam1;
    g_U63988._fU12[iParam0]._fU16 = uParam2;
    g_U63988._fU12[iParam0]._fU20 = iVar8 + iParam3;
    g_U63988._fU12[iParam0]._fU28 = uParam4;
    sub_29332( iParam0, iParam3 );
    return;
}

void sub_27398(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_27421( uParam0 );
    sub_27912( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_28256( ref uVar4, 1 );
    sub_28284( ref uVar4, 0 );
    sub_28312( ref uVar4, 2 );
    sub_28342( ref uVar4 );
    return;
}

int sub_27421(unknown uParam0)
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
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_5695( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_27912(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_27934( uParam0, 0, iParam4 + 0 );
    sub_27934( uParam1, 1, iParam4 + 0 );
    sub_27934( uParam2, 2, iParam4 + 0 );
    sub_27934( uParam3, 3, iParam4 + 0 );
    sub_27934( 0, 4, iParam4 + 0 );
    sub_27934( 1, 5, iParam4 + 0 );
    sub_27934( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_27934(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_28256(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_28284(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_28312(int iParam0, unknown uParam1)
{
    sub_27934( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_28342(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_28412())
        {
            sub_15684( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_28539( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_15684( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_15398( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_15398( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_28412()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_15398( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_15684( I );
            return 1;
        }
    }
    return 0;
}

int sub_28539(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_28604( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_28604(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_15398( 0, uParam0 );
        if (iVar14 == (sub_15398( 0, uParam6 )))
        {
            iVar15 = sub_15398( 3, uParam0 );
            if (iVar15 == (sub_15398( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_29332(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_29371( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_29371(int iParam0)
{
    int iVar3;

    iVar3 = sub_17627();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_29401();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_29401()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_29525(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        case 7:
        iVar3 = -10;
        break;
        case 3:
        iVar3 = -10;
        break;
        case 8:
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_5695( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_26798( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_26798( uParam0, 0, iVar4 );
    return;
}

void sub_29912(unknown uParam0)
{
    sub_29957( "ERROR: BRUCIE COPTER (KEITHM): ", uParam0 );
    return;
}

void sub_29957(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_30124(boolean bParam0)
{
    switch (l_U329)
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
        PRINT_NOW( "FAFLEFT", 7000, 1 );
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

void sub_30665()
{
    l_U343 = 0;
    if (sub_30680())
    {
        l_U328 = 1;
        l_U329 = 3;
        g_U15946[8]._fU8[0]._fU0[2] = 0;
        return;
    }
    sub_30833();
    sub_33254();
    l_U118 = 1;
    if (NOT (sub_33619( 8, l_U276 )))
    {
        return;
    }
    if (NOT l_U328)
    {
        while (NOT sub_43724())
        {
            sub_30833();
            WAIT( 0 );
        }
        sub_43819();
        sub_33254();
    }
    sub_19822();
    sub_44869( 8, 2 );
    return;
}

int sub_30680()
{
    int I;

    if (IS_CHAR_DEAD( l_U276 ))
    {
        return 0;
    }
    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT (l_U294[I]._fU4 == nil))
        {
            if (IS_CHAR_INJURED( l_U294[I]._fU4 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_30833()
{
    vector[2] vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float[2] fVar9;
    int I;

    array(ref vVar2, 2);
    array(ref fVar9, 2);
    if (g_U64643)
    {
        vVar2[0] = {780.79420000, 119.28620000, 4.96880000};
        fVar9[0] = 234.14560000;
        vVar2[1] = {781.26640000, 116.71040000, 4.98620000};
        fVar9[1] = 6.86690000;
    }
    else
    {
        vVar2[0] = {861.64190000, -118.24530000, 4.94360000};
        fVar9[0] = 217.13240000;
        vVar2[1] = {861.60200000, -121.68630000, 4.94310000};
        fVar9[1] = 16.02260000;
    }
    I = 0;
    if (IS_CHAR_DEAD( l_U276 ))
    {
        for ( I = 0; I < 2; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U294[I]._fU4 )))
            {
                DELETE_CHAR( ref l_U294[I]._fU4 );
                l_U294[I]._fU4 = nil;
            }
        }
        return;
    }
    for ( I = 0; I < 2; I++ )
    {
        if (l_U294[I]._fU4 == nil)
        {
            if (IS_CHAR_DEAD( l_U294[I]._fU4 ))
            {
                if (NOT (HAS_MODEL_LOADED( l_U294[I]._fU0 )))
                {
                    REQUEST_MODEL( l_U294[I]._fU0 );
                }
                else
                {
                    CREATE_CHAR( 25, l_U294[I]._fU0, vVar2[I]._fU0, vVar2[I]._fU4, vVar2[I]._fU8, ref l_U294[I]._fU4, 1 );
                    SET_CHAR_HEADING( l_U294[I]._fU4, fVar9[I] );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U294[I]._fU0 );
                    sub_31332( ref l_U294[I]._fU4, 57 );
                    SET_CHAR_DECISION_MAKER( l_U294[I]._fU4, l_U127 );
                }
            }
            else
            {
                sub_32911( I );
            }
        }
    }
    return;
}

void sub_31332(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_31426( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_31970( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_31426(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_31970(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_31426( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_31426( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_31426( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_31426( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_31426( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_31426( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_31426( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_31426( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_31426( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_31426( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_31426( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_31426( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_31426( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_32911(int iParam0)
{
    int iVar3;
    boolean bVar4;

    if (l_U292)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( l_U288 )))
    {
        REQUEST_ANIMS( l_U288 );
        return;
    }
    if (IS_CHAR_INJURED( l_U294[iParam0]._fU4 ))
    {
        return;
    }
    GET_SCRIPT_TASK_STATUS( l_U294[iParam0]._fU4, 80, ref iVar3 );
    bVar4 = iVar3 == 1;
    if (bVar4)
    {
        return;
    }
    if (l_U291)
    {
        if (iParam0 == 0)
        {
            TASK_PLAY_ANIM( l_U294[iParam0]._fU4, l_U289, l_U288, 8.00000000, 1, 0, 0, 0, -2 );
        }
        else
        {
            TASK_PLAY_ANIM( l_U294[iParam0]._fU4, l_U290, l_U288, 8.00000000, 1, 0, 0, 0, -2 );
        }
    }
    else if (iParam0 == 0)
    {
        TASK_PLAY_ANIM( l_U294[iParam0]._fU4, l_U290, l_U288, 8.00000000, 1, 0, 0, 0, -2 );
    }
    else
    {
        TASK_PLAY_ANIM( l_U294[iParam0]._fU4, l_U289, l_U288, 8.00000000, 1, 0, 0, 0, -2 );
    }
    return;
}

void sub_33254()
{
    int iVar2;
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;
    int I;

    if (l_U292)
    {
        return;
    }
    iVar2 = 0;
    iVar3 = 0;
    GET_GROUP_SIZE( sub_18454(), ref iVar2, ref iVar3 );
    if (iVar3 == 0)
    {
        return;
    }
    bVar4 = false;
    iVar5 = 0;
    bVar7 = true;
    while (bVar7)
    {
        GET_GROUP_MEMBER( sub_18454(), iVar5, ref iVar6 );
        if (iVar6 == l_U276)
        {
            bVar7 = false;
            bVar4 = true;
        }
        if (NOT bVar4)
        {
            iVar5++;
            if (iVar5 >= iVar3)
            {
                bVar7 = false;
            }
        }
    }
    if (NOT bVar4)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U294[I]._fU4 )))
        {
            if (sub_33447( I ))
            {
                CLEAR_CHAR_TASKS( l_U294[I]._fU4 );
                SET_GROUP_MEMBER( sub_18454(), l_U294[I]._fU4 );
            }
        }
    }
    l_U292 = 1;
    return;
}

int sub_33447(unknown uParam0)
{
    int iVar3;

    if (IS_CHAR_DEAD( l_U294[uParam0]._fU4 ))
    {
        return 1;
    }
    GET_SCRIPT_TASK_STATUS( l_U294[uParam0]._fU4, 80, ref iVar3 );
    if ((iVar3 == 1) || (iVar3 == 7))
    {
        return 1;
    }
    return 0;
}

int sub_33619(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (l_U325 == 0)
    {
        l_U395 = iVar4 + 3000;
        l_U396 = 0;
        l_U325++;
    }
    if (NOT (iParam1 == nil))
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U328 = 1;
            l_U329 = 0;
            g_U15946[uParam0]._fU8[0]._fU0[2] = 0;
            return 1;
        }
    }
    if (NOT l_U396)
    {
        if (l_U395 < iVar4)
        {
            l_U396 = sub_33769( uParam0 );
            if (NOT l_U396)
            {
                l_U395 = iVar4 + 3000;
            }
        }
    }
    if (l_U325 == 1)
    {
        if (sub_34314( uParam0 ))
        {
            l_U325 = 99;
        }
    }
    if (l_U325 == 99)
    {
        l_U324 = 2;
        l_U325 = 0;
        sub_43300( uParam0 );
        g_U15946[uParam0]._fU8[0]._fU0[2] = 0;
        if (NOT (IS_CHAR_DEAD( sub_1328() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1328(), 0 );
        }
        return 1;
    }
    return 0;
}

int sub_33769(unknown uParam0)
{
    if ((g_U9196) AND (g_U9198))
    {
        return 1;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return 1;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    if (NOT g_U9196)
    {
        if (g_U22274[uParam0]._fU144 == 10)
        {
            return 1;
        }
        sub_33879( uParam0 );
        g_U9196 = 1;
        return 1;
    }
    if (NOT g_U9198)
    {
        sub_34078( uParam0 );
        g_U9198 = 1;
        return 1;
    }
    return 1;
}

void sub_33879(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRPICKR" );
        break;
        case 3:
        PRINT_HELP( "FRPICKJ" );
        break;
        case 7:
        PRINT_HELP( "FRPICKD" );
        break;
        case 8:
        PRINT_HELP( "FRPICKB" );
        break;
        case 13:
        PRINT_HELP( "FRPICKP" );
        break;
    }
    return;
}

void sub_34078(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRQUITR" );
        break;
        case 3:
        PRINT_HELP( "FRQUITJ" );
        break;
        case 7:
        PRINT_HELP( "FRQUITD" );
        break;
        case 8:
        PRINT_HELP( "FRQUITB" );
        break;
        case 13:
        PRINT_HELP( "FRQUITP" );
        break;
    }
    return;
}

int sub_34314(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return sub_34372();
        case 3: return sub_42965();
        case 7: return sub_42999();
        case 8: return sub_43033();
        case 13: return sub_43067();
    }
    sub_5695( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Not a friend" );
    sub_5695( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Should never reach here" );
    return 0;
}

void sub_34372()
{
    return sub_34390( 0, ref l_U195, ref l_U196 );
}

int sub_34390(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_4728() )))
    {
        return 0;
    }
    sub_34423( uParam0 );
    sub_34458();
    sub_34780( (uParam1^) );
    sub_35560();
    if (l_U102 == 0)
    {
        sub_35675( uParam0, uParam1 );
        return 0;
    }
    if (l_U102 == 1)
    {
        sub_36149( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U102 == 2)
    {
        sub_36798( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U102 == 3)
    {
        sub_37986();
        return 0;
    }
    if (l_U102 == 4)
    {
        if (sub_38343( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_4728(), 1 );
    g_U22274[uParam0]._fU20 = 1;
    return 1;
}

void sub_34423(unknown uParam0)
{
    l_U115 = g_U22274[uParam0]._fU28;
    return;
}

void sub_34458()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4728() )))
    {
        return;
    }
    if (g_U10978)
    {
        return;
    }
    if (g_U9893._fU12)
    {
        return;
    }
    if (sub_34535() < 14.00000000)
    {
        return;
    }
    if (NOT (GET_CLOSEST_CAR_NODE( l_U103._fU0, l_U103._fU4, l_U103._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 )))
    {
        return;
    }
    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    SET_CHAR_COORDINATES( sub_1328(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    return;
}

void sub_34535()
{
    vector vVar2;
    float Result;

    if (IS_CHAR_DEAD( sub_1328() ))
    {
        return 9999.90000000;
    }
    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    GET_CHAR_COORDINATES( sub_1328(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_DISTANCE_BETWEEN_COORDS_3D( vVar2.x, vVar2.y, vVar2.z, l_U103._fU0, l_U103._fU4, l_U103._fU8, ref Result );
    return Result;
}

void sub_34780(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U167._fU0, l_U166 ))
    {
        return;
    }
    if (NOT l_U167._fU96)
    {
        return;
    }
    sub_34835( uParam0 );
    l_U167._fU80 = l_U102;
    return;
}

void sub_34835(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    boolean bVar9;

    if (l_U102 == 0)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( ref l_U167._fU0 )))
    {
        REQUEST_ANIMS( ref l_U167._fU0 );
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
        TASK_PLAY_ANIM( uParam0, ref l_U167._fU32, ref l_U167._fU0, 8.00000000, 1, 0, 0, 0, -2 );
        l_U167._fU88 = 0;
        l_U167._fU92 = 0;
        return;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = 0;
    if ((((l_U167._fU80 == 1) AND (l_U102 == 2)) AND (NOT (COMPARE_STRING( ref l_U167._fU48, l_U166 )))) AND (NOT l_U167._fU88))
    {
        iVar7 = 1;
    }
    bVar8 = false;
    if (l_U167._fU100)
    {
        bVar9 = sub_35134();
        if (NOT bVar9)
        {
            bVar9 = IS_CHAR_ON_FOOT( sub_1328() );
        }
        if (((((l_U167._fU80 == 1) AND (l_U102 == 2)) AND (bVar9)) AND (NOT (COMPARE_STRING( ref l_U167._fU64, l_U166 )))) AND (NOT l_U167._fU92))
        {
            iVar7 = 1;
            bVar8 = true;
        }
    }
    else if (l_U102 == 1)
    {
        l_U167._fU100 = 1;
    }
    if ((iVar6 > l_U167._fU84) || (iVar7))
    {
        CLEAR_CHAR_TASKS( uParam0 );
        if (bVar8)
        {
            TASK_PLAY_ANIM( uParam0, ref l_U167._fU64, ref l_U167._fU0, 8.00000000, 0, 0, 0, 0, -2 );
            l_U167._fU100 = 0;
            l_U167._fU92 = 1;
        }
        else if (NOT (COMPARE_STRING( ref l_U167._fU48, l_U166 )))
        {
            TASK_PLAY_ANIM( uParam0, ref l_U167._fU48, ref l_U167._fU0, 8.00000000, 0, 0, 0, 0, -2 );
        }
        l_U167._fU88 = 1;
        sub_3130();
        return;
    }
    return;
}

boolean sub_35134()
{
    unknown uVar2;
    float fVar3;

    if (IS_CHAR_DEAD( sub_1328() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1328() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1328(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    return fVar3 > 0.02000000;
}

void sub_35560()
{
    int iVar2;

    if (NOT l_U125)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U124))
    {
        return;
    }
    CHANGE_BLIP_PRIORITY( l_U107, l_U1 );
    FLASH_BLIP( l_U107, 0 );
    l_U124 = 0;
    l_U125 = 0;
    return;
}

void sub_35675(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_34535();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((g_U10978) || (g_U9893._fU12))
    {
        return;
    }
    if (NOT (sub_35730( uParam0 )))
    {
        sub_35769( uParam0 );
        return;
    }
    sub_35833( uParam0, uParam1, l_U103._fU0, l_U103._fU4, l_U103._fU8, l_U106 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U127 );
    g_U22274[uParam0]._fU24 = 1;
    sub_3527( l_U157, (uParam1^), ref l_U153, 0 );
    sub_35993( uParam0, (uParam1^) );
    l_U102 = 1;
    l_U114 = 0;
    return;
}

void sub_35730(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_18719( uParam0 ) );
}

void sub_35769(unknown uParam0)
{
    REQUEST_MODEL( sub_18719( uParam0 ) );
    return;
}

void sub_35833(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_18719( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_35883( uParam0, (uParam1^) );
    return;
}

void sub_35883(unknown uParam0, unknown uParam1)
{
    sub_31332( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_35993(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_31970( uParam1, uParam0, l_U159 );
    CLEAR_CHAR_PROP( uParam1, 0 );
    iVar4 = -1;
    if (NOT (iVar4 == l_U160))
    {
        if (l_U160 == -1)
        {
            CLEAR_CHAR_PROP( uParam1, 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( uParam1, 1, l_U160 );
        }
    }
    ENABLE_PED_HELMET( uParam1, l_U161 );
    return;
}

void sub_36149(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_34535();
    if (((fVar5 > 100.00000000) || (g_U10978)) || (g_U9893._fU12))
    {
        sub_36194( uParam1 );
        sub_18708( uParam0 );
        l_U102 = 0;
        g_U22274[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_1328() )))
    {
        if (sub_36278( sub_1328() ))
        {
            return;
        }
    }
    if (fVar5 < 12.00000000)
    {
        l_U102 = 2;
        if (NOT IS_HINT_RUNNING())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1328() ))
            {
                GET_CHAR_COORDINATES( (uParam1^), ref l_U162._fU0, ref l_U162._fU4, ref l_U162._fU8 );
                l_U162._fU8 += 1.50000000;
                HINT_CAM( l_U162._fU0, l_U162._fU4, l_U162._fU8, 0, 0, 0, 30000 );
            }
        }
        l_U112 = 0;
        sub_18637();
        sub_36692( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_1328(), -2, 0 );
        return;
    }
    return;
}

void sub_36194(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

int sub_36278(int iParam0)
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
                if (sub_36342( uVar3 ))
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

int sub_36342(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_36692(unknown uParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        return;
    }
    ADD_BLIP_FOR_CHAR( uParam0, uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    return;
}

void sub_36798(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_34535();
    if (sub_36820( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_36992( uVar4 ))
    {
        return;
    }
    sub_37207();
    if ((sub_37301()) || (sub_37739()))
    {
        return;
    }
    return;
}

int sub_36820(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_1328() )))
    {
        if (sub_36278( sub_1328() ))
        {
            bVar5 = true;
        }
    }
    if (((NOT g_U10978) AND (NOT g_U9893._fU12)) AND (NOT bVar5))
    {
        if (fParam0 <= 14.00000000)
        {
            return 0;
        }
    }
    l_U102 = 1;
    CLEAR_HELP();
    sub_18578( uParam1 );
    sub_2726( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    return 1;
}

int sub_36992(float fParam0)
{
    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U102 = 3;
    if (NOT l_U114)
    {
        sub_37035();
    }
    if (l_U112)
    {
        if (l_U113)
        {
            PRINT_HELP_FOREVER( ref l_U128[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U128[1] );
        }
    }
    return 1;
}

int sub_37035()
{
    int iVar2;

    l_U114 = 1;
    iVar2 = IS_CHAR_IN_ANY_CAR( sub_1328() );
    if (l_U112 == iVar2)
    {
        return 0;
    }
    l_U112 = iVar2;
    l_U113 = 0;
    if (l_U112)
    {
        if (IS_CHAR_IN_ANY_HELI( sub_1328() ))
        {
            l_U113 = 1;
        }
    }
    return 1;
}

void sub_37207()
{
    if (NOT sub_37035())
    {
        return;
    }
    if (l_U112)
    {
        if (l_U113)
        {
            PRINT_HELP_FOREVER( ref l_U128[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U128[0] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_37301()
{
    unknown uVar2;
    float fVar3;
    int iVar4;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1328() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1328(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if ((fVar3 < 0.01000000) AND (sub_37376( 1, 1 )))
    {
        if (NOT l_U113)
        {
            SET_PLAYER_CONTROL( sub_4728(), 0 );
        }
        l_U102 = 4;
        CLEAR_HELP();
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        l_U165 = iVar4 + 20000;
        return 1;
    }
    return 0;
}

int sub_37376(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1328() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1328(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1328() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1328(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1328()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1328() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1328() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4728() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4728() )))
    {
        return 0;
    }
    return 1;
}

int sub_37739()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    bVar3 = false;
    if (((IS_CHAR_IN_ANY_CAR( sub_1328() )) AND (sub_37376( 1, 1 ))) AND (IS_PLAYER_PRESSING_HORN( sub_4728() )))
    {
        if (l_U113)
        {
            return 0;
        }
        if (l_U121 == 0)
        {
            l_U121 = iVar2 + 400;
            return 0;
        }
        if (l_U121 > iVar2)
        {
            return 0;
        }
        l_U121 = 0;
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        if (l_U121 > 0)
        {
            l_U121 = 0;
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        SET_PLAYER_CONTROL( sub_4728(), 0 );
        l_U102 = 4;
        CLEAR_HELP();
        l_U165 = iVar2 + 20000;
        return 1;
    }
    return 0;
}

void sub_37986()
{
    unknown uVar2;

    uVar2 = sub_34535();
    if (sub_38004( uVar2 ))
    {
        if (l_U112)
        {
            if (l_U113)
            {
                PRINT_HELP_FOREVER( ref l_U128[2] );
            }
            else
            {
                PRINT_HELP_FOREVER( ref l_U128[0] );
            }
        }
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1328() )))
    {
        l_U102 = 4;
        return;
    }
    if ((sub_37301()) || (sub_37739()))
    {
        return;
    }
    sub_38221();
    return;
}

int sub_38004(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_1328() )))
    {
        if (sub_36278( sub_1328() ))
        {
            bVar3 = true;
        }
    }
    if (((NOT g_U10978) AND (NOT g_U9893._fU12)) AND (NOT bVar3))
    {
        if (fParam0 <= 9.00000000)
        {
            return 0;
        }
    }
    l_U102 = 2;
    l_U112 = 0;
    return 1;
}

void sub_38221()
{
    if (NOT sub_37035())
    {
        return;
    }
    if (l_U112)
    {
        if (l_U113)
        {
            PRINT_HELP_FOREVER( ref l_U128[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U128[1] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_38343(unknown uParam0, unknown uParam1)
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

    bVar4 = g_U10978;
    if (NOT bVar4)
    {
        if (g_U9893._fU12)
        {
            bVar4 = true;
        }
    }
    if ((NOT l_U108) AND (bVar4))
    {
        l_U102 = 3;
        return 1;
    }
    iVar5 = 0;
    iVar6 = 0;
    if (NOT l_U108)
    {
        GET_GROUP_SIZE( sub_18454(), ref iVar5, ref iVar6 );
        if (iVar6 > 0)
        {
            if (NOT sub_38446())
            {
                sub_5695( "Check_If_Still_Joining_Group: Player has group members, but not Dwayne Backup" );
            }
            sub_38589();
            return 1;
        }
    }
    uVar7 = nil;
    iVar8 = 0;
    iVar9 = 1;
    if (NOT l_U108)
    {
        if (NOT l_U117)
        {
            iVar9 = 3;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1328() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1328(), ref uVar7 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar8 );
            if ((iVar8 < iVar9) || (l_U118))
            {
                TASK_LEAVE_CAR( sub_1328(), uVar7 );
                l_U119 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( (uParam0^), 80, ref iVar10 );
        if ((NOT (iVar10 == 1)) AND (NOT (iVar10 == 7)))
        {
            return 1;
        }
        if (NOT (COMPARE_STRING( ref l_U167._fU0, l_U166 )))
        {
            CLEAR_CHAR_TASKS( (uParam0^) );
            REMOVE_ANIMS( ref l_U167._fU0 );
            l_U167._fU96 = 0;
        }
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        SET_GROUP_MEMBER( sub_18454(), (uParam0^) );
        l_U108 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_38878();
        g_U10978 = 1;
    }
    iVar11 = 0;
    if ((IS_CHAR_IN_ANY_CAR( sub_1328() )) AND (NOT l_U119))
    {
        MODIFY_CHAR_MOVE_STATE( (uParam0^), 2 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1328(), ref uVar7 );
        if (NOT (IS_CHAR_IN_CAR( (uParam0^), uVar7 )))
        {
            if (NOT (l_U165 == 0))
            {
                iVar12 = 0;
                GET_GAME_TIMER( ref iVar12 );
                if ((l_U165 < iVar12) || (NOT (IS_VEH_DRIVEABLE( uVar7 ))))
                {
                    SET_PLAYER_CONTROL( sub_4728(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U165 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_18454() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_18454(), (uParam0^) );
                }
            }
            else if (sub_34535() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U115)
        {
            sub_39462( l_U158, ref l_U141 );
            iVar11 = sub_21097( l_U158 );
            sub_40953( iVar11 );
        }
        else
        {
            sub_41166( l_U158, ref l_U141 );
        }
        sub_18578( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U115)
    {
        sub_42000( l_U158, ref l_U141 );
        iVar11 = sub_21097( l_U158 );
        sub_40953( iVar11 );
    }
    else
    {
        sub_42546( l_U158, ref l_U141 );
    }
    if ((IS_HINT_RUNNING()) AND (NOT l_U119))
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    return 0;
}

int sub_38446()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_38589()
{
    if (sub_38446())
    {
        g_U64921 = 1;
    }
    return;
}

void sub_38878()
{
    sub_38887();
    sub_38990( ref g_U9893._fU68 );
    sub_39039();
    return;
}

void sub_38887()
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

void sub_38990(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_39039()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_15398( 1, g_U569[I] )) == 0)
        {
            sub_15684( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_15850())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

void sub_39462(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_39497( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_39584( "FCR_ARRL", uParam1, 8, 1 );
        return;
        case 3:
        sub_39584( "FCJ_ARRL", uParam1, 8, 1 );
        return;
        case 7:
        sub_39584( "FCD2_ARRL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_39584( "FCB2_ARRL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_39584( "FCP_ARRL", uParam1, 8, 1 );
        return;
    }
    sub_39584( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_39497(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        if (NOT g_U15654[6])
        {
            sub_39584( "FCR_ARRH", uParam1, 8, 1 );
        }
        return;
        case 3:
        sub_39584( "FCJ_ARHOSP", uParam1, 8, 1 );
        return;
        case 7:
        sub_39584( "FCD2_ARRCNL", uParam1, 8, 1 );
        return;
        case 8:
        sub_39584( "FCB2_ARRCNL", uParam1, 8, 1 );
        return;
        case 13:
        sub_39584( "FCP_ARRCNL", uParam1, 8, 1 );
        return;
    }
    sub_39584( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_39584(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_39605( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_39605(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_39659( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_39659(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_39681( iParam1 )))
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
    sub_40369( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_39681(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_39758( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_39758( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_39758( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_39758(unknown uParam0)
{
    return;
}

void sub_40369(int iParam0, int iParam1)
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

void sub_40953(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        case 7:
        iVar3 = -5;
        break;
        case 8:
        iVar3 = -10;
        break;
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_5695( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_26798( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_26798( uParam0, 0, iVar4 );
    return;
}

void sub_41166(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_39497( uParam0, uParam1 );
        return;
    }
    if (IS_CHAR_DEAD( sub_1328() ))
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        if (IS_CHAR_ON_ANY_BIKE( sub_1328() ))
        {
            sub_39584( "FCR_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1328() ))
        {
            sub_39584( "FCR_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_39584( "FCR_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 3:
        if (IS_CHAR_ON_ANY_BIKE( sub_1328() ))
        {
            sub_39584( "FCJ_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1328() ))
        {
            sub_39584( "FCJ_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_39584( "FCJ_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 7:
        if (IS_CHAR_ON_ANY_BIKE( sub_1328() ))
        {
            sub_39584( "FCD2_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1328() ))
        {
            sub_39584( "FCD2_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_39584( "FCD2_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else if (IS_CHAR_ON_ANY_BIKE( sub_1328() ))
        {
            sub_39584( "FCB2_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1328() ))
        {
            sub_39584( "FCB2_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_39584( "FCB2_ARRCNL", uParam1, 8, 1 );
        };;;
        return;
        case 13:
        if (IS_CHAR_ON_ANY_BIKE( sub_1328() ))
        {
            sub_39584( "FCP_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1328() ))
        {
            sub_39584( "FCP_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_39584( "FCP_ARRCNL", uParam1, 8, 1 );
        }
        return;
    }
    sub_39584( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_42000(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_42035( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_39584( "FCR_ARRFL", uParam1, 8, 1 );
        return;
        case 3:
        sub_39584( "FCJ_ARRFL", uParam1, 8, 1 );
        return;
        case 7:
        sub_39584( "FCD2_ARRFL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_39584( "FCB2_ARRFL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_39584( "FCP_ARRFL", uParam1, 8, 1 );
        return;
    }
    sub_39584( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_42035(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_39584( "FCR_ARRFH", uParam1, 8, 1 );
        return;
        case 3:
        sub_39584( "FCJ_ARHOSPF", uParam1, 8, 1 );
        return;
        case 7:
        sub_39584( "FCD2_ARRNL", uParam1, 8, 1 );
        return;
        case 8:
        sub_39584( "FCB2_ARRNL", uParam1, 8, 1 );
        return;
        case 13:
        sub_39584( "FCP_ARRFNL", uParam1, 8, 1 );
        return;
    }
    sub_39584( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_42546(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_42035( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_39584( "FCR_ARRFNL", uParam1, 8, 1 );
        return;
        case 3:
        sub_39584( "FCJ_ARRFNL", uParam1, 8, 1 );
        return;
        case 7:
        sub_39584( "FCD2_ARRNL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_39584( "FCB2_ARRNL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_39584( "FCP_ARRFNL", uParam1, 8, 1 );
        return;
    }
    sub_39584( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_42965()
{
    return sub_34390( 3, ref l_U267, ref l_U268 );
}

void sub_42999()
{
    return sub_34390( 7, ref l_U305, ref l_U306 );
}

void sub_43033()
{
    return sub_34390( 8, ref l_U276, ref l_U277 );
}

void sub_43067()
{
    return sub_34390( 13, ref l_U314, ref l_U315 );
}

void sub_43300(unknown uParam0)
{
    if (g_U9197)
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    if (NOT g_U9197)
    {
        if (sub_43360( uParam0 ))
        {
            g_U9197 = 1;
        }
        return;
    }
    return;
}

int sub_43360(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRLOCR" );
        break;
        case 3:
        switch (g_U22274[uParam0]._fU144)
        {
            case 10: return 0;
        }
        PRINT_HELP( "FRLOCJ" );
        break;
        case 7:
        PRINT_HELP( "FRLOCD" );
        break;
        case 8:
        switch (g_U22274[uParam0]._fU144)
        {
            case 10:
            case 4:
            case 9: return 0;
        }
        PRINT_HELP( "FRLOCB" );
        break;
        case 13:
        PRINT_HELP( "FRLOCP" );
        break;
    }
    return 1;
}

int sub_43724()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        if (IS_CHAR_DEAD( l_U294[I]._fU4 ))
        {
            return 0;
        }
    }
    return 1;
}

void sub_43819()
{
    SET_MISSION_FLAG( 1 );
    sub_43836();
    l_U330 = 1;
    sub_44450();
    sub_44805( "Brucie Friend Activity: Copter" );
    sub_44825( 56 );
    return;
}

void sub_43836()
{
    sub_43845();
    return;
}

void sub_43845()
{
    int iVar2;

    iVar2 = 8;
    sub_43859( iVar2 );
    return;
}

void sub_43859(unknown uParam0)
{
    unknown uVar3;

    g_U10978 = 1;
    uVar3 = sub_16002( uParam0 );
    sub_43885( uVar3 );
    return;
}

void sub_43885(unknown uParam0)
{
    unknown uVar3;
    char[16] cVar4;

    uVar3 = g_U22274[uParam0]._fU144;
    StrCopy( ref cVar4, "", 16 );
    switch (uVar3)
    {
        case 4:
        StrCopy( ref cVar4, "BOATING", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "BOWLING", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "DARTS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "DRINKING", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "EATING", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "HELIRIDES", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "LIFTS", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "POOL", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "SHOW", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "STRIPCLUB", 16 );
        break;
        case 14: return;
    }
    SCRIPT_ASSERT( "Flow_Player_Stats_Friend_Activity_Started: Unknown Activity ID" );
    return;
    sub_44269( cVar4 );
    return;
}

void sub_44269(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

void sub_44450()
{
    int iVar2;

    iVar2 = 0;
    sub_44483( ref iVar2, 776.58530000, 160.02490000, 7.38800000, 329.23230000 );
    if (NOT (iVar2 == 1))
    {
        sub_5695( "InfoCopter: Initialise_Copter_Destinations: Missing data" );
    }
    return;
}

void sub_44483(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if ((uParam0^) < 0)
    {
        sub_5695( "InfoCopter: Store_Additional_Copter_Info: ID less than 0" );
    }
    if ((uParam0^) >= 1)
    {
        sub_5695( "InfoCopter: Store_Additional_Copter_Info: ID out of range" );
    }
    l_U401[(uParam0^)]._fU4 = {uParam1, uParam2, uParam3};
    l_U401[(uParam0^)]._fU16 = uParam4;
    (uParam0^)++;
    return;
}

void sub_44805(unknown uParam0)
{
    return;
}

void sub_44825(unknown uParam0)
{
    g_U2222 = uParam0;
    return;
}

void sub_44869(unknown uParam0, unknown uParam1)
{
    sub_44880( uParam0 );
    sub_45076( uParam1 );
    return;
}

void sub_44880(unknown uParam0)
{
    if (NOT (g_U32898._fU0 == 54))
    {
        return;
    }
    if (NOT (sub_44913( uParam0 )))
    {
        return;
    }
    g_U32898._fU0 = uParam0;
    g_U32898._fU8 = 9;
    g_U32898._fU12 = 9;
    return;
}

int sub_44913(int iParam0)
{
    if (iParam0 < 23)
    {
        return 1;
    }
    if (sub_44937( iParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_44937(unknown uParam0)
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

void sub_45076(int iParam0)
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

void sub_45189()
{
    int iVar2;
    string sVar3;

    l_U343 = 0;
    iVar2 = 8;
    sVar3 = "Helicopter";
    if (l_U325 == 0)
    {
        REQUEST_SCRIPT( sVar3 );
        l_U325++;
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (IS_CHAR_INJURED( l_U276 ))
        {
            l_U328 = 1;
            l_U329 = 0;
            return;
        }
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        sub_45313();
    }
    if (l_U325 == 1)
    {
        l_U325++;
    }
    if (l_U325 == 2)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1328() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1328(), ref l_U336 );
        }
        TASK_LEAVE_ANY_CAR( sub_1328() );
        TASK_LEAVE_ANY_CAR( l_U276 );
        l_U325++;
    }
    if (l_U325 == 3)
    {
        if (NOT (sub_45508( l_U276 )))
        {
            l_U325++;
        }
    }
    if (l_U325 == 4)
    {
        l_U325++;
    }
    if (l_U325 == 5)
    {
        sub_45659( g_U64643 );
    }
    if (l_U325 == 6)
    {
        l_U325++;
    }
    if (l_U325 == 7)
    {
        if (HAS_SCRIPT_LOADED( sVar3 ))
        {
            l_U325++;
        }
        else
        {
            REQUEST_SCRIPT( sVar3 );
        }
    }
    if (l_U325 == 8)
    {
        l_U791 = START_NEW_SCRIPT( sVar3, 1820 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
        l_U325++;
    }
    if (l_U325 == 9)
    {
        if (IS_MINIGAME_IN_PROGRESS())
        {
            sub_18565();
            sub_47014();
            l_U325 = 99;
        }
    }
    if (l_U325 == 99)
    {
        l_U324 = 4;
        l_U325 = 0;
    }
    return;
}

void sub_45313()
{
    sub_45331( l_U276, ref l_U277 );
    return;
}

void sub_45331(unknown uParam0, unknown uParam1)
{
    if (NOT l_U122)
    {
        sub_18578( uParam1 );
        return;
    }
    sub_36692( uParam0, uParam1 );
    return;
}

int sub_45508(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_1328() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1328() ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_45659(int iParam0)
{
    switch (l_U793)
    {
        case 0:
        if (l_U328 == 0)
        {
            GET_INTERIOR_FROM_CHAR( sub_1328(), ref l_U795 );
            if (l_U795 == nil)
            {
                SET_PLAYER_CONTROL( sub_4728(), 0 );
                if (iParam0 == 1)
                {
                    sub_45809( 761.89540000, 129.69340000, 9.96101300, -6.72564400, -0.00000000, -126.38410000, 45, l_U794 );
                    if (DOES_CAM_EXIST( l_U794 ))
                    {
                        POINT_CAM_AT_PED( l_U794, sub_1328() );
                    }
                }
                else
                {
                    sub_45809( 843.97410000, -148.49150000, 13.41214000, -2.79368900, 0.00000000, -28.41208000, 45, l_U794 );
                    if (DOES_CAM_EXIST( l_U794 ))
                    {
                        POINT_CAM_AT_PED( l_U794, sub_1328() );
                    }
                }
                WAIT( 0 );
                sub_46067( 1 );
                l_U793 = 1;
            }
        }
        break;
        case 1:
        sub_46285();
        l_U793 = 2;
        break;
        case 2:
        if ((sub_46521( 8, ref l_U141 )) || (sub_46731()))
        {
            l_U325++;
        }
        break;
    }
    return;
}

void sub_45809(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    CLEAR_PRINTS();
    if (DOES_CAM_EXIST( uParam7 ))
    {
        DESTROY_CAM( uParam7 );
    }
    CREATE_CAM( 14, ref uParam7 );
    SET_CAM_POS( uParam7, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    SET_CAM_ROT( uParam7, uParam3._fU0, uParam3._fU4, uParam3._fU8 );
    SET_CAM_FOV( uParam7, uParam6 );
    SET_CAM_ACTIVE( uParam7, 1 );
    SET_CAM_PROPAGATE( uParam7, 1 );
    return;
}

void sub_46067(boolean bParam0)
{
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    if (IS_PLAYER_PLAYING( sub_4728() ))
    {
        SET_PLAYER_CONTROL( sub_4728(), NOT bParam0 );
    }
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_4728(), bParam0 );
    ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
    if (NOT (IS_CHAR_DEAD( sub_1328() )))
    {
        CLEAR_CHAR_TASKS( sub_1328() );
    }
    if (bParam0)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1328(), 1 );
    }
    else
    {
        sub_46216();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1328(), 0 );
    }
    return;
}

void sub_46216()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_46285()
{
    int iVar2;

    iVar2 = 0;
    sub_19992( iVar2 );
    sub_3408( "FCB2AU" );
    sub_3527( 0, sub_1328(), "NIKO", 0 );
    sub_3527( l_U157, l_U276, ref l_U153, 0 );
    sub_46366( l_U158, ref l_U141 );
    return;
}

void sub_46366(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 8:
        if (g_U22274[8]._fU28 == 0)
        {
            sub_39584( "FCB2_ARRHELI", uParam1, 7, 1 );
        }
        else
        {
            sub_39584( "FCB2_ALG", uParam1, 7, 1 );
        }
        return;
    }
    sub_39584( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_46521(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 8: if (sub_46551( (uParam1^) ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_46551(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_39758( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_39758( "\n speech is not playing" );
    }
    return 0;
}

int sub_46731()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_47014()
{
    int I;

    I = 0;
    for ( I = 0; I < 1; I++ )
    {
        REMOVE_BLIP( l_U401[I]._fU0 );
    }
    return;
}

void sub_47122()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U343 = 0;
    if (l_U325 == 0)
    {
        l_U325++;
    }
    if (l_U325 == 1)
    {
        if (sub_47173())
        {
            l_U325++;
        }
    }
    if (l_U325 == 2)
    {
        sub_47228();
        sub_47804( 8, 9 );
        if (l_U328)
        {
            l_U328 = 0;
            l_U324 = 7;
            l_U325 = 0;
            return;
        }
        l_U325++;
    }
    if (l_U325 == 3)
    {
        l_U325++;
    }
    if (l_U325 == 4)
    {
        if (IS_VEH_DRIVEABLE( l_U336 ))
        {
            uVar2 = {l_U401[l_U337]._fU4};
            uVar5 = l_U401[l_U337]._fU16;
            SET_CAR_HEADING( l_U336, uVar5 );
            SET_CAR_COORDINATES( l_U336, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( l_U336 );
        }
        l_U325++;
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (IS_CHAR_INJURED( l_U276 ))
        {
            l_U328 = 1;
            l_U329 = 0;
            return;
        }
    }
    if (l_U325 == 5)
    {
        DESTROY_THREAD( l_U791 );
        l_U791 = nil;
        sub_49631();
        sub_45313();
        l_U325 = 99;
    }
    if (l_U325 == 99)
    {
        l_U324 = 5;
        l_U325 = 0;
    }
    return;
}

void sub_47173()
{
    return g_U32898._fU28;
}

void sub_47228()
{
    l_U790 = sub_47237();
    switch (l_U790)
    {
        case 0:
        l_U338 = 1;
        sub_47389( "PASS LEVEL: GOOD" );
        break;
        case 3:
        l_U338 = 3;
        sub_47389( "PASS LEVEL: MINIMAL" );
        l_U328 = 1;
        l_U329 = 6;
        return;
        case 4:
        l_U328 = 1;
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U276, sub_1328(), 0 ))
        {
            l_U329 = 1;
        }
        else
        {
            l_U329 = 3;
        }
        return;
        case 5:
        l_U328 = 1;
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U276, sub_1328(), 0 ))
        {
            l_U329 = 2;
        }
        else
        {
            l_U329 = 3;
        }
        return;
        case 6:
        l_U328 = 1;
        l_U329 = 5;
        return;
    }
    sub_47620( "Calculate_Pass_Level: Unknown minigame result" );
    return;
}

void sub_47237()
{
    unknown Result;

    Result = g_U32898._fU16;
    g_U32898._fU4 = 9;
    g_U32898._fU16 = 8;
    g_U32898._fU24 = 0;
    g_U32898._fU28 = 0;
    return Result;
}

void sub_47389(unknown uParam0)
{
    return;
}

void sub_47620(unknown uParam0)
{
    sub_47667( "WARNING: BRUCIE COPTER (KEITHM): ", uParam0 );
    return;
}

void sub_47667(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "WARNING: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_47804(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_47815( uParam0 );
    g_U34181._fU0[uVar4]._fU0[uParam1]++;
    g_U34181._fU0[uVar4]._fU60++;
    sub_48047( uParam1 );
    switch (uParam0)
    {
        case 0:
        sub_14794( 354 );
        INCREMENT_INT_STAT_NO_MESSAGE( 354, 1 );
        break;
        case 3:
        sub_14794( 355 );
        INCREMENT_INT_STAT_NO_MESSAGE( 355, 1 );
        break;
        case 7:
        sub_14794( 357 );
        INCREMENT_INT_STAT_NO_MESSAGE( 357, 1 );
        break;
        case 8:
        sub_14794( 356 );
        INCREMENT_INT_STAT_NO_MESSAGE( 356, 1 );
        break;
        case 13:
        sub_14794( 358 );
        INCREMENT_INT_STAT_NO_MESSAGE( 358, 1 );
        break;
        default: sub_5695( "Friend_Achievement_Activity_Performed: Unknown Friend ID" );
    }
    sub_48867( uParam0, uParam1 );
    return;
}

int sub_47815(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 3: return 1;
        case 7: return 2;
        case 8: return 3;
        case 13: return 4;
    }
    sub_5695( "Convert_Friend_To_Friend_Stats_ID: Unrecognised Friend ID" );
    return 5;
}

void sub_48047(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    char[64] cVar6;

    g_U34181._fU344[iParam0]++;
    g_U34181._fU404++;
    iVar3 = g_U34181._fU408;
    if (iVar3 == iParam0)
    {
        return;
    }
    iVar4 = g_U34181._fU344[iVar3];
    iVar5 = g_U34181._fU344[iParam0];
    if (iVar5 < iVar4)
    {
        return;
    }
    g_U34181._fU408 = iParam0;
    StrCopy( ref cVar6, "", 64 );
    sub_48207( iParam0, ref cVar6 );
    if (CAN_THE_STAT_HAVE_STRING( 662 ))
    {
        sub_14794( 662 );
        REGISTER_STRING_FOR_FRONTEND_STAT( 662, ref cVar6 );
    }
    return;
}

void sub_48207(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 4:
        StrCopy( (uParam1^), "statAct_0", 64 );
        break;
        case 5:
        StrCopy( (uParam1^), "statAct_1", 64 );
        break;
        case 6:
        StrCopy( (uParam1^), "statAct_2", 64 );
        break;
        case 7:
        StrCopy( (uParam1^), "statAct_3", 64 );
        break;
        case 8:
        StrCopy( (uParam1^), "statAct_4", 64 );
        break;
        case 9:
        StrCopy( (uParam1^), "statAct_5", 64 );
        break;
        case 10:
        StrCopy( (uParam1^), "statAct_6", 64 );
        break;
        case 11:
        StrCopy( (uParam1^), "statAct_7", 64 );
        break;
        case 12:
        StrCopy( (uParam1^), "statAct_8", 64 );
        break;
        case 13:
        StrCopy( (uParam1^), "statAct_9", 64 );
        break;
        default: sub_5695( "Friend_Achievement_Fill_Activity_String: Unknown activity" );
    }
    return;
}

void sub_48867(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    char[64] cVar8;

    uVar4 = sub_47815( uParam0 );
    iVar5 = g_U34181._fU0[uVar4]._fU64;
    if (iVar5 == iParam1)
    {
        return;
    }
    iVar6 = g_U34181._fU0[uVar4]._fU0[iVar5];
    iVar7 = g_U34181._fU0[uVar4]._fU0[iParam1];
    if (iVar7 < iVar6)
    {
        return;
    }
    g_U34181._fU0[uVar4]._fU64 = iParam1;
    StrCopy( ref cVar8, "", 64 );
    sub_48207( iParam1, ref cVar8 );
    switch (uParam0)
    {
        case 0:
        if (CAN_THE_STAT_HAVE_STRING( 663 ))
        {
            sub_14794( 663 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 663, ref cVar8 );
        }
        break;
        case 3:
        if (CAN_THE_STAT_HAVE_STRING( 664 ))
        {
            sub_14794( 664 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 664, ref cVar8 );
        }
        break;
        case 7:
        if (CAN_THE_STAT_HAVE_STRING( 666 ))
        {
            sub_14794( 666 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 666, ref cVar8 );
        }
        break;
        case 8:
        if (CAN_THE_STAT_HAVE_STRING( 665 ))
        {
            sub_14794( 665 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 665, ref cVar8 );
        }
        break;
        case 13:
        if (CAN_THE_STAT_HAVE_STRING( 667 ))
        {
            sub_14794( 667 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 667, ref cVar8 );
        }
        break;
        default: sub_5695( "Friend_Achievement_Check_For_New_Favourite_Activity_With_Friend: Unknown friend ID" );
    }
    return;
}

void sub_49631()
{
    sub_36692( l_U276, ref l_U277 );
    return;
}

void sub_49714()
{
    int iVar2;
    int iVar3;
    int I;
    unknown uVar5;

    if (l_U325 == 0)
    {
        SET_PLAYER_CONTROL( sub_4728(), 0 );
        l_U792 = 0;
        l_U325++;
    }
    if (l_U325 == 1)
    {
        iVar2 = 0;
        iVar3 = 0;
        GET_GROUP_SIZE( sub_18454(), ref iVar2, ref iVar3 );
        I = 0;
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_18454(), I, ref uVar5 );
            if (NOT (IS_CHAR_DEAD( uVar5 )))
            {
                REMOVE_CHAR_FROM_GROUP( uVar5 );
            }
        }
        l_U325++;
    }
    if (l_U325 == 2)
    {
        LOAD_SCENE( 776.58530000, 160.02490000, 5.02240000 );
        CLEAR_AREA( 776.58530000, 160.02490000, 5.02240000, 2.00000000, 1 );
        SET_CHAR_COORDINATES( sub_1328(), 776.24440000, 160.21530000, 5.02500000 );
        SET_CHAR_HEADING( sub_1328(), 58.46880000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U325++;
    }
    if (l_U325 == 3)
    {
        DO_SCREEN_FADE_IN( 500 );
        l_U325++;
    }
    if (l_U325 == 4)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U325 = 99;
        }
    }
    if (l_U325 == 99)
    {
        l_U324 = 6;
        l_U325 = 0;
    }
    return;
}

void sub_50128()
{
    int iVar2;
    int iVar3;
    int I;
    unknown uVar5;

    if (l_U325 == 0)
    {
        l_U325++;
    }
    if (l_U325 == 1)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 500 );
        }
        l_U325++;
    }
    if (l_U325 == 2)
    {
        if (IS_SCREEN_FADED_OUT())
        {
            l_U325++;
        }
    }
    if (l_U325 == 3)
    {
        if (NOT IS_MINIGAME_IN_PROGRESS())
        {
            l_U325++;
        }
    }
    if (l_U325 == 4)
    {
        iVar2 = 0;
        iVar3 = 0;
        GET_GROUP_SIZE( sub_18454(), ref iVar2, ref iVar3 );
        I = 0;
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_18454(), I, ref uVar5 );
            if (NOT (IS_CHAR_DEAD( uVar5 )))
            {
                REMOVE_CHAR_FROM_GROUP( uVar5 );
            }
        }
        l_U325++;
    }
    if (l_U325 == 5)
    {
        LOAD_SCENE( 776.58530000, 160.02490000, 5.02240000 );
        CLEAR_AREA( 776.58530000, 160.02490000, 5.02240000, 2.00000000, 1 );
        SET_CHAR_COORDINATES( sub_1328(), 776.24440000, 160.21530000, 5.02500000 );
        SET_CHAR_HEADING( sub_1328(), 58.46880000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U325++;
    }
    if (l_U325 == 6)
    {
        DO_SCREEN_FADE_IN( 500 );
        l_U325++;
    }
    if (l_U325 == 7)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U325 = 99;
        }
    }
    if (l_U325 == 99)
    {
        l_U328 = 1;
    }
    return;
}

void sub_50706()
{
    l_U407 = -1;
    return;
}

int sub_50756(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 0;
    }
    if (NOT l_U108)
    {
        return 0;
    }
    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (NOT l_U123)
    {
        return 0;
    }
    if (IS_GROUP_MEMBER( uParam0, sub_18454() ))
    {
        return 0;
    }
    if (NOT l_U122)
    {
        TASK_LOOK_AT_CHAR( uParam0, sub_1328(), -2, 0 );
        l_U122 = 1;
    }
    GET_CHAR_COORDINATES( sub_1328(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_1439( uVar3, uVar6 );
    if (fVar9 < 12.00000000)
    {
        SET_GROUP_MEMBER( sub_18454(), uParam0 );
        TASK_CLEAR_LOOK_AT( uParam0 );
        l_U122 = 0;
        return 0;
    }
    PRINT_NOW( "FA_2FAR", 500, 1 );
    if (fVar9 < 200.00000000)
    {
        return 0;
    }
    TASK_CLEAR_LOOK_AT( uParam0 );
    return 1;
}

int sub_51072()
{
    int I;
    boolean bVar3;
    int iVar4;

    if ((NOT l_U108) || (NOT l_U292))
    {
        return 0;
    }
    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    I = 0;
    if (NOT l_U293)
    {
        for ( I = 0; I < 2; I++ )
        {
            if (NOT l_U294[I]._fU16)
            {
                if (IS_GROUP_MEMBER( l_U294[I]._fU4, sub_18454() ))
                {
                    l_U294[I]._fU16 = 1;
                }
            }
        }
    }
    bVar3 = true;
    if (NOT l_U293)
    {
        for ( I = 0; I < 2; I++ )
        {
            if (NOT l_U294[I]._fU16)
            {
                bVar3 = false;
            }
        }
    }
    else
    {
        bVar3 = false;
    }
    if (bVar3)
    {
        REMOVE_ANIMS( l_U288 );
    }
    iVar4 = 0;
    for ( I = 0; I < 2; I++ )
    {
        sub_51314( I );
        if (l_U294[I]._fU12)
        {
            iVar4++;
        }
        if (l_U294[I]._fU4 == nil)
        {
            return 1;
        }
    }
    if (iVar4 == 0)
    {
        CLEAR_THIS_PRINT( "GLEFT1" );
        CLEAR_THIS_PRINT( "GLEFT2" );
        CLEAR_THIS_PRINT( "GLEFT1B" );
        CLEAR_THIS_PRINT( "GLEFT2B" );
        return 0;
    }
    if (iVar4 == 1)
    {
        if (l_U122)
        {
            PRINT_NOW( "GLEFT1B", 500, 1 );
            return 0;
        }
        PRINT_NOW( "GLEFT1", 500, 1 );
        return 0;
    }
    if (iVar4 == 2)
    {
        if (l_U122)
        {
            PRINT_NOW( "GLEFT2B", 500, 1 );
            return 0;
        }
        PRINT_NOW( "GLEFT2", 500, 1 );
        return 0;
    }
    return 0;
}

void sub_51314(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (IS_GROUP_MEMBER( l_U294[uParam0]._fU4, sub_18454() ))
    {
        return;
    }
    if (IS_CHAR_INJURED( l_U294[uParam0]._fU4 ))
    {
        return;
    }
    if (NOT l_U294[uParam0]._fU12)
    {
        TASK_LOOK_AT_CHAR( l_U294[uParam0]._fU4, sub_1328(), -2, 0 );
        if (NOT (DOES_BLIP_EXIST( l_U294[uParam0]._fU8 )))
        {
            ADD_BLIP_FOR_CHAR( l_U294[uParam0]._fU4, ref l_U294[uParam0]._fU8 );
            SET_BLIP_AS_FRIENDLY( l_U294[uParam0]._fU8, 1 );
        }
        l_U294[uParam0]._fU12 = 1;
        return;
    }
    GET_CHAR_COORDINATES( sub_1328(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( l_U294[uParam0]._fU4, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_1439( uVar3, uVar6 );
    if (fVar9 < 12.00000000)
    {
        if (sub_33447( uParam0 ))
        {
            CLEAR_CHAR_TASKS( l_U294[uParam0]._fU4 );
            SET_GROUP_MEMBER( sub_18454(), l_U294[uParam0]._fU4 );
            TASK_CLEAR_LOOK_AT( l_U294[uParam0]._fU4 );
            if (DOES_BLIP_EXIST( l_U294[uParam0]._fU8 ))
            {
                REMOVE_BLIP( l_U294[uParam0]._fU8 );
            }
            l_U294[uParam0]._fU12 = 0;
        }
        return;
    }
    if (fVar9 < 200.00000000)
    {
        return;
    }
    TASK_CLEAR_LOOK_AT( l_U294[uParam0]._fU4 );
    DELETE_CHAR( ref l_U294[uParam0]._fU4 );
    l_U294[uParam0]._fU4 = nil;
    return;
}

void sub_52181()
{
    return;
}

void sub_52315()
{
    return;
}