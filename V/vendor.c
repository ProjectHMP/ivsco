void main()
{
    l_U4 = 0.40000000;
    l_U5 = 0;
    l_U9 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U46 = 0;
    l_U47 = 0;
    l_U48 = 0;
    l_U49 = 0;
    l_U50 = -1;
    l_U56 = 1.00000000;
    l_U58 = 0;
    l_U59 = 0;
    l_U60 = 0;
    l_U61 = 0;
    l_U62 = 0;
    l_U63 = 0;
    l_U64 = 0;
    l_U65 = 0;
    l_U66 = 1;
    l_U67 = 0;
    l_U68 = "ObjScpt_04";
    l_U74 = -2075907982;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_173();
    }
    while (true)
    {
        WAIT( 0 );
        if (g_U9890 != 1)
        {
            if (IS_PLAYER_PLAYING( sub_531() ))
            {
                if (DOES_OBJECT_EXIST( l_U82 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U82 ))
                    {
                        switch (l_U11)
                        {
                            case 0:
                            sub_1257( l_U82 );
                            l_U11 = 1;
                            break;
                            case 1:
                            sub_2564( l_U82 );
                            sub_3083( l_U82 );
                            break;
                            case 2:
                            sub_3094( l_U82 );
                            break;
                            case 3:
                            sub_9044();
                            sub_3083( l_U82 );
                            sub_9274();
                            break;
                            case 4:
                            sub_3083( l_U82 );
                            sub_9869();
                            l_U46 = 0;
                            break;
                            case 5:
                            if (NOT (IS_CHAR_INJURED( l_U77 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U77 );
                                SET_CHAR_KEEP_TASK( l_U77, 1 );
                                TASK_WANDER_STANDARD( l_U77 );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U77 );
                                l_U77 = nil;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U76 )))
                            {
                                CLEAR_CHAR_TASKS( l_U76 );
                            }
                            if (l_U49 == 0)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U76 )))
                                {
                                    TASK_ACHIEVE_HEADING( l_U76, l_U37 );
                                }
                            }
                            g_U9084 = 0;
                            if (DOES_OBJECT_EXIST( l_U78 ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U78 ))
                                {
                                    DETACH_OBJECT( l_U78, 1 );
                                }
                                DELETE_OBJECT( ref l_U78 );
                                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U78 );
                            }
                            if (l_U12 != 23)
                            {
                                if (DOES_OBJECT_EXIST( l_U79 ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U79 ))
                                    {
                                        DETACH_OBJECT( l_U79, 1 );
                                    }
                                    DELETE_OBJECT( ref l_U79 );
                                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U79 );
                                }
                            }
                            CREATE_OBJECT( l_U74, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref l_U78, 1 );
                            if (DOES_OBJECT_EXIST( l_U78 ))
                            {
                                SET_OBJECT_VISIBLE( l_U78, 0 );
                                SET_OBJECT_COLLISION( l_U78, 0 );
                            }
                            if (IS_PLAYER_PLAYING( sub_531() ))
                            {
                                sub_708( 0 );
                                SET_PLAYER_CONTROL_ADVANCED( sub_531(), 0, 0, 1 );
                            }
                            l_U12 = 0;
                            l_U11 = 6;
                            break;
                            case 6:
                            sub_3083( l_U82 );
                            sub_12222();
                            break;
                            case 7:
                            if (l_U63 == 1)
                            {
                                if (DOES_CHAR_EXIST( l_U77 ))
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U77 );
                                    l_U77 = nil;
                                }
                                sub_3083( l_U82 );
                            }
                            else
                            {
                                sub_173();
                            }
                            break;
                        }
                    }
                    else
                    {
                        sub_173();
                    }
                }
                else
                {
                    sub_173();
                }
            }
            else
            {
                sub_173();
            }
        }
        else
        {
            sub_173();
        }
    }
    return;
}

void sub_173()
{
    sub_195( "ObjScpt_04" );
    sub_261( 2, "ObjScpt_04" );
    sub_261( 2, "ClaScpt_04" );
    sub_261( 2, "NULL" );
    if (l_U11 == 6)
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_659() );
        sub_708( 1 );
    }
    if (l_U11 > 0)
    {
        if (l_U50 >= 0)
        {
            STOP_SOUND( l_U50 );
            RELEASE_SOUND_ID( l_U50 );
        }
        UNREGISTER_SCRIPT_WITH_AUDIO();
    }
    if (DOES_OBJECT_EXIST( l_U78 ))
    {
        if (IS_OBJECT_ATTACHED( l_U78 ))
        {
            DETACH_OBJECT( l_U78, 1 );
        }
        DELETE_OBJECT( ref l_U78 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U78 );
    }
    if (DOES_OBJECT_EXIST( l_U79 ))
    {
        if (IS_OBJECT_ATTACHED( l_U79 ))
        {
            DETACH_OBJECT( l_U79, 1 );
        }
        DELETE_OBJECT( ref l_U79 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U79 );
    }
    if (l_U48 != 0)
    {
        STOP_PTFX( l_U48 );
    }
    if (NOT (IS_CHAR_INJURED( l_U76 )))
    {
        if (l_U58 == 1)
        {
            CLEAR_CHAR_TASKS( l_U76 );
            SET_CHAR_KEEP_TASK( l_U76, 1 );
            TASK_COMBAT( l_U76, sub_659() );
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U76 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U76 );
    }
    g_U9056 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_195(unknown uParam0)
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

