void main()
{
    l_U4 = 0.40000000;
    l_U5 = 0;
    l_U9 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U43 = 0;
    l_U44 = 0;
    l_U45 = -1;
    l_U51 = "ObjScpt_06";
    l_U52 = 0;
    l_U53 = 0;
    l_U54 = 0;
    l_U55 = 0;
    l_U56 = 0;
    l_U57 = 0;
    l_U58 = 1;
    l_U59 = 0;
    l_U60 = 0;
    l_U61 = 0;
    l_U66 = 2086092453;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_151();
    }
    while (true)
    {
        WAIT( 0 );
        if (g_U9890 != 1)
        {
            if (IS_PLAYER_PLAYING( sub_509() ))
            {
                if (DOES_OBJECT_EXIST( l_U73 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U73 ))
                    {
                        switch (l_U11)
                        {
                            case 0:
                            sub_1229( l_U73 );
                            l_U11 = 1;
                            break;
                            case 1:
                            sub_2193( l_U73 );
                            sub_2664( l_U73 );
                            break;
                            case 2:
                            sub_2675( l_U73 );
                            break;
                            case 3:
                            sub_8102();
                            sub_2664( l_U73 );
                            sub_8334();
                            break;
                            case 4:
                            sub_2664( l_U73 );
                            sub_8740();
                            break;
                            case 5:
                            if (NOT (IS_CHAR_INJURED( l_U68 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68 );
                                SET_CHAR_KEEP_TASK( l_U68, 1 );
                                TASK_WANDER_STANDARD( l_U68 );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68 );
                                l_U68 = nil;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U67 )))
                            {
                                CLEAR_CHAR_TASKS( l_U67 );
                            }
                            if (DOES_OBJECT_EXIST( l_U69 ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U69 ))
                                {
                                    DETACH_OBJECT( l_U69, 1 );
                                }
                                DELETE_OBJECT( ref l_U69 );
                                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U69 );
                            }
                            if (l_U44 == 0)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U67 )))
                                {
                                    TASK_ACHIEVE_HEADING( l_U67, l_U37 );
                                }
                            }
                            if (l_U12 != 19)
                            {
                                if (DOES_OBJECT_EXIST( l_U70 ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U70 ))
                                    {
                                        DETACH_OBJECT( l_U70, 1 );
                                    }
                                    DELETE_OBJECT( ref l_U70 );
                                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U70 );
                                }
                            }
                            CREATE_OBJECT( l_U66, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref l_U69, 1 );
                            if (DOES_OBJECT_EXIST( l_U69 ))
                            {
                                SET_OBJECT_VISIBLE( l_U69, 0 );
                                SET_OBJECT_COLLISION( l_U69, 0 );
                            }
                            if (IS_PLAYER_PLAYING( sub_509() ))
                            {
                                sub_686( 0 );
                                SET_PLAYER_CONTROL_ADVANCED( sub_509(), 0, 0, 1 );
                            }
                            l_U12 = 0;
                            l_U11 = 6;
                            break;
                            case 6:
                            sub_2664( l_U73 );
                            sub_11017();
                            break;
                            case 7:
                            if (l_U56 == 1)
                            {
                                if (DOES_CHAR_EXIST( l_U68 ))
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68 );
                                    l_U68 = nil;
                                }
                                sub_2664( l_U73 );
                            }
                            else
                            {
                                sub_151();
                            }
                            break;
                        }
                    }
                    else
                    {
                        sub_151();
                    }
                }
                else
                {
                    sub_151();
                }
            }
            else
            {
                sub_151();
            }
        }
        else
        {
            sub_151();
        }
    }
    return;
}

void sub_151()
{
    sub_173( "ObjScpt_06" );
    sub_239( 2, "ObjScpt_06" );
    sub_239( 2, "ClaScpt_06" );
    sub_239( 2, "NULL" );
    if (l_U11 == 6)
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_637() );
        sub_686( 1 );
    }
    if (l_U11 > 0)
    {
        if (l_U45 >= 0)
        {
            STOP_SOUND( l_U45 );
            RELEASE_SOUND_ID( l_U45 );
        }
        UNREGISTER_SCRIPT_WITH_AUDIO();
    }
    if (DOES_OBJECT_EXIST( l_U69 ))
    {
        if (IS_OBJECT_ATTACHED( l_U69 ))
        {
            DETACH_OBJECT( l_U69, 1 );
        }
        DELETE_OBJECT( ref l_U69 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U69 );
    }
    if (DOES_OBJECT_EXIST( l_U70 ))
    {
        if (IS_OBJECT_ATTACHED( l_U70 ))
        {
            DETACH_OBJECT( l_U70, 1 );
        }
        DELETE_OBJECT( ref l_U70 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U70 );
    }
    if (l_U43 != 0)
    {
        STOP_PTFX( l_U43 );
    }
    if (NOT (IS_CHAR_INJURED( l_U67 )))
    {
        if (l_U61 == 1)
        {
            CLEAR_CHAR_TASKS( l_U67 );
            SET_CHAR_KEEP_TASK( l_U67, 1 );
            TASK_COMBAT( l_U67, sub_637() );
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U67 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U67 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_173(unknown uParam0)
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

void sub_239(int iParam0, string sParam1)
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
                    sub_460();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_509(), 1 );
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

void sub_460()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_509()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_637()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_686(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_509(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_509(), 1 );
    }
    return;
}

