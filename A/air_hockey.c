void main()
{
    int I;
    boolean bVar3;

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
    l_U117 = 1948842064;
    l_U118 = 1789915587;
    l_U119 = 566106687;
    l_U120 = 880721856;
    l_U121 = -2063179826;
    l_U122 = -618845881;
    l_U123 = 2142892670;
    l_U124 = 1650;
    l_U125 = 512;
    l_U126 = 256;
    l_U127 = 1.00000000;
    l_U128 = 2.00000000;
    l_U129 = 2.30000000;
    l_U130 = 4.00000000;
    l_U131 = l_U128;
    l_U132 = 0;
    l_U133 = 1;
    l_U340 = 0;
    l_U341 = 0;
    l_U342 = {0.53000000, 0.99200000, 0.82000000};
    l_U345 = 0.20400000;
    l_U346 = 0.09000000;
    l_U347 = 0.85000000;
    l_U348 = 0.75000000;
    l_U349 = 0.98000000;
    l_U350 = 0.00000000;
    l_U351 = 0.60000000;
    l_U352 = 0.00000000;
    l_U353 = -1;
    l_U354 = 0;
    l_U355 = 0;
    l_U356 = 0;
    l_U357 = 0;
    l_U358 = 0;
    l_U359 = 0.00550000;
    l_U360 = 0.01100000;
    l_U361 = 0.04000000;
    l_U362 = 0.06000000;
    l_U363 = 0.08000000;
    l_U364 = 10;
    l_U365 = 0;
    l_U366 = 10;
    l_U367 = 0;
    l_U368 = 0;
    l_U369 = 0;
    l_U370 = 0;
    l_U371 = 60;
    l_U372 = 0.00000000;
    l_U373 = 0.00000000;
    l_U374 = 0.00650000;
    l_U375 = 0.01300000;
    l_U376 = 0.04000000;
    l_U377 = 0.09000000;
    l_U378 = 25;
    l_U379 = 0.00500000;
    l_U380 = 0.00900000;
    l_U381 = 0.04000000;
    l_U382 = 0.07000000;
    l_U383 = 5;
    l_U384 = 0;
    l_U385 = 0;
    l_U386 = 0;
    l_U387 = 0;
    l_U388 = 0;
    l_U389 = 0;
    l_U390 = 30;
    l_U391 = 560;
    l_U403 = 0;
    l_U408 = 0;
    l_U409 = 0;
    l_U431 = 0;
    l_U432 = 1;
    l_U433 = 1;
    l_U436 = 1;
    l_U437 = 1;
    l_U480 = 0;
    if (NOT (DOES_OBJECT_EXIST( l_U481 )))
    {
        TERMINATE_THIS_SCRIPT();
    }
    l_U229 = l_U481;
    GET_ROOM_KEY_FROM_OBJECT( l_U229, ref l_U230 );
    l_U479 = "AH_START_01";
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_780();
    }
    for ( I = 0; I < 5; I++ )
    {
        l_U134[I] = 0;
    }
    bVar3 = true;
    while (true)
    {
        WAIT( 0 );
        if (NOT (DOES_OBJECT_EXIST( l_U229 )))
        {
            sub_780();
        }
        else if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U229 )))
        {
            l_U132 = 10;
        }
        switch (l_U132)
        {
            case 0:
            if (sub_1655())
            {
                l_U132 = 1;
            }
            break;
            case 1:
            sub_4028();
            sub_4253();
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_4076(), l_U229, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                l_U411 = sub_7882();
                if (NOT (IS_CHAR_INJURED( l_U411 )))
                {
                    l_U132 = 3;
                }
            }
            else
            {
                l_U132 = 1;
                l_U478 = 1;
                CLEAR_HELP();
            }
            break;
            case 3:
            bVar3 = true;
            if (NOT l_U340)
            {
                if (g_U12379)
                {
                    if (NOT (sub_8470( 0 )))
                    {
                        bVar3 = false;
                    }
                }
            }
            if (bVar3)
            {
                sub_8860();
                PLAY_SOUND_FROM_OBJECT( -1, "AIR_HOCKEY_SCORING_START_NEW_GAME", l_U229 );
                l_U478 = 0;
                l_U132 = 4;
            }
            else
            {
                l_U132 = 1;
                l_U478 = 1;
                CLEAR_HELP();
            }
            break;
            case 4:
            if (IS_CONTROL_JUST_PRESSED( 2, 0 ))
            {
                if (l_U437 == 0)
                {
                    l_U437 = 1;
                }
                else
                {
                    l_U437 = 0;
                }
                sub_9417( l_U437 );
            }
            if (l_U432)
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AH_RULES_1" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "AH_RULES_1", "NULL" );
                }
            }
            else
            {
                CLEAR_HELP();
            }
            sub_12614();
            if (sub_13763( l_U431 ))
            {
                sub_13868();
                if (IS_CHAR_INJURED( l_U411 ))
                {
                    if (l_U132 != 9)
                    {
                        sub_24642( 3 );
                    }
                    l_U132 = 9;
                }
            }
            else
            {
                l_U132 = 9;
            }
            if (NOT l_U478)
            {
                l_U478 = IS_CONTROL_JUST_PRESSED( 2, 23 );
                if (l_U478)
                {
                    l_U132 = 8;
                }
            }
            break;
            case 5:
            sub_24784();
            break;
            case 6:
            WAIT( 500 );
            if (l_U404[0] >= 7)
            {
                INCREMENT_INT_STAT( 137, 1 );
                sub_24642( 0 );
                sub_28818( 2 );
                l_U132 = 7;
            }
            else if (l_U404[1] >= 7)
            {
                sub_24642( 1 );
                l_U132 = 7;
            }
            else
            {
                sub_29466( -1 );
                sub_12160();
                sub_9417( l_U435 );
                sub_12614();
                l_U132 = 4;
            }
            break;
            case 7:
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AH_REMATCH" )))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "AH_REMATCH", "NULL" );
                if ((l_U357 > 2) AND (l_U411 != l_U410))
                {
                    l_U133 = 28;
                }
            }
            sub_21423();
            sub_29993();
            if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
            {
                CLEAR_HELP();
                l_U132 = 9;
            }
            else if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 )))
            {
                CLEAR_HELP();
                l_U132 = 3;
            }
            break;
            case 8:
            sub_13868();
            sub_12614();
            if (NOT l_U478)
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AH_QUIT_HELP" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "AH_QUIT_HELP", "NULL" );
                    PRINT_NOW( "AH_QUIT", 7500, 0 );
                }
                if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                {
                    CLEAR_HELP();
                    CLEAR_PRINTS();
                    sub_24642( 3 );
                    l_U132 = 9;
                }
                else if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
                {
                    CLEAR_HELP();
                    CLEAR_PRINTS();
                    l_U132 = 4;
                }
            }
            else
            {
                l_U478 = IS_CONTROL_JUST_PRESSED( 2, 77 );
            }
            break;
            case 9:
            sub_30419();
            l_U132 = 1;
            break;
            case 10:
            sub_780();
            break;
        }
    }
    sub_780();
    return;
}

void sub_780()
{
    sub_789();
    sub_879();
    sub_1008();
    sub_1066( 2, l_U479 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_789()
{
    sub_805( ref l_U141[0] );
    sub_805( ref l_U141[1] );
    sub_805( ref l_U166 );
    return;
}

void sub_805(int iParam0)
{
    if (DOES_OBJECT_EXIST( iParam0->_fU0 ))
    {
        DELETE_OBJECT( iParam0 + 0 );
    }
    return;
}

void sub_879()
{
    sub_895( ref l_U195[0] );
    sub_895( ref l_U195[1] );
    sub_895( ref l_U212[0] );
    sub_895( ref l_U212[1] );
    sub_895( ref l_U178[0] );
    sub_895( ref l_U178[1] );
    return;
}

void sub_895(int iParam0)
{
    if (DOES_OBJECT_EXIST( iParam0->_fU0 ))
    {
        DELETE_OBJECT( iParam0 + 0 );
    }
    return;
}

void sub_1008()
{
    if (DOES_CHAR_EXIST( l_U410 ))
    {
        DELETE_CHAR( ref l_U410 );
        l_U410 = nil;
    }
    return;
}

void sub_1066(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((g_U10534 == iParam0) AND (l_U103))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U103 = 0;
                if (l_U101)
                {
                    sub_1293();
                    l_U101 = 0;
                }
            }
            if (l_U102)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1346(), 1 );
                l_U102 = 0;
            }
            if (l_U100)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U100 = 0;
            }
        }
    }
    return;
}

void sub_1293()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_1346()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1655()
{
    if (sub_1664())
    {
        sub_3645();
        return 1;
    }
    return 0;
}

int sub_1664()
{
    float fVar2;
    float fVar3;

    REQUEST_MODEL( l_U117 );
    REQUEST_MODEL( l_U118 );
    REQUEST_MODEL( l_U119 );
    REQUEST_MODEL( l_U120 );
    REQUEST_MODEL( l_U121 );
    REQUEST_MODEL( l_U123 );
    REQUEST_MODEL( l_U122 );
    if (((((((NOT (HAS_MODEL_LOADED( l_U117 ))) || (NOT (HAS_MODEL_LOADED( l_U118 )))) || (NOT (HAS_MODEL_LOADED( l_U119 )))) || (NOT (HAS_MODEL_LOADED( l_U120 )))) || (NOT (HAS_MODEL_LOADED( l_U121 )))) || (NOT (HAS_MODEL_LOADED( l_U123 )))) || (NOT (HAS_MODEL_LOADED( l_U122 ))))
    {
        return 0;
    }
    sub_1905( 0.30000000, 0.50000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U119, ref l_U141[0] );
    sub_1905( -0.30000000, -0.50000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U120, ref l_U141[1] );
    sub_1905( 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U118, ref l_U166 );
    sub_2350( -l_U342._fU0, -l_U342._fU4, 0.00000000, -l_U342._fU0, l_U342._fU4, 0.00000000, 1.00000000, 0.00000000, 0.00000000, ref l_U231[0] );
    sub_2350( -l_U342._fU0, l_U342._fU4, 0.00000000, -l_U345, l_U342._fU4, 0.00000000, 0.00000000, -1.00000000, 0.00000000, ref l_U231[1] );
    sub_2350( l_U345, l_U342._fU4, 0.00000000, l_U342._fU0, l_U342._fU4, 0.00000000, 0.00000000, -1.00000000, 0.00000000, ref l_U231[2] );
    sub_2350( l_U342._fU0, l_U342._fU4, 0.00000000, l_U342._fU0, -l_U342._fU4, 0.00000000, -1.00000000, 0.00000000, 0.00000000, ref l_U231[3] );
    sub_2350( l_U342._fU0, -l_U342._fU4, 0.00000000, l_U345, -l_U342._fU4, 0.00000000, 0.00000000, 1.00000000, 0.00000000, ref l_U231[4] );
    sub_2350( -l_U345, -l_U342._fU4, 0.00000000, -l_U342._fU0, -l_U342._fU4, 0.00000000, 0.00000000, 1.00000000, 0.00000000, ref l_U231[5] );
    sub_2350( -l_U345, -l_U342._fU4 - l_U346, 0.00000000, l_U345, -l_U342._fU4 - l_U346, 0.00000000, 0.00000000, 1.00000000, 0.00000000, ref l_U231[6] );
    sub_2350( -l_U345, l_U342._fU4 + l_U346, 0.00000000, l_U345, l_U342._fU4 + l_U346, 0.00000000, 0.00000000, -1.00000000, 0.00000000, ref l_U231[7] );
    sub_2350( -l_U345, -l_U342._fU4 - l_U346, 0.00000000, -l_U345, -l_U342._fU4, 0.00000000, 1.00000000, 0.00000000, 0.00000000, ref l_U231[8] );
    sub_2350( -l_U345, l_U342._fU4 + l_U346, 0.00000000, -l_U345, l_U342._fU4, 0.00000000, 1.00000000, 0.00000000, 0.00000000, ref l_U231[9] );
    sub_2350( l_U345, -l_U342._fU4 - l_U346, 0.00000000, l_U345, -l_U342._fU4, 0.00000000, -1.00000000, 0.00000000, 0.00000000, ref l_U231[10] );
    sub_2350( l_U345, l_U342._fU4 + l_U346, 0.00000000, l_U345, l_U342._fU4, 0.00000000, -1.00000000, 0.00000000, 0.00000000, ref l_U231[11] );
    GET_OBJECT_HEADING( l_U229, ref fVar2 );
    if ((ROUND( fVar2 )) != 90)
    {
        fVar2 = 0.00000000;
    }
    fVar3 = 0.01000000;
    if (# -NULL-0xc27bfa())
    {
        fVar3 = 0.05000000;
    }
    sub_3261( 0, fVar3, 1.60500000, 0, 0, 0 - fVar2, l_U121, ref l_U178[0] );
    sub_3261( 0, -fVar3, 1.60500000, 0, 0, 180 - fVar2, l_U121, ref l_U178[1] );
    sub_3261( -0.10000000, fVar3, 1.60500000, 0, 0, 0 - fVar2, l_U123, ref l_U195[0] );
    sub_3261( 0.10000000, -fVar3, 1.60500000, 0, 0, 180 - fVar2, l_U123, ref l_U195[1] );
    sub_3261( 0.04000000, fVar3, 1.60500000, 0, 0, 0 - fVar2, l_U122, ref l_U212[0] );
    sub_3261( -0.04000000, -fVar3, 1.60500000, 0, 0, 180 - fVar2, l_U122, ref l_U212[1] );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U121 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U123 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U122 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U117 );
    return 1;
}

