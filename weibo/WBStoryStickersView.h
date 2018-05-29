//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIImageView, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, WBStoryStickerNode;
@protocol WBStoryStickersViewDelegate;

@interface WBStoryStickersView : UIView <UIGestureRecognizerDelegate>
{
    NSMutableArray *_nodes;
    WBStoryStickerNode *_actionNode;
    UIImageView *_trashView;
    double _trashScale;
    double _screenScale;
    _Bool _vibrationPrepared;
    UIImpactFeedbackGenerator *_vibrationGenerator;
    struct {
        unsigned int isPanning:1;
        unsigned int isPinching:1;
        unsigned int isRotation:1;
        unsigned int needNewUserGuide:1;
    } _flags;
    _Bool _isIPhoneX;
    id <WBStoryStickersViewDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    UIImageView *_guideImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(nonatomic) _Bool isIPhoneX; // @synthesize isIPhoneX=_isIPhoneX;
@property(retain, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // @synthesize rotationGestureRecognizer=_rotationGestureRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) __weak id <WBStoryStickersViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)onTouch:(id)arg1 location:(struct CGPoint)arg2 searchArea:(long long)arg3 alphaThreshold:(long long)arg4;
- (id)theClosestNodeForGesture:(id)arg1;
- (_Bool)shouldFocusTextView:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (struct CGPoint)centerForTextView:(id)arg1;
- (struct CGSize)visibelSizeForView:(id)arg1;
- (_Bool)checkInTrash:(struct CGPoint)arg1;
- (void)trashViewLocation:(struct CGPoint)arg1;
- (void)vibrationImpactOccurred;
- (void)vibrationPrepared;
- (void)resetAnchorPointIfNeeded;
- (void)adjustAnchorPointForGestureRecognizer:(id)arg1;
- (void)unlock;
- (void)lock;
@property(readonly, nonatomic) _Bool isOperating;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleRotationGestureRecognizer:(id)arg1;
- (void)handlePinchGestureRecognizer:(id)arg1;
- (void)handlePanGestureRecognizer:(id)arg1;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)handleSwipGestureRecognizer:(id)arg1;
- (void)hideNewUserGuide;
- (void)showUserGuideIfNeeded;
- (void)clean;
- (_Bool)isEmpty;
- (_Bool)removeNode:(id)arg1;
- (_Bool)removeChild:(id)arg1;
- (_Bool)addChild:(id)arg1;
@property(readonly, nonatomic) NSArray *childs;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

