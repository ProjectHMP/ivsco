void main()
{
    l_U4 = 0;
    l_U7 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U14 = 45;
    l_U15 = 0.00000000;
    l_U16 = -3.00000000;
    l_U17 = -3.00000000;
    l_U18 = 0.00000000;
    l_U19 = 0.00000000;
    l_U20 = 0.20000000;
    l_U21 = 65491;
    l_U22 = 45;
    l_U23 = 0;
    l_U24 = 0.00000000;
    l_U28 = 0.00000000;
    l_U29 = 0.35000000;
    l_U30 = 7.50000000;
    l_U31 = -7.50000000;
    l_U59 = 0;
    l_U60 = 0;
    l_U61 = 0;
    l_U62 = 0;
    l_U63 = 0;
    l_U64 = 0;
    l_U65 = 0.00000000;
    l_U66 = 0;
    l_U67 = 0;
    l_U68 = 1;
    l_U69 = 0;
    l_U70 = 2.20000000;
    l_U71 = 0;
    l_U72 = 0;
    l_U74 = 0;
    l_U75 = 0;
    l_U80 = 0;
    l_U81 = 1;
    l_U82 = 0;
    l_U87 = -1;
    l_U88 = "CRADLE_LOOP";
    l_U117 = 2;
    l_U124 = 0;
    l_U134 = 0;
    l_U135 = 0;
    l_U137 = 0;
    l_U138 = 0;
    l_U139 = 0;
    l_U140 = {-0.50000000, 0.00000000, 0.29000000};
    l_U143 = {0.50000000, 0.00000000, 0.29000000};
    l_U146 = 3;
    l_U147 = 0;
    l_U148 = 0;
    l_U149 = 0;
    l_U150 = 0;
    l_U160 = 1;
    l_U161 = 0;
    l_U165 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_441();
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (IS_PLAYER_PLAYING( sub_836() ))
            {
                switch (l_U150)
                {
                    case 0:
                    sub_1022( l_U167 );
                    break;
                    case 1:
                    if (DOES_OBJECT_EXIST( l_U158 ))
                    {
                        GET_PLAYER_GROUP( sub_836(), ref l_U162 );
                        GET_GROUP_SIZE( l_U162, ref l_U163, ref l_U164 );
                        if (l_U164 == 0)
                        {
                            if (NOT g_U9166)
                            {
                                l_U161 = sub_1534( l_U158, ref l_U159, l_U154._fU8, l_U151._fU8, "MISSLIFT", 0 );
                                if (l_U161)
                                {
                                    sub_474( "bScopeIsOpen = TRUE", "\n" );
                                }
                            }
                        }
                    }
                    break;
                }
            }
            else
            {
                sub_441();
            }
        }
        else
        {
            sub_441();
        }
    }
    return;
}