void sub_1905(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, int iParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    iParam7->_fU4 = {uParam0};
    iParam7->_fU16 = {uParam3};
    iParam7->_fU36 = {0.00000000, 0.00000000, 0.00000000};
    uVar10 = {sub_1958( uParam0 )};
    CREATE_OBJECT_NO_OFFSET( iParam6, uVar10._fU0, uVar10._fU4, uVar10._fU8, iParam7 + 0, 1 );
    SET_OBJECT_ROTATION( iParam7->_fU0, ref iParam7->_fU16->_fU0, ref iParam7->_fU16->_fU4, ref iParam7->_fU16->_fU8 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( iParam7->_fU0, l_U230 );
    if (iParam6 == l_U118)
    {
        iParam7->_fU28 = 0.05000000;
        iParam7->_fU32 = 0.01000000;
    }
    else if ((iParam6 == l_U119) || (iParam6 == l_U120))
    {
        iParam7->_fU28 = 0.07500000;
        iParam7->_fU32 = 0.25000000;
    }
    return;
}

void sub_1958(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U229, uParam0._fU0, uParam0._fU4, uParam0._fU8 + l_U342._fU8, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    return Result;
}

void sub_2350(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, vector vParam6, int iParam9)
{
    iParam9->_fU0 = {uParam0};
    iParam9->_fU12 = {uParam3};
    iParam9->_fU24 = {vParam6 / (VMAG( vParam6 ))};
    return;
}

void sub_3261(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    iParam7->_fU4 = {uParam0};
    iParam7->_fU16 = {uParam3};
    iParam7->_fU28 = 0;
    uVar10 = {sub_1958( uParam0 )};
    CREATE_OBJECT_NO_OFFSET( uParam6, uVar10._fU0, uVar10._fU4, uVar10._fU8, iParam7 + 0, 1 );
    SET_OBJECT_ROTATION( iParam7->_fU0, uParam3._fU0, uParam3._fU4, uParam3._fU8 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( iParam7->_fU0, l_U230 );
    return;
}

void sub_3645()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    switch (sub_3656( 0, 3 ))
    {
        case 0:
        iVar2 = -1252681043;
        break;
        case 1:
        iVar2 = -1991603022;
        break;
        default:
        iVar2 = 1180218190;
        break;
    }
    GET_OBJECT_COORDINATES( l_U229, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U229, 1.50000000, 0, 0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    REQUEST_MODEL( iVar2 );
    while (NOT (HAS_MODEL_LOADED( iVar2 )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 25, iVar2, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U410, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U410 );
    FORCE_FULL_VOICE( l_U410 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U410, 1 );
    SET_ROOM_FOR_CHAR_BY_KEY( l_U410, l_U230 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( iVar2 );
    GET_HEADING_FROM_VECTOR_2D( uVar6._fU0 - uVar3._fU0, uVar6._fU4 - uVar3._fU4, ref uVar9 );
    SET_CHAR_HEADING( l_U410, uVar9 );
    TASK_STAND_GUARD( l_U410, uVar3, uVar9, 3, 0, -2 );
    return;
}

void sub_3656(unknown uParam0, unknown uParam1)
{
    int Result;

    Result = 0;
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_4028()
{
    if (NOT (IS_CHAR_INJURED( l_U410 )))
    {
        if ((((((NOT (IS_CHAR_HEALTH_GREATER( l_U410, 150 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U410, sub_4076(), 0 ))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U410, 31 ))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U410, 49 ))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U410, 75 ))) || (IS_WANTED_LEVEL_GREATER( sub_1346(), 0 )))
        {
            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U410, sub_4076(), 200.00000000, -2 );
            SET_CHAR_KEEP_TASK( l_U410, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U410 );
            l_U410 = nil;
        }
    }
    return;
}

void sub_4076()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4253()
{
    string sVar2;
    boolean[3] bVar3;

    if (sub_4262())
    {
        if ((LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_4076(), l_U229, 5.00000000, 5.00000000, 5.00000000, 0 )) AND (sub_5705( 2, 0 )))
        {
            sub_5989();
            array(ref bVar3, 3);
            bVar3[0] = NOT (IS_CHAR_INJURED( l_U428[0] ));
            bVar3[1] = NOT (IS_CHAR_INJURED( l_U428[1] ));
            if (l_U431 == 1)
            {
                if (bVar3[0])
                {
                    sVar2 = "AH_START_07";
                    l_U411 = l_U428[0];
                }
                else if (bVar3[1])
                {
                    sVar2 = "AH_START_08";
                    l_U411 = l_U428[1];
                }
            }
            else
            {
                sVar2 = "AH_START_01";
                if (l_U431 == 0)
                {
                    l_U411 = l_U410;
                }
            }
            if (NOT (IS_STRING_NULL( l_U479 )))
            {
                if (NOT (COMPARE_STRING( l_U479, sVar2 )))
                {
                    sub_1066( 2, l_U479 );
                    l_U479 = sVar2;
                }
            }
            else
            {
                l_U479 = sVar2;
            }
            if ((sub_7071( 2, l_U479, 0 )) AND (IS_CONTROL_JUST_PRESSED( 0, 23 )))
            {
                if (l_U431 == 0)
                {
                    l_U132 = 3;
                    l_U478 = 1;
                }
                else if (l_U431 == 1)
                {
                    l_U132 = 3;
                    l_U478 = 1;
                }
                else
                {
                    l_U132 = 2;
                    l_U478 = 1;
                }
                SET_PLAYER_CONTROL( sub_1346(), 0 );
            }
            else
            {
                l_U411 = nil;
            }
        }
        else
        {
            sub_1066( 2, l_U479 );
        }
    }
    else
    {
        sub_1066( 2, l_U479 );
    }
    return;
}

int sub_4262()
{
    if (l_U478)
    {
        l_U478 = IS_CONTROL_JUST_PRESSED( 0, 23 );
        return 0;
    }
    if (g_U12379)
    {
        if (NOT l_U340)
        {
            if (NOT (sub_4321( 0 )))
            {
                sub_4660( "IF NOT (Minigames_QuickCheck_Would_Minigame_Get_Permission_To_Start(MGA_AIRHOCKEY)) \n" );
                return 0;
            }
        }
    }
    if (NOT sub_4681())
    {
        sub_4660( "IF NOT Check_If_Contact_Point_Triggering_Delay_Expired() \n" );
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        sub_4660( "IF (IS_BIT_SET(g_replay.flags, REP_DO_REPLAY) \n" );
        return 0;
    }
    if (IS_PLAYER_PLAYING( sub_1346() ))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_1346(), 0 ))
        {
            sub_4660( "IF IS_WANTED_LEVEL_GREATER(PLAYER_ID(), 0)) \n" );
            return 0;
        }
    }
    l_U431 = sub_4988( ref l_U428[0], ref l_U428[1] );
    if (l_U480 != l_U431)
    {
        sub_4660( "IF iBuddiesThatShouldBeWithYou <> iNumBuddies \n" );
        return 0;
    }
    if (((IS_CHAR_INJURED( l_U410 )) AND (IS_CHAR_INJURED( l_U428[0] ))) AND (IS_CHAR_INJURED( l_U428[1] )))
    {
        sub_4660( "IF IS_CHAR_INJURED(randomPed) \n" );
        return 0;
    }
    return 1;
}

int sub_4321(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12379)
    {
        return 1;
    }
    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_4388( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_4388(unknown uParam0)
{
    return 0;
}

void sub_4660(unknown uParam0)
{
    return;
}

int sub_4681()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

void sub_4988(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    boolean bVar6;

    l_U431 = 0;
    l_U480 = 0;
    iVar5 = 0;
    bVar6 = sub_5015( ref iVar4, iVar5 );
    if (bVar6)
    {
        if (iVar4 == 3)
        {
            (uParam0^) = sub_5104( iVar5 );
        }
        else if (iVar4 == 7)
        {
            (uParam1^) = sub_5104( iVar5 );
        }
        l_U480++;
    }
    iVar5 = 1;
    bVar6 = sub_5015( ref iVar4, iVar5 );
    if (bVar6)
    {
        if (iVar4 == 3)
        {
            (uParam0^) = sub_5104( iVar5 );
        }
        else if (iVar4 == 7)
        {
            (uParam1^) = sub_5104( iVar5 );
        }
        l_U480++;
    }
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (sub_5284( sub_4076(), (uParam0^) ))
        {
            l_U431++;
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam1^) )))
    {
        if (sub_5284( sub_4076(), (uParam1^) ))
        {
            l_U431++;
        }
        else
        {
            (uParam1^) = nil;
        }
    }
    return l_U431;
}

int sub_5015(unknown uParam0, int iParam1)
{
    if (iParam1 >= 2)
    {
        return 0;
    }
    (uParam0^) = g_U28807._fU0[iParam1];
    if (g_U28807._fU0[iParam1] == 34)
    {
        return 0;
    }
    return 1;
}

void sub_5104(int iParam0)
{
    if (iParam0 >= 2)
    {
        return nil;
    }
    return g_U28807._fU12[iParam0];
}