void sub_1229(unknown uParam0)
{
    REQUEST_ANIMS( "amb@burgercart" );
    l_U65 = sub_1262();
    REQUEST_MODEL( l_U66 );
    REQUEST_MODEL( l_U65 );
    sub_1941();
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U45 = GET_SOUND_ID();
    sub_1980( uParam0 );
    l_U51 = "ObjScpt_06";
    return;
}

void sub_1262()
{
    int iVar2;
    unknown uVar3;
    int Result;
    int iVar5;
    int iVar6;
    int iVar7;

    Result = -186113957;
    iVar5 = 142730876;
    iVar6 = 768442188;
    iVar7 = 420915580;
    FIND_PRIMARY_POPULATION_ZONE_GROUP( ref iVar2, ref uVar3 );
    if (iVar2 == 0)
    {
        return Result;
    }
    if (iVar2 == 1)
    {
        return iVar7;
    }
    if (iVar2 == 2)
    {
        return Result;
    }
    if (iVar2 == 3)
    {
        return Result;
    }
    if (iVar2 == 4)
    {
        return iVar7;
    }
    if (iVar2 == 5)
    {
        return iVar7;
    }
    if (iVar2 == 6)
    {
        return Result;
    }
    if (iVar2 == 7)
    {
        return Result;
    }
    if (iVar2 == 8)
    {
        return Result;
    }
    if (iVar2 == 9)
    {
        return Result;
    }
    if (iVar2 == 10)
    {
        return Result;
    }
    if (iVar2 == 11)
    {
        return iVar5;
    }
    if (iVar2 == 13)
    {
        return iVar5;
    }
    if (iVar2 == 14)
    {
        return Result;
    }
    if (iVar2 == 15)
    {
        return iVar6;
    }
    if (iVar2 == 16)
    {
        return iVar7;
    }
    if (iVar2 == 17)
    {
        return iVar7;
    }
    if (iVar2 == 18)
    {
        return iVar6;
    }
    if (iVar2 == 19)
    {
        return Result;
    }
    if (iVar2 == 20)
    {
        return Result;
    }
    if (iVar2 == 21)
    {
        return iVar6;
    }
    if (iVar2 == 22)
    {
        return Result;
    }
    if (iVar2 == 23)
    {
        return Result;
    }
    if (iVar2 == 24)
    {
        return iVar6;
    }
    if (iVar2 == 25)
    {
        return iVar5;
    }
    if (iVar2 == 26)
    {
        return iVar5;
    }
    if (iVar2 == 27)
    {
        return iVar5;
    }
    if (iVar2 == 28)
    {
        return iVar5;
    }
    if (iVar2 == 29)
    {
        return iVar5;
    }
    if (iVar2 == 30)
    {
        return iVar7;
    }
    if (iVar2 == 31)
    {
        return iVar7;
    }
    if (iVar2 == 32)
    {
        return iVar7;
    }
    if (iVar2 == 33)
    {
        return Result;
    }
    if (iVar2 == 34)
    {
        return iVar5;
    }
    if (iVar2 == 35)
    {
        return iVar5;
    }
    if (iVar2 == 36)
    {
        return iVar5;
    }
    if (iVar2 == 37)
    {
        return Result;
    }
    if (iVar2 == 38)
    {
        return Result;
    }
    if (iVar2 == 39)
    {
        return iVar6;
    }
    if (iVar2 == 40)
    {
        return iVar6;
    }
    if (iVar2 == 41)
    {
        return iVar7;
    }
    return Result;
}

void sub_1941()
{
    return;
}

void sub_1980(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.07000000, 0.00000000, -0.50000000, ref l_U16._fU0, ref l_U16._fU4, ref l_U16._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.30000000, 0.90000000, 0.00000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
        GET_HEADING_FROM_VECTOR_2D( l_U13._fU0 - l_U16._fU0, l_U13._fU4 - l_U16._fU4, ref l_U37 );
        l_U40 = l_U37 + 90;
    }
    return;
}

void sub_2193(unknown uParam0)
{
    if (HAS_MODEL_LOADED( l_U66 ))
    {
        if (HAS_MODEL_LOADED( l_U65 ))
        {
            if (NOT (IS_OBJECT_ON_SCREEN( uParam0 )))
            {
                l_U43 = START_PTFX_ON_OBJ( "ambient_hotdogstand", uParam0, 0.40000000, 0.10000000, 0.20000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.20000000, 0.00000000, 0.20000000, ref l_U22._fU0, ref l_U22._fU4, ref l_U22._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.20000000, 0.00000000, 0.20000000, ref l_U25._fU0, ref l_U25._fU4, ref l_U25._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 0.50000000, -0.50000000, ref l_U28._fU0, ref l_U28._fU4, ref l_U28._fU8 );
                CREATE_OBJECT( l_U66, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref l_U69, 1 );
                if (DOES_OBJECT_EXIST( l_U69 ))
                {
                    SET_OBJECT_COLLISION( l_U69, 0 );
                    SET_OBJECT_VISIBLE( l_U69, 0 );
                }
                SET_OBJECT_LIGHTS( uParam0, 1 );
                CREATE_CHAR( 4, l_U65, l_U16._fU0, l_U16._fU4, l_U16._fU8, ref l_U67, 1 );
                if (NOT (IS_CHAR_INJURED( l_U67 )))
                {
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U67 );
                    SET_CHAR_HEADING( l_U67, l_U37 );
                    SET_CHAR_IN_CUTSCENE( l_U67, 1 );
                    TASK_START_SCENARIO_IN_PLACE( l_U67, "scenario_standing", -1082130432 );
                    l_U11 = 3;
                }
            }
        }
    }
    return;
}

