void main()
{
    l_U0 = {0.00000000, 0.00000000, 0.00000000};
    l_U3 = 2.50000000;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U7 = 0;
    sub_52();
    while (true)
    {
        if (IS_PLAYER_PLAYING( sub_365() ))
        {
            sub_408();
        }
        WAIT( 0 );
    }
    return;
}

void sub_52()
{
    CREATE_WIDGET_GROUP( "LOCATE WIDGET" );
    ADD_WIDGET_STRING( "Locate Position" );
    ADD_WIDGET_FLOAT_SLIDER( "x ", ref l_U0._fU0, 63036, 2500, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "y ", ref l_U0._fU4, 63036, 2500, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "z ", ref l_U0._fU8, 65516, 100, 0.10000000 );
    ADD_WIDGET_TOGGLE( "set at char coords", ref l_U5 );
    ADD_WIDGET_STRING( "Locate Size" );
    ADD_WIDGET_FLOAT_SLIDER( "size", ref l_U3, 0.10000000, 6.00000000, 0.10000000 );
    ADD_WIDGET_TOGGLE( "in car / on foot", ref l_U6 );
    ADD_WIDGET_TOGGLE( "on foot only", ref l_U7 );
    END_WIDGET_GROUP();
    l_U4 = 1;
    return;
}

void sub_365()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_408()
{
    if (IS_PLAYER_PLAYING( sub_365() ))
    {
        if (NOT l_U4)
        {
            sub_52();
        }
        else if (l_U5)
        {
            GET_CHAR_COORDINATES( sub_461(), ref l_U0._fU0, ref l_U0._fU4, ref l_U0._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( l_U0._fU0, l_U0._fU4, l_U0._fU8, ref l_U0._fU8 );
            l_U0._fU8 += l_U3 - 0.10000000;
            l_U5 = 0;
        }
        if (l_U6)
        {
            l_U3 = 2.50000000;
            l_U6 = 0;
        }
        if (l_U7)
        {
            l_U3 = 1.60000000;
            l_U7 = 0;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_461(), l_U0._fU0, l_U0._fU4, l_U0._fU8, l_U3, l_U3, l_U3, 1 ))
        {
            ;
        }
    }
    return;
}

void sub_461()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}
