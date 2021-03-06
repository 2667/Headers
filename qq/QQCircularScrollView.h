//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol QQCircularScrollViewDataSource;

@interface QQCircularScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _initOnce;
    long long _currentIndex;
    NSMutableArray *_visibleCells;
    NSMutableArray *_cellReusableQueue;
    int _style;
    id <QQCircularScrollViewDataSource> _dataSource;
}

@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <QQCircularScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (long long)currentDisplayIndex;
- (id)cellAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)placeNewCellOnUpOrLeft:(struct CGPoint)arg1;
- (struct CGPoint)placeNewCellOnDownOrRight:(struct CGPoint)arg1;
- (id)insertCellWithIndex:(long long)arg1;
- (void)tileCells;
- (void)layoutSubviews;
- (void)recenterIfNecessary;
- (void)reloadData;
- (void)scrollToNext;
- (void)jumpToIndex:(long long)arg1 animate:(_Bool)arg2;
- (id)dequeueReusableCell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (void)initialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

