//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SSThemedScrollView, UIColor;

@interface TTUGCPageControl : SSThemedView <UIScrollViewDelegate>
{
    _Bool _animationState;
    UIColor *_currentPageIndicatorTintColor;
    UIColor *_pageIndicatorTintColor;
    unsigned long long _numberOfPages;
    unsigned long long _currentPage;
    unsigned long long _willScrollToPage;
    SSThemedScrollView *_scrollView;
    NSMutableArray *_reuseSubviews;
}

@property(retain, nonatomic) NSMutableArray *reuseSubviews; // @synthesize reuseSubviews=_reuseSubviews;
@property(nonatomic) _Bool animationState; // @synthesize animationState=_animationState;
@property(retain, nonatomic) SSThemedScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long willScrollToPage; // @synthesize willScrollToPage=_willScrollToPage;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateSubviewState:(id)arg1 currentPage:(long long)arg2;
- (void)dealloc;
- (id)initWithNumberOfPages:(unsigned long long)arg1 currentPage:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