void sub_441()
{
    sub_474( "AMBIENT_CLEANUP()", "\n" );
    if (NOT sub_491())
    {
        g_U9166 = 0;
    }
    sub_566( 2, "WClift_01" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_474(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_491()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Playboy3" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_566(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((g_U9172 == iParam0) AND (l_U3))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_787();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_836(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_787()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_836()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1022(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U151 = {uParam0._fU4[0]};
    l_U154 = {uParam0._fU4[1]};
    l_U157 = uParam0._fU68[0];
    REQUEST_MODEL( 1289046123 );
    REQUEST_ANIMS( "MISSLIFT" );
    while (NOT (HAS_MODEL_LOADED( 1289046123 )))
    {
        WAIT( 0 );
    }
    l_U166 = VDIST( l_U151, 3.35950000, -747.91000000, 5.93000000 );
    if (l_U166 < 5.00000000)
    {
        l_U165 = 1;
    }
    if ((sub_491()) AND (l_U165 == 1))
    {
        CREATE_OBJECT_NO_OFFSET( 1289046123, l_U151._fU0, l_U151._fU4, l_U151._fU8, ref g_U9165, 1 );
        SET_OBJECT_HEADING( g_U9165, l_U157 );
        SET_OBJECT_PROOFS( g_U9165, 1, 1, 1, 1, 1 );
        l_U158 = g_U9165;
    }
    else
    {
        CREATE_OBJECT_NO_OFFSET( 1289046123, l_U151._fU0, l_U151._fU4, l_U151._fU8, ref l_U158, 1 );
        SET_OBJECT_HEADING( l_U158, l_U157 );
        SET_OBJECT_PROOFS( l_U158, 1, 1, 1, 1, 1 );
    }
    while (NOT (HAVE_ANIMS_LOADED( "MISSLIFT" )))
    {
        WAIT( 0 );
    }
    l_U150 = 1;
    return;
}

void sub_1534(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector vVar8;
    unknown uVar11;

    if (NOT l_U10)
    {
        l_U8 = GET_SOUND_ID();
        l_U10 = 1;
    }
    vVar8 = {0.00000000, 0.00000000, 0.29000000};
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (l_U139)
        {
            sub_1617( uParam4, uParam1, uParam5, uParam0 );
        }
        else
        {
            sub_2288( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
            sub_3343( uParam0, uParam3, uParam2 );
            if (NOT (IS_PLAYER_TARGETTING_ANYTHING( sub_836() )))
            {
                sub_3642( uParam0 );
            }
            if (NOT (IS_CONTROL_PRESSED( 0, 23 )))
            {
                if (l_U59)
                {
                    l_U60 = 1;
                }
            }
            GET_OBJECT_COORDINATES( uParam0, ref l_U125._fU0, ref l_U125._fU4, ref l_U125._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_1662() )))
            {
                if (l_U12)
                {
                    if (NOT (IS_PED_ATTACHED_TO_OBJECT( sub_1662(), uParam0 )))
                    {
                        if (sub_5542( uParam4 ))
                        {
                            if (NOT (IS_CHAR_DEAD( sub_1662() )))
                            {
                                if (NOT l_U59)
                                {
                                    FREEZE_CHAR_POSITION( sub_1662(), 0 );
                                    CLEAR_CHAR_TASKS( sub_1662() );
                                    GET_OBJECT_HEADING( uParam0, ref uVar11 );
                                    l_U59 = 1;
                                    SET_CHAR_HEADING( sub_1662(), uVar11 );
                                    ATTACH_PED_TO_OBJECT( sub_1662(), uParam0, 0, vVar8, 0.00000000, 0.00000000, 0, 0 );
                                    TASK_PLAY_ANIM( sub_1662(), "OPERATE_LIFT_INTRO", uParam4, 8.00000000, 0, 0, 0, 1, -1 );
                                    sub_5986( uParam1, uParam0, uParam5 );
                                    l_U124 = 0;
                                    sub_6409();
                                }
                            }
                        }
                        else if (TIMERB() > 5000)
                        {
                            if ((l_U124) || (l_U135))
                            {
                                FREEZE_CHAR_POSITION( sub_1662(), 0 );
                                sub_6488( uParam1, uParam5 );
                                l_U148 = 1;
                            }
                        }
                    }
                    else
                    {
                        TASK_LOOK_AT_COORD( sub_1662(), 0.00000000, 0.00000000, 0.00000000, 1, 32 );
                    }
                }
            }
            if ((l_U59) || (l_U11))
            {
                if (NOT l_U11)
                {
                    sub_4632();
                }
                sub_6726( ref uParam0, uParam2, uParam3, uParam4 );
                if (NOT l_U11)
                {
                    sub_8488();
                    sub_6488( uParam1, uParam5 );
                }
            }
        }
        if ((l_U60) || (l_U148))
        {
            if ((IS_CONTROL_PRESSED( 0, 23 )) || (l_U148))
            {
                if ((l_U61) || (l_U148))
                {
                    if ((l_U59) || (l_U148))
                    {
                        l_U75 = 0;
                        l_U59 = 0;
                        l_U148 = 0;
                        if (NOT l_U148)
                        {
                            l_U146 = 0;
                        }
                        else
                        {
                            l_U146 = 2;
                        }
                        l_U124 = 0;
                        l_U134 = 0;
                        l_U135 = 0;
                        l_U80 = 0;
                        l_U4 = 0;
                        l_U139 = 1;
                        sub_787();
                        l_U149 = 0;
                    }
                }
            }
            else if (NOT l_U59)
            {
                l_U60 = 0;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_1662() )))
    {
        if ((((IS_CHAR_PLAYING_ANIM( sub_1662(), uParam4, "GET_IN_LIFT_BOTTOM" )) || (IS_CHAR_PLAYING_ANIM( sub_1662(), uParam4, "OPERATE_LIFT_SWITCH" ))) || (IS_CHAR_PLAYING_ANIM( sub_1662(), uParam4, "operate_lift_intro" ))) || (IS_CHAR_PLAYING_ANIM( sub_1662(), uParam4, "GET_IN_LIFT_TOP" )))
        {
            l_U147 = 1;
        }
        else
        {
            l_U147 = 0;
        }
    }
    return l_U147;
}

