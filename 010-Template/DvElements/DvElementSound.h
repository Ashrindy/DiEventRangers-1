typedef struct
{
	dvString cueName <name="Cue Name">;
	uint32 field_a0;
	uint32 field_a4;
    
}DvElementSound<optimize=false, read=Str("%s", cueName.str), name="DvElementSound">;