void sub_2664(unknown uParam0)
{
    unknown uVar3;

    sub_2675( uParam0 );
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (l_U57 == 0)
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_2D( sub_637(), uParam0, 20.00000000, 20.00000000, 0 ))
            {
                PLAY_SOUND_FROM_OBJECT( l_U45, "STREET_FOOD_GRILL", uParam0 );
                l_U57 = 1;
            }
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_HEALTH( uParam0, ref l_U41 );
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_637() ))
    {
        sub_3292();
    }
    if (sub_3447())
    {
        sub_3292();
    }
    if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_637(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U67 )))
        {
            if (l_U59 == 0)
            {
                if (IS_CHAR_TOUCHING_OBJECT_ON_FOOT( sub_637(), uParam0 ))
                {
                    if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.98000000)
                    {
                        CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U67 );
                        SAY_AMBIENT_SPEECH( l_U67, "Intimidate_Resp", 1, 1, 0 );
                        CLEAR_OBJECT_LAST_DAMAGE_ENTITY( uParam0 );
                        l_U59 = 1;
                    }
                }
            }
            else if (l_U60 == 0)
            {
                if (IS_CHAR_TOUCHING_OBJECT_ON_FOOT( sub_637(), uParam0 ))
                {
                    if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.90000000)
                    {
                        CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U67 );
                        SAY_AMBIENT_SPEECH( l_U67, "Intimidate_Resp", 1, 1, 0 );
                        if (NOT (IS_CHAR_INJURED( l_U67 )))
                        {
                            TASK_COMBAT( l_U67, sub_637() );
                        }
                        sub_3292();
                        l_U60 = 1;
                    }
                }
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U67 ))
    {
        if (IS_CHAR_DEAD( l_U67 ))
        {
            sub_151();
        }
        if (IS_CHAR_FATALLY_INJURED( l_U67 ))
        {
            sub_151();
        }
        if (IS_CHAR_INJURED( l_U67 ))
        {
            sub_151();
        }
        if (IS_PED_FLEEING( l_U67 ))
        {
            sub_151();
        }
        if (NOT (IS_CHAR_INJURED( l_U67 )))
        {
            GET_CURRENT_CHAR_WEAPON( sub_637(), ref uVar3 );
            if (IS_PLAYER_TARGETTING_CHAR( sub_509(), l_U67 ))
            {
                if (NOT sub_4091())
                {
                    SAY_AMBIENT_SPEECH( l_U67, "GUN_RUN", 0, 1, 0 );
                    sub_151();
                }
            }
        }
        if (IS_CHAR_SHOOTING_IN_AREA( sub_637(), l_U13._fU0 - 15, l_U13._fU4 - 15, l_U13._fU0 + 15, l_U13._fU4 + 15, 0 ))
        {
            sub_151();
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U67 )))
    {
        if (IS_CHAR_IN_MELEE_COMBAT( l_U67 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_637(), l_U67, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                l_U60 = 1;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U68 )))
    {
        if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U68, sub_637(), 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_509(), l_U68 ))) || (sub_4405( l_U19 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U67 )))
            {
                CLEAR_CHAR_TASKS( l_U67 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68 );
            sub_3292();
            l_U68 = nil;
            l_U52 = 0;
            l_U53 = 0;
            l_U54 = 0;
            l_U55 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U68 )))
    {
        if (IS_CHAR_TOUCHING_CHAR( sub_637(), l_U68 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68 );
                TASK_WANDER_STANDARD( l_U68 );
            }
            if (NOT (IS_CHAR_INJURED( l_U67 )))
            {
                CLEAR_CHAR_TASKS( l_U67 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68 );
            sub_3292();
            l_U68 = nil;
            l_U52 = 0;
            l_U53 = 0;
            l_U54 = 0;
            l_U55 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (l_U11 == 6)
    {
        if ((((l_U12 == 15) || (l_U12 == 17)) || (l_U12 == 18)) || (l_U12 == 19))
        {
            if (sub_4786())
            {
                if (DOES_OBJECT_EXIST( l_U70 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U70 ))
                    {
                        DETACH_OBJECT( l_U70, 1 );
                    }
                    DELETE_OBJECT( ref l_U70 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U70 );
                    sub_3292();
                    if (NOT (IS_CONTROL_PRESSED( 2, 2 )))
                    {
                        CLEAR_CHAR_TASKS( sub_637() );
                    }
                    sub_686( 1 );
                    l_U12 = 19;
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U68 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U68, 0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68 );
            sub_3292();
            l_U68 = nil;
            l_U52 = 0;
            l_U53 = 0;
            l_U54 = 0;
            l_U55 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (l_U56 == 1)
    {
        if (DOES_OBJECT_EXIST( uParam0 ))
        {
            if (NOT (IS_OBJECT_UPRIGHT( uParam0, 15 )))
            {
                sub_5152( uParam0 );
            }
            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 0 )) < l_U4)
            {
                sub_5152( uParam0 );
            }
        }
    }
    else if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_OBJECT_UPRIGHT( uParam0, 20 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_637(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                l_U61 = 1;
            }
            sub_151();
        }
        if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 0 )) < l_U4)
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_637(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                l_U61 = 1;
            }
            sub_151();
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (LOCATE_OBJECT_3D( uParam0, l_U13._fU0, l_U13._fU4, l_U13._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            sub_1980( uParam0 );
        }
    }
    if (l_U11 != 7)
    {
        if (IS_PLAYER_PLAYING( sub_509() ))
        {
            if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_509() ))
            {
                GET_INTERIOR_FROM_CHAR( sub_637(), ref l_U71 );
                if (l_U71 == nil)
                {
                    if (HAVE_ANIMS_LOADED( "amb@burgercart" ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U67 )))
                        {
                            if ((l_U11 != 1) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_637() ))))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_637(), l_U19._fU0, l_U19._fU4, l_U19._fU8, 2.00000000, 2.00000000, 1.00000000, 0 ))
                                {
                                    if (l_U11 != 6)
                                    {
                                        if (l_U60 == 0)
                                        {
                                            if (NOT (IS_PED_RAGDOLL( l_U67 )))
                                            {
                                                if (NOT (IS_CHAR_GETTING_UP( l_U67 )))
                                                {
                                                    if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U67 )))
                                                    {
                                                        if (l_U44 == 0)
                                                        {
                                                            if (l_U11 != 2)
                                                            {
                                                                if (sub_5917( 2, 0 ))
                                                                {
                                                                    if (sub_6178( 2, l_U51, 0 ))
                                                                    {
                                                                        if (IS_SCORE_GREATER( sub_509(), 5 ))
                                                                        {
                                                                            REMOVE_PED_HELMET( sub_637(), 1 );
                                                                            sub_173( l_U51 );
                                                                            g_U9059++;
                                                                            if (g_U9059 < g_U9057)
                                                                            {
                                                                                l_U51 = "ObjScpt_06";
                                                                            }
                                                                            else
                                                                            {
                                                                                l_U51 = "NULL";
                                                                            }
                                                                            l_U11 = 5;
                                                                        }
                                                                        else
                                                                        {
                                                                            SAY_AMBIENT_SPEECH( l_U67, "GENERIC_DEJECTED", 0, 1, 0 );
                                                                            sub_6950( "FAIL_TRAN", 3000, 0 );
                                                                        }
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    sub_239( 2, "ObjScpt_06" );
                                                                    sub_239( 2, "ClaScpt_06" );
                                                                    sub_239( 2, "NULL" );
                                                                }
                                                            }
                                                            else
                                                            {
                                                                sub_239( 2, "ObjScpt_06" );
                                                                sub_239( 2, "ClaScpt_06" );
                                                                sub_239( 2, "NULL" );
                                                            }
                                                        }
                                                        else
                                                        {
                                                            sub_239( 2, "ObjScpt_06" );
                                                            sub_239( 2, "ClaScpt_06" );
                                                            sub_239( 2, "NULL" );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_239( 2, "ObjScpt_06" );
                                                        sub_239( 2, "ClaScpt_06" );
                                                        sub_239( 2, "NULL" );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_239( 2, "ObjScpt_06" );
                                                    sub_239( 2, "ClaScpt_06" );
                                                    sub_239( 2, "NULL" );
                                                }
                                            }
                                            else
                                            {
                                                sub_239( 2, "ObjScpt_06" );
                                                sub_239( 2, "ClaScpt_06" );
                                                sub_239( 2, "NULL" );
                                            }
                                        }
                                        else if (l_U58 == 0)
                                        {
                                            CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U67 );
                                            sub_7372();
                                            TASK_LOOK_AT_CHAR( l_U67, sub_637(), 5000, 0 );
                                            SAY_AMBIENT_SPEECH( l_U67, "Generic_Fuck_Off", 1, 0, 0 );
                                            l_U58 = 1;
                                        }
                                        sub_239( 2, "ObjScpt_06" );
                                        sub_239( 2, "ClaScpt_06" );
                                        sub_239( 2, "NULL" );;
                                    }
                                }
                                else
                                {
                                    l_U58 = 0;
                                    sub_239( 2, "ObjScpt_06" );
                                    sub_239( 2, "ClaScpt_06" );
                                    sub_239( 2, "NULL" );
                                }
                            }
                            else
                            {
                                l_U58 = 0;
                                sub_239( 2, "ObjScpt_06" );
                                sub_239( 2, "ClaScpt_06" );
                                sub_239( 2, "NULL" );
                            }
                        }
                        else
                        {
                            sub_239( 2, "ObjScpt_06" );
                            sub_239( 2, "ClaScpt_06" );
                            sub_239( 2, "NULL" );
                        }
                    }
                }
            }
            else
            {
                sub_239( 2, "ObjScpt_06" );
                sub_239( 2, "ClaScpt_06" );
                sub_239( 2, "NULL" );
            }
        }
    }
    return;
}