void sub_1617(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    float fVar6;

    switch (l_U146)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( sub_1662() )))
        {
            TASK_PLAY_ANIM( sub_1662(), "operate_lift_outro", uParam0, 8.00000000, 0, 0, 0, 0, -1 );
            SETTIMERA( 0 );
            l_U146 = 1;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( sub_1662() )))
        {
            if (IS_CHAR_PLAYING_ANIM( sub_1662(), uParam0, "operate_lift_outro" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_1662(), uParam0, "operate_lift_outro", ref fVar6 );
                if (fVar6 > 0.50000000)
                {
                    l_U146 = 2;
                }
            }
            if (TIMERB() > 5000)
            {
                l_U146 = 2;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( sub_1662() )))
        {
            SET_USE_LEG_IK( sub_836(), 0 );
            DETACH_PED( sub_1662(), 0 );
            SETTIMERA( 0 );
            sub_787();
            CLEAR_PRINTS();
            l_U91 = 0.00000000;
            sub_1994();
            l_U24 = 0.00000000;
            l_U28 = 0.00000000;
            l_U14 = 45.00000000;
            l_U15 = 0.00000000;
            l_U16 = -3.00000000;
            l_U17 = -3.00000000;
            l_U18 = 0.00000000;
            l_U19 = 0.00000000;
            sub_2137();
            sub_566( 2, "WClift_01" );
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WClift_03" ))
            {
                CLEAR_HELP();
            }
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WClift_02" ))
            {
                CLEAR_HELP();
            }
            l_U12 = 0;
            l_U139 = 0;
            l_U146 = 3;
        }
        break;
    }
    return;
}

void sub_1662()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1994()
{
    if (l_U87 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U87 )))
        {
            STOP_SOUND( l_U87 );
        }
        RELEASE_SOUND_ID( l_U87 );
        l_U87 = -1;
    }
    return;
}

void sub_2137()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_2288(unknown uParam0, unknown uParam1, float fParam2, float fParam3, unknown uParam4, unknown uParam5)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U118._fU0, ref l_U118._fU4, ref l_U118._fU8 );
        if (l_U118._fU8 == fParam3)
        {
            l_U117 = 0;
        }
        else if (l_U118._fU8 == fParam2)
        {
            l_U117 = 1;
        }
    }
    switch (l_U117)
    {
        case 0:
        l_U105 = {1.00000000, -0.40000000, 1.00000000};
        l_U108 = {-1.00000000, -0.40000000, -1.00000000};
        l_U111 = {-0.50000000, 0.00000000, 1.00000000};
        l_U114 = {-0.53200000, -0.85800000, -1.00000000};
        GET_OBJECT_HEADING( uParam0, ref l_U51 );
        sub_2535( uParam0, uParam1, 0, uParam4, uParam5 );
        break;
        case 1:
        l_U105 = {1.00000000, 1.40000000, 1.00000000};
        l_U108 = {-1.00000000, 1.40000000, -1.00000000};
        l_U111 = {0.50000000, -0.20000000, 1.00000000};
        l_U114 = {0.53200000, 0.85800000, -1.00000000};
        GET_OBJECT_HEADING( uParam0, ref l_U51 );
        l_U51 += 180.00000000;
        if (l_U51 > 360.00000000)
        {
            l_U51 -= 360.00000000;
        }
        sub_2535( uParam0, uParam1, 1, uParam4, uParam5 );
        break;
        case 2: break;
    }
    return;
}

