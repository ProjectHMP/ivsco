void main()
{
    int iVar2;

    g_U9217 = 0;
    if (GET_HOURS_OF_DAY() == 0)
    {
        iVar2++;
    }
    while (true)
    {
        WAIT( 0 );
        if (iVar2 != GET_HOURS_OF_DAY())
        {
            if (NOT g_U9217)
            {
                g_U9217 = 1;
                iVar2 = GET_HOURS_OF_DAY();
                while (NOT (HAS_SCRIPT_LOADED( "ambControlMain" )))
                {
                    REQUEST_SCRIPT( "ambControlMain" );
                    WAIT( 0 );
                }
                START_NEW_SCRIPT_WITH_ARGS( "ambControlMain", ref iVar2, 1, 1024 );
                MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambControlMain" );
            }
        }
    }
    return;
}
