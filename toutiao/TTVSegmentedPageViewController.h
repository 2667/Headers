//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVBaseViewController.h"

#import "TTVSegmentedControlDelegate-Protocol.h"
#import "TTVSegmentedPageViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSString, UIScrollView;
@protocol TTVSegmentedControl, TTVSegmentedPageViewDelegate;

@interface TTVSegmentedPageViewController : TTVBaseViewController <TTVSegmentedControlDelegate, UIScrollViewDelegate, TTVSegmentedPageViewDelegate>
{
    _Bool _isMovingForward;
    _Bool _rightPopAllowed;
    NSArray *_viewControllers;
    UIScrollView *_pageScrollView;
    unsigned long long _currentPageIndex;
    id <TTVSegmentedControl> _segmentedControl;
    id <TTVSegmentedPageViewDelegate> _pageDelegate;
    unsigned long long _previousPageIndex;
    double _previousContentOffset;
    NSMutableSet *_visiblePages;
    long long _firstVisiblePageIndex;
    long long _lastVisiblePageIndex;
    unsigned long long _pagesToPreload;
    struct CGRect _viewFrame;
}

@property(nonatomic) unsigned long long pagesToPreload; // @synthesize pagesToPreload=_pagesToPreload;
@property(nonatomic) long long lastVisiblePageIndex; // @synthesize lastVisiblePageIndex=_lastVisiblePageIndex;
@property(nonatomic) long long firstVisiblePageIndex; // @synthesize firstVisiblePageIndex=_firstVisiblePageIndex;
@property(retain, nonatomic) NSMutableSet *visiblePages; // @synthesize visiblePages=_visiblePages;
@property(nonatomic) double previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;
@property(nonatomic) unsigned long long previousPageIndex; // @synthesize previousPageIndex=_previousPageIndex;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(nonatomic) _Bool rightPopAllowed; // @synthesize rightPopAllowed=_rightPopAllowed;
@property(nonatomic) __weak id <TTVSegmentedPageViewDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
@property(readonly, nonatomic) id <TTVSegmentedControl> segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) _Bool isMovingForward; // @synthesize isMovingForward=_isMovingForward;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(readonly, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)viewControllerDidBecomeInvisible:(id)arg1 isSwiping:(_Bool)arg2;
- (void)viewControllerDidBecomeVisible:(id)arg1 firstAppear:(_Bool)arg2 isSwiping:(_Bool)arg3;
- (void)segmentedControllDidBeginSnapingToIndex:(unsigned long long)arg1 withDuration:(double)arg2;
- (void)segmentedControllDidDragWithNormalizedOffset:(double)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configurePages;
- (void)configurePage:(id)arg1 forIndex:(long long)arg2;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (id)viewControllerForPageAtIndex:(unsigned long long)arg1;
- (id)viewForVisiblePageAtIndex:(unsigned long long)arg1;
- (void)segmentedControllEndMovingWithScollView:(id)arg1;
- (void)switchToPageIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 segmentedControl:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