void sub_261(int iParam0, string sParam1)
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
                    sub_482();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_531(), 1 );
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

void sub_482()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_531()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_659()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_708(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_531(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_531(), 1 );
    }
    return;
}

void sub_1257(unknown uParam0)
{
    l_U73 = sub_1266();
    REQUEST_ANIMS( "amb@hotdogcart" );
    REQUEST_MODEL( l_U73 );
    REQUEST_MODEL( l_U74 );
    l_U68 = "ObjScpt_04";
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U50 = GET_SOUND_ID();
    sub_2009( uParam0 );
    sub_2507();
    l_U68 = "ObjScpt_04";
    return;
}

void sub_1266()
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

void sub_2009(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
        GET_OBJECT_MODEL( uParam0, ref l_U75 );
        if (l_U75 == 526100790)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.10600000, -0.41000000, -0.50000000, ref l_U16._fU0, ref l_U16._fU4, ref l_U16._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.20000000, 0.91000000, 0.00000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
            l_U56 = 0.35000000;
        }
        else if (l_U75 == 1139438163)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.74200000, 0.53500000, -0.50000000, ref l_U16._fU0, ref l_U16._fU4, ref l_U16._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.88300000, -0.83000000, 0.00000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
            l_U56 = 0.30000000;
        }
        else if (l_U75 == 1914818237)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.50000000, 0.64000000, -0.50000000, ref l_U16._fU0, ref l_U16._fU4, ref l_U16._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.50000000, -0.70000000, 0.00000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
            l_U56 = 0.30000000;
        };;;
        GET_HEADING_FROM_VECTOR_2D( l_U13._fU0 - l_U16._fU0, l_U13._fU4 - l_U16._fU4, ref l_U37 );
        if (l_U75 == 1139438163)
        {
            l_U40 = l_U37 - 220;
        }
        else if (l_U75 == 1914818237)
        {
            l_U40 = l_U37 - 160;
        }
        else
        {
            l_U40 = l_U37 - 180;
        }
    }
    return;
}

void sub_2507()
{
    return;
}

void sub_2564(unknown uParam0)
{
    if ((HAS_MODEL_LOADED( l_U74 )) AND (HAS_MODEL_LOADED( l_U73 )))
    {
        if ((NOT (IS_OBJECT_ON_SCREEN( uParam0 ))) || (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_659(), l_U13._fU0, l_U13._fU4, l_U13._fU8, 50.00000000, 50.00000000, 50.00000000, 0 ))))
        {
            l_U48 = START_PTFX_ON_OBJ( "ambient_hotdogstand", uParam0, -0.05000000, 0.20000000, 0.40000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.20000000, 0.00000000, 0.20000000, ref l_U22._fU0, ref l_U22._fU4, ref l_U22._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.20000000, 0.00000000, 0.20000000, ref l_U25._fU0, ref l_U25._fU4, ref l_U25._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 0.50000000, -0.50000000, ref l_U28._fU0, ref l_U28._fU4, ref l_U28._fU8 );
            CREATE_OBJECT( l_U74, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref l_U78, 1 );
            if (DOES_OBJECT_EXIST( l_U78 ))
            {
                SET_OBJECT_VISIBLE( l_U78, 0 );
                SET_OBJECT_COLLISION( l_U78, 0 );
            }
            SET_OBJECT_LIGHTS( uParam0, 1 );
            CREATE_CHAR( 4, l_U73, l_U16._fU0, l_U16._fU4, l_U16._fU8, ref l_U76, 1 );
            g_U9056 = 1;
            if (NOT (IS_CHAR_INJURED( l_U76 )))
            {
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U76 );
                SET_CHAR_HEADING( l_U76, l_U37 );
                SET_CHAR_IN_CUTSCENE( l_U76, 1 );
                TASK_START_SCENARIO_IN_PLACE( l_U76, "scenario_standing", -1082130432 );
                l_U11 = 3;
            }
        }
    }
    return;
}

