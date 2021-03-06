//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "KSPreviewEffectSwitchableControlDelegate-Protocol.h"

@class KSCachedImageArray, KSInvocationBroadcastGroup, KSLongPictureOperationContextQueue, KSMediaOperationContext, NSMutableDictionary, NSNumber, NSString, _KSPreviewEffectSwitchableControlTitleContainerView;

@interface KSLongPictureTableViewController : UITableViewController <KSPreviewEffectSwitchableControlDelegate>
{
    NSNumber *_currentFilterValue;
    CDUnknownBlockType _titleForCurrentActivatedFilterEffect;
    KSMediaOperationContext *_context;
    CDUnknownBlockType _onSwitchEffect;
    KSCachedImageArray *_pictures;
    KSInvocationBroadcastGroup *_controlGroup;
    KSInvocationBroadcastGroup *_contextGroup;
    NSMutableDictionary *_heightCache;
    KSLongPictureOperationContextQueue *_contextQueue;
    NSNumber *_currentFilterIndex;
    _KSPreviewEffectSwitchableControlTitleContainerView *_titleContainerView;
}

@property(retain, nonatomic) _KSPreviewEffectSwitchableControlTitleContainerView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) NSNumber *currentFilterIndex; // @synthesize currentFilterIndex=_currentFilterIndex;
@property(retain, nonatomic) KSLongPictureOperationContextQueue *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(retain, nonatomic) NSMutableDictionary *heightCache; // @synthesize heightCache=_heightCache;
@property(retain, nonatomic) KSInvocationBroadcastGroup *contextGroup; // @synthesize contextGroup=_contextGroup;
@property(retain, nonatomic) KSInvocationBroadcastGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(retain, nonatomic) KSCachedImageArray *pictures; // @synthesize pictures=_pictures;
@property(copy, nonatomic) CDUnknownBlockType onSwitchEffect; // @synthesize onSwitchEffect=_onSwitchEffect;
@property(retain, nonatomic) KSMediaOperationContext *context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType titleForCurrentActivatedFilterEffect; // @synthesize titleForCurrentActivatedFilterEffect=_titleForCurrentActivatedFilterEffect;
@property(retain, nonatomic) NSNumber *currentFilterValue; // @synthesize currentFilterValue=_currentFilterValue;
- (void).cxx_destruct;
- (id)currentTitleForSwitchableControl:(id)arg1;
- (void)refreshVisableCells;
- (id)displayingFilterEffectWithPickingEffect:(id)arg1;
- (void)updateCellSwipable;
- (void)activateEffect:(id)arg1;
- (struct CGSize)sizeOfTargetImage:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPictures:(id)arg1 previewContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