void sub_2675(unknown uParam0)
{
    switch (l_U44)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U67 )))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U67, l_U16._fU0, l_U16._fU4, l_U16._fU8, 0.50000000, 0.50000000, 2.00000000, 0 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U72 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U16._fU0, l_U16._fU4, l_U16._fU8, 2, -1, 1.00000000 );
                TASK_CHAR_SLIDE_TO_COORD( 0, l_U16._fU0, l_U16._fU4, l_U16._fU8, l_U37, 1061158912 );
                CLOSE_SEQUENCE_TASK( l_U72 );
                l_U63 = 0;
                if (l_U68 != nil)
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68 );
                    l_U68 = nil;
                }
                if (l_U11 == 6)
                {
                    sub_686( 1 );
                    CLEAR_CHAR_TASKS( sub_637() );
                    l_U12 = 0;
                }
                sub_1980( uParam0 );
                l_U11 = 2;
                l_U44++;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U67 )))
        {
            TASK_PERFORM_SEQUENCE( l_U67, l_U72 );
            GET_GAME_TIMER( ref l_U47 );
            CLEAR_SEQUENCE_TASK( l_U72 );
            l_U44++;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U48 );
        l_U49 = l_U48 - l_U47;
        if (NOT (IS_CHAR_INJURED( l_U67 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U67, 29, ref l_U63 );
            if ((l_U63 == 7) || (l_U49 > 8000))
            {
                l_U11 = 3;
                l_U44 = 0;
            }
        }
        break;
    }
    return;
}