int sub_5284(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
    {
        if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_5705(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_1346() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_1346() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_1346() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_5801())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_4076() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_5886())
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

int sub_5801()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_5886()
{
    return sub_5897( 0, 0 );
}

int sub_5897(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

void sub_5989()
{
    sub_5998();
    sub_6143( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_6217();
    return;
}

void sub_5998()
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

void sub_6143(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_6217()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_6255( 1, g_U575[I] )) == 0)
        {
            sub_6506( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6684())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_6255(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6506(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_6591( g_U575 - 1 );
    return;
}

void sub_6591(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_6684()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_6255( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_7071(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_5705( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U102)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1346(), 0 );
                l_U102 = 1;
            }
            g_U10534 = uParam0;
            l_U103 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_7352();
                l_U101 = 1;
                g_U10535 = 6;
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
                g_U10535 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U100 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U100)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U100 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_7352()
{
    return sub_5897( 1, 1 );
}

void sub_7882()
{
    boolean[3] bVar2;
    string sVar6;
    int Result;

    if (l_U478)
    {
        l_U478 = IS_CONTROL_JUST_PRESSED( 0, 23 );
        return nil;
    }
    l_U431 = sub_4988( ref l_U428[0], ref l_U428[1] );
    if (((IS_CHAR_INJURED( l_U410 )) AND (IS_CHAR_INJURED( l_U428[0] ))) AND (IS_CHAR_INJURED( l_U428[1] )))
    {
        l_U132 = 1;
    }
    array(ref bVar2, 3);
    bVar2[0] = NOT (IS_CHAR_INJURED( l_U428[0] ));
    bVar2[1] = NOT (IS_CHAR_INJURED( l_U428[1] ));
    if ((IS_CONTROL_JUST_PRESSED( 2, 23 )) || (l_U431 < 1))
    {
        l_U478 = 1;
        SET_PLAYER_CONTROL( sub_1346(), 1 );
        CLEAR_HELP();
        l_U132 = 1;
    }
    else if (l_U431 < 2)
    {
        CLEAR_HELP();
        l_U411 = l_U410;
        l_U132 = 1;
    }
    else if ((bVar2[0]) AND (bVar2[1]))
    {
        if ((IS_CONTROL_PRESSED( 2, 115 )) || (IS_BUTTON_PRESSED( 0, 16 )))
        {
            Result = l_U428[0];
        }
        else if ((IS_CONTROL_PRESSED( 2, 116 )) || (IS_BUTTON_PRESSED( 0, 17 )))
        {
            Result = l_U428[1];
        }
        sVar6 = "AH_START_03";
    }
    if (Result == nil)
    {
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar6 )))
        {
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( sVar6, "NULL" );
        }
    }
    else
    {
        CLEAR_HELP();
        if (Result == l_U428[0])
        {
            l_U359 = l_U374;
            l_U360 = l_U375;
            l_U361 = l_U376;
            l_U363 = l_U377;
            l_U364 = l_U378;
        }
        return Result;
    };;;
    return nil;
}

int sub_8470(int iParam0)
{
    unknown uVar3;

    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_4388( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
            if (g_U28807._fU60[uVar3] > 0)
            {
                g_U28807._fU60[uVar3]--;
            }
            g_U28807._fU124 = 0;
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        g_U28807._fU32 = iParam0;
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        g_U28807._fU28 = iParam0;
        g_U28807._fU60[uVar3]--;
        if (iParam0 == 12)
        {
            g_U28807._fU124 = 1;
        }
        return 1;
    }
    g_U28807._fU32 = iParam0;
    return 0;
}

void sub_8860()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    CLEAR_HELP();
    if (NOT l_U340)
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        l_U340 = 1;
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        ALTER_WANTED_LEVEL( sub_1346(), 0 );
        GET_OBJECT_COORDINATES( l_U229, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CLEAR_AREA_OF_OBJECTS( uVar2._fU0, uVar2._fU4, uVar2._fU8, 3.00000000 );
        CLEAR_AREA_OF_CARS( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000 );
        CLEAR_AREA( uVar2._fU0, uVar2._fU4, uVar2._fU8, 1.50000000, 1 );
        sub_9071();
        sub_9594();
        sub_9933();
        if (l_U411 != l_U410)
        {
            sub_1008();
        }
        sub_10405();
        sub_10849( "AIRHOCK", 3 );
        REQUEST_ANIMS( "MINI_AIR" );
        LOAD_ALL_OBJECTS_NOW();
        REGISTER_SCRIPT_WITH_AUDIO( 0 );
        while (NOT (REQUEST_AMBIENT_AUDIO_BANK( "EP2_SFX\AIR_HOCKEY" )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( sub_4076() )))
        {
            if (IS_AMBIENT_SPEECH_DISABLED( sub_4076() ))
            {
                l_U341 = 1;
                STOP_PED_SPEAKING( sub_4076(), 0 );
            }
        }
        sub_11126();
        sub_11496( l_U411 );
        l_U437 = 1;
        WAIT( 0 );
    }
    sub_9417( l_U437 );
    l_U141[0]._fU4 = {sub_11766( -0.00200000, 0.00200000 ), 0.70000000, 0.00000000};
    l_U141[0]._fU36 = {0, 0, 0};
    l_U141[1]._fU4 = {sub_11766( -0.00200000, 0.00200000 ), -0.70000000, 0.00000000};
    l_U141[1]._fU36 = {0, 0, 0};
    l_U166._fU4 = {sub_11766( -0.00200000, 0.00200000 ), 0.30000000, 0.00000000};
    l_U166._fU36 = {0, 0, 0};
    SET_OBJECT_VISIBLE( l_U166._fU0, 1 );
    sub_11984( ref l_U141[0], l_U141[0]._fU4 );
    sub_11984( ref l_U141[1], l_U141[1]._fU4 );
    sub_11984( ref l_U166, l_U166._fU4 );
    SET_OBJECT_ROTATION( l_U141[0]._fU0, 0, 0, 0 );
    SET_OBJECT_ROTATION( l_U141[1]._fU0, 0, 0, 0 );
    SET_OBJECT_ROTATION( l_U166._fU0, 0, 0, 0 );
    l_U404[0] = 0;
    l_U404[1] = 0;
    sub_12160();
    l_U357++;
    l_U353 = 0;
    GET_GAME_TIMER( ref l_U354 );
    GET_GAME_TIMER( ref l_U355 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 5000.00000000, 10000.00000000, ref l_U399[0] );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 5000.00000000, 10000.00000000, ref l_U399[1] );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 5000.00000000, 10000.00000000, ref l_U399[2] );
    BLOCK_PED_WEAPON_SWITCHING( sub_4076(), 1 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4076(), 1 );
    if (NOT (IS_CHAR_INJURED( l_U411 )))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U411, 1 );
    }
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
            sub_12614();
            sub_12759();
        }
    }
    INCREMENT_INT_STAT( 136, 1 );
    SET_PLAYER_CONTROL( sub_1346(), 1 );
    l_U432 = 1;
    uVar5 = sub_3656( 0, 2 );
    sub_13434( uVar5, 0 );
    sub_12759();
    sub_12614();
    GET_GAME_TIMER( ref l_U358 );
    return;
}

void sub_9071()
{
    unknown uVar2;

    l_U438[0]._fU0 = {0.00000000, 0.00000000, 1.59000000};
    l_U438[0]._fU12 = {0.00000000, -0.00500000, 0.00000000};
    l_U438[1]._fU0 = {0.00000000, 1.25000000, 1.25000000};
    l_U438[1]._fU12 = {0.00000000, 0.25000000, 0.00000000};
    l_U438[2]._fU0 = {-3.00000000, -1.00000000, 0.50000000};
    l_U438[2]._fU12 = {0.00000000, 0.00000000, 0.00000000};
    l_U438[3]._fU0 = {0.00500000, -0.44000000, 1.51500000};
    l_U438[3]._fU12 = {0.00000000, 0.00000000, 1.55500000};
    l_U438[4]._fU0 = {-0.83500000, -2.00000000, 0.70000000};
    l_U438[4]._fU12 = {0.76000000, 1.00000000, 0.62500000};
    l_U438[5]._fU0 = {-0.70000000, 2.00000000, 0.70000000};
    l_U438[5]._fU12 = {-0.44000000, 1.00000000, 0.62500000};
    CREATE_CAM( 14, ref l_U434 );
    sub_9417( l_U436 );
    BEGIN_CAM_COMMANDS( ref uVar2 );
    SET_CAM_ACTIVE( l_U434, 1 );
    SET_CAM_PROPAGATE( l_U434, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    END_CAM_COMMANDS( ref uVar2 );
    return;
}

void sub_9417(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    l_U436 = uParam0;
    uVar3 = {sub_1958( l_U438[l_U436]._fU0 )};
    uVar6 = {sub_1958( l_U438[l_U436]._fU12 )};
    SET_CAM_POS( l_U434, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
    POINT_CAM_AT_COORD( l_U434, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
    return;
}

void sub_9594()
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

    l_U412[0] = {0.00000000, 1.30000000, 0.19000000};
    uVar2 = {sub_1958( l_U412[0] )};
    uVar5 = {sub_1958( 0, 0, 0 )};
    GET_HEADING_FROM_VECTOR_2D( uVar5._fU0 - uVar2._fU0, uVar5._fU4 - uVar2._fU4, ref l_U419[0] );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4076() );
    uVar8 = {sub_1958( l_U412[0] )};
    CREATE_OBJECT( l_U118, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref l_U425[0], 1 );
    SET_OBJECT_HEADING( l_U425[0], l_U419[0] );
    SET_OBJECT_VISIBLE( l_U425[0], 0 );
    SET_OBJECT_COLLISION( l_U425[0], 0 );
    FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U425[0], 1 );
    ATTACH_PED_TO_OBJECT( sub_4076(), l_U425[0], 0, 0, 0, 0, 0, 0, 1, 0 );
    GIVE_WEAPON_TO_CHAR( sub_4076(), 0, 0, 1 );
    BLOCK_PED_WEAPON_SWITCHING( sub_4076(), 1 );
    SET_PLAYER_CONTROL( sub_1346(), 0 );
    TASK_LOOK_AT_OBJECT( sub_4076(), l_U166._fU0, 9999999, 0 );
    return;
}

void sub_9933()
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

    l_U412[1] = {0.00000000, -1.30000000, 0.19000000};
    uVar2 = {sub_1958( l_U412[1] )};
    uVar5 = {sub_1958( 0, 0, 0 )};
    GET_HEADING_FROM_VECTOR_2D( uVar5._fU0 - uVar2._fU0, uVar5._fU4 - uVar2._fU4, ref l_U419[1] );
    if (l_U411 == l_U410)
    {
        if (IS_CHAR_INJURED( l_U411 ))
        {
            sub_1008();
        }
        if (NOT (DOES_CHAR_EXIST( l_U411 )))
        {
            sub_3645();
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U411 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U411 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U411, 1 );
        SET_CHAR_COORDINATES( l_U411, uVar5._fU0, uVar5._fU4 - 1.50000000, uVar5._fU8 );
        SET_CHAR_HEADING( l_U411, 0.00000000 );
        FREEZE_CHAR_POSITION( l_U411, 1 );
        uVar8 = {sub_1958( l_U412[1] )};
        CREATE_OBJECT( l_U118, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref l_U425[1], 1 );
        SET_OBJECT_HEADING( l_U425[1], l_U419[1] );
        SET_OBJECT_VISIBLE( l_U425[1], 0 );
        SET_OBJECT_COLLISION( l_U425[1], 0 );
        FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U425[1], 1 );
        ATTACH_PED_TO_OBJECT( l_U411, l_U425[1], 0, 0, 0, 0, 0, 0, 1, 0 );
        TASK_LOOK_AT_OBJECT( l_U411, l_U166._fU0, 9999999, 0 );
    }
    return;
}

void sub_10405()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int[0] iVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    int I;
    unknown uVar14;

    uVar2 = {sub_1958( 0, 0, 0 )};
    array(ref iVar5, 2);
    l_U392[0] = {0.70000000, -1.95000000, 0.15000000};
    l_U392[1] = {0.70000000, 1.90000000, 0.15000000};
    iVar5[0] = {sub_1958( l_U392[0] )};
    iVar5[1] = {sub_1958( l_U392[1] )};
    iVar12 = 0;
    if (l_U431 > 0)
    {
        for ( I = 0; I < l_U428; I++ )
        {
            if ((((l_U428[I] != nil) AND (NOT (IS_CHAR_INJURED( l_U428[I] )))) AND (l_U428[I] != l_U411)) AND (iVar12 < iVar5))
            {
                if (IS_PED_IN_GROUP( l_U428[I] ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U428[I] );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U428[I] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U428[I], 1 );
                SET_CHAR_COORDINATES_NO_OFFSET( l_U428[I], iVar5[iVar12]._fU0, iVar5[iVar12]._fU4, iVar5[iVar12]._fU8 );
                GET_HEADING_FROM_VECTOR_2D( uVar2._fU0 - iVar5[iVar12]._fU0, uVar2._fU4 - iVar5[iVar12]._fU4, ref uVar14 );
                SET_CHAR_HEADING( l_U428[I], uVar14 );
                FREEZE_CHAR_POSITION( l_U428[I], 1 );
                iVar12++;
            }
        }
    }
    return;
}