void sub_2535(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    if (l_U134)
    {
        if (NOT l_U59)
        {
            if (NOT l_U124)
            {
                l_U124 = 1;
                l_U4 = 1;
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U114._fU0, l_U114._fU4, l_U114._fU8, ref l_U102._fU0, ref l_U102._fU4, ref l_U102._fU8 );
                SET_CHAR_COORDINATES( sub_1662(), l_U102._fU0, l_U102._fU4, l_U102._fU8 );
                SET_CHAR_HEADING( sub_1662(), l_U51 );
                sub_2690( uParam1, uParam0, uParam4 );
                CLEAR_CHAR_TASKS( sub_1662() );
                WAIT( 0 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U111._fU0, l_U111._fU4, l_U111._fU8, ref l_U121._fU0, ref l_U121._fU4, ref l_U121._fU8 );
                if (iParam2 == 0)
                {
                    FREEZE_CHAR_POSITION( sub_1662(), 1 );
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( sub_1662(), "GET_IN_LIFT_BOTTOM", uParam3, 8.00000000, 0, 0, 0, 0, 0, 0, 1, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( sub_1662(), "GET_IN_LIFT_TOP", uParam3, 8.00000000, 0, 1, 1, 1, 0, 0, 0, -1 );
                }
                SETTIMERB( 0 );
            }
        }
    }
    return;
}

void sub_2690(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT l_U7)
        {
            BEGIN_CAM_COMMANDS( ref l_U6 );
            l_U7 = 1;
        }
        CREATE_CAM( 14, ref l_U5 );
        ATTACH_CAM_TO_OBJECT( l_U5, uParam1 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U5, 1 );
        SET_CAM_ATTACH_OFFSET( l_U5, -3.00000000, -1.00000000, 1.00000000 );
        POINT_CAM_AT_OBJECT( l_U5, uParam1 );
        SET_CAM_ACTIVE( l_U5, 1 );
        SET_CAM_PROPAGATE( l_U5, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    else
    {
        CREATE_CAM( 14, uParam0 );
        ATTACH_CAM_TO_OBJECT( (uParam0^), uParam1 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( (uParam0^), 1 );
        SET_CAM_ATTACH_OFFSET( (uParam0^), -3.00000000, -1.00000000, 1.00000000 );
        POINT_CAM_AT_OBJECT( (uParam0^), uParam1 );
        SET_CAM_ACTIVE( (uParam0^), 1 );
        SET_CAM_PROPAGATE( (uParam0^), 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    return;
}

void sub_3343(unknown uParam0, float fParam1, unknown uParam2)
{
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

    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 1.50000000, -1.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.00000000, 1.50000000, 1.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
    if (NOT l_U12)
    {
        if (NOT (IS_CHAR_DEAD( sub_1662() )))
        {
            if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_1662(), uVar9._fU0, uVar9._fU4, uVar9._fU8, uVar12._fU0, uVar12._fU4, uVar12._fU8, 3.00000000, 0 )))
            {
                GET_OBJECT_COORDINATES( uParam0, ref l_U118._fU0, ref l_U118._fU4, ref l_U118._fU8 );
                GET_CHAR_COORDINATES( sub_1662(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                if (NOT (l_U118._fU8 > (uParam2 - 3.00000000)))
                {
                    if ((uVar6._fU8 - 1.50000000) < fParam1)
                    {
                        if (l_U118._fU8 > fParam1)
                        {
                            l_U11 = 1;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_3642(unknown uParam0)
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 0.40000000, -1.00000000, ref l_U128._fU0, ref l_U128._fU4, ref l_U128._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.00000000, 0.40000000, 1.00000000, ref l_U131._fU0, ref l_U131._fU4, ref l_U131._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U105._fU0, l_U105._fU4, l_U105._fU8, ref l_U99._fU0, ref l_U99._fU4, ref l_U99._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U108._fU0, l_U108._fU4, l_U108._fU8, ref l_U102._fU0, ref l_U102._fU4, ref l_U102._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 0.50000000, -1.00000000, ref l_U93._fU0, ref l_U93._fU4, ref l_U93._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 0.50000000, -3.00000000, ref l_U96._fU0, ref l_U96._fU4, ref l_U96._fU8 );
    if (NOT l_U11)
    {
        if (NOT l_U12)
        {
            if (NOT (IS_CHAR_DEAD( sub_1662() )))
            {
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_1662(), l_U99._fU0, l_U99._fU4, l_U99._fU8, l_U102._fU0, l_U102._fU4, l_U102._fU8, 1.00000000, 0 ))
                {
                    if ((l_U81) || (l_U82))
                    {
                        if (TIMERA() > 2000)
                        {
                            if (sub_4054( 2, 0 ))
                            {
                                l_U138 = 1;
                                if (sub_4357( 2, "WClift_01", 0 ))
                                {
                                    l_U134 = 1;
                                    l_U12 = 1;
                                }
                            }
                            else
                            {
                                sub_566( 2, "WClift_01" );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_1662(), l_U128._fU0, l_U128._fU4, l_U128._fU8, l_U131._fU0, l_U131._fU4, l_U131._fU8, 1.00000000, 0 )))
                    {
                        sub_566( 2, "WClift_01" );
                    }
                }
                else if (NOT (IS_CHAR_DEAD( sub_1662() )))
                {
                    if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_1662(), l_U128._fU0, l_U128._fU4, l_U128._fU8, l_U131._fU0, l_U131._fU4, l_U131._fU8, 1.00000000, 0 )))
                    {
                        l_U138 = 0;
                    }
                }
            }
        }
        if (NOT l_U12)
        {
            if (NOT (IS_CHAR_DEAD( sub_1662() )))
            {
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_1662(), l_U128._fU0, l_U128._fU4, l_U128._fU8, l_U131._fU0, l_U131._fU4, l_U131._fU8, 1.00000000, 0 ))
                {
                    if (TIMERA() > 2000)
                    {
                        if (NOT l_U134)
                        {
                            if (sub_4054( 2, 0 ))
                            {
                                if (sub_4357( 2, "WClift_01", 0 ))
                                {
                                    l_U135 = 1;
                                    l_U12 = 1;
                                }
                            }
                            else
                            {
                                sub_566( 2, "WClift_01" );
                            }
                        }
                        else
                        {
                            l_U135 = 1;
                        }
                    }
                }
                else if (NOT l_U138)
                {
                    sub_566( 2, "WClift_01" );
                }
                l_U134 = 0;
                l_U135 = 0;;
            }
        }
    }
    return;
}