void sub_3292()
{
    if (DOES_OBJECT_EXIST( l_U70 ))
    {
        if (IS_OBJECT_ATTACHED( l_U70 ))
        {
            DETACH_OBJECT( l_U70, 1 );
        }
        DELETE_OBJECT( ref l_U70 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U70 );
    }
    if (DOES_OBJECT_EXIST( l_U69 ))
    {
        if (IS_OBJECT_ATTACHED( l_U69 ))
        {
            DETACH_OBJECT( l_U69, 1 );
        }
        DELETE_OBJECT( ref l_U69 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U69 );
    }
    return;
}

int sub_3447()
{
    if (sub_3456())
    {
        if (sub_3495())
        {
            return 1;
        }
    }
    return 0;
}

int sub_3456()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_3495()
{
    if (g_U91._fU60 != -1)
    {
        if ((g_U15946[g_U91._fU60]._fU132._fU24 == 0) || (g_U15946[g_U91._fU60]._fU132._fU24 == 3))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4091()
{
    int iVar2;

    GET_CURRENT_CHAR_WEAPON( sub_637(), ref iVar2 );
    if (iVar2 == 0)
    {
        return 1;
    }
    if (iVar2 == 3)
    {
        return 1;
    }
    if (iVar2 == 1)
    {
        return 1;
    }
    if (iVar2 == 46)
    {
        return 1;
    }
    return 0;
}

int sub_4405(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_DEAD( sub_637() )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_637(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 1.00000000, 1.00000000, 3.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4786()
{
    if ((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 )))
    {
        return 1;
    }
    if ((((IS_BUTTON_JUST_PRESSED( 0, 17 )) || (IS_BUTTON_JUST_PRESSED( 0, 14 ))) || (IS_BUTTON_JUST_PRESSED( 0, 15 ))) || (IS_BUTTON_JUST_PRESSED( 0, 16 )))
    {
        return 1;
    }
    return 0;
}

void sub_5152(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U34._fU0, ref l_U34._fU4, ref l_U34._fU8 );
    }
    sub_5204( uParam0 );
    sub_151();
    return;
}

void sub_5204(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U67 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_2D( l_U67, uParam0, 5.00000000, 5.00000000, 0 ))
            {
                TRIGGER_PTFX_ON_OBJ( "fire_hotdog_blaze", uParam0, 0.40000000, 0.10000000, 0.20000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                START_CHAR_FIRE( l_U67 );
                INCREMENT_INT_STAT_NO_MESSAGE( 272, 1 );
            }
        }
    }
    return;
}

int sub_5917(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_509() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_509() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_509() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_3456())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_637() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_6069())
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

void sub_6069()
{
    return sub_6080( 0, 0 );
}

int sub_6080(boolean bParam0, unknown uParam1)
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

int sub_6178(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_5917( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_509(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_6453();
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

void sub_6453()
{
    return sub_6080( 1, 1 );
}

int sub_6950(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_7372()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref iVar2 );
    if (iVar2 == 0)
    {
        PRINT( "upsetVend", 5000, 1 );
    }
    else if (iVar2 == 1)
    {
        PRINT( "upsetVend1", 5000, 1 );
    }
    else if (iVar2 == 2)
    {
        PRINT( "upsetVend2", 5000, 1 );
    }
    else if (iVar2 == 3)
    {
        PRINT( "upsetVend3", 5000, 1 );
    }
    else if (iVar2 == 4)
    {
        PRINT( "upsetVend4", 5000, 1 );
    }
    else if (iVar2 == 5)
    {
        PRINT( "upsetVend5", 5000, 1 );
    }
    else if (iVar2 == 6)
    {
        PRINT( "upsetVend6", 5000, 1 );
    }
    else if (iVar2 == 7)
    {
        PRINT( "upsetVend7", 5000, 1 );
    }
    else
    {
        PRINT( "upsetVend8", 5000, 1 );
    };;;;;;;;
    return;
}

void sub_8102()
{
    switch (l_U46)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U67 )))
        {
            if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U67 )))
            {
                SAY_AMBIENT_SPEECH( l_U67, "ATTRACT_BURGER", 0, 1, 0 );
                GET_GAME_TIMER( ref l_U47 );
                GENERATE_RANDOM_INT_IN_RANGE( 3000, 10000, ref l_U42 );
                l_U46++;
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U48 );
        l_U49 = l_U48 - l_U47;
        if (l_U49 > (6000 + l_U42))
        {
            l_U46--;
        }
        break;
    }
    return;
}

