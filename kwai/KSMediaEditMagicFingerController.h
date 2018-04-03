//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMediaEditActionController.h"

#import "KSMediaEditCancelable-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class KSETouchEffectParam, KSExtensionButton, KSTimeLineRevealColorItem, NSArray, NSCache, NSMutableArray, NSObject, NSString, UICollectionView, UIImage, UIView, _KSMediaEditMagicFingerConflictState, _KSMediaEditMagicFingerTouchRecognizer;
@protocol OS_dispatch_queue;

@interface KSMediaEditMagicFingerController : KSMediaEditActionController <UICollectionViewDataSource, UICollectionViewDelegate, KSMediaEditCancelable>
{
    _Bool _effectsAnimationEnabled;
    NSArray *_items;
    double _widthPerSecond;
    UIView *_canvasView;
    UIImage *_itemBackgroundImage;
    CDUnknownBlockType _willStartAddMagicFinger;
    CDUnknownBlockType _willEndAddMagicFinger;
    UIView *_view;
    UICollectionView *_collectionView;
    _KSMediaEditMagicFingerTouchRecognizer *_panGestureRecognizer;
    KSExtensionButton *_undoButton;
    KSTimeLineRevealColorItem *_addingRevealItem;
    NSMutableArray *_effectStack;
    _KSMediaEditMagicFingerConflictState *_confilictState;
    KSETouchEffectParam *_previousTouchParam;
    NSMutableArray *_previousTouchDataArray;
    NSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;
    struct CGPoint _lastTouchPoint;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue; // @synthesize imageLoadingQueue=_imageLoadingQueue;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableArray *previousTouchDataArray; // @synthesize previousTouchDataArray=_previousTouchDataArray;
@property(retain, nonatomic) KSETouchEffectParam *previousTouchParam; // @synthesize previousTouchParam=_previousTouchParam;
@property(nonatomic) struct CGPoint lastTouchPoint; // @synthesize lastTouchPoint=_lastTouchPoint;
@property(retain, nonatomic) _KSMediaEditMagicFingerConflictState *confilictState; // @synthesize confilictState=_confilictState;
@property(retain, nonatomic) NSMutableArray *effectStack; // @synthesize effectStack=_effectStack;
@property(retain, nonatomic) KSTimeLineRevealColorItem *addingRevealItem; // @synthesize addingRevealItem=_addingRevealItem;
@property(retain, nonatomic) KSExtensionButton *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) _KSMediaEditMagicFingerTouchRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool effectsAnimationEnabled; // @synthesize effectsAnimationEnabled=_effectsAnimationEnabled;
@property(copy, nonatomic) CDUnknownBlockType willEndAddMagicFinger; // @synthesize willEndAddMagicFinger=_willEndAddMagicFinger;
@property(copy, nonatomic) CDUnknownBlockType willStartAddMagicFinger; // @synthesize willStartAddMagicFinger=_willStartAddMagicFinger;
@property(retain, nonatomic) UIImage *itemBackgroundImage; // @synthesize itemBackgroundImage=_itemBackgroundImage;
@property(retain, nonatomic) UIView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) double widthPerSecond; // @synthesize widthPerSecond=_widthPerSecond;
- (void).cxx_destruct;
- (void)_restoreTouchData;
- (void)_saveTouchData;
- (void)cancelEditing;
- (void)finishEditing;
- (void)beginEditing;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)actionsView;
- (void)startEdit;
- (void)_updateTimeline;
- (void)_endAddTimelineRevealItem;
- (void)_startAddTimelineRevealItem;
- (void)_rebuildEfffectStack;
- (void)_selectMagicFinger:(id)arg1;
- (struct KSAdvEditTimeLineSliderItemAdapter *)_sliderItemAdapterWithStart:(double)arg1 duration:(double)arg2 color:(id)arg3;
- (struct KSAdvEditTimeLineSliderStyle *)_styleWithColor:(id)arg1;
- (id)_selectedItem;
- (id)_fingerItemMatchType:(int)arg1;
- (void)_updateUndoButtonState;
- (void)_didRecognizePan:(id)arg1;
- (void)_endAddingMagicFingerAt:(struct CGPoint)arg1;
- (void)_moveMagicMagicFingerAt:(struct CGPoint)arg1;
- (void)_beginAddingMagicFingerAt:(struct CGPoint)arg1;
- (struct CGPoint)_normalizedPoint:(struct CGPoint)arg1;
- (void)_undo:(id)arg1;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

