//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMapViewController.h"

#import "MMMapContextDelegate-Protocol.h"

@class CLLocation, MBKMapAnnotaionsHelper, MBKRegionPoiView, MMMapContext, MMPointAnnotation, MMPolyline, NSArray, NSNumber, NSString, RACSubject;
@protocol MBKRidingMapViewDelegate, MMAnnotation;

@interface MBKMapAndAnnotationsViewController : MBKMapViewController <MMMapContextDelegate>
{
    struct CLLocationCoordinate2D _mapCenterWhenRegionWillChange;
    _Bool _forceNearbyOrigin;
    MMPointAnnotation *_pinAnnotation;
    id <MBKRidingMapViewDelegate> _delegate;
    MBKMapAnnotaionsHelper *_mapAnnotationsHelper;
    NSNumber *_userSetZoomLevel;
    RACSubject *_nonTrivailUpdatingLocationSignal;
    MBKRegionPoiView *_centerPinView;
}

+ (double)defaultZoomLevel;
+ (double)initialZoomLevel;
+ (struct MMPointAnnotation *)nearestAnnotaionInAnnotaions:(id)arg1;
@property(retain, nonatomic) MBKRegionPoiView *centerPinView; // @synthesize centerPinView=_centerPinView;
@property(retain, nonatomic) RACSubject *nonTrivailUpdatingLocationSignal; // @synthesize nonTrivailUpdatingLocationSignal=_nonTrivailUpdatingLocationSignal;
@property(retain, nonatomic) NSNumber *userSetZoomLevel; // @synthesize userSetZoomLevel=_userSetZoomLevel;
@property(retain, nonatomic) MBKMapAnnotaionsHelper *mapAnnotationsHelper; // @synthesize mapAnnotationsHelper=_mapAnnotationsHelper;
@property(nonatomic) __weak id <MBKRidingMapViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMPointAnnotation *pinAnnotation; // @synthesize pinAnnotation=_pinAnnotation;
- (void).cxx_destruct;
- (void)setMapCenterAnimated:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2;
@property(readonly, nonatomic) id <MMAnnotation> selectedAnnotationExcludedClosestBike;
@property(readonly, nonatomic) struct CLLocationCoordinate2D currentMapCenterCoordinate;
@property(readonly, nonatomic) CLLocation *currentLocation;
@property(readonly, nonatomic) MMMapContext *mapContext;
- (void)updateWithinPOIAppearance;
- (void)setMapLocatingMoreAccurateModeEnabled:(_Bool)arg1;
- (_Bool)checkLocationService;
- (void)mapContext:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)mapContext:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)mapDidUpdateUserLocationNonTrivially:(id)arg1;
- (void)mapContext:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)clearAllAnnotations;
- (void)clearAllMapElements;
- (void)resetMap:(_Bool)arg1 perferCurrentRegionCenter:(_Bool)arg2;
- (void)resetMap:(_Bool)arg1;
- (void)restoreMapCenterAndZoom:(_Bool)arg1;
- (void)restoreMapCenterAndZoom;
- (id)hintForWithinAnnotation:(struct MMPointAnnotation *)arg1;
- (_Bool)additionalPassTestForWithinAnnotion:(struct MMPointAnnotation *)arg1;
- (_Bool)shouldUpdateWithinPOIAppearanceWhenLocationChanged;
- (_Bool)shouldAutoRequestNearby;
- (struct CGRect)mapFrame;
- (void)viewDidLoad;
- (id)init;
- (id)mapContext:(id)arg1 renderForOverlay:(id)arg2;
- (id)mapContext:(id)arg1 viewForAnnotation:(id)arg2;
- (void)refreshGeoFencingAnnotaionsOnMap:(id)arg1;
- (void)refreshGeoFenceByTypes:(id)arg1 atLocation:(struct CLLocationCoordinate2D)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)refreshCurrentLocationGeoFenceByTypes:(id)arg1;
- (void)setAnnotationViewIfNeeded:(id)arg1 spinEnabled:(_Bool)arg2;
- (void)autoManagePinViewHidden;
- (void)clearPinAnnotaion;
- (void)addPinAnnotationWithoutDuplication:(struct CLLocationCoordinate2D)arg1;
- (void)routePolylingDidDrawAfterSelectingAnnotationView:(id)arg1;
- (_Bool)shouldDeselecedAnnotationWhenTapBlankArea;
- (long long)movingMethodForRouting;
- (_Bool)customRoutingWhenSelectedAnnotaionView:(id)arg1;
- (long long)originForRouting;
- (void)recoverMapToUnselectedState;
- (void)selectAnnotaion:(id)arg1 drawRouteFromLocation:(id)arg2 addFakePinAnnotaion:(_Bool)arg3;
- (void)mapContext:(id)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapContext:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)doWhenDidSelectAnnotationView:(id)arg1 fromCalloutView:(_Bool)arg2;
- (void)mapContext:(id)arg1 didTapCalloutOfAnnotationView:(id)arg2;
- (void)mapContext:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)getOperationalFenceDataSignal;
- (void)clearOperationalFence;
- (void)showOperationalFenceWithFillingColor:(_Bool)arg1;
- (void)showOperationalFence;
@property(readonly, nonatomic) NSArray *operationalFenceOverlays;
- (void)setOperationalFenceOverlays:(id)arg1;
- (void)observeRouteAndSwitchMapToNaviModeIfNeeded;
- (_Bool)observedRouteFlag;
- (void)setObservedRouteFlag:(_Bool)arg1;
- (void)updateCalloutViewOfSelectedAnnotationWithDistance:(long long)arg1 duration:(double)arg2 movingMethod:(long long)arg3;
- (void)clearNaviRoute;
- (void)routeToNearsetAnnotationOfTypes:(id)arg1 filterBlock:(CDUnknownBlockType)arg2 movingMethod:(long long)arg3;
- (id)drawRoute:(id)arg1 fromCoordinate:(struct CLLocationCoordinate2D)arg2 toCoordinate:(struct CLLocationCoordinate2D)arg3;
- (void)searchAndDrawRouteFrom:(struct CLLocationCoordinate2D)arg1 to:(struct CLLocationCoordinate2D)arg2 autoZoomToShowResult:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)searchAndDrawRouteFrom:(struct CLLocationCoordinate2D)arg1 to:(struct CLLocationCoordinate2D)arg2 showInfoOnAnnotationWithMovingMethod:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)searchAndDrawRouteFrom:(struct CLLocationCoordinate2D)arg1 to:(struct CLLocationCoordinate2D)arg2 showInfoOnAnnotationWithMovingMethod:(long long)arg3;
- (struct SearchApi *)router;
@property(readonly, nonatomic) MMPolyline *routePolyline;
- (void)setRoutePolyline:(id)arg1;
- (struct UIEdgeInsets)insetsForMap;
- (void)zoomToShowNearAnnotaionsOfTypes:(id)arg1 maxCount:(long long)arg2 hasMinimumZoomLevel:(_Bool)arg3;
- (void)zoomToFitAnnotations:(id)arg1 base:(struct CLLocationCoordinate2D)arg2;
- (void)zoomToShowWholeAreaOfOverlay:(id)arg1 includingCurrentLocation:(_Bool)arg2;
- (void)zoomToFitPolyline:(id)arg1;
- (id)parseRedPacketStopAreasData:(id)arg1;
- (id)parseMPLData:(id)arg1 isForParking:(_Bool)arg2;
- (id)parseBikesData:(id)arg1;
- (void)selectClosestBike;
- (void)removeAnnoOneByOne:(id)arg1;
- (void)addAnnoOneByOne:(id)arg1 withCenterPos:(struct CLLocationCoordinate2D)arg2;
- (void)updateDisplayAnnoListWithCenter:(struct CLLocationCoordinate2D)arg1;
- (void)addAnnoListFromRequestData:(id)arg1 requstedCoordinate:(struct CLLocationCoordinate2D)arg2 shouldAutoZoom:(_Bool)arg3;
- (id)generateNearbyRequestWithCityCode:(id)arg1 targetLocation:(struct CLLocationCoordinate2D)arg2;
- (void)cancelBikesNearbyRequest;
- (void)requestAndShowNearbyItemsInnerWithCoordinate:(struct CLLocationCoordinate2D)arg1 cityCode:(id)arg2;
- (void)requestAndShowNearbyItemsAtLocation:(struct CLLocationCoordinate2D)arg1;
- (void)requestAndShowNearbyItems;
- (id)annotationCache;
- (id)lbsManager;
@property(readonly, nonatomic) _Bool lastNearbyRequestCoordinateExsited;
@property(readonly, nonatomic) struct CLLocationCoordinate2D lastNearbyRequestCoordinate;
- (void)setLastNearbyRequestCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)nearbyRequest;
- (void)setNearbyRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