void sub_3083(unknown uParam0)
{
    unknown uVar3;

    sub_3094( uParam0 );
    if (IS_CHAR_IN_MELEE_COMBAT( sub_659() ))
    {
        sub_3540();
    }
    if (NOT (IS_CHAR_INJURED( l_U76 )))
    {
        if (IS_CHAR_IN_MELEE_COMBAT( l_U76 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_659(), l_U76, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                l_U65 = 1;
            }
        }
    }
    if (sub_3774())
    {
        sub_3540();
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (l_U64 == 0)
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_2D( sub_659(), uParam0, 20.00000000, 20.00000000, 0 ))
            {
                PLAY_SOUND_FROM_OBJECT( l_U50, "STREET_FOOD_GRILL", uParam0 );
                l_U64 = 1;
            }
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_HEALTH( uParam0, ref l_U42 );
    }
    if (DOES_CHAR_EXIST( l_U76 ))
    {
        if (IS_CHAR_DEAD( l_U76 ))
        {
            sub_173();
        }
        if (IS_CHAR_FATALLY_INJURED( l_U76 ))
        {
            sub_173();
        }
        if (IS_CHAR_INJURED( l_U76 ))
        {
            sub_173();
        }
        if (IS_PED_FLEEING( l_U76 ))
        {
            sub_173();
        }
        GET_CURRENT_CHAR_WEAPON( sub_659(), ref uVar3 );
        if (NOT (IS_CHAR_INJURED( l_U76 )))
        {
            if (IS_PLAYER_TARGETTING_CHAR( sub_531(), l_U76 ))
            {
                if (NOT sub_4228())
                {
                    SAY_AMBIENT_SPEECH( l_U76, "GUN_RUN", 0, 1, 0 );
                    l_U58 = 1;
                    sub_173();
                }
            }
        }
        if (IS_CHAR_SHOOTING_IN_AREA( sub_659(), l_U13._fU0 - 15, l_U13._fU4 - 15, l_U13._fU0 + 15, l_U13._fU4 + 15, 0 ))
        {
            sub_173();
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U77 )))
    {
        if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U77, sub_659(), 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_531(), l_U77 ))) || (sub_4469( l_U19 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U76 )))
            {
                CLEAR_CHAR_TASKS( l_U76 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U77 );
            sub_3540();
            l_U46 = 0;
            l_U77 = nil;
            l_U59 = 0;
            l_U60 = 0;
            l_U61 = 0;
            l_U62 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U77 )))
    {
        if (IS_CHAR_TOUCHING_CHAR( sub_659(), l_U77 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U77 );
                TASK_WANDER_STANDARD( l_U77 );
            }
            if (NOT (IS_CHAR_INJURED( l_U76 )))
            {
                CLEAR_CHAR_TASKS( l_U76 );
            }
            sub_3540();
            l_U46 = 0;
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U77 );
            l_U77 = nil;
            l_U59 = 0;
            l_U60 = 0;
            l_U61 = 0;
            l_U62 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (l_U11 == 6)
    {
        if ((((l_U12 == 19) || (l_U12 == 21)) || (l_U12 == 22)) || (l_U12 == 23))
        {
            if (sub_4862())
            {
                if (DOES_OBJECT_EXIST( l_U79 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U79 ))
                    {
                        DETACH_OBJECT( l_U79, 1 );
                    }
                    DELETE_OBJECT( ref l_U79 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U79 );
                    sub_3540();
                    if (NOT (IS_CONTROL_PRESSED( 2, 2 )))
                    {
                        CLEAR_CHAR_TASKS( sub_659() );
                    }
                    sub_708( 1 );
                    l_U12 = 23;
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U77 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U77, 0 ))
        {
            sub_3540();
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U77 );
            l_U77 = nil;
            l_U59 = 0;
            l_U60 = 0;
            l_U61 = 0;
            l_U62 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (l_U63 == 1)
    {
        if (DOES_OBJECT_EXIST( uParam0 ))
        {
            if (NOT (IS_OBJECT_UPRIGHT( uParam0, 15 )))
            {
                sub_5228( uParam0 );
            }
            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < l_U56)
            {
                sub_5228( uParam0 );
            }
        }
    }
    else if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_OBJECT_UPRIGHT( uParam0, 20 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_659(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                l_U58 = 1;
            }
            sub_173();
        }
        if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < l_U56)
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_659(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                l_U58 = 1;
            }
            sub_173();
        }
        GET_OBJECT_MODEL( uParam0, ref l_U75 );
        if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_659(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
        {
            if (l_U67 == 0)
            {
                if (IS_CHAR_TOUCHING_OBJECT_ON_FOOT( sub_659(), uParam0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U76 )))
                    {
                        if (l_U75 == 526100790)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.95000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U76 );
                                SAY_AMBIENT_SPEECH( l_U76, "Intimidate_Resp", 1, 1, 0 );
                                CLEAR_OBJECT_LAST_DAMAGE_ENTITY( uParam0 );
                                l_U67 = 1;
                            }
                        }
                        else if (l_U75 == 1914818237)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.96000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U76 );
                                SAY_AMBIENT_SPEECH( l_U76, "Intimidate_Resp", 1, 1, 0 );
                                CLEAR_OBJECT_LAST_DAMAGE_ENTITY( uParam0 );
                                l_U67 = 1;
                            }
                        }
                        else if (l_U75 == 1139438163)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.99000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U76 );
                                SAY_AMBIENT_SPEECH( l_U76, "Intimidate_Resp", 1, 1, 0 );
                                CLEAR_OBJECT_LAST_DAMAGE_ENTITY( uParam0 );
                                l_U67 = 1;
                            }
                        };;;
                    }
                }
            }
            else if (l_U65 == 0)
            {
                if (IS_CHAR_TOUCHING_OBJECT_ON_FOOT( sub_659(), uParam0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U76 )))
                    {
                        if (l_U75 == 526100790)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.50000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U76 );
                                SAY_AMBIENT_SPEECH( l_U76, "Intimidate_Resp", 1, 1, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U76 )))
                                {
                                    TASK_COMBAT( l_U76, sub_659() );
                                }
                                sub_3540();
                                l_U65 = 1;
                            }
                        }
                        else if (l_U75 == 1914818237)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.88000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U76 );
                                SAY_AMBIENT_SPEECH( l_U76, "Intimidate_Resp", 1, 1, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U76 )))
                                {
                                    TASK_COMBAT( l_U76, sub_659() );
                                }
                                sub_3540();
                                l_U65 = 1;
                            }
                        }
                        else if (l_U75 == 1139438163)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.95000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U76 );
                                SAY_AMBIENT_SPEECH( l_U76, "Intimidate_Resp", 1, 1, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U76 )))
                                {
                                    TASK_COMBAT( l_U76, sub_659() );
                                }
                                sub_3540();
                                l_U65 = 1;
                            }
                        };;;
                    }
                }
            }
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (LOCATE_OBJECT_3D( uParam0, l_U13._fU0, l_U13._fU4, l_U13._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            sub_2009( uParam0 );
        }
    }
    if (l_U11 != 7)
    {
        if (IS_PLAYER_PLAYING( sub_531() ))
        {
            if (NOT (IS_CHAR_INJURED( l_U76 )))
            {
                if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_531() ))
                {
                    GET_INTERIOR_FROM_CHAR( sub_659(), ref l_U80 );
                    if (l_U80 == nil)
                    {
                        if (DOES_OBJECT_EXIST( uParam0 ))
                        {
                            if (HAVE_ANIMS_LOADED( "amb@hotdogcart" ))
                            {
                                if ((l_U11 != 1) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_659() ))))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_659(), l_U19._fU0, l_U19._fU4, l_U19._fU8, 3.00000000, 3.00000000, 1.00000000, 0 ))
                                    {
                                        if (l_U11 != 6)
                                        {
                                            if (l_U65 == 0)
                                            {
                                                if (NOT (IS_PED_RAGDOLL( l_U76 )))
                                                {
                                                    if (NOT (IS_CHAR_GETTING_UP( l_U76 )))
                                                    {
                                                        if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U76 )))
                                                        {
                                                            if (l_U49 == 0)
                                                            {
                                                                if (l_U11 != 2)
                                                                {
                                                                    if (sub_6887( 2, 0 ))
                                                                    {
                                                                        if (sub_7148( 2, l_U68, 0 ))
                                                                        {
                                                                            if (IS_SCORE_GREATER( sub_531(), 5 ))
                                                                            {
                                                                                g_U9054 = 1;
                                                                                REMOVE_PED_HELMET( sub_659(), 1 );
                                                                                sub_195( l_U68 );
                                                                                g_U9058++;
                                                                                if (g_U9058 < g_U9057)
                                                                                {
                                                                                    l_U68 = "ObjScpt_04";
                                                                                }
                                                                                else
                                                                                {
                                                                                    l_U68 = "NULL";
                                                                                }
                                                                                l_U11 = 5;
                                                                            }
                                                                            else
                                                                            {
                                                                                sub_7892( "FAIL_TRAN", 3000, 0 );
                                                                            }
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        sub_261( 2, "ObjScpt_04" );
                                                                        sub_261( 2, "ClaScpt_04" );
                                                                        sub_261( 2, "NULL" );
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    sub_261( 2, "ObjScpt_04" );
                                                                    sub_261( 2, "ClaScpt_04" );
                                                                    sub_261( 2, "NULL" );
                                                                }
                                                            }
                                                            else
                                                            {
                                                                sub_261( 2, "ObjScpt_04" );
                                                                sub_261( 2, "ClaScpt_04" );
                                                                sub_261( 2, "NULL" );
                                                            }
                                                        }
                                                        else
                                                        {
                                                            sub_261( 2, "ObjScpt_04" );
                                                            sub_261( 2, "ClaScpt_04" );
                                                            sub_261( 2, "NULL" );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_261( 2, "ObjScpt_04" );
                                                        sub_261( 2, "ClaScpt_04" );
                                                        sub_261( 2, "NULL" );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_261( 2, "ObjScpt_04" );
                                                    sub_261( 2, "ClaScpt_04" );
                                                    sub_261( 2, "NULL" );
                                                }
                                            }
                                            else if (l_U66 == 0)
                                            {
                                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U76 );
                                                SAY_AMBIENT_SPEECH( l_U76, "Generic_Fuck_Off", 1, 0, 0 );
                                                sub_8348();
                                                TASK_LOOK_AT_CHAR( l_U76, sub_659(), 5000, 0 );
                                                l_U66 = 1;
                                            }
                                            sub_261( 2, "ObjScpt_04" );
                                            sub_261( 2, "ClaScpt_04" );
                                            sub_261( 2, "NULL" );;
                                        }
                                    }
                                    else
                                    {
                                        l_U66 = 0;
                                        sub_261( 2, "ObjScpt_04" );
                                        sub_261( 2, "ClaScpt_04" );
                                        sub_261( 2, "NULL" );
                                    }
                                }
                                else
                                {
                                    l_U66 = 0;
                                    sub_261( 2, "ObjScpt_04" );
                                    sub_261( 2, "ClaScpt_04" );
                                    sub_261( 2, "NULL" );
                                }
                            }
                        }
                    }
                }
                else
                {
                    sub_261( 2, "ObjScpt_04" );
                    sub_261( 2, "ClaScpt_04" );
                    sub_261( 2, "NULL" );
                }
            }
            else
            {
                sub_261( 2, "ObjScpt_04" );
                sub_261( 2, "ClaScpt_04" );
                sub_261( 2, "NULL" );
            }
        }
    }
    return;
}

