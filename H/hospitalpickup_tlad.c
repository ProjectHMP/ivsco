void main()
{
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
    l_U507 = 0;
    l_U511 = 0.00000000;
    l_U513 = 0;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 1;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U523 = 0;
    l_U524 = 0;
    l_U525 = 0;
    l_U526 = 0;
    l_U527 = 1;
    l_U528 = 0;
    l_U555 = 0;
    l_U559 = 0;
    l_U560 = -1;
    l_U561 = 1;
    l_U562 = "NONE";
    l_U589 = 0;
    l_U590 = 0;
    l_U591 = {0.00000000, 0.00000000, 0.00000000};
    l_U594 = 0.00000000;
    l_U595 = nil;
    l_U596 = 0;
    l_U597 = nil;
    l_U598 = nil;
    l_U599 = 0;
    l_U600 = 0;
    l_U601 = 0;
    l_U602 = 0;
    l_U609 = 0;
    l_U610 = 0;
    l_U638 = g_U23;
    l_U639 = 0;
    l_U640 = 0;
    l_U641 = 0;
    l_U642 = 0;
    l_U643 = 0;
    l_U644 = 12;
    l_U645 = 0;
    l_U650 = 0;
    l_U652 = -1;
    l_U653 = 4;
    l_U674 = 0;
    l_U686 = 0;
    l_U687 = 0;
    l_U692 = 0;
    l_U693 = "";
    l_U694 = 0;
    l_U707 = 0;
    l_U711 = 0;
    l_U712 = 1;
    l_U713 = 0;
    l_U714 = 0;
    l_U715 = 0;
    l_U716 = 0;
    l_U717 = "JOHNNY";
    l_U743 = 0.00000000;
    l_U747 = 0;
    l_U748 = 0;
    l_U749 = l_U763;
    if (g_U18635[l_U749]._fU704._fU176)
    {
        if (g_U20908)
        {
            sub_819( "HospitalPickUp: g_doingHospitalPickup already TRUE" );
        }
        g_U20908 = 1;
    }
    sub_988();
    while (NOT l_U645)
    {
        if (NOT sub_3308())
        {
            sub_819( "HospitalPickup: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_32699();
    }
    WAIT( 0 );
    while (sub_3308())
    {
        WAIT( 0 );
    }
    sub_32699();
    sub_819( "HOSPITAL PICKUP: should never reach ENDSCRIPT" );
    return;
}

void sub_819(unknown uParam0)
{
    sub_857( "ERROR: HOSPITAL PICKUP: ", uParam0 );
    return;
}

void sub_857(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_988()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;

    # -sub_C1FFC0-0xc214c8( 0, ref l_U529 );
    sub_1009();
    sub_1301();
    sub_1325();
    l_U639 = 1;
    l_U640 = 0;
    if (NOT g_U18635[l_U749]._fU704._fU176)
    {
        l_U639 = 7;
        return;
    }
    uVar2 = g_U18635[l_U749]._fU704._fU28;
    uVar3 = g_U11327[uVar2]._fU16;
    sub_1604( l_U751._fU0, l_U751._fU4, l_U751._fU8, uVar3 );
    sub_1652( g_U20751[l_U749] );
    sub_1683( 1 );
    sub_1866();
    sub_1944( 0, ref g_U18635[l_U749]._fU704._fU36 );
    sub_1944( 1, ref g_U18635[l_U749]._fU704._fU68 );
    sub_1944( 2, ref g_U18635[l_U749]._fU704._fU52 );
    iVar4 = 1;
    sub_2050( ref l_U758, 2, 0, iVar4 );
    l_U600 = 1;
    sub_2678( ref g_U18635[l_U749]._fU704._fU84 );
    sub_2843( 0, sub_2792(), "JOHNNY", 0 );
    l_U549 = {g_U18635[l_U749]._fU704._fU116};
    l_U553 = g_U18635[l_U749]._fU704._fU132;
    l_U554 = l_U749;
    sub_3078( l_U562, l_U562, l_U562, l_U562 );
    return;
}

void sub_1009()
{
    l_U639 = 0;
    l_U640 = 0;
    l_U642 = 0;
    l_U643 = 0;
    l_U644 = 12;
    l_U645 = 0;
    l_U747 = 0;
    sub_1060();
    return;
}

void sub_1060()
{
    l_U659._fU0 = 1;
    l_U659._fU4 = 0;
    l_U659._fU8 = 0;
    l_U659._fU12 = 0;
    l_U659._fU16 = 1;
    l_U659._fU20 = 0;
    l_U659._fU24 = 0;
    l_U659._fU28 = 0;
    l_U659._fU32 = 0;
    l_U659._fU36 = 0;
    l_U659._fU40 = 0;
    l_U659._fU44 = 0;
    l_U659._fU48 = 0;
    l_U659._fU52 = 64537;
    l_U659._fU56 = 64537;
    sub_1207();
    l_U674 = 0;
    return;
}

void sub_1207()
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

void sub_1301()
{
    l_U651 = nil;
    return;
}

void sub_1325()
{
    l_U750 = nil;
    l_U688 = nil;
    sub_1348();
    l_U757 = nil;
    sub_1412();
    return;
}

void sub_1348()
{
    unknown uVar2;

    uVar2 = g_U18635[l_U749]._fU704._fU28;
    l_U751 = {g_U11327[uVar2]._fU4};
    return;
}

void sub_1412()
{
    unknown uVar2;

    uVar2 = g_U18635[l_U749]._fU704._fU32;
    l_U754 = {g_U10767[uVar2]._fU4};
    l_U689 = {g_U10767[uVar2]._fU16};
    return;
}

void sub_1604(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U508 = {uParam0, uParam1, uParam2};
    l_U511 = uParam3;
    return;
}

void sub_1652(unknown uParam0)
{
    l_U523 = 1;
    l_U522 = uParam0;
    return;
}

void sub_1683(boolean bParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( l_U512 )))
    {
        ADD_BLIP_FOR_CONTACT( l_U508._fU0, l_U508._fU4, l_U508._fU8, ref l_U512 );
        CHANGE_BLIP_DISPLAY( l_U512, 2 );
        CHANGE_BLIP_PRIORITY( l_U512, 1 );
        if (l_U523)
        {
            CHANGE_BLIP_SPRITE( l_U512, l_U522 );
            if (bParam0)
            {
                iVar3 = 0;
                GET_GAME_TIMER( ref iVar3 );
                CHANGE_BLIP_PRIORITY( l_U512, l_U8 );
                FLASH_BLIP( l_U512, 1 );
                l_U524 = iVar3 + 10000;
                l_U525 = 1;
            }
        }
    }
    return;
}

void sub_1866()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        StrCopy( ref l_U530[I], "", 16 );
    }
    return;
}

void sub_1944(int iParam0, unknown uParam1)
{
    if (iParam0 >= 3)
    {
        return;
    }
    StrCopy( ref l_U530[iParam0], uParam1, 16 );
    return;
}

void sub_2050(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_2103( iParam0, uParam1, uParam2 );
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
        sub_2235( iParam0 + 0 );
    }
    return;
}

void sub_2103(int iParam0, int iParam1, int iParam2)
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
        sub_2235( iParam0 + 0 );
    }
    return;
}

void sub_2235(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_2266( iParam0->_fU4 )))
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

int sub_2266(unknown uParam0)
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

void sub_2678(unknown uParam0)
{
    StrCopy( ref l_U34._fU0, uParam0, 16 );
    sub_2697();
    return;
}

void sub_2697()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U34._fU16[I]._fU0 = nil;
        StrCopy( ref l_U34._fU16[I]._fU4, "", 32 );
        l_U34._fU344[I] = 0;
    }
    return;
}

