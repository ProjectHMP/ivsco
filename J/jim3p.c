void main()
{
    char[16] cVar2;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    unknown uVar15;
    int iVar16;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U20 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U355 = 0;
    l_U356 = 0;
    l_U440 = 0;
    l_U441 = 0;
    sub_330( "\nStarting jim3p!" );
    THIS_SCRIPT_SHOULD_BE_SAVED();
    sub_330( "\nStarting jim3p!" );
    array(ref uVar7._fU0._fU0, 3);
    ref uVar7._fU0;
    ref uVar7;
    iVar14 = 8;
    sub_446( 0, sub_395(), "JOHNNY", 0 );
    l_U355 = 0;
    if (sub_604( iVar14 ))
    {
        sub_855( iVar14, 1, 10, -1, -1, -1 );
        sub_330( "\n First time running script. just randomized missions" );
        l_U356 = 1;
    }
    else
    {
        sub_330( "\n scripts run before" );
        if (sub_1731( iVar14, 10 ))
        {
            TERMINATE_THIS_SCRIPT();
        }
        l_U356 = 0;
    }
    while (true)
    {
        WAIT( 0 );
        if ((g_U12303) AND (l_U355 != 2))
        {
            l_U355 = 2;
        }
        switch (l_U355)
        {
            case 0:
            sub_1915();
            if ((sub_2599( iVar14 )) AND (l_U441 == 0))
            {
                if (NOT (IS_CHAR_INJURED( sub_395() )))
                {
                    if (NOT sub_6269())
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U357 );
                        sub_330( "\n SOmethings fucked 1" );
                        if (l_U357 == 0)
                        {
                            sub_6375();
                            l_U355 = 3;
                            sub_330( "\n SOmethings fucked 2" );
                        }
                        else if (l_U357 == 1)
                        {
                            iVar6 = 0;
                            sub_6895( ref l_U358, "E1J3_RACE", ref iVar6 );
                            sub_7013( ref l_U358, ref iVar6 );
                            sub_7057();
                            l_U355 = 3;
                            sub_330( "\n SOmethings fucked3" );
                        }
                    }
                    else
                    {
                        sub_330( "\n STARTING JOB! ALL SYSTEMS GO!" );
                        uVar15 = sub_7521( iVar14 );
                        iVar16 = sub_7626( iVar14, 1, uVar15 );
                        iVar6 = 0;
                        sub_6895( ref l_U358, "E1J3_HELLO", ref iVar6 );
                        sub_6895( ref l_U358, "E1J3_RACE", ref iVar6 );
                        if (l_U356)
                        {
                            sub_6895( ref l_U358, "E1J3_RESP", ref iVar6 );
                        }
                        else if (sub_7761( 8 ))
                        {
                            sub_6895( ref l_U358, "E1J3_GOOD", ref iVar6 );
                        }
                        else
                        {
                            sub_6895( ref l_U358, "E1J3_FAILD", ref iVar6 );
                        }
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref g_U38759 );
                        if (iVar16 == 0)
                        {
                            StrCopy( ref cVar2, "E1J3_DROP3", 16 );
                        }
                        else if (iVar16 == 1)
                        {
                            StrCopy( ref cVar2, "E1J3_DROP1", 16 );
                        }
                        else if (iVar16 == 2)
                        {
                            StrCopy( ref cVar2, "E1J3_DROP2", 16 );
                        }
                        else if (iVar16 == 3)
                        {
                            StrCopy( ref cVar2, "E1J3_DROP4", 16 );
                        }
                        else if (iVar16 == 4)
                        {
                            StrCopy( ref cVar2, "E1J3_DROP10", 16 );
                        }
                        else if (iVar16 == 5)
                        {
                            StrCopy( ref cVar2, "E1J3_DROP9", 16 );
                        }
                        else if (iVar16 == 6)
                        {
                            StrCopy( ref cVar2, "E1J3_DROP5", 16 );
                        }
                        else if (iVar16 == 7)
                        {
                            StrCopy( ref cVar2, "E1J3_DROP6", 16 );
                        }
                        else if (iVar16 == 8)
                        {
                            StrCopy( ref cVar2, "E1J3_DROP7", 16 );
                        }
                        else if (iVar16 == 9)
                        {
                            StrCopy( ref cVar2, "E1J3_DROP8", 16 );
                        };;;;;;;;;;
                        g_U38760 = iVar16;
                        sub_6895( ref l_U358, ref cVar2, ref iVar6 );
                        sub_6895( ref l_U358, "E1J3_COOL", ref iVar6 );
                        l_U355 = 4;
                        l_U440 = 1;
                    }
                }
            }
            break;
            case 4:
            sub_330( "HERE5" );
            sub_7013( ref l_U358, ref iVar6 );
            sub_7057();
            break;
            case 1:
            sub_330( "HERE6" );
            l_U356 = 0;
            if ((NOT g_U12303) AND (NOT g_U94._fU580))
            {
                sub_8317();
            }
            else
            {
                l_U355 = 0;
                l_U440 = 0;
            }
            if (l_U440)
            {
                REQUEST_SCRIPT( "jim3m" );
                while (NOT (HAS_SCRIPT_LOADED( "jim3m" )))
                {
                    WAIT( 0 );
                    REQUEST_SCRIPT( "jim3m" );
                }
                sub_11038( iVar14 );
                START_NEW_SCRIPT( "jim3m", 8192 );
                MARK_SCRIPT_AS_NO_LONGER_NEEDED( "jim3m" );
                l_U440 = 0;
                l_U355 = 2;
            }
            break;
            case 2:
            if (NOT g_U12303)
            {
                if (sub_1731( iVar14, 10 ))
                {
                    sub_11142();
                    TERMINATE_THIS_SCRIPT();
                }
                sub_15457( iVar14 );
                l_U355 = 0;
            }
            break;
            case 3:
            sub_330( "HERE4" );
            if (sub_6533( 0 ))
            {
                l_U355 = 0;
            }
            break;
        }
    }
    return;
}