int sub_4054(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_836() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_836() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_836() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_4150())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1662() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_4235())
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

int sub_4150()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_4235()
{
    return sub_4246( 0, 0 );
}

int sub_4246(boolean bParam0, unknown uParam1)
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

int sub_4357(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_4054( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_836(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_4632();
                l_U1 = 1;
                g_U9173 = 6;
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
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_4632()
{
    return sub_4246( 1, 1 );
}

void sub_5542(unknown uParam0)
{
    int Result;

    Result = 0;
    if (l_U12)
    {
        if (l_U124)
        {
            if (NOT (IS_CHAR_DEAD( sub_1662() )))
            {
                if ((IS_CHAR_PLAYING_ANIM( sub_1662(), uParam0, "GET_IN_LIFT_BOTTOM" )) || (IS_CHAR_PLAYING_ANIM( sub_1662(), uParam0, "GET_IN_LIFT_TOP" )))
                {
                    l_U149 = 1;
                }
            }
            if (l_U149)
            {
                if (NOT (IS_CHAR_DEAD( sub_1662() )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_1662(), uParam0, "GET_IN_LIFT_BOTTOM" )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_1662(), uParam0, "GET_IN_LIFT_TOP" )))
                        {
                            l_U149 = 0;
                            Result = 1;
                        }
                    }
                }
            }
        }
        else if (l_U135)
        {
            Result = 1;
        }
    }
    return Result;
}

