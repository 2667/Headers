//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, NSIndexPath, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView;
@protocol WBSlideShowReorderableCollectionViewDataSource, WBSlideShowReorderableCollectionViewDelegateFlowLayout;

@interface WBSlideShowCollectionViewReorderableLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate>
{
    _Bool _enableHighlighted;
    double _scrollingSpeed;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSIndexPath *_selectedItemIndexPath;
    CADisplayLink *_displayLink;
    UIView *_currentView;
    struct CGPoint _currentViewCenter;
    struct CGPoint _panTranslationInCollectionView;
    struct UIEdgeInsets _scrollingTriggerEdgeInsets;
}

@property(nonatomic) struct CGPoint panTranslationInCollectionView; // @synthesize panTranslationInCollectionView=_panTranslationInCollectionView;
@property(nonatomic) struct CGPoint currentViewCenter; // @synthesize currentViewCenter=_currentViewCenter;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSIndexPath *selectedItemIndexPath; // @synthesize selectedItemIndexPath=_selectedItemIndexPath;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) _Bool enableHighlighted; // @synthesize enableHighlighted=_enableHighlighted;
@property(nonatomic) struct UIEdgeInsets scrollingTriggerEdgeInsets; // @synthesize scrollingTriggerEdgeInsets=_scrollingTriggerEdgeInsets;
@property(nonatomic) double scrollingSpeed; // @synthesize scrollingSpeed=_scrollingSpeed;
- (void).cxx_destruct;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleScroll:(id)arg1;
- (void)setupScrollTimerInDirection:(long long)arg1;
- (void)invalidatesScrollTimer;
- (void)invalidateLayoutIfNecessary;
@property(readonly, nonatomic) id <WBSlideShowReorderableCollectionViewDelegateFlowLayout> delegate;
@property(readonly, nonatomic) id <WBSlideShowReorderableCollectionViewDataSource> dataSource;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)tearDownCollectionView;
- (void)setupCollectionView;
- (void)setDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