void sub_3094(unknown uParam0)
{
    switch (l_U49)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U76 )))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U76, l_U16._fU0, l_U16._fU4, l_U16._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U81 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U16._fU0, l_U16._fU4, l_U16._fU8, 2, -1, 1.00000000 );
                TASK_CHAR_SLIDE_TO_COORD( 0, l_U16._fU0, l_U16._fU4, l_U16._fU8, l_U37, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U81 );
                l_U71 = 0;
                if (l_U77 != nil)
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U77 );
                    l_U77 = nil;
                }
                if (l_U11 == 6)
                {
                    sub_708( 1 );
                    CLEAR_CHAR_TASKS( sub_659() );
                    l_U12 = 0;
                }
                sub_2009( uParam0 );
                l_U11 = 2;
                l_U49++;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U76 )))
        {
            TASK_PERFORM_SEQUENCE( l_U76, l_U81 );
            CLEAR_SEQUENCE_TASK( l_U81 );
            l_U49++;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U76 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U76, 29, ref l_U71 );
            if (l_U71 == 7)
            {
                l_U11 = 3;
                l_U49 = 0;
            }
        }
        break;
    }
    return;
}

void sub_3540()
{
    if (DOES_OBJECT_EXIST( l_U79 ))
    {
        if (IS_OBJECT_ATTACHED( l_U79 ))
        {
            DETACH_OBJECT( l_U79, 1 );
        }
        DELETE_OBJECT( ref l_U79 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U79 );
    }
    if (DOES_OBJECT_EXIST( l_U78 ))
    {
        if (IS_OBJECT_ATTACHED( l_U78 ))
        {
            DETACH_OBJECT( l_U78, 1 );
        }
        DELETE_OBJECT( ref l_U78 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U78 );
    }
    return;
}