void sub_8334()
{
    if (l_U11 != 5)
    {
        if (l_U68 == nil)
        {
            if (HAVE_ANIMS_LOADED( "amb@burgercart" ))
            {
                BEGIN_CHAR_SEARCH_CRITERIA();
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 44 );
                END_CHAR_SEARCH_CRITERIA();
                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U13._fU0, l_U13._fU4, l_U13._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U68 );
            }
        }
        if (l_U68 != nil)
        {
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U68 )))
                {
                    if (NOT (IS_PED_A_MISSION_PED( l_U68 )))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U68, sub_637(), 0 )))
                        {
                            if (NOT (IS_PLAYER_TARGETTING_CHAR( sub_509(), l_U68 )))
                            {
                                if (NOT (sub_4405( l_U19 )))
                                {
                                    SET_CHAR_AS_MISSION_CHAR( l_U68 );
                                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U68, 0 );
                                    SET_CHAR_IN_CUTSCENE( l_U68, 1 );
                                    l_U12 = 0;
                                    l_U11 = 4;
                                }
                                else
                                {
                                    l_U68 = nil;
                                }
                            }
                            else
                            {
                                l_U68 = nil;
                            }
                        }
                        else
                        {
                            l_U68 = nil;
                        }
                    }
                    else
                    {
                        l_U68 = nil;
                    }
                }
                else
                {
                    l_U68 = nil;
                }
            }
            else
            {
                l_U68 = nil;
            }
        }
    }
    return;
}

void sub_8740()
{
    sub_8749();
    if (NOT (IS_CHAR_INJURED( l_U67 )))
    {
        switch (l_U12)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U68, l_U19._fU0, l_U19._fU4, l_U19._fU8, 2, -2, 1.00000000 );
                if (sub_9008( l_U67, l_U16 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD( l_U67, l_U16._fU0, l_U16._fU4, l_U16._fU8, l_U37, 2.00000000 );
                }
                l_U12 = 1;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U68, 27, ref l_U62 );
                if ((l_U62 == 7) || (l_U62 == 2))
                {
                    l_U12 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                if (sub_9008( l_U68, l_U19 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( l_U68, l_U19._fU0, l_U19._fU4, l_U19._fU8, l_U40, 2.00000000, 150.00000000 );
                    TASK_LOOK_AT_CHAR( l_U67, l_U68, 10000, 0 );
                    l_U62 = 0;
                    l_U12 = 3;
                }
                else
                {
                    l_U12 = 0;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U68, 68, ref l_U62 );
                if ((l_U62 == 7) || (l_U62 == 2))
                {
                    l_U12 = 4;
                }
            }
            break;
            case 4:
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                l_U62 = 0;
                l_U12 = 5;
            }
            break;
            case 5:
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U68, 34, ref l_U62 );
                if ((l_U62 == 7) || (l_U62 == 2))
                {
                    l_U12 = 6;
                }
            }
            break;
            case 6:
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                TASK_PLAY_ANIM( l_U68, "BUY_BURGER", "amb@burgercart", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U67, "SELL_BURGER", "amb@burgercart", 8.00000000, 0, 0, 0, 0, -2 );
                SAY_AMBIENT_SPEECH( l_U68, "Order_Food", 1, 0, 0 );
                TASK_LOOK_AT_CHAR( l_U67, l_U68, 7000, 0 );
                l_U62 = 0;
                l_U12 = 8;
            }
            break;
            case 8:
            if (IS_CHAR_PLAYING_ANIM( l_U67, "amb@burgercart", "SELL_BURGER" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U67, "amb@burgercart", "SELL_BURGER", ref l_U38 );
            }
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U68, "amb@burgercart", "BUY_BURGER" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U68, "amb@burgercart", "BUY_BURGER", ref l_U50 );
                }
            }
            if ((l_U38 > 0.02410000) AND (l_U55 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U69 ))
                {
                    if (NOT (IS_OBJECT_ATTACHED( l_U69 )))
                    {
                        ATTACH_OBJECT_TO_PED( l_U69, l_U67, 1219, 0, 0, 0, 0, 0, 0, 0 );
                        SET_OBJECT_VISIBLE( l_U69, 1 );
                    }
                }
            }
            if ((l_U38 > 0.64400000) AND (l_U53 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U69 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U69 ))
                    {
                        DETACH_OBJECT( l_U69, 1 );
                    }
                    DELETE_OBJECT( ref l_U69 );
                    SAY_AMBIENT_SPEECH( l_U67, "SELL_GOODS", 0, 1, 0 );
                    l_U53 = 1;
                }
            }
            if ((l_U50 > 0.93500000) AND (l_U54 == 0))
            {
                if (NOT (IS_CHAR_INJURED( l_U68 )))
                {
                    SAY_AMBIENT_SPEECH( l_U68, "Thanks", 1, 0, 0 );
                    if (NOT (IS_CHAR_INJURED( l_U68 )))
                    {
                        BLOCK_CHAR_GESTURE_ANIMS( l_U68, 1 );
                    }
                    GIVE_PED_AMBIENT_OBJECT( l_U68, l_U66 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68 );
                    l_U68 = nil;
                }
                l_U12 = 19;
            }
            break;
            case 19:
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U68, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U69 ))
            {
                if (IS_OBJECT_ATTACHED( l_U69 ))
                {
                    DETACH_OBJECT( l_U69, 1 );
                }
                DELETE_OBJECT( ref l_U69 );
            }
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U68, 1 );
            }
            sub_239( 2, "ObjScpt_06" );
            sub_239( 2, "ClaScpt_06" );
            sub_239( 2, "NULL" );
            CREATE_OBJECT( l_U66, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref l_U69, 1 );
            if (DOES_OBJECT_EXIST( l_U69 ))
            {
                SET_OBJECT_VISIBLE( l_U69, 0 );
                SET_OBJECT_COLLISION( l_U69, 0 );
            }
            l_U38 = 0.00000000;
            l_U52 = 0;
            l_U53 = 0;
            l_U54 = 0;
            l_U55 = 0;
            if (NOT (IS_CHAR_INJURED( l_U68 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U68, 0 );
            }
            l_U11 = 3;
            l_U12 = 0;
            break;
        }
    }
    return;
}