void sub_330(unknown uParam0)
{
    return;
}

void sub_395()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_446(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_530( "\n PED NUMBER ", uParam0 );
    sub_570( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_530(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_570(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_604(unknown uParam0)
{
    if (g_U15862[uParam0]._fU228._fU4)
    {
        sub_637( uParam0 );
        g_U15862[uParam0]._fU228._fU4 = 0;
        return 1;
    }
    return 0;
}

void sub_637(unknown uParam0)
{
    int I;
    int J;

    for ( I = 0; I <= 14; I++ )
    {
        g_U15862[uParam0]._fU228._fU12[I] = 0;
    }
    for ( I = 0; I <= 2; I++ )
    {
        for ( J = 0; J <= 14; J++ )
        {
            g_U15862[uParam0]._fU228._fU76[I]._fU0[J] = -1;
        }
    }
    g_U15862[uParam0]._fU228._fU0 = 1;
    g_U15862[uParam0]._fU228._fU8 = 0;
    return;
}

void sub_855(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
    int I;
    int J;
    unknown uVar10;
    unknown uVar11;

    if (g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[0] == -1)
    {
        for ( I = 0; I <= (iParam2 - 1); I++ )
        {
            g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I] = I;
        }
        for ( I = iParam2 - 1; I >= 1; I += -1 )
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar11 );
            uVar10 = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I];
            g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I] = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[uVar11];
            g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[uVar11] = uVar10;
        }
        if (iParam5 != -1)
        {
            for ( I = 0; I <= (iParam2 - 2); I++ )
            {
                if ((g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I] == iParam3) || (g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I] == iParam4))
                {
                    for ( J = I + 1; J <= (I + iParam5); J++ )
                    {
                        if (J < iParam2)
                        {
                            if ((g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[J] == iParam3) || (g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[J] == iParam4))
                            {
                                uVar10 = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[0];
                                g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[0] = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I];
                                g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[I] = uVar10;
                                uVar10 = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[iParam2 - 1];
                                g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[iParam2 - 1] = g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[J];
                                g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[J] = uVar10;
                                return;
                            }
                        }
                    }
                    return;
                }
            }
        }
    }
    return;
}

int sub_1731(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15862[uParam0]._fU228._fU12[I] != 1)
        {
            return 0;
        }
    }
    return 1;
}

