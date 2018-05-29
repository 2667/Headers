//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, UIScrollView;

@interface TTFScrollTextView : UIView <UIScrollViewDelegate>
{
    NSArray *_titleArray;
    double _refreshInteval;
    UIScrollView *_scrollView;
    NSArray *_titleLabels;
    NSArray *_recycleBufferLabels;
    NSTimer *_timer;
    long long _page;
}

@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSArray *recycleBufferLabels; // @synthesize recycleBufferLabels=_recycleBufferLabels;
@property(copy, nonatomic) NSArray *titleLabels; // @synthesize titleLabels=_titleLabels;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double refreshInteval; // @synthesize refreshInteval=_refreshInteval;
@property(copy, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
- (void).cxx_destruct;
- (void)removeTimer;
- (void)addTimer;
- (void)nextPage;
- (void)layoutSubviews;
- (void)initUIComponents;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