void sub_10849(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_10885())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_10885()
{
    int I;

    for ( I = 0; I <= (14 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_11126()
{
    sub_11135();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_11135()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12380 = 1;
    g_U28807._fU44 = 34;
    if (NOT (g_U28807._fU0[0] == 34))
    {
        g_U28807._fU48 = 1;
        g_U28807._fU52 = 0;
        if (NOT (g_U28807._fU28 == 16))
        {
            sub_11225();
        }
        return;
    }
    if (sub_11285())
    {
        g_U12379 = 1;
    }
    sub_11442();
    return;
}

void sub_11225()
{
    if (NOT (g_U28807._fU56 > 0))
    {
        return;
    }
    g_U28807._fU56--;
    return;
}

int sub_11285()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony1" )) > 0)
    {
        PRINTSTRING( "\n\n*******************\nTony1 Active so don't change the g_onMission flag\n*******************\n" );
        return 0;
    }
    return 1;
}

void sub_11442()
{
    g_U28805._fU4 = 0;
    return;
}

void sub_11496(int iParam0)
{
    int I;

    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    if (iParam0 == nil)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT (g_U28807._fU0[I] == 34))
        {
            if (g_U28807._fU12[I] == iParam0)
            {
                g_U28807._fU44 = g_U28807._fU0[I];
                return;
            }
        }
    }
    PRINTSTRING( "********************Minigames_Store_CompetitorID() ---> Unknown Competitor PedIndex\n" );
    return;
}

void sub_11766(unknown uParam0, unknown uParam1)
{
    float Result;

    Result = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_11984(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    uVar6 = {sub_1958( uParam1 )};
    SET_OBJECT_COORDINATES( iParam0->_fU0, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
    return;
}

void sub_12160()
{
    l_U195[0]._fU28 = 0;
    l_U195[1]._fU28 = 0;
    l_U212[0]._fU28 = 0;
    l_U212[1]._fU28 = 0;
    SET_OBJECT_ROTATION( l_U195[0]._fU0, 0, l_U195[0]._fU16._fU4, l_U195[0]._fU16._fU8 );
    SET_OBJECT_ROTATION( l_U195[1]._fU0, 0, l_U195[1]._fU16._fU4, l_U195[1]._fU16._fU8 );
    SET_OBJECT_ROTATION( l_U212[0]._fU0, 0, l_U212[0]._fU16._fU4, l_U212[0]._fU16._fU8 );
    SET_OBJECT_ROTATION( l_U212[1]._fU0, 0, l_U212[1]._fU16._fU4, l_U212[1]._fU16._fU8 );
    l_U409 = 0;
    return;
}

void sub_12614()
{
    int iVar2;

    iVar2 = 25;
    if (# -NULL-0xc27bfa())
    {
        iVar2 = 80;
    }
    if (l_U436 == 1)
    {
        SET_PED_ALPHA( sub_4076(), iVar2 - (ROUND( (25.00000000 * (l_U141[0]._fU4._fU4 - l_U141[0]._fU28)) / (l_U342._fU4 - (2.00000000 * l_U141[0]._fU28)) )) );
    }
    else
    {
        SET_PED_ALPHA( sub_4076(), 255 );
    }
    return;
}

void sub_12759()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I < 2; I++ )
    {
        l_U422[I] = 1.00000000 - (ABSF( ((ABSF( l_U141[I]._fU4._fU4 )) - l_U141[I]._fU28) / (l_U342._fU4 - (2.00000000 * l_U141[I]._fU28)) ));
        if (l_U422[I] > 0.99900000)
        {
            l_U422[I] = 0.99900000;
        }
        else if (l_U422[I] < 0.00000000)
        {
            l_U422[I] = 0.00000000;
        }
        uVar3 = {sub_1958( l_U412[I] )};
        SET_OBJECT_COORDINATES( l_U425[I], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        l_U412[I]._fU0 = l_U141[I]._fU4._fU0;
    }
    sub_13027( sub_4076(), l_U422[0] );
    sub_13027( l_U411, l_U422[1] );
    if (l_U422[1] == 0.99900000)
    {
        l_U367++;
        if (l_U367 > 30)
        {
            l_U368 = 1;
            l_U367 = 0;
        }
    }
    else
    {
        l_U367 = 0;
        if ((l_U368) AND (l_U422[1] < 0.70000000))
        {
            l_U368 = 0;
        }
    }
    return;
}

void sub_13027(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, 1 );
        if (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "strike" ))
        {
            SET_CHAR_ANIM_SPEED( uParam0, "MINI_AIR", "strike", 0.00000000 );
            SET_CHAR_HEADING( uParam0, 0 );
            SET_CHAR_ANIM_CURRENT_TIME( uParam0, "MINI_AIR", "strike", uParam1 );
            if (DOES_OBJECT_EXIST( l_U166._fU0 ))
            {
                TASK_LOOK_AT_OBJECT( uParam0, l_U166._fU0, 9999999, 0 );
            }
        }
        else
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "strike", "MINI_AIR", 4.00000000, 0, 0, 0, 0, 0 );
        }
    }
    return;
}

void sub_13434(int iParam0, int iParam1)
{
    if (l_U411 == l_U410)
    {
        iParam0 = 0;
    }
    if (iParam1 == 0)
    {
        if (iParam0 == iParam1)
        {
            l_U133 = 12;
        }
        else
        {
            l_U133 = 26;
        }
    }
    return;
}