void sub_1915()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    vector vVar11;
    vector vVar14;
    vector vVar17;
    vector vVar20;
    vector vVar23;
    vector vVar26;
    vector vVar29;

    vVar2 = {-1238.55400000, 1120.74700000, 18.46520000};
    vVar5 = {1144.89000000, 1662.02700000, 15.71590000};
    vVar8 = {1371.44000000, 96.32150000, 30.07270000};
    vVar11 = {-759.79630000, 459.64070000, 20.48337000};
    vVar14 = {57.74930000, -424.84870000, 13.78470000};
    vVar17 = {-1291.08800000, 479.17660000, 50.16230000};
    vVar20 = {-1068.04500000, 1467.97300000, 23.78680000};
    vVar23 = {1032.38600000, -766.10640000, 4.35850000};
    vVar26 = {-189.90790000, 946.98730000, 10.11440000};
    vVar29 = {667.22380000, 618.73720000, 19.51230000};
    if (NOT (IS_CHAR_DEAD( sub_395() )))
    {
        if ((((((((((LOCATE_CHAR_ANY_MEANS_3D( sub_395(), vVar2.x, vVar2.y, vVar2.z, 100.00000000, 100.00000000, 50.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_395(), vVar5.x, vVar5.y, vVar5.z, 100.00000000, 100.00000000, 50.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_395(), vVar8.x, vVar8.y, vVar8.z, 100.00000000, 100.00000000, 50.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_395(), vVar11.x, vVar11.y, vVar11.z, 100.00000000, 100.00000000, 50.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_395(), vVar14.x, vVar14.y, vVar14.z, 100.00000000, 100.00000000, 50.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_395(), vVar17.x, vVar17.y, vVar17.z, 100.00000000, 100.00000000, 50.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_395(), vVar20.x, vVar20.y, vVar20.z, 100.00000000, 100.00000000, 50.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_395(), vVar23.x, vVar23.y, vVar23.z, 100.00000000, 100.00000000, 50.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_395(), vVar26.x, vVar26.y, vVar26.z, 100.00000000, 100.00000000, 50.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_395(), vVar29.x, vVar29.y, vVar29.z, 100.00000000, 100.00000000, 50.00000000, 0 )))
        {
            l_U441 = 1;
            sub_330( "Cant call" );
            if (sub_2599( 8 ))
            {
                sub_3176( "E1J3_NONE", "E1J3AUD", 1 );
            }
        }
        else
        {
            l_U441 = 0;
            sub_330( "Can call" );
        }
    }
    return;
}

int sub_2599(unknown uParam0)
{
    if (g_U15862[uParam0]._fU4 == 1)
    {
        if (g_U15862[uParam0]._fU8[1]._fU0[5] == 1)
        {
            g_U15862[uParam0]._fU4 = 0;
            g_U15862[uParam0]._fU8[1]._fU0[5] = 0;
            if (sub_2692())
            {
                return 0;
            }
            if (sub_2822())
            {
                return 0;
            }
            sub_3084();
            return 1;
        }
    }
    return 0;
}

int sub_2692()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Brian" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Dave" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc2" )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_2822()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int I;
    int iVar10;

    fVar8 = 0.00000000;
    if (IS_CHAR_DEAD( sub_395() ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_395(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    I = 0;
    for ( I = 0; I < 9; I++ )
    {
        if ((g_U18635[I]._fU20) || (g_U18635[I]._fU24))
        {
            return 1;
        }
        if (g_U18635[I]._fU0)
        {
            iVar10 = g_U18635[I]._fU180;
            if (NOT (iVar10 == 16))
            {
                uVar2 = {g_U10789[iVar10]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref fVar8 );
                if (fVar8 < 500.00000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3084()
{
    g_U814 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

int sub_3176(unknown uParam0, unknown uParam1, boolean bParam2)
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
            return sub_3284( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U94._fU368) == 1)
        {
            StrCopy( ref g_U94._fU224[0], uParam1, 16 );
            StrCopy( ref g_U94._fU224[1], uParam0, 16 );
            sub_5197( uVar23, ref g_U94._fU176 );
            g_U94._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_3284(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_330( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_330( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3450() )))
    {
        sub_330( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_395() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_395() ))))
    {
        sub_330( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_330( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_3825()) AND (NOT bParam11))
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
                sub_330( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_3825()) AND (NOT bParam11))
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
    sub_5197( uParam0, ref g_U94._fU176 );
    sub_5593( ref g_U94._fU160 );
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
        sub_570( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_3450()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_3825()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_3882())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_3882()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3450() )))
    {
        sub_330( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_330( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_330( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_330( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3450() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_395() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_395(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_330( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_395() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_330( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_330( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3450() )))
    {
        sub_330( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_5197(unknown uParam0, unknown uParam1)
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

void sub_5593(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

int sub_6269()
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

void sub_6375()
{
    l_U439 = 1;
    if (sub_3176( ref g_U12306[1]._fU92, ref g_U12306[1]._fU76, 0 ))
    {
        while (l_U439)
        {
            WAIT( 0 );
            switch (sub_6445())
            {
                case 2:
                l_U439 = 0;
                break;
                default:
                if (sub_6533( 0 ))
                {
                    l_U439 = 0;
                }
                break;
            }
        }
    }
    return;
}

int sub_6445()
{
    if (g_U94._fU60 != -1)
    {
        return g_U15862[g_U94._fU60]._fU196._fU24;
    }
    return 6;
}

int sub_6533(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_395(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_330( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_6895(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam2^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam2^)], uParam1, 16 );
        (uParam2^)++;
    }
    else
    {
        SCRIPT_ASSERT( "ADD_SPEECH_LABEL - increase the size of your array" );
    }
    return;
}

void sub_7013(unknown uParam0, unknown uParam1)
{
    if ((uParam1^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam1^)], "END", 16 );
    }
    return;
}

void sub_7057()
{
    l_U439 = 1;
    if (sub_7087( ref l_U358, "E1J3AUD", 1 ))
    {
        while (l_U439)
        {
            WAIT( 0 );
            sub_7260();
            switch (sub_6445())
            {
                case 2:
                sub_330( "HERE1" );
                if (l_U355 == 4)
                {
                    sub_330( "HERE2" );
                    l_U355 = 3;
                }
                l_U439 = 0;
                break;
                default:
                if (sub_6533( 0 ))
                {
                    sub_330( "HERE3" );
                    if (l_U355 == 4)
                    {
                        l_U355 = 1;
                    }
                    l_U439 = 0;
                }
                break;
            }
        }
    }
    return;
}

int sub_7087(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U94._fU60;
    if (bParam2)
    {
        return sub_3284( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U94._fU368)
    {
        StrCopy( ref g_U94._fU224[0], uParam1, 16 );
        g_U94._fU224[1] = {(uParam0^)[0]};
        sub_5197( uVar14, ref g_U94._fU176 );
        g_U94._fU368 = 1;
        return 1;
    }
    return 0;
}

void sub_7260()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U20912 = iVar2 + 2000;
    return;
}

int sub_7521(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 14; Result++ )
    {
        switch (g_U15862[uParam0]._fU228._fU12[Result])
        {
            case 2:
            case 0:
            return Result;
            break;
        }
    }
    return -1;
}

void sub_7626(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return g_U15862[uParam0]._fU228._fU76[uParam1]._fU0[uParam2];
}

int sub_7761(unknown uParam0)
{
    if (g_U15862[uParam0]._fU228._fU0 == 1)
    {
        return 1;
    }
    return 0;
}

void sub_8317()
{
    sub_8326();
    return;
}

void sub_8326()
{
    int iVar2;

    iVar2 = 8;
    sub_8340( iVar2 );
    return;
}

void sub_8340(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Start_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_8492( "Flow_Start_Proc_Subpart: Proc Mission not loaded" );
    }
    sub_8627();
    CLEAR_BRIEF();
    g_U14838[uParam0]._fU160._fU96 = 1;
    g_U12303 = 1;
    g_U12306[uParam0]._fU28 = 1;
    sub_9499( uParam0 );
    uVar3 = sub_10621( uParam0, g_U14838[uParam0]._fU160._fU76 );
    sub_10809( uVar3 );
    sub_10887();
    return;
}

void sub_8492(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_8627()
{
    sub_8636();
    sub_8781( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_8855();
    return;
}

void sub_8636()
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

void sub_8781(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_8855()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_8893( 1, g_U572[I] )) == 0)
        {
            sub_9144( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_9322())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_8893(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_9144(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_9229( g_U572 - 1 );
    return;
}

void sub_9229(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_9322()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_8893( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_9499(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    StrCopy( ref uVar3, 4, g_U14838[uParam0]._fU160._fU44, 8);
    uVar7 = {sub_9535( ref uVar3, uParam0 )};
    sub_10438( uVar7 );
    return;
}

void sub_9535(unknown uParam0, unknown uParam1)
{
    char[16] Result;

    StrCopy( ref Result, uParam0, 16 );
    PRINTSTRING( "-----> Unappended Mission Identifier: " );
    PRINTSTRING( ref Result );
    PRINTNL();
    switch (uParam1)
    {
        case 2:
        switch (g_U38705)
        {
            case 0:
            ConcatString(ref Result, "_A", 16);
            break;
            case 1:
            ConcatString(ref Result, "_B", 16);
            break;
            case 2:
            ConcatString(ref Result, "_C", 16);
            break;
            case 3:
            ConcatString(ref Result, "_D", 16);
            break;
            case 4:
            ConcatString(ref Result, "_E", 16);
            break;
            default:
            PRINTSTRING( "----------------> g_whichStubbsMission value = " );
            PRINTINT( g_U38705 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS Stubbs Oddjobs Proc subpart identifier error" );
        }
        break;
        case 8:
        switch (g_U38760)
        {
            case 0:
            ConcatString(ref Result, "_A", 16);
            break;
            case 1:
            ConcatString(ref Result, "_B", 16);
            break;
            case 2:
            ConcatString(ref Result, "_C", 16);
            break;
            case 3:
            ConcatString(ref Result, "_D", 16);
            break;
            case 4:
            ConcatString(ref Result, "_E", 16);
            break;
            case 5:
            ConcatString(ref Result, "_F", 16);
            break;
            case 6:
            ConcatString(ref Result, "_G", 16);
            break;
            case 7:
            ConcatString(ref Result, "_H", 16);
            break;
            case 8:
            ConcatString(ref Result, "_I", 16);
            break;
            case 9:
            ConcatString(ref Result, "_J", 16);
            break;
            default:
            PRINTSTRING( "----------------> GLOBAL_MISSION_NAME_INDEX value = " );
            PRINTINT( g_U38760 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS Angus I Want One of Those Proc subpart identifier error" );
        }
        break;
    }
    PRINTSTRING( "-----> Appended Mission Identifier: " );
    PRINTSTRING( ref Result );
    PRINTNL();
    return Result;
}

void sub_10438(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_10621(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_10695( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_10695(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_10809(unknown uParam0)
{
    g_U10986 = g_U20913[uParam0]._fU8;
    if (g_U10986 >= 50000)
    {
        g_U10986 = sub_10855( g_U10986 );
    }
    return;
}

void sub_10855(unknown Result)
{
    return Result;
}

void sub_10887()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_11038(unknown uParam0)
{
    g_U94._fU68 = uParam0;
    return;
}

void sub_11142()
{
    sub_11151();
    return;
}

void sub_11151()
{
    int iVar2;
    int iVar3;

    iVar2 = 8;
    iVar3 = 8;
    sub_11182( iVar2, iVar3, "Contact_9" );
    g_U15728[31] = 1;
    sub_14709( 9, 0 );
    return;
}

void sub_11182(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    sub_11197( uParam0, uParam1, uParam2 );
    uVar5 = g_U14838[uParam0]._fU160._fU76;
    g_U12306[uParam0]._fU24 = uVar5;
    if (g_U14838[uParam0]._fU160._fU8)
    {
        g_U15862[uParam1]._fU8[0]._fU0[5] = 0;
    }
    g_U14838[uParam0]._fU160._fU108._fU0 = 0;
    return;
}

void sub_11197(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[64] cVar5;
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;

    StrCopy( ref cVar5, "", 64 );
    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc not setup", 64);
        sub_11341( ref cVar5 );
        return;
    }
    if (g_U14838[uParam0]._fU160._fU76 == -1)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc ID not setup", 64);
        sub_11341( ref cVar5 );
        return;
    }
    sub_11626( uParam0 );
    iVar21 = -1;
    iVar22 = -1;
    iVar23 = -1;
    if (sub_12301( uParam0, ref iVar21, ref iVar22, ref iVar23 ))
    {
        sub_12335( iVar21, uParam1, iVar22, iVar23 );
    }
    else
    {
        iVar24 = -1;
        if (sub_14410( uParam0, ref iVar24 ))
        {
            sub_14487( iVar24, 60000, 60000 );
        }
    }
    return;
}

void sub_11341(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_11626(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 2;
    switch (uParam0)
    {
        case 2:
        iVar3 = 1;
        break;
        case 8:
        iVar3 = 0;
        break;
        default: return;
    }
    if (iVar3 == 2)
    {
        return;
    }
    iVar4 = 0;
    if (NOT g_U38775[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U38775[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_11754( 1, iVar4 );
            g_U38775[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_11754(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_11924( 0 );
    return;
}

void sub_11924(boolean bParam0)
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
        sub_12169();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_12169()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

int sub_12301(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return 0;
}

void sub_12335(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 6;
    sub_12360( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_12360(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 19;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_12472( uParam1, uParam2 );
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
    sub_14181( iParam0, iParam3 );
    return;
}

void sub_12472(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_12495( uParam0 );
    sub_12742( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_13086( ref uVar4, 1 );
    sub_13114( ref uVar4, 0 );
    sub_13142( ref uVar4, 2 );
    sub_13172( ref uVar4 );
    return;
}

int sub_12495(unknown uParam0)
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
    sub_10695( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_12742(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_12764( uParam0, 0, iParam4 + 0 );
    sub_12764( uParam1, 1, iParam4 + 0 );
    sub_12764( uParam2, 2, iParam4 + 0 );
    sub_12764( uParam3, 3, iParam4 + 0 );
    sub_12764( 0, 4, iParam4 + 0 );
    sub_12764( 1, 5, iParam4 + 0 );
    sub_12764( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_12764(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_13086(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_13114(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_13142(int iParam0, unknown uParam1)
{
    sub_12764( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_13172(int iParam0)
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
        if (NOT sub_13242())
        {
            sub_9144( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_13369( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_9144( iVar9 );
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
                ConcatString(ref cVar5, sub_8893( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_8893( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_13242()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_8893( 1, g_U572[I] )) != 0) AND (g_U572[I]._fU20))
        {
            sub_9144( I );
            return 1;
        }
    }
    return 0;
}

int sub_13369(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_13434( uParam0, g_U572[Result] ))
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

int sub_13434(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_8893( 0, uParam0 );
        if (iVar14 == (sub_8893( 0, uParam6 )))
        {
            iVar15 = sub_8893( 3, uParam0 );
            if (iVar15 == (sub_8893( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_14181(unknown uParam0, int iParam1)
{
    g_U38472._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_14220( iParam1 ))
    {
        g_U38472._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_14220(int iParam0)
{
    int iVar3;

    iVar3 = sub_14229();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_14284();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_14229()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_14284()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_14410(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 2:
        (uParam1^) = 2;
        return 1;
        case 8:
        (uParam1^) = 3;
        return 1;
    }
    return 0;
}

void sub_14487(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15792[uParam0]._fU0 = 1;
    g_U15792[uParam0]._fU4 = iVar5 + iParam1;
    g_U15792[uParam0]._fU8 = uParam2;
    g_U15792[uParam0]._fU12 = 0;
    g_U15792[uParam0]._fU16 = 0;
    return;
}

void sub_14709(unknown uParam0, int iParam1)
{
    if (iParam1 < g_U1551[uParam0]._fU316)
    {
        if (g_U1551[uParam0]._fU184[iParam1] == 0)
        {
            sub_14802( ref g_U1551[uParam0]._fU204[iParam1], g_U1551[uParam0]._fU400, 0, 0 );
            g_U1551[uParam0]._fU184[iParam1] = 1;
        }
    }
    return;
}

void sub_14802(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_14855( iParam0, uParam1, uParam2 );
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
        sub_14987( iParam0 + 0 );
    }
    return;
}

void sub_14855(int iParam0, int iParam1, int iParam2)
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
        sub_14987( iParam0 + 0 );
    }
    return;
}

void sub_14987(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_15018( iParam0->_fU4 )))
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

int sub_15018(unknown uParam0)
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

void sub_15457(int iParam0)
{
    if (g_U94._fU68 == iParam0)
    {
        g_U94._fU68 = -1;
    }
    return;
}