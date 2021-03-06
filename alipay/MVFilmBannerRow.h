//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVTableRow.h"

#import "MVCycleScrollViewDataSource-Protocol.h"
#import "MVCycleScrollViewDelegate-Protocol.h"

@class MVFilmBannerCell, NSArray, NSString;

@interface MVFilmBannerRow : MVTableRow <MVCycleScrollViewDataSource, MVCycleScrollViewDelegate>
{
    int _bannerType;
    _Bool _isShowBottomLine;
    _Bool _isContentBanner;
    NSArray *_bannerList;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _closeBlock;
    double _bannerHeight;
    MVFilmBannerCell *_cell;
}

@property(nonatomic) __weak MVFilmBannerCell *cell; // @synthesize cell=_cell;
@property(nonatomic) _Bool isContentBanner; // @synthesize isContentBanner=_isContentBanner;
@property(nonatomic) _Bool isShowBottomLine; // @synthesize isShowBottomLine=_isShowBottomLine;
@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) NSArray *bannerList; // @synthesize bannerList=_bannerList;
- (void).cxx_destruct;
- (void)enableAutoScrollEvent;
- (void)cancelAutoScrollEvent;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)pageControlValueChanged:(id)arg1;
- (void)bannerClosedTouched:(id)arg1;
- (void)bannerPageTouched:(id)arg1;
- (void)scrollView:(id)arg1 didScrollFromPage:(long long)arg2 toPage:(long long)arg3;
- (id)scrollView:(id)arg1 viewAtPage:(long long)arg2;
- (long long)numberOfPagesInScrollView:(id)arg1;
- (double)cellHeight;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