int sub_13763(int iParam0)
{
    int I;

    if (iParam0 > 0)
    {
        I = 0;
        for ( I = 0; I < l_U428; I++ )
        {
            if (l_U428[I] != nil)
            {
                if (NOT (DOES_CHAR_EXIST( l_U428[I] )))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_13868()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    GET_GAME_TIMER( ref iVar2 );
    if ((l_U353 < 0) || ((iVar2 - l_U354) > 400))
    {
        sub_13910();
    }
    sub_16684();
    sub_12759();
    sub_21423();
    sub_23110();
    if (l_U411 != l_U410)
    {
        if (l_U353 < 0)
        {
            if ((iVar2 - l_U356) > 12000)
            {
                iVar4 = sub_3656( 0, 2 );
                if (iVar4 == 0)
                {
                    l_U133 = 10;
                }
                else
                {
                    l_U133 = 23;
                }
                l_U356 = iVar2;
            }
        }
        else if ((iVar2 - l_U355) > 8000)
        {
            l_U133 = 27;
            l_U355 = iVar2;
        }
    }
    if (l_U166._fU4._fU4 < -l_U342._fU4)
    {
        if ((l_U166._fU4._fU0 < l_U345) AND (l_U166._fU4._fU0 > -l_U345))
        {
            l_U404[0]++;
            l_U407 = 0;
            l_U132 = 5;
            l_U356 = 0;
            uVar3 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( uVar3, "AIR_HOCKEY_GOAL", l_U166._fU0 );
            SET_VARIABLE_ON_SOUND( uVar3, "speed", sub_20535( l_U352 / (2.00000000 * l_U166._fU28), 0.00000000, 1.00000000 ) );
            RELEASE_SOUND_ID( uVar3 );
        }
    }
    else if (l_U166._fU4._fU4 > l_U342._fU4)
    {
        if ((l_U166._fU4._fU0 < l_U345) AND (l_U166._fU4._fU0 > -l_U345))
        {
            l_U404[1]++;
            l_U407 = 1;
            l_U132 = 5;
            l_U356 = 0;
            uVar3 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( uVar3, "AIR_HOCKEY_GOAL", l_U166._fU0 );
            SET_VARIABLE_ON_SOUND( uVar3, "speed", sub_20535( l_U352 / (2.00000000 * l_U166._fU28), 0.00000000, 1.00000000 ) );
            RELEASE_SOUND_ID( uVar3 );
        }
    }
    if (l_U432)
    {
        GET_GAME_TIMER( ref iVar2 );
        if ((iVar2 - l_U358) >= 10000)
        {
            l_U432 = 0;
        }
    }
    return;
}

void sub_13910()
{
    unknown uVar2;
    float fVar3;

    sub_13919();
    if (l_U373 > 0.00000000)
    {
        GET_FRAME_TIME( ref uVar2 );
        l_U373 -= uVar2 * 1000.00000000;
    }
    else
    {
        sub_14975();
    }
    fVar3 = 0.20000000;
    if (l_U141[0]._fU4._fU4 < l_U141[0]._fU28)
    {
        l_U141[0]._fU4._fU4 = l_U141[0]._fU28;
        if (l_U141[0]._fU36._fU4 < 0.00000000)
        {
            l_U141[0]._fU36._fU4 = 0.00000000;
        }
    }
    else if ((l_U141[0]._fU4._fU4 < (l_U141[0]._fU28 + fVar3)) AND (l_U141[0]._fU36._fU4 < 0.00000000))
    {
        l_U141[0]._fU36._fU4 *= SIN( ((l_U141[0]._fU4._fU4 - l_U141[0]._fU28) * 90.00000000) / fVar3 );
    }
    if (l_U141[1]._fU4._fU4 > -l_U141[1]._fU28)
    {
        l_U141[1]._fU4._fU4 = -l_U141[1]._fU28;
        if (l_U141[1]._fU36._fU4 > 0.00000000)
        {
            l_U141[1]._fU36._fU4 = 0.00000000;
        }
    }
    else if ((l_U141[1]._fU4._fU4 > (-l_U141[1]._fU28 - fVar3)) AND (l_U141[1]._fU36._fU4 > 0.00000000))
    {
        l_U141[1]._fU36._fU4 *= SIN( ((-l_U141[1]._fU4._fU4 - l_U141[1]._fU28) * 90.00000000) / fVar3 );
    }
    return;
}

void sub_13919()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    float fVar7;

    if (IS_USING_CONTROLLER())
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if (NOT l_U384)
        {
            sub_13972( uVar3, uVar4, l_U124 );
            if ((((iVar5 * iVar5) + (iVar6 * iVar6)) > 12100) AND (NOT l_U385))
            {
                GET_GAME_TIMER( ref iVar2 );
                if ((iVar2 - l_U388) < 150)
                {
                    l_U385 = 1;
                    l_U386 = iVar5;
                    l_U387 = iVar6;
                    l_U384 = 1;
                    sub_13972( l_U386, l_U387, l_U391 );
                    if (l_U133 == 1)
                    {
                        PLAY_SOUND_FROM_PED( -1, "AIR_HOCKEY_SLAM", sub_4076() );
                    }
                    GET_GAME_TIMER( ref l_U389 );
                }
            }
            if ((iVar5 == 0) AND (iVar6 == 0))
            {
                l_U385 = 0;
                GET_GAME_TIMER( ref l_U388 );
            }
        }
        else
        {
            GET_GAME_TIMER( ref iVar2 );
            sub_13972( l_U386, l_U387, l_U391 );
            if ((iVar2 - l_U389) > l_U390)
            {
                l_U384 = 0;
            }
        }
    }
    else
    {
        fVar7 = l_U125 + ((l_U126 - l_U125) * GET_MOUSE_SENSITIVITY());
        GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        sub_13972( iVar5, iVar6, fVar7 );
    }
    sub_14510( ref l_U141[0] );
    return;
}

void sub_13972(int iParam0, unknown uParam1, unknown uParam2)
{
    if ((((l_U141[0]._fU4._fU0 + l_U141[0]._fU28) < l_U342._fU0) || (iParam0 > 0)) AND (((l_U141[0]._fU4._fU0 - l_U141[0]._fU28) > -l_U342._fU0) || (iParam0 < 0)))
    {
        l_U141[0]._fU36._fU0 = (-TO_FLOAT( iParam0 )) / uParam2;
    }
    if ((((l_U141[0]._fU4._fU4 + l_U141[0]._fU28) < l_U342._fU4) || (uParam1 < 0.00000000)) AND (((l_U141[0]._fU4._fU4 - l_U141[0]._fU28) > -l_U342._fU4) || (uParam1 > 0.00000000)))
    {
        l_U141[0]._fU36._fU4 = (TO_FLOAT( uParam1 )) / uParam2;
    }
    return;
}

void sub_14510(int iParam0)
{
    float fVar3;
    boolean bVar4;

    fVar3 = VDIST( iParam0->_fU4, l_U166._fU4 );
    bVar4 = false;
    if (fVar3 < ((iParam0->_fU28 + l_U166._fU28) + 0.01000000))
    {
        if (((l_U166._fU4._fU4 + l_U166._fU28) >= (l_U342._fU4 - 0.01000000)) AND ((ref iParam0->_fU36->_fU4) > 0.00000000))
        {
            bVar4 = true;
            ref iParam0->_fU36->_fU4 = 0;
        }
        if ((((l_U166._fU4._fU0 + l_U166._fU28) >= (l_U342._fU0 - 0.01000000)) AND ((ref iParam0->_fU36->_fU0) > 0.00000000)) || (((l_U166._fU4._fU0 - l_U166._fU28) <= (-l_U342._fU0 + 0.01000000)) AND ((ref iParam0->_fU36->_fU0) < 0.00000000)))
        {
            if (bVar4)
            {
                l_U166._fU36._fU4 -= 0.01000000;
            }
            ref iParam0->_fU36->_fU0 = 0;
        }
    }
    else if ((((l_U166._fU4._fU0 >= (l_U342._fU0 + 0.50000000)) || (l_U166._fU4._fU0 <= (-l_U342._fU0 - 0.50000000))) || (l_U166._fU4._fU4 >= (l_U342._fU4 + 0.50000000))) || (l_U166._fU4._fU4 <= (-l_U342._fU4 - 0.50000000)))
    {
        l_U166._fU4 = {l_U141[0]._fU4};
    }
    return;
}

void sub_14975()
{
    float fVar2;
    float fVar3;
    int iVar4;
    int iVar5;
    float fVar6;

    if (l_U353 != 1)
    {
        fVar2 = l_U141[1]._fU4._fU0 - l_U166._fU4._fU0;
    }
    else
    {
        fVar2 = l_U141[1]._fU4._fU0 - (l_U166._fU4._fU0 + l_U372);
    }
    fVar3 = l_U359;
    if (l_U166._fU4._fU4 > (l_U342._fU4 / 1.50000000))
    {
        fVar3 /= 4.00000000;
    }
    if (fVar2 > 0.00000000)
    {
        if (fVar2 > l_U141[1]._fU28)
        {
            l_U141[1]._fU36._fU0 -= fVar3;
        }
    }
    else if (fVar2 < 0.00000000)
    {
        if (fVar2 < -l_U141[1]._fU28)
        {
            l_U141[1]._fU36._fU0 += fVar3;
        }
    }
    l_U141[1]._fU36._fU0 *= 0.99900000;
    if (l_U166._fU4._fU4 > 0.00000000)
    {
        if ((ABSF( l_U141[1]._fU4._fU4 )) < (l_U342._fU4 / 3.00000000))
        {
            l_U141[1]._fU36._fU4 -= l_U360;
        }
        else if ((ABSF( l_U141[1]._fU4._fU4 )) > ((l_U342._fU4 * 2.00000000) / 3.00000000))
        {
            l_U141[1]._fU36._fU4 += l_U360;
        }
        else
        {
            l_U141[1]._fU36._fU4 *= 0.99900000;
        }
    }
    else if (l_U368)
    {
        l_U141[1]._fU36._fU4 -= l_U360;
    }
    else if (l_U365 > l_U366)
    {
        l_U141[1]._fU36._fU4 -= l_U361 * 2;
        l_U365 = 0;
    }
    else if ((ABSF( fVar2 )) < (l_U141[1]._fU28 + l_U166._fU28))
    {
        if (l_U141[1]._fU4._fU4 > l_U166._fU4._fU4)
        {
            if (l_U141[1]._fU4._fU0 < l_U166._fU4._fU0)
            {
                l_U141[1]._fU36._fU0 -= l_U359;
            }
            else
            {
                l_U141[1]._fU36._fU0 += l_U359;
            }
            if ((l_U141[1]._fU4._fU4 - l_U166._fU4._fU4) < (2.00000000 * l_U141[1]._fU28))
            {
                l_U141[1]._fU36._fU4 += l_U360;
                l_U365++;
            }
            else
            {
                l_U141[1]._fU36._fU4 -= l_U360;
                l_U365++;
            }
        }
        else if (l_U141[1]._fU4._fU4 < l_U166._fU4._fU4)
        {
            if (NOT l_U369)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
                if (iVar4 < l_U364)
                {
                    l_U369 = 1;
                    GET_GAME_TIMER( ref l_U370 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref iVar5 );
                if ((iVar5 - l_U370) > l_U371)
                {
                    l_U369 = 0;
                }
            }
            if (l_U369)
            {
                l_U141[1]._fU36._fU4 += l_U362;
            }
            else
            {
                l_U141[1]._fU36._fU4 += l_U361;
            }
        }
    }
    else
    {
        l_U141[1]._fU36._fU4 -= l_U360;
        l_U365 = 0;
    };;;;
    fVar6 = VMAG( l_U141[1]._fU36 );
    if (fVar6 > l_U363)
    {
        l_U141[1]._fU36 = {l_U141[1]._fU36 * (l_U363 / fVar6)};
    }
    return;
}

void sub_16684()
{
    int I;
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    float fVar7;
    vector vVar8;
    vector vVar11;
    vector vVar14;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    unknown uVar21;
    float fVar22;

    iVar3 = 0;
    GET_FRAME_TIME( ref fVar7 );
    fVar7 *= 30.00000000;
    vVar8 = {l_U141[0]._fU36};
    vVar11 = {l_U141[1]._fU36};
    vVar14 = {l_U166._fU36};
    l_U134[1] = 0;
    l_U134[2] = 0;
    l_U134[3] = 0;
    l_U134[0] = 0;
    sub_11984( ref l_U166, l_U166._fU4 );
    sub_11984( ref l_U141[0], l_U141[0]._fU4 );
    sub_11984( ref l_U141[1], l_U141[1]._fU4 );
    fVar17 = 0.00000000;
    while (((fVar17 + 0.05000000) < fVar7) AND (iVar3 < 25))
    {
        fVar18 = fVar7 - fVar17;
        bVar4 = false;
        bVar5 = false;
        bVar6 = false;
        if (sub_16924( ref l_U166, ref l_U231, l_U347, ref fVar18 ))
        {
            l_U134[1] = 1;
            bVar4 = true;
            iVar3++;
        }
        else if (sub_18141( ref l_U141[0], 0.00000000, ref fVar18 ))
        {
            l_U134[2] = 1;
            bVar5 = true;
            iVar3++;
        }
        else if (sub_18141( ref l_U141[1], 0.00000000, ref fVar18 ))
        {
            l_U134[3] = 1;
            bVar6 = true;
            iVar3++;
        }
        else if (sub_18954( ref l_U141[1], ref l_U166, ref fVar18 ))
        {
            bVar4 = true;
            bVar6 = true;
            iVar3++;
            l_U134[0] = 1;
            if (l_U369)
            {
                l_U131 = l_U129;
            }
            else
            {
                l_U131 = l_U128;
            }
            if (l_U353 > -1)
            {
                l_U353 = -1;
                GET_GAME_TIMER( ref l_U356 );
                l_U354 = 0;
            }
        }
        else if (sub_18954( ref l_U141[0], ref l_U166, ref fVar18 ))
        {
            bVar4 = true;
            bVar5 = true;
            iVar3++;
            fVar19 = VMAG( l_U141[0]._fU36 );
            fVar20 = VMAG( vVar14 );
            if (l_U384)
            {
                l_U131 = l_U130;
                sub_19874( 60, 200 );
            }
            else if (fVar19 > 0.03000000)
            {
                l_U131 = l_U129;
            }
            else if (fVar19 < 0.00050000)
            {
                l_U166._fU36 = {l_U166._fU36 / 2.00000000};
            }
            else if (fVar19 < 0.01000000)
            {
                l_U131 = l_U127;
            }
            else
            {
                l_U131 = l_U128;
            };;;;
            if ((fVar19 > 0.01000000) || (fVar20 > 0.01000000))
            {
                sub_19874( 30, 100 );
            }
            l_U134[0] = 1;
            if (l_U353 > -1)
            {
                l_U353 = -1;
                GET_GAME_TIMER( ref l_U356 );
                l_U354 = 0;
            }
        };;;;;
        if (NOT bVar5)
        {
            l_U141[0]._fU4 = {l_U141[0]._fU4 + (l_U141[0]._fU36 * fVar18)};
        }
        if (NOT bVar6)
        {
            l_U141[1]._fU4 = {l_U141[1]._fU4 + (l_U141[1]._fU36 * fVar18)};
        }
        if (NOT bVar4)
        {
            l_U166._fU4 = {l_U166._fU4 + (l_U166._fU36 * fVar18)};
        }
        fVar17 += fVar18;
    }
    if (l_U140)
    {
        if ((((NOT l_U134[0]) AND (NOT l_U134[1])) AND (NOT l_U134[2])) AND (NOT l_U134[3]))
        {
            l_U140 = 0;
        }
    }
    else if (l_U134[0])
    {
        uVar21 = GET_SOUND_ID();
        if (l_U384)
        {
            PLAY_SOUND_FROM_OBJECT( -1, "AIR_HOCKEY_SLAM_HIT", l_U166._fU0 );
        }
        else
        {
            PLAY_SOUND_FROM_OBJECT( uVar21, "AIR_HOCKEY_HIT_PUCK", l_U166._fU0 );
            SET_VARIABLE_ON_SOUND( uVar21, "speed", sub_20535( (VMAG( l_U166._fU36 - vVar14 )) / (3.00000000 * l_U166._fU28), 0.00000000, 1.00000000 ) );
        }
        RELEASE_SOUND_ID( uVar21 );
        l_U140 = 1;
    }
    if (l_U134[1])
    {
        uVar21 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( uVar21, "AIR_HOCKEY_PUCK_HIT_WALL", l_U166._fU0 );
        SET_VARIABLE_ON_SOUND( uVar21, "speed", sub_20535( (VMAG( l_U166._fU36 - vVar14 )) / (3.00000000 * l_U166._fU28), 0.00000000, 1.00000000 ) );
        RELEASE_SOUND_ID( uVar21 );
        l_U140 = 1;
    }
    if (l_U134[2])
    {
        uVar21 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( uVar21, "AIR_HOCKEY_HIT_WALL", l_U141[0]._fU0 );
        SET_VARIABLE_ON_SOUND( uVar21, "speed", sub_20535( (VMAG( l_U141[0]._fU36 - vVar8 )) / l_U141[0]._fU28, 0.00000000, 1.00000000 ) );
        RELEASE_SOUND_ID( uVar21 );
        l_U140 = 1;
    }
    if (l_U134[3])
    {
        uVar21 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( uVar21, "AIR_HOCKEY_HIT_WALL", l_U141[1]._fU0 );
        SET_VARIABLE_ON_SOUND( uVar21, "speed", sub_20535( (VMAG( l_U141[1]._fU36 - vVar11 )) / l_U141[1]._fU28, 0.00000000, 1.00000000 ) );
        RELEASE_SOUND_ID( uVar21 );
        l_U140 = 1;
    }
    fVar22 = VMAG( l_U166._fU36 );
    if (fVar22 > (l_U131 * l_U166._fU28))
    {
        l_U166._fU36 = {l_U166._fU36 * ((l_U131 * l_U166._fU28) / fVar22)};
    }
    l_U166._fU36 = {l_U166._fU36 * l_U349};
    if (NOT bVar4)
    {
        l_U352 = VMAG( l_U166._fU36 );
    }
    for ( I = 0; I < 2; I++ )
    {
        fVar22 = VMAG( l_U141[I]._fU36 );
        if (fVar22 >= (2.50000000 * l_U141[I]._fU28))
        {
            l_U141[I]._fU36 = {l_U141[I]._fU36 * ((2.50000000 * l_U141[I]._fU28) / fVar22)};
        }
        if (I == 0)
        {
            l_U141[I]._fU36 = {l_U141[I]._fU36 * l_U350};
        }
        else
        {
            l_U141[I]._fU36 = {l_U141[I]._fU36 * l_U351};
        }
    }
    return;
}

int sub_16924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    float fVar6;
    int I;

    for ( I = 0; I < (uParam1^); I++ )
    {
        if ((I == 6) || (I == 7))
        {
            fVar6 = 0.10000000;
        }
        else
        {
            fVar6 = uParam2;
        }
        if (sub_16989( uParam0, ref (uParam1^)[I], fVar6, uParam3 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_16989(int iParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    vector vVar6;
    float fVar9;
    unknown uVar10;
    float fVar11;
    vector vVar12;
    vector vVar15;
    float fVar18;
    float fVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    vector vVar27;
    float fVar30;
    float fVar31;

    vVar6 = {iParam0->_fU36 * (uParam3^)};
    fVar9 = VMAG( vVar6 );
    uVar10 = sub_17053( iParam1->_fU0 + (iParam1->_fU24 * iParam0->_fU28), iParam1->_fU24 );
    fVar11 = (sub_17053( iParam1->_fU24, iParam0->_fU4 )) - uVar10;
    if (fVar11 < 0.00000000)
    {
        vVar12 = {iParam1->_fU0 - iParam0->_fU4};
        vVar12 = {vVar12 / (VMAG( vVar12 ))};
        vVar15 = {iParam1->_fU12 - iParam0->_fU4};
        vVar15 = {vVar15 / (VMAG( vVar15 ))};
        fVar18 = sub_17053( vVar12, vVar15 );
        if ((fVar18 < 0.00000000) AND (fVar18 > -1.00000000))
        {
            iParam0->_fU4 = {iParam0->_fU4 - (iParam1->_fU24 * fVar11)};
            (uParam3^) = 0.00000000;
            return 1;
        }
    }
    else
    {
        fVar19 = sub_17053( iParam1->_fU24, vVar6 );
        if (fVar19 < 0.00000000)
        {
            fVar20 = -fVar11 / fVar19;
            if (fVar20 < 1.00000000)
            {
                uVar21 = {iParam1->_fU12 - iParam1->_fU0};
                uVar24 = {iParam0->_fU4 - iParam1->_fU0};
                fVar30 = sub_17053( uVar24, uVar21 );
                if (fVar30 <= 0.00000000)
                {
                    if (sub_17445( iParam0->_fU4, vVar6 / fVar9, iParam1->_fU0, iParam0->_fU28, ref fVar20 ))
                    {
                        if (fVar20 <= fVar9)
                        {
                            iParam0->_fU4 = {iParam0->_fU4 + ((vVar6 * fVar20) / fVar9)};
                            vVar27 = {iParam0->_fU4 - iParam1->_fU0};
                            vVar27 = {vVar27 / (VMAG( vVar27 ))};
                            iParam0->_fU36 = {iParam0->_fU36 - (((vVar27 * 2.00000000) * (sub_17053( iParam0->_fU36, vVar27 ))) * uParam2)};
                            (uParam3^) *= fVar20;
                            return 1;
                        }
                    }
                    return 0;
                }
                fVar31 = sub_17053( uVar21, uVar21 );
                if (fVar31 <= fVar30)
                {
                    if (sub_17445( iParam0->_fU4, vVar6 / fVar9, iParam1->_fU12, iParam0->_fU28, ref fVar20 ))
                    {
                        if (fVar20 <= fVar9)
                        {
                            iParam0->_fU4 = {iParam0->_fU4 + ((vVar6 * fVar20) / fVar9)};
                            vVar27 = {iParam0->_fU4 - iParam1->_fU12};
                            vVar27 = {vVar27 / (VMAG( vVar27 ))};
                            iParam0->_fU36 = {iParam0->_fU36 - (((vVar27 * 2.00000000) * (sub_17053( iParam0->_fU36, vVar27 ))) * uParam2)};
                            (uParam3^) *= fVar20 / fVar9;
                            return 1;
                        }
                    }
                    return 0;
                }
                iParam0->_fU4 = {iParam0->_fU4 + (vVar6 * fVar20)};
                iParam0->_fU36 = {iParam0->_fU36 - (((iParam1->_fU24 * 2.00000000) * (sub_17053( iParam0->_fU36, iParam1->_fU24 ))) * uParam2)};
                (uParam3^) *= fVar20;
                return 1;
            }
        }
    }
    return 0;
}

float sub_17053(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return ((uParam0._fU0 * uParam3._fU0) + (uParam0._fU4 * uParam3._fU4)) + (uParam0._fU8 * uParam3._fU8);
}

int sub_17445(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, vector vParam6, unknown uParam9, unknown uParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    unknown uVar20;

    uVar13 = VMAG2( uParam3 );
    uVar14 = {vParam0 - vParam6};
    fVar17 = 2.00000000 * (sub_17053( uParam3, uVar14 ));
    fVar18 = (VMAG2( uVar14 )) - (uParam9 * uParam9);
    fVar19 = (fVar17 * fVar17) - ((4.00000000 * uVar13) * fVar18);
    if (fVar19 < 0.00000000)
    {
        return 0;
    }
    uVar20 = SQRT( fVar19 );
    (uParam10^) = (-fVar17 - uVar20) / (2.00000000 * uVar13);
    return 1;
}

int sub_18141(int iParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    float fVar12;
    float fVar13;

    vVar5 = {iParam0->_fU36 * (uParam2^)};
    uVar8 = {iParam0->_fU4 + vVar5};
    if ((uVar8._fU0 + iParam0->_fU28) > l_U342._fU0)
    {
        fVar12 = vVar5.x / (VMAG( vVar5 ));
        fVar13 = ((l_U342._fU0 - iParam0->_fU28) - (ref iParam0->_fU4->_fU0)) / fVar12;
        fVar11 = fVar13 / (VMAG( vVar5 ));
        iParam0->_fU4 = {iParam0->_fU4 + (vVar5 * fVar11)};
        ref iParam0->_fU36->_fU0 *= -uParam1;
        ref iParam0->_fU4->_fU0 = l_U342._fU0 - iParam0->_fU28;
        (uParam2^) *= fVar11;
        return 1;
    }
    else if ((uVar8._fU0 - iParam0->_fU28) < -l_U342._fU0)
    {
        fVar12 = vVar5.x / (VMAG( vVar5 ));
        fVar13 = ((-l_U342._fU0 + iParam0->_fU28) - (ref iParam0->_fU4->_fU0)) / fVar12;
        fVar11 = fVar13 / (VMAG( vVar5 ));
        iParam0->_fU4 = {iParam0->_fU4 + (vVar5 * fVar11)};
        ref iParam0->_fU36->_fU0 *= -uParam1;
        ref iParam0->_fU4->_fU0 = -l_U342._fU0 + iParam0->_fU28;
        (uParam2^) *= fVar11;
        return 1;
    }
    else if ((uVar8._fU4 + iParam0->_fU28) > l_U342._fU4)
    {
        fVar12 = vVar5.y / (VMAG( vVar5 ));
        fVar13 = ((l_U342._fU4 - iParam0->_fU28) - (ref iParam0->_fU4->_fU4)) / fVar12;
        fVar11 = fVar13 / (VMAG( vVar5 ));
        iParam0->_fU4 = {iParam0->_fU4 + (vVar5 * fVar11)};
        ref iParam0->_fU36->_fU4 *= -uParam1;
        ref iParam0->_fU4->_fU4 = l_U342._fU4 - iParam0->_fU28;
        (uParam2^) *= fVar11;
        return 1;
    }
    else if ((uVar8._fU4 - iParam0->_fU28) < -l_U342._fU4)
    {
        fVar12 = vVar5.y / (VMAG( vVar5 ));
        fVar13 = ((-l_U342._fU4 + iParam0->_fU28) - (ref iParam0->_fU4->_fU4)) / fVar12;
        fVar11 = fVar13 / (VMAG( vVar5 ));
        iParam0->_fU4 = {iParam0->_fU4 + (vVar5 * fVar11)};
        ref iParam0->_fU36->_fU4 *= -uParam1;
        ref iParam0->_fU4->_fU4 = -l_U342._fU4 + iParam0->_fU28;
        (uParam2^) *= fVar11;
        return 1;
    };;;;
    return 0;
}

int sub_18954(int iParam0, int iParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    vector vVar7;
    float fVar10;
    vector vVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    float fVar17;
    unknown uVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    vector vVar24;
    vector vVar27;
    unknown uVar30;
    unknown uVar31;
    float fVar32;
    vector vVar33;
    vector vVar36;

    fVar5 = VDIST( iParam0->_fU4, iParam1->_fU4 );
    fVar6 = iParam1->_fU28 + iParam0->_fU28;
    if (fVar5 < (fVar6 * 0.95000000))
    {
        ref iParam1->_fU36->_fU0 *= 1.75000000;
        ref iParam1->_fU36->_fU4 *= 1.75000000;
    }
    vVar7 = {(iParam0->_fU36 * (uParam2^)) - (iParam1->_fU36 * (uParam2^))};
    fVar10 = VMAG( vVar7 );
    if (fVar10 < (fVar5 - fVar6))
    {
        return 0;
    }
    vVar11 = {vVar7 / fVar10};
    uVar14 = {iParam1->_fU4 - iParam0->_fU4};
    fVar17 = sub_17053( vVar11, uVar14 );
    if (fVar17 <= 0.00000000)
    {
        return 0;
    }
    uVar18 = VMAG( uVar14 );
    fVar19 = (uVar18 * uVar18) - (fVar17 * fVar17);
    fVar20 = fVar6 * fVar6;
    if (fVar19 >= fVar20)
    {
        return 0;
    }
    fVar21 = fVar20 - fVar19;
    if (fVar21 < 0)
    {
        return 0;
    }
    fVar22 = fVar17 - (SQRT( fVar21 ));
    if (fVar10 < fVar22)
    {
        return 0;
    }
    vVar7 = {(vVar7 * fVar22) / fVar10};
    fVar23 = (VMAG( vVar7 )) / fVar10;
    if (fVar23 > 1.00000000)
    {
        fVar23 = 0.50000000;
    }
    vVar24 = {iParam0->_fU36 * fVar23};
    vVar27 = {iParam1->_fU36 * fVar23};
    iParam0->_fU4 = {iParam0->_fU4 + (vVar24 * (uParam2^))};
    iParam1->_fU4 = {iParam1->_fU4 + (vVar27 * (uParam2^))};
    vVar11 = {iParam0->_fU4 - iParam1->_fU4};
    vVar11 = {vVar11 / (VMAG( vVar11 ))};
    uVar30 = sub_17053( iParam0->_fU36, vVar11 );
    uVar31 = sub_17053( iParam1->_fU36, vVar11 );
    fVar32 = (2.00000000 * (uVar30 - uVar31)) / (iParam0->_fU32 + iParam1->_fU32);
    vVar33 = {iParam0->_fU36 - ((vVar11 * fVar32) * iParam1->_fU32)};
    vVar36 = {iParam1->_fU36 + ((vVar11 * fVar32) * iParam0->_fU32)};
    iParam0->_fU36 = {vVar33 * l_U348};
    iParam1->_fU36 = {vVar36 * l_U348};
    (uParam2^) *= fVar23;
    return 1;
}

void sub_19874(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_GAME_TIMER( ref iVar4 );
    if (iVar4 > l_U403)
    {
        SHAKE_PAD( 0, iParam0, uParam1 );
        if (iParam0 < 250)
        {
            iParam0 = 250;
        }
        l_U403 = iVar4 + iParam0;
    }
    return;
}

void sub_20535(float fParam0, float Result, float fParam2)
{
    if (fParam0 < Result)
    {
        return Result;
    }
    else if (fParam0 > fParam2)
    {
        return fParam2;
    }
    return fParam0;
}

void sub_21423()
{
    if (((NOT (IS_CHAR_INJURED( sub_4076() ))) AND (DOES_CHAR_EXIST( l_U411 ))) AND (NOT (IS_CHAR_INJURED( l_U411 ))))
    {
        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U411 ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_4076() ))))
        {
            switch (l_U133)
            {
                case 0:
                l_U133 = 1;
                break;
                case 2:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_SCORE_FAST", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 3:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_SCORE_MED", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 4:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_SCORE_SLOW", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 5:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_LET_PUCK_IN_FAST", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 6:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_LET_PUCK_IN_MED", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 7:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_LET_PUCK_IN_SLOW", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 12:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_I_SERVE", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 13:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_YOU_SERVE", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 14:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_SERVE_HURRY_UP_RESP", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 8:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_WIN", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 9:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_LOSE", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 10:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_TAUNT", 1, 1, 2 );
                l_U133 = 24;
                break;
                case 11:
                SAY_AMBIENT_SPEECH( sub_4076(), "AIR_HOCKEY_TAUNT_RESP", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 15:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_SCORE_FAST", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 16:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_SCORE_MED", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 17:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_SCORE_SLOW", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 18:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_LET_PUCK_IN_FAST", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 19:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_LET_PUCK_IN_MED", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 20:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_LET_PUCK_IN_SLOW", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 21:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_WIN", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 22:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_LOSE", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 25:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_I_SERVE", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 26:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_YOU_SERVE", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 27:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_SERVE_HURRY_UP", 1, 1, 2 );
                l_U133 = 14;
                break;
                case 23:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_TAUNT", 1, 1, 2 );
                l_U133 = 11;
                break;
                case 24:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_TAUNT_RESP", 1, 1, 2 );
                l_U133 = 0;
                break;
                case 28:
                SAY_AMBIENT_SPEECH( l_U411, "AIR_HOCKEY_BORED", 1, 1, 2 );
                l_U133 = 0;
                break;
            }
        }
    }
    return;
}