int sub_3774()
{
    if (sub_3783())
    {
        if (sub_3822())
        {
            return 1;
        }
    }
    return 0;
}

int sub_3783()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_3822()
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

int sub_4228()
{
    int iVar2;

    GET_CURRENT_CHAR_WEAPON( sub_659(), ref iVar2 );
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

int sub_4469(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_DEAD( sub_659() )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_659(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 1.00000000, 1.00000000, 3.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4862()
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

void sub_5228(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U31._fU0, ref l_U31._fU4, ref l_U31._fU8 );
        ADD_EXPLOSION( l_U31._fU0, l_U31._fU4, l_U31._fU8, 0, 0.10000000, 0, 0, 1.00000000 );
    }
    sub_5309( uParam0 );
    sub_173();
    return;
}

void sub_5309(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U76 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_2D( l_U76, uParam0, 5.00000000, 5.00000000, 0 ))
            {
                TRIGGER_PTFX_ON_OBJ( "fire_hotdog_blaze", uParam0, -0.05000000, 0.20000000, 0.40000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                START_CHAR_FIRE( l_U76 );
                INCREMENT_INT_STAT_NO_MESSAGE( 272, 1 );
            }
        }
    }
    return;
}

int sub_6887(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_531() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_531() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_531() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_3783())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_659() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_7039())
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

void sub_7039()
{
    return sub_7050( 0, 0 );
}

int sub_7050(boolean bParam0, unknown uParam1)
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

int sub_7148(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_6887( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_531(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_7423();
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

void sub_7423()
{
    return sub_7050( 1, 1 );
}

int sub_7892(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_8348()
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

void sub_9044()
{
    if (NOT (IS_CHAR_INJURED( l_U76 )))
    {
        switch (l_U51)
        {
            case 0:
            if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U76 )))
            {
                SAY_AMBIENT_SPEECH( l_U76, "ATTRACT_HOTDOG", 0, 1, 0 );
                GET_GAME_TIMER( ref l_U52 );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 8000, ref l_U55 );
                l_U51++;
            }
            break;
            case 1:
            GET_GAME_TIMER( ref l_U53 );
            l_U54 = l_U53 - l_U52;
            if (l_U54 > (6000 + l_U55))
            {
                l_U51--;
            }
            break;
        }
    }
    return;
}

void sub_9274()
{
    if (NOT g_U9084)
    {
        if (l_U11 != 5)
        {
            if (l_U77 == nil)
            {
                if (HAVE_ANIMS_LOADED( "amb@hotdogcart" ))
                {
                    BEGIN_CHAR_SEARCH_CRITERIA();
                    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 44 );
                    END_CHAR_SEARCH_CRITERIA();
                    GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U13._fU0, l_U13._fU4, l_U13._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U77 );
                }
            }
            if (l_U77 != nil)
            {
                if (NOT (IS_CHAR_INJURED( l_U77 )))
                {
                    if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U77 )))
                    {
                        if (NOT (IS_PED_A_MISSION_PED( l_U77 )))
                        {
                            if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U77, sub_659(), 0 )))
                            {
                                if (NOT (IS_PLAYER_TARGETTING_CHAR( sub_531(), l_U77 )))
                                {
                                    if (NOT (sub_4469( l_U19 )))
                                    {
                                        SET_CHAR_AS_MISSION_CHAR( l_U77 );
                                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U77, 0 );
                                        SET_CHAR_IN_CUTSCENE( l_U77, 1 );
                                        l_U12 = 0;
                                        l_U11 = 4;
                                    }
                                    else
                                    {
                                        l_U77 = nil;
                                    }
                                }
                                else
                                {
                                    l_U77 = nil;
                                }
                            }
                            else
                            {
                                l_U77 = nil;
                            }
                        }
                        else
                        {
                            l_U77 = nil;
                        }
                    }
                    else
                    {
                        l_U77 = nil;
                    }
                }
                else
                {
                    l_U77 = nil;
                }
            }
        }
    }
    else if (l_U77 == nil)
    {
        REQUEST_MODEL( 697247370 );
        while (NOT (HAS_MODEL_LOADED( 697247370 )))
        {
            WAIT( 0 );
            REQUEST_MODEL( 697247370 );
        }
        if (HAS_MODEL_LOADED( 697247370 ))
        {
            if (HAVE_ANIMS_LOADED( "amb@hotdogcart" ))
            {
                CREATE_CHAR( 4, 697247370, 923.86190000, -506.48510000, 14.03120000, ref l_U77, 1 );
                SET_CHAR_HEADING( l_U77, 75.50110000 );
                l_U12 = 0;
                l_U11 = 4;
            }
        }
    }
    return;
}