void sub_2792()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2843(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2927( "\n PED NUMBER ", uParam0 );
    sub_2967( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2927(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2967(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3078(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( ref l_U563._fU0, uParam0, 32 );
    StrCopy( ref l_U563._fU32, uParam1, 16 );
    StrCopy( ref l_U563._fU48, uParam2, 16 );
    StrCopy( ref l_U563._fU64, uParam3, 16 );
    l_U563._fU80 = 0;
    l_U563._fU84 = 0;
    l_U563._fU88 = 0;
    l_U563._fU92 = 0;
    l_U563._fU100 = 1;
    l_U563._fU96 = 1;
    if (COMPARE_STRING( uParam0, l_U562 ))
    {
        l_U563._fU96 = 0;
    }
    sub_3222();
    return;
}

void sub_3222()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref iVar3 );
    l_U563._fU84 = iVar2 + iVar3;
    return;
}

int sub_3308()
{
    boolean bVar2;

    l_U642 = 0;
    l_U643 = 0;
    l_U644 = 12;
    switch (l_U639)
    {
        case 0:
        sub_819( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_3448();
        break;
        case 5:
        sub_16491();
        break;
        case 6:
        l_U642 = 1;
        break;
        case 7:
        sub_27837();
        break;
        default:
        sub_819( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    bVar2 = sub_30499( l_U750 );
    if (bVar2)
    {
        l_U643 = 1;
        l_U644 = 7;
        sub_30806();
        return 0;
    }
    sub_33295( l_U750 );
    if (l_U642)
    {
        sub_47341();
        return 0;
    }
    if (l_U643)
    {
        sub_30806();
        return 0;
    }
    return 1;
}

void sub_3448()
{
    l_U658 = 0;
    if (NOT (l_U750 == nil))
    {
        if (IS_CHAR_INJURED( l_U750 ))
        {
            l_U643 = 1;
            l_U644 = 0;
            return;
        }
    }
    if (sub_3515( l_U758 ))
    {
        if (NOT sub_3765())
        {
            l_U643 = 1;
            l_U644 = 9;
            return;
        }
    }
    if (sub_3944())
    {
        if (sub_3765())
        {
            l_U643 = 1;
            l_U644 = 9;
            return;
        }
    }
    if (NOT (sub_4032( l_U749, ref l_U750, ref l_U688 )))
    {
        return;
    }
    if (NOT l_U643)
    {
        sub_16370();
        if (NOT (IS_CHAR_DEAD( sub_2792() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2792(), 0 );
        }
        l_U687 = 1;
        l_U639 = 5;
    }
    return;
}

int sub_3515(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_3684( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_3684(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

boolean sub_3765()
{
    float fVar2;

    fVar2 = sub_3774();
    return fVar2 <= 100.00000000;
}

void sub_3774()
{
    vector vVar2;
    float Result;

    if (IS_CHAR_DEAD( sub_2792() ))
    {
        return 9999.90000000;
    }
    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    GET_CHAR_COORDINATES( sub_2792(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_DISTANCE_BETWEEN_COORDS_3D( vVar2.x, vVar2.y, vVar2.z, l_U508._fU0, l_U508._fU4, l_U508._fU8, ref Result );
    return Result;
}

boolean sub_3944()
{
    int iVar2;

    iVar2 = GET_TIME_SINCE_LAST_DEATH();
    if (iVar2 < 0)
    {
        return 0;
    }
    return iVar2 < 10000;
}

int sub_4032(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_4041() )))
    {
        return 0;
    }
    sub_4091( uParam0 );
    sub_4126();
    sub_4330( (uParam1^) );
    sub_5110();
    if (l_U507 == 0)
    {
        sub_5225( uParam0, uParam1 );
        return 0;
    }
    if (l_U507 == 1)
    {
        sub_7412( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U507 == 2)
    {
        sub_8378( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U507 == 3)
    {
        sub_11710();
        return 0;
    }
    if (l_U507 == 4)
    {
        if (sub_12069( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_4041(), 1 );
    g_U18635[uParam0]._fU20 = 1;
    return 1;
}

void sub_4041()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4091(unknown uParam0)
{
    l_U514 = g_U18635[uParam0]._fU28;
    return;
}

void sub_4126()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4041() )))
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
    if (sub_3774() < 20.00000000)
    {
        return;
    }
    if (NOT (GET_CLOSEST_CAR_NODE( l_U508._fU0, l_U508._fU4, l_U508._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 )))
    {
        return;
    }
    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    SET_CHAR_COORDINATES( sub_2792(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    return;
}

void sub_4330(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U563._fU0, l_U562 ))
    {
        return;
    }
    if (NOT l_U563._fU96)
    {
        return;
    }
    sub_4385( uParam0 );
    l_U563._fU80 = l_U507;
    return;
}

void sub_4385(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    boolean bVar9;

    if (l_U507 == 0)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( ref l_U563._fU0 )))
    {
        REQUEST_ANIMS( ref l_U563._fU0 );
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
        TASK_PLAY_ANIM( uParam0, ref l_U563._fU32, ref l_U563._fU0, 8.00000000, 1, 0, 0, 0, -2 );
        l_U563._fU88 = 0;
        l_U563._fU92 = 0;
        return;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = 0;
    if ((((l_U563._fU80 == 1) AND (l_U507 == 2)) AND (NOT (COMPARE_STRING( ref l_U563._fU48, l_U562 )))) AND (NOT l_U563._fU88))
    {
        iVar7 = 1;
    }
    bVar8 = false;
    if (l_U563._fU100)
    {
        bVar9 = sub_4684();
        if (NOT bVar9)
        {
            bVar9 = IS_CHAR_ON_FOOT( sub_2792() );
        }
        if (((((l_U563._fU80 == 1) AND (l_U507 == 2)) AND (bVar9)) AND (NOT (COMPARE_STRING( ref l_U563._fU64, l_U562 )))) AND (NOT l_U563._fU92))
        {
            iVar7 = 1;
            bVar8 = true;
        }
    }
    else if (l_U507 == 1)
    {
        l_U563._fU100 = 1;
    }
    if ((iVar6 > l_U563._fU84) || (iVar7))
    {
        CLEAR_CHAR_TASKS( uParam0 );
        if (bVar8)
        {
            TASK_PLAY_ANIM( uParam0, ref l_U563._fU64, ref l_U563._fU0, 8.00000000, 0, 0, 0, 0, -2 );
            l_U563._fU100 = 0;
            l_U563._fU92 = 1;
        }
        else if (NOT (COMPARE_STRING( ref l_U563._fU48, l_U562 )))
        {
            TASK_PLAY_ANIM( uParam0, ref l_U563._fU48, ref l_U563._fU0, 8.00000000, 0, 0, 0, 0, -2 );
        }
        l_U563._fU88 = 1;
        sub_3222();
        return;
    }
    return;
}

boolean sub_4684()
{
    unknown uVar2;
    float fVar3;

    if (IS_CHAR_DEAD( sub_2792() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2792() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    return fVar3 > 0.02000000;
}

void sub_5110()
{
    int iVar2;

    if (NOT l_U525)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U524))
    {
        return;
    }
    CHANGE_BLIP_PRIORITY( l_U512, l_U7 );
    FLASH_BLIP( l_U512, 0 );
    l_U524 = 0;
    l_U525 = 0;
    return;
}

void sub_5225(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_3774();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((g_U12303) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        return;
    }
    if (NOT (sub_5288( uParam0 )))
    {
        sub_5661( uParam0 );
        return;
    }
    if (NOT sub_5695())
    {
        return;
    }
    sub_5801( uParam0, uParam1, l_U508._fU0, l_U508._fU4, l_U508._fU8, l_U511 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U529 );
    g_U18635[uParam0]._fU24 = 1;
    sub_2843( l_U553, (uParam1^), ref l_U549, 0 );
    sub_7083( uParam0, (uParam1^) );
    sub_7197();
    l_U507 = 1;
    l_U516 = 0;
    return;
}

void sub_5288(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5299( uParam0 ) );
}

int sub_5299(unknown uParam0)
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
    sub_5598( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5598(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_5661(unknown uParam0)
{
    REQUEST_MODEL( sub_5299( uParam0 ) );
    return;
}

int sub_5695()
{
    if (NOT l_U589)
    {
        return 1;
    }
    REQUEST_MODEL( l_U590 );
    if (NOT (HAS_MODEL_LOADED( l_U590 )))
    {
        return 0;
    }
    return 1;
}

void sub_5801(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_5812( uParam0 ), sub_5299( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_5919( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_6025( uParam0, (uParam1^) );
    return;
}

int sub_5812(unknown uParam0)
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

void sub_5919(unknown uParam0, unknown uParam1)
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

void sub_6025(unknown uParam0, unknown uParam1)
{
    sub_6037( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_6037(unknown uParam0, int iParam1)
{
    sub_6048( uParam0 );
    if (iParam1 == 22)
    {
        sub_6148( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_6807( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_6048(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_6148(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_2792()) AND (g_U15728[19]))
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

void sub_6807(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_6148( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_6148( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_7083(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_6807( uParam1, uParam0, l_U559 );
    CLEAR_CHAR_PROP( uParam1, 0 );
    iVar4 = -1;
    if (NOT (iVar4 == l_U560))
    {
        if (l_U560 == -1)
        {
            CLEAR_CHAR_PROP( uParam1, 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( uParam1, 1, l_U560 );
        }
    }
    ENABLE_PED_HELMET( uParam1, l_U561 );
    return;
}

void sub_7197()
{
    if (NOT l_U589)
    {
        return;
    }
    if (DOES_VEHICLE_EXIST( l_U595 ))
    {
        return;
    }
    CLEAR_AREA( l_U591._fU0, l_U591._fU4, l_U591._fU8, 5.00000000, 0 );
    CREATE_CAR( l_U590, l_U591._fU0, l_U591._fU4, l_U591._fU8, ref l_U595, 1 );
    SET_CAR_HEADING( l_U595, l_U594 );
    SET_CAR_ON_GROUND_PROPERLY( l_U595 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U590 );
    }
    return;
}

void sub_7412(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_3774();
    if (((fVar5 > 100.00000000) || (g_U12303)) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        sub_7465( uParam1 );
        sub_7498( uParam0 );
        sub_7541();
        l_U507 = 0;
        g_U18635[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_2792() )))
    {
        if (sub_7805( sub_2792() ))
        {
            return;
        }
    }
    if (fVar5 < 18.00000000)
    {
        l_U507 = 2;
        if (NOT IS_HINT_RUNNING())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2792() ))
            {
                GET_CHAR_COORDINATES( (uParam1^), ref l_U556._fU0, ref l_U556._fU4, ref l_U556._fU8 );
                l_U556._fU8 += 1.50000000;
                HINT_CAM( l_U556._fU0, l_U556._fU4, l_U556._fU8, 0, 0, 0, 30000 );
            }
        }
        l_U515 = 0;
        sub_8209();
        sub_8255( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_2792(), -2, 0 );
        return;
    }
    return;
}

void sub_7465(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_7498(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_5299( uParam0 ) );
    return;
}

void sub_7541()
{
    float fVar2;

    if (NOT (DOES_VEHICLE_EXIST( l_U595 )))
    {
        return;
    }
    if (IS_CHAR_INJURED( sub_2792() ))
    {
        return;
    }
    if (IS_CAR_DEAD( l_U595 ))
    {
        return;
    }
    fVar2 = 98.00000000 - 5.00000000;
    if ((IS_CHAR_IN_CAR( sub_2792(), l_U595 )) || (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2792(), l_U595, fVar2, fVar2, 30.00000000, 0 )))
    {
        sub_7674();
        return;
    }
    DELETE_CAR( ref l_U595 );
    l_U595 = nil;
    return;
}

void sub_7674()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U595 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U595 );
    l_U595 = nil;
    return;
}

int sub_7805(int iParam0)
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
                if (sub_7869( uVar3 ))
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

int sub_7869(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2784))
    {
        return 1;
    }
    return 0;
}

void sub_8209()
{
    REMOVE_BLIP( l_U512 );
    l_U524 = 0;
    l_U525 = 0;
    return;
}

void sub_8255(unknown uParam0, unknown uParam1)
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

void sub_8378(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_3774();
    if (sub_8400( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_8626( uVar4 ))
    {
        return;
    }
    sub_10789();
    if ((sub_10883()) || (sub_11463()))
    {
        return;
    }
    return;
}

int sub_8400(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_2792() )))
    {
        if (sub_7805( sub_2792() ))
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
    l_U507 = 1;
    CLEAR_HELP();
    sub_8512( uParam1 );
    sub_1683( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    return 1;
}

void sub_8512(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_8626(float fParam0)
{
    int iVar3;

    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U507 = 3;
    if (NOT l_U516)
    {
        sub_8669();
    }
    iVar3 = 0;
    if (l_U515)
    {
        if (l_U517)
        {
            PRINT_HELP_FOREVER( ref l_U530[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U530[1] );
        }
    }
    else if (l_U514)
    {
        sub_8851( l_U554, ref l_U543 );
        iVar3 = sub_10165( l_U554 );
        sub_10370( iVar3 );
    }
    else
    {
        sub_10697( l_U554, ref l_U543 );
    }
    return 1;
}

int sub_8669()
{
    int iVar2;

    l_U516 = 1;
    iVar2 = IS_CHAR_IN_ANY_CAR( sub_2792() );
    if (l_U515 == iVar2)
    {
        return 0;
    }
    l_U515 = iVar2;
    l_U517 = 0;
    if (l_U515)
    {
        if (IS_CHAR_IN_ANY_HELI( sub_2792() ))
        {
            l_U517 = 1;
        }
    }
    return 1;
}

void sub_8851(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_8886( uParam0, uParam1 );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_8886(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_8945( "E1FCJ3_ANB", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED NOT ON BIKE\n" );
        return;
        case 6:
        sub_8945( "E1FCT3_NB", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED NOT ON BIKE\n" );
        return;
        case 7:
        sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED NOT ON BIKE\n" );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_8945(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_8968( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_8968(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9022( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_9022(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9044( iParam1 )))
    {
        return 0;
    }
    l_U34._fU384 = 0;
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
    sub_9736( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_9044(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9121( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_9121( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_9121( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_9121(unknown uParam0)
{
    return;
}

void sub_9736(int iParam0, int iParam1)
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

int sub_10165(unknown uParam0)
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
    sub_5598( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 11;
}

void sub_10370(unknown uParam0)
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
        sub_5598( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_10505( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_10505( uParam0, 0, iVar4 );
    return;
}

void sub_10505(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_10697(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_8886( uParam0, uParam1 );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_10789()
{
    if (NOT sub_8669())
    {
        return;
    }
    if (l_U515)
    {
        if (l_U517)
        {
            PRINT_HELP_FOREVER( ref l_U530[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U530[0] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_10883()
{
    unknown uVar2;
    float fVar3;
    int iVar4;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2792() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if ((fVar3 < 0.01000000) AND (sub_10958( 1, 1 )))
    {
        if (NOT l_U517)
        {
            SET_PLAYER_CONTROL( sub_4041(), 0 );
        }
        l_U507 = 4;
        CLEAR_HELP();
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        l_U555 = iVar4 + 20000;
        return 1;
    }
    return 0;
}

int sub_10958(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2792() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar6 );
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
    if (sub_11082( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_11082(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2792() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2792() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2792()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2792() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2792() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4041() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4041() )))
    {
        return 0;
    }
    return 1;
}

int sub_11463()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    bVar3 = false;
    if (((IS_CHAR_IN_ANY_CAR( sub_2792() )) AND (sub_10958( 1, 1 ))) AND (IS_PLAYER_PRESSING_HORN( sub_4041() )))
    {
        if (l_U517)
        {
            return 0;
        }
        if (l_U526 == 0)
        {
            l_U526 = iVar2 + 400;
            return 0;
        }
        if (l_U526 > iVar2)
        {
            return 0;
        }
        l_U526 = 0;
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        if (l_U526 > 0)
        {
            l_U526 = 0;
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        SET_PLAYER_CONTROL( sub_4041(), 0 );
        l_U507 = 4;
        CLEAR_HELP();
        l_U555 = iVar2 + 20000;
        return 1;
    }
    return 0;
}

void sub_11710()
{
    unknown uVar2;

    uVar2 = sub_3774();
    if (sub_11728( uVar2 ))
    {
        if (l_U515)
        {
            if (l_U517)
            {
                PRINT_HELP_FOREVER( ref l_U530[2] );
            }
            else
            {
                PRINT_HELP_FOREVER( ref l_U530[0] );
            }
        }
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2792() )))
    {
        return;
    }
    if ((sub_10883()) || (sub_11463()))
    {
        return;
    }
    sub_11947();
    return;
}

int sub_11728(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_2792() )))
    {
        if (sub_7805( sub_2792() ))
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
    l_U507 = 2;
    l_U515 = 0;
    return 1;
}

void sub_11947()
{
    if (NOT sub_8669())
    {
        return;
    }
    if (l_U515)
    {
        if (l_U517)
        {
            PRINT_HELP_FOREVER( ref l_U530[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U530[1] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_12069(unknown uParam0, unknown uParam1)
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
    if ((NOT l_U513) AND (bVar4))
    {
        l_U507 = 3;
        return 1;
    }
    iVar5 = 0;
    iVar6 = 0;
    if (NOT l_U513)
    {
        GET_GROUP_SIZE( sub_12157(), ref iVar5, ref iVar6 );
        if (iVar6 > 0)
        {
            if (NOT sub_12216())
            {
                sub_5598( "Check_If_Still_Joining_Group: Player has group members, but not Dwayne Backup" );
            }
            sub_12325();
            return 1;
        }
    }
    uVar7 = nil;
    iVar8 = 0;
    iVar9 = 1;
    if (NOT l_U513)
    {
        if (NOT l_U518)
        {
            iVar9 = 3;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2792() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar7 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar8 );
            if ((iVar8 < iVar9) || (l_U519))
            {
                TASK_LEAVE_CAR( sub_2792(), uVar7 );
                l_U520 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( (uParam0^), 80, ref iVar10 );
        if ((NOT (iVar10 == 1)) AND (NOT (iVar10 == 7)))
        {
            return 1;
        }
        if (NOT (COMPARE_STRING( ref l_U563._fU0, l_U562 )))
        {
            CLEAR_CHAR_TASKS( (uParam0^) );
            REMOVE_ANIMS( ref l_U563._fU0 );
            l_U563._fU96 = 0;
        }
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        SET_GROUP_MEMBER( sub_12157(), (uParam0^) );
        l_U513 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_12596();
        g_U12303 = 1;
    }
    iVar11 = 0;
    if ((IS_CHAR_IN_ANY_CAR( sub_2792() )) AND (NOT l_U520))
    {
        MODIFY_CHAR_MOVE_STATE( (uParam0^), 2 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar7 );
        if (NOT (IS_CHAR_IN_CAR( (uParam0^), uVar7 )))
        {
            if (NOT (l_U555 == 0))
            {
                iVar12 = 0;
                GET_GAME_TIMER( ref iVar12 );
                if ((l_U555 < iVar12) || (NOT (IS_VEH_DRIVEABLE( uVar7 ))))
                {
                    SET_PLAYER_CONTROL( sub_4041(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U555 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_12157() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_12157(), (uParam0^) );
                }
            }
            else if (sub_3774() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U514)
        {
            sub_13703( l_U554, ref l_U543 );
            iVar11 = sub_10165( l_U554 );
            sub_10370( iVar11 );
        }
        else
        {
            sub_14757( l_U554, ref l_U543 );
        }
        sub_8512( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U514)
    {
        if (l_U521)
        {
            sub_15560( l_U554, ref l_U543 );
        }
        else
        {
            sub_8851( l_U554, ref l_U543 );
        }
        iVar11 = sub_10165( l_U554 );
        sub_10370( iVar11 );
    }
    else if (l_U521)
    {
        sub_15915( l_U554, ref l_U543 );
    }
    else
    {
        sub_10697( l_U554, ref l_U543 );
    }
    if ((IS_HINT_RUNNING()) AND (NOT l_U520))
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_7674();
    return 0;
}

void sub_12157()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_12216()
{
    return 0;
}

void sub_12325()
{
    return;
}

void sub_12596()
{
    sub_12605();
    sub_12750( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_12824();
    return;
}

void sub_12605()
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

void sub_12750(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_12824()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_12862( 1, g_U572[I] )) == 0)
        {
            sub_13113( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_13291())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_12862(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_13113(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_13198( g_U572 - 1 );
    return;
}

void sub_13198(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_13291()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_12862( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_13703(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_13738( uParam0, uParam1 );
        return;
    }
    if (g_U39119)
    {
        switch (uParam0)
        {
            case 1:
            sub_8945( "E1FCJ3_BLRA", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
            case 6:
            sub_8945( "E1FCT3_LRC", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
            case 7:
            sub_8945( "E1FCC3_LR", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 1:
            sub_8945( "E1FCJ3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
            case 6:
            sub_8945( "E1FCT3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
            case 7:
            sub_8945( "E1FCC3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
        }
    }
    sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_13738(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_8945( "E1FCJ3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
        case 6:
        sub_8945( "E1FCT3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
        case 7:
        sub_8945( "E1FCC3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_14757(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_13738( uParam0, uParam1 );
        return;
    }
    if (IS_CHAR_DEAD( sub_2792() ))
    {
        return;
    }
    if (g_U39119)
    {
        switch (uParam0)
        {
            case 1:
            sub_8945( "E1FCJ3_NLR", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
            case 6:
            sub_8945( "E1FCT3_BNLC", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
            case 7:
            sub_8945( "E1FCC3_NLR", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 1:
            sub_8945( "E1FCJ3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
            case 6:
            sub_8945( "E1FCT3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
            case 7:
            sub_8945( "E1FCC3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
        }
    }
    sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_15560(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_8945( "E1FCJ3_MTAL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: MEET AT ACTIVITY - LATE\n" );
        return;
        case 6:
        sub_8945( "E1FCT3_ACTL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: MEET AT ACTIVITY - LATE\n" );
        return;
        case 7:
        sub_8945( "E1FCC3_AL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: MEET AT ACTIVITY - LATE\n" );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_15915(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_8945( "E1FCJ3_MTNL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: MEET AT ACTIVITY - NOT LATE\n" );
        return;
        case 6:
        sub_8945( "E1FCT3_NL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: MEET AT ACTIVITY - NOT LATE\n" );
        return;
        case 7:
        sub_8945( "E1FCC3_ANL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: MEET AT ACTIVITY - NOT LATE\n" );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_16370()
{
    SET_MISSION_FLAG( 1 );
    g_U12303 = 1;
    l_U645 = 1;
    sub_12750( ref l_U758 );
    g_U18635[l_U749]._fU144 = 22;
    return;
}

void sub_16491()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U658 = 0;
    l_U599 = 1;
    uVar2 = {g_U18635[l_U749]._fU704._fU84};
    if (NOT (sub_16555( l_U749, l_U750, l_U754, ref uVar2 )))
    {
        return;
    }
    sub_27589();
    l_U639 = 6;
    l_U640 = 0;
    return;
}

void sub_16555(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    return sub_16580( uParam0, uParam1, uParam2, iVar8, uParam5 );
}

int sub_16580(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6)
{
    float fVar9;
    boolean bVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    vector vVar15;
    vector vVar18;
    vector vVar21;
    vector vVar24;
    float fVar27;
    int iVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    int iVar38;

    if (NOT l_U714)
    {
        if ((sub_16600()) || (IS_CHAR_INJURED( iParam1 )))
        {
            l_U643 = 1;
            l_U644 = 0;
            return 1;
        }
    }
    if (l_U694)
    {
        if (sub_16763( uParam0, iParam1, uParam6 ))
        {
            l_U640 = 99;
        }
        else
        {
            return 0;
        }
    }
    if (l_U640 == 0)
    {
        if (NOT l_U694)
        {
            if (bParam5)
            {
                sub_18849( uParam0 );
            }
            else
            {
                sub_19359( uParam0, uParam2 );
            }
        }
        if (NOT l_U686)
        {
            sub_2050( ref l_U678, 5, 0, 0 );
            sub_2050( ref l_U682, 8, 0, 0 );
        }
        l_U704 = {0.00000000, 0.00000000, 0.00000000};
        l_U707 = 0;
        l_U714 = 0;
        l_U640++;
    }
    if (l_U640 == 1)
    {
        if (NOT (sub_18325( l_U543 )))
        {
            if (NOT l_U686)
            {
                sub_2678( uParam6 );
                sub_2843( 0, sub_2792(), l_U717, 0 );
                sub_2843( l_U553, iParam1, ref l_U549, 0 );
                if (l_U692)
                {
                    sub_20032( l_U554, ref l_U543, l_U693 );
                }
                else
                {
                    sub_20121( l_U554, ref l_U543 );
                }
                sub_20976( uParam0, bParam5 );
            }
            l_U640++;
        }
        sub_21562( uParam0, bParam5, uParam2 );
    }
    if (l_U640 == 2)
    {
        fVar9 = uParam2._fU8 + 0.00000000;
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2792(), uParam2._fU0, uParam2._fU4, fVar9, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (sub_22043( iParam1 ))
            {
                l_U640++;
            }
        }
        l_U658 = 1;
        if (l_U600)
        {
            sub_22290( iParam1, ref l_U688 );
        }
        else
        {
            sub_22344( uParam0 );
        }
        sub_21562( uParam0, bParam5, uParam2 );
    }
    if (NOT l_U686)
    {
        if (l_U640 < 3)
        {
            if (NOT (IS_CHAR_DEAD( sub_2792() )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2792(), uParam2._fU0, uParam2._fU4, uParam2._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                {
                    sub_23063( uParam0, iParam1 );
                }
            }
        }
    }
    if (IS_CHAR_DEAD( sub_2792() ))
    {
        return 0;
    }
    bVar10 = IS_CHAR_SITTING_IN_ANY_CAR( sub_2792() );
    if (bVar10)
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar11 );
        if (IS_CAR_DEAD( uVar11 ))
        {
            if ((NOT (IS_CHAR_DEAD( sub_2792() ))) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                TASK_LEAVE_ANY_CAR( sub_2792() );
                TASK_LEAVE_ANY_CAR( iParam1 );
            }
            return 0;
        }
    }
    if (l_U640 == 3)
    {
        if (bVar10)
        {
            GET_CHAR_COORDINATES( sub_2792(), ref vVar15.x, ref vVar15.y, ref vVar15.z );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2792(), 2.00000000, 8.00000000, 3.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
        }
        else
        {
            GET_CHAR_COORDINATES( sub_2792(), ref vVar18.x, ref vVar18.y, ref vVar18.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar21.x, ref vVar21.y, ref vVar21.z );
            vVar24 = {vVar18 - vVar21};
            vVar24.x *= 1.00000000;
            vVar24.y *= 1.00000000;
            vVar24.z *= 1.00000000;
            vVar24.z += 2.00000000;
            uVar12 = {vVar18 + vVar24};
            vVar15 = {vVar21};
            vVar15 = {vVar15 + 0.50000000};
        }
        sub_16996();
        CREATE_CAM( 14, ref l_U646[1] );
        SET_CAM_POS( l_U646[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
        POINT_CAM_AT_COORD( l_U646[1], vVar15.x, vVar15.y, vVar15.z );
        SET_CAM_FOV( l_U646[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U646[1], 1 );
        SET_CAM_PROPAGATE( l_U646[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U640++;
    }
    if (l_U640 == 4)
    {
        if (sub_23901())
        {
            sub_24150( uParam0 );
            sub_21641( uParam0 );
            SET_PLAYER_CONTROL( sub_4041(), 0 );
            l_U640++;
        }
    }
    if (l_U640 == 5)
    {
        if ((NOT (IS_CHAR_DEAD( sub_2792() ))) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (bVar10)
            {
                TASK_LOOK_AT_CHAR( sub_2792(), iParam1, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam1, sub_2792(), -2, 0 );
            }
            else
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2792(), iParam1 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam1, sub_2792() );
            }
        }
        l_U640++;
    }
    if (l_U640 == 6)
    {
        if (TIMERA() > 2000)
        {
            SETTIMERA( 0 );
            l_U640++;
        }
    }
    fVar27 = 0.00000000;
    if (l_U640 == 7)
    {
        if (bVar10)
        {
            l_U640++;
        }
        else if ((IS_CHAR_DEAD( sub_2792() )) || (IS_CHAR_DEAD( iParam1 )))
        {
            l_U640++;
        }
        else
        {
            GET_CHAR_COORDINATES( sub_2792(), ref vVar18.x, ref vVar18.y, ref vVar18.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar21.x, ref vVar21.y, ref vVar21.z );
            fVar27 = sub_24981( vVar18, vVar21 );
            if ((fVar27 < 5.00000000) || (TIMERA() > 7000))
            {
                l_U640++;
            }
        }
    }
    if (l_U640 == 8)
    {
        iVar28 = 0;
        sub_17459( iVar28 );
        if (NOT l_U686)
        {
            sub_2678( uParam6 );
            sub_2843( 0, sub_2792(), l_U717, 0 );
            sub_2843( l_U553, iParam1, ref l_U549, 0 );
            if (l_U692)
            {
                sub_25178( l_U554, ref l_U543 );
            }
            else
            {
                sub_17649( l_U554, ref l_U543 );
            }
        }
        l_U640++;
    }
    fVar35 = 0.00000000;
    fVar36 = 0.00000000;
    fVar37 = 0.00000000;
    if (l_U640 == 9)
    {
        GET_PED_BONE_POSITION( sub_2792(), 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar29 );
        if (bVar10)
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 0.00000000, 0.00000000, 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
            fVar27 = sub_24981( uVar29, uVar32 );
            fVar35 = fVar27 + 1.30000000;
            if (fVar27 > 4.00000000)
            {
                fVar35 += 0.70000000;
            }
            fVar36 = (uVar29._fU8 - uVar32._fU8) + 0.60000000;
            uVar12 = {0.00000000, fVar35, fVar36};
            fVar37 = uVar29._fU8 - uVar32._fU8;
            vVar15 = {0.00000000, 0.00000000, fVar37};
            l_U640++;
        }
        else
        {
            l_U640++;
        }
    }
    if (l_U640 == 10)
    {
        if (bVar10)
        {
            if (IS_CAR_DEAD( uVar11 ))
            {
                bVar10 = false;
            }
        }
        if (bVar10)
        {
            ATTACH_CAM_TO_VEHICLE( l_U646[1], uVar11 );
            SET_CAM_ATTACH_OFFSET( l_U646[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U646[1], 1 );
            POINT_CAM_AT_VEHICLE( l_U646[1], uVar11 );
            SET_CAM_POINT_OFFSET( l_U646[1], vVar15.x, vVar15.y, vVar15.z );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U646[1], 1 );
            SET_CAM_FOV( l_U646[1], 40.00000000 );
        }
        else
        {
            ATTACH_CAM_TO_PED( l_U646[1], sub_2792() );
            SET_CAM_ATTACH_OFFSET( l_U646[1], 0.70000000, -1.40000000, 0.70000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U646[1], 1 );
            GET_CHAR_COORDINATES( iParam1, ref vVar15.x, ref vVar15.y, ref vVar15.z );
            vVar15.z += 0.50000000;
            POINT_CAM_AT_COORD( l_U646[1], vVar15.x, vVar15.y, vVar15.z );
            SET_CAM_FOV( l_U646[1], 50.00000000 );
        }
        l_U640++;
    }
    if (l_U640 == 11)
    {
        if (sub_26186())
        {
            l_U640 = 50;
            return 0;
        }
        if (NOT (sub_18325( l_U543 )))
        {
            if (bVar10)
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar11, 0 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 2.50000000, 0.00000000, 0.00000000, ref l_U675._fU0, ref l_U675._fU4, ref l_U675._fU8 );
                }
                else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar11, 1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, -2.50000000, 0.00000000, 0.00000000, ref l_U675._fU0, ref l_U675._fU4, ref l_U675._fU8 );
                }
                else
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 2.50000000, 0.00000000, 0.00000000, ref l_U675._fU0, ref l_U675._fU4, ref l_U675._fU8 );
                }
                fVar9 = l_U675._fU8 + 1.50000000;
                GET_GROUND_Z_FOR_3D_COORD( l_U675._fU0, l_U675._fU4, fVar9, ref l_U675._fU8 );
            }
            else
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2792(), -1.50000000, -5.00000000, 10.00000000, ref l_U675._fU0, ref l_U675._fU4, ref l_U675._fU8 );
                fVar9 = l_U675._fU8;
                GET_GROUND_Z_FOR_3D_COORD( l_U675._fU0, l_U675._fU4, fVar9, ref l_U675._fU8 );
            }
            l_U513 = 0;
            if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_12157() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam1 );
                }
            }
            SETTIMERA( 0 );
            l_U640++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam1, 1 );
        }
    }
    if (l_U640 == 12)
    {
        if (NOT (IS_CHAR_DEAD( sub_2792() )))
        {
            TASK_CLEAR_LOOK_AT( sub_2792() );
        }
        if ((sub_26778( iParam1, l_U675 )) || (TIMERA() > 7000))
        {
            l_U640++;
        }
    }
    if (l_U640 == 13)
    {
        sub_7498( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_18712();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U640 = 99;
    }
    if (l_U640 == 99)
    {
        l_U639 = 6;
        l_U640 = 0;
        return 1;
    }
    if (l_U640 == 50)
    {
        DO_SCREEN_FADE_OUT( 500 );
        SETTIMERA( 0 );
        l_U714 = 1;
        l_U640++;
    }
    if (l_U640 == 51)
    {
        if ((IS_SCREEN_FADED_OUT()) || (TIMERA() > 3000))
        {
            l_U640++;
        }
    }
    iVar38 = 0;
    if (l_U640 == 52)
    {
        sub_27249( ref l_U543, iVar38 );
        l_U513 = 0;
        if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (IS_GROUP_MEMBER( iParam1, sub_12157() ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam1 );
            }
        }
        sub_7498( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_18712();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U640++;
    }
    if (l_U640 == 53)
    {
        DO_SCREEN_FADE_IN( 500 );
        SETTIMERA( 0 );
        l_U640++;
    }
    if (l_U640 == 54)
    {
        if ((IS_SCREEN_FADED_IN()) || (TIMERA() > 3000))
        {
            l_U640 = 99;
        }
    }
    return 0;
}

int sub_16600()
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

int sub_16763(unknown uParam0, int iParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

    if (IS_CHAR_DEAD( sub_2792() ))
    {
        return 1;
    }
    if (l_U641 == 0)
    {
        SET_CHAR_COORDINATES( iParam1, l_U695._fU0, l_U695._fU4, l_U695._fU8 );
        SET_CHAR_COORDINATES( sub_2792(), l_U698._fU0, l_U698._fU4, l_U698._fU8 );
        uVar5 = sub_16880( l_U698, l_U695 );
        SET_CHAR_HEADING( iParam1, uVar5 );
        uVar5 = sub_16880( l_U695, l_U698 );
        SET_CHAR_HEADING( sub_2792(), uVar5 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_16996();
        SET_PLAYER_CONTROL( sub_4041(), 0 );
        l_U641++;
    }
    if (l_U641 == 1)
    {
        CREATE_CAM( 14, ref l_U646[1] );
        ATTACH_CAM_TO_PED( l_U646[1], sub_2792() );
        SET_CAM_ATTACH_OFFSET( l_U646[1], 0.70000000, -1.40000000, 0.70000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U646[1], 1 );
        GET_CHAR_COORDINATES( iParam1, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        uVar6._fU8 += 0.50000000;
        POINT_CAM_AT_COORD( l_U646[1], uVar6._fU0, uVar6._fU4, uVar6._fU8 );
        SET_CAM_FOV( l_U646[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U646[1], 1 );
        SET_CAM_PROPAGATE( l_U646[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U641++;
    }
    if (l_U641 == 2)
    {
        if (TIMERA() > 2000)
        {
            l_U641++;
        }
    }
    if (l_U641 == 3)
    {
        DO_SCREEN_FADE_IN( 1000 );
        l_U641++;
    }
    if (l_U641 == 4)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U641++;
        }
    }
    if (l_U641 == 5)
    {
        iVar9 = 0;
        sub_17459( iVar9 );
        sub_2678( uParam2 );
        sub_2843( 0, sub_2792(), l_U717, 0 );
        sub_2843( l_U553, iParam1, ref l_U549, 0 );
        sub_17649( l_U554, ref l_U543 );
        l_U641++;
    }
    if (l_U641 == 6)
    {
        if (NOT (sub_18325( l_U543 )))
        {
            l_U513 = 0;
            if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_12157() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam1 );
                }
            }
            l_U641++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam1, 1 );
        }
    }
    if (l_U641 == 7)
    {
        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam1, l_U701._fU0, l_U701._fU4, l_U701._fU8, 2, -2, 0.10000000 );
        SETTIMERA( 0 );
        l_U641++;
    }
    if (l_U641 == 8)
    {
        if (TIMERA() > 5000)
        {
            l_U641++;
        }
    }
    if (l_U641 == 9)
    {
        sub_7498( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_18712();
        SET_GAME_CAM_HEADING( 0.00000000 );
        return 1;
    }
    return 0;
}

void sub_16880(vector vParam0, vector vParam3)
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

void sub_16996()
{
    int iVar2;

    l_U650 = 1;
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

void sub_17459(unknown uParam0)
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

void sub_17649(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_17684( uParam0, uParam1 );
        return;
    }
    if (g_U10499)
    {
        sub_17742( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_8945( "E1FCJ3_DO", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - DROPOFF AT HOME\n" );
        return;
        case 6:
        sub_8945( "E1FCT3_DO", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - DROPOFF AT HOME\n" );
        return;
        case 7:
        sub_8945( "E1FCC3_DO", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - DROPOFF AT HOME\n" );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_17684(unknown uParam0, unknown uParam1)
{
    sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_17742(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_8945( "E1FCJ3_DOD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - DROPOFF AT HOME - DRUNK\n" );
        return;
        case 6:
        sub_8945( "E1FCT3_DOD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - DROPOFF AT HOME - DRUNK\n" );
        return;
        case 7:
        sub_8945( "E1FCC3_DOD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - DROPOFF AT HOME - DRUNK\n" );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_18325(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_9121( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9121( "\n speech is not playing" );
    }
    return 0;
}

void sub_18712()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    SET_USE_HIGHDOF( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    l_U650 = 0;
    return;
}

void sub_18849(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_18891();
        return;
        case 6:
        sub_18984();
        return;
        case 7:
        sub_19077();
        return;
    }
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Not a friend" );
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Should never reach here" );
    return;
}

void sub_18891()
{
    if (NOT (DOES_BLIP_EXIST( l_U619 )))
    {
        ADD_BLIP_FOR_COORD( l_U613._fU0, l_U613._fU4, l_U613._fU8, ref l_U619 );
        if (l_U599)
        {
            SET_ROUTE( l_U619, 1 );
        }
    }
    return;
}

void sub_18984()
{
    if (NOT (DOES_BLIP_EXIST( l_U628 )))
    {
        ADD_BLIP_FOR_COORD( l_U622._fU0, l_U622._fU4, l_U622._fU8, ref l_U628 );
        if (l_U599)
        {
            SET_ROUTE( l_U628, 1 );
        }
    }
    return;
}

void sub_19077()
{
    if (NOT (DOES_BLIP_EXIST( l_U637 )))
    {
        ADD_BLIP_FOR_COORD( l_U631._fU0, l_U631._fU4, l_U631._fU8, ref l_U637 );
        if (l_U599)
        {
            SET_ROUTE( l_U637, 1 );
        }
    }
    return;
}

void sub_19359(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 1:
        sub_19404( uParam1 );
        return;
        case 6:
        sub_19491( uParam1 );
        return;
        case 7:
        sub_19578( uParam1 );
        return;
    }
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Not a friend" );
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Should never reach here" );
    return;
}

void sub_19404(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U619 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U619 );
        if (l_U599)
        {
            SET_ROUTE( l_U619, 1 );
        }
    }
    return;
}

void sub_19491(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U628 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U628 );
        if (l_U599)
        {
            SET_ROUTE( l_U628, 1 );
        }
    }
    return;
}

void sub_19578(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U637 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U637 );
        if (l_U599)
        {
            SET_ROUTE( l_U637, 1 );
        }
    }
    return;
}

void sub_20032(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_17684( uParam0, uParam1 );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_20121(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_20156( uParam0, uParam1 );
        return;
    }
    if (g_U10499)
    {
        sub_20435( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_8945( "E1FCJ3_GHM", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - TAKE ME HOME\n" );
        return;
        case 6:
        sub_8945( "E1FCT3_GH", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - TAKE ME HOME\n" );
        return;
        case 7:
        sub_8945( "E1FCC3_GH", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - TAKE ME HOME\n" );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_20156(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_8945( "E1FCJ3_GHM", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - TAKE ME HOME\n" );
        return;
        case 6:
        sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - TAKE ME HOME\n" );
        return;
        case 7:
        sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - TAKE ME HOME\n" );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_20435(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_8945( "E1FCJ3_GHMD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - TAKE ME HOME - DRUNK\n" );
        return;
        case 6:
        sub_8945( "E1FCT3_GHD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - TAKE ME HOME - DRUNK\n" );
        return;
        case 7:
        sub_8945( "E1FCC3_GHD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - TAKE ME HOME - DRUNK\n" );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_20976(unknown uParam0, boolean bParam1)
{
    boolean bVar4;
    boolean bVar5;

    if ((g_U10490) AND (g_U10491))
    {
        return;
    }
    if (g_U18635[uParam0]._fU704._fU4)
    {
        return;
    }
    bVar4 = false;
    if (NOT g_U10490)
    {
        if (bParam1)
        {
            bVar4 = true;
        }
    }
    bVar5 = false;
    if (NOT g_U10491)
    {
        if (g_U18635[uParam0]._fU144 == 11)
        {
            bVar5 = true;
        }
    }
    if (bVar5)
    {
        if (bVar4)
        {
            sub_21108( uParam0 );
            g_U10491 = 1;
            return;
        }
        PRINT_HELP( "FRDRUNK" );
        g_U10491 = 1;
        return;
    }
    if (bVar4)
    {
        if (g_U26739._fU32 == 0)
        {
            sub_21287( uParam0 );
        }
        else
        {
            sub_21413( uParam0 );
        }
        g_U10490 = 1;
    }
    return;
}

void sub_21108(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRDRHMJm" );
        break;
        case 6:
        PRINT_HELP( "FRDRHMTr" );
        break;
        case 7:
        PRINT_HELP( "FRDRHMCl" );
        break;
    }
    return;
}

void sub_21287(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRALTJmH" );
        break;
        case 6:
        PRINT_HELP( "FRALTTrH" );
        break;
        case 7:
        PRINT_HELP( "FRALTClH" );
        break;
    }
    return;
}

void sub_21413(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRALTJm" );
        break;
        case 6:
        PRINT_HELP( "FRALTTr" );
        break;
        case 7:
        PRINT_HELP( "FRALTCl" );
        break;
    }
    return;
}

void sub_21562(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    boolean bVar7;

    if (l_U694)
    {
        return;
    }
    bVar7 = true;
    if (l_U528)
    {
        bVar7 = false;
    }
    if (bVar7)
    {
        if (bParam1)
        {
            sub_18849( uParam0 );
        }
        else
        {
            sub_19359( uParam0, uParam2 );
        }
        return;
    }
    sub_21641( uParam0 );
    return;
}

void sub_21641(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_21683();
        return;
        case 6:
        sub_21715();
        return;
        case 7:
        sub_21747();
        return;
    }
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Not a friend" );
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Should never reach here" );
    return;
}

void sub_21683()
{
    REMOVE_BLIP( l_U619 );
    return;
}

void sub_21715()
{
    REMOVE_BLIP( l_U628 );
    return;
}

void sub_21747()
{
    REMOVE_BLIP( l_U637 );
    return;
}

int sub_22043(unknown uParam0)
{
    unknown uVar3;
    vector vVar4;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2792() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar3 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2792(), uVar3 )))
        {
            return 0;
        }
        return IS_CHAR_SITTING_IN_CAR( uParam0, uVar3 );
    }
    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        return 0;
    }
    vVar4 = {0.00000000, 0.00000000, 0.00000000};
    GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2792(), vVar4.x, vVar4.y, vVar4.z, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return 1;
}

void sub_22290(unknown uParam0, unknown uParam1)
{
    if (NOT l_U528)
    {
        sub_8512( uParam1 );
        return;
    }
    sub_8255( uParam0, uParam1 );
    return;
}

void sub_22344(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_22386();
        return;
        case 6:
        sub_22657();
        return;
        case 7:
        sub_22716();
        return;
    }
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Not a friend" );
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Should never reach here" );
    return;
}

void sub_22386()
{
    if (g_U38847[0]._fU0)
    {
        sub_22412();
        return;
    }
    sub_22290( l_U611, ref l_U612 );
    return;
}

void sub_22412()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT g_U38847[I]._fU4)
            {
                sub_8512( ref g_U38847[I]._fU8 );
            }
            else
            {
                PRINTSTRING( "---------------------> Being Left, so add blip for friend: " );
                PRINTINT( I );
                PRINTNL();
                sub_8255( g_U38857[I]._fU0, ref g_U38847[I]._fU8 );
            }
        }
    }
    return;
}

void sub_22657()
{
    if (g_U38847[1]._fU0)
    {
        sub_22412();
        return;
    }
    sub_22290( l_U620, ref l_U621 );
    return;
}

void sub_22716()
{
    if (g_U38847[2]._fU0)
    {
        sub_22412();
        return;
    }
    sub_22290( l_U629, ref l_U630 );
    return;
}

int sub_23063(unknown uParam0, unknown uParam1)
{
    if (sub_23076( ref l_U678 ))
    {
        if (sub_3515( l_U678 ))
        {
            sub_12750( ref l_U678 );
            sub_23191( uParam0, ref l_U543, l_U553, uParam1, l_U549 );
            return 1;
        }
    }
    if (sub_23076( ref l_U682 ))
    {
        if (sub_3515( l_U682 ))
        {
            sub_12750( ref l_U682 );
            sub_23294( uParam0, ref l_U543, l_U553, uParam1, l_U549 );
            l_U686 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_23076(int iParam0)
{
    if (((((ref iParam0->_fU0->_fU4) == -1) AND ((ref iParam0->_fU0->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU4) == -1))
    {
        return 0;
    }
    return 1;
}

void sub_23191(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_8945( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_23294(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_8945( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_23901()
{
    int iVar2;
    unknown uVar3;
    float fVar4;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U609 == 0)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2792() )))
        {
            return 1;
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2792() )))
        {
            return 0;
        }
        SET_PLAYER_CONTROL( sub_4041(), 0 );
        l_U601 = iVar2 + 4000;
        l_U609 = 1;
    }
    if (l_U609 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2792() )))
        {
            l_U609 = 0;
            return 1;
        }
        if (sub_7805( sub_2792() ))
        {
            return 0;
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar4 );
        if ((fVar4 < 0.04000000) || (l_U601 < iVar2))
        {
            SET_PLAYER_CONTROL( sub_4041(), 1 );
            l_U609 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_24150(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_24192();
        return;
        case 6:
        sub_24344();
        return;
        case 7:
        sub_24398();
        return;
    }
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Not a friend" );
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Should never reach here" );
    return;
}

void sub_24192()
{
    if (g_U38847[0]._fU0)
    {
        sub_24218();
        return;
    }
    sub_8512( ref l_U612 );
    return;
}

void sub_24218()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (DOES_BLIP_EXIST( g_U38847[I]._fU8 ))
            {
                sub_8512( ref g_U38847[I]._fU8 );
            }
        }
    }
    return;
}

void sub_24344()
{
    if (g_U38847[1]._fU0)
    {
        sub_24218();
        return;
    }
    sub_8512( ref l_U621 );
    return;
}

void sub_24398()
{
    if (g_U38847[2]._fU0)
    {
        sub_24218();
        return;
    }
    sub_8512( ref l_U630 );
    return;
}

void sub_24981(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_25178(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_17684( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_8945( "E1FCJ3_DO", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - DROPOFF AT HOME\n" );
        return;
        case 6:
        sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - DROPOFF AT HOME\n" );
        return;
        case 7:
        sub_8945( "PLACEHOLDER", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - DROPOFF AT HOME\n" );
        return;
    }
    sub_8945( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_26186()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_26778(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U610 == 0)
    {
        if (IS_GROUP_MEMBER( uParam0, sub_12157() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam0 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            l_U610 = 1;
            return 0;
        }
        SET_PLAYER_CONTROL( sub_4041(), 0 );
        TASK_LEAVE_ANY_CAR( uParam0 );
        l_U610 = 1;
    }
    if (l_U610 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 2, -2, 0.10000000 );
            SETTIMERA( 0 );
            l_U610 = 2;
        }
    }
    if (l_U610 == 2)
    {
        if (TIMERA() > 3000)
        {
            SET_PLAYER_CONTROL( sub_4041(), 1 );
            l_U610 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_27249(int iParam0, unknown uParam1)
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

void sub_27589()
{
    unknown uVar2;

    uVar2 = sub_10165( l_U749 );
    if (l_U749 < 9)
    {
        uVar2 = sub_10165( l_U749 );
        sub_27638( uVar2, 0, 17 );
        sub_27716( uVar2, l_U754, 50.00000000 );
    }
    return;
}

void sub_27638(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    g_U12306[uParam0]._fU868._fU4 = 1;
    iVar5 = 0;
    sub_2050( ref g_U12306[uParam0]._fU868._fU8, uParam1, uParam2, iVar5 );
    return;
}

void sub_27716(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    g_U12306[uParam0]._fU868._fU24 = 1;
    g_U12306[uParam0]._fU868._fU28 = {uParam1};
    g_U12306[uParam0]._fU868._fU40 = uParam4;
    return;
}

void sub_27837()
{
    int iVar2;
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (l_U640 == 0)
    {
        iVar2 = 0;
        iVar3 = 15;
        iVar4 = 0;
        sub_2050( ref l_U758, iVar2, iVar3, iVar4 );
        uVar5 = sub_10165( l_U749 );
        sub_27896( uVar5 );
        l_U640++;
    }
    if (l_U640 == 1)
    {
        if (sub_3515( l_U758 ))
        {
            uVar6 = g_U18635[l_U749]._fU104;
            uVar7 = sub_28132( l_U749 );
            sub_28255( uVar6 );
            sub_28362( uVar6, l_U749, uVar7, 0 );
            l_U643 = 1;
            l_U644 = 10;
            return;
        }
    }
    return;
}

void sub_27896(unknown uParam0)
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
        sub_5598( "Flow_Hospital_No_Pickup_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_10505( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_10505( uParam0, 0, iVar4 );
    return;
}

void sub_28132(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U18635[uParam0]._fU704._fU144;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U18635[uParam0]._fU704._fU140)
    {
        iVar4 = g_U18635[uParam0]._fU704._fU136;
    }
    g_U18635[uParam0]._fU704._fU144 = iVar4;
    return Result;
}

void sub_28255(unknown uParam0)
{
    g_U38472._fU12[uParam0]._fU0 = 0;
    g_U38472._fU12[uParam0]._fU4 = 0;
    g_U38472._fU12[uParam0]._fU12 = 22;
    g_U38472._fU12[uParam0]._fU16 = 0;
    g_U38472._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_28362(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 6;
    sub_28387( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_28387(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 19;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_28499( uParam1, uParam2 );
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
    sub_30208( iParam0, iParam3 );
    return;
}

void sub_28499(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_28522( uParam0 );
    sub_28769( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_29113( ref uVar4, 1 );
    sub_29141( ref uVar4, 0 );
    sub_29169( ref uVar4, 2 );
    sub_29199( ref uVar4 );
    return;
}

int sub_28522(unknown uParam0)
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
    sub_5598( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_28769(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_28791( uParam0, 0, iParam4 + 0 );
    sub_28791( uParam1, 1, iParam4 + 0 );
    sub_28791( uParam2, 2, iParam4 + 0 );
    sub_28791( uParam3, 3, iParam4 + 0 );
    sub_28791( 0, 4, iParam4 + 0 );
    sub_28791( 1, 5, iParam4 + 0 );
    sub_28791( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_28791(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_29113(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_29141(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_29169(int iParam0, unknown uParam1)
{
    sub_28791( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_29199(int iParam0)
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
        if (NOT sub_29269())
        {
            sub_13113( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_29396( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_13113( iVar9 );
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
                ConcatString(ref cVar5, sub_12862( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_12862( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_29269()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_12862( 1, g_U572[I] )) != 0) AND (g_U572[I]._fU20))
        {
            sub_13113( I );
            return 1;
        }
    }
    return 0;
}

int sub_29396(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_29461( uParam0, g_U572[Result] ))
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

int sub_29461(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_12862( 0, uParam0 );
        if (iVar14 == (sub_12862( 0, uParam6 )))
        {
            iVar15 = sub_12862( 3, uParam0 );
            if (iVar15 == (sub_12862( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_30208(unknown uParam0, int iParam1)
{
    g_U38472._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_30247( iParam1 ))
    {
        g_U38472._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_30247(int iParam0)
{
    int iVar3;

    iVar3 = sub_30256();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_30311();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_30256()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_30311()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_30499(unknown uParam0)
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
    if (NOT l_U513)
    {
        return 0;
    }
    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (NOT l_U527)
    {
        return 0;
    }
    if (IS_GROUP_MEMBER( uParam0, sub_12157() ))
    {
        return 0;
    }
    if (NOT l_U528)
    {
        TASK_LOOK_AT_CHAR( uParam0, sub_2792(), -2, 0 );
        l_U528 = 1;
    }
    GET_CHAR_COORDINATES( sub_2792(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_24981( uVar3, uVar6 );
    if (fVar9 < 12.00000000)
    {
        SET_GROUP_MEMBER( sub_12157(), uParam0 );
        TASK_CLEAR_LOOK_AT( uParam0 );
        l_U528 = 0;
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

void sub_30806()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    int iVar13;

    bVar2 = false;
    uVar3 = sub_10165( l_U749 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    iVar12 = -1;
    iVar13 = -1;
    switch (l_U644)
    {
        case 0:
        g_U18635[l_U749]._fU704._fU184 = l_U750;
        g_U18635[l_U749]._fU704._fU8 = 1;
        bVar2 = sub_30963( l_U750 );
        if (bVar2)
        {
            sub_31046( uVar3 );
        }
        sub_12750( ref l_U758 );
        break;
        case 9:
        iVar12 = g_U18635[l_U749]._fU104;
        iVar13 = sub_31848( l_U749 );
        sub_28255( iVar12 );
        sub_28387( iVar12, l_U749, iVar13, 5000, 4, 64537 );
        sub_27589();
        break;
        case 10: break;
        case 7:
        sub_32026( l_U750, l_U749 );
        break;
        case 11: break;
        case 12: break;
        default: sub_819( "Unrecognised Fail ID" );
    }
    sub_32323( bVar2 );
    sub_32699();
    return;
}

void sub_30963(unknown uParam0)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_2792() )))
        {
            Result = HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_2792(), 0 );
        }
    }
    return Result;
}

void sub_31046(unknown uParam0)
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
        sub_31143( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_31661( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_31143(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_31154( uParam1 );
    sub_31328( uParam0, 0, uParam2 );
    sub_31328( uParam0, 1, uParam3 );
    sub_31328( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_31521();
    return;
}

void sub_31154(unknown uParam0)
{
    ADD_SCORE( sub_4041(), uParam0 );
    sub_31179( uParam0 );
    return;
}

void sub_31179(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_5598( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_31328(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_31521()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_31661(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_31848(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U18635[uParam0]._fU704._fU156;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U18635[uParam0]._fU704._fU152)
    {
        iVar4 = g_U18635[uParam0]._fU704._fU148;
    }
    g_U18635[uParam0]._fU704._fU156 = iVar4;
    return Result;
}

void sub_32026(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = g_U18635[uParam1]._fU104;
    uVar5 = g_U18635[uParam1]._fU136;
    sub_28255( uVar4 );
    sub_28362( uVar4, uParam1, uVar5, 0 );
    uVar6 = sub_10165( uParam1 );
    sub_32099( uVar6 );
    return;
}

void sub_32099(unknown uParam0)
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
        sub_5598( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_10505( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_10505( uParam0, 0, iVar4 );
    return;
}

void sub_32323(boolean bParam0)
{
    switch (l_U644)
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

void sub_32699()
{
    sub_8512( ref l_U688 );
    sub_8209();
    REMOVE_BLIP( l_U757 );
    sub_7498( l_U749 );
    REMOVE_DECISION_MAKER( l_U529 );
    l_U513 = 0;
    if ((NOT (l_U750 == nil)) AND (NOT (IS_CHAR_DEAD( l_U750 ))))
    {
        if (IS_GROUP_MEMBER( l_U750, sub_12157() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U750 );
        }
        if (IS_CHAR_INJURED( l_U750 ))
        {
            SET_PED_DIES_WHEN_INJURED( l_U750, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U750 );
        }
        else
        {
            DELETE_CHAR( ref l_U750 );
        }
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_32922();
    CLEAR_HELP();
    if (g_U18635[l_U749]._fU704._fU176)
    {
        g_U20908 = 0;
    }
    if (l_U645)
    {
        g_U12303 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_32922()
{
    int iVar2;

    if (l_U654)
    {
        DELETE_WIDGET_GROUP( l_U655 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U651 );
    if (l_U650)
    {
        SET_CAM_ACTIVE( l_U646[1], 0 );
        SET_CAM_PROPAGATE( l_U646[1], 0 );
        sub_18712();
    }
    if (IS_PLAYER_PLAYING( sub_4041() ))
    {
        SET_PLAYER_CONTROL( sub_4041(), 1 );
    }
    CLEAR_HELP();
    sub_33048();
    iVar2 = 0;
    sub_17459( iVar2 );
    return;
}

void sub_33048()
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

void sub_33295(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown uVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U659._fU0)
    {
        l_U674 = 0;
        if (sub_18325( l_U543 ))
        {
            return;
        }
        if (IS_PLAYER_PLAYING( sub_4041() ))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( sub_2792() ))
            {
                return;
            }
            STOP_PED_SPEAKING( sub_2792(), 1 );
        }
        l_U659._fU0 = 0;
        l_U659._fU4 = 1;
        l_U659._fU12 = 0;
        l_U659._fU20 = 0;
        l_U659._fU24 = 0;
        l_U659._fU28 = 0;
        sub_1207();
        return;
    }
    sub_33460( uParam0 );
    if (l_U659._fU4)
    {
        sub_35220( uParam0 );
        if (sub_35505( uParam0 ))
        {
            l_U659._fU4 = 0;
            if (l_U659._fU8)
            {
                l_U659._fU20 = iVar3 + 10000;
            }
            else
            {
                l_U659._fU20 = iVar3 + 15000;
            }
            return;
        }
    }
    if (NOT (l_U659._fU20 == 0))
    {
        if (NOT (sub_35505( uParam0 )))
        {
            l_U659._fU4 = 1;
            l_U659._fU20 = 0;
            return;
        }
        if (iVar3 > l_U659._fU20)
        {
            REQUEST_ANIMS( "Gestures@Niko" );
            if (NOT (HAVE_ANIMS_LOADED( "Gestures@Niko" )))
            {
                return;
            }
            bVar4 = false;
            if (NOT l_U659._fU8)
            {
                sub_36196( l_U554 );
                sub_2843( 0, sub_2792(), l_U717, 0 );
                if (NOT (sub_36530( l_U554, ref l_U603, l_U659._fU16 )))
                {
                    bVar4 = true;
                }
            }
            else
            {
                sub_42120( l_U554 );
                sub_2843( 0, sub_2792(), l_U717, 0 );
                sub_42447( l_U554, ref l_U603 );
            }
            if (bVar4)
            {
                ;
            }
            l_U659._fU20 = 0;
            l_U659._fU12 = 1;
            g_U18635[l_U554]._fU892._fU44 = -1;
        }
        return;
    }
    if (sub_46418( uParam0 ))
    {
        return;
    }
    if (l_U659._fU12)
    {
        if (g_U18635[l_U554]._fU892._fU40 >= 0)
        {
            bVar5 = false;
            if (NOT l_U659._fU24)
            {
                if ((sub_47080( ref l_U603 )) || ((sub_34155( l_U603 )) > 5))
                {
                    bVar5 = true;
                }
            }
            if (bVar5)
            {
                l_U659._fU12 = 0;
                uVar6 = g_U18635[l_U554]._fU892._fU40;
                sub_37056( l_U554, uVar6 );
                if (IS_PLAYER_PLAYING( sub_4041() ))
                {
                    STOP_PED_SPEAKING( sub_2792(), 0 );
                }
                l_U674 = 1;
            }
            return;
        }
    }
    if (l_U674)
    {
        if (sub_47080( ref l_U603 ))
        {
            if (HAVE_ANIMS_LOADED( "Gestures@Niko" ))
            {
                REMOVE_ANIMS( "Gestures@Niko" );
            }
            l_U674 = 0;
        }
    }
    return;
}

void sub_33460(unknown uParam0)
{
    sub_33471( uParam0 );
    sub_34404( uParam0 );
    sub_34819( uParam0 );
    return;
}

void sub_33471(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if ((IS_CHAR_DEAD( sub_2792() )) || (sub_33494( uParam0 )))
    {
        return;
    }
    if ((IS_CHAR_ON_ANY_BIKE( sub_2792() )) || (sub_33855( uParam0 )))
    {
        sub_33995( uParam0 );
        return;
    }
    GET_CHAR_COORDINATES( sub_2792(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_24981( uVar3, uVar6 );
    if (l_U659._fU36)
    {
        if (fVar9 < 6.00000000)
        {
            l_U659._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 12.00000000)
    {
        return;
    }
    l_U659._fU36 = 1;
    sub_34125();
    return;
}

int sub_33494(unknown uParam0)
{
    int I;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 1;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_33538( I ))
        {
            if (IS_CHAR_INJURED( sub_33670( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_33538(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Is_Biker_Friend_Active: Minigame Biker Index out of range" );
        return 0;
    }
    return g_U38847[iParam0]._fU0;
}

void sub_33670(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

int sub_33855(unknown uParam0)
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
        if (sub_33538( I ))
        {
            if (NOT (IS_CHAR_INJURED( sub_33670( I ) )))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_33670( I ) ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_33995(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    GET_CHAR_COORDINATES( sub_2792(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_24981( uVar3, uVar6 );
    if (l_U659._fU36)
    {
        if (fVar9 < 15.00000000)
        {
            l_U659._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 80.00000000)
    {
        return;
    }
    l_U659._fU36 = 1;
    sub_34125();
    return;
}

void sub_34125()
{
    unknown uVar2;

    if (l_U659._fU24)
    {
        return;
    }
    uVar2 = sub_34155( l_U603 );
    g_U18635[l_U554]._fU892._fU44 = uVar2;
    return;
}

void sub_34155(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_18325( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_34404(unknown uParam0)
{
    boolean bVar3;
    int iVar4;
    int iVar5;

    if ((IS_CHAR_DEAD( sub_2792() )) || (sub_34427( uParam0 )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_INJURED( sub_2792() ))
    {
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        iVar4 = 0;
        iVar5 = 0;
        GET_CHAR_HEALTH( sub_2792(), ref iVar4 );
        GET_CHAR_HEALTH( uParam0, ref iVar5 );
        if (l_U659._fU52 == 64537)
        {
            l_U659._fU52 = iVar4;
        }
        if (l_U659._fU56 == 64537)
        {
            l_U659._fU56 = iVar5;
        }
        if (iVar4 < l_U659._fU52)
        {
            bVar3 = true;
        }
        if (iVar5 < l_U659._fU56)
        {
            bVar3 = true;
        }
        l_U659._fU52 = iVar4;
        l_U659._fU56 = iVar5;
    }
    if (l_U659._fU40)
    {
        if (NOT bVar3)
        {
            l_U659._fU40 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    if (l_U659._fU8)
    {
        return;
    }
    l_U659._fU40 = 1;
    sub_34125();
    return;
}

int sub_34427(unknown uParam0)
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

void sub_34819(unknown uParam0)
{
    boolean bVar3;

    if ((IS_CHAR_DEAD( sub_2792() )) || (sub_33494( uParam0 )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_SHOOTING( sub_2792() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_2792() ))
    {
        bVar3 = true;
    }
    if (sub_34901( uParam0 ))
    {
        bVar3 = true;
    }
    if (sub_35016( uParam0 ))
    {
        bVar3 = true;
    }
    if (l_U659._fU44)
    {
        if (NOT bVar3)
        {
            l_U659._fU44 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    l_U659._fU44 = 1;
    sub_34125();
    return;
}

int sub_34901(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_SHOOTING( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_33538( I ))
        {
            if (IS_CHAR_SHOOTING( sub_33670( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_35016(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_IN_MELEE_COMBAT( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_33538( I ))
        {
            if (IS_CHAR_IN_MELEE_COMBAT( sub_33670( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_35220(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (NOT (g_U39172 == 0))
    {
        return;
    }
    if ((l_U639 == 0) || (l_U639 == 1))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_33538( I ))
        {
            g_U39174[I] = sub_33670( I );
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
    uVar4 = sub_35402( l_U554 );
    SET_BIT( ref g_U39172, uVar4 );
    g_U39174[uVar4] = uParam0;
    return;
}

int sub_35402(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 6: return 1;
        case 7: return 2;
    }
    return 3;
}

int sub_35505(unknown uParam0)
{
    unknown uVar3;

    if ((sub_35514()) || (l_U659._fU24))
    {
        return 0;
    }
    if ((l_U639 == 0) || (l_U639 == 1))
    {
        return 0;
    }
    if (NOT l_U659._fU8)
    {
        if (sub_35646( uParam0 ))
        {
            return 1;
        }
        if ((NOT (IS_CHAR_DEAD( sub_2792() ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2792() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2792(), ref uVar3 );
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

int sub_35514()
{
    if (((((l_U659._fU32) || (l_U659._fU36)) || (l_U659._fU40)) || (l_U659._fU44)) || (l_U659._fU48))
    {
        return 1;
    }
    return 0;
}

int sub_35646(unknown uParam0)
{
    if ((sub_35514()) || (l_U659._fU24))
    {
        return 0;
    }
    if (NOT l_U659._fU8)
    {
        if ((NOT (IS_CHAR_DEAD( sub_2792() ))) AND (NOT (sub_33494( uParam0 ))))
        {
            if (IS_CHAR_ON_ANY_BIKE( sub_2792() ))
            {
                if (sub_35736( uParam0 ))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 1;
}

int sub_35736(unknown uParam0)
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
        if (sub_33538( I ))
        {
            if (IS_CHAR_INJURED( sub_33670( I ) ))
            {
                return 0;
            }
            if (NOT (IS_CHAR_ON_ANY_BIKE( sub_33670( I ) )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_36196(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_2678( "E12WA" );
        return;
        case 6:
        sub_2678( "E12WA" );
        return;
        case 7:
        sub_2678( "E12WA" );
        return;
    }
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Not a friend" );
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Should never reach here" );
    return;
}

int sub_36530(unknown uParam0, unknown uParam1, unknown uParam2)
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
    sub_36653();
    g_U18635[uParam0]._fU892._fU40 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_37621( uParam0 );
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if ((NOT g_U18635[uParam0]._fU892._fU28) AND (uParam2))
    {
        iVar6 = g_U18635[uParam0]._fU892._fU24;
        I = 0;
        for ( I = 0; I < iVar6; I++ )
        {
            if ((sub_36699( uParam0, I )) AND (NOT (sub_36964( uParam0, I ))))
            {
                sub_36880( uParam0, I );
            }
        }
    }
    sub_38176( uParam0 );
    iVar5 = 0;
    iVar6 = g_U18635[uParam0]._fU892._fU24;
    I = 0;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT (sub_36699( uParam0, I )))
        {
            iVar5++;
        }
    }
    if ((iVar5 == 0) AND (uParam2))
    {
        for ( I = 0; I < iVar6; I++ )
        {
            if (NOT (sub_36964( uParam0, I )))
            {
                sub_36880( uParam0, I );
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
            if (NOT (sub_36699( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    if (sub_38433( I ))
                    {
                        g_U18635[uParam0]._fU892._fU40 = I;
                        sub_36791( uParam0, I );
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
    sub_37621( uParam0 );
    iVar10 = 0;
    switch (uParam0)
    {
        case 1:
        sub_39890( uParam1, iVar10 );
        return 1;
        case 6:
        sub_41162( uParam1, iVar10 );
        return 1;
        case 7:
        sub_41578( uParam1, iVar10 );
        return 1;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: must have forgotten to update friend ID when added speech" );
    return 0;
}

void sub_36653()
{
    int iVar2;
    int I;
    int iVar4;
    int iVar5;

    iVar2 = g_U18635[1]._fU892._fU24;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (((sub_36699( 1, I )) || (sub_36699( 6, I ))) || (sub_36699( 7, I )))
        {
            sub_36791( 1, I );
            sub_36791( 6, I );
            sub_36791( 7, I );
        }
        else
        {
            sub_36880( 1, I );
            sub_36880( 6, I );
            sub_36880( 7, I );
        }
        if (((sub_36964( 1, I )) || (sub_36964( 6, I ))) || (sub_36964( 7, I )))
        {
            sub_37056( 1, I );
            sub_37056( 6, I );
            sub_37056( 7, I );
        }
        else
        {
            sub_37145( 1, I );
            sub_37145( 6, I );
            sub_37145( 7, I );
        }
    }
    iVar4 = g_U18635[1]._fU892._fU24;
    iVar5 = (g_U18635[1]._fU892._fU32 + iVar4) - 1;
    I = 0;
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (((sub_36699( 1, I )) || (sub_36699( 6, I ))) || (sub_36699( 7, I )))
        {
            sub_36791( 1, I );
            sub_36791( 6, I );
            sub_36791( 7, I );
        }
        else
        {
            sub_36880( 1, I );
            sub_36880( 6, I );
            sub_36880( 7, I );
        }
        if (((sub_36964( 1, I )) || (sub_36964( 6, I ))) || (sub_36964( 7, I )))
        {
            sub_37056( 1, I );
            sub_37056( 6, I );
            sub_37056( 7, I );
        }
        else
        {
            sub_37145( 1, I );
            sub_37145( 6, I );
            sub_37145( 7, I );
        }
    }
    return;
}

void sub_36699(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
}

void sub_36791(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
    return;
}

void sub_36880(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
    return;
}

void sub_36964(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
}

void sub_37056(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
    return;
}

void sub_37145(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
    return;
}

void sub_37621(unknown uParam0)
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
        if (sub_36699( uParam0, I ))
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
        if (sub_36964( uParam0, I ))
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

void sub_38176(unknown uParam0)
{
    return;
}

int sub_38433(unknown uParam0)
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
            sub_38816( "E13WA" );
            sub_2843( 1, g_U39174[0], "JIM", 0 );
            sub_2843( 2, g_U39174[1], "TERRY", 0 );
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
            sub_38816( "E13WA" );
            sub_2843( 1, g_U39174[0], "JIM", 0 );
            sub_2843( 3, g_U39174[2], "CLAY", 0 );
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
            sub_38816( "E12WA" );
            sub_2843( 1, g_U39174[0], "JIM", 0 );
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
            sub_38816( "E12WA" );
            sub_2843( 3, g_U39174[2], "CLAY", 0 );
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
            sub_38816( "E12WA" );
            sub_2843( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar4 = true;
        }
        break;
        case 4:
        case 8:
        case 12:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_38816( "E12WA" );
            sub_2843( 1, g_U39174[0], "JIM", 0 );
            sub_2843( 3, g_U39174[2], "CLAY", 0 );
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
            sub_38816( "E12WA" );
            sub_2843( 1, g_U39174[0], "JIM", 0 );
            sub_2843( 2, g_U39174[1], "TERRY", 0 );
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
            sub_38816( "E12WA" );
            sub_2843( 3, g_U39174[2], "CLAY", 0 );
            sub_2843( 2, g_U39174[1], "TERRY", 0 );
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

int sub_38816(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U34._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_39890(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 1;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_5598( "FA_Jim Speech_Generic_Conversations: inconsistent number of Jim conversations - see Jim Flow" );
        return;
    }
    sub_40032();
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
            if (NOT (sub_38433( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Jim_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_41016( ref l_U354[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_8945( ref l_U354[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_40032()
{
    StrCopy( ref l_U354[0], "E13W_JT1", 16 );
    StrCopy( ref l_U354[2], "E13W_JT2", 16 );
    StrCopy( ref l_U354[6], "E13W_JT3", 16 );
    StrCopy( ref l_U354[10], "E13W_JT4", 16 );
    StrCopy( ref l_U354[1], "E13W_JC1", 16 );
    StrCopy( ref l_U354[3], "E13W_JC2", 16 );
    StrCopy( ref l_U354[7], "E13W_JC3", 16 );
    StrCopy( ref l_U354[11], "E13W_JC4", 16 );
    StrCopy( ref l_U354[14], "E12W_J1", 16 );
    StrCopy( ref l_U354[15], "E12W_J2", 16 );
    StrCopy( ref l_U354[16], "E12W_J3", 16 );
    StrCopy( ref l_U354[17], "E12W_J4", 16 );
    StrCopy( ref l_U354[20], "E12W_J5", 16 );
    StrCopy( ref l_U354[23], "E12W_J6", 16 );
    StrCopy( ref l_U354[26], "E12W_J7", 16 );
    StrCopy( ref l_U354[18], "E12W_C1", 16 );
    StrCopy( ref l_U354[21], "E12W_C2", 16 );
    StrCopy( ref l_U354[24], "E12W_C3", 16 );
    StrCopy( ref l_U354[27], "E12W_C4", 16 );
    StrCopy( ref l_U354[30], "E12W_C5", 16 );
    StrCopy( ref l_U354[33], "E12W_C6", 16 );
    StrCopy( ref l_U354[36], "E12W_C7", 16 );
    StrCopy( ref l_U354[19], "E12W_T1", 16 );
    StrCopy( ref l_U354[22], "E12W_T2", 16 );
    StrCopy( ref l_U354[25], "E12W_T3", 16 );
    StrCopy( ref l_U354[28], "E12W_T4", 16 );
    StrCopy( ref l_U354[31], "E12W_T5", 16 );
    StrCopy( ref l_U354[34], "E12W_T6", 16 );
    StrCopy( ref l_U354[37], "E12W_T7", 16 );
    StrCopy( ref l_U354[4], "E12W_CJ1", 16 );
    StrCopy( ref l_U354[8], "E12W_CJ2", 16 );
    StrCopy( ref l_U354[12], "E12W_CJ3", 16 );
    StrCopy( ref l_U354[5], "E12W_TJ1", 16 );
    StrCopy( ref l_U354[9], "E12W_TJ2", 16 );
    StrCopy( ref l_U354[13], "E12W_TJ3", 16 );
    StrCopy( ref l_U354[29], "E12W_CT1", 16 );
    StrCopy( ref l_U354[32], "E12W_CT2", 16 );
    StrCopy( ref l_U354[35], "E12W_CT3", 16 );
    return;
}

void sub_41016(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_41043( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_41043(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_9022( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_41162(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 6;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_5598( "FA_Terry_Speech_Generic_Conversations: inconsistent number of Terry conversations - see Terry Flow" );
        return;
    }
    sub_40032();
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
            if (NOT (sub_38433( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Terry_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_41016( ref l_U354[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_8945( ref l_U354[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_41578(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_5598( "FA_Clay_Speech_Generic_Conversations: inconsistent number of Clay conversations - see Clay Flow" );
        return;
    }
    sub_40032();
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
            if (NOT (sub_38433( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Clay_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_41016( ref l_U354[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_8945( ref l_U354[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_42120(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_2678( "E1DRA" );
        return;
        case 6:
        sub_2678( "E1DRA" );
        return;
        case 7:
        sub_2678( "E1DRA" );
        return;
    }
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Not a friend" );
    sub_5598( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_42447(unknown uParam0, unknown uParam1)
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
    sub_37621( uParam0 );
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
            if ((sub_36699( uParam0, I )) AND (NOT (sub_36964( uParam0, I ))))
            {
                sub_36880( uParam0, I );
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
        if (NOT (sub_36699( uParam0, I )))
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
            if (NOT (sub_36964( uParam0, I )))
            {
                sub_36880( uParam0, I );
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
            if (NOT (sub_36699( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    PRINTSTRING( "......CHECKING FRIENDS AVAILABLE\n" );
                    iVar10 = I - iVar5;
                    if (sub_43398( iVar10 ))
                    {
                        g_U18635[uParam0]._fU892._fU40 = I;
                        sub_36791( uParam0, I );
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
    sub_37621( uParam0 );
    iVar11 = 0;
    switch (uParam0)
    {
        case 1:
        sub_44581( uParam1, iVar11 );
        return;
        case 6:
        sub_45385( uParam1, iVar11 );
        return;
        case 7:
        sub_45824( uParam1, iVar11 );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: must have forgotten to update friend ID when added speech" );
    return;
}

int sub_43398(unknown uParam0)
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
            sub_38816( "E1DRA" );
            sub_2843( 1, g_U39174[0], "JIM", 0 );
            sub_2843( 2, g_U39174[1], "TERRY", 0 );
            sub_2843( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
            bVar5 = true;
        }
        break;
        case 2:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 1 )))
        {
            sub_38816( "E1DRA" );
            sub_2843( 1, g_U39174[0], "JIM", 0 );
            sub_2843( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
        }
        break;
        case 3:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_38816( "E1DRA" );
            sub_2843( 1, g_U39174[0], "JIM", 0 );
            sub_2843( 3, g_U39174[2], "CLAY", 0 );
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
            sub_38816( "E1DRA" );
            sub_2843( 2, g_U39174[1], "TERRY", 0 );
            sub_2843( 3, g_U39174[2], "CLAY", 0 );
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
            sub_38816( "E1DRA" );
            sub_2843( 3, g_U39174[2], "CLAY", 0 );
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
            sub_38816( "E1DRA" );
            sub_2843( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar4 = true;
        }
        break;
        case 5:
        if (IS_BIT_SET( g_U39172, 0 ))
        {
            sub_38816( "E1DRA" );
            sub_2843( 1, g_U39174[0], "JIM", 0 );
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

void sub_44581(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 1;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_5598( "FA_Jim_Speech_Drunk_Conversations: inconsistent number of Jim drunk conversations - see Jim Flow" );
        return;
    }
    sub_44727();
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
            if (NOT (sub_43398( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Jim_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_41016( ref l_U354[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_8945( ref l_U354[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_44727()
{
    StrCopy( ref l_U354[0], "E1DR_4W1", 16 );
    StrCopy( ref l_U354[1], "E1DR_4W2", 16 );
    StrCopy( ref l_U354[2], "E1DR_4W3", 16 );
    StrCopy( ref l_U354[3], "E1DR_4W4", 16 );
    StrCopy( ref l_U354[4], "E1DR_4W5", 16 );
    StrCopy( ref l_U354[8], "E1DR_JTC1", 16 );
    StrCopy( ref l_U354[13], "E1DR_JTC2", 16 );
    StrCopy( ref l_U354[6], "E1DR_JC1", 16 );
    StrCopy( ref l_U354[9], "E1DR_JC2", 16 );
    StrCopy( ref l_U354[11], "E1DR_JC3", 16 );
    StrCopy( ref l_U354[14], "E1DR_JC4", 16 );
    StrCopy( ref l_U354[16], "E1DR_JC5", 16 );
    StrCopy( ref l_U354[7], "E1DR_JT1", 16 );
    StrCopy( ref l_U354[10], "E1DR_JT2", 16 );
    StrCopy( ref l_U354[12], "E1DR_JT3", 16 );
    StrCopy( ref l_U354[15], "E1DR_JT4", 16 );
    StrCopy( ref l_U354[17], "E1DR_JT5", 16 );
    StrCopy( ref l_U354[5], "E12W_JJ", 16 );
    return;
}

void sub_45385(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 6;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_5598( "FA_Terry_Speech_Drunk_Conversations: inconsistent number of Terry drunk conversations - see Terry Flow" );
        return;
    }
    sub_44727();
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
            if (NOT (sub_43398( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Terry_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_41016( ref l_U354[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_8945( ref l_U354[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_45824(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_5598( "FA_Clay_Speech_Drunk_Conversations: inconsistent number of Clay drunk conversations - see Clay Flow" );
        return;
    }
    sub_44727();
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
            if (NOT (sub_43398( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Clay_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_41016( ref l_U354[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_8945( ref l_U354[iVar6], uParam0, 5, iVar5 );
    return;
}

int sub_46418(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if ((sub_34427( uParam0 )) || (IS_CHAR_DEAD( sub_2792() )))
    {
        return l_U659._fU24;
    }
    if (l_U659._fU24)
    {
        if (NOT sub_35514())
        {
            if (g_U18635[l_U554]._fU892._fU44 == -1)
            {
                l_U659._fU24 = 0;
                return 0;
            }
            iVar3 = 0;
            GET_GAME_TIMER( ref iVar3 );
            if (l_U659._fU28 == 0)
            {
                l_U659._fU28 = iVar3 + 3000;
            }
            if (sub_46564())
            {
                l_U659._fU28 = 0;
            }
            if ((NOT (l_U659._fU28 == 0)) AND (iVar3 > l_U659._fU28))
            {
                l_U659._fU28 = 0;
                if (l_U659._fU8)
                {
                    sub_42120( l_U554 );
                    sub_2843( 0, sub_2792(), l_U717, 0 );
                    sub_46683( l_U554, ref l_U603 );
                }
                else
                {
                    sub_36196( l_U554 );
                    sub_2843( 0, sub_2792(), l_U717, 0 );
                    sub_46819( l_U554, ref l_U603 );
                }
                l_U659._fU24 = 0;
                return 0;
            }
            return 1;
        }
        l_U659._fU28 = 0;
        return 1;
    }
    if (sub_35514())
    {
        if (sub_18325( l_U603 ))
        {
            iVar4 = 0;
            sub_27249( ref l_U603, iVar4 );
        }
        l_U659._fU24 = 1;
        l_U659._fU28 = 0;
        return 1;
    }
    return 0;
}

void sub_46564()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_46683(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        sub_44581( uParam1, iVar4 );
        break;
        case 6:
        sub_45385( uParam1, iVar4 );
        break;
        case 7:
        sub_45824( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_46819(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        sub_39890( uParam1, iVar4 );
        break;
        case 6:
        sub_41162( uParam1, iVar4 );
        break;
        case 7:
        sub_41578( uParam1, iVar4 );
        break;
    }
    return;
}

int sub_47080(int iParam0)
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

void sub_47341()
{
    CLEAR_WANTED_LEVEL( sub_4041() );
    if (NOT g_U0)
    {
        sub_47371();
    }
    sub_32699();
    return;
}

void sub_47371()
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