#include "DvElements/DvElementCamera.h"
#include "DvElements/DvElementCaption.h"
#include "DvElements/DvElementFade.h"
#include "DvElements/DvElementGameCamera.h"
#include "DvElements/DvElementLetterBox.h"
#include "DvElements/DvElementMovieView.h"
#include "DvElements/DvElementRootPath.h"
#include "DvElements/DvElementSound.h"


// Made it by guessing
enum <uint32> DvElementType
{
    DvElementTypeCamera = 4,         
    DvElementTypeMovieView = 8,
    DvElementTypeShadowResolution = 10 ,
    DvElementTypeMotion = 12,
    DvElementTypeModelClipping = 13,
    DvElementTypeCaption = 14,
    DvElementTypeNearFarSettings = 16,
    DvElementTypeRootPath = 20,
    DvElementTypeSound = 26,
    DvElementTypePathAdjustment = 28,
    DvElementTypeUVAnimation = 29,
    DvElementTypeGameCamera = 34,
    DvElementTypeLetterBox = 40,
    DvElementTypeCyberSpaceNoise = 41,
    DvElementTypeFade = 44,
    DvElementTypeCameraExposure = 48,
    DvElementTypeTime = 49,
    DvElementTypeChromaticAberration = 57,
    DvElementTypeAura = 59,
    DvElementTypeDOF = 60,
    DvElementTypeModel = 68,
    DvElementTypeCameraShakeLoop = 80,
    DvElementTypeAtmosphereHeightFogParam = 83,
    DvElementTypeUnknownCamera = 88,
    DvElementTypeVignette = 90,
    DvElementTypeSpotlightModel = 95,
    DvElementTypePathInterpolation = 156,
    DvElementTypeVariablePointLight = 168,
    DvElementTypeEffect = 177,
    DvElementTypeCameraOffset = 276 ,
    DvElementTypeComplexAnimation = 285,
};


struct DvElementBase;

typedef struct
{
    SetRandomBackColor();
    GUID guid;
    uint32 field_40;            // is type related ???
    DvElementType type;                    
    uint32 childElementsCount;
    uint32 field_4c;
    uint32 field_50;
    uint32 field_54;
    uint32 field_58;
    uint32 field_5c;
    switch (type)
    {
        case 4:     DvElementCamera                     dvCamera;               break;
        case 8:     DvElementMovieView                  dvMovieView;            break;
        // case 10:    DvElementShadowResolution           dvShadowResolution ;    break;
        // case 12:    DvElementMotion                     dvMotion;               break;
        // case 13:    DvElementModelClipping              dvModelClipping;        break;
        case 14:    DvElementCaption                    dvCaption;              break;
        // case 16:    DvElementNearFarSettings            dvNearFar;              break;
        case 20:    DvElementRootPath                   dvRootPath;             break;
        case 26:    DvElementSound                      dvSound;                break;
        // case 28:    DvElementPathAdjustment             dvPathAdjustment;       break;
        // case 29:    DvElementUVAnimation                dvUVAnim;               break;
        case 34:    DvElementGameCamera                 dvGameCamera;           break;
        case 40:    DvElementLetterBox                  dvLetterBox;            break;
        // case 41:    DvElementCyberSpaceNoise            dvCyberSpaceNoise;      break;
        case 44:    DvElementFade                       dvFade;                 break;
        // case 48:    DvElementCameraExposure             dvCameraExposure;       break;
        // case 49:    DvElementTime                       dvTime;                 break;
        // case 57:    DvElementChromaticAberration        dvChromaticAberration;  break;
        // case 59:    DvElementAura                       dvAura;                 break;
        // case 60:    DvElementDOF                        dvDOF;                  break;
        // case 68:    DvElementModel                      dvModel;                break;
        // case 80:    DvElementCameraShakeLoop            dvCameraShakeLoop;      break;
        // case 83:    DvElementAtmosphereHeightFogParam   dvCameraHeightFog;      break;
        // case 88:    DvElementUnknownCamera              dvUnknownCamera;        break;
        // case 90:    DvElementVignette                   dvCameraVignette;       break;
        // case 95:    DvElementSpotlightModel             dvSpotlightModel;       break;
        // case 156:   DvElementPathInterpolation          dvPathInterpolation;    break;
        // case 168:   DvElementVariablePointLight         dvPointLight;           break;
        // case 177:   DvElementEffect                     dvEffect;               break;
        // case 276:   DvElementCameraOffset               dvCameraOffset;         break;
        // case 285:   DvElementComplexAnimation           dvComplexAnimation;     break;
        default: break;
    }
    if (childElementsCount) DvElementBase childElements[childElementsCount];
    
    
}DvElementBase<optimize=false, name="DvElementBase", read=Str("Type: %s", EnumToString(type))>;