void sub_9869()
{
    sub_9878();
    if (NOT (IS_CHAR_INJURED( l_U76 )))
    {
        switch (l_U12)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U77, l_U19._fU0, l_U19._fU4, l_U19._fU8, 2, -2, 1.00000000 );
                if (sub_10137( l_U76, l_U16 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD( l_U76, l_U16._fU0, l_U16._fU4, l_U16._fU8, l_U37, 2.00000000 );
                }
                l_U12 = 1;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U77, 27, ref l_U69 );
                if ((l_U69 == 7) || (l_U69 == 2))
                {
                    l_U12 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                if (sub_10137( l_U77, l_U19 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( l_U77, l_U19._fU0, l_U19._fU4, l_U19._fU8, l_U40, 2.00000000, 150.00000000 );
                    l_U69 = 0;
                    l_U12 = 3;
                }
                else
                {
                    l_U12 = 0;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U77, 68, ref l_U69 );
                if ((l_U69 == 7) || (l_U69 == 2))
                {
                    l_U12 = 4;
                }
            }
            break;
            case 4:
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U77, l_U76 );
                TASK_LOOK_AT_CHAR( l_U76, l_U77, 12000, 0 );
                l_U69 = 0;
                l_U12 = 5;
            }
            break;
            case 5:
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U77, 34, ref l_U69 );
                if ((l_U69 == 7) || (l_U69 == 2))
                {
                    l_U12 = 6;
                }
            }
            break;
            case 6:
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                TASK_PLAY_ANIM( l_U77, "BUY_HOTDOG", "amb@hotdogcart", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U76, "SELL_HOTDOG", "amb@hotdogcart", 8.00000000, 0, 0, 0, 0, -2 );
                SAY_AMBIENT_SPEECH( l_U77, "Order_Food", 1, 0, 0 );
                l_U69 = 0;
                l_U12 = 8;
            }
            break;
            case 8:
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U77, "amb@hotdogcart", "BUY_HOTDOG" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U77, "amb@hotdogcart", "BUY_HOTDOG", ref l_U57 );
                }
                else
                {
                    l_U12 = 23;
                }
            }
            if (IS_CHAR_PLAYING_ANIM( l_U76, "amb@hotdogcart", "SELL_HOTDOG" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U76, "amb@hotdogcart", "SELL_HOTDOG", ref l_U38 );
            }
            if ((l_U38 > 0.15800000) AND (l_U61 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U78 ))
                {
                    if (NOT (IS_OBJECT_ATTACHED( l_U78 )))
                    {
                        SET_OBJECT_VISIBLE( l_U78, 1 );
                        ATTACH_OBJECT_TO_PED( l_U78, l_U76, 1219, 0.01000000, 0.00500000, 0, -0.18000000, -0.12000000, 0.04000000, 0 );
                    }
                }
                l_U61 = 1;
            }
            if ((l_U38 > 0.72000000) AND (l_U62 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U78 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U78 ))
                    {
                        DETACH_OBJECT( l_U78, 1 );
                    }
                    DELETE_OBJECT( ref l_U78 );
                }
                SAY_AMBIENT_SPEECH( l_U76, "SELL_GOODS", 0, 1, 0 );
                l_U62 = 1;
            }
            if (l_U57 > 0.79500000)
            {
                if (NOT (IS_CHAR_INJURED( l_U77 )))
                {
                    if (g_U9084 == 1)
                    {
                        SET_CHAR_KEEP_TASK( l_U77, 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U77, 925, 65045, 16, 2, -2, 2 );
                    }
                    SAY_AMBIENT_SPEECH( l_U77, "Thanks", 1, 0, 0 );
                    if (NOT (IS_CHAR_INJURED( l_U77 )))
                    {
                        BLOCK_CHAR_GESTURE_ANIMS( l_U77, 1 );
                    }
                    GIVE_PED_AMBIENT_OBJECT( l_U77, l_U74 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U77 );
                    l_U77 = nil;
                    l_U12 = 23;
                }
            }
            break;
            case 23:
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U77, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U78 ))
            {
                if (IS_OBJECT_ATTACHED( l_U78 ))
                {
                    DETACH_OBJECT( l_U78, 1 );
                }
                DELETE_OBJECT( ref l_U78 );
            }
            sub_261( 2, "ObjScpt_04" );
            sub_261( 2, "ClaScpt_04" );
            sub_261( 2, "NULL" );
            CREATE_OBJECT( l_U74, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref l_U78, 1 );
            if (DOES_OBJECT_EXIST( l_U78 ))
            {
                SET_OBJECT_VISIBLE( l_U78, 0 );
                SET_OBJECT_COLLISION( l_U78, 0 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( 697247370 );
            g_U9084 = 0;
            if (NOT (IS_CHAR_INJURED( l_U77 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U77, 0 );
            }
            l_U38 = 0.00000000;
            l_U59 = 0;
            l_U60 = 0;
            l_U61 = 0;
            l_U62 = 0;
            l_U11 = 3;
            l_U47 = 0;
            l_U12 = 0;
            break;
        }
    }
    return;
}