void sub_5986(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (NOT l_U4)
    {
        if (bParam2)
        {
            if (NOT l_U7)
            {
                BEGIN_CAM_COMMANDS( ref l_U6 );
                l_U7 = 1;
            }
            CREATE_CAM( 14, ref l_U5 );
            ATTACH_CAM_TO_OBJECT( l_U5, uParam1 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U5, 1 );
            SET_CAM_ATTACH_OFFSET( l_U5, -3.00000000, -3.00000000, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( sub_1662() )))
            {
                POINT_CAM_AT_PED( l_U5, sub_1662() );
            }
            GET_GAME_VIEWPORT_ID( ref l_U13 );
            CLEAR_ROOM_FOR_VIEWPORT( l_U13 );
            SET_CAM_ACTIVE( l_U5, 1 );
            SET_CAM_PROPAGATE( l_U5, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        }
        else
        {
            CREATE_CAM( 14, uParam0 );
            ATTACH_CAM_TO_OBJECT( (uParam0^), uParam1 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( (uParam0^), 1 );
            SET_CAM_ATTACH_OFFSET( (uParam0^), -3.00000000, -3.00000000, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( sub_1662() )))
            {
                POINT_CAM_AT_PED( (uParam0^), sub_1662() );
            }
            GET_GAME_VIEWPORT_ID( ref l_U13 );
            CLEAR_ROOM_FOR_VIEWPORT( l_U13 );
            SET_CAM_ACTIVE( (uParam0^), 1 );
            SET_CAM_PROPAGATE( (uParam0^), 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        }
    }
    else if (bParam2)
    {
        SET_CAM_ATTACH_OFFSET( l_U5, -3.00000000, -3.00000000, 0.00000000 );
    }
    else
    {
        SET_CAM_ATTACH_OFFSET( (uParam0^), -3.00000000, -3.00000000, 0.00000000 );
    }
    return;
}

void sub_6409()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

void sub_6488(unknown uParam0, boolean bParam1)
{
    if (NOT (IS_CHAR_DEAD( sub_1662() )))
    {
        if (bParam1)
        {
            if (DOES_CAM_EXIST( l_U5 ))
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U5 );
                SET_CAM_BEHIND_PED( sub_1662() );
                if (l_U7)
                {
                    END_CAM_COMMANDS( ref l_U6 );
                    l_U7 = 0;
                }
            }
        }
        else if (DOES_CAM_EXIST( (uParam0^) ))
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( (uParam0^) );
            SET_CAM_BEHIND_PED( sub_1662() );
        }
    }
    return;
}

