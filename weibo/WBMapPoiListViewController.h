//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "MKMapViewDelegate-Protocol.h"
#import "WBMapPoiListCalloutAnnotationViewDelegate-Protocol.h"

@class MKMapView, NSArray, NSMutableArray, NSString, SNHTTPRequestOperationWrapper, UIButton, WBMapPoiListAnnotation;

@interface WBMapPoiListViewController : WBViewController <MKMapViewDelegate, WBMapPoiListCalloutAnnotationViewDelegate>
{
    _Bool _failedToLocateErrorMessageHasAlreadyShowed;
    _Bool _hasLoadMapData;
    _Bool _isTipNav;
    MKMapView *_mapView;
    UIButton *_backButton;
    UIButton *_resetButton;
    NSString *_containerId;
    NSString *_container_ext;
    NSArray *_poiDataList;
    NSMutableArray *_poiAnnoList;
    SNHTTPRequestOperationWrapper *_mapDataWrapper;
    WBMapPoiListAnnotation *_callOutAnnotation;
    struct CLLocationCoordinate2D _currentCoordinate;
    struct CLLocationCoordinate2D _centerCoordinate;
}

@property(retain, nonatomic) WBMapPoiListAnnotation *callOutAnnotation; // @synthesize callOutAnnotation=_callOutAnnotation;
@property(retain, nonatomic) SNHTTPRequestOperationWrapper *mapDataWrapper; // @synthesize mapDataWrapper=_mapDataWrapper;
@property(retain, nonatomic) NSMutableArray *poiAnnoList; // @synthesize poiAnnoList=_poiAnnoList;
@property(nonatomic) _Bool isTipNav; // @synthesize isTipNav=_isTipNav;
@property(retain, nonatomic) NSArray *poiDataList; // @synthesize poiDataList=_poiDataList;
@property(nonatomic) _Bool hasLoadMapData; // @synthesize hasLoadMapData=_hasLoadMapData;
@property(retain, nonatomic) NSString *container_ext; // @synthesize container_ext=_container_ext;
@property(retain, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(nonatomic) struct CLLocationCoordinate2D currentCoordinate; // @synthesize currentCoordinate=_currentCoordinate;
@property(nonatomic) _Bool failedToLocateErrorMessageHasAlreadyShowed; // @synthesize failedToLocateErrorMessageHasAlreadyShowed=_failedToLocateErrorMessageHasAlreadyShowed;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)dealloc;
- (id)schemeURLForMapAppDirectionTo:(struct CLLocationCoordinate2D)arg1 currentLocation:(struct CLLocationCoordinate2D)arg2;
- (void)openMapBySystem:(id)arg1;
- (void)openMapByGaoDe:(id)arg1;
- (void)openInMapAppAndRoute:(id)arg1;
- (void)didPressNavForMapPoiListCalloutAnnotationView:(id)arg1;
- (void)didPressMapPoiListCalloutAnnotationView:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)locationManagerDidFailToLocateNotification:(id)arg1;
- (void)locationManagerDidFinishLocatingNotification:(id)arg1;
- (void)loadPoiListFromServerIfNeed;
- (void)reloadPoiAnnoListForMap;
- (void)onResetBtnPressed:(id)arg1;
- (void)onBackBtnPressed:(id)arg1;
- (void)initSubViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