void sub_9878()
{
    if (NOT (IS_CHAR_INJURED( l_U77 )))
    {
        if (l_U12 > 4)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U77, l_U19._fU0, l_U19._fU4, l_U19._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                l_U12 = 23;
            }
        }
    }
    return;
}

int sub_10137(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_12222()
{
    if (NOT (IS_CHAR_INJURED( l_U76 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( sub_659(), 1 );
        BLOCK_CHAR_GESTURE_ANIMS( l_U76, 1 );
        switch (l_U12)
        {
            case 0:
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_659(), l_U19._fU0, l_U19._fU4, l_U19._fU8, 3, -2, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_COORD( l_U76, l_U19._fU0, l_U19._fU4, l_U19._fU8 );
            l_U69 = 0;
            l_U12 = 1;
            break;
            case 1:
            if (sub_12433())
            {
                l_U12 = 23;
            }
            GET_SCRIPT_TASK_STATUS( sub_659(), 27, ref l_U69 );
            if (l_U69 == 7)
            {
                if (sub_12641( l_U19 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( sub_659(), l_U19._fU0, l_U19._fU4, l_U19._fU8, l_U40, 2.00000000, 270.00000000 );
                    sub_12773();
                    l_U12 = 9;
                }
                else
                {
                    l_U12 = 0;
                }
            }
            break;
            case 9:
            if (sub_12433())
            {
                l_U12 = 23;
                break;
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( sub_659(), 68, ref l_U69 );
                if (l_U69 == 7)
                {
                    TASK_LOOK_AT_CHAR( l_U76, sub_659(), 5000, 0 );
                    l_U69 = 0;
                    l_U12 = 10;
                }
            }
            break;
            case 10:
            l_U12 = 16;
            break;
            case 16:
            if (NOT (DOES_OBJECT_EXIST( l_U79 )))
            {
                CREATE_OBJECT( l_U74, l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U79, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U79 ))
            {
                SET_OBJECT_COLLISION( l_U79, 0 );
                SET_OBJECT_VISIBLE( l_U79, 0 );
            }
            if (NOT (DOES_OBJECT_EXIST( l_U78 )))
            {
                CREATE_OBJECT( l_U74, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref l_U78, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U78 ))
            {
                SET_OBJECT_VISIBLE( l_U78, 0 );
                SET_OBJECT_COLLISION( l_U78, 0 );
            }
            TASK_PLAY_ANIM( l_U76, "SELL_HOTDOG_PLYR", "amb@hotdogcart", 8.00000000, 0, 0, 0, 0, -2 );
            TASK_PLAY_ANIM( sub_659(), "BUY_HOTDOG_PLYR", "amb@hotdogcart", 8.00000000, 0, 0, 0, 0, -2 );
            SAY_AMBIENT_SPEECH( sub_659(), "GENERIC_BUY", 1, 1, 0 );
            l_U38 = 0.00000000;
            l_U12 = 18;
            break;
            case 18:
            if (IS_CHAR_PLAYING_ANIM( l_U76, "amb@hotdogcart", "SELL_HOTDOG_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U76, "amb@hotdogcart", "SELL_HOTDOG_PLYR", ref l_U38 );
            }
            if (IS_CHAR_PLAYING_ANIM( sub_659(), "amb@hotdogcart", "BUY_HOTDOG_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_659(), "amb@hotdogcart", "BUY_HOTDOG_PLYR", ref l_U57 );
            }
            else
            {
                l_U12 = 21;
            }
            if ((l_U38 > 0.19400000) AND (l_U61 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U78 ))
                {
                    if (NOT (IS_OBJECT_ATTACHED( l_U78 )))
                    {
                        ATTACH_OBJECT_TO_PED( l_U78, l_U76, 1219, 0.01000000, 0.00500000, 0, -0.18000000, -0.12000000, 0.04000000, 0 );
                    }
                    SET_OBJECT_VISIBLE( l_U78, 1 );
                    l_U61 = 1;
                }
            }
            if ((l_U38 > 0.64500000) AND (l_U62 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U78 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U78 ))
                    {
                        DETACH_OBJECT( l_U78, 1 );
                    }
                    DELETE_OBJECT( ref l_U78 );
                    l_U62 = 1;
                }
            }
            if (l_U57 > 0.73500000)
            {
                if (DOES_OBJECT_EXIST( l_U79 ))
                {
                    SET_OBJECT_VISIBLE( l_U79, 1 );
                    if (NOT (IS_OBJECT_ATTACHED( l_U79 )))
                    {
                        ATTACH_OBJECT_TO_PED( l_U79, sub_659(), 1232, 0.23000000, 0.01000000, -0.07000000, -0.22000000, 3.48000000, 0, 0 );
                    }
                    SAY_AMBIENT_SPEECH( l_U76, "SELL_GOODS", 0, 1, 0 );
                    sub_13930();
                    l_U12 = 21;
                }
            }
            break;
            case 21:
            if (IS_CHAR_PLAYING_ANIM( l_U76, "amb@hotdogcart", "SELL_HOTDOG_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U76, "amb@hotdogcart", "SELL_HOTDOG_PLYR", ref l_U38 );
            }
            if ((l_U38 > 0.64500000) AND (l_U62 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U78 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U78 ))
                    {
                        DETACH_OBJECT( l_U78, 1 );
                    }
                    DELETE_OBJECT( ref l_U78 );
                    l_U62 = 1;
                }
            }
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_659(), "amb@hotdogcart", "BUY_HOTDOG_PLYR" )))
            {
                SAY_AMBIENT_SPEECH( sub_659(), "THANKS", 1, 1, 0 );
                BLOCK_CHAR_GESTURE_ANIMS( sub_659(), 1 );
                if (DOES_OBJECT_EXIST( l_U79 ))
                {
                    TASK_LOOK_AT_OBJECT( sub_659(), l_U79, 2000, 0 );
                }
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_659(), "EAT_HOTDOG_PLYR", "amb@hotdogcart", 8.00000000, 0, 0, 0, 0, -2 );
                l_U38 = 0.00000000;
                if (IS_PLAYER_PLAYING( sub_531() ))
                {
                    sub_708( 1 );
                }
                l_U12 = 22;
            }
            break;
            case 22:
            BLOCK_CHAR_GESTURE_ANIMS( sub_659(), 1 );
            if (IS_CHAR_PLAYING_ANIM( sub_659(), "amb@hotdogcart", "EAT_HOTDOG_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_659(), "amb@hotdogcart", "EAT_HOTDOG_PLYR", ref l_U38 );
            }
            if ((l_U38 > 0.99000000) || (NOT (IS_CHAR_PLAYING_ANIM( sub_659(), "amb@hotdogcart", "EAT_HOTDOG_PLYR" ))))
            {
                if (DOES_OBJECT_EXIST( l_U79 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U79 ))
                    {
                        DETACH_OBJECT( l_U79, 1 );
                    }
                    DELETE_OBJECT( ref l_U79 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U79 );
                }
                BLOCK_CHAR_GESTURE_ANIMS( sub_659(), 1 );
                l_U12 = 23;
            }
            break;
            case 23:
            BLOCK_CHAR_GESTURE_ANIMS( sub_659(), 1 );
            sub_261( 2, "ObjScpt_04" );
            sub_261( 2, "ClaScpt_04" );
            sub_261( 2, "NULL" );
            if (DOES_OBJECT_EXIST( l_U78 ))
            {
                if (IS_OBJECT_ATTACHED( l_U78 ))
                {
                    DETACH_OBJECT( l_U78, 1 );
                }
                DELETE_OBJECT( ref l_U78 );
            }
            CREATE_OBJECT( l_U74, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref l_U78, 1 );
            if (DOES_OBJECT_EXIST( l_U78 ))
            {
                SET_OBJECT_VISIBLE( l_U78, 0 );
                SET_OBJECT_COLLISION( l_U78, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U76 )))
            {
                TASK_ACHIEVE_HEADING( l_U76, l_U37 );
            }
            BLOCK_CHAR_GESTURE_ANIMS( sub_659(), 0 );
            BLOCK_CHAR_GESTURE_ANIMS( l_U76, 0 );
            l_U38 = 0.00000000;
            l_U59 = 0;
            l_U60 = 0;
            l_U61 = 0;
            l_U62 = 0;
            g_U9054 = 0;
            sub_15602();
            l_U11 = 3;
            l_U12 = 0;
            break;
        }
    }
    return;
}