void sub_8749()
{
    if (NOT (IS_CHAR_INJURED( l_U68 )))
    {
        if (l_U12 > 4)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U68, l_U19._fU0, l_U19._fU4, l_U19._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                l_U12 = 19;
            }
        }
    }
    return;
}

int sub_9008(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        if ((VDIST( uVar6, uParam1 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_11017()
{
    if (NOT (IS_CHAR_INJURED( l_U67 )))
    {
        switch (l_U12)
        {
            case 0:
            GET_CHAR_COORDINATES( sub_637(), ref l_U31._fU0, ref l_U31._fU4, ref l_U31._fU8 );
            if (sub_11142())
            {
                l_U12 = 19;
            }
            l_U62 = 0;
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_637(), l_U19._fU0, l_U19._fU4, l_U19._fU8, 3, -2, 0.20000000 );
            TASK_LOOK_AT_CHAR( l_U67, sub_637(), 4000, 0 );
            l_U62 = 0;
            l_U12 = 1;
            break;
            case 1:
            if (sub_11142())
            {
                l_U12 = 19;
            }
            GET_SCRIPT_TASK_STATUS( sub_637(), 27, ref l_U62 );
            if (l_U62 == 7)
            {
                if (sub_11440( l_U19 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( sub_637(), l_U19._fU0, l_U19._fU4, l_U19._fU8, l_U40, 2.00000000, 270.00000000 );
                    sub_11572();
                    l_U12 = 4;
                }
                else
                {
                    l_U12 = 0;
                }
            }
            break;
            case 4:
            if (sub_11142())
            {
                l_U12 = 19;
                break;
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( sub_637(), 68, ref l_U62 );
                if ((l_U62 == 7) || (sub_11760( l_U40 )))
                {
                    GET_GAME_TIMER( ref l_U47 );
                    l_U62 = 0;
                    l_U12 = 5;
                }
            }
            break;
            case 5:
            TASK_PLAY_ANIM( sub_637(), "BUY_BURGER_PLYR", "amb@burgercart", 8.00000000, 0, 0, 0, 0, -2 );
            TASK_PLAY_ANIM( l_U67, "SELL_BURGER_PLYR", "amb@burgercart", 8.00000000, 0, 0, 0, 0, -2 );
            SAY_AMBIENT_SPEECH( sub_637(), "GENERIC_BUY", 1, 1, 0 );
            TASK_LOOK_AT_CHAR( sub_637(), l_U67, 8000, 0 );
            TASK_LOOK_AT_CHAR( l_U67, sub_637(), 3000, 0 );
            l_U12 = 12;
            break;
            case 12:
            if (IS_CHAR_PLAYING_ANIM( l_U67, "amb@burgercart", "SELL_BURGER_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U67, "amb@burgercart", "SELL_BURGER_PLYR", ref l_U38 );
            }
            if (IS_CHAR_PLAYING_ANIM( sub_637(), "amb@burgercart", "BUY_BURGER_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_637(), "amb@burgercart", "BUY_BURGER_PLYR", ref l_U50 );
            }
            if ((l_U38 > 0.28400000) AND (l_U55 == 0))
            {
                if (NOT (DOES_OBJECT_EXIST( l_U69 )))
                {
                    CREATE_OBJECT( l_U66, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref l_U69, 1 );
                }
                if (DOES_OBJECT_EXIST( l_U69 ))
                {
                    if (NOT (IS_OBJECT_ATTACHED( l_U69 )))
                    {
                        ATTACH_OBJECT_TO_PED( l_U69, l_U67, 1219, 0, 0, 0, 0, 0, 0, 0 );
                    }
                    SET_OBJECT_VISIBLE( l_U69, 1 );
                    l_U55 = 1;
                }
            }
            if (l_U38 > 0.56100000)
            {
                if (DOES_OBJECT_EXIST( l_U69 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U69 ))
                    {
                        DETACH_OBJECT( l_U69, 1 );
                    }
                    DELETE_OBJECT( ref l_U69 );
                }
            }
            if (l_U50 > 0.88400000)
            {
                if (NOT (DOES_OBJECT_EXIST( l_U70 )))
                {
                    CREATE_OBJECT( l_U66, l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U70, 1 );
                }
                if (DOES_OBJECT_EXIST( l_U70 ))
                {
                    SET_OBJECT_VISIBLE( l_U70, 0 );
                    if (NOT (IS_OBJECT_ATTACHED( l_U70 )))
                    {
                        ATTACH_OBJECT_TO_PED( l_U70, sub_637(), 1232, 0, 0, 0, 0, 0, 0, 0 );
                    }
                    sub_12700();
                    SET_OBJECT_VISIBLE( l_U70, 1 );
                }
                TASK_LOOK_AT_CHAR( l_U67, sub_637(), 5000, 0 );
                SAY_AMBIENT_SPEECH( l_U67, "SELL_GOODS", 0, 1, 0 );
                l_U38 = 0.00000000;
                l_U12 = 17;
            }
            break;
            case 17:
            if (IS_CHAR_PLAYING_ANIM( l_U67, "amb@burgercart", "SELL_BURGER_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U67, "amb@burgercart", "SELL_BURGER_PLYR", ref l_U38 );
            }
            if (l_U38 > 0.56100000)
            {
                if (DOES_OBJECT_EXIST( l_U69 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U69 ))
                    {
                        DETACH_OBJECT( l_U69, 1 );
                    }
                    DELETE_OBJECT( ref l_U69 );
                }
            }
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_637(), "amb@burgercart", "BUY_BURGER_PLYR" )))
            {
                SAY_AMBIENT_SPEECH( sub_637(), "THANKS", 1, 1, 0 );
                BLOCK_CHAR_GESTURE_ANIMS( sub_637(), 1 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_637(), "EAT_BURGER_PLYR", "amb@burgercart", 8.00000000, 0, 0, 0, 0, -2 );
                l_U38 = 0.00000000;
                if (IS_PLAYER_PLAYING( sub_509() ))
                {
                    sub_686( 1 );
                }
                l_U12 = 18;
            }
            break;
            case 18:
            if (IS_CHAR_PLAYING_ANIM( sub_637(), "amb@burgercart", "EAT_BURGER_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_637(), "amb@burgercart", "EAT_BURGER_PLYR", ref l_U38 );
            }
            BLOCK_CHAR_GESTURE_ANIMS( sub_637(), 1 );
            if ((l_U38 > 0.80000000) || (NOT (IS_CHAR_PLAYING_ANIM( sub_637(), "amb@burgercart", "EAT_BURGER_PLYR" ))))
            {
                if (DOES_OBJECT_EXIST( l_U70 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U70 ))
                    {
                        DETACH_OBJECT( l_U70, 1 );
                    }
                    DELETE_OBJECT( ref l_U70 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U70 );
                }
                l_U12 = 19;
            }
            break;
            case 19:
            BLOCK_CHAR_GESTURE_ANIMS( sub_637(), 1 );
            sub_239( 2, "ObjScpt_06" );
            sub_239( 2, "ClaScpt_06" );
            sub_239( 2, "NULL" );
            if (NOT (IS_CHAR_INJURED( l_U67 )))
            {
                TASK_ACHIEVE_HEADING( l_U67, l_U37 );
            }
            if (DOES_OBJECT_EXIST( l_U69 ))
            {
                if (IS_OBJECT_ATTACHED( l_U69 ))
                {
                    DETACH_OBJECT( l_U69, 1 );
                }
                DELETE_OBJECT( ref l_U69 );
            }
            if (NOT (DOES_OBJECT_EXIST( l_U69 )))
            {
                CREATE_OBJECT( l_U66, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref l_U69, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U69 ))
            {
                SET_OBJECT_VISIBLE( l_U69, 0 );
                SET_OBJECT_COLLISION( l_U69, 0 );
            }
            sub_14331();
            BLOCK_CHAR_GESTURE_ANIMS( sub_637(), 0 );
            l_U38 = 0.00000000;
            l_U52 = 0;
            l_U53 = 0;
            l_U54 = 0;
            l_U55 = 0;
            l_U11 = 3;
            l_U12 = 0;
            break;
        }
    }
    return;
}

int sub_11142()
{
    if (((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 ))) || (sub_11190()))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_637() );
        SET_PLAYER_CONTROL( sub_509(), 1 );
        return 1;
    }
    return 0;
}

