//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMediaEditActionController.h"

#import "KSMediaEditCancelable-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class KSEffectPreviewLoader, NSMutableArray, NSString, UICollectionView;
@protocol KSMTimeRange;

@interface KSMediaEditTimeEffectController : KSMediaEditActionController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, KSMediaEditCancelable>
{
    UICollectionView *_effectsView;
    CDUnknownBlockType _onError;
    double _timeEffectMaxDuration;
    NSMutableArray *_effects;
    unsigned long long _selectedIndex;
    KSEffectPreviewLoader *_previewLoader;
    id <KSMTimeRange> _previousRange;
    struct CGSize _itemSize;
}

@property(retain, nonatomic) id <KSMTimeRange> previousRange; // @synthesize previousRange=_previousRange;
@property(retain, nonatomic) KSEffectPreviewLoader *previewLoader; // @synthesize previewLoader=_previewLoader;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *effects; // @synthesize effects=_effects;
@property(readonly, nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) double timeEffectMaxDuration; // @synthesize timeEffectMaxDuration=_timeEffectMaxDuration;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
- (void).cxx_destruct;
- (void)cancelEditing;
- (void)finishEditing;
- (void)beginEditing;
- (void)_configEffects;
- (void)timeLineViewController:(id)arg1 didUpdateItemAtIndex:(unsigned long long)arg2;
- (void)timeLineViewController:(id)arg1 didAdjustStartTimeOfItemAtIndex:(unsigned long long)arg2 toNewValue:(double)arg3;
- (void)_showTimeEffectDurationTooLongAlert;
- (void)_cancelTimeEffect;
- (void)_addTimeEffect:(id)arg1;
- (double)timeLineViewController:(id)arg1 willAdjustStartTimeOfItemAtIndex:(unsigned long long)arg2 toNewValue:(double)arg3;
- (void)timeLineViewController:(id)arg1 didAdjustEndTimeOfItemAtIndex:(unsigned long long)arg2 toNewValue:(double)arg3;
- (double)timeLineViewController:(id)arg1 willAdjustEndTimeOfItemAtIndex:(unsigned long long)arg2 toNewValue:(double)arg3;
- (_Bool)timeLineViewController:(id)arg1 shouldEditItemAtIndex:(unsigned long long)arg2;
- (void)_updateCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateCellAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(readonly, nonatomic) UICollectionView *effectsView; // @synthesize effectsView=_effectsView;
- (id)actionsView;
- (id)createAdditionalAdapters;
- (void)startEdit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