int sub_12433()
{
    if (((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 ))) || (sub_12481()))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_659() );
        SET_PLAYER_CONTROL( sub_531(), 1 );
        return 1;
    }
    return 0;
}

int sub_12481()
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

int sub_12641(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( sub_659() )))
    {
        GET_CHAR_COORDINATES( sub_659(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if ((VDIST( uVar5, uParam0 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_12773()
{
    if (NOT (IS_CHAR_DEAD( sub_659() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_659(), ref l_U9 );
        if (l_U9 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_659(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_659(), 0, 1 );
        }
        if (l_U9 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_659(), 0, 1 );
        }
    }
    return;
}

void sub_13930()
{
    ADD_SCORE( sub_531(), -5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 97, 5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 104, 5 );
    sub_13976( 1, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 307, 1 );
    sub_14392();
    SET_CHAR_HEALTH( sub_659(), sub_14509() );
    return;
}

void sub_13976(unknown uParam0, unknown uParam1)
{
    sub_13997( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_13997(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_14392()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar2 );
    if (iVar2 == 0)
    {
        if (IS_PLAYER_PLAYING( sub_531() ))
        {
            SET_PLAYER_MOOD_NORMAL( sub_531() );
        }
    }
    sub_14449();
    return;
}

void sub_14449()
{
    if (NOT (IS_CHAR_DEAD( sub_659() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_659() );
    }
    return;
}

void sub_14509()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_659() )))
    {
        GET_CHAR_HEALTH( sub_659(), ref Result );
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

void sub_15602()
{
    if (NOT (IS_CHAR_DEAD( sub_659() )))
    {
        if (l_U9 != 0)
        {
            if (l_U9 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_659(), l_U9, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_659(), 46 );
            }
        }
    }
    return;
}