void main()
{
    vector vVar2;
    float fVar5;
    int iVar6;

    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_21();
    }
    while (IS_SCREEN_FADING())
    {
        WAIT( 0 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_OUT( 500 );
    }
    while (IS_SCREEN_FADING())
    {
        WAIT( 0 );
    }
    vVar2 = {-584.75000000, 78.02000000, 5.22000000};
    fVar5 = 90.00000000;
    GET_INTERIOR_AT_COORDS( vVar2.x, vVar2.y, vVar2.z, ref iVar6 );
    WAIT( 500 );
    if (iVar6 != nil)
    {
        LOAD_SCENE_FOR_ROOM_BY_KEY( iVar6, GET_HASH_KEY( "E1_BOWL_ROOM" ) );
        ACTIVATE_INTERIOR( iVar6, 1 );
    }
    else
    {
        LOAD_SCENE( vVar2.x, vVar2.y, vVar2.z );
    }
    SET_CHAR_COORDINATES( sub_30(), vVar2.x, vVar2.y, vVar2.z );
    SET_CHAR_HEADING( sub_30(), fVar5 );
    FREEZE_CHAR_POSITION( sub_30(), 1 );
    WAIT( 3000 );
    FREEZE_CHAR_POSITION( sub_30(), 0 );
    WAIT( 1000 );
    DO_SCREEN_FADE_IN( 500 );
    sub_21();
    return;
}

void sub_21()
{
    FREEZE_CHAR_POSITION( sub_30(), 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_30()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}