void sub_23110()
{
    float fVar2;
    int I;

    if (l_U431 > 0)
    {
        GET_FRAME_TIME( ref fVar2 );
        fVar2 *= 1000.00000000;
        if (NOT (HAVE_ANIMS_LOADED( "MINI_AIR" )))
        {
            REQUEST_ANIMS( "MINI_AIR" );
        }
        else
        {
            for ( I = 0; I < l_U428; I++ )
            {
                if (((l_U428[I] != nil) AND (NOT (IS_CHAR_INJURED( l_U428[I] )))) AND (l_U428[I] != l_U411))
                {
                    if (NOT (sub_23272( l_U428[I] )))
                    {
                        sub_23493( l_U428[I], -1 );
                    }
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U428[I] )))
                    {
                        if (l_U399[I] > 15000.00000000)
                        {
                            sub_23852( l_U428[I] );
                            GENERATE_RANDOM_FLOAT_IN_RANGE( -5000.00000000, 5000.00000000, ref l_U399[I] );
                        }
                    }
                    l_U399[I] += fVar2;
                }
            }
        }
    }
    return;
}

int sub_23272(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((((NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "cheer_on_fight_A" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "cheer_on_fight_B" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "cheer_on_fight_C" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "cheer_on_fight_D" ))))
        {
            return 0;
        }
    }
    return 1;
}

