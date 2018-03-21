//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapNaviBaseManager.h"

#import "AMapNaviCoreCombineDelegate-Protocol.h"

@class AMapNaviCoreCombine, AMapNaviCruiseInfo, AMapNaviInfo, AMapNaviLocation, AMapNaviRoute, CLLocation, MAMapView, NSArray, NSDictionary, NSHashTable, NSString, UIImage;
@protocol AMapNaviDriveManagerDelegate, AMapNaviDriveManagerInternalDelegate, AMapNaviDriveManagerInternalDelegateForView;

@interface AMapNaviDriveManager : AMapNaviBaseManager <AMapNaviCoreCombineDelegate>
{
    NSArray *_wayPoints;
    _Bool _updateCameraInfo;
    _Bool _updateTrafficInfo;
    _Bool _isRecalculateRouteForYaw;
    _Bool _isRecalculateRouteForTrafficJam;
    _Bool _needReselectedRouteAfterStopNavi;
    id <AMapNaviDriveManagerDelegate> _delegate;
    long long _detectedMode;
    AMapNaviCoreCombine *_driveCore;
    NSHashTable *_dataRepresentatives;
    NSArray *_allRouteIDs;
    NSDictionary *_allNaviRoutes;
    long long _currentNaviRouteID;
    AMapNaviRoute *_currentNaviRoute;
    AMapNaviInfo *_currentNaviInfo;
    AMapNaviLocation *_currentCarLocation;
    UIImage *_crossImage;
    NSArray *_laneInfo;
    NSArray *_trafficStatus;
    NSArray *_trafficFacilities;
    AMapNaviCruiseInfo *_cruiseInfo;
    NSArray *_currentCameraInfos;
    NSArray *_currentServiceAreaInfos;
    UIImage *_turnIconImage;
    long long _turnIconType;
    MAMapView *_crossImageMapView;
    id <AMapNaviDriveManagerInternalDelegate> _internalDelegate;
    id <AMapNaviDriveManagerInternalDelegateForView> _internalDelegateForView;
    CLLocation *_signalStrengthLocation;
    long long _gpsSignalStrength;
    struct CGSize _crossImageSize;
}

