//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBPopLayerTrackerDelegate-Protocol.h"

@class NSMutableArray, NSString, TBPLBaseLayer, TBPLViewConfigModel, TBPopLayerEvent, UIView, UIViewController;
@protocol TBPopLayerOperationDelegate;

@interface TBPopLayerOperation : NSObject <TBPopLayerTrackerDelegate>
{
    id <TBPopLayerOperationDelegate> _delegate;
    UIView *_specifiedView;
    UIViewController *_attachVC;
    TBPLBaseLayer *_masterLayer;
    TBPopLayerEvent *_event;
    TBPLViewConfigModel *_config;
    unsigned long long _totalTrackerCount;
    NSMutableArray *_activeTrackerArray;
    NSMutableArray *_inactiveTrackerArray;
}

@property(retain, nonatomic) NSMutableArray *inactiveTrackerArray; // @synthesize inactiveTrackerArray=_inactiveTrackerArray;
@property(retain, nonatomic) NSMutableArray *activeTrackerArray; // @synthesize activeTrackerArray=_activeTrackerArray;
@property(nonatomic) unsigned long long totalTrackerCount; // @synthesize totalTrackerCount=_totalTrackerCount;
@property(retain, nonatomic) TBPLViewConfigModel *config; // @synthesize config=_config;
@property(retain, nonatomic) TBPopLayerEvent *event; // @synthesize event=_event;
@property(nonatomic) __weak TBPLBaseLayer *masterLayer; // @synthesize masterLayer=_masterLayer;
@property(nonatomic) __weak UIViewController *attachVC; // @synthesize attachVC=_attachVC;
@property(retain, nonatomic) UIView *specifiedView; // @synthesize specifiedView=_specifiedView;
@property(nonatomic) __weak id <TBPopLayerOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trackerRequestUntrack:(id)arg1;
- (void)cancel;
- (void)operateTrackingView:(id)arg1;
- (id)getInfoForView:(id)arg1;
- (void)removeActiveTrackingViewFromTrackedView:(id)arg1;
- (void)createAndAddTrackingViewForTrackedView:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)untrack;
- (void)trackToTrackedViews:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)isOperationCompleted;
- (_Bool)checkIfReachedAndUpdateTotalTrackerCountWithCount:(unsigned long long)arg1;
- (unsigned long long)getActiveTrackerCount;
- (_Bool)isEmbeddedOperation;
- (_Bool)isOperationWithMasterLayer:(id)arg1 andOperationName:(id)arg2 andGroupId:(id)arg3;
- (_Bool)isOperationWithMasterLayer:(id)arg1 andOperationName:(id)arg2 andSelector:(id)arg3;
- (_Bool)isOperationWithMasterLayer:(id)arg1 andOperationName:(id)arg2 andTaskHandle:(id)arg3;
- (_Bool)isOperationWithOperationName:(id)arg1 andSelector:(id)arg2;
- (_Bool)isOperationWithSelector:(id)arg1;
- (_Bool)isOperationWithMasterLayer:(id)arg1 andOperationName:(id)arg2;
- (_Bool)isOperationWithMasterLayer:(id)arg1 andTaskHandle:(id)arg2;
- (_Bool)isOperationWithOperationName:(id)arg1;
- (_Bool)isOperationWithMasterLayer:(id)arg1;
- (_Bool)isOperationWithMsgName:(id)arg1;
- (id)getTrackingLayers;
- (id)taskHandle;
- (id)selector;
- (id)initOperationWithAttachVC:(id)arg1 masterLayer:(id)arg2 event:(id)arg3 config:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
