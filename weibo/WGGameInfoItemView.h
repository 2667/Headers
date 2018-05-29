//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SDWGTableView, WGGameDetailsModel;
@protocol WGGameInfoItemDataSource, WGGameInfoItemDelegate;

@interface WGGameInfoItemView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _shouldLoadMore;
    _Bool _isLoadMore;
    NSString *_itemTitle;
    NSString *_appkey;
    WGGameDetailsModel *_model;
    id <WGGameInfoItemDataSource> _dataSource;
    id <WGGameInfoItemDelegate> _delegate;
    SDWGTableView *_innerTableView;
}

@property(nonatomic) __weak SDWGTableView *innerTableView; // @synthesize innerTableView=_innerTableView;
@property(nonatomic) __weak id <WGGameInfoItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WGGameInfoItemDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) WGGameDetailsModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isLoadMore; // @synthesize isLoadMore=_isLoadMore;
@property(nonatomic) _Bool shouldLoadMore; // @synthesize shouldLoadMore=_shouldLoadMore;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(readonly, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)stopScrollFinallyWithScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)loadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)layoutSubviews;
- (id)tableHeadView;
@property(readonly, nonatomic) SDWGTableView *tableView;
- (void)loadData;
- (void)willDealloc;
- (void)config;
- (void)initSubView;
- (id)initWithAppkey:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