void sub_23493(unknown uParam0, int iParam1)
{
    if (iParam1 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iParam1 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (iParam1)
        {
            case 0:
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_A", "MINI_AIR", 4.00000000, 0, 0, 0, 0, -1 );
            break;
            case 1:
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_B", "MINI_AIR", 4.00000000, 0, 0, 0, 0, -1 );
            break;
            case 2:
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_C", "MINI_AIR", 4.00000000, 0, 0, 0, 0, -1 );
            break;
            case 3:
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_D", "MINI_AIR", 4.00000000, 0, 0, 0, 0, -1 );
            break;
        }
    }
    return;
}

void sub_23852(unknown uParam0)
{
    int iVar3;
    string sVar4;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar3 );
    if (iVar3 == 0)
    {
        sVar4 = "WHOOP";
    }
    else if (iVar3 == 1)
    {
        sVar4 = "LAUGH";
    }
    else if (iVar3 == 2)
    {
        sVar4 = "CHEER";
    };;;
    SAY_AMBIENT_SPEECH_WITH_VOICE( uParam0, sVar4, "PAIN_VOICE", 0, 0, 0 );
    return;
}

void sub_24642(unknown uParam0)
{
    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        g_U28807._fU40 = uParam0;
        return;
    }
    g_U28807._fU36 = uParam0;
    return;
}

void sub_24784()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int I;
    int iVar7;

    if (sub_24793())
    {
        if (l_U404[l_U407] < 7)
        {
            l_U409 = 4;
        }
    }
    sub_23110();
    sub_21423();
    switch (l_U409)
    {
        case 0:
        SETTIMERB( 0 );
        l_U435 = l_U436;
        l_U384 = 0;
        SET_OBJECT_VISIBLE( l_U166._fU0, 0 );
        SET_PLAYER_CONTROL( sub_1346(), 0 );
        if (l_U407 == 0)
        {
            sub_9417( 4 );
        }
        else
        {
            sub_9417( 5 );
        }
        SET_PED_ALPHA( sub_4076(), 255 );
        for ( I = 0; I < 2; I++ )
        {
            uVar2 = {sub_1958( 0.00000000, l_U412[I]._fU4 * 1.15000000, l_U412[I]._fU8 )};
            SET_OBJECT_COORDINATES( l_U425[I], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        }
        l_U475 = {sub_1958( l_U438[l_U436]._fU0 )};
        SET_CAM_POS( l_U434, l_U475._fU0, l_U475._fU4, l_U475._fU8 );
        CLEAR_HELP();
        CLEAR_PRINTS();
        if (l_U433)
        {
            PRINT_HELP_FOREVER( "AH_RULES_2" );
            l_U433 = 0;
        }
        if (l_U404[0] >= 7)
        {
            PRINT_NOW( "AH_P_WIN", 7500, 0 );
        }
        else if (l_U404[1] >= 7)
        {
            PRINT_NOW( "AH_P_LOSE", 7500, 0 );
        }
        else if (l_U407 == 1)
        {
            if (l_U411 == l_U410)
            {
                PRINT_WITH_NUMBER( "AH_P_SCORE", 2, 7500, 0 );
            }
            else if (l_U411 == l_U428[0])
            {
                PRINT_NOW( "AH_S_ARM", 7500, 0 );
            }
            else if (l_U411 == l_U428[1])
            {
                PRINT_NOW( "AH_S_HEN", 7500, 0 );
            };;;
        }
        else
        {
            PRINT_NOW( "AH_S_YOU", 7500, 0 );
        };;;
        uVar5 = sub_3656( 0, 2 );
        if ((l_U404[0] < 7) AND (l_U404[1] < 7))
        {
            sub_25578( uVar5, l_U407 );
        }
        else
        {
            sub_25916( uVar5, l_U407 );
        }
        if (NOT (IS_CHAR_INJURED( l_U411 )))
        {
            TASK_CLEAR_LOOK_AT( l_U411 );
            if (l_U407 == 0)
            {
                sub_26069( l_U411, 0, -1 );
            }
            else
            {
                sub_26069( l_U411, 1, -1 );
            }
        }
        TASK_CLEAR_LOOK_AT( sub_4076() );
        if (l_U407 == 0)
        {
            sub_26069( sub_4076(), 1, -1 );
        }
        else
        {
            sub_26069( sub_4076(), 0, -1 );
        }
        l_U409 = 1;
        break;
        case 1:
        l_U475._fU0 -= 0.00020000;
        SET_CAM_POS( l_U434, l_U475._fU0, l_U475._fU4, l_U475._fU8 );
        if (TIMERB() > 1000)
        {
            l_U408 = GET_SOUND_ID();
            if (l_U407 == 0)
            {
                if (l_U404[0] >= 7)
                {
                    PLAY_SOUND_FROM_OBJECT( l_U408, "AIR_HOCKEY_SCORING_PLAYER_WINS", l_U229 );
                }
                else
                {
                    PLAY_SOUND_FROM_OBJECT( l_U408, "AIR_HOCKEY_SCORING_PLAYER_SCORES", l_U229 );
                }
            }
            else if (l_U404[1] >= 7)
            {
                PLAY_SOUND_FROM_OBJECT( l_U408, "AIR_HOCKEY_SCORING_OPPONENT_WINS", l_U229 );
            }
            else
            {
                PLAY_SOUND_FROM_OBJECT( l_U408, "AIR_HOCKEY_SCORING_OPPONENT_SCORES", l_U229 );
            }
            l_U409 = 2;
        }
        break;
        case 2:
        l_U475._fU0 -= 0.00020000;
        SET_CAM_POS( l_U434, l_U475._fU0, l_U475._fU4, l_U475._fU8 );
        sub_27128( ref l_U195[0], TO_FLOAT( l_U404[0] * 45 ) );
        sub_27128( ref l_U195[1], TO_FLOAT( l_U404[0] * 45 ) );
        sub_27128( ref l_U212[0], TO_FLOAT( l_U404[1] * 45 ) );
        sub_27128( ref l_U212[1], TO_FLOAT( l_U404[1] * 45 ) );
        if (TIMERB() > 2000)
        {
            if (NOT (IS_CHAR_INJURED( l_U411 )))
            {
                if ((NOT (sub_27356( sub_4076() ))) AND (NOT (sub_27356( l_U411 ))))
                {
                    if (l_U408 != 0)
                    {
                        while (NOT (HAS_SOUND_FINISHED( l_U408 )))
                        {
                            WAIT( 0 );
                        }
                    }
                    l_U409 = 3;
                }
            }
        }
        break;
        case 3:
        if (l_U408 != 0)
        {
            RELEASE_SOUND_ID( l_U408 );
            l_U408 = 0;
        }
        CLEAR_HELP();
        CLEAR_PRINTS();
        if (l_U432)
        {
            GET_GAME_TIMER( ref iVar7 );
            if ((iVar7 - l_U358) >= 10000)
            {
                l_U432 = 0;
            }
        }
        if (l_U404[l_U407] >= 7)
        {
            l_U132 = 6;
        }
        else
        {
            l_U132 = 4;
            uVar5 = sub_3656( 0, 2 );
            if (l_U407 == 1)
            {
                l_U166._fU4 = {sub_11766( -0.00200000, 0.00200000 ), 0.30000000, 0.00000000};
                l_U353 = 0;
                l_U373 = 0.00000000;
            }
            else
            {
                l_U166._fU4 = {sub_11766( -0.00200000, 0.00200000 ), -0.30000000, 0.00000000};
                l_U353 = 1;
                l_U372 = sub_11766( -0.10000000, 0.10000000 );
                l_U373 = 250.00000000;
            }
            l_U141[0]._fU4 = {sub_11766( -0.00200000, 0.00200000 ), 0.70000000, 0.00000000};
            l_U141[0]._fU36 = {0, 0, 0};
            l_U141[1]._fU4 = {sub_11766( -0.00200000, 0.00200000 ), -0.70000000, 0.00000000};
            l_U141[1]._fU36 = {0, 0, 0};
            l_U166._fU36 = {0, 0, 0};
            sub_11984( ref l_U141[0], l_U141[0]._fU4 );
            sub_11984( ref l_U141[1], l_U141[1]._fU4 );
            sub_11984( ref l_U166, l_U166._fU4 );
            sub_9417( l_U435 );
            SET_OBJECT_VISIBLE( l_U166._fU0, 1 );
            l_U412[0]._fU0 = l_U141[0]._fU4._fU0;
            l_U412[1]._fU0 = l_U141[1]._fU4._fU0;
            GET_GAME_TIMER( ref l_U354 );
            GET_GAME_TIMER( ref l_U355 );
            l_U195[0]._fU28 = TO_FLOAT( l_U404[0] * 45 );
            l_U195[1]._fU28 = TO_FLOAT( l_U404[0] * 45 );
            l_U212[0]._fU28 = TO_FLOAT( l_U404[1] * 45 );
            l_U212[1]._fU28 = TO_FLOAT( l_U404[1] * 45 );
            SET_OBJECT_ROTATION( l_U195[0]._fU0, l_U195[0]._fU28, l_U195[0]._fU16._fU4, l_U195[0]._fU16._fU8 );
            SET_OBJECT_ROTATION( l_U195[1]._fU0, l_U195[1]._fU28, l_U195[1]._fU16._fU4, l_U195[1]._fU16._fU8 );
            SET_OBJECT_ROTATION( l_U212[0]._fU0, l_U212[0]._fU28, l_U212[0]._fU16._fU4, l_U212[0]._fU16._fU8 );
            SET_OBJECT_ROTATION( l_U212[1]._fU0, l_U212[1]._fU28, l_U212[1]._fU16._fU4, l_U212[1]._fU16._fU8 );
            sub_12759();
            sub_12614();
            SET_PLAYER_CONTROL( sub_1346(), 1 );
        }
        l_U409 = 0;
        break;
        case 4:
        if (sub_27356( sub_4076() ))
        {
            CLEAR_CHAR_TASKS( sub_4076() );
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U411 )))
        {
            if (sub_27356( l_U411 ))
            {
                CLEAR_CHAR_TASKS( l_U411 );
                WAIT( 0 );
            }
        }
        l_U409 = 3;
        break;
    }
    return;
}