void sub_6726(unknown uParam0, float fParam1, float fParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    string sVar13;
    int iVar14;

    iVar14 = 1;
    l_U75 = 1;
    l_U79 = fParam1;
    GET_OBJECT_COORDINATES( (uParam0^), ref l_U76._fU0, ref l_U76._fU4, ref l_U76._fU8 );
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar6, ref iVar7, ref uVar8, ref uVar9 );
    if ((iVar6 == 0) AND (iVar7 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar6, ref iVar7 );
    }
    SET_FOLLOW_PED_PITCH_LIMIT_UP( 25.00000000 );
    SET_FOLLOW_PED_PITCH_LIMIT_DOWN( 25.00000000 );
    if (((iVar7 > 10) AND (iVar7 < 129)) || (l_U11))
    {
        if (l_U76._fU8 > fParam2)
        {
            if (l_U91 == 0.00000000)
            {
                sub_6895( (uParam0^) );
                l_U74 = 4;
            }
            else if (l_U74 == 1)
            {
                sub_1994();
                l_U74 = 0;
            }
        }
        else
        {
            l_U11 = 0;
        }
    }
    else if ((iVar7 < -10) AND (iVar7 > 65407))
    {
        if (NOT sub_7033())
        {
            if (l_U76._fU8 < fParam1)
            {
                if (l_U91 == 0.00000000)
                {
                    sub_6895( (uParam0^) );
                    l_U74 = 1;
                }
                else if (l_U74 == 4)
                {
                    sub_1994();
                    l_U74 = 0;
                }
            }
        }
        else
        {
            sub_1994();
            l_U74 = 0;
        }
    }
    else
    {
        sub_1994();
        l_U74 = 0;
    }
    if (NOT l_U11)
    {
        if (l_U12)
        {
            if (l_U91 < 0.05000000)
            {
                fVar12 = l_U91 * 1000;
                SHAKE_PAD( 0, 5, CEIL( fVar12 ) );
            }
        }
    }
    fVar10 = fParam1 - l_U76._fU8;
    fVar11 = l_U76._fU8 - fParam2;
    if (fVar10 == 0.00000000)
    {
        l_U81 = 0;
        l_U82 = 1;
        l_U61 = 1;
        sVar13 = "WClift_03";
    }
    else if (fVar11 == 0.00000000)
    {
        l_U81 = 1;
        l_U82 = 0;
        l_U61 = 1;
        if (NOT l_U11)
        {
            if (l_U12)
            {
                sVar13 = "WClift_03";
            }
        }
    }
    else
    {
        l_U81 = 0;
        l_U82 = 0;
        sVar13 = "WClift_02";
    }
    if (NOT l_U11)
    {
        if (l_U12)
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar13 )))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER( sVar13 );
            }
        }
    }
    switch (l_U74)
    {
        case 0:
        if (l_U91 > 0.00000000)
        {
            l_U91 -= 0.01000000;
            SLIDE_OBJECT( (uParam0^), l_U76._fU0, l_U76._fU4, l_U92, 0.00000000, 0.00000000, l_U91, iVar14 );
        }
        l_U89 = 0;
        break;
        case 1:
        if (sub_7652( uParam3 ))
        {
            if (fVar10 > 1.00000000)
            {
                if (l_U91 < 0.11000000)
                {
                    l_U91 += 0.01000000;
                }
            }
            else if (l_U91 > 0.03000000)
            {
                l_U91 -= 0.01000000;
            }
            else
            {
                l_U91 += 0.01000000;
            }
            l_U92 = fParam1;
            if (SLIDE_OBJECT( (uParam0^), l_U76._fU0, l_U76._fU4, l_U92, 0.00000000, 0.00000000, l_U91, iVar14 ))
            {
                sub_1994();
                l_U74 = 0;
            }
        }
        break;
        case 4:
        if ((sub_7652( uParam3 )) || (l_U11))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( (uParam0^), 1.00000000, 0.50000000, -1.00000000, ref l_U93._fU0, ref l_U93._fU4, ref l_U93._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( (uParam0^), -1.00000000, 0.50000000, -3.00000000, ref l_U96._fU0, ref l_U96._fU4, ref l_U96._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_1662() )))
            {
                if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_1662(), l_U93._fU0, l_U93._fU4, l_U93._fU8, l_U96._fU0, l_U96._fU4, l_U96._fU8, 1.00000000, 0 )))
                {
                    if (fVar11 > 1.00000000)
                    {
                        if (l_U91 < 0.11000000)
                        {
                            l_U91 += 0.01000000;
                        }
                    }
                    else if (l_U91 > 0.03000000)
                    {
                        l_U91 -= 0.01000000;
                    }
                    else
                    {
                        l_U91 += 0.01000000;
                    }
                    l_U92 = fParam2;
                    if (SLIDE_OBJECT( (uParam0^), l_U76._fU0, l_U76._fU4, l_U92, 0.00000000, 0.00000000, l_U91, iVar14 ))
                    {
                        sub_1994();
                        l_U74 = 0;
                    }
                }
            }
        }
        break;
    }
    return;
}

void sub_6895(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (l_U87 == -1)
        {
            l_U87 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U87, l_U88, uParam0 );
        }
    }
    return;
}

void sub_7033()
{
    int Result;

    Result = 0;
    l_U90 = nil;
    GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U76._fU0, l_U76._fU4, l_U76._fU8 + 4.00000000, 3.00000000, 0, 1, ref l_U90 );
    if (l_U90 != nil)
    {
        Result = 1;
    }
    return Result;
}

int sub_7652(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_DEAD( sub_1662() )))
    {
        if (l_U89)
        {
            if (IS_CHAR_PLAYING_ANIM( sub_1662(), uParam0, "OPERATE_LIFT_SWITCH" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_1662(), uParam0, "OPERATE_LIFT_SWITCH", ref fVar3 );
                if (fVar3 > 0.50000000)
                {
                    return 1;
                }
            }
            else if (NOT l_U11)
            {
                TASK_PLAY_ANIM( sub_1662(), "OPERATE_LIFT_SWITCH", uParam0, 8.00000000, 0, 0, 0, 1, -1 );
            }
        }
        else if (NOT l_U11)
        {
            TASK_PLAY_ANIM( sub_1662(), "OPERATE_LIFT_SWITCH", uParam0, 8.00000000, 0, 0, 0, 1, -1 );
        }
        l_U89 = 1;;
    }
    return 0;
}

void sub_8488()
{
    int Result;

    Result = 0;
    if (l_U76._fU8 == l_U79)
    {
        if (l_U75)
        {
            Result = 1;
        }
    }
    return Result;
}