int sub_11190()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 > 100) || (iVar2 < 65436))
    {
        return 1;
    }
    if ((iVar3 > 100) || (iVar3 < 65436))
    {
        return 1;
    }
    return 0;
}

int sub_11440(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( sub_637() )))
    {
        GET_CHAR_COORDINATES( sub_637(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if ((VDIST( uVar5, uParam0 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_11572()
{
    if (NOT (IS_CHAR_DEAD( sub_637() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_637(), ref l_U9 );
        if (l_U9 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_637(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_637(), 0, 1 );
        }
        if (l_U9 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_637(), 0, 1 );
        }
    }
    return;
}

int sub_11760(float fParam0)
{
    float fVar3;

    GET_CHAR_HEADING( sub_637(), ref fVar3 );
    if (fParam0 < 10)
    {
        if ((fVar3 >= 0) AND (fVar3 < 10))
        {
            return 1;
        }
    }
    if (fParam0 > 350)
    {
        if ((fVar3 > 350) AND (fVar3 <= 360))
        {
            return 1;
        }
    }
    if ((fVar3 > (fParam0 - 10)) AND (fVar3 < (fParam0 + 10)))
    {
        return 1;
    }
    return 0;
}

void sub_12700()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 308, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 97, 5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 104, 5 );
    sub_12744( 3, 1 );
    SET_CHAR_HEALTH( sub_637(), sub_13154() );
    ADD_SCORE( sub_509(), -5 );
    sub_13253();
    return;
}

void sub_12744(unknown uParam0, unknown uParam1)
{
    sub_12765( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_12765(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_13154()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_637() )))
    {
        GET_CHAR_HEALTH( sub_637(), ref Result );
        if (Result <= 100)
        {
            Result += 100;
        }
        else
        {
            Result = 200;
        }
    }
    return Result;
}

void sub_13253()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar2 );
    if (iVar2 == 0)
    {
        if (IS_PLAYER_PLAYING( sub_509() ))
        {
            SET_PLAYER_MOOD_NORMAL( sub_509() );
        }
    }
    sub_13310();
    return;
}

void sub_13310()
{
    if (NOT (IS_CHAR_DEAD( sub_637() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_637() );
    }
    return;
}

void sub_14331()
{
    if (NOT (IS_CHAR_DEAD( sub_637() )))
    {
        if (l_U9 != 0)
        {
            if (l_U9 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_637(), l_U9, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_637(), 46 );
            }
        }
    }
    return;
}