@property(nonatomic) long long gpsSignalStrength; // @synthesize gpsSignalStrength=_gpsSignalStrength;
@property(retain, nonatomic) CLLocation *signalStrengthLocation; // @synthesize signalStrengthLocation=_signalStrengthLocation;
@property(nonatomic) __weak id <AMapNaviDriveManagerInternalDelegateForView> internalDelegateForView; // @synthesize internalDelegateForView=_internalDelegateForView;
@property(nonatomic) __weak id <AMapNaviDriveManagerInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) struct CGSize crossImageSize; // @synthesize crossImageSize=_crossImageSize;
@property(retain, nonatomic) MAMapView *crossImageMapView; // @synthesize crossImageMapView=_crossImageMapView;
@property(nonatomic) long long turnIconType; // @synthesize turnIconType=_turnIconType;
@property(retain, nonatomic) UIImage *turnIconImage; // @synthesize turnIconImage=_turnIconImage;
@property(retain, nonatomic) NSArray *currentServiceAreaInfos; // @synthesize currentServiceAreaInfos=_currentServiceAreaInfos;
@property(retain, nonatomic) NSArray *currentCameraInfos; // @synthesize currentCameraInfos=_currentCameraInfos;
@property(retain, nonatomic) AMapNaviCruiseInfo *cruiseInfo; // @synthesize cruiseInfo=_cruiseInfo;
@property(retain, nonatomic) NSArray *trafficFacilities; // @synthesize trafficFacilities=_trafficFacilities;
@property(retain, nonatomic) NSArray *trafficStatus; // @synthesize trafficStatus=_trafficStatus;
@property(retain, nonatomic) NSArray *laneInfo; // @synthesize laneInfo=_laneInfo;
@property(retain, nonatomic) UIImage *crossImage; // @synthesize crossImage=_crossImage;
@property(retain, nonatomic) AMapNaviLocation *currentCarLocation; // @synthesize currentCarLocation=_currentCarLocation;
@property(retain, nonatomic) AMapNaviInfo *currentNaviInfo; // @synthesize currentNaviInfo=_currentNaviInfo;
@property(retain, nonatomic) AMapNaviRoute *currentNaviRoute; // @synthesize currentNaviRoute=_currentNaviRoute;
@property(nonatomic) long long currentNaviRouteID; // @synthesize currentNaviRouteID=_currentNaviRouteID;
@property _Bool needReselectedRouteAfterStopNavi; // @synthesize needReselectedRouteAfterStopNavi=_needReselectedRouteAfterStopNavi;
@property(retain, nonatomic) NSDictionary *allNaviRoutes; // @synthesize allNaviRoutes=_allNaviRoutes;
@property(retain, nonatomic) NSArray *allRouteIDs; // @synthesize allRouteIDs=_allRouteIDs;
@property(retain, nonatomic) NSHashTable *dataRepresentatives; // @synthesize dataRepresentatives=_dataRepresentatives;
@property(retain, nonatomic) AMapNaviCoreCombine *driveCore; // @synthesize driveCore=_driveCore;
@property(nonatomic) long long detectedMode; // @synthesize detectedMode=_detectedMode;
@property(nonatomic) _Bool isRecalculateRouteForTrafficJam; // @synthesize isRecalculateRouteForTrafficJam=_isRecalculateRouteForTrafficJam;
@property(nonatomic) _Bool isRecalculateRouteForYaw; // @synthesize isRecalculateRouteForYaw=_isRecalculateRouteForYaw;
@property(nonatomic) _Bool updateTrafficInfo; // @synthesize updateTrafficInfo=_updateTrafficInfo;
@property(nonatomic) _Bool updateCameraInfo; // @synthesize updateCameraInfo=_updateCameraInfo;
@property(nonatomic) __weak id <AMapNaviDriveManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)naviCoreCombine:(id)arg1 onUpdateNoNaviInfor:(id)arg2;
- (void)naviCoreCombine:(id)arg1 onUpdateTrafficFacilities:(id)arg2;
- (void)naviCoreCombine:(id)arg1 onUpdateLightBar:(id)arg2 noPassBarIndex:(int)arg3 etaUpdataFlag:(int)arg4;
- (void)naviCoreCombineOnHideLane:(id)arg1;
- (void)naviCoreCombine:(id)arg1 onShowLaneWithLaneBackInfo:(id)arg2 laneSelectInfo:(id)arg3;
- (id)addBackgroundColorToTurnIconImage:(id)arg1;
- (void)notifyInternalDelegateForViewUpdateTurnIconImage;
- (void)naviCoreCombine:(id)arg1 onRenderManeuverIcon:(id)arg2 turnIconType:(long long)arg3;
- (void)naviCoreCombineOnHideCrossImage:(id)arg1;
- (void)naviCoreCombine:(id)arg1 onShowCrossImage:(id)arg2 imageType:(int)arg3;
- (void)naviCoreCombine:(id)arg1 onShowCrossImageWithImageData:(id)arg2;
- (void)naviDriveCoreOnArrivedDestination:(id)arg1;
- (void)naviCoreCombine:(id)arg1 onArrivedWayPoint:(int)arg2;
- (void)naviCoreCombine:(id)arg1 onLockScreenNaviTipsWithSoundString:(id)arg2 turnIconType:(long long)arg3 segmentRemainLength:(int)arg4;
- (void)naviCoreCombine:(id)arg1 onPlayNaviSoundString:(id)arg2 soundStringType:(int)arg3;
- (_Bool)naviCoreCombineIsNaviPlaying:(id)arg1;
- (void)naviCoreCombine:(id)arg1 onCarLocationChangeToLocation:(id)arg2;
- (void)naviCoreCombine:(id)arg1 onUpdateSAPA:(id)arg2;
- (void)naviCoreCombine:(id)arg1 onUpdateCamera:(id)arg2;
- (void)naviCoreCombine:(id)arg1 onUpdateNaviInfo:(id)arg2;
- (void)naviDriveCoreOnEndEmulatorNavi:(id)arg1;
- (void)naviCoreCombine:(id)arg1 onNaviStop:(int)arg2;
- (void)naviCoreCombine:(id)arg1 onRerouteWithType:(long long)arg2;
- (void)naviCoreCombine:(id)arg1 onPathChanged:(int)arg2;
- (void)naviCoreCombine:(id)arg1 onRouteStatusChange:(int)arg2;
- (void)naviCoreCombine:(id)arg1 onNewRouteFailure:(id)arg2 type:(long long)arg3 isLocal:(_Bool)arg4;
- (void)naviCoreCombine:(id)arg1 onNewRouteSuccessWithType:(long long)arg2 isLocal:(_Bool)arg3;
- (void)performErrorDelegateWithError:(id)arg1;
- (void)performDidChangeAuthorizationStatus:(int)arg1;
- (void)notifyInternalDelegateForViewUpdateGPSSignalStrength:(long long)arg1;
- (void)proessLocateSignalStrengthWithLocation:(id)arg1;
- (void)extendHandleCLMDidUpdateLocation:(id)arg1;
- (void)initCorssImageMapView;
- (id)getRouteSplittedPolylineWithDashedLine:(_Bool)arg1 trafficStatuses:(_Bool)arg2;
- (void)reSelectNaviRouteWithCurrentRouteID;
- (_Bool)internalSelectNaviRouteWithRouteID:(long long)arg1;
- (void)buildNaviRouteBaseData;
- (id)buildAllNaviRoutes;
- (id)buildNaviRouteWithRouteID:(int)arg1;
- (_Bool)selectNaviRouteWithRouteID:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *naviRoutes;
@property(readonly, nonatomic) NSArray *naviRouteIDs;
@property(readonly, nonatomic) AMapNaviRoute *naviRoute;
@property(readonly, nonatomic) long long naviRouteID;
- (id)getNaviStatisticsInfo;
- (id)getTrafficStatuses;
- (id)getTrafficStatusesWithStartPosition:(int)arg1 distance:(int)arg2;
- (id)getNaviGuideList;
- (void)setTimeForOneWord:(int)arg1;
- (void)refreshTrafficStatusesManual;
- (_Bool)readTrafficInfoManualWithFrontDistance:(int)arg1;
- (_Bool)setBroadcastMode:(long long)arg1;
- (void)setVehicleProvince:(id)arg1 number:(id)arg2;
- (void)performDidStartNaviDelegateWithNaviType:(long long)arg1;
- (id)getMostProbableCurrentLocation;
- (_Bool)recalculateDriveRouteWithDrivingStrategy:(long long)arg1 rerouteType:(long long)arg2;
- (_Bool)recalculateDriveRouteWithDrivingStrategy:(long long)arg1;
- (_Bool)calculateDriveRouteWithStartPoints:(id)arg1 endPoints:(id)arg2 wayPoints:(id)arg3 drivingStrategy:(long long)arg4;
- (_Bool)calculateDriveRouteWithEndPoints:(id)arg1 wayPoints:(id)arg2 drivingStrategy:(long long)arg3;
- (void)notifyCurrentDriveDataToNewRepresentative:(id)arg1;
- (void)removeDataRepresentative:(id)arg1;
- (void)addDataRepresentative:(id)arg1;
- (void)stopNavi;
- (_Bool)startEmulatorNavi;
- (_Bool)startGPSNavi;
- (void)addExtraInfoToCurrentCarLocation:(id)arg1;
- (_Bool)initDriveCore;
- (void)initProperties;
- (_Bool)createDriveManager;
- (id)init;
- (void)dealloc;
- (void)notifyDataRepresentableUpdateServiceAreaInfos;
- (void)notifyDataRepresentableUpdateCameraInfos;
- (void)notifyDataRepresentableUpdateCruiseInfo;
- (void)notifyDataRepresentableUpdateTrafficFacilities;
- (void)notifyDataRepresentableUpdateTrafficStatus;
- (void)notifyDataRepresentableUpdateLaneInfo;
- (void)notifyDataRepresentableUpdateTurnIconImage;
- (void)notifyDataRepresentableUpdateCrossImage;
- (void)notifyDataRepresentableUpdateCurrentCarLocation;
- (void)notifyDataRepresentableUpdateCurrentNaviInfo;
- (void)notifyDataRepresentableUpdateCurrentNaviRoute;
- (void)notifyDataRepresentableUpdateCurrentNaviRouteID;
- (void)notifyDataRepresentableUpdateCurrentNaviMode;
@property(copy, nonatomic) CDUnknownBlockType mbklbsSearchCallBack;
@property(copy, nonatomic) NSString *mbkLBSID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