int sub_24793()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_25578(int iParam0, int iParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = 1.00000000 * l_U166._fU28;
    fVar5 = 2.50000000 * l_U166._fU28;
    if (l_U411 == l_U410)
    {
        iParam0 = 0;
    }
    if (iParam0 == 0)
    {
        if (iParam0 == iParam1)
        {
            if (l_U352 < fVar4)
            {
                l_U133 = 4;
            }
            else if (l_U352 < fVar5)
            {
                l_U133 = 3;
            }
            else
            {
                l_U133 = 2;
            }
        }
        else if (l_U352 < fVar4)
        {
            l_U133 = 7;
        }
        else if (l_U352 < fVar5)
        {
            l_U133 = 6;
        }
        else
        {
            l_U133 = 5;
        };;;
    }
    else if (iParam0 == iParam1)
    {
        if (l_U352 < fVar4)
        {
            l_U133 = 17;
        }
        else if (l_U352 < fVar5)
        {
            l_U133 = 16;
        }
        else
        {
            l_U133 = 15;
        }
    }
    else if (l_U352 < fVar4)
    {
        l_U133 = 20;
    }
    else if (l_U352 < fVar5)
    {
        l_U133 = 19;
    }
    else
    {
        l_U133 = 18;
    };;;;
    return;
}

void sub_25916(int iParam0, int iParam1)
{
    if (l_U411 == l_U410)
    {
        iParam0 = 0;
    }
    if (iParam0 == 0)
    {
        if (iParam0 == iParam1)
        {
            l_U133 = 8;
        }
        else
        {
            l_U133 = 9;
        }
    }
    else if (iParam0 == iParam1)
    {
        l_U133 = 21;
    }
    else
    {
        l_U133 = 22;
    }
    return;
}

void sub_26069(unknown uParam0, boolean bParam1, int iParam2)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((l_U404[0] == 7) || (l_U404[1] == 7))
        {
            if (bParam1)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "celeb", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            else
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_curse_02", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
        }
        else if (iParam2 == -1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iParam2 );
        }
        switch (iParam2)
        {
            case 0:
            if (bParam1)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_celeb", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            else
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_curse_02", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            break;
            case 1:
            if (bParam1)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_celeb_02", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            else
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_curse_02", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            break;
            case 2:
            if (bParam1)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_celeb_03", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            else
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_curse_03", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            break;
        }
    }
    return;
}

void sub_27128(int iParam0, float fParam1)
{
    if (iParam0->_fU28 != fParam1)
    {
        iParam0->_fU28 += 3;
        if (iParam0->_fU28 >= 360)
        {
            iParam0->_fU28 = 0;
        }
        SET_OBJECT_ROTATION( iParam0->_fU0, iParam0->_fU28, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8 );
    }
    return;
}

int sub_27356(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((((((((NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_celeb" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_curse" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_celeb_02" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_curse_02" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_celeb_03" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_curse_03" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "celeb" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "curse" ))))
        {
            return 0;
        }
    }
    return 1;
}

void sub_28818(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U43030[uParam0]._fU0)
    {
        iVar3 = g_U43030[uParam0]._fU8;
        if (iVar3 > 0)
        {
            sub_28887( 2, iVar3 );
            g_U43030[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_28887(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_29057( 0 );
    return;
}

void sub_29057(boolean bParam0)
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
        sub_29302();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_29302()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_29466(unknown uParam0)
{
    sub_789();
    sub_1905( sub_11766( -0.00200000, 0.00200000 ), 0.70000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U119, ref l_U141[0] );
    sub_1905( sub_11766( -0.00200000, 0.00200000 ), -0.70000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U120, ref l_U141[1] );
    switch (uParam0)
    {
        case 0:
        sub_1905( sub_11766( -0.00200000, 0.00200000 ), 0.30000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U118, ref l_U166 );
        break;
        case 1:
        sub_1905( sub_11766( -0.00200000, 0.00200000 ), -0.30000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U118, ref l_U166 );
        break;
        default:
        sub_1905( sub_11766( -0.00200000, 0.00200000 ), 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U118, ref l_U166 );
        break;
    }
    sub_11984( ref l_U141[0], l_U141[0]._fU4 );
    sub_11984( ref l_U141[1], l_U141[1]._fU4 );
    sub_11984( ref l_U166, l_U166._fU4 );
    return;
}

void sub_29993()
{
    int I;

    if (l_U431 > 0)
    {
        for ( I = 0; I < l_U428; I++ )
        {
            if (((l_U428[I] != nil) AND (NOT (IS_CHAR_INJURED( l_U428[I] )))) AND (l_U428[I] != l_U411))
            {
                if (sub_23272( l_U428[I] ))
                {
                    CLEAR_CHAR_TASKS( l_U428[I] );
                }
            }
        }
    }
    return;
}

void sub_30419()
{
    int I;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            sub_12614();
            WAIT( 0 );
        }
    }
    sub_29466( -1 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    REMOVE_ANIMS( "MINI_AIR" );
    BLOCK_PED_WEAPON_SWITCHING( sub_4076(), 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4076(), 0 );
    if (NOT (IS_CHAR_INJURED( l_U411 )))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U411, 0 );
    }
    sub_30612();
    sub_30753();
    sub_30989();
    if (NOT (sub_13763( l_U431 )))
    {
        I = 0;
        for ( I = 0; I < l_U428; I++ )
        {
            if (l_U428[I] != nil)
            {
                if (DOES_CHAR_EXIST( l_U428[I] ))
                {
                    DELETE_CHAR( ref l_U428[I] );
                }
            }
        }
    }
    sub_9417( l_U437 );
    sub_31490();
    sub_31587();
    l_U340 = 0;
    if (NOT (IS_CHAR_INJURED( sub_4076() )))
    {
        if (l_U341)
        {
            STOP_PED_SPEAKING( sub_4076(), 1 );
            l_U341 = 0;
        }
    }
    CLEAR_HELP();
    CLEAR_PRINTS();
    SET_PLAYER_CONTROL( sub_1346(), 1 );
    if (NOT IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
    }
    return;
}

void sub_30612()
{
    DETACH_PED( sub_4076(), 1 );
    DELETE_OBJECT( ref l_U425[0] );
    SET_PED_ALPHA( sub_4076(), 255 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4076() );
    FREEZE_CHAR_POSITION( sub_4076(), 0 );
    SET_PLAYER_CONTROL( sub_1346(), 1 );
    SET_CHAR_HEADING( sub_4076(), l_U419[0] );
    SET_CAM_BEHIND_PED( sub_4076() );
    SET_GAME_CAM_HEADING( 0.00000000 );
    return;
}

void sub_30753()
{
    int I;

    if (l_U431 > 0)
    {
        for ( I = 0; I < l_U428; I++ )
        {
            if (((l_U428[I] != nil) AND (NOT (IS_CHAR_INJURED( l_U428[I] )))) AND (l_U428[I] != l_U411))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U428[I] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U428[I], 0 );
                FREEZE_CHAR_POSITION( l_U428[I], 0 );
                if (NOT (IS_PED_IN_GROUP( l_U428[I] )))
                {
                    SET_GROUP_MEMBER( sub_30913(), l_U428[I] );
                }
            }
        }
    }
    return;
}

void sub_30913()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_30989()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_CHAR_INJURED( l_U411 )))
    {
        DETACH_PED( l_U411, 1 );
    }
    DELETE_OBJECT( ref l_U425[1] );
    if (NOT (IS_CHAR_INJURED( l_U411 )))
    {
        uVar7 = {sub_1958( 0, 0, 0 )};
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U229, 1.50000000, 0, 0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        SET_CHAR_HEADING( l_U411, l_U419[1] );
        GET_HEADING_FROM_VECTOR_2D( uVar7._fU0 - uVar3._fU0, uVar7._fU4 - uVar3._fU4, ref uVar6 );
        FREEZE_CHAR_POSITION( l_U411, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U411, 0 );
        if (l_U411 == l_U410)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U411 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_LOOK_AT_CHAR( 0, sub_4076(), 15000, 0 );
            TASK_STAND_STILL( 0, 2500 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, -1, -1 );
            TASK_STAND_GUARD( 0, uVar3, uVar6, 1, 0, -2 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U411, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
        }
        else
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U411 );
            if (NOT (IS_PED_IN_GROUP( l_U411 )))
            {
                SET_GROUP_MEMBER( sub_30913(), l_U411 );
            }
        }
    }
    l_U411 = nil;
    return;
}

void sub_31490()
{
    unknown uVar2;

    BEGIN_CAM_COMMANDS( ref uVar2 );
    if (DOES_CAM_EXIST( l_U434 ))
    {
        SET_CAM_ACTIVE( l_U434, 0 );
        SET_CAM_PROPAGATE( l_U434, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U434 );
    }
    END_CAM_COMMANDS( ref uVar2 );
    return;
}

void sub_31587()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12380 = 0;
    if (g_U28807._fU0[0] == 34)
    {
        if (sub_11285())
        {
            g_U12379 = 0;
        }
        sub_31653();
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU40 == 8)
        {
            g_U28807._fU40 = 3;
        }
    }
    else if (NOT (g_U28807._fU24 == 16))
    {
        if (g_U28807._fU36 == 8)
        {
            g_U28807._fU36 = 3;
        }
    }
    else
    {
        return;
    }
    g_U28807._fU52 = 1;
    return;
}

void sub_31653()
{
    g_U28805._fU4 = 1;
    return;
}
